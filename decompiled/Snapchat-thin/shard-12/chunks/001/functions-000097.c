/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d8b994; end: 108d8bc57;  */

long FUN_108d8b994(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lStack_68;
  uint uStack_5c;
  long lStack_58;
  
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  lStack_58 = 0;
  lVar8 = *(long *)(param_1 + 8);
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar9 = 0x106;
    goto LAB_108d8bbf0;
  }
  lVar9 = lVar8;
  func_0x000108d7be68(lVar8,param_2,&lStack_58,0);
  if ((int)lVar9 != 0) goto LAB_108d8bbf0;
  lVar9 = param_1;
  FUN_108d8bcb0(param_1,param_2,0);
  lVar4 = lStack_58;
  if ((int)lVar9 == 0) {
    *param_3 = 0;
    if ((uint)param_2 < 2) {
      FUN_108d7c870(lStack_58,9);
      if (lVar4 != 0) {
        func_0x000108d787d8(*(undefined8 *)(lVar4 + 0x68));
      }
      lVar9 = 0;
      goto LAB_108d8bbf0;
    }
    if (*(char *)(lVar8 + 0x21) != '\0') {
      FUN_108d615f0(param_1,4,&uStack_5c);
      lVar4 = lStack_58;
      if ((uint)param_2 == uStack_5c) {
        lVar9 = *(long *)(lStack_58 + 0x48);
        FUN_108d90b7c(lVar9,lStack_58,*(undefined4 *)(lStack_58 + 0x70));
        func_0x000108d787d8(*(undefined8 *)(lVar4 + 0x68));
        if ((int)lVar9 != 0) goto LAB_108d8bbf0;
      }
      else {
        if (lStack_58 != 0) {
          func_0x000108d787d8(*(undefined8 *)(lStack_58 + 0x68));
        }
        lVar9 = lVar8;
        func_0x000108d7be68(lVar8,uStack_5c,&lStack_68,0);
        lVar4 = lStack_68;
        if ((int)lVar9 != 0) goto LAB_108d8bbf0;
        lVar9 = lVar8;
        func_0x000108d80254(lVar8,lStack_68,1,0,param_2,0);
        if (lVar4 != 0) {
          func_0x000108d787d8(*(undefined8 *)(lVar4 + 0x68));
        }
        if ((int)lVar9 != 0) goto LAB_108d8bbf0;
        lStack_68 = 0;
        lVar9 = lVar8;
        func_0x000108d7be68(lVar8,uStack_5c,&lStack_68,0);
        lVar4 = lStack_68;
        if ((int)lVar9 != 0) {
          if (lStack_68 == 0) goto LAB_108d8bbf0;
          uVar5 = *(undefined8 *)(lStack_68 + 0x68);
          goto LAB_108d8ba38;
        }
        lVar9 = *(long *)(lStack_68 + 0x48);
        FUN_108d90b7c(lVar9,lStack_68,*(undefined4 *)(lStack_68 + 0x70));
        func_0x000108d787d8(*(undefined8 *)(lVar4 + 0x68));
        if ((int)lVar9 != 0) goto LAB_108d8bbf0;
        *param_3 = uStack_5c;
      }
      uVar2 = 0;
      if (*(uint *)(lVar8 + 0x34) != 0) {
        uVar2 = uRam0000000113298da4 / *(uint *)(lVar8 + 0x34);
      }
      do {
        do {
          uVar7 = uStack_5c;
          uStack_5c = uVar7 - 1;
        } while ((-2 - uVar2) + uStack_5c == -1);
        if (uStack_5c < 2) {
          uVar7 = 0;
        }
        else {
          uVar1 = *(uint *)(lVar8 + 0x38) / 5 + 1;
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = (uVar7 - 3) / uVar1;
          }
          iVar6 = 2;
          if (uVar3 * uVar1 + 1 == uVar2) {
            iVar6 = 3;
          }
          uVar7 = iVar6 + uVar3 * uVar1;
        }
      } while (uStack_5c == uVar7);
      lVar9 = param_1;
      FUN_108d616a8(param_1,4);
      goto LAB_108d8bbf0;
    }
    lVar9 = *(long *)(lStack_58 + 0x48);
    FUN_108d90b7c(lVar9,lStack_58,*(undefined4 *)(lStack_58 + 0x70));
    uVar5 = *(undefined8 *)(lVar4 + 0x68);
  }
  else {
    if (lStack_58 == 0) goto LAB_108d8bbf0;
    uVar5 = *(undefined8 *)(lStack_58 + 0x68);
  }
LAB_108d8ba38:
  func_0x000108d787d8(uVar5);
LAB_108d8bbf0:
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar6 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_108d7f5fc(param_1);
  }
  return lVar9;
}



/* Entry: 108d8bc58; end: 108d8bcaf;  */

void FUN_108d8bc58(long param_1,int param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + (long)param_2 * 0x20 + 0x18);
  for (plVar2 = *(long **)(lVar1 + 0x10); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    if (*(int *)(plVar2[2] + 0x38) == param_3) {
      *(undefined4 *)(plVar2[2] + 0x38) = param_4;
    }
  }
  for (plVar2 = *(long **)(lVar1 + 0x28); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    if (*(int *)(plVar2[2] + 0x50) == param_3) {
      *(undefined4 *)(plVar2[2] + 0x50) = param_4;
    }
  }
  return;
}



/* Entry: 108d8bcb0; end: 108d8bd7b;  */

long FUN_108d8bcb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
    }
  }
  lVar2 = *(long *)(lVar3 + 0x10);
  FUN_108d7ca08(lVar2,param_2,0);
  if ((int)lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    while (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0x6c) >> 4 & 1) != 0) {
        *(undefined1 *)(lVar2 + 0x6d) = 0;
      }
    }
    FUN_108d93180(lVar3,param_2,0,param_3);
    lVar2 = lVar3;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_108d7f5fc(param_1);
    }
  }
  return lVar2;
}



/* Entry: 108d8bd7c; end: 108d8c047;  */

void FUN_108d8bd7c(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  lVar9 = *param_1;
  iVar3 = (int)param_1[2];
  lVar5 = *(long *)(lVar9 + 0x20);
  lVar6 = *(long *)(lVar5 + (long)iVar3 * 0x20 + 0x18);
  *(ushort *)(lVar6 + 0x72) = *(ushort *)(lVar6 + 0x72) & 0xfffb;
  if (*(char *)(lVar9 + 0x51) != '\0') {
    FUN_108d93360(param_1,*param_3,0);
    return;
  }
  if (param_3 == (long *)0x0) {
    return;
  }
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    lVar6 = *param_3;
  }
  else {
    pcVar10 = (char *)param_3[2];
    if (pcVar10 != (char *)0x0) {
      lVar7 = 0;
      do {
        if ((ulong)(byte)pcVar10[lVar7] == 0) {
          cVar2 = (&UNK_10dfa05fd)[(byte)(&UNK_10f518322)[lVar7]];
          cVar8 = '\0';
LAB_108d8be8c:
          if (cVar8 != cVar2) {
            lVar6 = *param_3;
            if ((lVar6 == 0) || (lVar7 = lVar6, *pcVar10 != '\0')) goto LAB_108d8be30;
            goto LAB_108d8be48;
          }
          break;
        }
        cVar8 = (&UNK_10dfa05fd)[(byte)pcVar10[lVar7]];
        cVar2 = (&UNK_10dfa05fd)[(byte)(&UNK_10f518322)[lVar7]];
        if (cVar8 != cVar2) goto LAB_108d8be8c;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 7);
      *(char *)(lVar9 + 0xa0) = (char)iVar3;
      uStack_34 = 0;
      FUN_108d934c8(lVar6,&uStack_34);
      *(undefined4 *)(lVar9 + 0x9c) = uStack_34;
      *(undefined1 *)(lVar9 + 0xa2) = 0;
      FUN_108d6c278(lVar9,pcVar10,0xffffffff,0,0,&uStack_40,0);
      uVar1 = *(uint *)(lVar9 + 0x44);
      *(undefined1 *)(lVar9 + 0xa0) = 0;
      if (((uVar1 != 0) && (*(char *)(lVar9 + 0xa2) == '\0')) &&
         (*(uint *)((long)param_1 + 0x14) = uVar1, uVar1 != 9)) {
        if (uVar1 == 7) {
          *(undefined1 *)(lVar9 + 0x51) = 1;
        }
        else if ((uVar1 & 0xff) != 6) {
          lVar5 = *param_3;
          FUN_108d6ba4c(lVar9);
          FUN_108d93360(param_1,lVar5,lVar9);
        }
      }
      FUN_108d67440(uStack_40);
      return;
    }
    lVar6 = 0;
    lVar7 = *param_3;
    if (*param_3 != 0) {
LAB_108d8be48:
      FUN_108d93428(lVar9,lVar7,*(undefined8 *)(lVar5 + (long)iVar3 * 0x20));
      if (lVar9 == 0) {
        return;
      }
      lVar5 = param_3[1];
      FUN_108d934c8(lVar5,lVar9 + 0x50);
      if ((int)lVar5 != 0) {
        return;
      }
      lVar6 = *param_3;
      puVar4 = &UNK_10f51832a;
      goto LAB_108d8be38;
    }
  }
LAB_108d8be30:
  puVar4 = (undefined *)0x0;
LAB_108d8be38:
  FUN_108d93360(param_1,lVar6,puVar4);
  return;
}



/* Entry: 108d8c048; end: 108d8c1db;  */

void FUN_108d8c048(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)param_2 * 0x20 + 0x18) + 8;
  FUN_108d93af0(lVar1,param_3,0);
  FUN_108d62864(param_1,lVar1);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 2;
  return;
}



/* Entry: 108d8c1dc; end: 108d8c5f3;  */

void FUN_108d8c1dc(long param_1,int *param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  uint uStack_120;
  int iStack_11c;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined1 auStack_d4 [100];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = *(long **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  lStack_130 = *plVar13;
  iVar1 = *(int *)(*(long *)(lStack_130 + 0x130) + 0x18);
  uVar15 = *(uint *)(plVar13 + 8);
  puStack_110 = (undefined *)0x0;
  uStack_108 = 0;
  uStack_118 = 0;
  *param_5 = 0;
  plStack_138 = plVar13;
  uStack_120 = uVar15;
  iStack_11c = param_4;
  if (uVar15 != 0) {
    lVar5 = (ulong)(uVar15 >> 3) + 1;
    func_0x000108d65d8c();
    lStack_128 = lVar5;
    if (lVar5 != 0) {
      uVar2 = 0;
      if (*(uint *)((long)plVar13 + 0x34) != 0) {
        uVar2 = uRam0000000113298da4 / *(uint *)((long)plVar13 + 0x34);
      }
      uVar2 = uVar2 + 1;
      if (uVar2 <= uVar15) {
        *(byte *)(lVar5 + (ulong)(uVar2 >> 3)) =
             *(byte *)(lVar5 + (ulong)(uVar2 >> 3)) | (byte)(1 << (ulong)(uVar2 & 7));
      }
      puStack_f8 = auStack_d4;
      uStack_e8 = 0x6400000000;
      uStack_e0 = 1000000000;
      uStack_dc = 0;
      uStack_100 = 0;
      puStack_110 = &UNK_10f5183b9;
      uVar15 = *(uint *)(*(long *)(plVar13[3] + 0x50) + 0x20);
      uVar2 = *(uint *)(*(long *)(plVar13[3] + 0x50) + 0x24);
      uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      puStack_f0 = puStack_f8;
      FUN_108d941a0(&plStack_138,1,uVar15 >> 0x10 | uVar15 << 0x10,uVar2 >> 0x10 | uVar2 << 0x10);
      iVar14 = iStack_11c;
      if ((0 < (int)param_3) && (iStack_11c != 0)) {
        uVar12 = 1;
        do {
          puStack_110 = (undefined *)0x0;
          iVar8 = *param_2;
          if (iVar8 != 0) {
            if (1 < iVar8 && *(char *)((long)plVar13 + 0x21) != '\0') {
              FUN_108d943b0(&plStack_138,iVar8,1,0);
              iVar8 = *param_2;
            }
            puStack_110 = &UNK_10f5183c9;
            FUN_108d94450(&plStack_138,iVar8,0,0);
            iVar14 = iStack_11c;
          }
          if (param_3 <= uVar12) break;
          uVar12 = uVar12 + 1;
          param_2 = param_2 + 1;
        } while (iVar14 != 0);
      }
      puStack_110 = (undefined *)0x0;
      if (uStack_120 != 0 && iVar14 != 0) {
        uVar15 = 0xffffffff;
        do {
          uVar2 = uVar15 + 2;
          uVar10 = 1 << (ulong)(uVar2 & 7);
          if ((uVar10 & *(byte *)(lStack_128 + (ulong)(uVar2 >> 3))) == 0) {
            if (uVar2 < 2) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(uint *)(plVar13 + 7) / 5 + 1;
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar15 / uVar9;
              }
              uVar3 = 0;
              if (*(uint *)((long)plVar13 + 0x34) != 0) {
                uVar3 = uRam0000000113298da4 / *(uint *)((long)plVar13 + 0x34);
              }
              iVar14 = 2;
              if (uVar4 * uVar9 + 1 == uVar3) {
                iVar14 = 3;
              }
              uVar9 = iVar14 + uVar4 * uVar9;
            }
            if (((uVar2 != uVar9) || (*(char *)((long)plVar13 + 0x21) == '\0')) &&
               (FUN_108d94b14(&plStack_138,&UNK_10f5183de),
               (uVar10 & *(byte *)(lStack_128 + (ulong)(uVar2 >> 3))) != 0)) goto LAB_108d8c450;
          }
          else {
LAB_108d8c450:
            if (uVar2 < 2) {
              uVar10 = 0;
            }
            else {
              uVar10 = *(uint *)(plVar13 + 7) / 5 + 1;
              uVar9 = 0;
              if (uVar10 != 0) {
                uVar9 = uVar15 / uVar10;
              }
              uVar4 = 0;
              if (*(uint *)((long)plVar13 + 0x34) != 0) {
                uVar4 = uRam0000000113298da4 / *(uint *)((long)plVar13 + 0x34);
              }
              iVar14 = 2;
              if (uVar9 * uVar10 + 1 == uVar4) {
                iVar14 = 3;
              }
              uVar10 = iVar14 + uVar9 * uVar10;
            }
            if ((uVar2 == uVar10) && (*(char *)((long)plVar13 + 0x21) != '\0')) {
              FUN_108d94b14(&plStack_138,&UNK_10f5183f4);
            }
          }
        } while ((uVar15 + 3 <= uStack_120) && (uVar15 = uVar15 + 1, iStack_11c != 0));
      }
      if (iVar1 != *(int *)(*(long *)(*plVar13 + 0x130) + 0x18)) {
        FUN_108d94b14(&plStack_138,&UNK_10f518416);
      }
      if ((*(char *)(param_1 + 0x11) != '\0') &&
         (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
        FUN_108d7f5fc(param_1);
      }
      func_0x000108d5e198(lStack_128);
      if (uStack_118._4_4_ == 0) {
        *param_5 = (int)uStack_118;
        if ((int)uStack_118 == 0) {
          if (puStack_f0 != puStack_f8) {
            func_0x000108d60660(uStack_100);
          }
          puStack_f0 = (undefined1 *)0x0;
        }
        puVar6 = &uStack_100;
        FUN_108d64afc();
      }
      else {
        if (puStack_f0 != puStack_f8) {
          func_0x000108d60660(uStack_100);
        }
        puVar6 = (undefined8 *)0x0;
        *param_5 = (int)uStack_118 + 1;
      }
      goto LAB_108d8c584;
    }
    *param_5 = 1;
  }
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_108d7f5fc(param_1);
  }
  puVar6 = (undefined8 *)0x0;
LAB_108d8c584:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = (undefined8 *)puVar6[5];
  if (((*(ushort *)(puVar6 + 1) & 0x2460) != 0) || (*(int *)(puVar6 + 4) != 0)) {
    FUN_108d826d0(puVar6);
  }
  puVar7 = puVar11;
  FUN_108d6a6fc(puVar11,0x40);
  puVar6[3] = puVar7;
  if (*(char *)((long)puVar11 + 0x51) == '\0') {
    if ((puVar7 < (undefined8 *)puVar11[0x2e]) || ((undefined8 *)puVar11[0x2f] <= puVar7)) {
      (*pcRam0000000113297950)();
      uVar15 = (uint)puVar7;
      puVar7 = (undefined8 *)puVar6[3];
    }
    else {
      uVar15 = (uint)*(ushort *)(puVar11 + 0x2a);
    }
    *(uint *)(puVar6 + 4) = uVar15;
    *puVar7 = 0;
    puVar7[1] = puVar11;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = puVar7 + 7;
    puVar7[5] = 0;
    *(short *)(puVar7 + 6) = (short)(((ulong)uVar15 - 0x38) / 0x18);
    *(undefined2 *)((long)puVar7 + 0x32) = 1;
    *(undefined4 *)((long)puVar7 + 0x34) = 0;
    *puVar6 = puVar7;
    *(undefined2 *)(puVar6 + 1) = 0x20;
  }
  else {
    *(undefined2 *)(puVar6 + 1) = 1;
    *(undefined4 *)(puVar6 + 4) = 0;
  }
  return;
}



/* Entry: 108d8c5f4; end: 108d8c7a7;  */

void FUN_108d8c5f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[5];
  if (((*(ushort *)(param_1 + 1) & 0x2460) != 0) || (*(int *)(param_1 + 4) != 0)) {
    FUN_108d826d0(param_1);
  }
  puVar1 = puVar3;
  FUN_108d6a6fc(puVar3,0x40);
  param_1[3] = puVar1;
  if (*(char *)((long)puVar3 + 0x51) == '\0') {
    if ((puVar1 < (undefined8 *)puVar3[0x2e]) || ((undefined8 *)puVar3[0x2f] <= puVar1)) {
      (*pcRam0000000113297950)();
      uVar2 = (uint)puVar1;
      puVar1 = (undefined8 *)param_1[3];
    }
    else {
      uVar2 = (uint)*(ushort *)(puVar3 + 0x2a);
    }
    *(uint *)(param_1 + 4) = uVar2;
    *puVar1 = 0;
    puVar1[1] = puVar3;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = puVar1 + 7;
    puVar1[5] = 0;
    *(short *)(puVar1 + 6) = (short)(((ulong)uVar2 - 0x38) / 0x18);
    *(undefined2 *)((long)puVar1 + 0x32) = 1;
    *(undefined4 *)((long)puVar1 + 0x34) = 0;
    *param_1 = puVar1;
    *(undefined2 *)(param_1 + 1) = 0x20;
  }
  else {
    *(undefined2 *)(param_1 + 1) = 1;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



/* Entry: 108d8c7a8; end: 108d8c8df;  */

undefined8 FUN_108d8c7a8(undefined8 *param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  if (param_2 != *(int *)((long)param_1 + 0x34)) {
    lVar5 = param_1[2];
    if (lVar5 != 0) {
      puVar6 = param_1 + 5;
      if ((*(ushort *)((long)param_1 + 0x32) & 1) == 0) {
        FUN_108d94da0();
      }
      puVar1 = (undefined8 *)*puVar6;
      lVar4 = lVar5;
      if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
        do {
          puVar2 = puVar1;
          lVar5 = lVar4;
          if (puVar2[2] == 0) goto LAB_108d8c858;
          func_0x000108d94f98(puVar2[2],&lStack_58,auStack_60);
          puVar2[2] = 0;
          lVar5 = lStack_58;
          FUN_108d94e9c(lStack_58,lVar4);
          puVar1 = (undefined8 *)puVar2[1];
          lVar4 = lVar5;
        } while ((undefined8 *)puVar2[1] != (undefined8 *)0x0);
        puVar6 = puVar2 + 1;
      }
      puVar2 = param_1;
      FUN_108d94d40();
      *puVar6 = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
LAB_108d8c858:
        func_0x000108d94f2c();
        puVar2[2] = lVar5;
      }
      param_1[2] = 0;
      param_1[3] = 0;
      *(ushort *)((long)param_1 + 0x32) = *(ushort *)((long)param_1 + 0x32) | 1;
    }
    *(int *)((long)param_1 + 0x34) = param_2;
  }
  lVar5 = param_1[5];
  do {
    if (lVar5 == 0) {
      return 0;
    }
    for (plVar3 = *(long **)(lVar5 + 0x10); plVar3 != (long *)0x0;
        plVar3 = *(long **)((long)plVar3 + lVar4)) {
      if (*plVar3 < param_3) {
        lVar4 = 8;
      }
      else {
        if (*plVar3 <= param_3) {
          return 1;
        }
        lVar4 = 0x10;
      }
    }
    lVar5 = *(long *)(lVar5 + 8);
  } while( true );
}



/* Entry: 108d8c8e0; end: 108d8caeb;  */

void FUN_108d8c8e0(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iStack_24;
  
  if (param_1[0x27] == 0) {
    iStack_24 = 0;
    plVar2 = param_1;
    FUN_108d7c17c(param_1,1);
    if ((int)plVar2 != 0) {
      return;
    }
    lVar3 = *param_1;
    (**(code **)(lVar3 + 0x38))(lVar3,param_1[0x28],0,&iStack_24);
    iVar1 = (int)lVar3;
    if (iVar1 == 0 && iStack_24 != 0) {
      plVar2 = param_1;
      func_0x000108d7c6a8();
      iVar1 = (int)plVar2;
    }
    if (iVar1 != 0) {
      return;
    }
    if (param_1[0x27] == 0) {
      return;
    }
  }
  plVar2 = param_1;
  FUN_108d7c80c();
  if ((int)plVar2 == 0) {
    FUN_108d7a020(param_1[0x27],*(undefined1 *)((long)param_1 + 0xd),
                  *(undefined4 *)((long)param_1 + 0xbc),param_1[0x25]);
    param_1[0x27] = 0;
  }
  return;
}



/* Entry: 108d8caec; end: 108d8cec3;  */

long FUN_108d8caec(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 uVar17;
  int iStack_74;
  
  if (*(char *)(param_2 + 0x4f) == '\0') {
    puVar7 = &UNK_10f51879f;
LAB_108d8cb40:
    func_0x000108d7163c(param_1,param_2,puVar7);
    return 1;
  }
  if (1 < *(int *)(param_2 + 0xa4)) {
    puVar7 = &UNK_10f5187c7;
    goto LAB_108d8cb40;
  }
  uVar17 = *(undefined8 *)(param_2 + 0x60);
  uVar14 = *(undefined8 *)(param_2 + 200);
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(uint *)(param_2 + 0x2c);
  *(uint *)(param_2 + 0x2c) = uVar2 & 0xffd5d7ff | 0x202800;
  *(undefined8 *)(param_2 + 200) = 0;
  lVar11 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  cVar3 = *(char *)(**(long **)(lVar11 + 8) + 0x13);
  puVar7 = &UNK_10f5187f2;
  if (*(char *)(param_2 + 0x50) != '\x02') {
    puVar7 = &UNK_10f518812;
  }
  lVar8 = param_2;
  func_0x000108d95068(param_2,param_1,puVar7);
  lVar15 = 0;
  iVar4 = *(int *)(param_2 + 0x28);
  if (iVar1 < iVar4) {
    lVar15 = *(long *)(param_2 + 0x20) + (long)iVar4 * 0x20 + -0x20;
  }
  if ((int)lVar8 != 0) goto LAB_108d8cc8c;
  lVar13 = *(long *)(*(long *)(param_2 + 0x20) + (long)iVar4 * 0x20 + -0x18);
  FUN_108d5fff4(lVar13);
  lVar6 = lVar11;
  FUN_108d7f634(lVar11);
  if (*(int *)(param_2 + 0x58) != 0) {
    lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    if (lVar8 == 0) {
LAB_108d8cc44:
      *(undefined4 *)(param_2 + 0x58) = 0;
    }
    else {
      lVar8 = *(long *)(**(long **)(lVar8 + 8) + 0x120);
      if (lVar8 != 0) {
        piVar9 = *(int **)(lVar8 + 0x28);
        lVar8 = 0x1c;
        if (*piVar9 != 1) {
          lVar8 = 0x28;
        }
        if (*(int *)((long)piVar9 + lVar8) != 0) goto LAB_108d8cc44;
      }
    }
  }
  lVar8 = param_2;
  func_0x000108d95068(param_2,param_1,&UNK_10f51882a);
  if ((((int)lVar8 == 0) &&
      (lVar8 = param_2, func_0x000108d95068(param_2,param_1,&DAT_10f4652d0), (int)lVar8 == 0)) &&
     (lVar8 = lVar11, FUN_108d5f618(lVar11,2), (int)lVar8 == 0)) {
    plVar10 = *(long **)(lVar11 + 8);
    if (*(char *)(*plVar10 + 9) == '\x05') {
      *(undefined4 *)(param_2 + 0x58) = 0;
    }
    lVar8 = lVar13;
    FUN_108d70994(lVar13,*(undefined4 *)((long)plVar10 + 0x34),lVar6,0);
    if ((((int)lVar8 == 0) &&
        ((cVar3 != '\0' ||
         (lVar8 = lVar13, FUN_108d70994(lVar13,*(undefined4 *)(param_2 + 0x58),lVar6,0),
         (int)lVar8 == 0)))) && (*(char *)(param_2 + 0x51) == '\0')) {
      lVar8 = (long)*(char *)(param_2 + 0x53);
      if (*(char *)(param_2 + 0x53) < '\0') {
        lVar8 = lVar11;
        FUN_108d9511c(lVar11);
      }
      func_0x000108d71534(lVar13,lVar8);
      lVar8 = param_2;
      FUN_108d951a4(param_2,param_1,&UNK_10f51884b);
      if ((((int)lVar8 == 0) &&
          (lVar8 = param_2, FUN_108d951a4(param_2,param_1,&UNK_10f5188df), (int)lVar8 == 0)) &&
         (lVar8 = param_2, FUN_108d951a4(param_2,param_1,&UNK_10f518947), (int)lVar8 == 0)) {
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x8000000;
        lVar8 = param_2;
        FUN_108d951a4(param_2,param_1,&UNK_10f5189bd);
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xf7ffffff;
        if (((((int)lVar8 == 0) &&
             (lVar8 = param_2, FUN_108d951a4(param_2,param_1,&UNK_10f518a81), (int)lVar8 == 0)) &&
            (lVar8 = param_2, FUN_108d951a4(param_2,param_1,&UNK_10f518af2), (int)lVar8 == 0)) &&
           (lVar8 = param_2, func_0x000108d95068(param_2,param_1,&UNK_10f518b8d), (int)lVar8 == 0))
        {
          uVar12 = 0xfffffffffffffffe;
          pbVar16 = &UNK_10dfa0a8b;
          do {
            bVar5 = pbVar16[-1];
            FUN_108d615f0(lVar11,bVar5,&iStack_74);
            lVar8 = lVar13;
            FUN_108d616a8(lVar13,bVar5,iStack_74 + (uint)*pbVar16);
            if ((int)lVar8 != 0) goto LAB_108d8cc8c;
            uVar12 = uVar12 + 2;
            pbVar16 = pbVar16 + 2;
          } while (uVar12 < 8);
          lVar8 = lVar11;
          FUN_108d6175c(lVar11,lVar13);
          if (((int)lVar8 == 0) && (lVar8 = lVar13, FUN_108d5fff4(), (int)lVar8 == 0)) {
            lVar8 = lVar13;
            FUN_108d9511c(lVar13);
            func_0x000108d71534(lVar11,lVar8);
            lVar8 = lVar11;
            FUN_108d70994(lVar11,*(undefined4 *)(*(long *)(lVar13 + 8) + 0x34),lVar6,1);
          }
        }
      }
    }
    else {
      lVar8 = 7;
    }
  }
LAB_108d8cc8c:
  *(uint *)(param_2 + 0x2c) = uVar2;
  *(undefined8 *)(param_2 + 0x60) = uVar17;
  *(undefined8 *)(param_2 + 200) = uVar14;
  FUN_108d70994(lVar11,0xffffffff,0xffffffff,1);
  *(undefined1 *)(param_2 + 0x4f) = 1;
  if (lVar15 != 0) {
    FUN_108d618d8(*(undefined8 *)(lVar15 + 8));
    *(undefined8 *)(lVar15 + 8) = 0;
    *(undefined8 *)(lVar15 + 0x18) = 0;
  }
  FUN_108d61aa4(param_2);
  return lVar8;
}



/* Entry: 108d8cec4; end: 108d8d027;  */

long FUN_108d8cec4(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  if (*(char *)(lVar5 + 0x21) != '\0') {
    uVar1 = *(uint *)(lVar5 + 0x40);
    uVar2 = *(uint *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x50) + 0x24);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    lVar4 = lVar5;
    FUN_108d7f6d4(lVar5,uVar1,uVar2);
    if (uVar1 < (uint)lVar4) {
      lVar6 = 0xb;
      FUN_108d64c00(0xb,&UNK_10f51799f);
      goto LAB_108d8cfc4;
    }
    if (uVar2 != 0) {
      lVar6 = *(long *)(lVar5 + 0x10);
      if (lVar6 != 0) {
        func_0x000108d7ccac(lVar6,0,0);
        if ((int)lVar6 != 0) goto LAB_108d8cfc4;
        for (lVar6 = *(long *)(lVar5 + 0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
          *(byte *)(lVar6 + 0x6c) = *(byte *)(lVar6 + 0x6c) & 0xfb;
        }
      }
      lVar6 = lVar5;
      FUN_108d7f7ac(lVar5,lVar4,uVar1,0);
      if ((int)lVar6 == 0) {
        lVar6 = *(long *)(*(long *)(lVar5 + 0x18) + 0x68);
        FUN_108d5ffdc(lVar6);
        uVar1 = (*(uint *)(lVar5 + 0x40) & 0xff00ff00) >> 8 |
                (*(uint *)(lVar5 + 0x40) & 0xff00ff) << 8;
        *(uint *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x50) + 0x1c) = uVar1 >> 0x10 | uVar1 << 0x10;
      }
      goto LAB_108d8cfc4;
    }
  }
  lVar6 = 0x65;
LAB_108d8cfc4:
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar3 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_108d7f5fc(param_1);
  }
  return lVar6;
}



/* Entry: 108d8d028; end: 108d8d3db;  */

long FUN_108d8d028(long param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    lVar4 = 0;
  }
  else {
    bVar1 = param_3 + 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
    }
    lVar4 = param_1;
    func_0x000108d7b7fc(param_1,param_2,bVar1);
    if ((int)lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 8);
      for (plVar3 = *(long **)(lVar4 + 0x78); plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
        if (((int)plVar3[1] == (int)param_2) && (*plVar3 == param_1)) goto LAB_108d8d110;
      }
      plVar3 = (long *)0x18;
      FUN_108d60848();
      if (plVar3 == (long *)0x0) {
        lVar4 = 7;
      }
      else {
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
        *(int *)(plVar3 + 1) = (int)param_2;
        *plVar3 = param_1;
        plVar3[2] = *(long *)(lVar4 + 0x78);
        *(long **)(lVar4 + 0x78) = plVar3;
LAB_108d8d110:
        if (*(byte *)((long)plVar3 + 0xc) < bVar1) {
          lVar4 = 0;
          *(byte *)((long)plVar3 + 0xc) = bVar1;
        }
        else {
          lVar4 = 0;
        }
      }
    }
    if ((*(char *)(param_1 + 0x11) != '\0') &&
       (iVar2 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_108d7f5fc(param_1);
    }
  }
  return lVar4;
}



/* Entry: 108d8d3dc; end: 108d8d45f;  */

ulong FUN_108d8d3dc(long param_1,ulong param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_108d7f528(param_1);
    }
  }
  if ((int)param_2 < 1) {
    param_2 = (ulong)*(uint *)(**(long **)(param_1 + 8) + 0xc0);
  }
  else {
    *(int *)(**(long **)(param_1 + 8) + 0xc0) = (int)param_2;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_108d7f5fc(param_1);
    }
  }
  return param_2;
}



/* Entry: 108d8d460; end: 108d8d8c3;  */

void FUN_108d8d460(long *param_1,char *param_2)

{
  ushort uVar1;
  char *pcVar2;
  long *plVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  int iStack_d8;
  undefined1 auStack_d4 [100];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_d8 = 0;
  lVar11 = *param_1;
  uStack_e0 = *(undefined4 *)(lVar11 + 0x68);
  puStack_f8 = auStack_d4;
  uStack_e8 = 0x6400000000;
  uStack_dc = 0;
  lStack_100 = lVar11;
  puStack_f0 = puStack_f8;
  if (*(int *)(lVar11 + 0xb0) < 2) {
    if ((short)param_1[0xf] == 0) {
      pcVar4 = param_2;
      _strlen(param_2);
      uVar8 = (uint)pcVar4 & 0x3fffffff;
LAB_108d8d87c:
      FUN_108d71998(&lStack_100,param_2,uVar8);
    }
    else if (*param_2 != '\0') {
      iVar10 = 1;
      do {
        uVar8 = 0;
        pcVar4 = param_2;
        while( true ) {
          pcVar2 = pcVar4;
          FUN_108d95788(pcVar4,&uStack_140);
          iVar7 = (int)pcVar2;
          if ((int)uStack_140 == 0x87) break;
          uVar8 = iVar7 + uVar8;
          pcVar4 = pcVar4 + iVar7;
          if (*pcVar4 == '\0') goto LAB_108d8d87c;
        }
        FUN_108d71998(&lStack_100,param_2,uVar8);
        if (iVar7 == 0) break;
        param_2 = param_2 + (int)uVar8;
        if (*param_2 == '?') {
          if (1 < iVar7) {
            FUN_108d934c8(param_2 + 1,&iStack_d8);
            iVar10 = iStack_d8;
          }
        }
        else {
          plVar3 = param_1;
          FUN_108d69d58(param_1,param_2,pcVar2);
          iVar10 = (int)plVar3;
        }
        iStack_d8 = iVar10;
        iVar10 = iStack_d8;
        lVar9 = param_1[0xd] + (long)iStack_d8 * 0x38;
        uVar1 = *(ushort *)(lVar9 + -0x30);
        if ((uVar1 & 1) != 0) {
          lVar9 = (long)(int)uStack_e8;
          if ((int)uStack_e8 + 4 < uStack_e8._4_4_) {
            uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)uStack_e8 + 4);
            *(undefined4 *)(puStack_f0 + lVar9) = 0x4c4c554e;
          }
          else {
            FUN_108d71a6c(&lStack_100,&UNK_10f517654,4);
          }
          goto LAB_108d8d6e0;
        }
        if ((uVar1 >> 2 & 1) == 0) {
          if ((uVar1 >> 3 & 1) != 0) {
            pcVar4 = "%!.15g";
            goto LAB_108d8d6dc;
          }
          if ((uVar1 >> 1 & 1) == 0) {
            if ((uVar1 >> 0xe & 1) != 0) {
              pcVar4 = "zeroblob(%d)";
              goto LAB_108d8d6dc;
            }
            lVar6 = (long)(int)uStack_e8;
            if ((int)uStack_e8 + 2 < uStack_e8._4_4_) {
              uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)uStack_e8 + 2);
              *(undefined2 *)(puStack_f0 + lVar6) = 0x2778;
            }
            else {
              FUN_108d71a6c(&lStack_100,&UNK_10f516f50,2);
            }
            uVar8 = *(uint *)(lVar9 + -0x2c);
            if (0 < (int)uVar8) {
              uVar12 = 0;
              do {
                FUN_108d95760(&lStack_100,0,&DAT_10f3212df);
                uVar12 = uVar12 + 1;
              } while (uVar8 != uVar12);
            }
            lVar9 = (long)(int)uStack_e8;
            if ((int)uStack_e8 + 1 < uStack_e8._4_4_) {
              uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)uStack_e8 + 1);
              puStack_f0[lVar9] = 0x27;
            }
            else {
              FUN_108d71a6c(&lStack_100,&DAT_10f638984,1);
            }
          }
          else {
            if (*(char *)(lVar11 + 0x4e) == '\x01') {
              pcVar4 = "\'%.*q\'";
              goto LAB_108d8d6dc;
            }
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_120 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_110 = 0;
            lStack_118 = lVar11;
            FUN_108d67c04(&uStack_140,*(undefined8 *)(lVar9 + -0x28),*(undefined4 *)(lVar9 + -0x2c),
                          *(char *)(lVar11 + 0x4e),0);
            if ((((ushort)uStack_138 >> 1 & 1) != 0) && (uStack_138._2_1_ != '\x01')) {
              FUN_108d833e4(&uStack_140,1);
            }
            FUN_108d95760(&lStack_100,0,&UNK_10f518cda);
            if ((uStack_138 & 0x2460) != 0 || (int)uStack_120 != 0) {
              FUN_108d826d0(&uStack_140);
            }
          }
        }
        else {
          pcVar4 = "%lld";
LAB_108d8d6dc:
          FUN_108d95760(&lStack_100,0,pcVar4);
        }
LAB_108d8d6e0:
        param_2 = param_2 + iVar7;
        iVar10 = iVar10 + 1;
      } while (*param_2 != '\0');
    }
  }
  else {
    cVar5 = *param_2;
    while (cVar5 != '\0') {
      lVar11 = 1;
      do {
        lVar9 = lVar11;
        if (cVar5 == '\n') break;
        cVar5 = param_2[lVar9];
        lVar11 = lVar9 + 1;
      } while (cVar5 != '\0');
      uStack_e8._4_4_ = (int)((ulong)uStack_e8 >> 0x20);
      lVar11 = (long)(int)uStack_e8;
      if ((int)uStack_e8 + 3 < uStack_e8._4_4_) {
        uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)uStack_e8 + 3);
        *(undefined2 *)(puStack_f0 + lVar11) = 0x2d2d;
        *(undefined1 *)((long)(puStack_f0 + lVar11) + 2) = 0x20;
      }
      else {
        FUN_108d71a6c(&lStack_100,&UNK_10f518cd6,3);
      }
      FUN_108d71998(&lStack_100,param_2,lVar9);
      cVar5 = param_2[lVar9];
      param_2 = param_2 + lVar9;
    }
  }
  plVar3 = &lStack_100;
  FUN_108d64afc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = plVar3[2];
  FUN_108d82a1c(lVar11,plVar3,*(undefined4 *)((long)plVar3 + 0xc),*(undefined1 *)((long)plVar3 + 10)
               );
  if ((int)lVar11 != 0) {
    func_0x000108d82f50(plVar3[2],plVar3,*(undefined4 *)((long)plVar3 + 0xc),
                        *(undefined1 *)((long)plVar3 + 10));
  }
  return;
}



/* Entry: 108d8d8c4; end: 108d8d9d3;  */

void FUN_108d8d8c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_108d82a1c(uVar1,param_1,*(undefined4 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 10));
  if ((int)uVar1 != 0) {
    func_0x000108d82f50(*(undefined8 *)(param_1 + 0x10),param_1,*(undefined4 *)(param_1 + 0xc),
                        *(undefined1 *)(param_1 + 10));
  }
  return;
}



/* Entry: 108d8d9d4; end: 108d8db3b;  */

undefined8 FUN_108d8d9d4(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  ushort uStack_a8;
  undefined4 uStack_a4;
  int iStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [8];
  ushort uStack_70;
  undefined4 uStack_6c;
  int iStack_58;
  undefined8 uStack_50;
  
  puVar4 = auStack_b0;
  if (*(char *)(param_1 + 10) == *(char *)(param_3 + 8)) {
    uVar5 = *(undefined8 *)(param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000108d8da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x18))
              (uVar5,*(undefined4 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_2 + 0xc),*(undefined8 *)(param_2 + 0x10));
    return uVar5;
  }
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = 1;
  iStack_58 = 0;
  uStack_a8 = 1;
  iStack_90 = 0;
  uStack_50 = uStack_88;
  FUN_108d89204(auStack_78,param_1,0x1000);
  FUN_108d89204(auStack_b0,param_2,0x1000);
  puVar3 = auStack_78;
  FUN_108d67a14(puVar3,*(undefined1 *)(param_3 + 8));
  uVar1 = 0;
  if (puVar3 != (undefined1 *)0x0) {
    uVar1 = uStack_6c;
  }
  func_0x000108d67a18(auStack_b0,*(undefined1 *)(param_3 + 8));
  uVar2 = 0;
  if (puVar4 != (undefined1 *)0x0) {
    uVar2 = uStack_a4;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  (**(code **)(param_3 + 0x18))(uVar5,uVar1,puVar3,uVar2,puVar4);
  if ((uStack_70 & 0x2460) != 0 || iStack_58 != 0) {
    FUN_108d826d0(auStack_78);
  }
  if ((uStack_a8 & 0x2460) != 0 || iStack_90 != 0) {
    FUN_108d826d0(auStack_b0);
  }
  if ((param_4 != (undefined1 *)0x0) && (puVar3 == (undefined1 *)0x0 || puVar4 == (undefined1 *)0x0)
     ) {
    *param_4 = 7;
  }
  return uVar5;
}



/* Entry: 108d8db3c; end: 108d8dcf7;  */

int FUN_108d8db3c(int param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_3 <= param_1) {
    iVar1 = param_3;
  }
  _memcmp(param_2,param_4,(long)iVar1);
  iVar1 = param_1 - param_3;
  if ((int)param_2 != 0) {
    iVar1 = (int)param_2;
  }
  return iVar1;
}



/* Entry: 108d8dcf8; end: 108d8de6b;  */

/* WARNING: Removing unreachable block (ram,0x000108d8a44c) */
/* WARNING: Removing unreachable block (ram,0x000108d8a4d8) */
/* WARNING: Removing unreachable block (ram,0x000108d8a464) */
/* WARNING: Removing unreachable block (ram,0x000108d8a4e4) */
/* WARNING: Removing unreachable block (ram,0x000108d8a4a4) */
/* WARNING: Removing unreachable block (ram,0x000108d8a4b8) */
/* WARNING: Removing unreachable block (ram,0x000108d8a4c8) */
/* WARNING: Removing unreachable block (ram,0x000108d8a4ec) */
/* WARNING: Removing unreachable block (ram,0x000108d8a548) */
/* WARNING: Removing unreachable block (ram,0x000108d8a60c) */
/* WARNING: Removing unreachable block (ram,0x000108d8a580) */
/* WARNING: Removing unreachable block (ram,0x000108d8a588) */
/* WARNING: Removing unreachable block (ram,0x000108d8a614) */
/* WARNING: Removing unreachable block (ram,0x000108d8a618) */
/* WARNING: Removing unreachable block (ram,0x000108d8a59c) */
/* WARNING: Removing unreachable block (ram,0x000108d8a848) */
/* WARNING: Removing unreachable block (ram,0x000108d8a5b8) */
/* WARNING: Removing unreachable block (ram,0x000108d8a850) */
/* WARNING: Removing unreachable block (ram,0x000108d8a5e0) */
/* WARNING: Removing unreachable block (ram,0x000108d8a628) */
/* WARNING: Removing unreachable block (ram,0x000108d8a824) */
/* WARNING: Removing unreachable block (ram,0x000108d8a840) */
/* WARNING: Removing unreachable block (ram,0x000108d8a62c) */
/* WARNING: Removing unreachable block (ram,0x000108d8a604) */
/* WARNING: Removing unreachable block (ram,0x000108d8a630) */
/* WARNING: Removing unreachable block (ram,0x000108d8a638) */
/* WARNING: Removing unreachable block (ram,0x000108d8deac) */

ulong * FUN_108d8dcf8(ulong *param_1,ulong *param_2,ulong *param_3,int param_4,undefined4 *param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined2 uVar9;
  char *pcVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  ulong *puVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined4 uVar18;
  long lStack_128;
  undefined1 auStack_120 [112];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined4 *puStack_98;
  uint uStack_8c;
  ulong *puStack_88;
  uint uStack_7c;
  ulong *puStack_78;
  long lStack_70;
  ulong auStack_68 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (ulong *)0x0) {
    uVar6 = param_1[4];
    iVar15 = (int)auStack_120;
    puVar8 = (ulong *)0xc8;
    FUN_108d8a998();
    if (uVar6 == 0) {
      puVar14 = (ulong *)0x7;
      puVar7 = (ulong *)0x0;
    }
    else {
      FUN_108d8aa14(param_1[4],param_3,param_2,uVar6);
      if (*(short *)(uVar6 + 8) == 0) {
        func_0x000108d60660(*(undefined8 *)(param_1[4] + 0x10),lStack_128);
        iVar15 = 0xf51799f;
        puVar14 = (ulong *)0xb;
        puVar7 = (ulong *)0xb;
        FUN_108d64c00();
        puVar8 = param_2;
      }
      else {
        puVar14 = param_1;
        FUN_108d8a3d0();
        iVar15 = (int)uVar6;
        puVar7 = puVar14;
        puVar8 = param_3;
        if (lStack_128 != 0) {
          puVar7 = *(ulong **)(param_1[4] + 0x10);
          func_0x000108d60660();
          iVar15 = (int)lStack_128;
          puVar8 = param_3;
        }
      }
    }
    param_1 = puVar7;
    param_3 = puVar8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return puVar14;
    }
LAB_108d8de68:
    ___stack_chk_fail();
    uVar6 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    if (iVar15 == 6) {
      *param_3 = uVar6;
      uVar9 = 4;
    }
    else {
      *param_3 = uVar6;
      uVar9 = 8;
    }
    *(undefined2 *)(param_3 + 1) = uVar9;
    return param_1;
  }
  iVar15 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) goto LAB_108d8de68;
  if (((*(char *)((long)param_1 + 0x6d) == '\x01') &&
      ((*(byte *)((long)param_1 + 0x6c) >> 1 & 1) != 0)) && (*(char *)(param_1[0x14] + 2) != '\0'))
  {
    if ((ulong *)param_1[6] == param_3) {
      *param_5 = 0;
      return (ulong *)0x0;
    }
    if (((*(byte *)((long)param_1 + 0x6c) >> 3 & 1) != 0) && ((long)param_1[6] < (long)param_3))
    goto LAB_108d8a814;
  }
  puVar8 = param_1;
  FUN_108d8df84();
  if ((int)puVar8 != 0) {
    return puVar8;
  }
  if (*(char *)((long)param_1 + 0x6d) != '\0') {
    puStack_88 = param_1 + 0x14;
    uStack_8c = 1 - param_4;
    lStack_70 = (long)param_1 + 0x72;
    puStack_98 = param_5;
    puStack_78 = param_3;
LAB_108d8a528:
    uVar6 = puStack_88[(short)param_1[0xe]];
    iVar16 = *(ushort *)(uVar6 + 0x12) - 1;
    iVar13 = iVar16 >> (uStack_8c & 0x1f);
    *(short *)(lStack_70 + (long)(short)param_1[0xe] * 2) = (short)iVar13;
    iVar15 = 0;
    lStack_a0 = *(long *)(uVar6 + 0x50);
    uVar3 = *(ushort *)(uVar6 + 0x14);
    lVar17 = *(long *)(uVar6 + 0x60);
    lVar12 = lStack_a0 + (ulong)*(byte *)(uVar6 + 7);
    uStack_7c = (uint)*(byte *)(uVar6 + 3);
    do {
      puVar1 = (undefined1 *)(lVar17 + (long)iVar13 * 2);
      pcVar5 = (char *)(lVar12 + (ulong)(CONCAT11(*puVar1,puVar1[1]) & uVar3));
      if (uStack_7c != 0) {
        while (pcVar10 = pcVar5 + 1, *pcVar5 < '\0') {
          pcVar5 = pcVar10;
          if (*(char **)(uVar6 + 0x58) <= pcVar10) {
            uStack_b0 = 0xedf7;
            puStack_a8 = &UNK_10f517536;
            FUN_108d64c00(0xb,&UNK_10f51799f);
            iVar15 = 1;
            goto LAB_108d8a7fc;
          }
        }
        pcVar5 = pcVar5 + 1;
      }
      FUN_108d7d0a0(pcVar5,auStack_68);
      uVar9 = (undefined2)iVar13;
      if ((long)auStack_68[0] < (long)puStack_78) {
        iVar15 = iVar13 + 1;
        if (iVar16 <= iVar13) goto LAB_108d8a714;
      }
      else {
        if ((long)auStack_68[0] <= (long)puStack_78) {
          *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 2;
          param_1[6] = auStack_68[0];
          *(undefined2 *)(lStack_70 + (long)(short)param_1[0xe] * 2) = uVar9;
          lVar12 = lStack_a0;
          if (*(char *)(uVar6 + 5) == '\0') goto LAB_108d8a768;
          *puStack_98 = 0;
          iVar15 = 9;
          goto LAB_108d8a7fc;
        }
        if (iVar13 <= iVar15) {
          uVar18 = 1;
          iVar13 = iVar15;
          goto LAB_108d8a754;
        }
        iVar16 = iVar13 + -1;
      }
      iVar13 = iVar16 + iVar15 >> 1;
    } while( true );
  }
LAB_108d8a814:
  *param_5 = 0xffffffff;
  return (ulong *)0x0;
LAB_108d8a714:
  uVar18 = 0xffffffff;
  iVar13 = iVar15;
LAB_108d8a754:
  if (*(char *)(uVar6 + 5) != '\0') {
    puVar8 = (ulong *)0x0;
    *(undefined2 *)(lStack_70 + (long)(short)param_1[0xe] * 2) = uVar9;
    *puStack_98 = uVar18;
    goto LAB_108d8a85c;
  }
  lVar12 = *(long *)(uVar6 + 0x50);
LAB_108d8a768:
  if (iVar13 < (int)(uint)*(ushort *)(uVar6 + 0x12)) {
    puVar1 = (undefined1 *)(*(long *)(uVar6 + 0x60) + (long)iVar13 * 2);
    pbVar11 = (byte *)(lVar12 + (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(uVar6 + 0x14)));
    uVar4 = (uint)*pbVar11 << 0x18 | (uint)pbVar11[1] << 0x10 | (uint)pbVar11[2] << 8;
    pbVar11 = pbVar11 + 3;
  }
  else {
    lVar12 = lVar12 + (ulong)*(byte *)(uVar6 + 6);
    uVar4 = (uint)*(byte *)(lVar12 + 8) << 0x18 | (uint)*(byte *)(lVar12 + 9) << 0x10 |
            (uint)*(byte *)(lVar12 + 10) << 8;
    pbVar11 = (byte *)(lVar12 + 0xb);
  }
  bVar2 = *pbVar11;
  *(short *)(lStack_70 + (long)(short)param_1[0xe] * 2) = (short)iVar13;
  puVar8 = param_1;
  FUN_108d8e180(param_1,uVar4 | bVar2);
  if ((int)puVar8 != 0) goto LAB_108d8a85c;
  iVar15 = 0;
LAB_108d8a7fc:
  if (iVar15 != 0) {
    puVar8 = (ulong *)0x0;
    if ((iVar15 != 9) && (iVar15 != 2)) {
      return (ulong *)0xb;
    }
LAB_108d8a85c:
    *(undefined2 *)(param_1 + 9) = 0;
    *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xf9;
    return puVar8;
  }
  goto LAB_108d8a528;
}



/* Entry: 108d8de6c; end: 108d8deb7;  */

/* WARNING: Removing unreachable block (ram,0x000108d8deac) */

void FUN_108d8de6c(ulong *param_1,int param_2,ulong *param_3)

{
  undefined2 uVar1;
  ulong uVar2;
  
  uVar2 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  uVar2 = uVar2 >> 0x20 | uVar2 << 0x20;
  if (param_2 == 6) {
    *param_3 = uVar2;
    uVar1 = 4;
  }
  else {
    *param_3 = uVar2;
    uVar1 = 8;
  }
  *(undefined2 *)(param_3 + 1) = uVar1;
  return;
}



/* Entry: 108d8deb8; end: 108d8df83;  */

ulong FUN_108d8deb8(byte *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  byte *pbVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_68;
  byte abStack_23 [11];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 >> 0x38 == 0) {
    uVar10 = 0;
    do {
      uVar8 = uVar10;
      abStack_23[uVar8 + 1] = (byte)param_2 | 0x80;
      uVar10 = uVar8 + 1;
      bVar1 = 0x7f < param_2;
      param_2 = param_2 >> 7;
    } while (bVar1);
    abStack_23[1] = abStack_23[1] & 0x7f;
    pbVar4 = param_1;
    uVar9 = uVar10;
    do {
      param_1 = pbVar4 + 1;
      *pbVar4 = abStack_23[uVar9];
      uVar8 = uVar8 - 1;
      uVar9 = uVar9 - 1;
      pbVar4 = param_1;
    } while (uVar8 != 0xffffffffffffffff);
  }
  else {
    param_1[8] = (byte)param_2;
    param_2 = param_2 >> 8;
    lVar6 = 7;
    do {
      param_1[lVar6] = (byte)param_2 | 0x80;
      param_2 = param_2 >> 7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != -1);
    uVar10 = 9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return uVar10;
  }
  ___stack_chk_fail();
  if (2 < param_1[0x6d]) {
    if (param_1[0x6d] == 4) {
      return (ulong)*(uint *)(param_1 + 0x68);
    }
    func_0x000108d5e198(*(undefined8 *)(param_1 + 0x58));
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x6d] = 0;
  }
  sVar3 = *(short *)(param_1 + 0x70);
  if (*(short *)(param_1 + 0x70) < 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
LAB_108d8e0c0:
      uVar10 = 0;
    }
    else {
      uVar10 = *(ulong *)(*(long *)param_1 + 8);
      uVar5 = 2;
      if ((param_1[0x6c] & 1) != 0) {
        uVar5 = 0;
      }
      FUN_108d8e264(uVar10,*(int *)(param_1 + 0x60),param_1 + 0xa0,uVar5);
      if ((int)uVar10 == 0) {
        param_1[0x70] = 0;
        param_1[0x71] = 0;
        goto LAB_108d8e004;
      }
    }
    param_1[0x6d] = 0;
  }
  else {
    while (sVar3 != 0) {
      *(short *)(param_1 + 0x70) = sVar3 + -1;
      lVar6 = (long)sVar3;
      sVar3 = sVar3 + -1;
      if (*(long *)(param_1 + (lVar6 + 0x14) * 8) != 0) {
        func_0x000108d787d8(*(undefined8 *)(*(long *)(param_1 + (lVar6 + 0x14) * 8) + 0x68));
        sVar3 = *(short *)(param_1 + 0x70);
      }
    }
LAB_108d8e004:
    pcVar7 = *(char **)(param_1 + 0xa0);
    if ((*pcVar7 != '\0') && ((bool)pcVar7[2] == (*(long *)(param_1 + 0x20) == 0))) {
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      param_1[0x48] = 0;
      param_1[0x49] = 0;
      param_1[0x6c] = param_1[0x6c] & 0xf1;
      if (*(short *)(pcVar7 + 0x12) != 0) {
        param_1[0x6d] = 1;
        return 0;
      }
      if (pcVar7[5] != '\0') goto LAB_108d8e0c0;
      if (*(int *)(pcVar7 + 0x70) == 1) {
        uVar2 = *(uint *)(*(long *)(pcVar7 + 0x50) + (ulong)(byte)pcVar7[6] + 8);
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        param_1[0x6d] = 1;
        lVar6 = (long)*(short *)(param_1 + 0x70);
        if (lVar6 < 0x13) {
          uVar10 = *(ulong *)(param_1 + 8);
          uVar5 = 2;
          if ((param_1[0x6c] & 1) != 0) {
            uVar5 = 0;
          }
          FUN_108d8e264(uVar10,uVar2 >> 0x10 | uVar2 << 0x10,&lStack_68,uVar5);
          if ((int)uVar10 != 0) {
            return uVar10;
          }
          *(long *)(param_1 + (lVar6 + 0x15) * 8) = lStack_68;
          (param_1 + (lVar6 + 1) * 2 + 0x72)[0] = 0;
          (param_1 + (lVar6 + 1) * 2 + 0x72)[1] = 0;
          *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 1;
          param_1[0x48] = 0;
          param_1[0x49] = 0;
          param_1[0x6c] = param_1[0x6c] & 0xf9;
          if ((*(short *)(lStack_68 + 0x12) != 0) &&
             (*(char *)(lStack_68 + 2) == *(char *)(*(long *)(param_1 + (lVar6 + 0x14) * 8) + 2))) {
            return 0;
          }
        }
        FUN_108d64c00(0xb,&UNK_10f51799f);
        return 0xb;
      }
    }
    uVar10 = 0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  return uVar10;
}



/* Entry: 108d8df84; end: 108d8e17f;  */

ulong FUN_108d8df84(long *param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  long lStack_38;
  
  if (2 < *(byte *)((long)param_1 + 0x6d)) {
    if (*(byte *)((long)param_1 + 0x6d) == 4) {
      return (ulong)*(uint *)(param_1 + 0xd);
    }
    func_0x000108d5e198(param_1[0xb]);
    param_1[0xb] = 0;
    *(undefined1 *)((long)param_1 + 0x6d) = 0;
  }
  sVar2 = (short)param_1[0xe];
  if ((short)param_1[0xe] < 0) {
    if ((int)param_1[0xc] == 0) {
LAB_108d8e0c0:
      uVar6 = 0;
    }
    else {
      uVar6 = *(ulong *)(*param_1 + 8);
      uVar3 = 2;
      if ((*(byte *)((long)param_1 + 0x6c) & 1) != 0) {
        uVar3 = 0;
      }
      FUN_108d8e264(uVar6,(int)param_1[0xc],param_1 + 0x14,uVar3);
      if ((int)uVar6 == 0) {
        *(undefined2 *)(param_1 + 0xe) = 0;
        goto LAB_108d8e004;
      }
    }
    *(undefined1 *)((long)param_1 + 0x6d) = 0;
  }
  else {
    while (sVar2 != 0) {
      *(short *)(param_1 + 0xe) = sVar2 + -1;
      lVar4 = (long)sVar2;
      sVar2 = sVar2 + -1;
      if (param_1[lVar4 + 0x14] != 0) {
        func_0x000108d787d8(*(undefined8 *)(param_1[lVar4 + 0x14] + 0x68));
        sVar2 = (short)param_1[0xe];
      }
    }
LAB_108d8e004:
    pcVar5 = (char *)param_1[0x14];
    if ((*pcVar5 != '\0') && ((bool)pcVar5[2] == (param_1[4] == 0))) {
      *(undefined2 *)((long)param_1 + 0x72) = 0;
      *(undefined2 *)(param_1 + 9) = 0;
      *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xf1;
      if (*(short *)(pcVar5 + 0x12) != 0) {
        *(undefined1 *)((long)param_1 + 0x6d) = 1;
        return 0;
      }
      if (pcVar5[5] != '\0') goto LAB_108d8e0c0;
      if (*(int *)(pcVar5 + 0x70) == 1) {
        uVar1 = *(uint *)(*(long *)(pcVar5 + 0x50) + (ulong)(byte)pcVar5[6] + 8);
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        *(undefined1 *)((long)param_1 + 0x6d) = 1;
        lVar4 = (long)(short)param_1[0xe];
        if (lVar4 < 0x13) {
          uVar6 = param_1[1];
          uVar3 = 2;
          if ((*(byte *)((long)param_1 + 0x6c) & 1) != 0) {
            uVar3 = 0;
          }
          FUN_108d8e264(uVar6,uVar1 >> 0x10 | uVar1 << 0x10,&lStack_38,uVar3);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          param_1[lVar4 + 0x15] = lStack_38;
          *(undefined2 *)((long)param_1 + (lVar4 + 1) * 2 + 0x72) = 0;
          *(short *)(param_1 + 0xe) = (short)param_1[0xe] + 1;
          *(undefined2 *)(param_1 + 9) = 0;
          *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xf9;
          if ((*(short *)(lStack_38 + 0x12) != 0) &&
             (*(char *)(lStack_38 + 2) == *(char *)(param_1[lVar4 + 0x14] + 2))) {
            return 0;
          }
        }
        FUN_108d64c00(0xb,&UNK_10f51799f);
        return 0xb;
      }
    }
    uVar6 = 0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  return uVar6;
}



/* Entry: 108d8e180; end: 108d8e263;  */

undefined8 FUN_108d8e180(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lStack_38;
  
  lVar3 = (long)*(short *)(param_1 + 0x70);
  if (lVar3 < 0x13) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 2;
    if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
      uVar2 = 0;
    }
    FUN_108d8e264(uVar1,param_2,&lStack_38,uVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(long *)(param_1 + 0xa0 + (lVar3 + 1) * 8) = lStack_38;
    *(undefined2 *)(param_1 + (lVar3 + 1) * 2 + 0x72) = 0;
    *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 1;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf9;
    if ((*(short *)(lStack_38 + 0x12) != 0) &&
       (*(char *)(lStack_38 + 2) == *(char *)(*(long *)(param_1 + 0xa0 + lVar3 * 8) + 2))) {
      return 0;
    }
  }
  FUN_108d64c00(0xb,&UNK_10f51799f);
  return 0xb;
}



/* Entry: 108d8e264; end: 108d8e3c7;  */

char * FUN_108d8e264(char *param_1,uint param_2,long *param_3)

{
  if (*(uint *)(param_1 + 0x40) < param_2) {
    param_1 = (char *)0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  else {
    func_0x000108d7be68();
    if ((int)param_1 == 0) {
      param_1 = (char *)*param_3;
      if (*param_1 == '\0') {
        FUN_108d7f368();
        if (((int)param_1 != 0) && (*param_3 != 0)) {
          func_0x000108d787d8(*(undefined8 *)(*param_3 + 0x68));
        }
      }
      else {
        param_1 = (char *)0x0;
      }
    }
  }
  return param_1;
}



/* Entry: 108d8e3c8; end: 108d8e41b;  */

void FUN_108d8e3c8(undefined4 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  func_0x000108d5e198(*(undefined8 *)(param_1 + 4));
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000108d5e198(plVar1);
    plVar1 = (long *)lVar2;
  }
  param_1[1] = 0;
  return;
}



/* Entry: 108d8e41c; end: 108d8e51b;  */

ulong FUN_108d8e41c(uint param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte *pbVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  double dVar16;
  ulong uVar17;
  ulong uVar18;
  double *pdVar19;
  byte *pbVar20;
  uint uVar21;
  double dVar22;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  uint uStack_a4;
  byte *pbStack_a0;
  undefined8 uStack_88;
  uint uStack_74;
  
  if (9 < param_2[1]) {
LAB_108d8e458:
    bVar6 = false;
    goto FUN_108d8e65c;
  }
  uVar17 = 0;
  puVar1 = (ulong *)(param_2 + ((ulong)*param_2 & 0x3f));
  switch(param_2[1]) {
  default:
    goto LAB_108d8e458;
  case 1:
    uVar17 = (ulong)(char)(byte)*puVar1;
    break;
  case 2:
    uVar17 = (ulong)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1));
    break;
  case 3:
    uVar17 = (long)(char)(byte)*puVar1 << 0x10 | (ulong)*(byte *)((long)puVar1 + 1) << 8;
    bVar3 = *(byte *)((long)puVar1 + 2);
    goto code_r0x000108d8e4d4;
  case 4:
    uVar17 = (long)(int)((uint)(byte)*puVar1 << 0x18) | (ulong)*(byte *)((long)puVar1 + 1) << 0x10 |
             (ulong)*(byte *)((long)puVar1 + 2) << 8;
    bVar3 = *(byte *)((long)puVar1 + 3);
code_r0x000108d8e4d4:
    uVar17 = uVar17 | bVar3;
    break;
  case 5:
    uVar12 = (*(uint *)((long)puVar1 + 2) & 0xff00ff00) >> 8 |
             (*(uint *)((long)puVar1 + 2) & 0xff00ff) << 8;
    uVar17 = CONCAT44((int)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1)),
                      uVar12 >> 0x10 | uVar12 << 0x10);
    break;
  case 6:
    uVar17 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
    break;
  case 8:
    break;
  case 9:
    uVar17 = 1;
  }
  if ((long)uVar17 < *(long *)param_3[2]) {
    return (ulong)*(uint *)(param_3 + 3);
  }
  if (*(long *)param_3[2] < (long)uVar17) {
    return (ulong)*(uint *)((long)param_3 + 0x1c);
  }
  if (*(ushort *)(param_3 + 1) < 2) {
    return (long)*(char *)((long)param_3 + 10);
  }
  bVar6 = true;
FUN_108d8e65c:
  pdVar19 = (double *)param_3[2];
  lVar15 = *param_3;
  if (bVar6) {
    pbVar9 = param_2 + 1;
    if ((char)*pbVar9 < '\0') {
      FUN_108d7d01c(pbVar9,&uStack_b0);
      pbVar20 = (byte *)(ulong)((int)pbVar9 + 1U & 0xff);
      uVar12 = uStack_b0;
    }
    else {
      pbVar20 = (byte *)0x2;
      uVar12 = (int)(char)*pbVar9;
    }
    uStack_74 = (uint)*param_2;
    if (uVar12 < 0xc) {
      uVar12 = (uint)(byte)(&UNK_10dfa0a57)[uVar12];
    }
    else {
      uVar12 = uVar12 - 0xc >> 1;
    }
    pdVar19 = pdVar19 + 7;
    uVar17 = 1;
    uVar12 = uVar12 + uStack_74;
  }
  else {
    if ((char)*param_2 < 0) {
      pbVar20 = param_2;
      FUN_108d7d01c(param_2,&uStack_74);
    }
    else {
      pbVar20 = (byte *)0x1;
      uStack_74 = (int)(char)*param_2;
    }
    if (param_1 < uStack_74) {
      FUN_108d64c00(0xb,&UNK_10f51799f);
      *(undefined1 *)((long)param_3 + 0xb) = 0xb;
      return 0;
    }
    uVar17 = 0;
    uVar12 = uStack_74;
  }
  uVar5 = uStack_74;
  do {
    uVar4 = *(ushort *)(pdVar19 + 1);
    if ((uVar4 >> 2 & 1) != 0) {
      bVar3 = param_2[(ulong)pbVar20 & 0xffffffff];
      uVar21 = (uint)bVar3;
      if (0xb < bVar3) {
LAB_108d8ea48:
        uVar14 = 1;
        goto LAB_108d8ea54;
      }
      if (bVar3 == 7) {
        dVar16 = *pdVar19;
        FUN_108d8de6c(param_2 + uVar12,7,&uStack_b0);
        if ((double)(long)dVar16 <= (double)CONCAT44(uStack_ac,uStack_b0)) {
          if ((double)CONCAT44(uStack_ac,uStack_b0) != (double)(long)dVar16) goto LAB_108d8ea48;
          uVar21 = 7;
          goto LAB_108d8e9f0;
        }
      }
      else if (bVar3 != 0) {
        puVar1 = (ulong *)(param_2 + uVar12);
        uVar14 = (uint)bVar3;
        if (bVar3 < 4) {
          if (uVar14 == 1) {
            dVar16 = (double)(long)(char)(byte)*puVar1;
          }
          else if (uVar14 == 2) {
            dVar16 = (double)(long)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1));
          }
          else {
            if (uVar14 == 3) {
              uVar18 = (long)(char)(byte)*puVar1 << 0x10 | (ulong)*(byte *)((long)puVar1 + 1) << 8;
              bVar3 = *(byte *)((long)puVar1 + 2);
              goto LAB_108d8e990;
            }
LAB_108d8e998:
            dVar16 = (double)(ulong)(uVar14 - 8);
          }
        }
        else if (uVar14 == 4) {
          uVar18 = (long)(int)((uint)(byte)*puVar1 << 0x18) |
                   (ulong)*(byte *)((long)puVar1 + 1) << 0x10 |
                   (ulong)*(byte *)((long)puVar1 + 2) << 8;
          bVar3 = *(byte *)((long)puVar1 + 3);
LAB_108d8e990:
          dVar16 = (double)(uVar18 | bVar3);
        }
        else if (uVar14 == 5) {
          uVar14 = (*(uint *)((long)puVar1 + 2) & 0xff00ff00) >> 8 |
                   (*(uint *)((long)puVar1 + 2) & 0xff00ff) << 8;
          dVar16 = (double)CONCAT44((int)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1)),
                                    uVar14 >> 0x10 | uVar14 << 0x10);
        }
        else {
          if (uVar14 != 6) goto LAB_108d8e998;
          uVar18 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
          uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
          dVar16 = (double)(uVar18 >> 0x20 | uVar18 << 0x20);
        }
        dVar22 = *pdVar19;
        bVar6 = SBORROW8((long)dVar16,(long)dVar22);
        bVar7 = (long)dVar16 - (long)dVar22 < 0;
        bVar8 = dVar16 == dVar22;
        if ((long)dVar22 <= (long)dVar16) goto LAB_108d8e9d4;
      }
LAB_108d8ea50:
      uVar14 = 0xffffffff;
LAB_108d8ea54:
      uVar12 = -uVar14;
      if (*(char *)(*(long *)(lVar15 + 0x18) + uVar17) == '\0') {
        uVar12 = uVar14;
      }
      return (ulong)uVar12;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      bVar3 = param_2[(ulong)pbVar20 & 0xffffffff];
      uVar21 = (uint)bVar3;
      if (0xb < bVar3) goto LAB_108d8ea48;
      if (bVar3 != 0) {
        dVar22 = *pdVar19;
        FUN_108d89864(param_2 + uVar12,uVar21,&uStack_b0);
        dVar16 = (double)CONCAT44(uStack_ac,uStack_b0);
        if (bVar3 != 7) {
          dVar16 = (double)(long)CONCAT44(uStack_ac,uStack_b0);
        }
        bVar6 = NAN(dVar16) || NAN(dVar22);
        bVar8 = dVar16 == dVar22;
        bVar7 = dVar16 < dVar22;
        if (!bVar7) {
LAB_108d8e9d4:
          if (!bVar8 && bVar7 == bVar6) goto LAB_108d8ea48;
          goto LAB_108d8e9d8;
        }
      }
      goto LAB_108d8ea50;
    }
    pbVar9 = param_2 + ((ulong)pbVar20 & 0xffffffff);
    if ((uVar4 >> 1 & 1) == 0) {
      bVar3 = *pbVar9;
      uVar21 = (uint)bVar3;
      if ((uVar4 >> 4 & 1) == 0) {
        uVar13 = (uint)(bVar3 != 0);
      }
      else {
        if ((char)bVar3 < '\0') {
          FUN_108d7d01c(pbVar9,&uStack_b4);
          uVar21 = uStack_b4;
        }
        if (uVar21 < 0xc || (uVar21 & 1) != 0) goto LAB_108d8ea50;
        if (param_1 < uVar12 + (uVar21 - 0xc >> 1)) {
LAB_108d8eab0:
          FUN_108d64c00(0xb,&UNK_10f51799f);
          *(undefined1 *)((long)param_3 + 0xb) = 0xb;
          return 0;
        }
        uVar13 = uVar21 - 0xc >> 1;
LAB_108d8e940:
        uVar2 = *(uint *)((long)pdVar19 + 0xc);
        uVar14 = uVar13;
        if ((int)uVar2 <= (int)uVar13) {
          uVar14 = uVar2;
        }
        pbVar9 = param_2 + uVar12;
        _memcmp(pbVar9,pdVar19[2],(long)(int)uVar14);
        uVar14 = (uint)pbVar9;
        uVar13 = uVar13 - uVar2;
        if (uVar14 != 0) goto LAB_108d8ea54;
      }
    }
    else {
      uVar21 = (int)(char)*pbVar9;
      if ((char)*pbVar9 < 0) {
        FUN_108d7d01c(pbVar9,&uStack_b4);
        uVar21 = uStack_b4;
      }
      uStack_b4 = uVar21;
      uVar21 = uStack_b4;
      if (uStack_b4 < 0xc) goto LAB_108d8ea50;
      if ((uStack_b4 & 1) == 0) goto LAB_108d8ea48;
      uVar13 = uStack_b4 - 0xc >> 1;
      uStack_a4 = uVar13;
      if (param_1 < uVar12 + (uStack_b4 - 0xc >> 1)) goto LAB_108d8eab0;
      lVar11 = *(long *)(lVar15 + 0x20 + uVar17 * 8);
      if (lVar11 == 0) goto LAB_108d8e940;
      uStack_a6 = *(undefined1 *)(lVar15 + 4);
      uStack_88 = *(undefined8 *)(lVar15 + 0x10);
      uStack_a8 = 2;
      pbStack_a0 = param_2 + uVar12;
      puVar10 = &uStack_b0;
      FUN_108d8d9d4(puVar10,pdVar19,lVar11,(long)param_3 + 0xb);
      uVar13 = (uint)puVar10;
    }
    uVar14 = uVar13;
    if (uVar14 != 0) goto LAB_108d8ea54;
LAB_108d8e9d8:
    if (uVar21 < 0xc) {
LAB_108d8e9f0:
      uVar14 = (uint)(byte)(&UNK_10dfa0a57)[uVar21];
    }
    else {
      uVar14 = uVar21 - 0xc >> 1;
    }
    uVar17 = uVar17 + 1;
    pdVar19 = pdVar19 + 7;
    uVar18 = (ulong)uVar21;
    uVar21 = 0;
    do {
      uVar13 = uVar21 + 1;
      if (uVar18 < 0x80) break;
      uVar18 = uVar18 >> 7;
      bVar6 = uVar21 < 8;
      uVar21 = uVar13;
    } while (bVar6);
    uVar13 = (int)pbVar20 + uVar13;
    pbVar20 = (byte *)(ulong)uVar13;
    if ((uVar5 <= uVar13) ||
       (uVar12 = uVar14 + uVar12, *(ushort *)(param_3 + 1) <= uVar17 || param_1 < uVar12)) {
      return (long)*(char *)((long)param_3 + 10);
    }
  } while( true );
}



/* Entry: 108d8e51c; end: 108d8e653;  */

/* WARNING: Removing unreachable block (ram,0x000108d8e6b0) */
/* WARNING: Removing unreachable block (ram,0x000108d8e70c) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6b8) */
/* WARNING: Removing unreachable block (ram,0x000108d8e720) */
/* WARNING: Removing unreachable block (ram,0x000108d8e728) */
/* WARNING: Removing unreachable block (ram,0x000108d8e75c) */

ulong FUN_108d8e51c(uint param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte *pbVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  double dVar17;
  ulong uVar18;
  double *pdVar19;
  double *pdVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  uint uStack_a4;
  byte *pbStack_a0;
  undefined8 uStack_88;
  uint uStack_74;
  ulong in_stack_ffffffffffffffb8;
  
  bVar5 = param_2[1];
  uVar15 = (ulong)(char)bVar5;
  if ((char)bVar5 < '\0') {
    FUN_108d7d01c(param_2 + 1,&stack0xffffffffffffffbc);
    uVar15 = in_stack_ffffffffffffffb8 >> 0x20;
  }
  if ((int)uVar15 < 0xc) goto LAB_108d8e560;
  if ((uVar15 & 1) != 0) {
    uVar21 = (int)uVar15 - 0xc;
    if ((int)param_1 < (int)((uint)*param_2 + (uVar21 >> 1))) {
      FUN_108d64c00(0xb,&UNK_10f51799f);
      *(undefined1 *)((long)param_3 + 0xb) = 0xb;
      return 0;
    }
    uVar21 = uVar21 >> 1;
    uVar22 = *(uint *)(param_3[2] + 0xc);
    uVar12 = uVar22;
    if ((int)uVar21 <= (int)uVar22) {
      uVar12 = uVar21;
    }
    pbVar9 = param_2 + *param_2;
    _memcmp(pbVar9,*(undefined8 *)(param_3[2] + 0x10),(long)(int)uVar12);
    if ((int)pbVar9 == 0) {
      if (uVar21 == uVar22) {
        if (*(ushort *)(param_3 + 1) < 2) {
          return (long)*(char *)((long)param_3 + 10);
        }
        pdVar19 = (double *)param_3[2];
        lVar16 = *param_3;
        pbVar9 = param_2 + 1;
        if ((char)*pbVar9 < '\0') {
          FUN_108d7d01c(pbVar9,&uStack_b0);
          uVar21 = (int)pbVar9 + 1U & 0xff;
          uVar12 = uStack_b0;
        }
        else {
          uVar21 = 2;
          uVar12 = (int)(char)*pbVar9;
        }
        bVar5 = *param_2;
        uStack_74 = (uint)bVar5;
        if (uVar12 < 0xc) {
          uVar12 = (uint)(byte)(&UNK_10dfa0a57)[uVar12];
        }
        else {
          uVar12 = uVar12 - 0xc >> 1;
        }
        uVar12 = uVar12 + uStack_74;
        uVar15 = 1;
        do {
          pdVar20 = pdVar19 + 7;
          uVar4 = *(ushort *)(pdVar19 + 8);
          if ((uVar4 >> 2 & 1) != 0) {
            bVar3 = param_2[uVar21];
            uVar22 = (uint)bVar3;
            if (0xb < bVar3) {
LAB_108d8ea48:
              uVar14 = 1;
              goto LAB_108d8ea54;
            }
            if (bVar3 == 7) {
              dVar17 = *pdVar20;
              FUN_108d8de6c(param_2 + uVar12,7,&uStack_b0);
              if ((double)(long)dVar17 <= (double)CONCAT44(uStack_ac,uStack_b0)) {
                if ((double)CONCAT44(uStack_ac,uStack_b0) != (double)(long)dVar17)
                goto LAB_108d8ea48;
                uVar22 = 7;
                goto LAB_108d8e9f0;
              }
            }
            else if (bVar3 != 0) {
              puVar1 = (ulong *)(param_2 + uVar12);
              uVar14 = (uint)bVar3;
              if (bVar3 < 4) {
                if (uVar14 == 1) {
                  dVar17 = (double)(long)(char)(byte)*puVar1;
                }
                else if (uVar14 == 2) {
                  dVar17 = (double)(long)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1));
                }
                else {
                  if (uVar14 == 3) {
                    uVar18 = (long)(char)(byte)*puVar1 << 0x10 |
                             (ulong)*(byte *)((long)puVar1 + 1) << 8;
                    bVar3 = *(byte *)((long)puVar1 + 2);
                    goto LAB_108d8e990;
                  }
LAB_108d8e998:
                  dVar17 = (double)(ulong)(uVar14 - 8);
                }
              }
              else if (uVar14 == 4) {
                uVar18 = (long)(int)((uint)(byte)*puVar1 << 0x18) |
                         (ulong)*(byte *)((long)puVar1 + 1) << 0x10 |
                         (ulong)*(byte *)((long)puVar1 + 2) << 8;
                bVar3 = *(byte *)((long)puVar1 + 3);
LAB_108d8e990:
                dVar17 = (double)(uVar18 | bVar3);
              }
              else if (uVar14 == 5) {
                uVar14 = (*(uint *)((long)puVar1 + 2) & 0xff00ff00) >> 8 |
                         (*(uint *)((long)puVar1 + 2) & 0xff00ff) << 8;
                dVar17 = (double)CONCAT44((int)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1)),
                                          uVar14 >> 0x10 | uVar14 << 0x10);
              }
              else {
                if (uVar14 != 6) goto LAB_108d8e998;
                uVar18 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                dVar17 = (double)(uVar18 >> 0x20 | uVar18 << 0x20);
              }
              dVar23 = *pdVar20;
              bVar6 = SBORROW8((long)dVar17,(long)dVar23);
              bVar7 = (long)dVar17 - (long)dVar23 < 0;
              bVar8 = dVar17 == dVar23;
              if ((long)dVar23 <= (long)dVar17) goto LAB_108d8e9d4;
            }
LAB_108d8ea50:
            uVar14 = 0xffffffff;
LAB_108d8ea54:
            uVar21 = -uVar14;
            if (*(char *)(*(long *)(lVar16 + 0x18) + uVar15) == '\0') {
              uVar21 = uVar14;
            }
            return (ulong)uVar21;
          }
          if ((uVar4 >> 3 & 1) != 0) {
            bVar3 = param_2[uVar21];
            uVar22 = (uint)bVar3;
            if (0xb < bVar3) goto LAB_108d8ea48;
            if (bVar3 != 0) {
              dVar23 = *pdVar20;
              FUN_108d89864(param_2 + uVar12,uVar22,&uStack_b0);
              dVar17 = (double)CONCAT44(uStack_ac,uStack_b0);
              if (bVar3 != 7) {
                dVar17 = (double)(long)CONCAT44(uStack_ac,uStack_b0);
              }
              bVar6 = NAN(dVar17) || NAN(dVar23);
              bVar8 = dVar17 == dVar23;
              bVar7 = dVar17 < dVar23;
              if (!bVar7) {
LAB_108d8e9d4:
                if (!bVar8 && bVar7 == bVar6) goto LAB_108d8ea48;
                goto LAB_108d8e9d8;
              }
            }
            goto LAB_108d8ea50;
          }
          pbVar9 = param_2 + uVar21;
          if ((uVar4 >> 1 & 1) == 0) {
            bVar3 = *pbVar9;
            uVar22 = (uint)bVar3;
            if ((uVar4 >> 4 & 1) == 0) {
              uVar13 = (uint)(bVar3 != 0);
            }
            else {
              if ((char)bVar3 < '\0') {
                FUN_108d7d01c(pbVar9,&uStack_b4);
                uVar22 = uStack_b4;
              }
              if (uVar22 < 0xc || (uVar22 & 1) != 0) goto LAB_108d8ea50;
              if (param_1 < uVar12 + (uVar22 - 0xc >> 1)) {
LAB_108d8eab0:
                FUN_108d64c00(0xb,&UNK_10f51799f);
                *(undefined1 *)((long)param_3 + 0xb) = 0xb;
                return 0;
              }
              uVar13 = uVar22 - 0xc >> 1;
LAB_108d8e940:
              uVar2 = *(uint *)((long)pdVar19 + 0x44);
              uVar14 = uVar13;
              if ((int)uVar2 <= (int)uVar13) {
                uVar14 = uVar2;
              }
              pbVar9 = param_2 + uVar12;
              _memcmp(pbVar9,pdVar19[9],(long)(int)uVar14);
              uVar14 = (uint)pbVar9;
              uVar13 = uVar13 - uVar2;
              if (uVar14 != 0) goto LAB_108d8ea54;
            }
          }
          else {
            uVar22 = (int)(char)*pbVar9;
            if ((char)*pbVar9 < 0) {
              FUN_108d7d01c(pbVar9,&uStack_b4);
              uVar22 = uStack_b4;
            }
            uStack_b4 = uVar22;
            uVar22 = uStack_b4;
            if (uStack_b4 < 0xc) goto LAB_108d8ea50;
            if ((uStack_b4 & 1) == 0) goto LAB_108d8ea48;
            uVar13 = uStack_b4 - 0xc >> 1;
            uStack_a4 = uVar13;
            if (param_1 < uVar12 + (uStack_b4 - 0xc >> 1)) goto LAB_108d8eab0;
            lVar11 = *(long *)(lVar16 + 0x20 + uVar15 * 8);
            if (lVar11 == 0) goto LAB_108d8e940;
            uStack_a6 = *(undefined1 *)(lVar16 + 4);
            uStack_88 = *(undefined8 *)(lVar16 + 0x10);
            uStack_a8 = 2;
            pbStack_a0 = param_2 + uVar12;
            puVar10 = &uStack_b0;
            FUN_108d8d9d4(puVar10,pdVar20,lVar11,(long)param_3 + 0xb);
            uVar13 = (uint)puVar10;
          }
          uVar14 = uVar13;
          if (uVar14 != 0) goto LAB_108d8ea54;
LAB_108d8e9d8:
          if (uVar22 < 0xc) {
LAB_108d8e9f0:
            uVar14 = (uint)(byte)(&UNK_10dfa0a57)[uVar22];
          }
          else {
            uVar14 = uVar22 - 0xc >> 1;
          }
          uVar15 = uVar15 + 1;
          uVar18 = (ulong)uVar22;
          uVar22 = 0;
          do {
            uVar13 = uVar22 + 1;
            if (uVar18 < 0x80) break;
            uVar18 = uVar18 >> 7;
            bVar6 = uVar22 < 8;
            uVar22 = uVar13;
          } while (bVar6);
          uVar21 = uVar21 + uVar13;
          if ((bVar5 <= uVar21) ||
             (uVar12 = uVar14 + uVar12, pdVar19 = pdVar20,
             *(ushort *)(param_3 + 1) <= uVar15 || param_1 < uVar12)) {
            return (long)*(char *)((long)param_3 + 10);
          }
        } while( true );
      }
      if ((int)uVar21 <= (int)uVar22) goto LAB_108d8e560;
    }
    else if ((int)pbVar9 < 1) {
LAB_108d8e560:
      return (ulong)*(uint *)(param_3 + 3);
    }
  }
  return (ulong)*(uint *)((long)param_3 + 0x1c);
}



/* Entry: 108d8e654; end: 108d8e65b;  */

/* WARNING: Removing unreachable block (ram,0x000108d8e69c) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6c4) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6a8) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6d8) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6f0) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6e8) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6fc) */

ulong FUN_108d8e654(uint param_1,char *param_2,long *param_3)

{
  byte *pbVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  double *pdVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  double dVar17;
  ulong uVar18;
  double *pdVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  uint uStack_b4;
  double dStack_b0;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  uint uStack_a4;
  char *pcStack_a0;
  undefined8 uStack_88;
  uint uStack_74;
  
  pdVar19 = (double *)param_3[2];
  lVar16 = *param_3;
  if (*param_2 < 0) {
    pcVar20 = param_2;
    FUN_108d7d01c(param_2,&uStack_74);
  }
  else {
    pcVar20 = (char *)0x1;
    uStack_74 = (int)*param_2;
  }
  uVar3 = uStack_74;
  if (param_1 < uStack_74) {
    FUN_108d64c00(0xb,&UNK_10f51799f);
    uVar12 = 0;
    *(undefined1 *)((long)param_3 + 0xb) = 0xb;
  }
  else {
    uVar12 = 0;
    uVar22 = uStack_74;
    do {
      uVar6 = *(ushort *)(pdVar19 + 1);
      if ((uVar6 >> 2 & 1) != 0) {
        bVar5 = param_2[(ulong)pcVar20 & 0xffffffff];
        uVar21 = (uint)bVar5;
        if (0xb < bVar5) {
LAB_108d8ea48:
          uVar15 = 1;
          goto LAB_108d8ea54;
        }
        if (bVar5 == 7) {
          dVar17 = *pdVar19;
          FUN_108d8de6c(param_2 + uVar22,7,&dStack_b0);
          if ((double)(long)dVar17 <= dStack_b0) {
            if (dStack_b0 != (double)(long)dVar17) goto LAB_108d8ea48;
            uVar21 = 7;
            goto LAB_108d8e9f0;
          }
        }
        else if (bVar5 != 0) {
          puVar2 = (ulong *)(param_2 + uVar22);
          uVar15 = (uint)bVar5;
          if (bVar5 < 4) {
            if (uVar15 == 1) {
              dVar17 = (double)(long)(char)(byte)*puVar2;
            }
            else if (uVar15 == 2) {
              dVar17 = (double)(long)CONCAT11((byte)*puVar2,*(byte *)((long)puVar2 + 1));
            }
            else {
              if (uVar15 == 3) {
                uVar18 = (long)(char)(byte)*puVar2 << 0x10 | (ulong)*(byte *)((long)puVar2 + 1) << 8
                ;
                bVar5 = *(byte *)((long)puVar2 + 2);
                goto LAB_108d8e990;
              }
LAB_108d8e998:
              dVar17 = (double)(ulong)(uVar15 - 8);
            }
          }
          else if (uVar15 == 4) {
            uVar18 = (long)(int)((uint)(byte)*puVar2 << 0x18) |
                     (ulong)*(byte *)((long)puVar2 + 1) << 0x10 |
                     (ulong)*(byte *)((long)puVar2 + 2) << 8;
            bVar5 = *(byte *)((long)puVar2 + 3);
LAB_108d8e990:
            dVar17 = (double)(uVar18 | bVar5);
          }
          else if (uVar15 == 5) {
            uVar15 = (*(uint *)((long)puVar2 + 2) & 0xff00ff00) >> 8 |
                     (*(uint *)((long)puVar2 + 2) & 0xff00ff) << 8;
            dVar17 = (double)CONCAT44((int)CONCAT11((byte)*puVar2,*(byte *)((long)puVar2 + 1)),
                                      uVar15 >> 0x10 | uVar15 << 0x10);
          }
          else {
            if (uVar15 != 6) goto LAB_108d8e998;
            uVar18 = (*puVar2 & 0xff00ff00ff00ff00) >> 8 | (*puVar2 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            dVar17 = (double)(uVar18 >> 0x20 | uVar18 << 0x20);
          }
          dVar23 = *pdVar19;
          bVar7 = SBORROW8((long)dVar17,(long)dVar23);
          bVar8 = (long)dVar17 - (long)dVar23 < 0;
          bVar9 = dVar17 == dVar23;
          if ((long)dVar23 <= (long)dVar17) goto LAB_108d8e9d4;
        }
LAB_108d8ea50:
        uVar15 = 0xffffffff;
LAB_108d8ea54:
        uVar3 = -uVar15;
        if (*(char *)(*(long *)(lVar16 + 0x18) + uVar12) == '\0') {
          uVar3 = uVar15;
        }
        return (ulong)uVar3;
      }
      if ((uVar6 >> 3 & 1) != 0) {
        bVar5 = param_2[(ulong)pcVar20 & 0xffffffff];
        uVar21 = (uint)bVar5;
        if (0xb < bVar5) goto LAB_108d8ea48;
        if (bVar5 != 0) {
          dVar23 = *pdVar19;
          FUN_108d89864(param_2 + uVar22,uVar21,&dStack_b0);
          dVar17 = dStack_b0;
          if (bVar5 != 7) {
            dVar17 = (double)(long)dStack_b0;
          }
          bVar7 = NAN(dVar17) || NAN(dVar23);
          bVar9 = dVar17 == dVar23;
          bVar8 = dVar17 < dVar23;
          if (!bVar8) {
LAB_108d8e9d4:
            if (!bVar9 && bVar8 == bVar7) goto LAB_108d8ea48;
            goto LAB_108d8e9d8;
          }
        }
        goto LAB_108d8ea50;
      }
      pbVar1 = (byte *)(param_2 + ((ulong)pcVar20 & 0xffffffff));
      if ((uVar6 >> 1 & 1) == 0) {
        bVar5 = *pbVar1;
        uVar21 = (uint)bVar5;
        if ((uVar6 >> 4 & 1) == 0) {
          uVar14 = (uint)(bVar5 != 0);
        }
        else {
          if ((char)bVar5 < '\0') {
            FUN_108d7d01c(pbVar1,&uStack_b4);
            uVar21 = uStack_b4;
          }
          if (uVar21 < 0xc || (uVar21 & 1) != 0) goto LAB_108d8ea50;
          if (param_1 < uVar22 + (uVar21 - 0xc >> 1)) {
LAB_108d8eab0:
            FUN_108d64c00(0xb,&UNK_10f51799f);
            *(undefined1 *)((long)param_3 + 0xb) = 0xb;
            return 0;
          }
          uVar14 = uVar21 - 0xc >> 1;
LAB_108d8e940:
          uVar4 = *(uint *)((long)pdVar19 + 0xc);
          uVar15 = uVar14;
          if ((int)uVar4 <= (int)uVar14) {
            uVar15 = uVar4;
          }
          pcVar11 = param_2 + uVar22;
          _memcmp(pcVar11,pdVar19[2],(long)(int)uVar15);
          uVar15 = (uint)pcVar11;
          uVar14 = uVar14 - uVar4;
          if (uVar15 != 0) goto LAB_108d8ea54;
        }
      }
      else {
        uVar21 = (int)(char)*pbVar1;
        if ((char)*pbVar1 < 0) {
          FUN_108d7d01c(pbVar1,&uStack_b4);
          uVar21 = uStack_b4;
        }
        uStack_b4 = uVar21;
        uVar21 = uStack_b4;
        if (uStack_b4 < 0xc) goto LAB_108d8ea50;
        if ((uStack_b4 & 1) == 0) goto LAB_108d8ea48;
        uVar14 = uStack_b4 - 0xc >> 1;
        uStack_a4 = uVar14;
        if (param_1 < uVar22 + (uStack_b4 - 0xc >> 1)) goto LAB_108d8eab0;
        lVar13 = *(long *)(lVar16 + 0x20 + uVar12 * 8);
        if (lVar13 == 0) goto LAB_108d8e940;
        uStack_a6 = *(undefined1 *)(lVar16 + 4);
        uStack_88 = *(undefined8 *)(lVar16 + 0x10);
        uStack_a8 = 2;
        pcStack_a0 = param_2 + uVar22;
        pdVar10 = &dStack_b0;
        FUN_108d8d9d4(pdVar10,pdVar19,lVar13,(long)param_3 + 0xb);
        uVar14 = (uint)pdVar10;
      }
      uVar15 = uVar14;
      if (uVar15 != 0) goto LAB_108d8ea54;
LAB_108d8e9d8:
      if (uVar21 < 0xc) {
LAB_108d8e9f0:
        uVar15 = (uint)(byte)(&UNK_10dfa0a57)[uVar21];
      }
      else {
        uVar15 = uVar21 - 0xc >> 1;
      }
      uVar12 = uVar12 + 1;
      pdVar19 = pdVar19 + 7;
      uVar18 = (ulong)uVar21;
      uVar21 = 0;
      do {
        uVar14 = uVar21 + 1;
        if (uVar18 < 0x80) break;
        uVar18 = uVar18 >> 7;
        bVar7 = uVar21 < 8;
        uVar21 = uVar14;
      } while (bVar7);
      uVar14 = (int)pcVar20 + uVar14;
      pcVar20 = (char *)(ulong)uVar14;
    } while ((uVar14 < uVar3) &&
            (uVar22 = uVar15 + uVar22, uVar12 < *(ushort *)(param_3 + 1) && uVar22 <= param_1));
    uVar12 = (ulong)*(char *)((long)param_3 + 10);
  }
  return uVar12;
}



/* Entry: 108d8e65c; end: 108d8eadb;  */

ulong FUN_108d8e65c(uint param_1,byte *param_2,long *param_3,int param_4)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte *pbVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  double dVar16;
  ulong uVar17;
  double *pdVar18;
  byte *pbVar19;
  uint uVar20;
  ulong uVar21;
  double dVar22;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  uint uStack_a4;
  byte *pbStack_a0;
  undefined8 uStack_88;
  uint uStack_74;
  
  pdVar18 = (double *)param_3[2];
  lVar15 = *param_3;
  if (param_4 == 0) {
    if ((char)*param_2 < 0) {
      pbVar19 = param_2;
      FUN_108d7d01c(param_2,&uStack_74);
    }
    else {
      pbVar19 = (byte *)0x1;
      uStack_74 = (int)(char)*param_2;
    }
    if (param_1 < uStack_74) {
      FUN_108d64c00(0xb,&UNK_10f51799f);
      *(undefined1 *)((long)param_3 + 0xb) = 0xb;
      return 0;
    }
    uVar21 = 0;
    uVar12 = uStack_74;
  }
  else {
    pbVar9 = param_2 + 1;
    if ((char)*pbVar9 < '\0') {
      FUN_108d7d01c(pbVar9,&uStack_b0);
      pbVar19 = (byte *)(ulong)((int)pbVar9 + 1U & 0xff);
      uVar12 = uStack_b0;
    }
    else {
      pbVar19 = (byte *)0x2;
      uVar12 = (int)(char)*pbVar9;
    }
    uStack_74 = (uint)*param_2;
    if (uVar12 < 0xc) {
      uVar12 = (uint)(byte)(&UNK_10dfa0a57)[uVar12];
    }
    else {
      uVar12 = uVar12 - 0xc >> 1;
    }
    pdVar18 = pdVar18 + 7;
    uVar21 = 1;
    uVar12 = uVar12 + uStack_74;
  }
  uVar5 = uStack_74;
  do {
    uVar4 = *(ushort *)(pdVar18 + 1);
    if ((uVar4 >> 2 & 1) != 0) {
      bVar3 = param_2[(ulong)pbVar19 & 0xffffffff];
      uVar20 = (uint)bVar3;
      if (0xb < bVar3) {
LAB_108d8ea48:
        uVar14 = 1;
        goto LAB_108d8ea54;
      }
      if (bVar3 == 7) {
        dVar16 = *pdVar18;
        FUN_108d8de6c(param_2 + uVar12,7,&uStack_b0);
        if ((double)(long)dVar16 <= (double)CONCAT44(uStack_ac,uStack_b0)) {
          if ((double)CONCAT44(uStack_ac,uStack_b0) != (double)(long)dVar16) goto LAB_108d8ea48;
          uVar20 = 7;
          goto LAB_108d8e9f0;
        }
      }
      else if (bVar3 != 0) {
        puVar1 = (ulong *)(param_2 + uVar12);
        uVar14 = (uint)bVar3;
        if (bVar3 < 4) {
          if (uVar14 == 1) {
            dVar16 = (double)(long)(char)(byte)*puVar1;
          }
          else if (uVar14 == 2) {
            dVar16 = (double)(long)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1));
          }
          else {
            if (uVar14 == 3) {
              uVar17 = (long)(char)(byte)*puVar1 << 0x10 | (ulong)*(byte *)((long)puVar1 + 1) << 8;
              bVar3 = *(byte *)((long)puVar1 + 2);
              goto LAB_108d8e990;
            }
LAB_108d8e998:
            dVar16 = (double)(ulong)(uVar14 - 8);
          }
        }
        else if (uVar14 == 4) {
          uVar17 = (long)(int)((uint)(byte)*puVar1 << 0x18) |
                   (ulong)*(byte *)((long)puVar1 + 1) << 0x10 |
                   (ulong)*(byte *)((long)puVar1 + 2) << 8;
          bVar3 = *(byte *)((long)puVar1 + 3);
LAB_108d8e990:
          dVar16 = (double)(uVar17 | bVar3);
        }
        else if (uVar14 == 5) {
          uVar14 = (*(uint *)((long)puVar1 + 2) & 0xff00ff00) >> 8 |
                   (*(uint *)((long)puVar1 + 2) & 0xff00ff) << 8;
          dVar16 = (double)CONCAT44((int)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1)),
                                    uVar14 >> 0x10 | uVar14 << 0x10);
        }
        else {
          if (uVar14 != 6) goto LAB_108d8e998;
          uVar17 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          dVar16 = (double)(uVar17 >> 0x20 | uVar17 << 0x20);
        }
        dVar22 = *pdVar18;
        bVar6 = SBORROW8((long)dVar16,(long)dVar22);
        bVar7 = (long)dVar16 - (long)dVar22 < 0;
        bVar8 = dVar16 == dVar22;
        if ((long)dVar22 <= (long)dVar16) goto LAB_108d8e9d4;
      }
LAB_108d8ea50:
      uVar14 = 0xffffffff;
LAB_108d8ea54:
      uVar12 = -uVar14;
      if (*(char *)(*(long *)(lVar15 + 0x18) + uVar21) == '\0') {
        uVar12 = uVar14;
      }
      return (ulong)uVar12;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      bVar3 = param_2[(ulong)pbVar19 & 0xffffffff];
      uVar20 = (uint)bVar3;
      if (0xb < bVar3) goto LAB_108d8ea48;
      if (bVar3 != 0) {
        dVar22 = *pdVar18;
        FUN_108d89864(param_2 + uVar12,uVar20,&uStack_b0);
        dVar16 = (double)CONCAT44(uStack_ac,uStack_b0);
        if (bVar3 != 7) {
          dVar16 = (double)(long)CONCAT44(uStack_ac,uStack_b0);
        }
        bVar6 = NAN(dVar16) || NAN(dVar22);
        bVar8 = dVar16 == dVar22;
        bVar7 = dVar16 < dVar22;
        if (!bVar7) {
LAB_108d8e9d4:
          if (!bVar8 && bVar7 == bVar6) goto LAB_108d8ea48;
          goto LAB_108d8e9d8;
        }
      }
      goto LAB_108d8ea50;
    }
    pbVar9 = param_2 + ((ulong)pbVar19 & 0xffffffff);
    if ((uVar4 >> 1 & 1) == 0) {
      bVar3 = *pbVar9;
      uVar20 = (uint)bVar3;
      if ((uVar4 >> 4 & 1) == 0) {
        uVar13 = (uint)(bVar3 != 0);
      }
      else {
        if ((char)bVar3 < '\0') {
          FUN_108d7d01c(pbVar9,&uStack_b4);
          uVar20 = uStack_b4;
        }
        if (uVar20 < 0xc || (uVar20 & 1) != 0) goto LAB_108d8ea50;
        if (param_1 < uVar12 + (uVar20 - 0xc >> 1)) {
LAB_108d8eab0:
          FUN_108d64c00(0xb,&UNK_10f51799f);
          *(undefined1 *)((long)param_3 + 0xb) = 0xb;
          return 0;
        }
        uVar13 = uVar20 - 0xc >> 1;
LAB_108d8e940:
        uVar2 = *(uint *)((long)pdVar18 + 0xc);
        uVar14 = uVar13;
        if ((int)uVar2 <= (int)uVar13) {
          uVar14 = uVar2;
        }
        pbVar9 = param_2 + uVar12;
        _memcmp(pbVar9,pdVar18[2],(long)(int)uVar14);
        uVar14 = (uint)pbVar9;
        uVar13 = uVar13 - uVar2;
        if (uVar14 != 0) goto LAB_108d8ea54;
      }
    }
    else {
      uVar20 = (int)(char)*pbVar9;
      if ((char)*pbVar9 < 0) {
        FUN_108d7d01c(pbVar9,&uStack_b4);
        uVar20 = uStack_b4;
      }
      uStack_b4 = uVar20;
      uVar20 = uStack_b4;
      if (uStack_b4 < 0xc) goto LAB_108d8ea50;
      if ((uStack_b4 & 1) == 0) goto LAB_108d8ea48;
      uVar13 = uStack_b4 - 0xc >> 1;
      uStack_a4 = uVar13;
      if (param_1 < uVar12 + (uStack_b4 - 0xc >> 1)) goto LAB_108d8eab0;
      lVar11 = *(long *)(lVar15 + 0x20 + uVar21 * 8);
      if (lVar11 == 0) goto LAB_108d8e940;
      uStack_a6 = *(undefined1 *)(lVar15 + 4);
      uStack_88 = *(undefined8 *)(lVar15 + 0x10);
      uStack_a8 = 2;
      pbStack_a0 = param_2 + uVar12;
      puVar10 = &uStack_b0;
      FUN_108d8d9d4(puVar10,pdVar18,lVar11,(long)param_3 + 0xb);
      uVar13 = (uint)puVar10;
    }
    uVar14 = uVar13;
    if (uVar14 != 0) goto LAB_108d8ea54;
LAB_108d8e9d8:
    if (uVar20 < 0xc) {
LAB_108d8e9f0:
      uVar14 = (uint)(byte)(&UNK_10dfa0a57)[uVar20];
    }
    else {
      uVar14 = uVar20 - 0xc >> 1;
    }
    uVar21 = uVar21 + 1;
    pdVar18 = pdVar18 + 7;
    uVar17 = (ulong)uVar20;
    uVar20 = 0;
    do {
      uVar13 = uVar20 + 1;
      if (uVar17 < 0x80) break;
      uVar17 = uVar17 >> 7;
      bVar6 = uVar20 < 8;
      uVar20 = uVar13;
    } while (bVar6);
    uVar13 = (int)pbVar19 + uVar13;
    pbVar19 = (byte *)(ulong)uVar13;
    if ((uVar5 <= uVar13) ||
       (uVar12 = uVar14 + uVar12, *(ushort *)(param_3 + 1) <= uVar21 || param_1 < uVar12)) {
      return (long)*(char *)((long)param_3 + 10);
    }
  } while( true );
}



/* Entry: 108d8eadc; end: 108d8ee6f;  */

long FUN_108d8eadc(long param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  while( true ) {
    bVar6 = *(byte *)(param_1 + 0x6d);
    if (bVar6 != 1) {
      if (2 < bVar6) {
        lVar9 = param_1;
        func_0x000108d8dc64();
        if ((int)lVar9 != 0) {
          return lVar9;
        }
        bVar6 = *(byte *)(param_1 + 0x6d);
      }
      if (bVar6 == 0) {
        *param_2 = 1;
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0x68);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x6d) = 1;
        *(undefined4 *)(param_1 + 0x68) = 0;
        if (0 < iVar3) {
          return 0;
        }
      }
    }
    lVar8 = (long)*(short *)(param_1 + 0x70);
    lVar7 = *(long *)(param_1 + 0xa0 + lVar8 * 8);
    lVar9 = param_1 + 0x72;
    uVar1 = *(short *)(lVar9 + lVar8 * 2) + 1;
    *(ushort *)(lVar9 + lVar8 * 2) = uVar1;
    if (uVar1 < *(ushort *)(lVar7 + 0x12)) break;
    if (*(char *)(lVar7 + 5) == '\0') {
      uVar4 = *(uint *)(*(long *)(lVar7 + 0x50) + (ulong)*(byte *)(lVar7 + 6) + 8);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      lVar9 = param_1;
      FUN_108d8e180(param_1,uVar4 >> 0x10 | uVar4 << 0x10);
      if ((int)lVar9 != 0) {
        return lVar9;
      }
      goto LAB_108d8ec30;
    }
    sVar5 = *(short *)(param_1 + 0x70);
    do {
      if (sVar5 == 0) {
        *param_2 = 1;
        *(undefined1 *)(param_1 + 0x6d) = 0;
        return 0;
      }
      func_0x000108d8e128(param_1);
      sVar5 = *(short *)(param_1 + 0x70);
      lVar7 = *(long *)(param_1 + 0xa0 + (long)sVar5 * 8);
    } while (*(ushort *)(lVar7 + 0x12) <= *(ushort *)(lVar9 + (long)sVar5 * 2));
    if (*(char *)(lVar7 + 2) == '\0') {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf9;
    *param_2 = 0;
    if (*(char *)(param_1 + 0x6d) == '\x01') {
      lVar8 = (long)*(short *)(param_1 + 0x70);
      lVar9 = param_1 + 0x72;
      lVar7 = *(long *)(param_1 + lVar8 * 8 + 0xa0);
      uVar1 = *(short *)(lVar9 + lVar8 * 2) + 1;
      *(ushort *)(lVar9 + lVar8 * 2) = uVar1;
      if (uVar1 < *(ushort *)(lVar7 + 0x12)) {
        if (*(char *)(lVar7 + 5) != '\0') {
          return 0;
        }
LAB_108d8ec30:
        do {
          lVar9 = *(long *)(param_1 + 0xa0 + (long)*(short *)(param_1 + 0x70) * 8);
          if (*(char *)(lVar9 + 5) != '\0') {
            return 0;
          }
          puVar2 = (undefined1 *)
                   (*(long *)(lVar9 + 0x60) +
                   (ulong)*(ushort *)(param_1 + 0x72 + (long)*(short *)(param_1 + 0x70) * 2) * 2);
          uVar4 = *(uint *)(*(long *)(lVar9 + 0x50) +
                           (ulong)(CONCAT11(*puVar2,puVar2[1]) & *(ushort *)(lVar9 + 0x14)));
          uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
          lVar9 = param_1;
          FUN_108d8e180(param_1,uVar4 >> 0x10 | uVar4 << 0x10);
        } while ((int)lVar9 == 0);
        return lVar9;
      }
      *(short *)(lVar9 + (long)*(short *)(param_1 + 0x70) * 2) =
           *(short *)(lVar9 + (long)*(short *)(param_1 + 0x70) * 2) + -1;
    }
  }
  if (*(char *)(lVar7 + 5) != '\0') {
    return 0;
  }
  goto LAB_108d8ec30;
}



/* Entry: 108d8ee70; end: 108d8f03f;  */

long FUN_108d8ee70(long param_1,long param_2,undefined2 *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lStack_80;
  uint uStack_74;
  undefined1 auStack_70 [16];
  int iStack_60;
  ushort uStack_5c;
  ushort uStack_5a;
  undefined2 uStack_58;
  
  lVar6 = *(long *)(param_1 + 0x48);
  FUN_108d7cec4(param_1,param_2,auStack_70);
  *param_3 = uStack_58;
  if ((ulong)uStack_5a != 0) {
    puVar2 = (uint *)(param_2 + (ulong)uStack_5a);
    if (*(long *)(param_1 + 0x50) + (ulong)*(ushort *)(param_1 + 0x14) < (long)puVar2 + 3U) {
LAB_108d8eee0:
      FUN_108d64c00(0xb,&UNK_10f51799f);
      return 0xb;
    }
    uVar4 = *(int *)(lVar6 + 0x38) - 4;
    uVar1 = ~(uint)uStack_5c + iStack_60 + uVar4;
    if (uVar4 <= uVar1) {
      uVar3 = *puVar2;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar9 = 0;
      if (uVar4 != 0) {
        uVar9 = uVar1 / uVar4;
      }
      do {
        uStack_74 = 0;
        lStack_80 = 0;
        if ((uVar3 < 2) || (*(uint *)(lVar6 + 0x40) < uVar3)) goto LAB_108d8eee0;
        uVar9 = uVar9 - 1;
        lVar8 = lVar6;
        if (uVar9 == 0) {
LAB_108d8efa4:
          lVar5 = lVar6;
          FUN_108d90afc(lVar6,uVar3);
          if (lVar5 != 0) goto LAB_108d8efb8;
          FUN_108d90b7c(lVar6,0,uVar3);
          iVar7 = (int)lVar8;
          uVar3 = uStack_74;
        }
        else {
          lVar5 = lVar6;
          FUN_108d7d5b0(lVar6,uVar3,&lStack_80,&uStack_74);
          if ((int)lVar5 != 0) {
            return lVar5;
          }
          lVar5 = lStack_80;
          if (lStack_80 == 0) goto LAB_108d8efa4;
LAB_108d8efb8:
          if (*(short *)(*(long *)(lVar5 + 0x68) + 0x2e) == 1) {
            FUN_108d90b7c(lVar6,lVar5,uVar3);
          }
          else {
            lVar8 = 0xb;
            FUN_108d64c00(0xb,&UNK_10f51799f);
          }
          if (*(long *)(lVar5 + 0x68) != 0) {
            func_0x000108d787d8();
          }
          iVar7 = (int)lVar8;
          uVar3 = uStack_74;
        }
        if (iVar7 != 0) {
          return lVar8;
        }
      } while (uVar9 != 0);
    }
  }
  return 0;
}



/* Entry: 108d8f040; end: 108d8f197;  */

void FUN_108d8f040(long param_1,int param_2,int param_3,int *param_4)

{
  ushort *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  short sVar6;
  
  if (*param_4 != 0) {
    return;
  }
  puVar1 = (ushort *)(*(long *)(param_1 + 0x60) + (long)param_2 * 2);
  uVar3 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
  lVar2 = *(long *)(param_1 + 0x50) + (ulong)*(byte *)(param_1 + 6);
  if ((uVar3 < ((uint)(*(ushort *)(lVar2 + 5) >> 8) | (*(ushort *)(lVar2 + 5) & 0xff00ff) << 8)) ||
     (*(uint *)(*(long *)(param_1 + 0x48) + 0x38) < uVar3 + param_3)) {
    FUN_108d64c00(0xb,&UNK_10f51799f);
    *param_4 = 0xb;
  }
  else {
    lVar5 = param_1;
    FUN_108d90ec0();
    if ((int)lVar5 == 0) {
      uVar4 = *(short *)(param_1 + 0x12) - 1;
      *(ushort *)(param_1 + 0x12) = uVar4;
      if (uVar4 == 0) {
        *(undefined4 *)(lVar2 + 1) = 0;
        *(undefined1 *)(lVar2 + 7) = 0;
        *(char *)(lVar2 + 5) = (char)((uint)*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x38) >> 8);
        *(char *)(lVar2 + 6) = (char)*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x38);
        sVar6 = ((short)*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x38) -
                ((ushort)*(byte *)(param_1 + 6) + (ushort)*(byte *)(param_1 + 7))) + -8;
      }
      else {
        _memmove(puVar1,puVar1 + 1,(long)(int)(((uint)uVar4 - param_2) * 2));
        *(undefined1 *)(lVar2 + 3) = *(undefined1 *)(param_1 + 0x13);
        *(undefined1 *)(lVar2 + 4) = *(undefined1 *)(param_1 + 0x12);
        sVar6 = *(short *)(param_1 + 0x10) + 2;
      }
      *(short *)(param_1 + 0x10) = sVar6;
    }
    else {
      *param_4 = (int)lVar5;
    }
  }
  return;
}



/* Entry: 108d8f198; end: 108d90afb;  */

void FUN_108d8f198(long param_1,int param_2,uint *param_3,undefined8 param_4,uint *param_5,
                  uint param_6,int *param_7)

{
  long lVar1;
  ushort *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iStack_68;
  int iStack_64;
  
  if (*param_7 != 0) {
    return;
  }
  iVar9 = (int)param_4;
  if ((*(char *)(param_1 + 1) != '\0') || ((int)(uint)*(ushort *)(param_1 + 0x10) < iVar9 + 2)) {
    if (param_5 != (uint *)0x0) {
      _memcpy(param_5,param_3,(long)iVar9);
      param_3 = param_5;
    }
    if (param_6 != 0) {
      uVar6 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
      *param_3 = uVar6 >> 0x10 | uVar6 << 0x10;
    }
    bVar3 = *(byte *)(param_1 + 1);
    *(byte *)(param_1 + 1) = bVar3 + 1;
    *(uint **)(param_1 + (ulong)bVar3 * 8 + 0x20) = param_3;
    *(short *)(param_1 + (ulong)bVar3 * 2 + 0x16) = (short)param_2;
    return;
  }
  iVar10 = (int)*(undefined8 *)(param_1 + 0x68);
  FUN_108d5ffdc();
  if (iVar10 != 0) {
    *param_7 = iVar10;
    return;
  }
  lVar8 = *(long *)(param_1 + 0x50);
  uVar4 = *(ushort *)(param_1 + 0xe);
  uVar5 = *(ushort *)(param_1 + 0x12);
  iStack_64 = 0;
  uVar6 = (uint)uVar4 + (uint)uVar5 * 2;
  lVar1 = lVar8 + (ulong)*(byte *)(param_1 + 6);
  uVar11 = (CONCAT11(*(undefined1 *)(lVar1 + 5),*(undefined1 *)(lVar1 + 6)) - 1 & 0xffff) + 1;
  if (uVar11 < uVar6) {
    FUN_108d64c00(0xb,&UNK_10f51799f);
    iVar10 = 0xb;
LAB_108d8f354:
    *param_7 = iVar10;
  }
  else {
    uVar6 = uVar6 + 2;
    if ((uVar11 < uVar6) || ((*(char *)(lVar1 + 1) == '\0' && (*(char *)(lVar1 + 2) == '\0')))) {
LAB_108d8f2e8:
      if ((int)uVar11 < (int)(uVar6 + iVar9)) {
LAB_108d8f340:
        lVar7 = param_1;
        FUN_108d9122c();
        iVar10 = (int)lVar7;
        if ((int)lVar7 != 0) goto LAB_108d8f354;
        uVar11 = (CONCAT11(*(undefined1 *)(lVar1 + 5),*(undefined1 *)(lVar1 + 6)) - 1 & 0xffff) + 1;
      }
      uVar11 = uVar11 - iVar9;
      *(ushort *)(lVar1 + 5) = (ushort)(uVar11 >> 8) & 0xff | (ushort)((uVar11 & 0xff00ff) << 8);
    }
    else {
      iStack_68 = 0;
      lVar7 = param_1;
      FUN_108d91114(param_1,param_4,&iStack_64,&iStack_68);
      iVar10 = iStack_64;
      if (iStack_64 != 0) goto LAB_108d8f354;
      if (iStack_68 != 0) goto LAB_108d8f340;
      if (lVar7 == 0) goto LAB_108d8f2e8;
      uVar11 = (int)lVar7 - (int)lVar8;
    }
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) - (short)(iVar9 + 2);
    _memcpy((uint *)(lVar8 + (int)uVar11),param_3,(long)iVar9);
    if (param_6 != 0) {
      uVar6 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
      *(uint *)(lVar8 + (int)uVar11) = uVar6 >> 0x10 | uVar6 << 0x10;
    }
    puVar2 = (ushort *)(lVar8 + (ulong)uVar4 + (long)param_2 * 2);
    _memmove(puVar2 + 1,puVar2,(long)(int)(((uint)uVar5 - param_2) * 2));
    *puVar2 = (ushort)(uVar11 >> 8) & 0xff | (ushort)((uVar11 & 0xff00ff) << 8);
    *(undefined1 *)(lVar8 + (ulong)*(byte *)(param_1 + 6) + 3) = *(undefined1 *)(param_1 + 0x13);
    *(undefined1 *)(lVar8 + (ulong)*(byte *)(param_1 + 6) + 4) = *(undefined1 *)(param_1 + 0x12);
    if (*(char *)(*(long *)(param_1 + 0x48) + 0x21) != '\0') {
      func_0x000108d80b50(param_1,param_3,param_7);
    }
  }
  return;
}



/* Entry: 108d90afc; end: 108d90b7b;  */

void FUN_108d90afc(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar1 = *(undefined8 *)(*(long *)(lVar4 + 0x130) + 0x40);
  (*pcRam00000001132979f8)(uVar1,param_2,0);
  lVar4 = *(long *)(lVar4 + 0x130);
  FUN_108d7663c(lVar4,param_2,uVar1);
  if (lVar4 != 0) {
    lVar2 = *(long *)(lVar4 + 0x10);
    uVar1 = *(undefined8 *)(lVar4 + 8);
    *(long *)(lVar2 + 0x68) = lVar4;
    *(long **)(lVar2 + 0x48) = param_1;
    *(undefined8 *)(lVar2 + 0x50) = uVar1;
    *(int *)(lVar2 + 0x70) = (int)param_2;
    uVar3 = 100;
    if ((int)param_2 != 1) {
      uVar3 = 0;
    }
    *(undefined1 *)(lVar2 + 6) = uVar3;
  }
  return;
}



/* Entry: 108d90b7c; end: 108d90dff;  */

undefined1 * FUN_108d90b7c(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uStack_64;
  undefined1 *puStack_60;
  long lStack_58;
  
  lStack_58 = 0;
  lVar6 = *(long *)(param_1 + 0x18);
  if (param_2 == (undefined1 *)0x0) {
    param_2 = param_1;
    FUN_108d90afc(param_1,param_3);
  }
  else {
    *(short *)(*(long *)(param_2 + 0x68) + 0x2e) = *(short *)(*(long *)(param_2 + 0x68) + 0x2e) + 1;
  }
  puVar3 = *(undefined1 **)(lVar6 + 0x68);
  puStack_60 = param_2;
  FUN_108d5ffdc();
  uStack_64 = (uint)puVar3;
  if (uStack_64 == 0) {
    uVar5 = *(uint *)(*(long *)(lVar6 + 0x50) + 0x24);
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar1 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = uVar1 + 1;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    *(uint *)(*(long *)(lVar6 + 0x50) + 0x24) = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((*(ushort *)(param_1 + 0x28) >> 2 & 1) == 0) {
LAB_108d90c94:
      if (param_1[0x21] != '\0') {
        FUN_108d80634(param_1,param_3,2,0,&uStack_64);
        puVar3 = (undefined1 *)(ulong)uStack_64;
        if (uStack_64 != 0) goto LAB_108d90bec;
      }
      uVar4 = (uint)param_3;
      uVar5 = 0;
      if (uVar1 == 0) {
LAB_108d90da8:
        if ((param_2 != (undefined1 *)0x0) ||
           (func_0x000108d7be68(param_1,param_3,&puStack_60,0), param_2 = puStack_60,
           puVar3 = param_1, (int)param_1 == 0)) {
          puVar3 = *(undefined1 **)(param_2 + 0x68);
          FUN_108d5ffdc();
          if ((int)puVar3 == 0) {
            uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
            **(uint **)(param_2 + 0x50) = uVar5 >> 0x10 | uVar5 << 0x10;
            *(undefined4 *)(*(long *)(param_2 + 0x50) + 4) = 0;
            uVar5 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            *(uint *)(*(long *)(lVar6 + 0x50) + 0x20) = uVar5 >> 0x10 | uVar5 << 0x10;
          }
          goto LAB_108d90bf0;
        }
      }
      else {
        uVar5 = *(uint *)(*(long *)(lVar6 + 0x50) + 0x20);
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        puVar3 = param_1;
        func_0x000108d7be68(param_1,uVar5,&lStack_58,0);
        lVar2 = lStack_58;
        if ((int)puVar3 == 0) {
          uVar1 = *(uint *)(*(long *)(lStack_58 + 0x50) + 4);
          uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
          uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
          if ((*(uint *)(param_1 + 0x38) >> 2) - 2 < uVar1) {
            FUN_108d64c00(0xb,&UNK_10f51799f);
            puVar3 = (undefined1 *)0xb;
          }
          else {
            if ((*(uint *)(param_1 + 0x38) >> 2) - 8 <= uVar1) goto LAB_108d90da8;
            puVar3 = *(undefined1 **)(lStack_58 + 0x68);
            FUN_108d5ffdc();
            if ((int)puVar3 == 0) {
              uVar5 = (uVar1 + 1 & 0xff00ff00) >> 8 | (uVar1 + 1 & 0xff00ff) << 8;
              *(uint *)(*(long *)(lVar2 + 0x50) + 4) = uVar5 >> 0x10 | uVar5 << 0x10;
              uVar5 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              *(uint *)(*(long *)(lVar2 + 0x50) + (ulong)(uVar1 * 4 + 8)) =
                   uVar5 >> 0x10 | uVar5 << 0x10;
              if ((param_2 != (undefined1 *)0x0) && ((*(ushort *)(param_1 + 0x28) >> 2 & 1) == 0)) {
                lVar6 = *(long *)(param_2 + 0x68);
                if (((*(ushort *)(lVar6 + 0x2c) >> 1 & 1) != 0) &&
                   (*(int *)(*(long *)(lVar6 + 0x20) + 0x80) == 0)) {
                  *(ushort *)(lVar6 + 0x2c) = *(ushort *)(lVar6 + 0x2c) | 0x20;
                }
              }
              FUN_108d90e00(param_1,param_3);
              puVar3 = param_1;
            }
          }
        }
      }
      goto LAB_108d90bec;
    }
    if ((param_2 == (undefined1 *)0x0) &&
       (puVar3 = param_1, func_0x000108d7be68(param_1,param_3,&puStack_60,0), param_2 = puStack_60,
       (int)puVar3 != 0)) goto LAB_108d90bec;
    puVar3 = *(undefined1 **)(param_2 + 0x68);
    FUN_108d5ffdc();
    uStack_64 = (uint)puVar3;
    if (uStack_64 == 0) {
      _bzero(*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(*(long *)(param_2 + 0x48) + 0x34));
      goto LAB_108d90c94;
    }
  }
  else {
LAB_108d90bec:
    if (param_2 == (undefined1 *)0x0) goto LAB_108d90bfc;
  }
LAB_108d90bf0:
  *param_2 = 0;
  func_0x000108d787d8(*(undefined8 *)(param_2 + 0x68));
LAB_108d90bfc:
  if (lStack_58 != 0) {
    func_0x000108d787d8(*(undefined8 *)(lStack_58 + 0x68));
  }
  return puVar3;
}



/* Entry: 108d90e00; end: 108d90ebf;  */

uint * FUN_108d90e00(long param_1,uint param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar4 = *(uint **)(param_1 + 0x60);
  if (puVar4 == (uint *)0x0) {
    uVar8 = *(uint *)(param_1 + 0x40);
    puVar4 = (uint *)0x200;
    FUN_108d60848();
    if (puVar4 == (uint *)0x0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      return (uint *)0x7;
    }
    puVar4[0x7a] = 0;
    puVar4[0x7b] = 0;
    puVar4[0x78] = 0;
    puVar4[0x79] = 0;
    puVar4[0x7e] = 0;
    puVar4[0x7f] = 0;
    puVar4[0x7c] = 0;
    puVar4[0x7d] = 0;
    puVar4[0x72] = 0;
    puVar4[0x73] = 0;
    puVar4[0x70] = 0;
    puVar4[0x71] = 0;
    puVar4[0x76] = 0;
    puVar4[0x77] = 0;
    puVar4[0x74] = 0;
    puVar4[0x75] = 0;
    puVar4[0x6a] = 0;
    puVar4[0x6b] = 0;
    puVar4[0x68] = 0;
    puVar4[0x69] = 0;
    puVar4[0x6e] = 0;
    puVar4[0x6f] = 0;
    puVar4[0x6c] = 0;
    puVar4[0x6d] = 0;
    puVar4[0x62] = 0;
    puVar4[99] = 0;
    puVar4[0x60] = 0;
    puVar4[0x61] = 0;
    puVar4[0x66] = 0;
    puVar4[0x67] = 0;
    puVar4[100] = 0;
    puVar4[0x65] = 0;
    puVar4[0x5a] = 0;
    puVar4[0x5b] = 0;
    puVar4[0x58] = 0;
    puVar4[0x59] = 0;
    puVar4[0x5e] = 0;
    puVar4[0x5f] = 0;
    puVar4[0x5c] = 0;
    puVar4[0x5d] = 0;
    puVar4[0x52] = 0;
    puVar4[0x53] = 0;
    puVar4[0x50] = 0;
    puVar4[0x51] = 0;
    puVar4[0x56] = 0;
    puVar4[0x57] = 0;
    puVar4[0x54] = 0;
    puVar4[0x55] = 0;
    puVar4[0x4a] = 0;
    puVar4[0x4b] = 0;
    puVar4[0x48] = 0;
    puVar4[0x49] = 0;
    puVar4[0x4e] = 0;
    puVar4[0x4f] = 0;
    puVar4[0x4c] = 0;
    puVar4[0x4d] = 0;
    puVar4[0x42] = 0;
    puVar4[0x43] = 0;
    puVar4[0x40] = 0;
    puVar4[0x41] = 0;
    puVar4[0x46] = 0;
    puVar4[0x47] = 0;
    puVar4[0x44] = 0;
    puVar4[0x45] = 0;
    puVar4[0x3a] = 0;
    puVar4[0x3b] = 0;
    puVar4[0x38] = 0;
    puVar4[0x39] = 0;
    puVar4[0x3e] = 0;
    puVar4[0x3f] = 0;
    puVar4[0x3c] = 0;
    puVar4[0x3d] = 0;
    puVar4[0x32] = 0;
    puVar4[0x33] = 0;
    puVar4[0x30] = 0;
    puVar4[0x31] = 0;
    puVar4[0x36] = 0;
    puVar4[0x37] = 0;
    puVar4[0x34] = 0;
    puVar4[0x35] = 0;
    puVar4[0x2a] = 0;
    puVar4[0x2b] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x22] = 0;
    puVar4[0x23] = 0;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x26] = 0;
    puVar4[0x27] = 0;
    puVar4[0x24] = 0;
    puVar4[0x25] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *puVar4 = uVar8;
    *(uint **)(param_1 + 0x60) = puVar4;
  }
  else {
    uVar8 = *puVar4;
  }
  if (uVar8 < param_2) {
    return (uint *)0x0;
  }
  if (puVar4 == (uint *)0x0) {
    return (uint *)0x0;
  }
  param_2 = param_2 - 1;
  uVar8 = *puVar4;
  while( true ) {
    if (uVar8 < 0xf81) {
      *(byte *)((long)puVar4 + (ulong)(param_2 >> 3) + 0x10) =
           *(byte *)((long)puVar4 + (ulong)(param_2 >> 3) + 0x10) |
           (byte)(1 << (ulong)(param_2 & 7));
      return (uint *)0x0;
    }
    uVar8 = puVar4[2];
    puVar9 = puVar4 + 4;
    if (uVar8 == 0) break;
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = param_2 / uVar8;
    }
    puVar4 = *(uint **)(puVar9 + (ulong)uVar6 * 2);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x200;
      FUN_108d60848();
      if (puVar4 == (uint *)0x0) {
        (puVar9 + (ulong)uVar6 * 2)[0] = 0;
        (puVar9 + (ulong)uVar6 * 2)[1] = 0;
        goto LAB_108d768b4;
      }
      puVar4[0x7a] = 0;
      puVar4[0x7b] = 0;
      puVar4[0x78] = 0;
      puVar4[0x79] = 0;
      puVar4[0x7e] = 0;
      puVar4[0x7f] = 0;
      puVar4[0x7c] = 0;
      puVar4[0x7d] = 0;
      puVar4[0x72] = 0;
      puVar4[0x73] = 0;
      puVar4[0x70] = 0;
      puVar4[0x71] = 0;
      puVar4[0x76] = 0;
      puVar4[0x77] = 0;
      puVar4[0x74] = 0;
      puVar4[0x75] = 0;
      puVar4[0x6a] = 0;
      puVar4[0x6b] = 0;
      puVar4[0x68] = 0;
      puVar4[0x69] = 0;
      puVar4[0x6e] = 0;
      puVar4[0x6f] = 0;
      puVar4[0x6c] = 0;
      puVar4[0x6d] = 0;
      puVar4[0x62] = 0;
      puVar4[99] = 0;
      puVar4[0x60] = 0;
      puVar4[0x61] = 0;
      puVar4[0x66] = 0;
      puVar4[0x67] = 0;
      puVar4[100] = 0;
      puVar4[0x65] = 0;
      puVar4[0x5a] = 0;
      puVar4[0x5b] = 0;
      puVar4[0x58] = 0;
      puVar4[0x59] = 0;
      puVar4[0x5e] = 0;
      puVar4[0x5f] = 0;
      puVar4[0x5c] = 0;
      puVar4[0x5d] = 0;
      puVar4[0x52] = 0;
      puVar4[0x53] = 0;
      puVar4[0x50] = 0;
      puVar4[0x51] = 0;
      puVar4[0x56] = 0;
      puVar4[0x57] = 0;
      puVar4[0x54] = 0;
      puVar4[0x55] = 0;
      puVar4[0x4a] = 0;
      puVar4[0x4b] = 0;
      puVar4[0x48] = 0;
      puVar4[0x49] = 0;
      puVar4[0x4e] = 0;
      puVar4[0x4f] = 0;
      puVar4[0x4c] = 0;
      puVar4[0x4d] = 0;
      puVar4[0x42] = 0;
      puVar4[0x43] = 0;
      puVar4[0x40] = 0;
      puVar4[0x41] = 0;
      puVar4[0x46] = 0;
      puVar4[0x47] = 0;
      puVar4[0x44] = 0;
      puVar4[0x45] = 0;
      puVar4[0x3a] = 0;
      puVar4[0x3b] = 0;
      puVar4[0x38] = 0;
      puVar4[0x39] = 0;
      puVar4[0x3e] = 0;
      puVar4[0x3f] = 0;
      puVar4[0x3c] = 0;
      puVar4[0x3d] = 0;
      puVar4[0x32] = 0;
      puVar4[0x33] = 0;
      puVar4[0x30] = 0;
      puVar4[0x31] = 0;
      puVar4[0x36] = 0;
      puVar4[0x37] = 0;
      puVar4[0x34] = 0;
      puVar4[0x35] = 0;
      puVar4[0x2a] = 0;
      puVar4[0x2b] = 0;
      puVar4[0x28] = 0;
      puVar4[0x29] = 0;
      puVar4[0x2e] = 0;
      puVar4[0x2f] = 0;
      puVar4[0x2c] = 0;
      puVar4[0x2d] = 0;
      puVar4[0x22] = 0;
      puVar4[0x23] = 0;
      puVar4[0x20] = 0;
      puVar4[0x21] = 0;
      puVar4[0x26] = 0;
      puVar4[0x27] = 0;
      puVar4[0x24] = 0;
      puVar4[0x25] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x1b] = 0;
      puVar4[0x18] = 0;
      puVar4[0x19] = 0;
      puVar4[0x1e] = 0;
      puVar4[0x1f] = 0;
      puVar4[0x1c] = 0;
      puVar4[0x1d] = 0;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x16] = 0;
      puVar4[0x17] = 0;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      *puVar4 = uVar8;
      *(uint **)(puVar9 + (ulong)uVar6 * 2) = puVar4;
    }
    param_2 = param_2 - uVar6 * uVar8;
    uVar8 = *puVar4;
  }
  uVar8 = param_2 + 1;
  uVar5 = (ulong)(param_2 % 0x7c);
  uVar6 = puVar9[uVar5];
  if (uVar6 == 0) {
    uVar6 = puVar4[1];
    if (uVar6 < 0x7b) {
LAB_108d767b4:
      puVar4[1] = uVar6 + 1;
      puVar9[uVar5] = uVar8;
      return (uint *)0x0;
    }
  }
  else {
    do {
      if (uVar6 == uVar8) {
        return (uint *)0x0;
      }
      uVar6 = 0;
      if ((int)uVar5 + 1U < 0x7c) {
        uVar6 = (int)uVar5 + 1;
      }
      uVar5 = (ulong)uVar6;
      uVar6 = puVar9[uVar5];
    } while (uVar6 != 0);
    uVar6 = puVar4[1];
    if (uVar6 < 0x3e) goto LAB_108d767b4;
  }
  lVar2 = 0x1f0;
  FUN_108d60848();
  if (lVar2 == 0) {
LAB_108d768b4:
    puVar9 = (uint *)0x7;
  }
  else {
    _memcpy();
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar9[0] = 0;
    puVar9[1] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x22] = 0;
    puVar4[0x23] = 0;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x26] = 0;
    puVar4[0x27] = 0;
    puVar4[0x24] = 0;
    puVar4[0x25] = 0;
    puVar4[0x2a] = 0;
    puVar4[0x2b] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x32] = 0;
    puVar4[0x33] = 0;
    puVar4[0x30] = 0;
    puVar4[0x31] = 0;
    puVar4[0x36] = 0;
    puVar4[0x37] = 0;
    puVar4[0x34] = 0;
    puVar4[0x35] = 0;
    puVar4[0x3a] = 0;
    puVar4[0x3b] = 0;
    puVar4[0x38] = 0;
    puVar4[0x39] = 0;
    puVar4[0x3e] = 0;
    puVar4[0x3f] = 0;
    puVar4[0x3c] = 0;
    puVar4[0x3d] = 0;
    puVar4[0x42] = 0;
    puVar4[0x43] = 0;
    puVar4[0x40] = 0;
    puVar4[0x41] = 0;
    puVar4[0x46] = 0;
    puVar4[0x47] = 0;
    puVar4[0x44] = 0;
    puVar4[0x45] = 0;
    puVar4[0x4a] = 0;
    puVar4[0x4b] = 0;
    puVar4[0x48] = 0;
    puVar4[0x49] = 0;
    puVar4[0x4e] = 0;
    puVar4[0x4f] = 0;
    puVar4[0x4c] = 0;
    puVar4[0x4d] = 0;
    puVar4[0x52] = 0;
    puVar4[0x53] = 0;
    puVar4[0x50] = 0;
    puVar4[0x51] = 0;
    puVar4[0x56] = 0;
    puVar4[0x57] = 0;
    puVar4[0x54] = 0;
    puVar4[0x55] = 0;
    puVar4[0x5a] = 0;
    puVar4[0x5b] = 0;
    puVar4[0x58] = 0;
    puVar4[0x59] = 0;
    puVar4[0x5e] = 0;
    puVar4[0x5f] = 0;
    puVar4[0x5c] = 0;
    puVar4[0x5d] = 0;
    puVar4[0x62] = 0;
    puVar4[99] = 0;
    puVar4[0x60] = 0;
    puVar4[0x61] = 0;
    puVar4[0x66] = 0;
    puVar4[0x67] = 0;
    puVar4[100] = 0;
    puVar4[0x65] = 0;
    puVar4[0x6a] = 0;
    puVar4[0x6b] = 0;
    puVar4[0x68] = 0;
    puVar4[0x69] = 0;
    puVar4[0x6e] = 0;
    puVar4[0x6f] = 0;
    puVar4[0x6c] = 0;
    puVar4[0x6d] = 0;
    puVar4[0x72] = 0;
    puVar4[0x73] = 0;
    puVar4[0x70] = 0;
    puVar4[0x71] = 0;
    puVar4[0x76] = 0;
    puVar4[0x77] = 0;
    puVar4[0x74] = 0;
    puVar4[0x75] = 0;
    puVar4[0x7a] = 0;
    puVar4[0x7b] = 0;
    puVar4[0x78] = 0;
    puVar4[0x79] = 0;
    puVar4[0x7e] = 0;
    puVar4[0x7f] = 0;
    puVar4[0x7c] = 0;
    puVar4[0x7d] = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (ulong)*puVar4 + 0x3d;
    puVar4[2] = SUB164(auVar1 * ZEXT816(0x421084210842109),8);
    puVar9 = puVar4;
    FUN_108d7668c(puVar4,uVar8);
    lVar7 = 0;
    do {
      if (*(int *)(lVar2 + lVar7) != 0) {
        puVar3 = puVar4;
        FUN_108d7668c(puVar4);
        puVar9 = (uint *)(ulong)((uint)puVar3 | (uint)puVar9);
      }
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0x1f0);
    func_0x000108d5e198(lVar2);
  }
  return puVar9;
}



/* Entry: 108d90ec0; end: 108d91113;  */

undefined8 FUN_108d90ec0(long param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar9;
  
  lVar5 = *(long *)(param_1 + 0x50);
  iVar6 = *(int *)(*(long *)(param_1 + 0x48) + 0x38);
  uVar17 = param_3 + param_2;
  if ((*(ushort *)(*(long *)(param_1 + 0x48) + 0x28) >> 2 & 1) != 0) {
    _bzero(lVar5 + (ulong)param_2,param_3);
  }
  uVar3 = (ulong)*(byte *)(param_1 + 6) + 1;
  lVar4 = lVar5 + (ulong)*(byte *)(param_1 + 6);
  uVar12 = (undefined1)((uint)param_3 >> 8);
  uVar9 = uVar3;
  uVar15 = param_2;
  iVar13 = param_3;
  if ((*(char *)(lVar4 + 2) == '\0') && (*(char *)(lVar5 + uVar3) == '\0')) {
    uVar10 = 0;
    uVar11 = 0;
LAB_108d91068:
    if (param_2 == ((uint)(*(ushort *)(lVar4 + 5) >> 8) | (*(ushort *)(lVar4 + 5) & 0xff00ff) << 8))
    {
      if ((uint)uVar3 != (uint)uVar9) goto LAB_108d910e0;
      *(undefined1 *)(lVar5 + uVar3) = uVar11;
      ((undefined1 *)(lVar5 + uVar3))[1] = uVar10;
      *(char *)(lVar4 + 5) = (char)(uVar17 >> 8);
      *(char *)(lVar4 + 6) = (char)uVar17;
    }
    else {
      *(ushort *)(lVar5 + uVar9) = (ushort)(uVar15 >> 8) & 0xff | (ushort)((uVar15 & 0xff00ff) << 8)
      ;
      puVar1 = (undefined1 *)(lVar5 + (ulong)(ushort)uVar15);
      *puVar1 = uVar11;
      puVar1[1] = uVar10;
      puVar1[2] = uVar12;
      puVar1[3] = (char)iVar13;
    }
    uVar16 = 0;
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + (short)param_3;
  }
  else {
    do {
      uVar8 = (uint)uVar9;
      puVar1 = (undefined1 *)(lVar5 + uVar9);
      uVar11 = *puVar1;
      uVar10 = puVar1[1];
      uVar7 = (uint)CONCAT11(uVar11,uVar10);
      if (uVar7 == 0 || param_2 <= uVar7) {
        if (iVar6 - 4U < uVar7) break;
        if (uVar7 == 0 || uVar17 + 3 < uVar7) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar7 - uVar17;
          if (uVar7 < uVar17) break;
          puVar2 = (undefined1 *)(lVar5 + (ulong)uVar7);
          uVar17 = uVar7 + ((uint)(*(ushort *)(puVar2 + 2) >> 8) |
                           (*(ushort *)(puVar2 + 2) & 0xff00ff) << 8);
          iVar13 = uVar17 - param_2;
          uVar11 = *puVar2;
          uVar10 = puVar2[1];
          uVar12 = (undefined1)((uint)iVar13 >> 8);
        }
        if (((uint)uVar3 < uVar8) &&
           (uVar7 = uVar8 + ((uint)(*(ushort *)(puVar1 + 2) >> 8) |
                            (*(ushort *)(puVar1 + 2) & 0xff00ff) << 8), param_2 <= uVar7 + 3)) {
          if (param_2 < uVar7) break;
          uVar14 = uVar14 + (param_2 - uVar7);
          iVar13 = uVar17 - uVar8;
          uVar12 = (undefined1)((uint)iVar13 >> 8);
          uVar15 = uVar8;
        }
        if ((uVar14 & 0xff) <= (uint)*(byte *)(lVar4 + 7)) {
          *(byte *)(lVar4 + 7) = *(byte *)(lVar4 + 7) - (char)uVar14;
          param_2 = uVar15 & 0xffff;
          goto LAB_108d91068;
        }
        break;
      }
      uVar9 = (ulong)uVar7;
    } while (uVar8 + 4 <= uVar7);
LAB_108d910e0:
    uVar16 = 0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  return uVar16;
}



/* Entry: 108d91114; end: 108d9122b;  */

long FUN_108d91114(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined2 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar3 = *(long *)(param_1 + 0x50);
  iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x38);
  uVar5 = *(byte *)(param_1 + 6) + 1;
  do {
    uVar8 = uVar5;
    uVar5 = (uint)(*(ushort *)(lVar3 + (ulong)uVar8) >> 8) |
            (*(ushort *)(lVar3 + (ulong)uVar8) & 0xff00ff) << 8;
    if (uVar5 == 0) {
      return 0;
    }
    if (iVar4 + -4 < (int)uVar5 || uVar5 < uVar8 + 4) goto LAB_108d911b0;
    puVar1 = (undefined2 *)(lVar3 + (ulong)uVar5);
    uVar6 = (uint)((ushort)puVar1[1] >> 8) | ((ushort)puVar1[1] & 0xff00ff) << 8;
    uVar7 = uVar6 - param_2;
  } while ((int)uVar6 < param_2);
  if ((int)uVar7 < 4) {
    lVar2 = lVar3 + (ulong)*(byte *)(param_1 + 6);
    if (0x3b < *(byte *)(lVar2 + 7)) {
      if (param_4 == (undefined4 *)0x0) {
        return 0;
      }
      *param_4 = 1;
      return 0;
    }
    *(undefined2 *)(lVar3 + (ulong)uVar8) = *puVar1;
    *(char *)(lVar2 + 7) = *(char *)(lVar2 + 7) + (char)uVar7;
  }
  else {
    if (iVar4 < (int)(uVar6 + uVar5)) {
LAB_108d911b0:
      FUN_108d64c00(0xb,&UNK_10f51799f);
      *param_3 = 0xb;
      return 0;
    }
    puVar1[1] = (ushort)(uVar7 >> 8) & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
  }
  return lVar3 + (int)(uVar7 + uVar5);
}



/* Entry: 108d9122c; end: 108d913ef;  */

undefined8 FUN_108d9122c(ulong param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  
  bVar4 = *(byte *)(param_1 + 6);
  uVar5 = *(ushort *)(param_1 + 0x12);
  uVar11 = (ulong)uVar5;
  lVar2 = *(long *)(param_1 + 0x50);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x48) + 0x38);
  uVar1 = (uint)*(ushort *)(param_1 + 0xe) + (uint)uVar5 * 2;
  uVar13 = uVar3;
  if (uVar5 != 0) {
    lVar14 = 0;
    lVar15 = (ulong)*(ushort *)(param_1 + 0xe) + lVar2 + 1;
    lVar10 = lVar2;
    uVar12 = uVar3;
    do {
      uVar6 = (uint)(*(ushort *)(lVar15 + -1) >> 8) | (*(ushort *)(lVar15 + -1) & 0xff00ff) << 8;
      if (uVar6 < uVar1 || (int)(uVar3 - 4) < (int)uVar6) goto LAB_108d913ac;
      uVar7 = param_1;
      FUN_108d913f0(param_1,lVar10 + (ulong)uVar6);
      uVar13 = uVar12 - (int)uVar7;
      if ((int)uVar13 < (int)uVar1 || (int)uVar3 < (int)(uVar6 + (int)uVar7)) goto LAB_108d913ac;
      *(ushort *)(lVar15 + -1) = (ushort)(uVar13 >> 8) & 0xff | (ushort)((uVar13 & 0xff00ff) << 8);
      if (lVar14 == 0) {
        if (uVar13 != uVar6) {
          lVar10 = *(long *)(**(long **)(param_1 + 0x48) + 0x128);
          uVar5 = *(ushort *)(lVar2 + (ulong)bVar4 + 5);
          uVar8 = (ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8);
          _memcpy(lVar10 + uVar8,lVar2 + uVar8,
                  (long)(int)(uVar12 - ((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8)));
          lVar14 = lVar10;
          goto LAB_108d9132c;
        }
        lVar14 = 0;
      }
      else {
LAB_108d9132c:
        _memcpy(lVar2 + (ulong)uVar13,lVar10 + (ulong)uVar6,uVar7 & 0xffffffff);
      }
      lVar15 = lVar15 + 2;
      uVar11 = uVar11 - 1;
      uVar12 = uVar13;
    } while (uVar11 != 0);
  }
  lVar15 = lVar2 + (ulong)bVar4;
  *(char *)(lVar15 + 5) = (char)(uVar13 >> 8);
  *(char *)(lVar15 + 6) = (char)uVar13;
  *(undefined2 *)(lVar15 + 1) = 0;
  *(undefined1 *)(lVar15 + 7) = 0;
  _bzero(lVar2 + (ulong)uVar1,(long)(int)(uVar13 - uVar1));
  uVar9 = 0;
  if (uVar13 - uVar1 != (uint)*(ushort *)(param_1 + 0x10)) {
LAB_108d913ac:
    uVar9 = 0xb;
    FUN_108d64c00(0xb,&UNK_10f51799f);
  }
  return uVar9;
}



/* Entry: 108d913f0; end: 108d914f3;  */

uint FUN_108d913f0(long param_1,long param_2)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  
  pbVar8 = (byte *)(param_2 + (ulong)*(byte *)(param_1 + 7));
  if (*(char *)(param_1 + 4) == '\0') {
    uVar7 = (uint)*pbVar8;
    if ((char)*pbVar8 < '\0') {
      uVar7 = uVar7 & 0x7f;
      uVar9 = 0;
      do {
        uVar1 = uVar9 + 1;
        uVar7 = pbVar8[uVar9 + 1] & 0x7f | uVar7 << 7;
        if (-1 < (char)pbVar8[uVar9 + 1]) break;
        bVar5 = uVar9 < 8;
        uVar9 = uVar1;
      } while (bVar5);
      pbVar8 = pbVar8 + uVar1;
    }
    if (*(char *)(param_1 + 2) == '\0') {
      iVar6 = (int)pbVar8 + 1;
    }
    else {
      uVar9 = 1;
      do {
        uVar1 = uVar9 + 1;
        if (-1 < (char)pbVar8[uVar9]) break;
        bVar5 = uVar9 < 9;
        uVar9 = uVar1;
      } while (bVar5);
      iVar6 = (int)pbVar8 + (int)uVar1;
    }
    if (*(ushort *)(param_1 + 10) < uVar7) {
      uVar2 = *(ushort *)(param_1 + 0xc);
      uVar7 = uVar7 - uVar2;
      uVar3 = *(int *)(*(long *)(param_1 + 0x48) + 0x38) - 4;
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar7 / uVar3;
      }
      uVar7 = (uVar7 - uVar4 * uVar3) + (uint)uVar2;
      uVar3 = (uint)uVar2;
      if (uVar7 <= *(ushort *)(param_1 + 10)) {
        uVar3 = uVar7;
      }
      uVar7 = (iVar6 - (int)param_2) + uVar3 + 4;
    }
    else {
      uVar7 = uVar7 + (iVar6 - (int)param_2);
      if (uVar7 < 5) {
        uVar7 = 4;
      }
    }
  }
  else {
    uVar9 = 0;
    do {
      uVar1 = uVar9 + 1;
      if (-1 < (char)pbVar8[uVar9]) break;
      bVar5 = uVar9 < 8;
      uVar9 = uVar1;
    } while (bVar5);
    uVar7 = (uint)*(byte *)(param_1 + 7) + (int)uVar1;
  }
  return uVar7 & 0xffff;
}



/* Entry: 108d914f4; end: 108d915b7;  */

void FUN_108d914f4(long param_1,undefined1 *param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  
  if (*param_3 != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  lVar8 = *(long *)(param_2 + 0x50);
  lVar2 = 100;
  if (*(int *)(param_2 + 0x70) != 1) {
    lVar2 = 0;
  }
  lVar1 = *(long *)(param_1 + 0x50) + (ulong)*(byte *)(param_1 + 6);
  uVar4 = *(ushort *)(lVar1 + 5);
  uVar7 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
  _memcpy(lVar8 + uVar7,*(long *)(param_1 + 0x50) + uVar7,
          *(int *)(lVar3 + 0x38) - ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8));
  _memcpy(lVar8 + lVar2,lVar1,
          (ulong)*(ushort *)(param_1 + 0xe) + (ulong)*(ushort *)(param_1 + 0x12) * 2);
  *param_2 = 0;
  puVar6 = param_2;
  FUN_108d7f368();
  iVar5 = (int)puVar6;
  if (iVar5 == 0) {
    if (*(char *)(lVar3 + 0x21) == '\0') {
      return;
    }
    FUN_108d80538();
    iVar5 = (int)param_2;
  }
  *param_3 = iVar5;
  return;
}



/* Entry: 108d915b8; end: 108d918e3;  */

void FUN_108d915b8(long param_1,uint param_2,ulong *param_3,ushort *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  long lVar13;
  
  uVar3 = *(ulong *)(param_1 + 0x50);
  uVar5 = *(uint *)(*(long **)(param_1 + 0x48) + 7);
  lVar10 = (long)(int)uVar5;
  puVar12 = *(ushort **)(param_1 + 0x60);
  lVar13 = *(long *)(**(long **)(param_1 + 0x48) + 0x128);
  lVar1 = uVar3 + *(byte *)(param_1 + 6);
  uVar4 = *(ushort *)(lVar1 + 5);
  uVar6 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
  _memcpy(lVar13 + uVar6,uVar3 + uVar6,
          (long)(int)(uVar5 - ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8)));
  if ((int)param_2 < 1) {
    uVar9 = (undefined1)(uVar5 >> 8);
  }
  else {
    uVar6 = (ulong)param_2;
    uVar11 = uVar3 + lVar10;
    do {
      uVar7 = *param_3;
      uVar2 = lVar13 + (uVar7 - uVar3);
      if (uVar3 + lVar10 <= uVar7 || uVar7 <= uVar3) {
        uVar2 = uVar7;
      }
      uVar11 = uVar11 - *param_4;
      _memcpy(uVar11,uVar2);
      lVar8 = uVar11 - uVar3;
      uVar5 = (uint)lVar8;
      *puVar12 = (ushort)((ulong)lVar8 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
      uVar6 = uVar6 - 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar6 != 0);
    uVar9 = (undefined1)((ulong)lVar8 >> 8);
  }
  *(short *)(param_1 + 0x12) = (short)param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined2 *)(lVar1 + 1) = 0;
  *(undefined1 *)(lVar1 + 3) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(lVar1 + 4) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(lVar1 + 5) = uVar9;
  *(char *)(lVar1 + 6) = (char)uVar5;
  *(undefined1 *)(lVar1 + 7) = 0;
  return;
}



/* Entry: 108d918e4; end: 108d91a6b;  */

void FUN_108d918e4(long param_1,long *param_2)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_48;
  
  lVar7 = param_1;
  FUN_108d91bd8();
  if ((int)lVar7 == 0) {
    lVar7 = *param_2;
    cVar3 = *(char *)(*(long *)(param_1 + 0x10) + 0x5c);
    pcVar1 = FUN_108d91e24;
    if (cVar3 != '\x02') {
      pcVar1 = FUN_108d91f54;
    }
    pcVar2 = FUN_108d91d28;
    if (cVar3 != '\x01') {
      pcVar2 = pcVar1;
    }
    *(code **)(param_1 + 0x40) = pcVar2;
    plVar4 = (long *)0x200;
    lStack_48 = lVar7;
    FUN_108d60848();
    if (plVar4 != (long *)0x0) {
      plVar4[0x3d] = 0;
      plVar4[0x3c] = 0;
      plVar4[0x3f] = 0;
      plVar4[0x3e] = 0;
      plVar4[0x39] = 0;
      plVar4[0x38] = 0;
      plVar4[0x3b] = 0;
      plVar4[0x3a] = 0;
      plVar4[0x35] = 0;
      plVar4[0x34] = 0;
      plVar4[0x37] = 0;
      plVar4[0x36] = 0;
      plVar4[0x31] = 0;
      plVar4[0x30] = 0;
      plVar4[0x33] = 0;
      plVar4[0x32] = 0;
      plVar4[0x2d] = 0;
      plVar4[0x2c] = 0;
      plVar4[0x2f] = 0;
      plVar4[0x2e] = 0;
      plVar4[0x29] = 0;
      plVar4[0x28] = 0;
      plVar4[0x2b] = 0;
      plVar4[0x2a] = 0;
      plVar4[0x25] = 0;
      plVar4[0x24] = 0;
      plVar4[0x27] = 0;
      plVar4[0x26] = 0;
      plVar4[0x21] = 0;
      plVar4[0x20] = 0;
      plVar4[0x23] = 0;
      plVar4[0x22] = 0;
      plVar4[0x1d] = 0;
      plVar4[0x1c] = 0;
      plVar4[0x1f] = 0;
      plVar4[0x1e] = 0;
      plVar4[0x19] = 0;
      plVar4[0x18] = 0;
      plVar4[0x1b] = 0;
      plVar4[0x1a] = 0;
      plVar4[0x15] = 0;
      plVar4[0x14] = 0;
      plVar4[0x17] = 0;
      plVar4[0x16] = 0;
      plVar4[0x11] = 0;
      plVar4[0x10] = 0;
      plVar4[0x13] = 0;
      plVar4[0x12] = 0;
      plVar4[0xd] = 0;
      plVar4[0xc] = 0;
      plVar4[0xf] = 0;
      plVar4[0xe] = 0;
      plVar4[9] = 0;
      plVar4[8] = 0;
      plVar4[0xb] = 0;
      plVar4[10] = 0;
      plVar4[5] = 0;
      plVar4[4] = 0;
      plVar4[7] = 0;
      plVar4[6] = 0;
      plVar4[1] = 0;
      *plVar4 = 0;
      plVar4[3] = 0;
      plVar4[2] = 0;
      while (lVar7 != 0) {
        lVar6 = param_2[1];
        if (lVar6 == 0) {
          lVar6 = *(long *)(lVar7 + 8);
        }
        else if (lVar7 == lVar6) {
          lVar6 = 0;
        }
        else {
          lVar6 = lVar6 + *(int *)(lVar7 + 8);
        }
        *(undefined8 *)(lVar7 + 8) = 0;
        lVar5 = *plVar4;
        plVar8 = plVar4;
        while (lVar5 != 0) {
          FUN_108d91c54(param_1,lStack_48,lVar5,&lStack_48);
          *plVar8 = 0;
          plVar8 = plVar8 + 1;
          lVar7 = lStack_48;
          lVar5 = *plVar8;
        }
        *plVar8 = lVar7;
        lVar7 = lVar6;
        lStack_48 = lVar6;
      }
      lVar7 = 0;
      lStack_48 = 0;
      do {
        FUN_108d91c54(param_1,lStack_48,*(undefined8 *)((long)plVar4 + lVar7),&lStack_48);
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0x200);
      *param_2 = lStack_48;
      func_0x000108d5e198(plVar4);
    }
  }
  return;
}



/* Entry: 108d91a6c; end: 108d91bd7;  */

code * FUN_108d91a6c(long param_1,undefined8 param_2,code *param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  code *unaff_x19;
  code *unaff_x20;
  code *pcVar14;
  undefined8 unaff_x21;
  uint *unaff_x22;
  uint uVar15;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  bVar1 = *(byte *)(param_1 + 0x5b);
  iVar5 = bVar1 - 1;
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (bVar1 < 2) {
    iVar11 = 0;
    pcVar14 = (code *)0x0;
LAB_108d91afc:
    if (iVar11 == iVar5) goto LAB_108d91b04;
    lVar12 = *(long *)(pcVar14 + 0x28);
    *(char *)(param_1 + 0x5a) = (char)(((int)pcVar14 - (int)param_1) - 0x60U >> 3) * -0x3b;
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar16 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(pcVar14 + 0x30) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(pcVar14 + 0x28) = uVar17;
    *(undefined8 *)(pcVar14 + 0x20) = uVar16;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (lVar12 == 0) {
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar12 = (long)*(int *)(param_1 + 0x54);
        FUN_108d60848();
        *(long *)(param_1 + 0x40) = lVar12;
        if (lVar12 == 0) {
          return (code *)0x7;
        }
      }
    }
    else {
      *(long *)(param_1 + 0x40) = lVar12;
      (*pcRam0000000113297950)();
      *(int *)(param_1 + 0x54) = (int)lVar12;
    }
    pcVar10 = (code *)0x108d92200;
    param_3 = pcVar14;
  }
  else {
    uVar15 = 1;
    do {
      iVar11 = uVar15 + *(byte *)(param_1 + 0x5a);
      iVar2 = 0;
      if (iVar5 != 0) {
        iVar2 = iVar11 / iVar5;
      }
      pcVar14 = (code *)(param_1 + 0x60 + (ulong)(uint)(iVar11 - iVar2 * iVar5) * 0x68);
      if ((*(int *)(pcVar14 + 8) != 0) && (pcVar10 = pcVar14, FUN_108d822ac(), (int)pcVar10 != 0)) {
        return pcVar10;
      }
      if (*(long *)pcVar14 == 0) {
        iVar11 = uVar15 - 1;
        goto LAB_108d91afc;
      }
      uVar15 = uVar15 + 1;
    } while (bVar1 != uVar15);
LAB_108d91b04:
    lVar12 = param_1 + (long)iVar5 * 0x68;
    unaff_x19 = (code *)(lVar12 + 0x60);
    unaff_x20 = (code *)(param_1 + 0x38);
    pcVar7 = (code *)&uStack_80;
    unaff_x29 = &stack0xfffffffffffffff0;
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar14 = *(code **)(*(long *)(lVar12 + 0x70) + 0x20);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    pcVar10 = (code *)(lVar12 + 0xa8);
    if (((*(long *)pcVar10 != 0) || (func_0x000108d92230(), (int)pcVar14 == 0)) &&
       (pcVar14 = unaff_x19, pcVar10 = unaff_x20, FUN_108d918e4(), (int)pcVar14 == 0)) {
      unaff_x19 = (code *)(lVar12 + 0xb0);
      FUN_108d922b8(*(undefined8 *)(lVar12 + 0xa8),&uStack_80,
                    *(undefined4 *)(*(long *)(lVar12 + 0x70) + 0xc),*(undefined8 *)unaff_x19);
      *(int *)(lVar12 + 0x98) = *(int *)(lVar12 + 0x98) + 1;
      param_3 = (code *)&stack0xffffffffffffffbe;
      FUN_108d899f0(param_3,(long)*(int *)(param_1 + 0x48));
      func_0x000108d92334(&uStack_80,&stack0xffffffffffffffbe);
      puVar4 = *(uint **)unaff_x20;
      while (puVar3 = puVar4, puVar3 != (uint *)0x0) {
        unaff_x22 = *(uint **)(puVar3 + 2);
        puVar6 = &stack0xffffffffffffffbe;
        FUN_108d899f0(puVar6,(long)(int)*puVar3);
        func_0x000108d92334(&uStack_80,&stack0xffffffffffffffbe,puVar6);
        param_3 = (code *)(ulong)*puVar3;
        func_0x000108d92334(&uStack_80,puVar3 + 4);
        puVar4 = unaff_x22;
        if (*(long *)(param_1 + 0x40) == 0) {
          func_0x000108d5e198(puVar3);
        }
      }
      *(undefined8 *)unaff_x20 = 0;
      pcVar10 = unaff_x19;
      FUN_108d92404();
      unaff_x21 = 0;
      pcVar14 = pcVar7;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return pcVar14;
    }
    unaff_x30 = 0x108d9215c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)&uStack_80;
  }
  *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)pcVar14 = 0;
  puVar8 = (undefined8 *)0x28;
  FUN_108d60848();
  if (puVar8 == (undefined8 *)0x0) {
    return (code *)0x7;
  }
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[3] = pcVar10;
  puVar8[4] = 0;
  puVar8[4] = param_3;
  if (pcRam0000000113297ab0 == (code *)0x0) {
LAB_108d921b4:
    puVar9 = puVar8;
    _pthread_create(puVar8,0,pcVar10,param_3);
    if ((int)puVar9 == 0) goto LAB_108d921e0;
  }
  else {
    iVar5 = 200;
    (*pcRam0000000113297ab0)();
    if (iVar5 == 0) goto LAB_108d921b4;
  }
  *(undefined4 *)(puVar8 + 1) = 1;
  (*pcVar10)();
  puVar8[2] = param_3;
LAB_108d921e0:
  *(undefined8 **)pcVar14 = puVar8;
  return (code *)0x0;
}



/* Entry: 108d91bd8; end: 108d91c53;  */

undefined8 FUN_108d91bd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return 0;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  FUN_108d8a998(lVar1,0,0,&lStack_28);
  *(long *)(param_1 + 0x18) = lVar1;
  if (lStack_28 == 0) {
    uVar2 = 7;
  }
  else {
    uVar2 = 0;
    *(undefined2 *)(lVar1 + 8) = *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 6);
    *(undefined1 *)(lVar1 + 0xb) = 0;
  }
  return uVar2;
}



/* Entry: 108d91c54; end: 108d91d27;  */

void FUN_108d91c54(long param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  uStack_4c = 0;
  bVar1 = param_2 != (undefined4 *)0x0;
  puVar3 = &uStack_48;
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) {
    puVar3 = &uStack_48;
    do {
      lVar2 = param_1;
      (**(code **)(param_1 + 0x40))(param_1,&uStack_4c,param_2 + 4,*param_2,param_3 + 4,*param_3);
      if ((int)lVar2 < 1) {
        *puVar3 = param_2;
        puVar3 = (undefined8 *)(param_2 + 2);
        param_2 = (undefined4 *)*puVar3;
      }
      else {
        *puVar3 = param_3;
        puVar3 = (undefined8 *)(param_3 + 2);
        param_3 = (undefined4 *)*puVar3;
        uStack_4c = 0;
      }
      bVar1 = param_2 != (undefined4 *)0x0;
    } while ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0));
  }
  if (!bVar1) {
    param_2 = param_3;
  }
  *puVar3 = param_2;
  *param_4 = uStack_48;
  return;
}



/* Entry: 108d91d28; end: 108d91e23;  */

/* WARNING: Removing unreachable block (ram,0x000108d8e6b0) */
/* WARNING: Removing unreachable block (ram,0x000108d8e70c) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6b8) */
/* WARNING: Removing unreachable block (ram,0x000108d8e720) */
/* WARNING: Removing unreachable block (ram,0x000108d8e728) */
/* WARNING: Removing unreachable block (ram,0x000108d8e75c) */

ulong FUN_108d91d28(long param_1,int *param_2,byte *param_3,uint param_4,byte *param_5,
                   undefined8 param_6)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte *pbVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  double dVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  double *pdVar22;
  double *pdVar23;
  uint uVar24;
  double dVar25;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  uint uStack_a4;
  byte *pbStack_a0;
  undefined8 uStack_88;
  uint uStack_74;
  
  bVar3 = param_3[1];
  bVar4 = param_5[1];
  if (bVar3 < 8 || bVar4 < 8) {
    pbVar9 = param_3 + *param_3;
    pbVar18 = param_5 + *param_5;
    uVar19 = (uint)bVar3;
    uVar12 = uVar19 - bVar4;
    if (uVar12 == 0) {
      if ((((uint)*pbVar18 ^ (int)(char)*pbVar9) >> 7 & 1) != 0) {
        uVar19 = (int)(char)*pbVar9 >> 0x1f | 1;
        goto LAB_108d91de0;
      }
      if (bVar3 != 0) {
        uVar12 = (uint)(byte)(&UNK_10dfa0a68)[uVar19];
        if ((byte)(&UNK_10dfa0a68)[uVar19] < 2) {
          uVar12 = 1;
        }
        uVar20 = (ulong)uVar12;
        do {
          uVar19 = (uint)*pbVar9 - (uint)*pbVar18;
          if ((uint)*pbVar9 - (uint)*pbVar18 != 0) goto LAB_108d91ddc;
          uVar20 = uVar20 - 1;
          pbVar9 = pbVar9 + 1;
          pbVar18 = pbVar18 + 1;
        } while (uVar20 != 0);
      }
      goto LAB_108d91dfc;
    }
    if (7 < uVar19) {
      uVar12 = 0xffffffff;
    }
    uVar19 = uVar12;
    if (7 < bVar4) {
      uVar19 = 1;
    }
    if ((int)uVar19 < 1) {
      uVar19 = uVar12;
      if ((char)*pbVar18 < '\0') {
        uVar19 = 1;
        goto LAB_108d91de0;
      }
    }
    else if (0x7fffffff < (uint)(int)(char)*pbVar9) {
      uVar19 = 0xffffffff;
    }
  }
  else {
    uVar19 = (uint)bVar3 - (uint)bVar4;
  }
LAB_108d91ddc:
  if (uVar19 != 0) {
LAB_108d91de0:
    uVar12 = -uVar19;
    if (**(char **)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x18) == '\0') {
      uVar12 = uVar19;
    }
    return (ulong)uVar12;
  }
LAB_108d91dfc:
  if (*(ushort *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 6) < 2) {
    return 0;
  }
  plVar21 = *(long **)(param_1 + 0x18);
  if (*param_2 == 0) {
    FUN_108d8aa14(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),param_6,param_5,plVar21);
    *param_2 = 1;
  }
  pdVar22 = (double *)plVar21[2];
  lVar15 = *plVar21;
  pbVar9 = param_3 + 1;
  if ((char)*pbVar9 < '\0') {
    FUN_108d7d01c(pbVar9,&uStack_b0);
    uVar19 = (int)pbVar9 + 1U & 0xff;
    uVar12 = uStack_b0;
  }
  else {
    uVar19 = 2;
    uVar12 = (int)(char)*pbVar9;
  }
  bVar3 = *param_3;
  uStack_74 = (uint)bVar3;
  if (uVar12 < 0xc) {
    uVar12 = (uint)(byte)(&UNK_10dfa0a57)[uVar12];
  }
  else {
    uVar12 = uVar12 - 0xc >> 1;
  }
  uVar12 = uVar12 + uStack_74;
  uVar20 = 1;
  do {
    pdVar23 = pdVar22 + 7;
    uVar5 = *(ushort *)(pdVar22 + 8);
    if ((uVar5 >> 2 & 1) != 0) {
      bVar4 = param_3[uVar19];
      uVar24 = (uint)bVar4;
      if (0xb < bVar4) {
LAB_108d8ea48:
        uVar14 = 1;
        goto LAB_108d8ea54;
      }
      if (bVar4 == 7) {
        dVar16 = *pdVar23;
        FUN_108d8de6c(param_3 + uVar12,7,&uStack_b0);
        if ((double)(long)dVar16 <= (double)CONCAT44(uStack_ac,uStack_b0)) {
          if ((double)CONCAT44(uStack_ac,uStack_b0) != (double)(long)dVar16) goto LAB_108d8ea48;
          uVar24 = 7;
          goto LAB_108d8e9f0;
        }
      }
      else if (bVar4 != 0) {
        puVar1 = (ulong *)(param_3 + uVar12);
        uVar14 = (uint)bVar4;
        if (bVar4 < 4) {
          if (uVar14 == 1) {
            dVar16 = (double)(long)(char)(byte)*puVar1;
          }
          else if (uVar14 == 2) {
            dVar16 = (double)(long)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1));
          }
          else {
            if (uVar14 == 3) {
              uVar17 = (long)(char)(byte)*puVar1 << 0x10 | (ulong)*(byte *)((long)puVar1 + 1) << 8;
              bVar4 = *(byte *)((long)puVar1 + 2);
              goto LAB_108d8e990;
            }
LAB_108d8e998:
            dVar16 = (double)(ulong)(uVar14 - 8);
          }
        }
        else if (uVar14 == 4) {
          uVar17 = (long)(int)((uint)(byte)*puVar1 << 0x18) |
                   (ulong)*(byte *)((long)puVar1 + 1) << 0x10 |
                   (ulong)*(byte *)((long)puVar1 + 2) << 8;
          bVar4 = *(byte *)((long)puVar1 + 3);
LAB_108d8e990:
          dVar16 = (double)(uVar17 | bVar4);
        }
        else if (uVar14 == 5) {
          uVar14 = (*(uint *)((long)puVar1 + 2) & 0xff00ff00) >> 8 |
                   (*(uint *)((long)puVar1 + 2) & 0xff00ff) << 8;
          dVar16 = (double)CONCAT44((int)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1)),
                                    uVar14 >> 0x10 | uVar14 << 0x10);
        }
        else {
          if (uVar14 != 6) goto LAB_108d8e998;
          uVar17 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          dVar16 = (double)(uVar17 >> 0x20 | uVar17 << 0x20);
        }
        dVar25 = *pdVar23;
        bVar6 = SBORROW8((long)dVar16,(long)dVar25);
        bVar7 = (long)dVar16 - (long)dVar25 < 0;
        bVar8 = dVar16 == dVar25;
        if ((long)dVar25 <= (long)dVar16) goto LAB_108d8e9d4;
      }
LAB_108d8ea50:
      uVar14 = 0xffffffff;
LAB_108d8ea54:
      uVar19 = -uVar14;
      if (*(char *)(*(long *)(lVar15 + 0x18) + uVar20) == '\0') {
        uVar19 = uVar14;
      }
      return (ulong)uVar19;
    }
    if ((uVar5 >> 3 & 1) != 0) {
      bVar4 = param_3[uVar19];
      uVar24 = (uint)bVar4;
      if (0xb < bVar4) goto LAB_108d8ea48;
      if (bVar4 != 0) {
        dVar25 = *pdVar23;
        FUN_108d89864(param_3 + uVar12,uVar24,&uStack_b0);
        dVar16 = (double)CONCAT44(uStack_ac,uStack_b0);
        if (bVar4 != 7) {
          dVar16 = (double)(long)CONCAT44(uStack_ac,uStack_b0);
        }
        bVar6 = NAN(dVar16) || NAN(dVar25);
        bVar8 = dVar16 == dVar25;
        bVar7 = dVar16 < dVar25;
        if (!bVar7) {
LAB_108d8e9d4:
          if (!bVar8 && bVar7 == bVar6) goto LAB_108d8ea48;
          goto LAB_108d8e9d8;
        }
      }
      goto LAB_108d8ea50;
    }
    pbVar9 = param_3 + uVar19;
    if ((uVar5 >> 1 & 1) == 0) {
      bVar4 = *pbVar9;
      uVar24 = (uint)bVar4;
      if ((uVar5 >> 4 & 1) == 0) {
        uVar13 = (uint)(bVar4 != 0);
      }
      else {
        if ((char)bVar4 < '\0') {
          FUN_108d7d01c(pbVar9,&uStack_b4);
          uVar24 = uStack_b4;
        }
        if (uVar24 < 0xc || (uVar24 & 1) != 0) goto LAB_108d8ea50;
        if (param_4 < uVar12 + (uVar24 - 0xc >> 1)) {
LAB_108d8eab0:
          FUN_108d64c00(0xb,&UNK_10f51799f);
          *(undefined1 *)((long)plVar21 + 0xb) = 0xb;
          return 0;
        }
        uVar13 = uVar24 - 0xc >> 1;
LAB_108d8e940:
        uVar2 = *(uint *)((long)pdVar22 + 0x44);
        uVar14 = uVar13;
        if ((int)uVar2 <= (int)uVar13) {
          uVar14 = uVar2;
        }
        pbVar9 = param_3 + uVar12;
        _memcmp(pbVar9,pdVar22[9],(long)(int)uVar14);
        uVar14 = (uint)pbVar9;
        uVar13 = uVar13 - uVar2;
        if (uVar14 != 0) goto LAB_108d8ea54;
      }
    }
    else {
      uVar24 = (int)(char)*pbVar9;
      if ((char)*pbVar9 < 0) {
        FUN_108d7d01c(pbVar9,&uStack_b4);
        uVar24 = uStack_b4;
      }
      uStack_b4 = uVar24;
      uVar24 = uStack_b4;
      if (uStack_b4 < 0xc) goto LAB_108d8ea50;
      if ((uStack_b4 & 1) == 0) goto LAB_108d8ea48;
      uVar13 = uStack_b4 - 0xc >> 1;
      uStack_a4 = uVar13;
      if (param_4 < uVar12 + (uStack_b4 - 0xc >> 1)) goto LAB_108d8eab0;
      lVar11 = *(long *)(lVar15 + 0x20 + uVar20 * 8);
      if (lVar11 == 0) goto LAB_108d8e940;
      uStack_a6 = *(undefined1 *)(lVar15 + 4);
      uStack_88 = *(undefined8 *)(lVar15 + 0x10);
      uStack_a8 = 2;
      pbStack_a0 = param_3 + uVar12;
      puVar10 = &uStack_b0;
      FUN_108d8d9d4(puVar10,pdVar23,lVar11,(long)plVar21 + 0xb);
      uVar13 = (uint)puVar10;
    }
    uVar14 = uVar13;
    if (uVar14 != 0) goto LAB_108d8ea54;
LAB_108d8e9d8:
    if (uVar24 < 0xc) {
LAB_108d8e9f0:
      uVar14 = (uint)(byte)(&UNK_10dfa0a57)[uVar24];
    }
    else {
      uVar14 = uVar24 - 0xc >> 1;
    }
    uVar20 = uVar20 + 1;
    uVar17 = (ulong)uVar24;
    uVar24 = 0;
    do {
      uVar13 = uVar24 + 1;
      if (uVar17 < 0x80) break;
      uVar17 = uVar17 >> 7;
      bVar6 = uVar24 < 8;
      uVar24 = uVar13;
    } while (bVar6);
    uVar19 = uVar19 + uVar13;
    if ((bVar3 <= uVar19) ||
       (uVar12 = uVar14 + uVar12, pdVar22 = pdVar23,
       *(ushort *)(plVar21 + 1) <= uVar20 || param_4 < uVar12)) {
      return (long)*(char *)((long)plVar21 + 10);
    }
  } while( true );
}



/* Entry: 108d91e24; end: 108d91f53;  */

/* WARNING: Removing unreachable block (ram,0x000108d8e6b0) */
/* WARNING: Removing unreachable block (ram,0x000108d8e70c) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6b8) */
/* WARNING: Removing unreachable block (ram,0x000108d8e720) */
/* WARNING: Removing unreachable block (ram,0x000108d8e728) */
/* WARNING: Removing unreachable block (ram,0x000108d8e75c) */

ulong FUN_108d91e24(long param_1,int *param_2,byte *param_3,uint param_4,byte *param_5,
                   undefined8 param_6)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte *pbVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  double *pdVar24;
  double *pdVar25;
  uint uVar26;
  uint uVar27;
  double dVar28;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  uint uStack_a4;
  byte *pbStack_a0;
  undefined8 uStack_88;
  uint uStack_74;
  undefined8 in_stack_ffffffffffffff98;
  
  bVar4 = *param_3;
  bVar5 = *param_5;
  bVar7 = param_3[1];
  iVar18 = (int)(char)bVar7;
  if ((char)bVar7 < '\0') {
    FUN_108d7d01c(param_3 + 1,&stack0xffffffffffffff9c);
    iVar18 = (int)((ulong)in_stack_ffffffffffffff98 >> 0x20);
  }
  iVar18 = (iVar18 + -0xd) / 2;
  bVar7 = param_5[1];
  iVar19 = (int)(char)bVar7;
  if ((char)bVar7 < '\0') {
    FUN_108d7d01c(param_5 + 1,&stack0xffffffffffffff98);
    iVar19 = (int)in_stack_ffffffffffffff98;
  }
  iVar19 = (iVar19 + -0xd) / 2;
  iVar2 = iVar18;
  if (iVar19 <= iVar18) {
    iVar2 = iVar19;
  }
  pbVar11 = param_3 + bVar4;
  _memcmp(pbVar11,param_5 + bVar5,(long)iVar2);
  uVar26 = iVar18 - iVar19;
  if ((uint)pbVar11 != 0) {
    uVar26 = (uint)pbVar11;
  }
  lVar22 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  if (uVar26 == 0) {
    if (1 < *(ushort *)(lVar22 + 6)) {
      plVar23 = *(long **)(param_1 + 0x18);
      if (*param_2 == 0) {
        FUN_108d8aa14(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),param_6,param_5,plVar23);
        *param_2 = 1;
      }
      pdVar24 = (double *)plVar23[2];
      lVar22 = *plVar23;
      pbVar11 = param_3 + 1;
      if ((char)*pbVar11 < '\0') {
        FUN_108d7d01c(pbVar11,&uStack_b0);
        uVar26 = (int)pbVar11 + 1U & 0xff;
        uVar15 = uStack_b0;
      }
      else {
        uVar26 = 2;
        uVar15 = (int)(char)*pbVar11;
      }
      bVar4 = *param_3;
      uStack_74 = (uint)bVar4;
      if (uVar15 < 0xc) {
        uVar15 = (uint)(byte)(&UNK_10dfa0a57)[uVar15];
      }
      else {
        uVar15 = uVar15 - 0xc >> 1;
      }
      uVar15 = uVar15 + uStack_74;
      uVar13 = 1;
      do {
        pdVar25 = pdVar24 + 7;
        uVar6 = *(ushort *)(pdVar24 + 8);
        if ((uVar6 >> 2 & 1) != 0) {
          bVar5 = param_3[uVar26];
          uVar27 = (uint)bVar5;
          if (0xb < bVar5) {
LAB_108d8ea48:
            uVar17 = 1;
            goto LAB_108d8ea54;
          }
          if (bVar5 == 7) {
            dVar20 = *pdVar25;
            FUN_108d8de6c(param_3 + uVar15,7,&uStack_b0);
            if ((double)(long)dVar20 <= (double)CONCAT44(uStack_ac,uStack_b0)) {
              if ((double)CONCAT44(uStack_ac,uStack_b0) != (double)(long)dVar20) goto LAB_108d8ea48;
              uVar27 = 7;
              goto LAB_108d8e9f0;
            }
          }
          else if (bVar5 != 0) {
            puVar1 = (ulong *)(param_3 + uVar15);
            uVar17 = (uint)bVar5;
            if (bVar5 < 4) {
              if (uVar17 == 1) {
                dVar20 = (double)(long)(char)(byte)*puVar1;
              }
              else if (uVar17 == 2) {
                dVar20 = (double)(long)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1));
              }
              else {
                if (uVar17 == 3) {
                  uVar21 = (long)(char)(byte)*puVar1 << 0x10 |
                           (ulong)*(byte *)((long)puVar1 + 1) << 8;
                  bVar5 = *(byte *)((long)puVar1 + 2);
                  goto LAB_108d8e990;
                }
LAB_108d8e998:
                dVar20 = (double)(ulong)(uVar17 - 8);
              }
            }
            else if (uVar17 == 4) {
              uVar21 = (long)(int)((uint)(byte)*puVar1 << 0x18) |
                       (ulong)*(byte *)((long)puVar1 + 1) << 0x10 |
                       (ulong)*(byte *)((long)puVar1 + 2) << 8;
              bVar5 = *(byte *)((long)puVar1 + 3);
LAB_108d8e990:
              dVar20 = (double)(uVar21 | bVar5);
            }
            else if (uVar17 == 5) {
              uVar17 = (*(uint *)((long)puVar1 + 2) & 0xff00ff00) >> 8 |
                       (*(uint *)((long)puVar1 + 2) & 0xff00ff) << 8;
              dVar20 = (double)CONCAT44((int)CONCAT11((byte)*puVar1,*(byte *)((long)puVar1 + 1)),
                                        uVar17 >> 0x10 | uVar17 << 0x10);
            }
            else {
              if (uVar17 != 6) goto LAB_108d8e998;
              uVar21 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
              uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
              dVar20 = (double)(uVar21 >> 0x20 | uVar21 << 0x20);
            }
            dVar28 = *pdVar25;
            bVar8 = SBORROW8((long)dVar20,(long)dVar28);
            bVar9 = (long)dVar20 - (long)dVar28 < 0;
            bVar10 = dVar20 == dVar28;
            if ((long)dVar28 <= (long)dVar20) goto LAB_108d8e9d4;
          }
LAB_108d8ea50:
          uVar17 = 0xffffffff;
LAB_108d8ea54:
          uVar26 = -uVar17;
          if (*(char *)(*(long *)(lVar22 + 0x18) + uVar13) == '\0') {
            uVar26 = uVar17;
          }
          return (ulong)uVar26;
        }
        if ((uVar6 >> 3 & 1) != 0) {
          bVar5 = param_3[uVar26];
          uVar27 = (uint)bVar5;
          if (0xb < bVar5) goto LAB_108d8ea48;
          if (bVar5 != 0) {
            dVar28 = *pdVar25;
            FUN_108d89864(param_3 + uVar15,uVar27,&uStack_b0);
            dVar20 = (double)CONCAT44(uStack_ac,uStack_b0);
            if (bVar5 != 7) {
              dVar20 = (double)(long)CONCAT44(uStack_ac,uStack_b0);
            }
            bVar8 = NAN(dVar20) || NAN(dVar28);
            bVar10 = dVar20 == dVar28;
            bVar9 = dVar20 < dVar28;
            if (!bVar9) {
LAB_108d8e9d4:
              if (!bVar10 && bVar9 == bVar8) goto LAB_108d8ea48;
              goto LAB_108d8e9d8;
            }
          }
          goto LAB_108d8ea50;
        }
        pbVar11 = param_3 + uVar26;
        if ((uVar6 >> 1 & 1) == 0) {
          bVar5 = *pbVar11;
          uVar27 = (uint)bVar5;
          if ((uVar6 >> 4 & 1) == 0) {
            uVar16 = (uint)(bVar5 != 0);
          }
          else {
            if ((char)bVar5 < '\0') {
              FUN_108d7d01c(pbVar11,&uStack_b4);
              uVar27 = uStack_b4;
            }
            if (uVar27 < 0xc || (uVar27 & 1) != 0) goto LAB_108d8ea50;
            if (param_4 < uVar15 + (uVar27 - 0xc >> 1)) {
LAB_108d8eab0:
              FUN_108d64c00(0xb,&UNK_10f51799f);
              *(undefined1 *)((long)plVar23 + 0xb) = 0xb;
              return 0;
            }
            uVar16 = uVar27 - 0xc >> 1;
LAB_108d8e940:
            uVar3 = *(uint *)((long)pdVar24 + 0x44);
            uVar17 = uVar16;
            if ((int)uVar3 <= (int)uVar16) {
              uVar17 = uVar3;
            }
            pbVar11 = param_3 + uVar15;
            _memcmp(pbVar11,pdVar24[9],(long)(int)uVar17);
            uVar17 = (uint)pbVar11;
            uVar16 = uVar16 - uVar3;
            if (uVar17 != 0) goto LAB_108d8ea54;
          }
        }
        else {
          uVar27 = (int)(char)*pbVar11;
          if ((char)*pbVar11 < 0) {
            FUN_108d7d01c(pbVar11,&uStack_b4);
            uVar27 = uStack_b4;
          }
          uStack_b4 = uVar27;
          uVar27 = uStack_b4;
          if (uStack_b4 < 0xc) goto LAB_108d8ea50;
          if ((uStack_b4 & 1) == 0) goto LAB_108d8ea48;
          uVar16 = uStack_b4 - 0xc >> 1;
          uStack_a4 = uVar16;
          if (param_4 < uVar15 + (uStack_b4 - 0xc >> 1)) goto LAB_108d8eab0;
          lVar14 = *(long *)(lVar22 + 0x20 + uVar13 * 8);
          if (lVar14 == 0) goto LAB_108d8e940;
          uStack_a6 = *(undefined1 *)(lVar22 + 4);
          uStack_88 = *(undefined8 *)(lVar22 + 0x10);
          uStack_a8 = 2;
          pbStack_a0 = param_3 + uVar15;
          puVar12 = &uStack_b0;
          FUN_108d8d9d4(puVar12,pdVar25,lVar14,(long)plVar23 + 0xb);
          uVar16 = (uint)puVar12;
        }
        uVar17 = uVar16;
        if (uVar17 != 0) goto LAB_108d8ea54;
LAB_108d8e9d8:
        if (uVar27 < 0xc) {
LAB_108d8e9f0:
          uVar17 = (uint)(byte)(&UNK_10dfa0a57)[uVar27];
        }
        else {
          uVar17 = uVar27 - 0xc >> 1;
        }
        uVar13 = uVar13 + 1;
        uVar21 = (ulong)uVar27;
        uVar27 = 0;
        do {
          uVar16 = uVar27 + 1;
          if (uVar21 < 0x80) break;
          uVar21 = uVar21 >> 7;
          bVar8 = uVar27 < 8;
          uVar27 = uVar16;
        } while (bVar8);
        uVar26 = uVar26 + uVar16;
        if ((bVar4 <= uVar26) ||
           (uVar15 = uVar17 + uVar15, pdVar24 = pdVar25,
           *(ushort *)(plVar23 + 1) <= uVar13 || param_4 < uVar15)) {
          return (long)*(char *)((long)plVar23 + 10);
        }
      } while( true );
    }
    uVar13 = 0;
  }
  else {
    uVar15 = -uVar26;
    if (**(char **)(lVar22 + 0x18) == '\0') {
      uVar15 = uVar26;
    }
    uVar13 = (ulong)uVar15;
  }
  return uVar13;
}



/* Entry: 108d91f54; end: 108d921ff;  */

/* WARNING: Removing unreachable block (ram,0x000108d8e69c) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6c4) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6a8) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6d8) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6f0) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6e8) */
/* WARNING: Removing unreachable block (ram,0x000108d8e6fc) */

ulong FUN_108d91f54(long param_1,int *param_2,char *param_3,uint param_4,undefined8 param_5,
                   undefined8 param_6)

{
  byte *pbVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  double *pdVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  double dVar17;
  ulong uVar18;
  long *plVar19;
  double *pdVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  double dVar24;
  uint uStack_b4;
  double dStack_b0;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  uint uStack_a4;
  char *pcStack_a0;
  undefined8 uStack_88;
  uint uStack_74;
  
  plVar19 = *(long **)(param_1 + 0x18);
  if (*param_2 == 0) {
    FUN_108d8aa14(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),param_6,param_5,plVar19);
    *param_2 = 1;
  }
  pdVar20 = (double *)plVar19[2];
  lVar16 = *plVar19;
  if (*param_3 < 0) {
    pcVar21 = param_3;
    FUN_108d7d01c(param_3,&uStack_74);
  }
  else {
    pcVar21 = (char *)0x1;
    uStack_74 = (int)*param_3;
  }
  uVar3 = uStack_74;
  if (param_4 < uStack_74) {
    FUN_108d64c00(0xb,&UNK_10f51799f);
    uVar12 = 0;
    *(undefined1 *)((long)plVar19 + 0xb) = 0xb;
  }
  else {
    uVar12 = 0;
    uVar23 = uStack_74;
    do {
      uVar6 = *(ushort *)(pdVar20 + 1);
      if ((uVar6 >> 2 & 1) != 0) {
        bVar5 = param_3[(ulong)pcVar21 & 0xffffffff];
        uVar22 = (uint)bVar5;
        if (0xb < bVar5) {
LAB_108d8ea48:
          uVar15 = 1;
          goto LAB_108d8ea54;
        }
        if (bVar5 == 7) {
          dVar17 = *pdVar20;
          FUN_108d8de6c(param_3 + uVar23,7,&dStack_b0);
          if ((double)(long)dVar17 <= dStack_b0) {
            if (dStack_b0 != (double)(long)dVar17) goto LAB_108d8ea48;
            uVar22 = 7;
            goto LAB_108d8e9f0;
          }
        }
        else if (bVar5 != 0) {
          puVar2 = (ulong *)(param_3 + uVar23);
          uVar15 = (uint)bVar5;
          if (bVar5 < 4) {
            if (uVar15 == 1) {
              dVar17 = (double)(long)(char)(byte)*puVar2;
            }
            else if (uVar15 == 2) {
              dVar17 = (double)(long)CONCAT11((byte)*puVar2,*(byte *)((long)puVar2 + 1));
            }
            else {
              if (uVar15 == 3) {
                uVar18 = (long)(char)(byte)*puVar2 << 0x10 | (ulong)*(byte *)((long)puVar2 + 1) << 8
                ;
                bVar5 = *(byte *)((long)puVar2 + 2);
                goto LAB_108d8e990;
              }
LAB_108d8e998:
              dVar17 = (double)(ulong)(uVar15 - 8);
            }
          }
          else if (uVar15 == 4) {
            uVar18 = (long)(int)((uint)(byte)*puVar2 << 0x18) |
                     (ulong)*(byte *)((long)puVar2 + 1) << 0x10 |
                     (ulong)*(byte *)((long)puVar2 + 2) << 8;
            bVar5 = *(byte *)((long)puVar2 + 3);
LAB_108d8e990:
            dVar17 = (double)(uVar18 | bVar5);
          }
          else if (uVar15 == 5) {
            uVar15 = (*(uint *)((long)puVar2 + 2) & 0xff00ff00) >> 8 |
                     (*(uint *)((long)puVar2 + 2) & 0xff00ff) << 8;
            dVar17 = (double)CONCAT44((int)CONCAT11((byte)*puVar2,*(byte *)((long)puVar2 + 1)),
                                      uVar15 >> 0x10 | uVar15 << 0x10);
          }
          else {
            if (uVar15 != 6) goto LAB_108d8e998;
            uVar18 = (*puVar2 & 0xff00ff00ff00ff00) >> 8 | (*puVar2 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            dVar17 = (double)(uVar18 >> 0x20 | uVar18 << 0x20);
          }
          dVar24 = *pdVar20;
          bVar7 = SBORROW8((long)dVar17,(long)dVar24);
          bVar8 = (long)dVar17 - (long)dVar24 < 0;
          bVar9 = dVar17 == dVar24;
          if ((long)dVar24 <= (long)dVar17) goto LAB_108d8e9d4;
        }
LAB_108d8ea50:
        uVar15 = 0xffffffff;
LAB_108d8ea54:
        uVar3 = -uVar15;
        if (*(char *)(*(long *)(lVar16 + 0x18) + uVar12) == '\0') {
          uVar3 = uVar15;
        }
        return (ulong)uVar3;
      }
      if ((uVar6 >> 3 & 1) != 0) {
        bVar5 = param_3[(ulong)pcVar21 & 0xffffffff];
        uVar22 = (uint)bVar5;
        if (0xb < bVar5) goto LAB_108d8ea48;
        if (bVar5 != 0) {
          dVar24 = *pdVar20;
          FUN_108d89864(param_3 + uVar23,uVar22,&dStack_b0);
          dVar17 = dStack_b0;
          if (bVar5 != 7) {
            dVar17 = (double)(long)dStack_b0;
          }
          bVar7 = NAN(dVar17) || NAN(dVar24);
          bVar9 = dVar17 == dVar24;
          bVar8 = dVar17 < dVar24;
          if (!bVar8) {
LAB_108d8e9d4:
            if (!bVar9 && bVar8 == bVar7) goto LAB_108d8ea48;
            goto LAB_108d8e9d8;
          }
        }
        goto LAB_108d8ea50;
      }
      pbVar1 = (byte *)(param_3 + ((ulong)pcVar21 & 0xffffffff));
      if ((uVar6 >> 1 & 1) == 0) {
        bVar5 = *pbVar1;
        uVar22 = (uint)bVar5;
        if ((uVar6 >> 4 & 1) == 0) {
          uVar14 = (uint)(bVar5 != 0);
        }
        else {
          if ((char)bVar5 < '\0') {
            FUN_108d7d01c(pbVar1,&uStack_b4);
            uVar22 = uStack_b4;
          }
          if (uVar22 < 0xc || (uVar22 & 1) != 0) goto LAB_108d8ea50;
          if (param_4 < uVar23 + (uVar22 - 0xc >> 1)) {
LAB_108d8eab0:
            FUN_108d64c00(0xb,&UNK_10f51799f);
            *(undefined1 *)((long)plVar19 + 0xb) = 0xb;
            return 0;
          }
          uVar14 = uVar22 - 0xc >> 1;
LAB_108d8e940:
          uVar4 = *(uint *)((long)pdVar20 + 0xc);
          uVar15 = uVar14;
          if ((int)uVar4 <= (int)uVar14) {
            uVar15 = uVar4;
          }
          pcVar11 = param_3 + uVar23;
          _memcmp(pcVar11,pdVar20[2],(long)(int)uVar15);
          uVar15 = (uint)pcVar11;
          uVar14 = uVar14 - uVar4;
          if (uVar15 != 0) goto LAB_108d8ea54;
        }
      }
      else {
        uVar22 = (int)(char)*pbVar1;
        if ((char)*pbVar1 < 0) {
          FUN_108d7d01c(pbVar1,&uStack_b4);
          uVar22 = uStack_b4;
        }
        uStack_b4 = uVar22;
        uVar22 = uStack_b4;
        if (uStack_b4 < 0xc) goto LAB_108d8ea50;
        if ((uStack_b4 & 1) == 0) goto LAB_108d8ea48;
        uVar14 = uStack_b4 - 0xc >> 1;
        uStack_a4 = uVar14;
        if (param_4 < uVar23 + (uStack_b4 - 0xc >> 1)) goto LAB_108d8eab0;
        lVar13 = *(long *)(lVar16 + 0x20 + uVar12 * 8);
        if (lVar13 == 0) goto LAB_108d8e940;
        uStack_a6 = *(undefined1 *)(lVar16 + 4);
        uStack_88 = *(undefined8 *)(lVar16 + 0x10);
        uStack_a8 = 2;
        pcStack_a0 = param_3 + uVar23;
        pdVar10 = &dStack_b0;
        FUN_108d8d9d4(pdVar10,pdVar20,lVar13,(long)plVar19 + 0xb);
        uVar14 = (uint)pdVar10;
      }
      uVar15 = uVar14;
      if (uVar15 != 0) goto LAB_108d8ea54;
LAB_108d8e9d8:
      if (uVar22 < 0xc) {
LAB_108d8e9f0:
        uVar15 = (uint)(byte)(&UNK_10dfa0a57)[uVar22];
      }
      else {
        uVar15 = uVar22 - 0xc >> 1;
      }
      uVar12 = uVar12 + 1;
      pdVar20 = pdVar20 + 7;
      uVar18 = (ulong)uVar22;
      uVar22 = 0;
      do {
        uVar14 = uVar22 + 1;
        if (uVar18 < 0x80) break;
        uVar18 = uVar18 >> 7;
        bVar7 = uVar22 < 8;
        uVar22 = uVar14;
      } while (bVar7);
      uVar14 = (int)pcVar21 + uVar14;
      pcVar21 = (char *)(ulong)uVar14;
    } while ((uVar14 < uVar3) &&
            (uVar23 = uVar15 + uVar23, uVar12 < *(ushort *)(plVar19 + 1) && uVar23 <= param_4));
    uVar12 = (ulong)*(char *)((long)plVar19 + 10);
  }
  return uVar12;
}



/* Entry: 108d92200; end: 108d922b7;  */

long FUN_108d92200(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000108d92024(param_1,param_1 + 0x20);
  *(undefined4 *)(param_1 + 8) = 1;
  return (long)(int)lVar1;
}



/* Entry: 108d922b8; end: 108d92403;  */

void FUN_108d922b8(undefined8 param_1,undefined8 *param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  lVar3 = (long)param_3;
  lVar1 = lVar3;
  FUN_108d60848();
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    *(undefined4 *)param_2 = 7;
  }
  else {
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = param_4 / lVar3;
    }
    iVar2 = (int)param_4 - (int)(lVar1 * lVar3);
    *(int *)((long)param_2 + 0x14) = iVar2;
    *(int *)(param_2 + 3) = iVar2;
    *(int *)(param_2 + 2) = param_3;
    param_2[4] = lVar1 * lVar3;
    param_2[5] = param_1;
  }
  return;
}



/* Entry: 108d92404; end: 108d9248f;  */

int FUN_108d92404(int *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((*param_1 == 0) && (*(long *)(param_1 + 2) != 0)) {
    iVar1 = param_1[5];
    if (iVar1 < param_1[6]) {
      plVar2 = *(long **)(param_1 + 10);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,*(long *)(param_1 + 2) + (long)iVar1,param_1[6] - iVar1,
                 *(long *)(param_1 + 8) + (long)iVar1);
      *param_1 = (int)plVar2;
    }
  }
  *param_2 = *(long *)(param_1 + 8) + (long)param_1[6];
  func_0x000108d5e198(*(undefined8 *)(param_1 + 2));
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  return *param_1;
}



/* Entry: 108d92490; end: 108d9253f;  */

undefined8 FUN_108d92490(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  if (pcRam0000000113297ab0 != (code *)0x0) {
    iVar2 = 100;
    (*pcRam0000000113297ab0)();
    if (iVar2 != 0) goto LAB_108d92520;
  }
  plVar3 = (long *)0x48;
  FUN_108d60848();
  if (plVar3 != (long *)0x0) {
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[4] = 0;
    plVar3[7] = 0;
    plVar3[6] = 0;
    plVar3[1] = 0;
    *plVar3 = 0;
    plVar3[3] = 0;
    plVar3[2] = 0;
    *param_3 = plVar3;
    *plVar3 = param_1;
    plVar3[1] = param_2;
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 8) + 9;
    iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 4) / 2;
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    *(int *)(plVar3 + 3) = iVar1;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + (long)iVar1;
    return 0;
  }
LAB_108d92520:
  *param_3 = 0;
  FUN_108d8224c(param_2);
  return 7;
}



/* Entry: 108d92540; end: 108d92573;  */

/* WARNING: Possible PIC construction at 0x000108d92cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d92cb8) */
/* WARNING: Removing unreachable block (ram,0x000108d92cc0) */

long * FUN_108d92540(long *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar14;
  long *unaff_x21;
  long *plVar15;
  undefined8 unaff_x22;
  long *plVar16;
  long lVar17;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_58;
  
  puVar11 = (undefined8 *)param_1[9];
  if (puVar11 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  if (*(int *)(puVar11 + 4) == 0) {
    plVar15 = (long *)param_1[9];
    plVar14 = (long *)*plVar15;
    plVar16 = *(long **)(plVar14[2] + 0x20);
    plVar7 = plVar14;
    func_0x000108d9267c(plVar14,plVar15[1],param_2);
    if ((int)plVar7 != 0) {
      return plVar7;
    }
    if ((int)plVar15[4] == 0) {
      lVar9 = plVar15[3];
      plVar7 = plVar14 + 0xb;
      lVar17 = *plVar7;
      if (lVar17 == 0) {
        func_0x000108d92230(plVar16,plVar7);
        plVar14[0xc] = 0;
        if ((int)plVar16 != 0) {
          return plVar16;
        }
        lVar13 = 0;
        lVar17 = *plVar7;
      }
      else {
        lVar13 = plVar14[0xc];
      }
      plVar15[7] = lVar17;
      plVar15[2] = lVar13;
      plVar14[0xc] = lVar13 + (int)lVar9;
    }
    else {
      plVar14 = plVar16;
      func_0x000108d92230(plVar16,plVar15 + 5);
      if ((int)plVar14 != 0) {
        return plVar14;
      }
      func_0x000108d92230(plVar16,plVar15 + 7);
      if ((int)plVar16 != 0) {
        return plVar16;
      }
    }
    if ((int)plVar15[4] == 0) {
      plVar15 = (long *)0x0;
    }
    else {
      FUN_108d92e68();
    }
    if ((int)param_2 == 1) {
      return plVar15;
    }
    if ((int)plVar15 != 0) {
      return plVar15;
    }
    puVar4 = &stack0xffffffffffffffb0;
    unaff_x29 = &stack0xfffffffffffffff0;
    if (*param_1 < param_1[1]) {
LAB_108d92bbc:
      plVar14 = param_1;
      func_0x000108d92aa0(param_1,&stack0xffffffffffffffb8);
      if ((int)plVar14 != 0) {
        return plVar14;
      }
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      plVar14 = param_1 + 5;
      lVar9 = *param_1;
      if (param_1[8] == 0) {
        iVar10 = (int)param_1[7];
        lVar13 = (long)iVar10;
        lVar17 = 0;
        if (lVar13 != 0) {
          lVar17 = lVar9 / lVar13;
        }
        lVar17 = lVar9 - lVar17 * lVar13;
        if (lVar17 == 0) {
          lVar3 = param_1[1] - lVar9;
          if (lVar13 <= param_1[1] - lVar9) {
            lVar3 = lVar13;
          }
          plVar7 = (long *)param_1[3];
          (**(code **)(*plVar7 + 0x10))(plVar7,param_1[6],lVar3);
          if ((int)plVar7 != 0) {
            return plVar7;
          }
          iVar10 = (int)param_1[7];
        }
        iVar10 = iVar10 - (int)lVar17;
        if (-iVar10 != 0 && iVar10 < 1) {
          iVar12 = (int)param_1[2];
          if (iVar12 < 0) {
            if (iVar12 < 0x41) {
              iVar12 = 0x40;
            }
            do {
              iVar2 = iVar12 * 2;
              iVar12 = iVar12 << 1;
            } while (iVar2 < 0);
            lVar9 = param_1[4];
            FUN_108d63588(lVar9,iVar12);
            if (lVar9 == 0) {
              return (long *)0x7;
            }
            *(int *)(param_1 + 2) = iVar12;
            param_1[4] = lVar9;
          }
          _memcpy();
          *param_1 = *param_1 + (long)iVar10;
          iVar10 = -iVar10;
          while( true ) {
            iVar12 = iVar10;
            if ((int)param_1[7] <= iVar10) {
              iVar12 = (int)param_1[7];
            }
            plVar7 = param_1;
            FUN_108d92ce0(param_1,iVar12,&uStack_58);
            if ((int)plVar7 != 0) break;
            _memcpy(param_1[4] + (long)-iVar10,uStack_58,(long)iVar12);
            iVar2 = iVar10 - iVar12;
            bVar1 = iVar10 < iVar12;
            iVar10 = iVar2;
            if (iVar2 == 0 || bVar1) {
              *plVar14 = param_1[4];
              return (long *)0x0;
            }
          }
          return plVar7;
        }
        *plVar14 = param_1[6] + lVar17;
        lVar9 = *param_1;
      }
      else {
        *plVar14 = param_1[8] + lVar9;
      }
      *param_1 = lVar9;
      return (long *)0x0;
    }
    plVar14 = (long *)param_1[9];
    if (plVar14 != (long *)0x0) {
      if ((int)plVar14[4] != 0) {
        unaff_x21 = (long *)*plVar14;
        FUN_108d822ac();
        if ((int)unaff_x21 != 0) goto LAB_108d92c84;
        lVar17 = plVar14[6];
        lVar9 = plVar14[5];
        plVar14[6] = plVar14[8];
        plVar14[5] = plVar14[7];
        plVar14[8] = lVar17;
        plVar14[7] = lVar9;
        if (plVar14[6] == plVar14[2]) {
          unaff_x21 = (long *)0x0;
          *(undefined4 *)((long)plVar14 + 0x1c) = 1;
          goto LAB_108d92c84;
        }
        puVar11 = (undefined8 *)*plVar14;
        pcVar8 = FUN_108d92fac;
        unaff_x30 = 0x108d92cb8;
        unaff_x20 = plVar14;
        goto SUB_108d9215c;
      }
      unaff_x21 = plVar14;
      FUN_108d92e68();
      plVar14[6] = plVar14[8];
      plVar14[5] = plVar14[7];
      if (plVar14[6] == plVar14[2]) {
        *(undefined4 *)((long)plVar14 + 0x1c) = 1;
      }
      if ((int)unaff_x21 != 0) goto LAB_108d92c84;
      if (*(int *)((long)plVar14 + 0x1c) == 0) {
        plVar7 = (long *)*plVar14;
        func_0x000108d92984(plVar7,param_1,plVar14 + 5,plVar14[2]);
        if ((int)plVar7 != 0) {
          return plVar7;
        }
        goto LAB_108d92bbc;
      }
    }
    unaff_x21 = (long *)0x0;
LAB_108d92c84:
    FUN_108d82208(param_1);
    return unaff_x21;
  }
  puVar11 = (undefined8 *)*puVar11;
  pcVar8 = FUN_108d93148;
  puVar4 = (undefined1 *)register0x00000008;
  plVar14 = param_1;
  param_1 = unaff_x19;
SUB_108d9215c:
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = unaff_x20;
  *(long **)(puVar4 + -0x18) = param_1;
  *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar4 + -8) = unaff_x30;
  *puVar11 = 0;
  puVar5 = (undefined8 *)0x28;
  FUN_108d60848();
  if (puVar5 == (undefined8 *)0x0) {
    return (long *)0x7;
  }
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[3] = pcVar8;
  puVar5[4] = 0;
  puVar5[4] = plVar14;
  if (pcRam0000000113297ab0 == (code *)0x0) {
LAB_108d921b4:
    puVar6 = puVar5;
    _pthread_create(puVar5,0,pcVar8,plVar14);
    if ((int)puVar6 == 0) goto LAB_108d921e0;
  }
  else {
    iVar10 = 200;
    (*pcRam0000000113297ab0)();
    if (iVar10 == 0) goto LAB_108d921b4;
  }
  *(undefined4 *)(puVar5 + 1) = 1;
  (*pcVar8)();
  puVar5[2] = plVar14;
LAB_108d921e0:
  *puVar11 = puVar5;
  return (long *)0x0;
}



/* Entry: 108d92574; end: 108d927e3;  */

long * FUN_108d92574(long *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uStack_58;
  
  plVar10 = (long *)param_1[9];
  plVar8 = (long *)*plVar10;
  plVar11 = *(long **)(plVar8[2] + 0x20);
  plVar4 = plVar8;
  func_0x000108d9267c(plVar8,plVar10[1],param_2);
  if ((int)plVar4 != 0) {
    return plVar4;
  }
  if ((int)plVar10[4] == 0) {
    lVar5 = plVar10[3];
    plVar4 = plVar8 + 0xb;
    lVar12 = *plVar4;
    if (lVar12 == 0) {
      func_0x000108d92230(plVar11,plVar4);
      plVar8[0xc] = 0;
      if ((int)plVar11 != 0) {
        return plVar11;
      }
      lVar7 = 0;
      lVar12 = *plVar4;
    }
    else {
      lVar7 = plVar8[0xc];
    }
    plVar10[7] = lVar12;
    plVar10[2] = lVar7;
    plVar8[0xc] = lVar7 + (int)lVar5;
  }
  else {
    plVar8 = plVar11;
    func_0x000108d92230(plVar11,plVar10 + 5);
    if ((int)plVar8 != 0) {
      return plVar8;
    }
    func_0x000108d92230(plVar11,plVar10 + 7);
    if ((int)plVar11 != 0) {
      return plVar11;
    }
  }
  if ((int)plVar10[4] == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    FUN_108d92e68();
  }
  if ((int)param_2 == 1) {
    return plVar10;
  }
  if ((int)plVar10 != 0) {
    return plVar10;
  }
  if (*param_1 < param_1[1]) {
LAB_108d92bbc:
    plVar8 = param_1;
    func_0x000108d92aa0(param_1,&stack0xffffffffffffffb8);
    if ((int)plVar8 != 0) {
      return plVar8;
    }
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    plVar8 = param_1 + 5;
    lVar5 = *param_1;
    if (param_1[8] == 0) {
      iVar9 = (int)param_1[7];
      lVar7 = (long)iVar9;
      lVar12 = 0;
      if (lVar7 != 0) {
        lVar12 = lVar5 / lVar7;
      }
      lVar12 = lVar5 - lVar12 * lVar7;
      if (lVar12 == 0) {
        lVar3 = param_1[1] - lVar5;
        if (lVar7 <= param_1[1] - lVar5) {
          lVar3 = lVar7;
        }
        plVar4 = (long *)param_1[3];
        (**(code **)(*plVar4 + 0x10))(plVar4,param_1[6],lVar3);
        if ((int)plVar4 != 0) {
          return plVar4;
        }
        iVar9 = (int)param_1[7];
      }
      iVar9 = iVar9 - (int)lVar12;
      if (-iVar9 != 0 && iVar9 < 1) {
        iVar6 = (int)param_1[2];
        if (iVar6 < 0) {
          if (iVar6 < 0x41) {
            iVar6 = 0x40;
          }
          do {
            iVar2 = iVar6 * 2;
            iVar6 = iVar6 << 1;
          } while (iVar2 < 0);
          lVar5 = param_1[4];
          FUN_108d63588(lVar5,iVar6);
          if (lVar5 == 0) {
            return (long *)0x7;
          }
          *(int *)(param_1 + 2) = iVar6;
          param_1[4] = lVar5;
        }
        _memcpy();
        *param_1 = *param_1 + (long)iVar9;
        iVar9 = -iVar9;
        while( true ) {
          iVar6 = iVar9;
          if ((int)param_1[7] <= iVar9) {
            iVar6 = (int)param_1[7];
          }
          plVar4 = param_1;
          FUN_108d92ce0(param_1,iVar6,&uStack_58);
          if ((int)plVar4 != 0) break;
          _memcpy(param_1[4] + (long)-iVar9,uStack_58,(long)iVar6);
          iVar2 = iVar9 - iVar6;
          bVar1 = iVar9 < iVar6;
          iVar9 = iVar2;
          if (iVar2 == 0 || bVar1) {
            *plVar8 = param_1[4];
            return (long *)0x0;
          }
        }
        return plVar4;
      }
      *plVar8 = param_1[6] + lVar12;
      lVar5 = *param_1;
    }
    else {
      *plVar8 = param_1[8] + lVar5;
    }
    *param_1 = lVar5;
    return (long *)0x0;
  }
  plVar8 = (long *)param_1[9];
  if (plVar8 != (long *)0x0) {
    if ((int)plVar8[4] == 0) {
      plVar4 = plVar8;
      FUN_108d92e68();
      plVar8[6] = plVar8[8];
      plVar8[5] = plVar8[7];
      if (plVar8[6] == plVar8[2]) {
        *(undefined4 *)((long)plVar8 + 0x1c) = 1;
      }
      iVar9 = (int)plVar4;
    }
    else {
      plVar4 = (long *)*plVar8;
      FUN_108d822ac();
      if ((int)plVar4 != 0) goto LAB_108d92c84;
      lVar12 = plVar8[6];
      lVar5 = plVar8[5];
      plVar8[6] = plVar8[8];
      plVar8[5] = plVar8[7];
      plVar8[8] = lVar12;
      plVar8[7] = lVar5;
      if (plVar8[6] == plVar8[2]) {
        plVar4 = (long *)0x0;
        *(undefined4 *)((long)plVar8 + 0x1c) = 1;
        goto LAB_108d92c84;
      }
      plVar4 = (long *)*plVar8;
      func_0x000108d9215c(plVar4,FUN_108d92fac,plVar8);
      iVar9 = (int)plVar4;
    }
    if (iVar9 != 0) goto LAB_108d92c84;
    if (*(int *)((long)plVar8 + 0x1c) == 0) {
      plVar4 = (long *)*plVar8;
      func_0x000108d92984(plVar4,param_1,plVar8 + 5,plVar8[2]);
      if ((int)plVar4 != 0) {
        return plVar4;
      }
      goto LAB_108d92bbc;
    }
  }
  plVar4 = (long *)0x0;
LAB_108d92c84:
  FUN_108d82208(param_1);
  return plVar4;
}



/* Entry: 108d927e4; end: 108d9285f;  */

void FUN_108d927e4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 2;
  do {
    iVar3 = iVar1;
    iVar1 = iVar3 << 1;
  } while (iVar3 < param_1);
  if (pcRam0000000113297ab0 != (code *)0x0) {
    iVar1 = 100;
    (*pcRam0000000113297ab0)();
    if (iVar1 != 0) {
      return;
    }
  }
  piVar2 = (int *)(long)(iVar3 * 0x54 + 0x20);
  func_0x000108d65d8c();
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar3;
    *(int **)(piVar2 + 6) = piVar2 + 8;
    piVar2[2] = 0;
    piVar2[3] = 0;
    *(int **)(piVar2 + 4) = piVar2 + 8 + (long)iVar3 * 0x14;
  }
  return;
}



/* Entry: 108d92860; end: 108d92983;  */

long * FUN_108d92860(long *param_1,ulong param_2,long *param_3,ulong *param_4)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lStack_68;
  
  lVar5 = *param_3;
  uVar3 = param_2;
  FUN_108d927e4();
  *param_4 = uVar3;
  bVar2 = uVar3 != 0;
  uVar4 = 0;
  if (!bVar2) {
    uVar4 = 7;
  }
  plVar6 = (long *)(ulong)uVar4;
  if ((0 < (int)param_2) && (uVar3 != 0)) {
    lVar7 = 0;
    uVar8 = 1;
    do {
      plVar1 = (long *)(*(long *)(uVar3 + 0x18) + lVar7);
      plVar6 = param_1;
      FUN_108d92984(param_1,plVar1,param_1 + 9,lVar5);
      if ((int)plVar6 != 0) {
        lVar5 = plVar1[1];
        goto LAB_108d92950;
      }
      plVar6 = plVar1;
      func_0x000108d92aa0(plVar1,&lStack_68);
      lVar5 = lStack_68 + *plVar1;
      plVar1[1] = lVar5;
      if ((int)plVar6 != 0) goto LAB_108d92950;
      plVar6 = plVar1;
      func_0x000108d92b94();
      lVar5 = plVar1[1];
      bVar2 = (int)plVar6 == 0;
      if ((param_2 & 0xffffffff) <= uVar8) break;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x50;
    } while ((int)plVar6 == 0);
  }
  if (!bVar2) {
LAB_108d92950:
    FUN_108d8224c(uVar3);
    *param_4 = 0;
  }
  *param_3 = lVar5;
  return plVar6;
}



/* Entry: 108d92984; end: 108d92cdf;  */

long * FUN_108d92984(long param_1,long *param_2,long *param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  
  if (pcRam0000000113297ab0 != (code *)0x0) {
    iVar4 = 0xc9;
    (*pcRam0000000113297ab0)();
    if (iVar4 != 0) {
      return (long *)0x10a;
    }
  }
  if (param_2[8] != 0) {
    param_2[8] = 0;
  }
  puVar2 = (undefined8 *)*param_3;
  lVar3 = param_3[1];
  *param_2 = param_4;
  param_2[1] = lVar3;
  param_2[3] = (long)puVar2;
  lVar6 = *(long *)(param_1 + 0x10);
  if ((lVar3 <= *(int *)(*(long *)(lVar6 + 0x20) + 0x98)) && (2 < *(int *)*puVar2)) {
    param_2[8] = 0;
    lVar6 = *(long *)(param_1 + 0x10);
  }
  iVar4 = *(int *)(lVar6 + 0xc);
  lVar6 = (long)iVar4;
  lVar3 = 0;
  if (lVar6 != 0) {
    lVar3 = param_4 / lVar6;
  }
  param_4 = param_4 - lVar3 * lVar6;
  if (param_2[6] == 0) {
    FUN_108d60848();
    param_2[6] = lVar6;
    uVar5 = 7;
    if (lVar6 != 0) {
      uVar5 = 0;
    }
    plVar7 = (long *)(ulong)uVar5;
    *(int *)(param_2 + 7) = iVar4;
  }
  else {
    plVar7 = (long *)0x0;
    lVar6 = param_2[6];
  }
  if (param_4 == 0 || (int)plVar7 != 0) {
    return plVar7;
  }
  iVar4 = iVar4 - (int)param_4;
  iVar1 = (int)param_2[1] - (int)*param_2;
  if (*param_2 + (long)iVar4 <= param_2[1]) {
    iVar1 = iVar4;
  }
  plVar7 = (long *)param_2[3];
                    /* WARNING: Could not recover jumptable at 0x000108d92a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x10))(plVar7,lVar6 + param_4,iVar1);
  return plVar7;
}



/* Entry: 108d92ce0; end: 108d92e67;  */

void FUN_108d92ce0(long *param_1,int param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_58;
  
  lVar5 = *param_1;
  if (param_1[8] == 0) {
    iVar6 = (int)param_1[7];
    lVar8 = (long)iVar6;
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = lVar5 / lVar8;
    }
    lVar9 = lVar5 - lVar9 * lVar8;
    if (lVar9 == 0) {
      lVar3 = param_1[1] - lVar5;
      if (lVar8 <= param_1[1] - lVar5) {
        lVar3 = lVar8;
      }
      plVar4 = (long *)param_1[3];
      (**(code **)(*plVar4 + 0x10))(plVar4,param_1[6],lVar3);
      if ((int)plVar4 != 0) {
        return;
      }
      iVar6 = (int)param_1[7];
    }
    iVar6 = iVar6 - (int)lVar9;
    if (param_2 - iVar6 != 0 && iVar6 <= param_2) {
      iVar7 = (int)param_1[2];
      if (iVar7 < param_2) {
        if (iVar7 < 0x41) {
          iVar7 = 0x40;
        }
        do {
          iVar2 = iVar7 * 2;
          iVar7 = iVar7 << 1;
        } while (iVar2 < param_2);
        lVar5 = param_1[4];
        FUN_108d63588(lVar5,iVar7);
        if (lVar5 == 0) {
          return;
        }
        *(int *)(param_1 + 2) = iVar7;
        param_1[4] = lVar5;
      }
      _memcpy();
      *param_1 = *param_1 + (long)iVar6;
      iVar6 = param_2 - iVar6;
      while( true ) {
        iVar7 = iVar6;
        if ((int)param_1[7] <= iVar6) {
          iVar7 = (int)param_1[7];
        }
        plVar4 = param_1;
        FUN_108d92ce0(param_1,iVar7,&uStack_58);
        if ((int)plVar4 != 0) break;
        _memcpy(param_1[4] + (long)(param_2 - iVar6),uStack_58,(long)iVar7);
        iVar2 = iVar6 - iVar7;
        bVar1 = iVar6 < iVar7;
        iVar6 = iVar2;
        if (iVar2 == 0 || bVar1) {
          *param_3 = param_1[4];
          return;
        }
      }
      return;
    }
    *param_3 = param_1[6] + lVar9;
    lVar5 = *param_1 + (long)param_2;
  }
  else {
    *param_3 = param_1[8] + lVar5;
    lVar5 = lVar5 + param_2;
  }
  *param_1 = lVar5;
  return;
}



/* Entry: 108d92e68; end: 108d92fab;  */

long * FUN_108d92e68(long *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_8c [4];
  long alStack_88 [3];
  int iStack_70;
  long lStack_68;
  undefined1 auStack_52 [10];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  FUN_108d922b8(param_1[7],alStack_88,*(undefined4 *)(*(long *)(*param_1 + 0x10) + 0xc),lVar2);
  do {
    lVar11 = *(long *)(lVar1 + 0x18) + (long)*(int *)(*(long *)(lVar1 + 0x10) + 4) * 0x50;
    if (*(long *)(lVar11 + 0x18) == 0) {
LAB_108d92f64:
      plVar6 = alStack_88;
      FUN_108d92404(plVar6,param_1 + 8);
      plVar5 = plVar6;
      goto LAB_108d92f74;
    }
    uVar7 = 0;
    uVar10 = (ulong)*(int *)(lVar11 + 0x14);
    lVar8 = lStack_68 + iStack_70 + uVar10;
    uVar9 = uVar10;
    do {
      lVar8 = lVar8 + 1;
      if (uVar9 < 0x80) break;
      uVar9 = uVar9 >> 7;
      bVar3 = uVar7 < 8;
      uVar7 = uVar7 + 1;
    } while (bVar3);
    if (lVar2 + (int)param_1[3] < lVar8) goto LAB_108d92f64;
    puVar4 = auStack_52;
    FUN_108d899f0(puVar4,uVar10);
    func_0x000108d92334(alStack_88,auStack_52,puVar4);
    func_0x000108d92334(alStack_88,*(undefined8 *)(lVar11 + 0x28),uVar10);
    plVar5 = (long *)param_1[1];
    FUN_108d92fdc(plVar5,auStack_8c);
  } while ((int)plVar5 == 0);
  plVar6 = alStack_88;
  FUN_108d92404(plVar6,param_1 + 8);
LAB_108d92f74:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar5 = plVar6;
  FUN_108d92e68();
  *(undefined4 *)(*plVar6 + 8) = 1;
  return (long *)(long)(int)plVar5;
}



/* Entry: 108d92fac; end: 108d92fdb;  */

long FUN_108d92fac(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_108d92e68();
  *(undefined4 *)(*param_1 + 8) = 1;
  return (long)(int)plVar1;
}



/* Entry: 108d92fdc; end: 108d93147;  */

void FUN_108d92fdc(int *param_1,uint *param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uStack_64;
  
  lVar2 = *(long *)(param_1 + 2);
  uVar7 = *(uint *)(*(long *)(param_1 + 4) + 4);
  iVar4 = (int)*(undefined8 *)(param_1 + 6) + uVar7 * 0x50;
  func_0x000108d92b94();
  if (iVar4 == 0) {
    uStack_64 = 0;
    lVar5 = *(long *)(param_1 + 6);
    if ((int)(*param_1 + uVar7) < 2) {
      lVar6 = *(long *)(param_1 + 4);
    }
    else {
      uVar8 = lVar5 + (long)(int)(uVar7 | 1) * 0x50;
      uVar9 = lVar5 + ((ulong)uVar7 & 0xfffe) * 0x50;
      uVar7 = *param_1 + uVar7;
      do {
        uVar3 = uVar7 >> 1;
        if (*(long *)(uVar9 + 0x18) == 0) {
LAB_108d930d0:
          lVar6 = *(long *)(param_1 + 4);
          lVar5 = *(long *)(param_1 + 6);
          *(int *)(lVar6 + (ulong)uVar3 * 4) = (int)(uVar8 - lVar5 >> 4) * -0x33333333;
          uVar9 = lVar5 + (long)*(int *)(lVar6 + (ulong)(uVar3 ^ 1) * 4) * 0x50;
        }
        else {
          if (*(long *)(uVar8 + 0x18) != 0) {
            lVar5 = lVar2;
            (**(code **)(lVar2 + 0x40))
                      (lVar2,&uStack_64,*(undefined8 *)(uVar9 + 0x28),*(undefined4 *)(uVar9 + 0x14),
                       *(undefined8 *)(uVar8 + 0x28),*(undefined4 *)(uVar8 + 0x14));
            if ((-1 < (int)lVar5) && (((int)lVar5 != 0 || (uVar8 <= uVar9)))) {
              if (*(long *)(uVar9 + 0x18) != 0) {
                uStack_64 = 0;
              }
              goto LAB_108d930d0;
            }
          }
          lVar6 = *(long *)(param_1 + 4);
          lVar5 = *(long *)(param_1 + 6);
          *(int *)(lVar6 + (ulong)uVar3 * 4) = (int)(uVar9 - lVar5 >> 4) * -0x33333333;
          uVar8 = lVar5 + (long)*(int *)(lVar6 + (ulong)(uVar3 ^ 1) * 4) * 0x50;
          uStack_64 = 0;
        }
        bVar1 = 3 < uVar7;
        uVar7 = uVar3;
      } while (bVar1);
    }
    *param_2 = (uint)(*(long *)(lVar5 + (long)*(int *)(lVar6 + 4) * 0x50 + 0x18) == 0);
  }
  return;
}



/* Entry: 108d93148; end: 108d9317f;  */

long FUN_108d93148(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108d92574(param_1,1);
  *(undefined4 *)(**(long **)(param_1 + 0x48) + 8) = 1;
  return (long)(int)lVar1;
}



/* Entry: 108d93180; end: 108d9335f;  */

long FUN_108d93180(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_6a [2];
  long lStack_68;
  
  if (*(uint *)(param_1 + 0x40) < (uint)param_2) {
    FUN_108d64c00(0xb,&UNK_10f51799f);
    return 0xb;
  }
  lVar6 = param_1;
  FUN_108d8e264(param_1,param_2,&lStack_68,0);
  if ((int)lVar6 != 0) {
    return lVar6;
  }
  if (*(char *)(lStack_68 + 9) == '\0') {
    *(undefined1 *)(lStack_68 + 9) = 1;
    bVar3 = *(byte *)(lStack_68 + 6);
    uVar5 = (ulong)*(ushort *)(lStack_68 + 0x12);
    if (*(ushort *)(lStack_68 + 0x12) != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar8 = *(long *)(lStack_68 + 0x50);
        puVar1 = (undefined1 *)(*(long *)(lStack_68 + 0x60) + lVar6);
        uVar5 = (ulong)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(lStack_68 + 0x14));
        if (((*(char *)(lStack_68 + 5) == '\0') &&
            (uVar2 = *(uint *)(lVar8 + uVar5),
            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8, lVar4 = param_1,
            FUN_108d93180(param_1,uVar2 >> 0x10 | uVar2 << 0x10,1,param_4), (int)lVar4 != 0)) ||
           (lVar4 = lStack_68, FUN_108d8ee70(lStack_68,lVar8 + uVar5,auStack_6a), (int)lVar4 != 0))
        goto LAB_108d93308;
        uVar7 = uVar7 + 1;
        uVar5 = (ulong)*(ushort *)(lStack_68 + 0x12);
        lVar6 = lVar6 + 2;
      } while (uVar7 < uVar5);
    }
    if (*(char *)(lStack_68 + 5) == '\0') {
      uVar2 = *(uint *)(*(long *)(lStack_68 + 0x50) + (ulong)bVar3 + 8);
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      FUN_108d93180(param_1,uVar2 >> 0x10 | uVar2 << 0x10,1,param_4);
      lVar4 = param_1;
      if ((int)param_1 != 0) goto LAB_108d93308;
    }
    else if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + (int)uVar5;
    }
    if (param_3 == 0) {
      lVar4 = *(long *)(lStack_68 + 0x68);
      FUN_108d5ffdc();
      if ((int)lVar4 == 0) {
        FUN_108d7c870(lStack_68,*(byte *)(*(long *)(lStack_68 + 0x50) + (ulong)bVar3) | 8);
      }
    }
    else {
      lVar4 = *(long *)(lStack_68 + 0x48);
      FUN_108d90b7c(lVar4,lStack_68,*(undefined4 *)(lStack_68 + 0x70));
    }
  }
  else {
    FUN_108d64c00(0xb,&UNK_10f51799f);
    lVar4 = 0xb;
  }
LAB_108d93308:
  *(undefined1 *)(lStack_68 + 9) = 0;
  func_0x000108d787d8(*(undefined8 *)(lStack_68 + 0x68));
  return lVar4;
}



/* Entry: 108d93360; end: 108d93427;  */

void FUN_108d93360(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0x51) == '\0') {
    if (((*(byte *)(lVar3 + 0x2e) & 1) == 0) &&
       (func_0x000108d7163c(param_1[1],lVar3,&UNK_10f51833b), param_3 != 0)) {
      lVar1 = lVar3;
      FUN_108d9360c();
      *(long *)param_1[1] = lVar1;
    }
    if (*(char *)(lVar3 + 0x51) == '\0') {
      uVar2 = 0xb;
      FUN_108d64c00(0xb,&UNK_10f51799f);
      goto LAB_108d933e4;
    }
  }
  uVar2 = 7;
LAB_108d933e4:
  *(undefined4 *)((long)param_1 + 0x14) = uVar2;
  return;
}



/* Entry: 108d93428; end: 108d934c7;  */

long FUN_108d93428(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_44 [4];
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    lVar5 = *(long *)(param_1 + 0x20);
    do {
      puVar1 = (undefined8 *)(lVar5 + (ulong)(uVar4 ^ uVar4 < 2) * 0x20);
      lVar6 = puVar1[3];
      if ((param_3 == 0) || (lVar3 = param_3, FUN_108d5e044(param_3,*puVar1), (int)lVar3 == 0)) {
        lVar6 = lVar6 + 0x20;
        func_0x000108d93668(lVar6,param_2,auStack_44);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
          return *(long *)(lVar6 + 0x10);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  return 0;
}



/* Entry: 108d934c8; end: 108d9360b;  */

undefined8 FUN_108d934c8(char *param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar9;
  
  cVar2 = *param_1;
  if (cVar2 == '-') {
    lVar7 = -1;
    param_1 = param_1 + 1;
  }
  else if (cVar2 == '0') {
    if (((byte)(param_1[1] | 0x20U) == 0x78) &&
       (pbVar9 = (byte *)(param_1 + 2), ((byte)(&UNK_10dfa0749)[(byte)param_1[2]] >> 3 & 1) != 0)) {
      do {
        pbVar8 = pbVar9 + 1;
        uVar10 = (ulong)*pbVar9;
        pbVar9 = pbVar8;
      } while (uVar10 == 0x30);
      if (((byte)(&UNK_10dfa0749)[uVar10] >> 3 & 1) == 0) {
        uVar6 = 0;
        bVar4 = true;
      }
      else {
        uVar12 = 0;
        uVar6 = 0;
        do {
          uVar6 = ((uint)(int)(char)((int)uVar10 << 1) >> 7 & 0xfffffff9) + (int)uVar10 & 0xf |
                  uVar6 << 4;
          uVar10 = (ulong)pbVar8[uVar12];
          if (((byte)(&UNK_10dfa0749)[uVar10] >> 3 & 1) == 0) break;
          bVar4 = uVar12 < 7;
          uVar12 = uVar12 + 1;
        } while (bVar4);
        bVar4 = ((&UNK_10dfa0749)[uVar10] & 8) == 0;
      }
      if ((int)uVar6 < 0) {
        return 0;
      }
      if (bVar4) {
        *param_2 = uVar6;
        return 1;
      }
      return 0;
    }
    lVar7 = 0;
  }
  else {
    if (cVar2 == '+') {
      param_1 = param_1 + 1;
    }
    lVar7 = 0;
  }
  do {
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 == '0');
  uVar10 = 0;
  lVar11 = -1;
  while (bVar3 = pcVar5[lVar11], bVar3 - 0x30 < 10) {
    uVar10 = ((ulong)bVar3 & 0xf) + uVar10 * 10;
    lVar11 = lVar11 + 1;
    if (lVar11 == 10) {
      return 0;
    }
  }
  if ((long)(uVar10 + lVar7) < 0x80000000) {
    uVar12 = (ulong)(uint)-(int)uVar10;
    if (cVar2 != '-') {
      uVar12 = uVar10;
    }
    *param_2 = (uint)uVar12;
    return 1;
  }
  return 0;
}



/* Entry: 108d9360c; end: 108d938bf;  */

undefined8 FUN_108d9360c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_108d7169c(param_1,&UNK_10f51835a,&stack0x00000000);
  func_0x000108d60660(param_1,param_2);
  return uVar1;
}



/* Entry: 108d938c0; end: 108d93a53;  */

void FUN_108d938c0(byte *param_1,ulong param_2,long param_3,long param_4)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  undefined4 uStack_54;
  
  bVar6 = *param_1;
  if (bVar6 != 0) {
    uVar5 = 0;
    do {
      if (bVar6 - 0x30 < 10) {
        sVar1 = 0;
        do {
          sVar1 = (ushort)bVar6 + sVar1 * 10 + -0x30;
          param_1 = param_1 + 1;
          bVar6 = *param_1;
        } while (bVar6 - 0x30 < 10);
      }
      else {
        sVar1 = 0;
      }
      FUN_108d93a54();
      *(short *)(param_3 + uVar5 * 2) = sVar1;
      if (*param_1 == 0x20) {
        param_1 = param_1 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar6 = *param_1;
    } while (bVar6 != 0 && uVar5 < (param_2 & 0xffffffff));
  }
  bVar6 = *(byte *)(param_4 + 0x5b) & 0xbb;
  *(byte *)(param_4 + 0x5b) = bVar6;
  if (*param_1 != 0) {
    do {
      iVar3 = 0xf518398;
      FUN_108d6b684(&UNK_10f518398,param_1,&DAT_10dfa0745,0);
      if (iVar3 == 0) {
        iVar3 = 0xf5183a3;
        FUN_108d6b684(&UNK_10f5183a3,param_1,&DAT_10dfa0745,0);
        if (iVar3 == 0) {
          iVar3 = 0xf5183ad;
          FUN_108d6b684(&UNK_10f5183ad,param_1,&DAT_10dfa0745,0);
          if (iVar3 != 0) {
            bVar6 = bVar6 | 0x40;
            goto LAB_108d939ac;
          }
        }
        else {
          uStack_54 = 0;
          FUN_108d934c8(param_1 + 3,&uStack_54);
          uVar2 = (undefined2)uStack_54;
          FUN_108d93a54();
          *(undefined2 *)(param_4 + 0x54) = uVar2;
        }
      }
      else {
        bVar6 = bVar6 | 4;
LAB_108d939ac:
        *(byte *)(param_4 + 0x5b) = bVar6;
      }
      pbVar4 = param_1 + -1;
      while ((*param_1 & 0xdf) != 0) {
        pbVar4 = pbVar4 + 1;
        param_1 = param_1 + 1;
      }
      do {
        pbVar4 = pbVar4 + 1;
      } while (*pbVar4 == 0x20);
      param_1 = pbVar4;
    } while (*pbVar4 != 0);
  }
  return;
}



/* Entry: 108d93a54; end: 108d93aef;  */

int FUN_108d93a54(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  short sVar3;
  
  if (param_1 < 8) {
    if (param_1 < 2) {
      sVar3 = 0;
      goto LAB_108d93ae8;
    }
    sVar3 = 0x28;
    uVar2 = param_1;
    do {
      sVar3 = sVar3 + -10;
      param_1 = uVar2 << 1;
      bVar1 = uVar2 < 4;
      uVar2 = param_1;
    } while (bVar1);
  }
  else {
    sVar3 = 0x28;
    uVar2 = param_1;
    if (0xff < param_1) {
      do {
        sVar3 = sVar3 + 0x28;
        param_1 = uVar2 >> 4;
        bVar1 = 0xfff < uVar2;
        uVar2 = param_1;
      } while (bVar1);
    }
    uVar2 = param_1;
    if (0xf < param_1) {
      do {
        sVar3 = sVar3 + 10;
        param_1 = uVar2 >> 1;
        bVar1 = 0x1f < uVar2;
        uVar2 = param_1;
      } while (bVar1);
    }
  }
  sVar3 = sVar3 + *(short *)(&UNK_10dfa0a7a + (param_1 & 7) * 2) + -10;
LAB_108d93ae8:
  return (int)sVar3;
}



/* Entry: 108d93af0; end: 108d93d37;  */

long FUN_108d93af0(uint *param_1,byte *param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  uint uStack_54;
  
  puVar6 = param_1;
  func_0x000108d93668(param_1,param_2,&uStack_54);
  if (puVar6 == (uint *)0x0) {
    if (param_3 != 0) {
      lVar12 = 0x20;
      FUN_108d60848();
      if (lVar12 == 0) {
        return param_3;
      }
      *(long *)(lVar12 + 0x10) = param_3;
      *(byte **)(lVar12 + 0x18) = param_2;
      uVar3 = param_1[1] + 1;
      param_1[1] = uVar3;
      if ((9 < uVar3) && (*param_1 * 2 < uVar3)) {
        uVar3 = uVar3 * 2;
        if (0x3f < uVar3) {
          uVar3 = 0x40;
        }
        if (uVar3 != *param_1) {
          if (pcRam000000011372e6f8 != (code *)0x0) {
            (*pcRam000000011372e6f8)();
          }
          uVar7 = (ulong)(uVar3 << 4);
          FUN_108d60848();
          if (pcRam000000011372e700 != (code *)0x0) {
            (*pcRam000000011372e700)();
          }
          if (uVar7 != 0) {
            func_0x000108d5e198(*(undefined8 *)(param_1 + 4));
            *(ulong *)(param_1 + 4) = uVar7;
            uVar8 = uVar7;
            (*pcRam0000000113297950)();
            uVar3 = (int)uVar8 >> 4;
            *param_1 = uVar3;
            _bzero(uVar7,(ulong)uVar3 << 4);
            plVar9 = *(long **)(param_1 + 2);
            param_1[2] = 0;
            param_1[3] = 0;
            while (plVar9 != (long *)0x0) {
              pbVar11 = (byte *)plVar9[3];
              bVar4 = *pbVar11;
              if (bVar4 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = 0;
                do {
                  pbVar11 = pbVar11 + 1;
                  uVar10 = (uint)(byte)(&UNK_10dfa05fd)[bVar4] ^ uVar10 << 3 ^ uVar10;
                  bVar4 = *pbVar11;
                } while (bVar4 != 0);
              }
              uVar5 = 0;
              if (uVar3 != 0) {
                uVar5 = uVar10 / uVar3;
              }
              plVar9 = (long *)*plVar9;
              FUN_108d93d38(param_1,uVar7 + (ulong)(uVar10 - uVar5 * uVar3) * 0x10);
            }
            bVar4 = *param_2;
            if (bVar4 == 0) {
              uStack_54 = 0;
            }
            else {
              uStack_54 = 0;
              do {
                param_2 = param_2 + 1;
                uStack_54 = (uint)(byte)(&UNK_10dfa05fd)[bVar4] ^ uStack_54 << 3 ^ uStack_54;
                bVar4 = *param_2;
              } while (bVar4 != 0);
            }
            uVar3 = *param_1;
            uVar10 = 0;
            if (uVar3 != 0) {
              uVar10 = uStack_54 / uVar3;
            }
            uStack_54 = uStack_54 - uVar10 * uVar3;
          }
        }
      }
      lVar2 = 0;
      if (*(long *)(param_1 + 4) != 0) {
        lVar2 = *(long *)(param_1 + 4) + (ulong)uStack_54 * 0x10;
      }
      FUN_108d93d38(param_1,lVar2,lVar12);
    }
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(puVar6 + 4);
    if (param_3 == 0) {
      lVar2 = *(long *)puVar6;
      plVar9 = *(long **)(puVar6 + 2);
      if (plVar9 == (long *)0x0) {
        *(long *)(param_1 + 2) = lVar2;
      }
      else {
        *plVar9 = lVar2;
      }
      if (lVar2 != 0) {
        *(long **)(lVar2 + 8) = plVar9;
      }
      if (*(long *)(param_1 + 4) != 0) {
        piVar1 = (int *)(*(long *)(param_1 + 4) + (ulong)uStack_54 * 0x10);
        if (*(uint **)(piVar1 + 2) == puVar6) {
          *(long *)(piVar1 + 2) = lVar2;
        }
        *piVar1 = *piVar1 + -1;
      }
      func_0x000108d5e198();
      uVar3 = param_1[1];
      param_1[1] = uVar3 - 1;
      if (uVar3 - 1 == 0) {
        FUN_108d8e3c8(param_1);
      }
    }
    else {
      *(long *)(puVar6 + 4) = param_3;
      *(byte **)(puVar6 + 6) = param_2;
    }
  }
  return lVar12;
}



/* Entry: 108d93d38; end: 108d93d9f;  */

void FUN_108d93d38(long param_1,int *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0) {
      *param_2 = 1;
      *(long **)(param_2 + 2) = param_3;
    }
    else {
      lVar1 = *(long *)(param_2 + 2);
      *param_2 = *param_2 + 1;
      *(long **)(param_2 + 2) = param_3;
      if (lVar1 != 0) {
        plVar2 = *(long **)(lVar1 + 8);
        *param_3 = lVar1;
        param_3[1] = (long)plVar2;
        if (plVar2 == (long *)0x0) {
          *(long **)(param_1 + 8) = param_3;
        }
        else {
          *plVar2 = (long)param_3;
        }
        *(long **)(lVar1 + 8) = param_3;
        return;
      }
    }
  }
  lVar1 = *(long *)(param_1 + 8);
  *param_3 = lVar1;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 8) = param_3;
  }
  param_3[1] = 0;
  *(long **)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108d93da0; end: 108d93e83;  */

/* WARNING: Possible PIC construction at 0x000108d93dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d93dc8) */
/* WARNING: Removing unreachable block (ram,0x000108d93dd0) */
/* WARNING: Removing unreachable block (ram,0x000108d93ddc) */

void FUN_108d93da0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  
  func_0x000108d93df0(param_1,*(undefined8 *)(param_2 + 0x48));
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x328) != 0) {
      if ((puVar3 < *(undefined8 **)(param_1 + 0x170)) ||
         (*(undefined8 **)(param_1 + 0x178) <= puVar3)) {
        (*pcRam0000000113297950)();
        uVar1 = (uint)puVar3;
      }
      else {
        uVar1 = (uint)*(ushort *)(param_1 + 0x150);
      }
      **(int **)(param_1 + 0x328) = **(int **)(param_1 + 0x328) + uVar1;
      return;
    }
    if ((*(undefined8 **)(param_1 + 0x170) <= puVar3) &&
       (puVar3 < *(undefined8 **)(param_1 + 0x178))) {
      *puVar3 = *(undefined8 *)(param_1 + 0x168);
      *(undefined8 **)(param_1 + 0x168) = puVar3;
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
      return;
    }
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar2 = puVar3;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar2;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar3);
    puVar3 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3);
  return;
}



/* Entry: 108d93e84; end: 108d9419f;  */

/* WARNING: Possible PIC construction at 0x000108d93ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d93ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d93ecc) */
/* WARNING: Removing unreachable block (ram,0x000108d93eec) */
/* WARNING: Removing unreachable block (ram,0x000108d93efc) */

void FUN_108d93e84(long param_1,int *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  puVar3 = *(undefined8 **)(param_2 + 2);
  if (0 < *param_2) {
    func_0x000108d93df0(param_1,*puVar3);
    puVar3 = (undefined8 *)puVar3[1];
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x328) != 0) {
      if ((puVar3 < *(undefined8 **)(param_1 + 0x170)) ||
         (*(undefined8 **)(param_1 + 0x178) <= puVar3)) {
        (*pcRam0000000113297950)();
        uVar1 = (uint)puVar3;
      }
      else {
        uVar1 = (uint)*(ushort *)(param_1 + 0x150);
      }
      **(int **)(param_1 + 0x328) = **(int **)(param_1 + 0x328) + uVar1;
      return;
    }
    if ((*(undefined8 **)(param_1 + 0x170) <= puVar3) &&
       (puVar3 < *(undefined8 **)(param_1 + 0x178))) {
      *puVar3 = *(undefined8 *)(param_1 + 0x168);
      *(undefined8 **)(param_1 + 0x168) = puVar3;
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
      return;
    }
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (puRam0000000113829af0 != (undefined8 *)0x0) {
      (*pcRam0000000113297998)();
    }
    puVar2 = puVar3;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar2;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar3);
    puVar3 = puRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (puRam0000000113829af0 == (undefined8 *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3);
  return;
}



/* Entry: 108d941a0; end: 108d943af;  */

void FUN_108d941a0(long *param_1,int param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  uint *puVar14;
  long lStack_68;
  
  while( true ) {
    if (param_4 < 1) {
      return;
    }
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      return;
    }
    if ((int)param_3 < 1) break;
    plVar10 = param_1;
    FUN_108d94c30(param_1,param_3);
    if ((int)plVar10 != 0) {
      return;
    }
    lVar11 = param_1[1];
    FUN_108d5fcfc(lVar11,param_3,&lStack_68,0);
    lVar9 = lStack_68;
    if ((int)lVar11 != 0) {
      puVar12 = &UNK_10f51848e;
      goto LAB_108d94388;
    }
    iVar7 = param_4 + -1;
    puVar14 = *(uint **)(lStack_68 + 8);
    if (param_2 == 0) {
      if ((param_4 != 1) && (*(char *)(*param_1 + 0x21) != '\0')) {
        uVar8 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
        FUN_108d943b0(param_1,uVar8 >> 0x10 | uVar8 << 0x10,4,param_3);
      }
    }
    else {
      uVar8 = puVar14[1];
      bVar3 = *(byte *)((long)puVar14 + 5);
      bVar4 = *(byte *)((long)puVar14 + 6);
      bVar5 = *(byte *)((long)puVar14 + 7);
      lVar11 = *param_1;
      if (*(char *)(lVar11 + 0x21) != '\0') {
        FUN_108d943b0(param_1,param_3,2,0);
        lVar11 = *param_1;
      }
      uVar8 = (uint)(byte)uVar8 * 0x1000000;
      uVar6 = uVar8 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5;
      iVar2 = *(int *)(lVar11 + 0x38);
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      if ((iVar1 >> 2) + -2 < (int)uVar6) {
        FUN_108d94b14(param_1,&UNK_10f5184a4);
        iVar7 = param_4 + -2;
      }
      else {
        if (0 < (int)uVar6) {
          uVar13 = (ulong)(uVar8 + (uint)bVar3 * 0x10000 + (uint)bVar4 * 0x100 + (uint)bVar5);
          lVar11 = (long)puVar14 + 0xb;
          do {
            uVar8 = (*(uint *)(lVar11 + -3) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar11 + -3) & 0xff00ff) << 8;
            uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
            if (*(char *)(*param_1 + 0x21) != '\0') {
              FUN_108d943b0(param_1,uVar8,2,0);
            }
            lVar11 = lVar11 + 4;
            FUN_108d94c30(param_1,uVar8);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        iVar7 = iVar7 - uVar6;
      }
    }
    uVar8 = *puVar14;
    if (lVar9 != 0) {
      func_0x000108d787d8(lVar9);
    }
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    param_3 = (ulong)(uVar8 >> 0x10 | uVar8 << 0x10);
    param_4 = iVar7;
  }
  puVar12 = &UNK_10f518455;
LAB_108d94388:
  FUN_108d94b14(param_1,puVar12);
  return;
}



/* Entry: 108d943b0; end: 108d9444f;  */

void FUN_108d943b0(undefined8 *param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iStack_38;
  byte bStack_31;
  
  uVar2 = *param_1;
  func_0x000108d7d730(uVar2,param_2,&bStack_31,&iStack_38);
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    if (bStack_31 == param_3 && iStack_38 == param_4) {
      return;
    }
    puVar3 = &UNK_10f518518;
  }
  else {
    if (iVar1 == 0xc0a || iVar1 == 7) {
      *(undefined4 *)((long)param_1 + 0x24) = 1;
    }
    puVar3 = &UNK_10f5184fb;
  }
  FUN_108d94b14(param_1,puVar3);
  return;
}



/* Entry: 108d94450; end: 108d94b13;  */

int FUN_108d94450(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined1 *puVar14;
  long *plVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  undefined *puVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  uint uStack_b8;
  undefined4 uStack_b4;
  uint uStack_a8;
  ushort uStack_a4;
  ushort uStack_a2;
  long lStack_98;
  long lStack_90;
  uint uStack_84;
  undefined1 *apuStack_80 [2];
  
  uStack_84 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  iVar18 = (int)param_2;
  if (iVar18 == 0) {
    return 0;
  }
  lVar29 = param_1[5];
  lVar31 = param_1[6];
  lVar25 = *param_1;
  iVar2 = *(int *)(lVar25 + 0x38);
  plVar13 = param_1;
  FUN_108d94c30();
  if ((int)plVar13 != 0) {
    return 0;
  }
  param_1[5] = (long)&UNK_10f51854e;
  *(int *)(param_1 + 6) = iVar18;
  lVar28 = lVar25;
  func_0x000108d7be68(lVar25,param_2,apuStack_80,0);
  if ((int)lVar28 == 0) {
    *apuStack_80[0] = 0;
    puVar14 = apuStack_80[0];
    FUN_108d7f368();
    if ((int)puVar14 == 0) {
      uVar21 = (ulong)*(ushort *)(apuStack_80[0] + 0x12);
      if ((*(ushort *)(apuStack_80[0] + 0x12) == 0) || (*(int *)((long)param_1 + 0x1c) == 0)) {
        lVar28 = 0;
        iVar23 = 1;
      }
      else {
        lVar24 = 0;
        iVar23 = 0;
        uVar27 = 0;
        lVar30 = 0;
        do {
          param_1[5] = (long)&UNK_10f5185a4;
          *(int *)(param_1 + 6) = iVar18;
          *(int *)((long)param_1 + 0x34) = (int)uVar27;
          puVar16 = (uint *)(*(long *)(apuStack_80[0] + 0x50) +
                            (ulong)(CONCAT11(*(undefined1 *)
                                              (*(long *)(apuStack_80[0] + 0x60) + lVar24),
                                             ((undefined1 *)
                                             (*(long *)(apuStack_80[0] + 0x60) + lVar24))[1]) &
                                   *(ushort *)(apuStack_80[0] + 0x14)));
          FUN_108d7cec4(apuStack_80[0],puVar16,&uStack_b8);
          uVar26 = uStack_a8;
          lVar28 = lVar30;
          lVar10 = lStack_98;
          lVar11 = lStack_90;
          if (((apuStack_80[0][2] != '\0') &&
              (lVar28 = CONCAT44(uStack_b4,uStack_b8), lVar10 = lVar28, lVar11 = lVar28, lVar24 != 0
              )) && (lVar11 = lStack_90, lVar28 <= lVar30)) {
            FUN_108d94b14(param_1,&UNK_10f5185be);
            lVar11 = lStack_90;
          }
          lStack_90 = lVar11;
          lStack_98 = lVar10;
          uVar8 = uStack_a4;
          if ((uStack_a4 < uVar26) &&
             ((uint *)((long)puVar16 + (ulong)uStack_a2) <=
              (uint *)(*(long *)(apuStack_80[0] + 0x50) + (ulong)*(uint *)(lVar25 + 0x38)))) {
            uVar22 = *(uint *)((long)puVar16 + (ulong)uStack_a2);
            uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
            uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
            if (*(char *)(lVar25 + 0x21) != '\0') {
              FUN_108d943b0(param_1,uVar22,3,param_2);
            }
            uVar20 = 0;
            if (iVar2 - 4U != 0) {
              uVar20 = ((iVar2 + -5 + uVar26) - (uint)uVar8) / (iVar2 - 4U);
            }
            FUN_108d941a0(param_1,0,uVar22,uVar20);
          }
          iVar12 = iVar23;
          if (apuStack_80[0][5] == '\0') {
            uVar26 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
            uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
            if (*(char *)(lVar25 + 0x21) != '\0') {
              FUN_108d943b0(param_1,uVar26,5,param_2);
            }
            plVar13 = (long *)0x0;
            if (lVar24 != 0) {
              plVar13 = &lStack_98;
            }
            plVar15 = param_1;
            FUN_108d94450(param_1,uVar26,&lStack_90,plVar13);
            iVar12 = (int)plVar15;
            if ((lVar24 != 0) && (iVar12 != iVar23)) {
              FUN_108d94b14(param_1,&UNK_10f5185ea);
            }
          }
          iVar23 = iVar12;
          uVar27 = uVar27 + 1;
          uVar21 = (ulong)*(ushort *)(apuStack_80[0] + 0x12);
        } while ((uVar27 < uVar21) &&
                (lVar24 = lVar24 + 2, lVar30 = lVar28, *(int *)((long)param_1 + 0x1c) != 0));
        iVar23 = iVar23 + 1;
      }
      uVar26 = (uint)uVar21;
      if (apuStack_80[0][5] == '\0') {
        uVar22 = *(uint *)(*(long *)(apuStack_80[0] + 0x50) + (ulong)(byte)apuStack_80[0][6] + 8);
        uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
        uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
        param_1[5] = (long)&UNK_10f518603;
        *(int *)(param_1 + 6) = iVar18;
        if (*(char *)(lVar25 + 0x21) != '\0') {
          FUN_108d943b0(param_1,uVar22,5,param_2);
          uVar26 = (uint)*(ushort *)(apuStack_80[0] + 0x12);
        }
        plVar13 = (long *)0x0;
        if (uVar26 != 0) {
          plVar13 = &lStack_98;
        }
        FUN_108d94450(param_1,uVar22,0,plVar13);
        cVar3 = apuStack_80[0][5];
        param_1[5] = (long)&UNK_10f51854e;
        *(int *)(param_1 + 6) = iVar18;
        if (cVar3 != '\0') goto LAB_108d94800;
      }
      else {
        param_1[5] = (long)&UNK_10f51854e;
        *(int *)(param_1 + 6) = iVar18;
LAB_108d94800:
        if (apuStack_80[0][2] != '\0') {
          if (param_3 == (long *)0x0) {
            if ((param_4 != (long *)0x0) && (lStack_90 <= *param_4)) {
              puVar19 = &UNK_10f5186d4;
LAB_108d948a8:
              FUN_108d94b14(param_1,puVar19);
            }
          }
          else if (param_4 == (long *)0x0) {
            if (*param_3 < lVar28) {
              puVar19 = &UNK_10f51861f;
              goto LAB_108d948a8;
            }
          }
          else {
            if (lStack_90 <= *param_3) {
              FUN_108d94b14(param_1,&UNK_10f51865c);
            }
            if (*param_4 < lVar28) {
              FUN_108d94b14(param_1,&UNK_10f518697);
            }
            *param_3 = lVar28;
          }
        }
      }
      lVar28 = *(long *)(apuStack_80[0] + 0x50);
      bVar4 = apuStack_80[0][6];
      puVar16 = (uint *)(ulong)*(uint *)(lVar25 + 0x34);
      func_0x000108d78dcc();
      param_1[5] = 0;
      if (puVar16 == (uint *)0x0) {
        *(undefined4 *)((long)param_1 + 0x24) = 1;
      }
      else {
        lVar25 = lVar28 + (ulong)bVar4;
        uVar5 = *(undefined1 *)(lVar25 + 5);
        uVar6 = *(undefined1 *)(lVar25 + 6);
        *puVar16 = 1;
        puVar16[1] = CONCAT11(uVar5,uVar6) - 1 & 0xffff;
        uVar26 = (uint)(*(ushort *)(lVar25 + 3) >> 8) | (*(ushort *)(lVar25 + 3) & 0xff00ff) << 8;
        if (uVar26 != 0) {
          uVar21 = 0;
          bVar7 = apuStack_80[0][5];
          do {
            uVar8 = *(ushort *)((ulong)bVar4 + (ulong)bVar7 * -4 + lVar28 + 0xc + uVar21 * 2);
            uVar22 = (uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8;
            if (iVar2 + -4 < (int)uVar22) {
              iVar18 = 0x10000;
            }
            else {
              puVar14 = apuStack_80[0];
              FUN_108d913f0(apuStack_80[0],lVar28 + (ulong)uVar22);
              iVar18 = (int)puVar14;
            }
            if (iVar2 < (int)(iVar18 + uVar22)) {
              param_1[5] = 0;
              FUN_108d94b14(param_1,&UNK_10f51870f);
            }
            else {
              uVar20 = *puVar16 + 1;
              *puVar16 = uVar20;
              puVar16[uVar20] = (iVar18 + uVar22) - 1 | uVar22 << 0x10;
              if (1 < uVar20) {
                do {
                  uVar9 = uVar20 >> 1;
                  uVar22 = puVar16[uVar9];
                  if (uVar22 <= puVar16[uVar20]) break;
                  puVar16[uVar9] = puVar16[uVar20];
                  puVar16[uVar20] = uVar22;
                  bVar1 = 3 < uVar20;
                  uVar20 = uVar9;
                } while (bVar1);
              }
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar26);
        }
        uVar8 = *(ushort *)(lVar25 + 1);
        while (uVar26 = (uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8, uVar26 != 0) {
          uVar8 = ((ushort *)(lVar28 + (ulong)uVar26))[1];
          uVar22 = *puVar16 + 1;
          *puVar16 = uVar22;
          puVar16[uVar22] =
               (uVar26 + ((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8)) - 1 | uVar26 << 0x10;
          if (1 < uVar22) {
            do {
              uVar9 = uVar22 >> 1;
              uVar20 = puVar16[uVar9];
              if (uVar20 <= puVar16[uVar22]) break;
              puVar16[uVar9] = puVar16[uVar22];
              puVar16[uVar22] = uVar20;
              bVar1 = 3 < uVar22;
              uVar22 = uVar9;
            } while (bVar1);
          }
          uVar8 = *(ushort *)(lVar28 + (ulong)uVar26);
        }
        FUN_108d94cb8(puVar16,&uStack_84);
        uVar26 = uStack_84 & 0xffff;
        puVar17 = puVar16;
        FUN_108d94cb8(puVar16,&uStack_b8);
        iVar18 = 0;
        iVar12 = (int)puVar17;
        uVar22 = uStack_b8;
        while (iVar12 != 0) {
          if (uVar22 >> 0x10 <= (uVar26 & 0xffff)) {
            FUN_108d94b14(param_1,&UNK_10f518739);
            break;
          }
          iVar18 = iVar18 + ~(uVar26 & 0xffff) + (uVar22 >> 0x10);
          puVar17 = puVar16;
          uStack_b8 = uVar22;
          FUN_108d94cb8(puVar16,&uStack_b8);
          uVar26 = uVar22;
          uVar22 = uStack_b8;
          iVar12 = (int)puVar17;
        }
        if ((*puVar16 == 0) && (iVar18 + iVar2 + ~(uVar26 & 0xffff) != (uint)*(byte *)(lVar25 + 7)))
        {
          FUN_108d94b14(param_1,&UNK_10f51875e);
        }
      }
      func_0x000108d78fdc(puVar16);
      func_0x000108d787d8(*(undefined8 *)(apuStack_80[0] + 0x68));
      goto LAB_108d94524;
    }
    FUN_108d94b14(param_1,&UNK_10f51857e);
    func_0x000108d787d8(*(undefined8 *)(apuStack_80[0] + 0x68));
  }
  else {
    FUN_108d94b14(param_1,&UNK_10f518558);
  }
  iVar23 = 0;
LAB_108d94524:
  param_1[5] = lVar29;
  param_1[6] = lVar31;
  return iVar23;
}



/* Entry: 108d94b14; end: 108d94c2f;  */

long FUN_108d94b14(long param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auStack_100 [200];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1;
  uVar6 = param_2;
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 != 0) {
      if (iVar2 + 1 < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x50) = iVar2 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x48) + (long)iVar2) = 10;
      }
      else {
        FUN_108d71a6c(param_1 + 0x38,&DAT_10f68f57e,1);
      }
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x000108d64bd8(200,auStack_100);
      puVar3 = auStack_100;
      _strlen(puVar3);
      FUN_108d71998(param_1 + 0x38,auStack_100,(uint)puVar3 & 0x3fffffff);
    }
    lVar4 = param_1 + 0x38;
    uVar6 = 1;
    FUN_108d63850(lVar4,1,param_2,&stack0x00000000);
    if (*(char *)(param_1 + 0x5c) == '\x01') {
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uVar5 = (uint)uVar6;
    if (uVar5 == 0) {
      return 1;
    }
    if (uVar5 <= *(uint *)(lVar4 + 0x18)) {
      uVar6 = (uVar6 & 0xffffffff) >> 3;
      bVar1 = *(byte *)(*(long *)(lVar4 + 0x10) + uVar6);
      uVar5 = 1 << (ulong)(uVar5 & 7);
      if ((uVar5 & bVar1) == 0) {
        *(byte *)(*(long *)(lVar4 + 0x10) + uVar6) = bVar1 | (byte)uVar5;
        return 0;
      }
    }
    FUN_108d94b14();
    return 1;
  }
  return lVar4;
}



/* Entry: 108d94c30; end: 108d94cb7;  */

undefined8 FUN_108d94c30(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  if (*(uint *)(param_1 + 0x18) < param_2) {
    puVar3 = &UNK_10f5184cb;
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 >> 3));
    uVar2 = 1 << (ulong)(param_2 & 7);
    if ((uVar2 & bVar1) == 0) {
      *(byte *)(*(long *)(param_1 + 0x10) + (ulong)(param_2 >> 3)) = bVar1 | (byte)uVar2;
      return 0;
    }
    puVar3 = &UNK_10f5184e2;
  }
  FUN_108d94b14(param_1,puVar3);
  return 1;
}



/* Entry: 108d94cb8; end: 108d94d3f;  */

undefined8 FUN_108d94cb8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return 0;
  }
  *param_2 = param_1[1];
  uVar2 = param_1[uVar1];
  uVar4 = *param_1;
  *param_1 = uVar4 - 1;
  param_1[1] = uVar2;
  param_1[uVar1] = 0xffffffff;
  if (1 < uVar4 - 1) {
    uVar1 = param_1[1];
    uVar5 = 2;
    uVar3 = 1;
    do {
      uVar4 = (uint)uVar5;
      if (param_1[uVar4 | 1] < param_1[uVar5]) {
        uVar4 = uVar4 + 1;
      }
      uVar6 = (ulong)uVar4;
      if (uVar1 < param_1[uVar6]) {
        return 1;
      }
      param_1[uVar3] = param_1[uVar6];
      param_1[uVar6] = uVar1;
      uVar5 = (ulong)(uVar4 << 1);
      uVar3 = uVar6;
    } while (uVar4 << 1 <= *param_1);
  }
  return 1;
}



/* Entry: 108d94d40; end: 108d94d9f;  */

void FUN_108d94d40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  short sVar3;
  
  if ((short)param_1[6] == 0) {
    plVar2 = (long *)param_1[1];
    FUN_108d6a6fc(plVar2,0x3f8);
    if (plVar2 == (long *)0x0) {
      return;
    }
    plVar1 = plVar2 + 1;
    *plVar2 = *param_1;
    *param_1 = (long)plVar2;
    sVar3 = 0x29;
  }
  else {
    plVar1 = (long *)param_1[4];
    sVar3 = (short)param_1[6] + -1;
  }
  *(short *)(param_1 + 6) = sVar3;
  param_1[4] = (long)(plVar1 + 3);
  return;
}



/* Entry: 108d94da0; end: 108d94e9b;  */

long * FUN_108d94da0(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lStack_1a8;
  long *plStack_1a0;
  long alStack_190 [41];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_190[0x25] = 0;
  alStack_190[0x24] = 0;
  alStack_190[0x27] = 0;
  alStack_190[0x26] = 0;
  alStack_190[0x21] = 0;
  alStack_190[0x20] = 0;
  alStack_190[0x23] = 0;
  alStack_190[0x22] = 0;
  alStack_190[0x1d] = 0;
  alStack_190[0x1c] = 0;
  alStack_190[0x1f] = 0;
  alStack_190[0x1e] = 0;
  alStack_190[0x19] = 0;
  alStack_190[0x18] = 0;
  alStack_190[0x1b] = 0;
  alStack_190[0x1a] = 0;
  alStack_190[0x15] = 0;
  alStack_190[0x14] = 0;
  alStack_190[0x17] = 0;
  alStack_190[0x16] = 0;
  alStack_190[0x11] = 0;
  alStack_190[0x10] = 0;
  alStack_190[0x13] = 0;
  alStack_190[0x12] = 0;
  alStack_190[0xd] = 0;
  alStack_190[0xc] = 0;
  alStack_190[0xf] = 0;
  alStack_190[0xe] = 0;
  alStack_190[9] = 0;
  alStack_190[8] = 0;
  alStack_190[0xb] = 0;
  alStack_190[10] = 0;
  alStack_190[5] = 0;
  alStack_190[4] = 0;
  alStack_190[7] = 0;
  alStack_190[6] = 0;
  alStack_190[1] = 0;
  alStack_190[0] = 0;
  alStack_190[3] = 0;
  alStack_190[2] = 0;
  while (param_1 != 0) {
    lVar8 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    plVar3 = alStack_190;
    if (alStack_190[0] != 0) {
      uVar9 = 1;
      lVar1 = alStack_190[0];
      plVar3 = alStack_190;
      do {
        param_1 = lVar1;
        FUN_108d94e9c();
        *plVar3 = 0;
        plVar3 = alStack_190 + uVar9;
        uVar9 = (ulong)((int)uVar9 + 1);
        lVar1 = *plVar3;
      } while (*plVar3 != 0);
    }
    *plVar3 = param_1;
    param_1 = lVar8;
  }
  lVar8 = 0;
  plVar3 = (long *)0x0;
  do {
    plVar5 = *(long **)((long)alStack_190 + lVar8);
    FUN_108d94e9c();
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x140);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    bVar2 = plVar3 != (long *)0x0;
    plVar7 = &lStack_1a8;
    if ((plVar3 != (long *)0x0) && (plVar4 = plVar3, plVar6 = plVar5, plVar5 != (long *)0x0)) {
      do {
        plVar5 = plVar6;
        if (*plVar4 < *plVar6) {
          plVar7[1] = (long)plVar4;
          plVar3 = (long *)plVar4[1];
          plVar7 = plVar4;
        }
        else if (*plVar6 < *plVar4) {
          plVar7[1] = (long)plVar6;
          plVar3 = plVar4;
          plVar5 = (long *)plVar6[1];
          plVar7 = plVar6;
        }
        else {
          plVar3 = (long *)plVar4[1];
        }
        bVar2 = plVar3 != (long *)0x0;
        plVar4 = plVar3;
        plVar6 = plVar5;
      } while (bVar2 && plVar5 != (long *)0x0);
    }
    if (!bVar2) {
      plVar3 = plVar5;
    }
    plVar7[1] = (long)plVar3;
    return plStack_1a0;
  }
  return plVar3;
}



/* Entry: 108d94e9c; end: 108d94f2b;  */

undefined8 FUN_108d94e9c(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lStack_18;
  undefined8 uStack_10;
  
  bVar1 = param_1 != (long *)0x0;
  plVar4 = &lStack_18;
  if ((param_1 != (long *)0x0) && (plVar2 = param_1, plVar3 = param_2, param_2 != (long *)0x0)) {
    do {
      param_2 = plVar3;
      if (*plVar2 < *plVar3) {
        plVar4[1] = (long)plVar2;
        param_1 = (long *)plVar2[1];
        plVar4 = plVar2;
      }
      else if (*plVar3 < *plVar2) {
        plVar4[1] = (long)plVar3;
        param_1 = plVar2;
        param_2 = (long *)plVar3[1];
        plVar4 = plVar3;
      }
      else {
        param_1 = (long *)plVar2[1];
      }
      bVar1 = param_1 != (long *)0x0;
      plVar2 = param_1;
      plVar3 = param_2;
    } while (bVar1 && param_2 != (long *)0x0);
  }
  if (!bVar1) {
    param_1 = param_2;
  }
  plVar4[1] = (long)param_1;
  return uStack_10;
}



/* Entry: 108d94f2c; end: 108d94fef;  */

long FUN_108d94f2c(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lStack_28 != 0) {
    iVar3 = 1;
    lVar1 = param_1;
    do {
      param_1 = lStack_28;
      lStack_28 = *(long *)(param_1 + 8);
      *(long *)(param_1 + 0x10) = lVar1;
      plVar2 = &lStack_28;
      FUN_108d94ff0(plVar2,iVar3);
      *(long **)(param_1 + 8) = plVar2;
      iVar3 = iVar3 + 1;
      lVar1 = param_1;
    } while (lStack_28 != 0);
  }
  return param_1;
}



/* Entry: 108d94ff0; end: 108d9511b;  */

void FUN_108d94ff0(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      *param_1 = *(long *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else {
      plVar2 = param_1;
      FUN_108d94ff0(param_1,param_2);
      lVar1 = *param_1;
      if (lVar1 != 0) {
        *(long **)(lVar1 + 0x10) = plVar2;
        *param_1 = *(long *)(lVar1 + 8);
        FUN_108d94ff0(param_1,param_2);
        *(long **)(lVar1 + 8) = param_1;
      }
    }
  }
  return;
}



/* Entry: 108d9511c; end: 108d951a3;  */

undefined4 FUN_108d9511c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (*(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1, *(char *)(param_1 + 0x12) == '\0')) {
    FUN_108d7f528(param_1);
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0x21) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (*(char *)(*(long *)(param_1 + 8) + 0x22) != '\0') {
      uVar2 = 2;
    }
  }
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_108d7f5fc(param_1);
  }
  return uVar2;
}



/* Entry: 108d951a4; end: 108d952b7;  */

/* WARNING: Possible PIC construction at 0x000108d95228: Changing call to branch */

undefined8 FUN_108d951a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar2 = param_1;
  FUN_108d6c278(param_1,param_3,0xffffffff,0,0,&uStack_38,0);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  do {
    uVar2 = uStack_38;
    FUN_108d681c0();
    if ((int)uVar2 != 100) goto SUB_108d95264;
    uVar2 = uStack_38;
    func_0x000108d692a8(uStack_38,0);
    uVar3 = param_1;
    func_0x000108d95068(param_1,param_2,uVar2);
  } while ((int)uVar3 == 0);
  unaff_x30 = 0x108d9522c;
  register0x00000008 = (BADSPACEBASE *)auStack_40;
  unaff_x19 = param_2;
  unaff_x20 = param_1;
  unaff_x21 = uStack_38;
  unaff_x22 = uVar3;
  unaff_x29 = puVar1;
SUB_108d95264:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000108d674fc();
  if ((int)uStack_38 != 0) {
    uVar2 = param_1;
    FUN_108d6ba4c(param_1);
    func_0x000108d7163c(param_2,param_1,uVar2);
  }
  return uStack_38;
}



/* Entry: 108d952b8; end: 108d95343;  */

undefined8 FUN_108d952b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (0x33333332 < *(int *)(param_1 + 0x1a4) * -0x33333333 + 0x19999999U) {
    return 0;
  }
  lVar2 = param_1;
  func_0x000108d711ec(param_1,*(undefined8 *)(param_1 + 0x1c8),
                      (long)(*(int *)(param_1 + 0x1a4) * 8 + 0x28));
  if (lVar2 == 0) {
    uVar3 = 7;
  }
  else {
    uVar3 = 0;
    puVar1 = (undefined8 *)(lVar2 + (long)*(int *)(param_1 + 0x1a4) * 8);
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(long *)(param_1 + 0x1c8) = lVar2;
  }
  return uVar3;
}



/* Entry: 108d95344; end: 108d9575f;  */

undefined8 *
FUN_108d95344(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,code *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  short sVar20;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  int iStack_68;
  
  uVar19 = param_2[10];
  uVar1 = *(undefined4 *)((long)param_2 + 0x4c);
  lStack_88 = 0;
  for (lVar6 = param_1[0x38]; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
    if (*(undefined8 **)(lVar6 + 8) == param_2) {
      FUN_108d6a8e0(param_1,&UNK_10f518c58);
      *param_5 = param_1;
      return (undefined8 *)0x6;
    }
  }
  uVar7 = *param_2;
  puVar3 = param_1;
  FUN_108d6a8e0(param_1,&UNK_10f517517);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x7;
  }
  puVar4 = param_1;
  FUN_108d6a6fc(param_1,0x30);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x000108d60660(param_1,puVar3);
    return (undefined8 *)0x7;
  }
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  *puVar4 = param_1;
  puVar4[1] = param_3;
  if (param_2[0xd] == 0) {
    uVar17 = 0xfff0bdc0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 5);
    if ((int)uVar2 < 1) {
      uVar17 = 0;
    }
    else {
      uVar12 = 0;
      plVar14 = (long *)(param_1[4] + 0x18);
      do {
        uVar17 = uVar12;
        if (*plVar14 == param_2[0xd]) break;
        uVar12 = uVar12 + 1;
        uVar17 = (ulong)uVar2;
        plVar14 = plVar14 + 4;
      } while (uVar2 != uVar12);
    }
  }
  *(undefined8 *)(param_2[10] + 8) =
       *(undefined8 *)
        (param_1[4] + (-(uVar17 >> 0x1f & 1) & 0xffffffe000000000 | (uVar17 & 0xffffffff) << 5));
  uStack_70 = param_1[0x38];
  iStack_68 = 0;
  param_1[0x38] = &puStack_80;
  puVar8 = param_1;
  puStack_80 = puVar4;
  puStack_78 = param_2;
  (*param_4)(param_1,param_3[2],uVar1,uVar19,puVar4 + 2,&lStack_88,param_7,param_8,uVar7);
  param_1[0x38] = uStack_70;
  if ((int)puVar8 != 0) {
    if ((int)puVar8 == 7) {
      *(undefined1 *)((long)param_1 + 0x51) = 1;
    }
    if (lStack_88 == 0) {
      puVar5 = param_1;
      FUN_108d6a8e0(param_1,&UNK_10f518c82);
      *param_5 = puVar5;
    }
    else {
      puVar5 = param_1;
      FUN_108d6a8e0(param_1,&UNK_10f517517);
      *param_5 = puVar5;
      func_0x000108d5e198(lStack_88);
    }
    func_0x000108d60660(param_1,puVar4);
    goto LAB_108d95730;
  }
  puVar8 = (undefined8 *)puVar4[2];
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *(undefined8 *)puVar4[2] = *param_3;
    *(undefined4 *)(puVar4 + 3) = 1;
    if (iStack_68 == 0) {
      puVar8 = param_1;
      FUN_108d6a8e0(param_1,&UNK_10f518ca0);
      *param_5 = puVar8;
      func_0x000108d80d4c(puVar4);
      puVar8 = (undefined8 *)0x1;
      goto LAB_108d95730;
    }
    puVar4[5] = param_2[0xb];
    param_2[0xb] = puVar4;
    sVar20 = *(short *)((long)param_2 + 0x3e);
    if (0 < sVar20) {
      lVar6 = 0;
      bVar16 = 0;
      lVar18 = param_2[1];
      do {
        uVar17 = *(ulong *)(lVar18 + lVar6 * 0x30 + 0x18);
        if (uVar17 == 0) {
LAB_108d956b4:
          *(byte *)((long)param_2 + 0x46) = *(byte *)((long)param_2 + 0x46) | bVar16;
        }
        else {
          uVar12 = uVar17;
          _strlen();
          lVar10 = 0;
          uVar2 = (uint)uVar12 & 0x3fffffff;
          do {
            if ((&UNK_10dfa05fd)[(byte)(&DAT_10f68f4b2)[lVar10]] !=
                (&UNK_10dfa05fd)[*(byte *)(uVar17 + lVar10)]) goto LAB_108d955c0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 6);
          if ((*(byte *)(uVar17 + 6) & 0xdf) != 0) {
LAB_108d955c0:
            if ((uVar12 & 0x3fffffff) != 0) {
              uVar11 = 0;
              uVar15 = uVar17;
              do {
                lVar10 = 0;
                do {
                  if ((&UNK_10dfa05fd)[(byte)(&UNK_10f518cce)[lVar10]] !=
                      (&UNK_10dfa05fd)[*(byte *)(uVar15 + lVar10)]) goto LAB_108d9560c;
                  lVar10 = lVar10 + 1;
                } while (lVar10 != 7);
                if ((*(byte *)(uVar17 + uVar11 + 7) & 0xdf) == 0) {
                  uVar9 = (int)uVar11 + 1;
                  goto LAB_108d95630;
                }
LAB_108d9560c:
                uVar11 = uVar11 + 1;
                uVar15 = uVar15 + 1;
              } while (uVar11 != (uVar12 & 0x3fffffff));
              goto LAB_108d956b4;
            }
          }
          uVar9 = 0;
LAB_108d95630:
          if ((int)uVar2 <= (int)uVar9) goto LAB_108d956b4;
          uVar13 = 6;
          if (((char *)(uVar17 + (long)(int)uVar9))[6] != '\0') {
            uVar13 = 7;
          }
          if ((int)(uVar13 + uVar9) <= (int)uVar2) {
            lVar18 = (long)(int)uVar9;
            uVar11 = lVar18 + (ulong)uVar13;
            do {
              *(undefined1 *)(uVar17 + lVar18) = *(undefined1 *)(uVar17 + uVar11);
              lVar18 = lVar18 + 1;
              uVar11 = uVar11 + 1;
            } while (uVar11 <= (uVar12 & 0x3fffffff));
          }
          if ((0 < (int)uVar9) && (*(char *)(uVar17 + (long)(int)uVar9) == '\0')) {
            *(undefined1 *)(uVar17 + uVar9 + -1) = 0;
          }
          lVar18 = param_2[1];
          lVar10 = lVar18 + lVar6 * 0x30;
          *(byte *)(lVar10 + 0x2b) = *(byte *)(lVar10 + 0x2b) | 2;
          sVar20 = *(short *)((long)param_2 + 0x3e);
          bVar16 = 0x40;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < sVar20);
      puVar8 = (undefined8 *)0x0;
      goto LAB_108d95730;
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_108d95730:
  func_0x000108d60660(param_1,puVar3);
  return puVar8;
}



/* Entry: 108d95760; end: 108d95787;  */

void FUN_108d95760(void)

{
  FUN_108d63850();
  return;
}



/* Entry: 108d95788; end: 108d95daf;  */

ulong FUN_108d95788(byte *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  undefined4 uVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  
  bVar5 = *param_1;
  uVar2 = (uint)bVar5;
  if (0x77 < bVar5) {
    if (bVar5 == 0x78) goto LAB_108d95a28;
    if (bVar5 == 0x7c) {
      if (param_1[1] == 0x7c) {
        uVar6 = 0x5e;
        goto LAB_108d95d4c;
      }
      uVar6 = 0x56;
      goto LAB_108d95d5c;
    }
    if (uVar2 == 0x7e) {
      uVar6 = 0x60;
      goto LAB_108d95d5c;
    }
    goto LAB_108d95a8c;
  }
  switch(uVar2) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    uVar13 = 0;
    do {
      lVar4 = uVar13 + 1;
      uVar13 = uVar13 + 1;
    } while (((&UNK_10dfa0749)[param_1[lVar4]] & 1) != 0);
    goto code_r0x000108d95938;
  default:
    goto LAB_108d95a8c;
  case 0x21:
    if (param_1[1] != 0x3d) {
      uVar6 = 0x96;
      goto LAB_108d95d4c;
    }
    goto code_r0x000108d95ca8;
  case 0x22:
  case 0x27:
  case 0x60:
    bVar8 = param_1[1];
    if (bVar8 == 0) {
      uVar13 = 1;
    }
    else {
      uVar13 = 1;
      do {
        if ((bVar8 == bVar5) && (uVar13 = (long)(int)uVar13 + 1, param_1[uVar13] != bVar5)) {
          if (uVar2 == 0x27) {
            uVar6 = 0x61;
          }
          else {
            uVar6 = 0x1b;
          }
          goto code_r0x000108d95da8;
        }
        uVar13 = (long)(int)uVar13 + 1;
        bVar8 = param_1[uVar13];
      } while (bVar8 != 0);
    }
    *param_2 = 0x96;
    return uVar13;
  case 0x23:
  case 0x24:
  case 0x3a:
  case 0x40:
    *param_2 = 0x87;
    bVar5 = param_1[1];
    if (bVar5 == 0) {
      uVar13 = 1;
    }
    else {
      iVar3 = 0;
      uVar13 = 1;
      do {
        if (((&UNK_10dfa0749)[bVar5] & 0x46) == 0) {
          iVar9 = (int)uVar13;
          if ((bVar5 == 0x28) && (0 < iVar3)) {
            param_1 = param_1 + iVar9;
            uVar13 = (ulong)(iVar9 + 1);
            goto code_r0x000108d95cf4;
          }
          if ((bVar5 != 0x3a) || (uVar7 = (long)iVar9 + 1, param_1[uVar7] != 0x3a)) break;
        }
        else {
          iVar3 = iVar3 + 1;
          uVar7 = uVar13;
        }
        uVar13 = (long)(int)uVar7 + 1;
        bVar5 = param_1[uVar13];
      } while (bVar5 != 0);
      if (iVar3 != 0) {
        return uVar13;
      }
    }
    *param_2 = 0x96;
    return uVar13;
  case 0x25:
    uVar6 = 0x5d;
    break;
  case 0x26:
    uVar6 = 0x55;
    break;
  case 0x28:
    uVar6 = 0x16;
    break;
  case 0x29:
    uVar6 = 0x17;
    break;
  case 0x2a:
    uVar6 = 0x5b;
    break;
  case 0x2b:
    uVar6 = 0x59;
    break;
  case 0x2c:
    uVar6 = 0x1a;
    break;
  case 0x2d:
    if (param_1[1] != 0x2d) {
      uVar6 = 0x5a;
      break;
    }
    for (uVar13 = 2; param_1[uVar13] != 0 && param_1[uVar13] != 10; uVar13 = uVar13 + 1) {
    }
code_r0x000108d95938:
    uVar6 = 0x97;
code_r0x000108d9593c:
    *param_2 = uVar6;
    return uVar13;
  case 0x2e:
    if (0xfffffffffffffff5 < (ulong)param_1[1] - 0x3a) goto code_r0x000108d957c8;
    uVar6 = 0x7a;
    break;
  case 0x2f:
    if ((param_1[1] == 0x2a) && (param_1[2] != 0)) {
      if ((param_1[2] == 0x2a) && (param_1[3] == 0x2f)) {
        uVar13 = 4;
      }
      else {
        uVar13 = 3;
        pbVar11 = param_1 + 4;
        bVar5 = param_1[3];
        do {
          if (bVar5 == 0) goto code_r0x000108d95da4;
          pbVar12 = pbVar11 + 1;
          bVar8 = *pbVar11;
          iVar3 = (int)uVar13;
          uVar13 = (ulong)(iVar3 + 1);
          bVar1 = bVar5 != 0x2a;
          pbVar11 = pbVar12;
          bVar5 = bVar8;
        } while ((bVar1) || (bVar8 != 0x2f));
        uVar13 = (ulong)(iVar3 + 2);
      }
code_r0x000108d95da4:
      uVar6 = 0x97;
code_r0x000108d95da8:
      *param_2 = uVar6;
      return uVar13;
    }
    uVar6 = 0x5c;
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
code_r0x000108d957c8:
    *param_2 = 0x84;
    if (((*param_1 == 0x30) && ((param_1[1] | 0x20) == 0x78)) &&
       (((byte)(&UNK_10dfa0749)[param_1[2]] >> 3 & 1) != 0)) {
      uVar13 = 2;
      pbVar11 = param_1 + 3;
      do {
        bVar5 = *pbVar11;
        uVar13 = (ulong)((int)uVar13 + 1);
        pbVar11 = pbVar11 + 1;
      } while (((byte)(&UNK_10dfa0749)[bVar5] >> 3 & 1) != 0);
      return uVar13;
    }
    lVar4 = 0;
    do {
      pbVar11 = param_1 + lVar4;
      lVar4 = lVar4 + 1;
    } while (0xfffffffffffffff5 < (ulong)*pbVar11 - 0x3a);
    if (*pbVar11 == 0x2e) {
      do {
        pbVar11 = param_1 + lVar4;
        lVar4 = lVar4 + 1;
      } while (0xfffffffffffffff5 < (ulong)*pbVar11 - 0x3a);
      *param_2 = 0x85;
    }
    uVar13 = lVar4 - 1;
    uVar7 = (ulong)(int)uVar13;
    pbVar11 = param_1 + (int)uVar13;
    uVar10 = (ulong)*pbVar11;
    if (((*pbVar11 | 0x20) == 0x65) &&
       ((bVar5 = pbVar11[1], 0xfffffffffffffff5 < (ulong)bVar5 - 0x3a ||
        (((bVar5 == 0x2d || (bVar5 == 0x2b)) && (0xfffffffffffffff5 < (ulong)pbVar11[2] - 0x3a))))))
    {
      lVar4 = (uVar13 << 0x20) + 0x100000000;
      uVar7 = (long)((uVar13 << 0x20) + 0x200000000) >> 0x20;
      do {
        uVar13 = uVar7;
        lVar4 = lVar4 + 0x100000000;
        uVar7 = uVar13 + 1;
      } while (0xfffffffffffffff5 < (ulong)param_1[uVar13] - 0x3a);
      *param_2 = 0x85;
      uVar7 = lVar4 >> 0x20;
      uVar10 = (ulong)param_1[uVar7];
    }
    if (((&UNK_10dfa0749)[uVar10] & 0x46) == 0) {
      return uVar13;
    }
    param_1 = param_1 + uVar7;
    do {
      param_1 = param_1 + 1;
      *param_2 = 0x96;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (((&UNK_10dfa0749)[*param_1] & 0x46) != 0);
    return uVar7;
  case 0x3b:
    *param_2 = 1;
    return 1;
  case 0x3c:
    bVar5 = param_1[1];
    if (bVar5 == 0x3c) {
      uVar6 = 0x57;
      goto LAB_108d95d4c;
    }
    if (bVar5 != 0x3e) {
      if (bVar5 != 0x3d) {
        uVar6 = 0x52;
        break;
      }
      uVar6 = 0x51;
      goto LAB_108d95d4c;
    }
code_r0x000108d95ca8:
    uVar6 = 0x4e;
LAB_108d95d4c:
    *param_2 = uVar6;
    return 2;
  case 0x3d:
    *param_2 = 0x4f;
    uVar2 = 1;
    if (param_1[1] == 0x3d) {
      uVar2 = 2;
    }
    return (ulong)uVar2;
  case 0x3e:
    if (param_1[1] == 0x3e) {
      uVar6 = 0x58;
    }
    else {
      if (param_1[1] != 0x3d) {
        uVar6 = 0x50;
        break;
      }
      uVar6 = 0x53;
    }
    goto LAB_108d95d4c;
  case 0x3f:
    uVar13 = 0;
    *param_2 = 0x87;
    do {
      lVar4 = uVar13 + 1;
      uVar13 = uVar13 + 1;
    } while (0xfffffffffffffff5 < (ulong)param_1[lVar4] - 0x3a);
    return uVar13;
  case 0x58:
LAB_108d95a28:
    if (param_1[1] == 0x27) {
      *param_2 = 0x86;
      uVar13 = 2;
      do {
        uVar7 = uVar13;
        uVar13 = uVar7 + 1;
      } while (((byte)(&UNK_10dfa0749)[param_1[uVar7]] >> 3 & 1) != 0);
      if (param_1[uVar7] != 0x27 || (uVar7 & 1) != 0) {
        *param_2 = 0x96;
        for (; (param_1[uVar7] != 0 && (param_1[uVar7] != 0x27)); uVar7 = uVar7 + 1) {
        }
      }
      uVar2 = (uint)uVar7;
      if (param_1[(int)uVar2] != 0) {
        uVar2 = uVar2 + 1;
      }
      return (ulong)uVar2;
    }
    goto LAB_108d95a8c;
  case 0x5b:
    uVar13 = 1;
    do {
      pbVar11 = param_1 + uVar13;
      if (*pbVar11 == 0) {
        uVar6 = 0x96;
        goto code_r0x000108d9593c;
      }
      uVar13 = uVar13 + 1;
    } while (*pbVar11 != 0x5d);
    uVar6 = 0x1b;
    goto code_r0x000108d9593c;
  }
LAB_108d95d5c:
  *param_2 = uVar6;
  return 1;
LAB_108d95a8c:
  if (((&UNK_10dfa0749)[uVar2] & 0x46) != 0) {
    uVar13 = 0;
    do {
      lVar4 = uVar13 + 1;
      uVar13 = uVar13 + 1;
    } while (((&UNK_10dfa0749)[param_1[lVar4]] & 0x46) != 0);
    FUN_108d95db0(param_1,uVar13);
    *param_2 = (int)param_1;
    return uVar13;
  }
  uVar6 = 0x96;
  goto LAB_108d95d5c;
  while (uVar13 = (ulong)((int)uVar7 + 1), bVar5 != 0x29 && ((&UNK_10dfa0749)[(uint)bVar5] & 1) == 0
        ) {
code_r0x000108d95cf4:
    uVar7 = uVar13;
    param_1 = param_1 + 1;
    bVar5 = *param_1;
    if (bVar5 == 0) goto code_r0x000108d95d20;
  }
  if (bVar5 == 0x29) {
    return uVar13;
  }
code_r0x000108d95d20:
  *param_2 = 0x96;
  return uVar7;
}



/* Entry: 108d95db0; end: 108d95eb3;  */

undefined1 FUN_108d95db0(byte *param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  if ((1 < (int)param_2) &&
     (uVar3 = (uint)(byte)(&UNK_10dfa0cbd)
                          [((uint)(byte)(&UNK_10dfa05fd)[param_1[(ulong)param_2 - 1]] * 3 ^
                            (uint)(byte)(&UNK_10dfa05fd)[*param_1] << 2 ^ param_2) % 0x7f],
     (&UNK_10dfa0cbd)
     [((uint)(byte)(&UNK_10dfa05fd)[param_1[(ulong)param_2 - 1]] * 3 ^
       (uint)(byte)(&UNK_10dfa05fd)[*param_1] << 2 ^ param_2) % 0x7f] != 0)) {
    do {
      uVar3 = uVar3 - 1;
      if (param_2 == (byte)(&UNK_10dfa0db8)[uVar3]) {
        pbVar4 = &UNK_10dfa0a94 + *(ushort *)(&UNK_10dfa0e34 + (ulong)uVar3 * 2);
        pbVar5 = param_1;
        uVar6 = param_2 + 1;
        while( true ) {
          if ((ulong)*pbVar4 == 0) break;
          cVar2 = (&UNK_10dfa05fd)[*pbVar4];
          cVar1 = (&UNK_10dfa05fd)[*pbVar5];
          if (cVar2 != cVar1) goto LAB_108d95e8c;
          uVar6 = uVar6 - 1;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
          if (uVar6 < 2) goto LAB_108d95ea4;
        }
        cVar1 = (&UNK_10dfa05fd)[*pbVar5];
        cVar2 = '\0';
LAB_108d95e8c:
        if (cVar2 == cVar1) {
LAB_108d95ea4:
          return (&UNK_10dfa0f2c)[uVar3];
        }
      }
      uVar3 = (uint)(byte)(&UNK_10dfa0d3c)[uVar3];
    } while (uVar3 != 0);
  }
  return 0x1b;
}



/* Entry: 108d95eb4; end: 108d9605b;  */

long FUN_108d95eb4(long param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    FUN_108d6a6fc(param_1,param_3 + 1);
    if (param_1 != 0) {
      _memcpy(param_1,param_2,param_3);
      *(undefined1 *)(param_1 + param_3) = 0;
    }
  }
  return param_1;
}



/* Entry: 108d9605c; end: 108d960fb;  */

void FUN_108d9605c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0xa1) == '\0') {
    FUN_108d6ffd4(lVar1,param_1 + 1);
    if ((int)lVar1 != 0) {
      *(int *)(param_1 + 3) = (int)lVar1;
      *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + 1;
    }
  }
  return;
}



/* Entry: 108d960fc; end: 108d961eb;  */

void FUN_108d960fc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 < 3) {
    iVar5 = 2;
  }
  else {
    lVar6 = 0;
    lVar7 = 2;
    iVar5 = 2;
    do {
      lVar1 = *(long *)(param_1 + 0x20) + lVar6;
      if (*(long *)(lVar1 + 0x48) == 0) {
        func_0x000108d60660(param_1,*(undefined8 *)(lVar1 + 0x40));
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      else {
        if (iVar5 < lVar7) {
          uVar8 = *(undefined8 *)(lVar1 + 0x40);
          uVar10 = *(undefined8 *)(lVar1 + 0x58);
          uVar9 = *(undefined8 *)(lVar1 + 0x50);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 0x20);
          puVar2[1] = *(undefined8 *)(lVar1 + 0x48);
          *puVar2 = uVar8;
          puVar2[3] = uVar10;
          puVar2[2] = uVar9;
        }
        iVar5 = iVar5 + 1;
      }
      lVar7 = lVar7 + 1;
      iVar4 = *(int *)(param_1 + 0x28);
      lVar6 = lVar6 + 0x20;
    } while (lVar7 < iVar4);
  }
  _bzero(*(long *)(param_1 + 0x20) + (long)iVar5 * 0x20,
         -(ulong)((uint)(iVar4 - iVar5) >> 0x1f) & 0xffffffe000000000 |
         (ulong)(uint)(iVar4 - iVar5) << 5);
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 < 3) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x2c0);
    if (puVar3 != puVar2) {
      uVar9 = puVar3[1];
      uVar8 = *puVar3;
      uVar11 = puVar3[3];
      uVar10 = puVar3[2];
      uVar12 = puVar3[4];
      uVar14 = puVar3[7];
      uVar13 = puVar3[6];
      *(undefined8 *)(param_1 + 0x2e8) = puVar3[5];
      *(undefined8 *)(param_1 + 0x2e0) = uVar12;
      *(undefined8 *)(param_1 + 0x2f8) = uVar14;
      *(undefined8 *)(param_1 + 0x2f0) = uVar13;
      *(undefined8 *)(param_1 + 0x2c8) = uVar9;
      *puVar2 = uVar8;
      *(undefined8 *)(param_1 + 0x2d8) = uVar11;
      *(undefined8 *)(param_1 + 0x2d0) = uVar10;
      func_0x000108d60660(param_1);
      *(undefined8 **)(param_1 + 0x20) = puVar2;
    }
  }
  return;
}



/* Entry: 108d961ec; end: 108d96303;  */

/* WARNING: Possible PIC construction at 0x000108d96224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d9623c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108d96254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d96240) */
/* WARNING: Removing unreachable block (ram,0x000108d96228) */
/* WARNING: Removing unreachable block (ram,0x000108d96258) */
/* WARNING: Removing unreachable block (ram,0x000108d9626c) */

void FUN_108d961ec(long param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  ulong *unaff_x20;
  ulong *puVar4;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar4 = *(ulong **)(param_2 + 8);
  if (puVar4 == (ulong *)0x0) {
    return;
  }
  puVar3 = puVar4;
  if (0 < *(short *)(param_2 + 0x3e)) {
    unaff_x22 = 0;
    unaff_x30 = 0x108d96228;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = (ulong *)*puVar4;
    unaff_x19 = param_1;
    unaff_x20 = puVar4;
    unaff_x21 = param_2;
    unaff_x29 = puVar1;
  }
  if (puVar3 == (ulong *)0x0) {
    return;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x328) != 0) {
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((puVar3 < *(ulong *)(param_1 + 0x170)) || (*(ulong *)(param_1 + 0x178) <= puVar3)) {
        (*pcRam0000000113297950)();
        uVar2 = (uint)puVar3;
      }
      else {
        uVar2 = (uint)*(ushort *)(param_1 + 0x150);
      }
      **(int **)(param_1 + 0x328) = **(int **)(param_1 + 0x328) + uVar2;
      return;
    }
    if ((*(ulong *)(param_1 + 0x170) <= puVar3) && (puVar3 < *(ulong *)(param_1 + 0x178))) {
      *puVar3 = *(undefined8 *)(param_1 + 0x168);
      *(ulong **)(param_1 + 0x168) = puVar3;
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (puVar3 == (ulong *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = pcRam0000000113297940;
  if (iRam0000000113297910 != 0) {
    if (uRam0000000113829af0 != 0) {
      (*pcRam0000000113297998)();
    }
    puVar4 = puVar3;
    (*pcRam0000000113297950)();
    lRam0000000113829a50 = lRam0000000113829a50 - (int)puVar4;
    lRam0000000113829a98 = lRam0000000113829a98 + -1;
    (*pcRam0000000113297940)(puVar3);
    puVar3 = (ulong *)uRam0000000113829af0;
    UNRECOVERED_JUMPTABLE = pcRam00000001132979a8;
    if (uRam0000000113829af0 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000108d5e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3);
  return;
}



/* Entry: 108d96304; end: 108d96383;  */

uint FUN_108d96304(long *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  *param_1 = (long)(pbVar4 + 1);
  bVar1 = *pbVar4;
  uVar2 = (uint)bVar1;
  if (0xbf < bVar1) {
    uVar3 = (uint)(byte)(&UNK_10dfa0a05)[bVar1 - 0xc0];
    bVar1 = pbVar4[1];
    pbVar4 = pbVar4 + 2;
    while ((char)bVar1 < -0x40) {
      *param_1 = (long)pbVar4;
      uVar3 = pbVar4[-1] & 0x3f | uVar3 << 6;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    }
    uVar2 = 0xfffd;
    if ((0x7f < uVar3 && uVar3 >> 1 != 0x7fff) && uVar3 >> 0xb != 0x1b) {
      uVar2 = uVar3;
    }
  }
  return uVar2;
}



/* Entry: 108d96384; end: 108d96493;  */

uint FUN_108d96384(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  char cVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uStack_34;
  
  if ((ulong)*param_1 - 0x3a < 0xfffffffffffffff6) {
    pbVar4 = param_1;
    _strlen();
    uVar6 = 0;
    uVar1 = (uint)pbVar4 & 0x3fffffff;
    do {
      if (uVar1 == (byte)(&UNK_10dfa1085)[uVar6]) {
        if (((ulong)pbVar4 & 0x3fffffff) != 0) {
          pbVar7 = &UNK_10f518e47 + (byte)(&UNK_10dfa107e)[uVar6];
          pbVar8 = param_1;
          uVar3 = uVar1 + 1;
          while( true ) {
            if ((ulong)*pbVar7 == 0) break;
            cVar5 = (&UNK_10dfa05fd)[*pbVar7];
            cVar2 = (&UNK_10dfa05fd)[*pbVar8];
            if (cVar5 != cVar2) goto LAB_108d96440;
            uVar3 = uVar3 - 1;
            pbVar7 = pbVar7 + 1;
            pbVar8 = pbVar8 + 1;
            if (uVar3 < 2) goto LAB_108d96470;
          }
          cVar2 = (&UNK_10dfa05fd)[*pbVar8];
          cVar5 = '\0';
LAB_108d96440:
          if (cVar5 != cVar2) goto LAB_108d96448;
        }
LAB_108d96470:
        uStack_34 = (uint)(byte)(&UNK_10dfa108c)[uVar6];
        break;
      }
LAB_108d96448:
      uVar6 = uVar6 + 1;
      uStack_34 = param_3;
    } while (uVar6 != (param_2 ^ 7));
  }
  else {
    uStack_34 = 0;
    FUN_108d934c8(param_1,&uStack_34);
  }
  return uStack_34 & 0xff;
}



/* Entry: 108d96494; end: 108d9694f;  */

uint FUN_108d96494(long *param_1,long param_2,uint param_3,short param_4,long param_5,long *param_6,
                  long *param_7)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_70;
  int iStack_64;
  
  lStack_70 = 0;
  plVar3 = param_1;
  FUN_108d6a6fc(param_1,0x288);
  if (plVar3 == (long *)0x0) {
LAB_108d965e4:
    uVar12 = 7;
    goto LAB_108d968e8;
  }
  _bzero(plVar3,0x288);
  plVar3[0x42] = param_5;
  iVar2 = (int)param_1[5];
  if (0 < iVar2) {
    lVar15 = 0;
    lVar9 = 0;
    do {
      uVar13 = *(ulong *)(param_1[4] + lVar15 + 8);
      if (uVar13 != 0) {
        if ((*(char *)(uVar13 + 0x11) != '\0') &&
           (*(int *)(uVar13 + 0x14) = *(int *)(uVar13 + 0x14) + 1, *(char *)(uVar13 + 0x12) == '\0')
           ) {
          FUN_108d7f528(uVar13);
        }
        uVar12 = uVar13;
        func_0x000108d7b7fc(uVar13,1,1);
        if ((*(char *)(uVar13 + 0x11) != '\0') &&
           (iVar2 = *(int *)(uVar13 + 0x14) + -1, *(int *)(uVar13 + 0x14) = iVar2, iVar2 == 0)) {
          FUN_108d7f5fc(uVar13);
        }
        if ((int)uVar12 != 0) {
          FUN_108d65cb8(param_1,uVar12,&UNK_10f518e5c);
          goto LAB_108d968e8;
        }
        iVar2 = (int)param_1[5];
      }
      lVar9 = lVar9 + 1;
      lVar15 = lVar15 + 0x20;
    } while (lVar9 < iVar2);
  }
  func_0x000108d960a8(param_1);
  *plVar3 = (long)param_1;
  *(undefined4 *)(plVar3 + 0x3b) = 0;
  if (((int)param_3 < 0) || ((param_3 != 0 && (*(char *)(param_2 + (ulong)param_3 + -1) == '\0'))))
  {
    FUN_108d6ccb0(plVar3,param_2,&lStack_70);
  }
  else {
    if (*(int *)((long)param_1 + 0x6c) < (int)param_3) {
      FUN_108d65cb8(param_1,0x12,&UNK_10f518e7a);
      if (*(char *)((long)param_1 + 0x51) == '\0') {
        uVar12 = (ulong)(*(uint *)(param_1 + 9) & 0x12);
        goto LAB_108d968e8;
      }
      FUN_108d80e10(param_1);
      goto LAB_108d965e4;
    }
    uVar13 = (ulong)param_3;
    plVar4 = param_1;
    FUN_108d95eb4(param_1,param_2,uVar13);
    if (plVar4 != (long *)0x0) {
      FUN_108d6ccb0(plVar3,plVar4,&lStack_70);
      func_0x000108d60660(param_1,plVar4);
      uVar13 = plVar3[0x43] - (long)plVar4;
    }
    plVar3[0x43] = param_2 + uVar13;
  }
  cVar1 = *(char *)((long)param_1 + 0x51);
  if (cVar1 == '\0') {
    if ((int)plVar3[3] == 0x65) {
      uVar7 = 0;
      goto LAB_108d966a0;
    }
  }
  else {
    uVar7 = 7;
LAB_108d966a0:
    *(undefined4 *)(plVar3 + 3) = uVar7;
  }
  if (*(char *)((long)plVar3 + 0x1d) != '\0') {
    lVar9 = *plVar3;
    if (0 < *(int *)(lVar9 + 0x28)) {
      lVar16 = 0;
      lVar15 = 0;
      do {
        lVar14 = *(long *)(*(long *)(lVar9 + 0x20) + lVar16 + 8);
        if (lVar14 != 0) {
          cVar1 = *(char *)(lVar14 + 0x10);
          if (cVar1 == '\0') {
            lVar5 = lVar14;
            FUN_108d5f618(lVar14,0);
            iVar2 = (int)lVar5;
            if (iVar2 != 0) {
              if (iVar2 == 0xc0a || iVar2 == 7) {
                *(undefined1 *)(lVar9 + 0x51) = 1;
              }
              break;
            }
          }
          FUN_108d615f0(lVar14,1,&iStack_64);
          if (iStack_64 != **(int **)(*(long *)(lVar9 + 0x20) + lVar16 + 0x18)) {
            FUN_108d89c20(lVar9,lVar15);
            *(undefined4 *)(plVar3 + 3) = 0x11;
          }
          if (cVar1 == '\0') {
            FUN_108d5fff4(lVar14);
          }
        }
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 0x20;
      } while (lVar15 < *(int *)(lVar9 + 0x28));
    }
    cVar1 = *(char *)((long)param_1 + 0x51);
  }
  if (cVar1 != '\0') {
    *(undefined4 *)(plVar3 + 3) = 7;
  }
  if (param_7 != (long *)0x0) {
    *param_7 = plVar3[0x43];
  }
  uVar11 = *(uint *)(plVar3 + 3);
  uVar12 = (ulong)uVar11;
  if (((uVar11 == 0) && (plVar3[2] != 0)) && (*(char *)((long)plVar3 + 0x1f2) != '\0')) {
    if (*(char *)((long)plVar3 + 0x1f2) == '\x02') {
      uVar6 = 4;
      uVar10 = 0xc;
      uVar13 = 8;
    }
    else {
      uVar13 = 0;
      uVar6 = 8;
      uVar10 = 8;
    }
    FUN_108d71004(plVar3[2],uVar6);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)plVar3[2] + 0x51) == '\0') {
        FUN_108d67c04(((long *)plVar3[2])[4] + lVar9,(&PTR_DAT_110ac49c8)[uVar13],0xffffffff,1,0);
      }
      uVar13 = uVar13 + 1;
      lVar9 = lVar9 + 0x38;
    } while (uVar13 < uVar10);
  }
  if ((*(char *)((long)param_1 + 0xa1) == '\0') &&
     (puVar8 = (undefined8 *)plVar3[2], puVar8 != (undefined8 *)0x0)) {
    uVar6 = *puVar8;
    FUN_108d95eb4(uVar6,param_2,(long)((int)plVar3[0x43] - (int)param_2));
    puVar8[0x1c] = uVar6;
    *(ushort *)((long)puVar8 + 0x8c) = *(ushort *)((long)puVar8 + 0x8c) & 0xfeff | param_4 << 8;
  }
  if ((plVar3[2] == 0) || ((uVar11 == 0 && (*(char *)((long)param_1 + 0x51) == '\0')))) {
    *param_6 = plVar3[2];
  }
  else {
    func_0x000108d674fc();
  }
  lVar9 = lStack_70;
  if (lStack_70 == 0) {
    *(uint *)((long)param_1 + 0x44) = uVar11;
    lVar9 = param_1[0x28];
    if (lVar9 == 0) goto LAB_108d968e0;
    if ((*(ushort *)(lVar9 + 8) & 0x2460) != 0) {
      func_0x000108d82720();
      goto LAB_108d968e0;
    }
    *(undefined2 *)(lVar9 + 8) = 1;
    goto LAB_108d968e0;
  }
  FUN_108d65cb8(param_1,uVar12,&UNK_10f517517);
  while( true ) {
    func_0x000108d60660(param_1,lVar9);
LAB_108d968e0:
    lVar9 = plVar3[0x4f];
    if (lVar9 == 0) break;
    plVar3[0x4f] = *(long *)(lVar9 + 8);
  }
LAB_108d968e8:
  FUN_108d6b120(plVar3);
  func_0x000108d60660(param_1,plVar3);
  uVar11 = (uint)uVar12;
  if (param_1 == (long *)0x0) {
    uVar11 = uVar11 & 0xff;
  }
  else if ((uVar11 == 0xc0a) || (*(char *)((long)param_1 + 0x51) != '\0')) {
    FUN_108d80e10(param_1);
    uVar11 = 7;
  }
  else {
    uVar11 = *(uint *)(param_1 + 9) & uVar11;
  }
  return uVar11;
}



/* Entry: 108d96950; end: 108d969a3;  */

int FUN_108d96950(byte *param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  
  pbVar1 = param_1 + param_2;
  if (0x7fffffff < param_2) {
    pbVar1 = (byte *)0xffffffffffffffff;
  }
  bVar3 = *param_1;
  iVar2 = 0;
  while (bVar3 != 0 && param_1 < pbVar1) {
    if (bVar3 < 0xc0) {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
    }
    else {
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
      } while ((char)bVar3 < -0x40);
    }
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* Entry: 108d969a4; end: 108d96a1b;  */

void FUN_108d969a4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  while (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x38);
    func_0x000108d93df0(param_1,*(undefined8 *)(param_2 + 0x20));
    FUN_108d93e84(param_1,*(undefined8 *)(param_2 + 0x28));
    func_0x000108d93f18(param_1,*(undefined8 *)(param_2 + 0x10),1);
    func_0x000108d94124(param_1,*(undefined8 *)(param_2 + 0x30));
    func_0x000108d60660(param_1,param_2);
    param_2 = lVar1;
  }
  return;
}


