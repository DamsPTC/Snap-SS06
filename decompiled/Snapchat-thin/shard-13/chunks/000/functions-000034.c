/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109dccf70; end: 109dccfff;  */

long * FUN_109dccf70(ulong *param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar4 = (long *)*param_1;
  uStack_38 = 0;
  plVar3 = plVar4;
  (**(code **)(*plVar4 + 0xe8))(plVar4,auStack_40,&uStack_38);
  if (((ulong)plVar3 & 1) == 0) {
    cVar2 = *(char *)param_1[1];
    (**(code **)(*plVar4 + 0x38))();
    lVar1 = 0x220;
    if (cVar2 == '\0') {
      lVar1 = 0x218;
    }
    (**(code **)(*plVar4 + lVar1))();
  }
  return plVar3;
}



/* Entry: 109dcd000; end: 109dcd04f;  */

bool FUN_109dcd000(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x620);
  if (*(long **)(param_1 + 0x620) != (long *)0x0) {
    do {
      plVar2 = plVar1;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    if ((plVar2 != (long *)(param_1 + 0x620)) && ((int)plVar2[4] == 0)) goto LAB_109dcd02c;
  }
  plVar2 = (long *)(param_1 + 0x620);
LAB_109dcd02c:
  if ((int)plVar2[0x12] != 0) {
    return *(char *)((long)plVar2 + 0x1e9) == *(char *)((long)plVar2 + 0x1ea);
  }
  return true;
}



/* Entry: 109dcd050; end: 109dcd4bf;  */

void FUN_109dcd050(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  func_0x000109dcd0e8(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * -0x48;
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x60) + (ulong)uVar1 * 0x48);
    do {
      if (*(char *)((long)puVar2 + -0x31) < '\0') {
        __ZdlPv(puVar2[-9]);
      }
      lVar3 = lVar3 + 0x48;
      puVar2 = puVar2 + -9;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(char *)(param_1 + 399) < '\0') {
    **(undefined1 **)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x178) = 0;
    *(undefined1 *)(param_1 + 399) = 0;
  }
  *(undefined1 *)(param_1 + 0x1c2) = 0;
  *(undefined2 *)(param_1 + 0x1c0) = 0x100;
  return;
}



/* Entry: 109dcd4c0; end: 109dcd5a3;  */

undefined8 FUN_109dcd4c0(long *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *apuStack_b8 [4];
  undefined2 uStack_98;
  undefined *apuStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined **appuStack_68 [2];
  undefined *puStack_58;
  undefined2 uStack_48;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar2 = *(undefined8 *)(plVar1[1] + 8);
  uStack_70 = 0x503;
  apuStack_90[0] = &UNK_10f5fca9a;
  appuStack_68[0] = apuStack_90;
  puStack_58 = &UNK_10f5fc5cd;
  uStack_48 = 0x302;
  plVar1 = param_1;
  uStack_80 = param_3;
  uStack_78 = param_4;
  func_0x000109dd9b2c(param_1,param_2,appuStack_68);
  if (((ulong)plVar1 & 1) == 0) {
    apuStack_b8[0] = &UNK_10f5fcab4;
    uStack_98 = 0x103;
    if (*param_2 < 0xffffffff) {
      return 0;
    }
    FUN_109dd98f8(param_1,uVar2,apuStack_b8,0,0);
  }
  return 1;
}



/* Entry: 109dcd5a4; end: 109dcd70f;  */

undefined8 FUN_109dcd5a4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined ***pppuVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined *apuStack_150 [2];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined2 uStack_130;
  undefined8 *apuStack_128 [2];
  undefined *puStack_118;
  undefined2 uStack_108;
  undefined *apuStack_100 [2];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined **appuStack_d8 [2];
  undefined *puStack_c8;
  undefined2 uStack_b8;
  undefined *apuStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined **appuStack_88 [2];
  undefined *puStack_78;
  undefined2 uStack_68;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar6 = *(undefined8 *)(plVar2[1] + 8);
  uStack_90 = 0x503;
  apuStack_b0[0] = &UNK_10f5fcb8e;
  appuStack_88[0] = apuStack_b0;
  puStack_78 = &UNK_10f5fc5cd;
  uStack_68 = 0x302;
  plVar2 = param_1;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  func_0x000109dd9b2c(param_1,param_2,appuStack_88);
  if (((ulong)plVar2 & 1) == 0) {
    uStack_e0 = 0x503;
    apuStack_100[0] = &UNK_10f5fcba4;
    appuStack_d8[0] = apuStack_100;
    puStack_c8 = &UNK_10f5fc5cd;
    uStack_b8 = 0x302;
    uStack_f0 = param_3;
    uStack_e8 = param_4;
    if (*param_2 < 1) {
      pppuVar4 = appuStack_d8;
    }
    else {
      lVar3 = param_1[0x1b];
      func_0x000109daa9fc();
      uVar1 = (int)*param_2 - 1;
      if (uVar1 < *(uint *)(lVar3 + 0x30)) {
        bVar5 = *(byte *)(*(long *)(lVar3 + 0x28) + (ulong)uVar1 * 0x20 + 4) ^ 1;
      }
      else {
        bVar5 = 1;
      }
      uStack_130 = 0x503;
      apuStack_150[0] = &UNK_10f5fcbc3;
      puStack_118 = &UNK_10f5fc5cd;
      uStack_108 = 0x302;
      if ((bVar5 & 1) == 0) {
        return 0;
      }
      pppuVar4 = (undefined ***)apuStack_128;
      uStack_140 = param_3;
      uStack_138 = param_4;
      apuStack_128[0] = apuStack_150;
    }
    FUN_109dd98f8(param_1,uVar6,pppuVar4,0,0);
  }
  return 1;
}



/* Entry: 109dcd710; end: 109dcd8d3;  */

void FUN_109dcd710(ulong *param_1)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcStack_70;
  undefined *apuStack_68 [4];
  undefined2 uStack_48;
  long *plStack_40;
  long lStack_38;
  
  plVar4 = (long *)*param_1;
  plStack_40 = (long *)0x0;
  lStack_38 = 0;
  plVar1 = plVar4;
  (**(code **)(*plVar4 + 0x28))();
  uVar5 = *(undefined8 *)(plVar1[1] + 8);
  plVar1 = plVar4;
  (**(code **)(*plVar4 + 0xc0))(plVar4,&plStack_40);
  if ((int)plVar1 != 0) {
    apuStack_68[0] = &UNK_10f5fcc47;
    uStack_48 = 0x103;
    plVar1 = plVar4;
    (**(code **)(*plVar4 + 0x28))();
    FUN_109dd98f8(plVar4,plVar1[0xc],apuStack_68,0,0);
    return;
  }
  if (lStack_38 == 7) {
    if ((int)*plStack_40 == 0x735f7369 && *(int *)((long)plStack_40 + 3) == 0x746d7473) {
      plVar1 = plVar4;
      (**(code **)(*plVar4 + 0x28))();
      uVar5 = *(undefined8 *)(plVar1[1] + 8);
      apuStack_68[0] = (undefined *)0x0;
      plVar1 = plVar4;
      (**(code **)(*plVar4 + 0xe8))(plVar4,&pcStack_70,apuStack_68);
      if (((ulong)plVar1 & 1) != 0) {
        return;
      }
      puVar2 = (ulong *)param_1[2];
      *puVar2 = 0xffffffffffffffff;
      if ((*pcStack_70 == '\x01') &&
         (uVar3 = *(ulong *)(pcStack_70 + 0x10), *puVar2 = uVar3, uVar3 < 2)) {
        return;
      }
      apuStack_68[0] = &UNK_10f5fc912;
      goto LAB_109dcd824;
    }
  }
  else if ((lStack_38 == 0xc) &&
          (*plStack_40 == 0x6575676f6c6f7270 && (int)plStack_40[1] == 0x646e655f)) {
    *(undefined1 *)param_1[1] = 1;
    return;
  }
  apuStack_68[0] = &UNK_10f5fcc6f;
LAB_109dcd824:
  uStack_48 = 0x103;
  FUN_109dd98f8(plVar4,uVar5,apuStack_68,0,0);
  return;
}



/* Entry: 109dcd8d4; end: 109dcd8e7;  */

long * FUN_109dcd8d4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  uStack_3c = 0;
  plVar3 = plVar2;
  uStack_38 = param_3;
  (**(code **)(*plVar2 + 0x28))();
  if (*(int *)plVar3[1] != 4) {
    plVar3 = (long *)plVar2[1];
    (**(code **)(*plVar3 + 0x20))(plVar3,&uStack_3c,&uStack_38,&uStack_38);
    bVar1 = ((ulong)plVar3 & 1) == 0;
    if (bVar1) {
      (**(code **)(*plVar2 + 0x30))();
      lVar4 = plVar2[0x13];
      FUN_109ddbd88(lVar4,uStack_3c,1);
      *param_2 = (long)(int)lVar4;
    }
    return (long *)(ulong)!bVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000109dcd940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x100))(plVar2,param_2);
  return plVar2;
}



/* Entry: 109dcd8e8; end: 109dcd9ab;  */

long * FUN_109dcd8e8(long *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_2c = 0;
  plVar2 = param_1;
  uStack_28 = param_3;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)plVar2[1] != 4) {
    plVar2 = (long *)param_1[1];
    (**(code **)(*plVar2 + 0x20))(plVar2,&uStack_2c,&uStack_28,&uStack_28);
    bVar1 = ((ulong)plVar2 & 1) == 0;
    if (bVar1) {
      (**(code **)(*param_1 + 0x30))();
      lVar3 = param_1[0x13];
      FUN_109ddbd88(lVar3,uStack_2c,1);
      *param_2 = (long)(int)lVar3;
    }
    return (long *)(ulong)!bVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000109dcd940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))(param_1,param_2);
  return param_1;
}



/* Entry: 109dcd9ac; end: 109dcdb93;  */

void FUN_109dcd9ac(long *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  uint param_6)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  puVar3 = PTR___DefaultRuneLocale_11034bcf8;
  if ((param_6 == 0) || (param_4 == 0)) {
    return;
  }
  bVar6 = false;
  bVar7 = false;
LAB_109dcd9f4:
  uVar10 = 0;
  uVar12 = 1;
  do {
    cVar2 = *(char *)(param_3 + uVar12 + -1);
    if ((param_4 != uVar12) && (cVar2 == '\\')) break;
    if ((param_4 != uVar12) && (cVar2 == '$')) {
      bVar1 = *(byte *)(param_3 + uVar12);
      if ((bVar1 == 0x24) ||
         ((bVar1 == 0x6e || ((*(uint *)(puVar3 + (ulong)bVar1 * 4 + 0x3c) >> 10 & 1) != 0))))
      goto LAB_109dcda60;
    }
    uVar12 = uVar12 + 1;
    uVar10 = (ulong)((int)uVar10 + 1);
    if (uVar12 - param_4 == 1) goto LAB_109dcdb40;
  } while( true );
  do {
    iVar9 = (int)uVar10;
    uVar10 = (ulong)(iVar9 + 1);
    iVar4 = (int)*(char *)(param_3 + uVar10);
    FUN_109dcb648();
  } while (iVar4 != 0 && param_4 != iVar9 + 2);
  plVar8 = (long *)(param_5 + 8);
  uVar11 = (ulong)param_6;
  do {
    uVar13 = uVar10;
    if ((uVar12 - uVar10) + *plVar8 == 0) {
      if (uVar12 != uVar10) {
        lVar5 = plVar8[-1];
        _memcmp(lVar5,param_3 + uVar12,uVar10 - uVar12);
        if ((int)lVar5 != 0) goto LAB_109dcdad8;
      }
      if ((int)uVar11 != 0) {
        bVar6 = true;
        goto LAB_109dcdb2c;
      }
      break;
    }
LAB_109dcdad8:
    plVar8 = plVar8 + 6;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if ((*(char *)(param_3 + uVar12) == '(') &&
     (uVar13 = uVar12 + 2, *(char *)(param_3 + uVar12 + 1) != ')')) {
    uVar13 = uVar10;
  }
LAB_109dcdb2c:
  uVar12 = param_4;
  if (uVar13 <= param_4) {
    uVar12 = uVar13;
  }
  param_3 = param_3 + uVar12;
  param_4 = param_4 - uVar12;
  if (param_4 == 0) {
LAB_109dcdb40:
    if (bVar6) {
      return;
    }
    if (!bVar7) {
      return;
    }
    apuStack_88[0] = &UNK_10f5fd139;
    uStack_68 = 0x103;
    (**(code **)(*param_1 + 0xa8))(param_1,param_2,apuStack_88,0,0);
    return;
  }
  goto LAB_109dcd9f4;
LAB_109dcda60:
  bVar7 = (bool)(bVar1 != 0x24 | bVar7);
  uVar13 = uVar12 + 1;
  goto LAB_109dcdb2c;
}



/* Entry: 109dcdb94; end: 109dcdd1b;  */

void FUN_109dcdb94(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  long *plStack_68;
  
  plVar1 = (long *)(param_1 + 0x810);
  lVar7 = param_4[1];
  lVar6 = *param_4;
  lVar9 = param_4[3];
  lVar8 = param_4[2];
  lStack_98 = param_4[5];
  lStack_a0 = param_4[4];
  lStack_90 = param_4[6];
  param_4[4] = 0;
  param_4[5] = 0;
  lStack_80 = param_4[8];
  lStack_88 = param_4[7];
  lStack_78 = param_4[9];
  param_4[6] = 0;
  param_4[7] = 0;
  param_4[8] = 0;
  param_4[9] = 0;
  uStack_70 = (undefined1)param_4[10];
  plVar2 = plVar1;
  func_0x000107c2b020();
  lVar5 = *plVar1;
  lVar4 = *(long *)(lVar5 + ((ulong)plVar2 & 0xffffffff) * 8);
  if (lVar4 != 0) {
    if (lVar4 != -8) goto LAB_109dcdcd0;
    *(int *)(param_1 + 0x820) = *(int *)(param_1 + 0x820) + -1;
  }
  plVar3 = (long *)(param_3 + 0x61);
  __ZnwmSt11align_val_t(plVar3,8);
  if (param_3 != 0) {
    _memcpy(plVar3 + 0xc,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar3 + 0xc) + param_3) = 0;
  plVar3[2] = lVar7;
  plVar3[1] = lVar6;
  *plVar3 = param_3;
  plVar3[4] = lVar9;
  plVar3[3] = lVar8;
  plVar3[6] = lStack_98;
  plVar3[5] = lStack_a0;
  plVar3[7] = lStack_90;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_a0 = 0;
  plVar3[9] = lStack_80;
  plVar3[8] = lStack_88;
  plVar3[10] = lStack_78;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_88 = 0;
  *(undefined1 *)(plVar3 + 0xb) = uStack_70;
  *(long **)(lVar5 + ((ulong)plVar2 & 0xffffffff) * 8) = plVar3;
  *(int *)(param_1 + 0x81c) = *(int *)(param_1 + 0x81c) + 1;
  func_0x000107c2b028(plVar1,plVar2);
LAB_109dcdcd0:
  plStack_68 = &lStack_88;
  func_0x000104c607c8(&plStack_68);
  plStack_68 = &lStack_a0;
  FUN_109daba74(&plStack_68);
  return;
}



/* Entry: 109dcdd1c; end: 109dcdd2f;  */

undefined * FUN_109dcdd1c(void)

{
  undefined *puVar1;
  undefined *puStack_38;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  puStack_38 = puVar1 + 0x48;
  func_0x000104c607c8(&puStack_38);
  puStack_38 = puVar1 + 0x30;
  FUN_109daba74(&puStack_38);
  return puVar1;
}



/* Entry: 109dcdd30; end: 109dcdd77;  */

long FUN_109dcdd30(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x48;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x30;
  FUN_109daba74(&lStack_28);
  return param_1;
}



/* Entry: 109dcdd78; end: 109dcdf1f;  */

void FUN_109dcdd78(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *apuStack_78 [4];
  undefined2 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar6 = (long *)*param_1;
  uStack_50 = 0;
  uStack_48 = 0;
  plVar4 = plVar6;
  (**(code **)(*plVar6 + 0x28))();
  uVar7 = *(undefined8 *)(plVar4[1] + 8);
  plVar4 = plVar6;
  (**(code **)(*plVar6 + 0xc0))(plVar6,&uStack_50);
  uVar3 = uStack_48;
  uVar2 = uStack_50;
  if ((int)plVar4 != 0) {
    apuStack_78[0] = &UNK_10f5fbf88;
    uStack_58 = 0x103;
    FUN_109dd98f8(plVar6,uVar7,apuStack_78,0,0);
    return;
  }
  if (plVar6[0x62] == 0) {
    lVar9 = plVar6[0x5a];
    uVar1 = *(uint *)(plVar6 + 0x5b);
    uVar8 = (ulong)uVar1;
    lVar5 = lVar9;
    func_0x000109dcdea0(lVar9,uVar8,uStack_50,uStack_48);
    if (lVar5 != lVar9 + uVar8 * 0x10) {
      return;
    }
    if (uVar1 < 2) {
      func_0x000109d30b00(plVar6 + 0x5a,uVar2,uVar3);
      return;
    }
    do {
      lVar5 = plVar6[0x5a] + uVar8 * 0x10 + -0x10;
      FUN_109dcdf20(plVar6 + 0x60,lVar5,lVar5);
      uVar1 = (int)plVar6[0x5b] - 1;
      uVar8 = (ulong)uVar1;
      *(uint *)(plVar6 + 0x5b) = uVar1;
    } while (uVar1 != 0);
  }
  FUN_109dcdf20(plVar6 + 0x60,&uStack_50,&uStack_50);
  return;
}



/* Entry: 109dcdf20; end: 109dce03b;  */

undefined1  [16] FUN_109dcdf20(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x000109dcdfa0(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x30;
    __Znwm();
    uVar4 = *param_3;
    *(undefined8 *)(lVar3 + 0x28) = param_3[1];
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    FUN_109dce03c(param_1,uStack_38,plVar2,lVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 109dce03c; end: 109dce27f;  */

void FUN_109dce03c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109dce280; end: 109dce3df;  */

long * FUN_109dce280(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  long *unaff_x21;
  long lVar6;
  undefined8 *unaff_x22;
  undefined1 auStack_140 [16];
  byte bStack_130;
  undefined8 *puStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long alStack_a8 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_1;
  if (*(uint *)(param_1 + 3) != 0) {
    unaff_x22 = (undefined8 *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0x70);
    unaff_x21 = alStack_a8;
    puVar5 = (undefined8 *)(param_1[2] + 8);
    do {
      uStack_c8 = puVar5[-1];
      FUN_109dce77c(&plStack_c0,puVar5);
      uStack_60 = puVar5[0xc];
      uStack_68 = puVar5[0xb];
      uStack_d0 = 0x105;
      plStack_f0 = plStack_c0;
      uStack_e8 = uStack_b8;
      param_2 = uStack_c8;
      (**(code **)(*param_1 + 0xb0))(param_1,uStack_c8,&plStack_f0,uStack_68,uStack_60);
      plVar3 = plStack_c0;
      if (plStack_c0 != unaff_x21) {
        _free();
      }
      unaff_x20 = puVar5 + 0xe;
      puVar1 = puVar5 + 0xd;
      puVar5 = unaff_x20;
    } while (puVar1 != unaff_x22);
    uVar2 = *(uint *)(param_1 + 3);
    if (uVar2 != 0) {
      unaff_x20 = (undefined8 *)(param_1[2] + (ulong)uVar2 * 0x70 + -0x68);
      lVar6 = (ulong)uVar2 * -0x70;
      do {
        plVar3 = (long *)*unaff_x20;
        if (unaff_x20 + 3 != plVar3) {
          _free();
        }
        unaff_x20 = unaff_x20 + -0xe;
        lVar6 = lVar6 + 0x70;
        unaff_x21 = (long *)0x0;
      } while (lVar6 != 0);
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar3;
  }
  ___stack_chk_fail();
  plVar4 = plVar3;
  __Unwind_Resume(plVar3);
  uStack_f8 = 0x109dce3e0;
  puStack_120 = unaff_x22;
  plStack_118 = unaff_x21;
  puStack_110 = unaff_x20;
  plStack_108 = plVar3;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x000109dce4fc(auStack_140);
  if (bStack_130 == 1) {
    func_0x000109dce438(plVar4 + 3,param_2);
  }
  return (long *)(ulong)bStack_130;
}



/* Entry: 109dce3e0; end: 109dce57b;  */

char FUN_109dce3e0(long param_1,undefined8 param_2)

{
  undefined1 auStack_50 [16];
  char cStack_40;
  undefined1 uStack_31;
  
  func_0x000109dce4fc(auStack_50,param_1,param_2,&uStack_31);
  if (cStack_40 == '\x01') {
    func_0x000109dce438(param_1 + 0x18,param_2);
  }
  return cStack_40;
}



/* Entry: 109dce57c; end: 109dce623;  */

long * FUN_109dce57c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109dce5c8;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109dce624(param_1,uVar1);
  FUN_109dacb14(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109dce5c8:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109dce624; end: 109dce77b;  */

void FUN_109dce624(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined8 *)((ulong)uVar4 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000109dce6dc(param_1,lVar5,lVar5 + (ulong)uVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109dce77c; end: 109dce7df;  */

long * FUN_109dce77c(long *param_1,long param_2)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 0x40;
  param_1[1] = 0;
  if (*(long *)(param_2 + 8) != 0) {
    func_0x000109da4974(param_1);
  }
  return param_1;
}



/* Entry: 109dce7e0; end: 109dce84f;  */

long * FUN_109dce7e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)*param_1;
  if (*(uint *)(param_1 + 1) != 0) {
    lVar3 = (ulong)*(uint *)(param_1 + 1) << 3;
    do {
      plVar2 = *(long **)((long)plVar1 + lVar3 + -8);
      *(undefined8 *)((long)plVar1 + lVar3 + -8) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    plVar1 = (long *)*param_1;
  }
  if (plVar1 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 109dce850; end: 109dce8ab;  */

void FUN_109dce850(long *param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if ((ulong)param_1[2] < lVar1 + 1U) {
    FUN_109dffce4(param_1,param_1 + 3,lVar1 + 1U,1);
    lVar1 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar1) = param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



/* Entry: 109dce8ac; end: 109dce963;  */

long * FUN_109dce8ac(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                    int param_5,undefined1 param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 uStack_28;
  
  if (*(uint *)(param_1 + 1) < *(uint *)((long)param_1 + 0xc)) {
    puVar2 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x80);
    *puVar2 = param_2;
    *(undefined8 *)(puVar2 + 2) = param_3;
    puVar2[4] = param_4;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x12) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    *(undefined8 *)(puVar2 + 0x1a) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(long *)(puVar2 + 6) = (long)param_5;
    *(undefined1 *)(puVar2 + 0xc) = 0;
    puVar2[0x1c] = 1;
    *(undefined1 *)(puVar2 + 0x1e) = param_6;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    return param_1;
  }
  lStack_88 = (long)param_5;
  uStack_8c = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_30 = 1;
  plVar4 = param_1;
  auStack_a0[0] = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_28 = param_6;
  func_0x000109dc99c4(param_1,auStack_a0);
  plVar3 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x80);
  lVar8 = plVar4[5];
  lVar7 = plVar4[4];
  lVar6 = plVar4[7];
  lVar5 = plVar4[6];
  lVar11 = *plVar4;
  lVar10 = plVar4[3];
  lVar9 = plVar4[2];
  plVar3[1] = plVar4[1];
  *plVar3 = lVar11;
  plVar3[3] = lVar10;
  plVar3[2] = lVar9;
  plVar3[5] = lVar8;
  plVar3[4] = lVar7;
  plVar3[7] = lVar6;
  plVar3[6] = lVar5;
  lVar7 = plVar4[0xc];
  lVar6 = plVar4[0xf];
  lVar5 = plVar4[0xe];
  lVar9 = plVar4[9];
  lVar8 = plVar4[8];
  lVar11 = plVar4[0xb];
  lVar10 = plVar4[10];
  plVar3[0xd] = plVar4[0xd];
  plVar3[0xc] = lVar7;
  plVar3[0xf] = lVar6;
  plVar3[0xe] = lVar5;
  plVar3[9] = lVar9;
  plVar3[8] = lVar8;
  plVar3[0xb] = lVar11;
  plVar3[10] = lVar10;
  uVar1 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar1;
  return (long *)(*param_1 + (ulong)uVar1 * 0x80 + -0x80);
}



/* Entry: 109dce964; end: 109dceab3;  */

void FUN_109dce964(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 uStack_28;
  
  uStack_8c = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_30 = 1;
  uStack_28 = 0;
  plVar2 = param_1;
  auStack_a0[0] = param_2;
  uStack_98 = param_3;
  uStack_90 = param_4;
  func_0x000109dc99c4(param_1,auStack_a0);
  plVar1 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x80);
  lVar6 = plVar2[5];
  lVar5 = plVar2[4];
  lVar4 = plVar2[7];
  lVar3 = plVar2[6];
  lVar9 = *plVar2;
  lVar8 = plVar2[3];
  lVar7 = plVar2[2];
  plVar1[1] = plVar2[1];
  *plVar1 = lVar9;
  plVar1[3] = lVar8;
  plVar1[2] = lVar7;
  plVar1[5] = lVar6;
  plVar1[4] = lVar5;
  plVar1[7] = lVar4;
  plVar1[6] = lVar3;
  lVar5 = plVar2[0xc];
  lVar4 = plVar2[0xf];
  lVar3 = plVar2[0xe];
  lVar7 = plVar2[9];
  lVar6 = plVar2[8];
  lVar9 = plVar2[0xb];
  lVar8 = plVar2[10];
  plVar1[0xd] = plVar2[0xd];
  plVar1[0xc] = lVar5;
  plVar1[0xf] = lVar4;
  plVar1[0xe] = lVar3;
  plVar1[9] = lVar7;
  plVar1[8] = lVar6;
  plVar1[0xb] = lVar9;
  plVar1[10] = lVar8;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109dceab4; end: 109dceacb;  */

uint FUN_109dceab4(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 109dceacc; end: 109dceb47;  */

long * FUN_109dceacc(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * -0x18;
    pcVar4 = (char *)((long)plVar2 + (ulong)uVar1 * 0x18 + -1);
    do {
      if (*pcVar4 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar4 + -0x17));
      }
      lVar3 = lVar3 + 0x18;
      pcVar4 = pcVar4 + -0x18;
    } while (lVar3 != 0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 109dceb48; end: 109dcebeb;  */

void FUN_109dceb48(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 in_x7;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = *(undefined8 **)(param_1 + 0x158);
  puVar5 = *(undefined8 **)(param_1 + 0x160);
  lVar2 = param_1;
  while (puVar5 != puVar1) {
    puVar5 = puVar5 + -1;
    uVar3 = *(undefined8 *)*puVar5;
    apuStack_88[0] = &UNK_10f5fd53e;
    uStack_68 = 0x103;
    uStack_60 = 0;
    uStack_58 = 0;
    lVar4 = *(long *)(param_1 + 0xf0);
    func_0x000107c2b034();
    FUN_109e01664(lVar4,lVar2,uVar3,3,apuStack_88,&uStack_60,1,in_x7,0,0,1);
    lVar2 = lVar4;
  }
  return;
}



/* Entry: 109dcebec; end: 109dced53;  */

undefined8 * FUN_109dcebec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(param_1 + 2,param_2[2],param_2[3]);
  }
  else {
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
  }
  if (*(char *)((long)param_2 + 0x3f) < '\0') {
    func_0x000107c3192c(param_1 + 5,param_2[5],param_2[6]);
  }
  else {
    uVar2 = param_2[6];
    uVar1 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[5] = uVar1;
  }
  if (*(char *)((long)param_2 + 0x57) < '\0') {
    func_0x000107c3192c(param_1 + 8,param_2[8],param_2[9]);
  }
  else {
    uVar2 = param_2[9];
    uVar1 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    param_1[8] = uVar1;
  }
  if (*(char *)((long)param_2 + 0x6f) < '\0') {
    func_0x000107c3192c(param_1 + 0xb,param_2[0xb],param_2[0xc]);
  }
  else {
    uVar2 = param_2[0xc];
    uVar1 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
  }
  uVar3 = param_2[0xf];
  uVar2 = param_2[0xe];
  uVar1 = param_2[0x10];
  param_1[0x11] = 0;
  param_1[0x10] = uVar1;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  func_0x0001094a9128();
  return param_1;
}



/* Entry: 109dced54; end: 109dcee97;  */

undefined8 FUN_109dced54(long *param_1,uint param_2,ulong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_64 [4];
  undefined8 uStack_60;
  uint uStack_54;
  
  lVar6 = param_1[0x11];
  uStack_54 = 0;
  lVar3 = param_1[0x1d];
  FUN_109dcf0c8(lVar3,*(undefined1 *)((long)param_1 + 0x31c),*(undefined4 *)param_1[6],&uStack_54);
  uVar2 = (uint)lVar3;
  while( true ) {
    if (uVar2 < param_2) {
      return 0;
    }
    (**(code **)(*param_1 + 0xb8))(param_1);
    plVar4 = (long *)param_1[1];
    (**(code **)(*plVar4 + 0x18))(plVar4,&uStack_60,param_4);
    if (((ulong)plVar4 & 1) != 0) break;
    lVar5 = param_1[0x1d];
    FUN_109dcf0c8(lVar5,*(undefined1 *)((long)param_1 + 0x31c),*(undefined4 *)param_1[6],auStack_64)
    ;
    if (((uint)lVar3 < (uint)lVar5) &&
       (plVar4 = param_1, FUN_109dced54(param_1,(uint)lVar3 + 1,&uStack_60,param_4),
       (int)plVar4 != 0)) {
      return 1;
    }
    uVar1 = uStack_60;
    uVar7 = (ulong)uStack_54;
    uVar8 = *param_3;
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x30))(param_1);
    FUN_109dae7d4(uVar7,uVar8,uVar1,plVar4,lVar6);
    *param_3 = uVar7;
    uStack_54 = 0;
    lVar3 = param_1[0x1d];
    FUN_109dcf0c8(lVar3,*(undefined1 *)((long)param_1 + 0x31c),*(undefined4 *)param_1[6],&uStack_54)
    ;
    uVar2 = (uint)lVar3;
  }
  return 1;
}



/* Entry: 109dcee98; end: 109dcf0c7;  */

void FUN_109dcee98(long *param_1,byte *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined *apuStack_80 [2];
  long lStack_70;
  long lStack_68;
  undefined2 uStack_60;
  undefined1 *apuStack_58 [2];
  undefined *puStack_48;
  undefined2 uStack_38;
  
  plVar5 = (long *)param_1[1];
  (**(code **)(*plVar5 + 0x98))();
  if (plVar5 == (long *)0x0) {
    bVar4 = *param_2;
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        plVar5 = param_1;
        FUN_109dcee98(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
        plVar9 = param_1;
        FUN_109dcee98(param_1,*(undefined8 *)(param_2 + 0x18),param_3);
        if (plVar5 != (long *)0x0 || plVar9 != (long *)0x0) {
          if (plVar5 == (long *)0x0) {
            plVar5 = *(long **)(param_2 + 0x10);
          }
          if (plVar9 == (long *)0x0) {
            plVar9 = *(long **)(param_2 + 0x18);
          }
          uVar3 = *(uint *)(param_2 + 1);
          (**(code **)(*param_1 + 0x30))();
          param_1 = param_1 + 0x17;
          FUN_109d34148(param_1,0x20,3);
          *(undefined1 *)param_1 = 0;
          *(uint *)((long)param_1 + 1) =
               uVar3 & 0xffffff | (uint)*(byte *)((long)param_1 + 4) << 0x18;
          param_1[1] = 0;
          param_1[2] = (long)plVar5;
          param_1[3] = (long)plVar9;
          return;
        }
      }
    }
    else if (bVar4 != 4) {
      if (bVar4 == 3) {
        plVar5 = param_1;
        FUN_109dcee98(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
        if (plVar5 != (long *)0x0) {
          uVar3 = *(uint *)(param_2 + 1);
          (**(code **)(*param_1 + 0x30))();
          param_1 = param_1 + 0x17;
          FUN_109d34148(param_1,0x18,3);
          *(undefined1 *)param_1 = 3;
          *(uint *)((long)param_1 + 1) =
               uVar3 & 0xffffff | (uint)*(byte *)((long)param_1 + 4) << 0x18;
          param_1[1] = 0;
          param_1[2] = (long)plVar5;
          return;
        }
      }
      else {
        if (*(short *)(param_2 + 1) == 0) {
          lVar8 = *(long *)(param_2 + 0x10);
          (**(code **)(*param_1 + 0x30))();
          plVar5 = param_1 + 0x17;
          FUN_109d34148(plVar5,0x18,3);
          bVar4 = *(byte *)(param_1[0x12] + 0x12);
          *(undefined1 *)plVar5 = 2;
          *(uint *)((long)plVar5 + 1) =
               (uint)param_3 | (uint)bVar4 << 0x10 | (uint)*(byte *)((long)plVar5 + 4) << 0x18;
          plVar5[1] = 0;
          plVar5[2] = lVar8;
          return;
        }
        plVar5 = param_1;
        (**(code **)(*param_1 + 0x28))();
        piVar6 = (int *)plVar5[1];
        if (*piVar6 == 2) {
          lStack_70 = *(long *)(piVar6 + 2);
          lStack_68 = *(long *)(piVar6 + 4);
        }
        else {
          lStack_70 = *(long *)(piVar6 + 2);
          lVar8 = *(long *)(piVar6 + 4);
          uVar7 = (ulong)(lVar8 != 0);
          if (lVar8 != 0) {
            lStack_70 = lStack_70 + 1;
          }
          uVar1 = uVar7;
          if (uVar7 <= lVar8 - 1U) {
            uVar1 = lVar8 - 1U;
          }
          uVar2 = 0;
          if (lVar8 != 0) {
            uVar2 = uVar1;
          }
          lStack_68 = uVar2 - uVar7;
        }
        uStack_60 = 0x503;
        apuStack_80[0] = &UNK_10f5fd668;
        puStack_48 = &UNK_10f5fd688;
        uStack_38 = 0x302;
        plVar5 = param_1;
        apuStack_58[0] = (undefined1 *)apuStack_80;
        (**(code **)(*param_1 + 0x28))();
        FUN_109dd98f8(param_1,plVar5[0xc],apuStack_58,0,0);
      }
    }
  }
  return;
}



/* Entry: 109dcf0c8; end: 109dcf283;  */

undefined8 FUN_109dcf0c8(long param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
    uVar2 = 6;
    uVar3 = 2;
    switch(param_3) {
    case 0xc:
      uVar2 = 0;
      goto code_r0x000109dcf220;
    case 0xd:
      uVar3 = 4;
      goto code_r0x000109dcf200;
    default:
      goto LAB_109dcf280;
    case 0xf:
      goto code_r0x000109dcf170;
    case 0x17:
      goto code_r0x000109dcf158;
    case 0x1c:
      goto code_r0x000109dcf188;
    case 0x1d:
      uVar3 = 5;
      goto code_r0x000109dcf1f4;
    case 0x1e:
      goto code_r0x000109dcf22c;
    case 0x1f:
      uVar3 = 5;
      goto code_r0x000109dcf238;
    case 0x20:
      uVar3 = 5;
      goto code_r0x000109dcf268;
    case 0x21:
      break;
    case 0x22:
      if ((*(long *)(param_1 + 0x38) == 1) && (**(char **)(param_1 + 0x30) == '@')) {
        return 0;
      }
      uVar2 = 0xe;
      uVar3 = 5;
      break;
    case 0x23:
    case 0x29:
      goto code_r0x000109dcf140;
    case 0x24:
      goto code_r0x000109dcf164;
    case 0x26:
      goto code_r0x000109dcf14c;
    case 0x27:
      goto code_r0x000109dcf194;
    case 0x28:
      uVar3 = 6;
      goto code_r0x000109dcf1e8;
    case 0x2a:
      goto code_r0x000109dcf1a0;
    case 0x2b:
      goto code_r0x000109dcf17c;
    case 0x2c:
      uVar2 = 0x10;
      if (*(char *)(param_1 + 0x1e8) != '\0') {
        uVar2 = 0x11;
      }
      uVar3 = 6;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = 6;
    uVar3 = 1;
    switch(param_3) {
    case 0xc:
      uVar2 = 0;
      uVar3 = 5;
      break;
    case 0xd:
      uVar3 = 5;
code_r0x000109dcf200:
      uVar2 = 0x12;
      break;
    default:
      goto LAB_109dcf280;
    case 0xf:
code_r0x000109dcf170:
      uVar2 = 2;
      uVar3 = 6;
      break;
    case 0x17:
code_r0x000109dcf158:
      uVar2 = 0xb;
      uVar3 = 6;
      break;
    case 0x1c:
code_r0x000109dcf188:
      uVar2 = 3;
      uVar3 = 3;
      break;
    case 0x1d:
      uVar3 = 2;
code_r0x000109dcf1f4:
      uVar2 = 0xd;
      break;
    case 0x1e:
code_r0x000109dcf22c:
      uVar2 = 7;
      uVar3 = 1;
      break;
    case 0x1f:
      uVar3 = 2;
code_r0x000109dcf238:
      uVar2 = 0x13;
      break;
    case 0x20:
      uVar3 = 2;
code_r0x000109dcf268:
      uVar2 = 1;
      break;
    case 0x21:
      break;
    case 0x23:
    case 0x29:
code_r0x000109dcf140:
      uVar2 = 0xc;
      uVar3 = 3;
      break;
    case 0x24:
code_r0x000109dcf164:
      uVar2 = 10;
      uVar3 = 6;
      break;
    case 0x26:
code_r0x000109dcf14c:
      uVar2 = 8;
      uVar3 = 3;
      break;
    case 0x27:
code_r0x000109dcf194:
      uVar2 = 9;
      uVar3 = 3;
      break;
    case 0x28:
      uVar3 = 4;
code_r0x000109dcf1e8:
      uVar2 = 0xf;
      break;
    case 0x2a:
code_r0x000109dcf1a0:
      uVar2 = 4;
      uVar3 = 3;
      break;
    case 0x2b:
code_r0x000109dcf17c:
      uVar2 = 5;
      uVar3 = 3;
      break;
    case 0x2c:
      uVar2 = 0x10;
      if (*(char *)(param_1 + 0x1e8) != '\0') {
        uVar2 = 0x11;
      }
code_r0x000109dcf220:
      uVar3 = 4;
    }
  }
  uVar1 = uVar3;
  *param_4 = uVar2;
LAB_109dcf280:
  return uVar1;
}



/* Entry: 109dcf284; end: 109dcf47b;  */

void FUN_109dcf284(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = (uint)param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (*(uint *)((long)param_1 + 0xc) <= uVar1) {
    if ((param_2 >= puVar2 && param_2 <= puVar2 + (ulong)uVar1 * 7) &&
        (param_2 < puVar2 || puVar2 + (ulong)uVar1 * 7 != param_2)) {
      lVar3 = (long)param_2 - (long)puVar2;
      func_0x000107c2b01c(param_1,param_1 + 2,(ulong)uVar1 + 1,0x38);
      puVar2 = (undefined8 *)*param_1;
      param_2 = (undefined8 *)((long)puVar2 + lVar3);
    }
    else {
      func_0x000107c2b01c(param_1,param_1 + 2,(ulong)uVar1 + 1,0x38);
      puVar2 = (undefined8 *)*param_1;
    }
  }
  puVar2 = puVar2 + (ulong)(uint)param_1[1] * 7;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  puVar2[6] = param_2[6];
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  puVar2[5] = uVar9;
  puVar2[4] = uVar8;
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109dcf47c; end: 109dcf483;  */

void FUN_109dcf47c(void)

{
  return;
}



/* Entry: 109dcf484; end: 109dcf88b;  */

void FUN_109dcf484(long param_1,long *param_2)

{
  *(long **)(param_1 + 8) = param_2;
  (**(code **)(*param_2 + 0x10))(param_2,&UNK_10f5fd845,5,param_1,FUN_109dcf88c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa793,5,param_1,FUN_109dcf9fc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa78e,4,param_1,0x109dcfa28);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd84b,8,param_1,FUN_109dcfa54);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd854,4,param_1,FUN_109dd01c0);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd859,4,param_1,FUN_109dd02b0);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd85e,5,param_1,0x109dd0388);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd864,6,param_1,0x109dd0460);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd86b,9,param_1,0x109dd04ac);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd875,7,param_1,0x109dd0650);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd87d,8,param_1,0x109dd0764);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd886,7,param_1,0x109dd0878);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd88e,9,param_1,0x109dd098c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd898,4,param_1,0x109dd0b0c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd89d,5,param_1,FUN_109dd0cfc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd8a3,0xb,param_1,FUN_109dd0ebc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd8af,9,param_1,FUN_109dd0ec0);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd8b9,0xc,param_1,FUN_109dd0fd8);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd8c6,0xf,param_1,0x109dd102c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd8d6,0x11,param_1,0x109dd1080);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd8e8,0xf,param_1,0x109dd10d4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd8f8,0xc,param_1,FUN_109dd1128);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd905,0x10,param_1,FUN_109dd1478);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd916,0xf,param_1,0x109dd14c8);
                    /* WARNING: Could not recover jumptable at 0x000109dcf888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd926,0x10,param_1,0x109dd15a8);
  return;
}



/* Entry: 109dcf88c; end: 109dcf8b7;  */

bool FUN_109dcf88c(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 9) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x30))();
    FUN_109da967c();
    (**(code **)(*plVar2 + 0xa8))(plVar2,plVar3,0);
  }
  else {
    apuStack_88[0] = &UNK_10f5fd937;
    uStack_68 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar2[0xc],apuStack_88,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dcf8b8; end: 109dcf9fb;  */

bool FUN_109dcf8b8(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 9) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x30))();
    FUN_109da967c();
    (**(code **)(*plVar2 + 0xa8))(plVar2,plVar3,0);
  }
  else {
    apuStack_88[0] = &UNK_10f5fd937;
    uStack_68 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar2[0xc],apuStack_88,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dcf9fc; end: 109dcfa53;  */

bool FUN_109dcf9fc(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 9) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x30))();
    FUN_109da967c();
    (**(code **)(*plVar2 + 0xa8))(plVar2,plVar3,0);
  }
  else {
    apuStack_88[0] = &UNK_10f5fd937;
    uStack_68 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar2[0xc],apuStack_88,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dcfa54; end: 109dcff47;  */

undefined8 FUN_109dcfa54(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  char *pcVar9;
  bool bVar10;
  ulong uVar11;
  long *plVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined *apuStack_68 [4];
  undefined2 uStack_48;
  
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0x28))();
  if (*(int *)plVar4[1] == 2) {
LAB_109dcfab0:
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0x28))();
    piVar7 = (int *)plVar4[1];
    if (*piVar7 == 2) {
      piVar13 = *(int **)(piVar7 + 2);
      uVar14 = *(ulong *)(piVar7 + 4);
    }
    else {
      piVar13 = *(int **)(piVar7 + 2);
      lVar2 = *(long *)(piVar7 + 4);
      uVar11 = (ulong)(lVar2 != 0);
      if (lVar2 != 0) {
        piVar13 = (int *)((long)piVar13 + 1);
      }
      uVar15 = uVar11;
      if (uVar11 <= lVar2 - 1U) {
        uVar15 = lVar2 - 1U;
      }
      uVar14 = 0;
      if (lVar2 != 0) {
        uVar14 = uVar15;
      }
      uVar14 = uVar14 - uVar11;
    }
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0x28))();
    if (*(int *)plVar4[1] == 0x19) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      if (*(int *)plVar4[1] != 3) {
        apuStack_68[0] = &UNK_10f5fd967;
        goto LAB_109dcfedc;
      }
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      lVar2 = *(long *)(plVar4[1] + 8);
      lVar8 = *(long *)(plVar4[1] + 0x10);
      uVar15 = (ulong)(lVar8 != 0);
      uVar11 = uVar15;
      if (uVar15 <= lVar8 - 1U) {
        uVar11 = lVar8 - 1U;
      }
      uVar1 = 0;
      if (lVar8 != 0) {
        uVar1 = uVar11;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      lVar8 = uVar1 - uVar15;
      if (lVar8 == 0) {
LAB_109dcfcbc:
        uVar6 = 8;
      }
      else {
        bVar10 = false;
        uVar6 = 0;
        pcVar9 = (char *)(lVar2 + uVar15);
        do {
          switch(*pcVar9) {
          case 'a':
            break;
          case 'b':
            if ((uVar6 >> 3 & 1) != 0) {
code_r0x000109dcff30:
              apuStack_68[0] = &UNK_10f5fd9ea;
              goto LAB_109dcfedc;
            }
            uVar6 = uVar6 & 0xfffffff3 | 1;
            break;
          case 'c':
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'o':
          case 'p':
          case 'q':
          case 't':
          case 'u':
          case 'v':
LAB_109dcff3c:
            apuStack_68[0] = &UNK_10f5fda11;
            goto LAB_109dcfedc;
          case 'd':
            if ((uVar6 & 1) != 0) goto code_r0x000109dcff30;
            uVar5 = uVar6 & 0xffffff76;
            uVar3 = 0xc;
            if ((uVar6 & 0x20) != 0) {
              uVar3 = 8;
            }
            goto code_r0x000109dcfc78;
          case 'i':
            uVar6 = uVar6 | 0x200;
            break;
          case 'n':
            uVar6 = uVar6 & 0xfffffffb | 0x20;
            break;
          case 'r':
            bVar10 = false;
            uVar5 = 0x88;
            if ((uVar6 & 2) != 0) {
              uVar5 = 0x80;
            }
            uVar6 = (uVar5 | uVar6 >> 3 & 4) ^ 4 | uVar6;
            break;
          case 's':
            uVar5 = uVar6 & 0xffffff67;
            uVar3 = 0x1c;
            if ((uVar6 & 0x20) != 0) {
              uVar3 = 0x18;
            }
code_r0x000109dcfc78:
            uVar6 = uVar3 | uVar5;
            break;
          case 'w':
            bVar10 = true;
            uVar6 = uVar6 & 0xffffff7f;
            break;
          case 'x':
            uVar5 = 6;
            if ((uVar6 & 0x20) != 0) {
              uVar5 = 2;
            }
            uVar6 = uVar5 | uVar6;
            if (!bVar10) {
              uVar6 = uVar6 | 0x80;
            }
            break;
          case 'y':
            uVar6 = uVar6 | 0xc0;
            break;
          default:
            if (*pcVar9 != 'D') goto LAB_109dcff3c;
            uVar6 = uVar6 | 0x100;
          }
          pcVar9 = pcVar9 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        if (uVar6 == 0) goto LAB_109dcfcbc;
      }
      uVar5 = (int)(uVar6 << 0x1e) >> 0x1f;
      uVar5 = uVar5 & 0x20000000 | uVar5 & 0x20 | (uVar6 >> 3 & 1) << 6;
      uVar3 = uVar5 | 0x80;
      if ((uVar6 & 5) != 1) {
        uVar3 = uVar5;
      }
      uVar5 = uVar3 & 0xfffff000 | uVar3 & 0x7ff | (uVar6 >> 5 & 1) << 0xb;
      if (((uVar6 >> 8 & 1) != 0) ||
         ((5 < uVar14 && (*piVar13 == 0x6265642e && (short)piVar13[1] == 0x6775)))) {
        uVar5 = uVar5 | 0x2000000;
      }
      if ((uVar6 & 0x2d0) != 0xc0) {
        uVar5 = uVar5 | ((uVar6 & 0xd0) << 0x18 | uVar6 & 0x200) ^ 0xc0000000;
      }
    }
    else {
      uVar5 = 0xc0000040;
    }
    uStack_69 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0x28))();
    if (*(int *)plVar4[1] == 0x19) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      if (*(int *)plVar4[1] != 2) {
        apuStack_68[0] = &UNK_10f5fd984;
        goto LAB_109dcfedc;
      }
      uVar11 = param_1;
      FUN_109dcff48(param_1,&uStack_69);
      if ((uVar11 & 1) != 0) {
        return 1;
      }
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      if (*(int *)plVar4[1] != 0x19) {
        apuStack_68[0] = &UNK_10f5fd9ce;
        goto LAB_109dcfedc;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0xc0))(plVar4,&uStack_80);
      if ((int)plVar4 != 0) goto LAB_109dcfe08;
      uVar5 = uVar5 | 0x1000;
    }
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0x28))();
    if (*(int *)plVar4[1] == 9) {
      uVar6 = 4;
      if (uVar5 >> 0x1e != 1) {
        uVar6 = 0x13;
      }
      if ((uVar5 & 0x20000000) != 0) {
        uVar6 = 2;
      }
      if ((uVar6 & 0xfffffffe) == 2) {
        plVar4 = *(long **)(param_1 + 8);
        (**(code **)(*plVar4 + 0x30))();
        if ((int)plVar4[6] == 0x23 || (int)plVar4[6] == 1) {
          uVar5 = uVar5 | 0x20000;
        }
      }
      FUN_109dcf8b8(param_1,piVar13,uVar14,uVar5,uVar6,uStack_80,uStack_78,uStack_69);
      return 0;
    }
    apuStack_68[0] = &UNK_10f5fc1d0;
  }
  else {
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0x28))();
    if (*(int *)plVar4[1] == 3) goto LAB_109dcfab0;
LAB_109dcfe08:
    apuStack_68[0] = &UNK_10f5fc428;
  }
LAB_109dcfedc:
  uStack_48 = 0x103;
  plVar12 = *(long **)(param_1 + 8);
  plVar4 = plVar12;
  (**(code **)(*plVar12 + 0x28))();
  FUN_109dd98f8(plVar12,plVar4[0xc],apuStack_68,0,0);
  return 1;
}



/* Entry: 109dcff48; end: 109dd01bf;  */

undefined8 FUN_109dcff48(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined1 uVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  undefined *apuStack_70 [2];
  long *plStack_60;
  long lStack_58;
  undefined2 uStack_50;
  undefined1 *apuStack_48 [2];
  undefined *puStack_38;
  undefined2 uStack_28;
  
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0x28))();
  piVar6 = (int *)plVar4[1];
  if (*piVar6 == 2) {
    plStack_60 = *(long **)(piVar6 + 2);
    lStack_58 = *(long *)(piVar6 + 4);
  }
  else {
    plStack_60 = *(long **)(piVar6 + 2);
    lVar3 = *(long *)(piVar6 + 4);
    uVar7 = (ulong)(lVar3 != 0);
    if (lVar3 != 0) {
      plStack_60 = (long *)((long)plStack_60 + 1);
    }
    uVar1 = uVar7;
    if (uVar7 <= lVar3 - 1U) {
      uVar1 = lVar3 - 1U;
    }
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = uVar1;
    }
    lStack_58 = uVar2 - uVar7;
  }
  if (lStack_58 < 9) {
    if (lStack_58 == 6) {
      if ((int)*plStack_60 != 0x6577656e || *(short *)((long)plStack_60 + 4) != 0x7473)
      goto LAB_109dd0120;
      uVar5 = 7;
    }
    else if (lStack_58 == 7) {
      if ((int)*plStack_60 == 0x63736964 && *(int *)((long)plStack_60 + 3) == 0x64726163) {
        uVar5 = 2;
      }
      else {
        if ((int)*plStack_60 != 0x6772616c || *(int *)((long)plStack_60 + 3) != 0x74736567)
        goto LAB_109dd0120;
        uVar5 = 6;
      }
    }
    else {
      if ((lStack_58 != 8) || (*plStack_60 != 0x796c6e6f5f656e6f)) goto LAB_109dd0120;
      uVar5 = 1;
    }
  }
  else if (lStack_58 == 9) {
    if (*plStack_60 != 0x7a69735f656d6173 || (char)plStack_60[1] != 'e') goto LAB_109dd0120;
    uVar5 = 3;
  }
  else if (lStack_58 == 0xb) {
    if (*plStack_60 != 0x746169636f737361 || *(long *)((long)plStack_60 + 3) != 0x657669746169636f)
    goto LAB_109dd0120;
    uVar5 = 5;
  }
  else {
    if ((lStack_58 != 0xd) ||
       (*plStack_60 != 0x6e6f635f656d6173 || *(long *)((long)plStack_60 + 5) != 0x73746e65746e6f63))
    {
LAB_109dd0120:
      *param_2 = 0;
      uStack_50 = 0x503;
      apuStack_70[0] = &UNK_10f5fda52;
      puStack_38 = &DAT_10f638984;
      uStack_28 = 0x302;
      plVar8 = *(long **)(param_1 + 8);
      plVar4 = plVar8;
      apuStack_48[0] = (undefined1 *)apuStack_70;
      (**(code **)(*plVar8 + 0x28))();
      FUN_109dd98f8(plVar8,plVar4[0xc],apuStack_48,0,0);
      return 1;
    }
    uVar5 = 4;
  }
  *param_2 = uVar5;
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  return 0;
}



/* Entry: 109dd01c0; end: 109dd02af;  */

long * FUN_109dd01c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_40);
  if ((int)plVar1 == 0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x30))();
    uStack_48 = 0x105;
    puStack_68 = puStack_40;
    uStack_60 = uStack_38;
    FUN_109da7538();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x130))();
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  }
  else {
    puStack_68 = &UNK_10f5fc428;
    uStack_48 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar2[0xc],&puStack_68,0,0);
  }
  return plVar1;
}



/* Entry: 109dd02b0; end: 109dd0cfb;  */

undefined8 FUN_109dd02b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *apuStack_50 [4];
  undefined2 uStack_30;
  undefined1 auStack_28 [8];
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x100))(plVar1,auStack_28);
  if (((ulong)plVar1 & 1) == 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    if (*(int *)plVar1[1] == 9) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x38))();
      (**(code **)(*plVar1 + 0x138))();
      return 0;
    }
    apuStack_50[0] = &UNK_10f5fc1d0;
    uStack_30 = 0x103;
    plVar2 = *(long **)(param_1 + 8);
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x28))();
    FUN_109dd98f8(plVar2,plVar1[0xc],apuStack_50,0,0);
  }
  return 1;
}



/* Entry: 109dd0cfc; end: 109dd0ebb;  */

undefined8 FUN_109dd0cfc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  if (*(int *)plVar1[1] == 9) {
LAB_109dd0d60:
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    uVar2 = 0;
  }
  else {
    puStack_40 = (undefined *)0x0;
    uStack_38 = 0;
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_40);
    while (((ulong)plVar1 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x30))();
      uStack_48 = 0x105;
      puStack_68 = puStack_40;
      uStack_60 = uStack_38;
      FUN_109da7538();
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x38))();
      (**(code **)(*plVar1 + 0x120))();
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      if (*(int *)plVar1[1] == 9) goto LAB_109dd0d60;
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      if (*(int *)plVar1[1] != 0x19) {
        puStack_68 = &UNK_10f5fc1d0;
        goto LAB_109dd0e6c;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      puStack_40 = (undefined *)0x0;
      uStack_38 = 0;
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_40);
    }
    puStack_68 = &UNK_10f5fc428;
LAB_109dd0e6c:
    uStack_48 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar1 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar1[0xc],&puStack_68,0,0);
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 109dd0ebc; end: 109dd0ebf;  */

undefined8 FUN_109dd0ebc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined2 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = (undefined *)0x0;
  uStack_48 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  lVar6 = plVar1[0xc];
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_50);
  if ((int)plVar1 == 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    if (*(int *)plVar1[1] == 0x19) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      puStack_88 = (undefined *)0x0;
      uStack_80 = 0;
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      lVar7 = plVar1[0xc];
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_88);
      if ((int)plVar1 != 0) goto LAB_109dda108;
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      if (*(int *)plVar1[1] == 0x19) {
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        uVar2 = *(ulong *)(param_1 + 8);
        puStack_78 = &UNK_10f5fef5b;
        uStack_58 = 0x103;
        func_0x000109dd9b2c(uVar2,&uStack_90,&puStack_78);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        plVar1 = *(long **)(param_1 + 8);
        (**(code **)(*plVar1 + 0x28))();
        if (*(int *)plVar1[1] == 9) {
          plVar3 = *(long **)(param_1 + 8);
          (**(code **)(*plVar3 + 0x30))();
          uStack_58 = 0x105;
          puStack_78 = puStack_50;
          uStack_70 = uStack_48;
          FUN_109da7538();
          plVar4 = *(long **)(param_1 + 8);
          (**(code **)(*plVar4 + 0x30))();
          uStack_58 = 0x105;
          puStack_78 = puStack_88;
          uStack_70 = uStack_80;
          FUN_109da7538();
          plVar1 = *(long **)(param_1 + 8);
          (**(code **)(*plVar1 + 0x38))();
          plVar5 = *(long **)(param_1 + 8);
          (**(code **)(*plVar5 + 0x30))();
          FUN_109dae8f4(plVar3,0,plVar5,lVar6);
          plVar5 = *(long **)(param_1 + 8);
          (**(code **)(*plVar5 + 0x30))();
          FUN_109dae8f4(plVar4,0,plVar5,lVar7);
          (**(code **)(*plVar1 + 0x478))(plVar1,plVar3,plVar4,uStack_90);
          return 0;
        }
        puStack_78 = &UNK_10f5fc1d0;
        goto LAB_109dda2cc;
      }
    }
    puStack_78 = &UNK_10f5feea4;
  }
  else {
LAB_109dda108:
    puStack_78 = &UNK_10f5fc428;
  }
LAB_109dda2cc:
  uStack_58 = 0x103;
  plVar5 = *(long **)(param_1 + 8);
  plVar1 = plVar5;
  (**(code **)(*plVar5 + 0x28))();
  FUN_109dd98f8(plVar5,plVar1[0xc],&puStack_78,0,0);
  return 1;
}



/* Entry: 109dd0ec0; end: 109dd0fd7;  */

undefined8 FUN_109dd0ec0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_40);
  if (((ulong)plVar1 & 1) == 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    if (*(int *)plVar1[1] == 9) {
      (**(code **)(**(long **)(param_1 + 8) + 0x30))();
      uStack_48 = 0x105;
      puStack_68 = puStack_40;
      uStack_60 = uStack_38;
      FUN_109da7538();
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x38))();
      (**(code **)(*plVar1 + 0x408))();
      return 0;
    }
    puStack_68 = &UNK_10f5fc1d0;
    uStack_48 = 0x103;
    plVar2 = *(long **)(param_1 + 8);
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x28))();
    FUN_109dd98f8(plVar2,plVar1[0xc],&puStack_68,0,0);
  }
  return 1;
}



/* Entry: 109dd0fd8; end: 109dd1127;  */

undefined8 FUN_109dd0fd8(long param_1)

{
  long *plVar1;
  
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x38))();
  (**(code **)(*plVar1 + 0x410))();
  return 0;
}



/* Entry: 109dd1128; end: 109dd1477;  */

undefined8 FUN_109dd1128(ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined2 uStack_6a;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0xc0))(plVar1,&uStack_40);
  if (((ulong)plVar1 & 1) == 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    if (*(int *)plVar1[1] == 0x19) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      uStack_6a = 0;
      uVar2 = param_1;
      func_0x000109dd12e0(param_1,(long)&uStack_6a + 1,&uStack_6a);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      if (*(int *)plVar1[1] == 0x19) {
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        uVar2 = param_1;
        func_0x000109dd12e0(param_1,(long)&uStack_6a + 1,&uStack_6a);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      if (*(int *)plVar1[1] == 9) {
        (**(code **)(**(long **)(param_1 + 8) + 0x30))();
        uStack_48 = 0x105;
        puStack_68 = uStack_40;
        uStack_60 = uStack_38;
        FUN_109da7538();
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        plVar1 = *(long **)(param_1 + 8);
        (**(code **)(*plVar1 + 0x38))();
        (**(code **)(*plVar1 + 0x468))();
        return 0;
      }
      puStack_68 = &UNK_10f5fc1d0;
    }
    else {
      puStack_68 = &UNK_10f5fdb98;
    }
    uStack_48 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar1 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar1[0xc],&puStack_68,0,0);
  }
  return 1;
}



/* Entry: 109dd1478; end: 109dd15fb;  */

undefined8 FUN_109dd1478(long param_1)

{
  long *plVar1;
  
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x38))();
  (**(code **)(*plVar1 + 0x470))();
  return 0;
}



/* Entry: 109dd15fc; end: 109dd1603;  */

void FUN_109dd15fc(void)

{
  return;
}



/* Entry: 109dd1604; end: 109dd2757;  */

void FUN_109dd1604(long param_1,long *param_2)

{
  *(long **)(param_1 + 8) = param_2;
  (**(code **)(*param_2 + 0x10))(param_2,&UNK_10f5fdc1d,10,param_1,0x109dd211c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc28,5,param_1,0x109dd2230);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc2e,0x10,param_1,0x109dd2390);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc3f,5,param_1,0x109dd2554);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc45,0x18,param_1,0x109dd2698);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc5e,5,param_1,FUN_109dd2758);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc64,5,param_1,FUN_109dd2758);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd84b,8,param_1,FUN_109dd2fe4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc6a,0xc,param_1,FUN_109dd2fe8);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc77,0xb,param_1,0x109dd31a8);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc83,9,param_1,FUN_109dd322c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc8d,0x12,param_1,FUN_109dd32f4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdca0,0x11,param_1,FUN_109dd3728);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa7ae,5,param_1,FUN_109dd37dc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdcb2,9,param_1,0x109dd3ac8);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdcbc,0xc,param_1,FUN_109dd3ee4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdcc9,0x10,param_1,0x109dd40a4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa78e,4,param_1,FUN_109dd4164);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdcda,6,param_1,FUN_109dd430c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdce1,0xb,param_1,0x109dd4334);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdced,0xc,param_1,0x109dd435c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdcfa,8,param_1,0x109dd4384);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa793,5,param_1,0x109dd43ac);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd03,0xb,param_1,0x109dd43d4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd0f,5,param_1,0x109dd43fc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd15,0xd,param_1,0x109dd4424);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd23,0xd,param_1,0x109dd444c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd31,0x14,param_1,0x109dd4474);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd46,0xe,param_1,FUN_109dd449c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd55,10,param_1,FUN_109dd479c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd60,9,param_1,0x109dd47c4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd6a,9,param_1,0x109dd47ec);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd74,0xe,param_1,0x109dd4814);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd83,0xe,param_1,0x109dd483c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdd92,0x18,param_1,0x109dd4864);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fddab,0x1e,param_1,0x109dd488c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fddca,0x12,param_1,0x109dd48b4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdddd,0x13,param_1,0x109dd48dc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fddf1,0xe,param_1,0x109dd4904);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fde00,0xb,param_1,0x109dd492c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fde0c,0x11,param_1,0x109dd4954);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fde1e,0x10,param_1,0x109dd497c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fde2f,0xe,param_1,0x109dd49a4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fde3e,0xe,param_1,0x109dd49cc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fde4d,0xf,param_1,0x109dd49f8);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fde5d,0x13,param_1,0x109dd4a20);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fde71,0x12,param_1,0x109dd4a48);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fde84,0x10,param_1,0x109dd4a74);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fde95,0x14,param_1,0x109dd4a9c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdeaa,0x14,param_1,0x109dd4ac4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdebf,0x11,param_1,0x109dd4aec);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fded1,0xe,param_1,0x109dd4b14);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdee0,0x13,param_1,0x109dd4b3c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdef4,0x13,param_1,0x109dd4b64);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf08,0xd,param_1,0x109dd4b8c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf16,0xf,param_1,0x109dd4bb4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf26,0xd,param_1,0x109dd4be0);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf34,0xc,param_1,0x109dd4c08);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf41,0xc,param_1,0x109dd4c30);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa7b4,6,param_1,0x109dd4c5c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd845,5,param_1,0x109dd4c84);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf4e,0x11,param_1,0x109dd4cac);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf60,4,param_1,0x109dd4cd4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf65,6,param_1,FUN_109dd4cfc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf6c,0x14,param_1,FUN_109dd4d20);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf81,0x11,param_1,FUN_109dd56b4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf93,0x10,param_1,0x109dd56bc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdfa4,0x13,param_1,0x109dd56c4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdfb8,0xe,param_1,FUN_109dd56cc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd8a3,0xb,param_1,FUN_109dd5a14);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 109dd2758; end: 109dd28af;  */

void FUN_109dd2758(long param_1,int *param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  
  if (param_3 == 5) {
    bVar1 = *param_2 == 0x6d75642e && (char)param_2[1] == 'p';
  }
  else {
    bVar1 = false;
  }
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  if (*(int *)plVar2[1] == 3) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x28))();
    if (*(int *)plVar2[1] == 9) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      if (bVar1) {
        apuStack_58[0] = &UNK_10f5fe1e9;
      }
      else {
        apuStack_58[0] = &UNK_10f5fe20a;
      }
      uStack_38 = 0x103;
      (**(code **)(**(long **)(param_1 + 8) + 0xa8))
                (*(long **)(param_1 + 8),param_4,apuStack_58,0,0);
      return;
    }
    apuStack_58[0] = &UNK_10f5fe1b8;
  }
  else {
    apuStack_58[0] = &UNK_10f5fe188;
  }
  uStack_38 = 0x103;
  plVar3 = *(long **)(param_1 + 8);
  plVar2 = plVar3;
  (**(code **)(*plVar3 + 0x28))();
  FUN_109dd98f8(plVar3,plVar2[0xc],apuStack_58,0,0);
  return;
}



/* Entry: 109dd28b0; end: 109dd2fe3;  */

/* WARNING: Removing unreachable block (ram,0x000109dd2ed4) */

undefined8 FUN_109dd28b0(long param_1)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *aplStack_190 [4];
  undefined2 uStack_170;
  undefined *apuStack_168 [2];
  long *plStack_158;
  long lStack_150;
  undefined2 uStack_148;
  undefined **appuStack_140 [4];
  undefined2 uStack_120;
  long *plStack_118;
  undefined1 uStack_109;
  undefined1 auStack_108 [4];
  undefined1 auStack_104 [4];
  long *plStack_100;
  long lStack_f8;
  int *piStack_f0;
  undefined8 uStack_e8;
  undefined8 ******ppppppuStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long **pplStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0x28))();
  uVar13 = plVar4[0xc];
  uStack_c8 = 0;
  uStack_c0 = 0;
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0xc0))(plVar4,&uStack_c8);
  if ((int)plVar4 == 0) {
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0x28))();
    uVar7 = uStack_c0;
    uVar5 = uStack_c8;
    if (*(int *)plVar4[1] == 0x19) {
      if (0x7ffffffffffffff7 < uStack_c0) goto LAB_109dd2f30;
      if (uStack_c0 < 0x17) {
        uStack_d0 = CONCAT17((char)uStack_c0,(undefined7)uStack_d0);
        pppppppuVar6 = &ppppppuStack_e0;
        if (uStack_c0 != 0) goto LAB_109dd2a04;
      }
      else {
        pppppppuVar1 = (undefined8 *******)0x19;
        if ((uStack_c0 | 7) != 0x17) {
          pppppppuVar1 = (undefined8 *******)((uStack_c0 | 7) + 1);
        }
        pppppppuVar6 = pppppppuVar1;
        __Znwm();
        uStack_d0 = (ulong)pppppppuVar1 | 0x8000000000000000;
        uStack_d8 = uVar7;
        ppppppuStack_e0 = pppppppuVar6;
LAB_109dd2a04:
        _memmove(pppppppuVar6,uVar5,uVar7);
      }
      *(undefined1 *)((long)pppppppuVar6 + uVar7) = 0;
      puVar11 = &DAT_10f68e8ee;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppuStack_e0,&DAT_10f68e8ee,1);
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      (**(code **)(*plVar4 + 0x18))();
      func_0x0001092b2894(&ppppppuStack_e0,plVar4,(undefined *)((long)plVar4 + (long)puVar11));
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      if (*(int *)plVar4[1] == 9) {
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        piStack_f0 = (int *)0x0;
        uStack_e8 = 0;
        plStack_100 = (long *)0x0;
        lStack_f8 = 0;
        pppppppuVar1 = (undefined8 *******)ppppppuStack_e0;
        if (-1 < (long)uStack_d0._7_1_) {
          pppppppuVar1 = &ppppppuStack_e0;
        }
        uVar7 = uStack_d8;
        if (-1 < (long)uStack_d0) {
          uVar7 = (long)uStack_d0._7_1_;
        }
        FUN_109ddd85c(&plStack_118,pppppppuVar1,uVar7,&piStack_f0,&plStack_100,auStack_108,
                      &uStack_109,auStack_104);
        plVar4 = plStack_118;
        if (plStack_118 == (long *)0x0) {
          plVar4 = *(long **)(param_1 + 8);
          (**(code **)(*plVar4 + 0x30))();
          if (*(char *)((long)plVar4 + 0x2f) < '\0') {
            func_0x000107c3192c(&plStack_b0,plVar4[3],plVar4[4]);
          }
          else {
            uStack_a8 = plVar4[4];
            plStack_b0 = (long *)plVar4[3];
            lStack_a0 = plVar4[5];
          }
          lVar2 = lStack_f8;
          plVar10 = plStack_100;
          lStack_90 = plVar4[7];
          lStack_98 = plVar4[6];
          lStack_88 = plVar4[8];
          if (((uint)lStack_98 & 0xfffffffd) != 0x15) {
            if (lStack_f8 == 0xc) {
              if (*plStack_100 == 0x5f74736e6f635f5f && (int)plStack_100[1] == 0x6c616f63) {
                puVar11 = &UNK_10f5fadbd;
                uVar5 = 7;
                goto LAB_109dd2d0c;
              }
            }
            else if (lStack_f8 == 0xd) {
              if (*plStack_100 == 0x6f63747865745f5f &&
                  *(long *)((long)plStack_100 + 5) == 0x746e5f6c616f6374) {
                puVar11 = &UNK_10f5fad42;
              }
              else {
                if (*plStack_100 != 0x6f63617461645f5f ||
                    *(long *)((long)plStack_100 + 5) != 0x746e5f6c616f6361) goto LAB_109dd2e30;
                puVar11 = &UNK_10f5fad49;
              }
              uVar5 = 6;
LAB_109dd2d0c:
              if ((uVar13 == 0) || (uVar7 = uVar13, _strlen(), uVar7 == 0)) {
                uVar14 = 0;
LAB_109dd2d6c:
                lVar12 = -1;
              }
              else {
                uVar8 = uVar13;
                _memchr(uVar13,0x2c,uVar7);
                uVar14 = 0;
                if (uVar8 != 0) {
                  uVar14 = (uVar8 - uVar13) + 1;
                }
                if (uVar7 < uVar14 || uVar7 - uVar14 == 0) {
                  uVar14 = (uVar8 - uVar13) + 1;
                  goto LAB_109dd2d6c;
                }
                lVar9 = uVar13 + uVar14;
                _memchr(lVar9,0x2c,uVar7 - uVar14);
                lVar12 = lVar9 - uVar13;
                if (lVar9 == 0) {
                  lVar12 = -1;
                }
              }
              plVar4 = *(long **)(param_1 + 8);
              uStack_148 = 0x503;
              apuStack_168[0] = &UNK_10f5fe283;
              plStack_158 = plVar10;
              lStack_150 = lVar2;
              aplStack_190[0] = (long *)&UNK_10f5fe28d;
              uStack_170 = 0x103;
              FUN_109d35b30(appuStack_140,apuStack_168,aplStack_190);
              (**(code **)(*plVar4 + 0xa8))
                        (plVar4,uVar13,appuStack_140,uVar13 + uVar14,uVar13 + lVar12);
              plVar4 = *(long **)(param_1 + 8);
              uStack_148 = 0x503;
              apuStack_168[0] = &UNK_10f5fe29d;
              aplStack_190[0] = (long *)&DAT_10f3b3c06;
              uStack_170 = 0x103;
              plStack_158 = (long *)puVar11;
              lStack_150 = uVar5;
              FUN_109d35b30(appuStack_140,apuStack_168,aplStack_190);
              (**(code **)(*plVar4 + 0xa0))
                        (plVar4,uVar13,appuStack_140,uVar13 + uVar14,uVar13 + lVar12);
            }
          }
LAB_109dd2e30:
          plVar4 = *(long **)(param_1 + 8);
          (**(code **)(*plVar4 + 0x38))();
          plVar10 = *(long **)(param_1 + 8);
          (**(code **)(*plVar10 + 0x30))();
          FUN_109da85ec();
          (**(code **)(*plVar4 + 0xa8))(plVar4,plVar10,0);
          uVar5 = 0;
        }
        else {
          plStack_118 = (long *)0x0;
          pplStack_b8 = &plStack_b0;
          plStack_b0 = &lStack_a0;
          uStack_a8 = 0x200000000;
          aplStack_190[0] = plVar4;
          FUN_109d39128(aplStack_190,&pplStack_b8);
          if (aplStack_190[0] != (long *)0x0) {
            (**(code **)(*aplStack_190[0] + 8))();
          }
          FUN_109d39d34(apuStack_168,plStack_b0,plStack_b0 + (uStack_a8 & 0xffffffff) * 3,
                        &DAT_10f68f57e,1);
          FUN_109d39e4c(&plStack_b0);
          uStack_120 = 0x104;
          uVar5 = *(undefined8 *)(param_1 + 8);
          appuStack_140[0] = apuStack_168;
          FUN_109dd98f8(uVar5,uVar13,appuStack_140,0,0);
          if ((long)plStack_158 < 0) {
            __ZdlPv(apuStack_168[0]);
          }
          if (plStack_118 != (long *)0x0) {
            (**(code **)(*plStack_118 + 8))();
          }
        }
      }
      else {
        plStack_b0 = (long *)&UNK_10f5fe25a;
        lStack_90 = CONCAT62(lStack_90._2_6_,0x103);
        plVar10 = *(long **)(param_1 + 8);
        plVar4 = plVar10;
        (**(code **)(*plVar10 + 0x28))();
        FUN_109dd98f8(plVar10,plVar4[0xc],&plStack_b0,0,0);
        uVar5 = 1;
      }
      if ((long)uStack_d0 < 0) {
        __ZdlPv(ppppppuStack_e0);
      }
    }
    else {
      plStack_b0 = (long *)&UNK_10f5fe25a;
      lStack_90 = CONCAT62(lStack_90._2_6_,0x103);
      plVar10 = *(long **)(param_1 + 8);
      plVar4 = plVar10;
      (**(code **)(*plVar10 + 0x28))();
      FUN_109dd98f8(plVar10,plVar4[0xc],&plStack_b0,0,0);
      uVar5 = 1;
    }
  }
  else {
    plStack_b0 = (long *)&UNK_10f5fe22b;
    lStack_90 = CONCAT62(lStack_90._2_6_,0x103);
    uVar5 = *(undefined8 *)(param_1 + 8);
    FUN_109dd98f8(uVar5,uVar13,&plStack_b0,0,0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar5;
  }
  ___stack_chk_fail();
LAB_109dd2f30:
  func_0x000104c4f6b8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109dd2f38);
  (*pcVar3)();
}



/* Entry: 109dd2fe4; end: 109dd2fe7;  */

/* WARNING: Removing unreachable block (ram,0x000109dd2ed4) */

undefined8 FUN_109dd2fe4(long param_1)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *******pppppppuVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *aplStack_190 [4];
  undefined2 uStack_170;
  undefined *apuStack_168 [2];
  long *plStack_158;
  long lStack_150;
  undefined2 uStack_148;
  undefined **appuStack_140 [4];
  undefined2 uStack_120;
  long *plStack_118;
  undefined1 uStack_109;
  undefined1 auStack_108 [4];
  undefined1 auStack_104 [4];
  long *plStack_100;
  long lStack_f8;
  int *piStack_f0;
  undefined8 uStack_e8;
  undefined8 ******ppppppuStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long **pplStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0x28))();
  uVar13 = plVar4[0xc];
  uStack_c8 = 0;
  uStack_c0 = 0;
  plVar4 = *(long **)(param_1 + 8);
  (**(code **)(*plVar4 + 0xc0))(plVar4,&uStack_c8);
  if ((int)plVar4 == 0) {
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0x28))();
    uVar7 = uStack_c0;
    uVar5 = uStack_c8;
    if (*(int *)plVar4[1] == 0x19) {
      if (0x7ffffffffffffff7 < uStack_c0) goto LAB_109dd2f30;
      if (uStack_c0 < 0x17) {
        uStack_d0 = CONCAT17((char)uStack_c0,(undefined7)uStack_d0);
        pppppppuVar6 = &ppppppuStack_e0;
        if (uStack_c0 != 0) goto LAB_109dd2a04;
      }
      else {
        pppppppuVar1 = (undefined8 *******)0x19;
        if ((uStack_c0 | 7) != 0x17) {
          pppppppuVar1 = (undefined8 *******)((uStack_c0 | 7) + 1);
        }
        pppppppuVar6 = pppppppuVar1;
        __Znwm();
        uStack_d0 = (ulong)pppppppuVar1 | 0x8000000000000000;
        uStack_d8 = uVar7;
        ppppppuStack_e0 = pppppppuVar6;
LAB_109dd2a04:
        _memmove(pppppppuVar6,uVar5,uVar7);
      }
      *(undefined1 *)((long)pppppppuVar6 + uVar7) = 0;
      puVar11 = &DAT_10f68e8ee;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppuStack_e0,&DAT_10f68e8ee,1);
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      (**(code **)(*plVar4 + 0x18))();
      func_0x0001092b2894(&ppppppuStack_e0,plVar4,(undefined *)((long)plVar4 + (long)puVar11));
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      if (*(int *)plVar4[1] == 9) {
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        piStack_f0 = (int *)0x0;
        uStack_e8 = 0;
        plStack_100 = (long *)0x0;
        lStack_f8 = 0;
        pppppppuVar1 = (undefined8 *******)ppppppuStack_e0;
        if (-1 < (long)uStack_d0._7_1_) {
          pppppppuVar1 = &ppppppuStack_e0;
        }
        uVar7 = uStack_d8;
        if (-1 < (long)uStack_d0) {
          uVar7 = (long)uStack_d0._7_1_;
        }
        FUN_109ddd85c(&plStack_118,pppppppuVar1,uVar7,&piStack_f0,&plStack_100,auStack_108,
                      &uStack_109,auStack_104);
        plVar4 = plStack_118;
        if (plStack_118 == (long *)0x0) {
          plVar4 = *(long **)(param_1 + 8);
          (**(code **)(*plVar4 + 0x30))();
          if (*(char *)((long)plVar4 + 0x2f) < '\0') {
            func_0x000107c3192c(&plStack_b0,plVar4[3],plVar4[4]);
          }
          else {
            uStack_a8 = plVar4[4];
            plStack_b0 = (long *)plVar4[3];
            lStack_a0 = plVar4[5];
          }
          lVar2 = lStack_f8;
          plVar10 = plStack_100;
          lStack_90 = plVar4[7];
          lStack_98 = plVar4[6];
          lStack_88 = plVar4[8];
          if (((uint)lStack_98 & 0xfffffffd) != 0x15) {
            if (lStack_f8 == 0xc) {
              if (*plStack_100 == 0x5f74736e6f635f5f && (int)plStack_100[1] == 0x6c616f63) {
                puVar11 = &UNK_10f5fadbd;
                uVar5 = 7;
                goto LAB_109dd2d0c;
              }
            }
            else if (lStack_f8 == 0xd) {
              if (*plStack_100 == 0x6f63747865745f5f &&
                  *(long *)((long)plStack_100 + 5) == 0x746e5f6c616f6374) {
                puVar11 = &UNK_10f5fad42;
              }
              else {
                if (*plStack_100 != 0x6f63617461645f5f ||
                    *(long *)((long)plStack_100 + 5) != 0x746e5f6c616f6361) goto LAB_109dd2e30;
                puVar11 = &UNK_10f5fad49;
              }
              uVar5 = 6;
LAB_109dd2d0c:
              if ((uVar13 == 0) || (uVar7 = uVar13, _strlen(), uVar7 == 0)) {
                uVar14 = 0;
LAB_109dd2d6c:
                lVar12 = -1;
              }
              else {
                uVar8 = uVar13;
                _memchr(uVar13,0x2c,uVar7);
                uVar14 = 0;
                if (uVar8 != 0) {
                  uVar14 = (uVar8 - uVar13) + 1;
                }
                if (uVar7 < uVar14 || uVar7 - uVar14 == 0) {
                  uVar14 = (uVar8 - uVar13) + 1;
                  goto LAB_109dd2d6c;
                }
                lVar9 = uVar13 + uVar14;
                _memchr(lVar9,0x2c,uVar7 - uVar14);
                lVar12 = lVar9 - uVar13;
                if (lVar9 == 0) {
                  lVar12 = -1;
                }
              }
              plVar4 = *(long **)(param_1 + 8);
              uStack_148 = 0x503;
              apuStack_168[0] = &UNK_10f5fe283;
              plStack_158 = plVar10;
              lStack_150 = lVar2;
              aplStack_190[0] = (long *)&UNK_10f5fe28d;
              uStack_170 = 0x103;
              FUN_109d35b30(appuStack_140,apuStack_168,aplStack_190);
              (**(code **)(*plVar4 + 0xa8))
                        (plVar4,uVar13,appuStack_140,uVar13 + uVar14,uVar13 + lVar12);
              plVar4 = *(long **)(param_1 + 8);
              uStack_148 = 0x503;
              apuStack_168[0] = &UNK_10f5fe29d;
              aplStack_190[0] = (long *)&DAT_10f3b3c06;
              uStack_170 = 0x103;
              plStack_158 = (long *)puVar11;
              lStack_150 = uVar5;
              FUN_109d35b30(appuStack_140,apuStack_168,aplStack_190);
              (**(code **)(*plVar4 + 0xa0))
                        (plVar4,uVar13,appuStack_140,uVar13 + uVar14,uVar13 + lVar12);
            }
          }
LAB_109dd2e30:
          plVar4 = *(long **)(param_1 + 8);
          (**(code **)(*plVar4 + 0x38))();
          plVar10 = *(long **)(param_1 + 8);
          (**(code **)(*plVar10 + 0x30))();
          FUN_109da85ec();
          (**(code **)(*plVar4 + 0xa8))(plVar4,plVar10,0);
          uVar5 = 0;
        }
        else {
          plStack_118 = (long *)0x0;
          pplStack_b8 = &plStack_b0;
          plStack_b0 = &lStack_a0;
          uStack_a8 = 0x200000000;
          aplStack_190[0] = plVar4;
          FUN_109d39128(aplStack_190,&pplStack_b8);
          if (aplStack_190[0] != (long *)0x0) {
            (**(code **)(*aplStack_190[0] + 8))();
          }
          FUN_109d39d34(apuStack_168,plStack_b0,plStack_b0 + (uStack_a8 & 0xffffffff) * 3,
                        &DAT_10f68f57e,1);
          FUN_109d39e4c(&plStack_b0);
          uStack_120 = 0x104;
          uVar5 = *(undefined8 *)(param_1 + 8);
          appuStack_140[0] = apuStack_168;
          FUN_109dd98f8(uVar5,uVar13,appuStack_140,0,0);
          if ((long)plStack_158 < 0) {
            __ZdlPv(apuStack_168[0]);
          }
          if (plStack_118 != (long *)0x0) {
            (**(code **)(*plStack_118 + 8))();
          }
        }
      }
      else {
        plStack_b0 = (long *)&UNK_10f5fe25a;
        lStack_90 = CONCAT62(lStack_90._2_6_,0x103);
        plVar10 = *(long **)(param_1 + 8);
        plVar4 = plVar10;
        (**(code **)(*plVar10 + 0x28))();
        FUN_109dd98f8(plVar10,plVar4[0xc],&plStack_b0,0,0);
        uVar5 = 1;
      }
      if ((long)uStack_d0 < 0) {
        __ZdlPv(ppppppuStack_e0);
      }
    }
    else {
      plStack_b0 = (long *)&UNK_10f5fe25a;
      lStack_90 = CONCAT62(lStack_90._2_6_,0x103);
      plVar10 = *(long **)(param_1 + 8);
      plVar4 = plVar10;
      (**(code **)(*plVar10 + 0x28))();
      FUN_109dd98f8(plVar10,plVar4[0xc],&plStack_b0,0,0);
      uVar5 = 1;
    }
  }
  else {
    plStack_b0 = (long *)&UNK_10f5fe22b;
    lStack_90 = CONCAT62(lStack_90._2_6_,0x103);
    uVar5 = *(undefined8 *)(param_1 + 8);
    FUN_109dd98f8(uVar5,uVar13,&plStack_b0,0,0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar5;
  }
  ___stack_chk_fail();
LAB_109dd2f30:
  func_0x000104c4f6b8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109dd2f38);
  (*pcVar3)();
}



/* Entry: 109dd2fe8; end: 109dd322b;  */

long FUN_109dd2fe8(long param_1)

{
  long lVar1;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  func_0x000109dd3040();
  lVar1 = param_1;
  FUN_109dd28b0();
  if ((int)lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    func_0x000109dd30b8();
  }
  return lVar1;
}



/* Entry: 109dd322c; end: 109dd32f3;  */

undefined8 FUN_109dd322c(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x38))();
  if ((*(uint *)(plVar1 + 0xf) != 0) &&
     (*(long *)(plVar1[0xe] + (ulong)*(uint *)(plVar1 + 0xf) * 0x20 + -0x10) != 0)) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x38))();
    (**(code **)(*plVar1 + 0xa8))();
    return 0;
  }
  apuStack_58[0] = &UNK_10f5fe2e5;
  uStack_38 = 0x103;
  plVar2 = *(long **)(param_1 + 8);
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x28))();
  FUN_109dd98f8(plVar2,plVar1[0xc],apuStack_58,0,0);
  return 1;
}



/* Entry: 109dd32f4; end: 109dd3727;  */

undefined8 FUN_109dd32f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined ****ppppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined *apuStack_100 [2];
  long *plStack_f0;
  long lStack_e8;
  undefined2 uStack_e0;
  undefined **appuStack_d8 [2];
  undefined *puStack_c8;
  undefined2 uStack_b8;
  undefined ***apppuStack_b0 [2];
  undefined8 *puStack_a0;
  undefined2 uStack_90;
  int aiStack_88 [2];
  long *plStack_80;
  undefined ****ppppuStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined2 uStack_58;
  
  ppppuVar4 = *(undefined *****)(param_1 + 8);
  (*(code *)(*ppppuVar4)[0x19])();
  plVar5 = *(long **)(param_1 + 8);
  (**(code **)(*plVar5 + 0x28))();
  if (*(int *)plVar5[1] == 9) {
    plVar5 = *(long **)(param_1 + 8);
    (**(code **)(*plVar5 + 0x30))();
    if ((char)plVar5[0xa9] == '\x01') {
      ppppuStack_78 = (undefined ****)&UNK_10f5fe341;
    }
    else {
      plVar6 = *(long **)(param_1 + 8);
      (**(code **)(*plVar6 + 0x30))();
      cVar2 = *(char *)((long)plVar6 + 0x53f);
      plVar5 = (long *)plVar6[0xa5];
      if (-1 < (long)cVar2) {
        plVar5 = plVar6 + 0xa5;
      }
      lVar1 = plVar6[0xa6];
      if (-1 < cVar2) {
        lVar1 = (long)cVar2;
      }
      if (lVar1 != 0) {
        plVar7 = *(long **)(param_1 + 8);
        (**(code **)(*plVar7 + 0x30))();
        plVar6 = (long *)plVar7[0xa8];
        if (plVar6 == (long *)0x0) {
          aiStack_88[0] = 0;
          __ZNSt3__115system_categoryEv();
          plVar6 = (long *)0x60;
          plStack_80 = plVar7;
          __Znwm();
          plVar7 = plVar5;
          func_0x000109e05ce0(plVar5,lVar1,aiStack_88,0,2,7);
          func_0x000107c2b030(plVar6,plVar7,1,0,0);
          if (aiStack_88[0] != 0) {
            apuStack_100[0] = &UNK_10f5fe3b8;
            uStack_e0 = 0x503;
            appuStack_d8[0] = apuStack_100;
            puStack_c8 = &UNK_10f466b5a;
            uStack_b8 = 0x302;
            plStack_f0 = plVar5;
            lStack_e8 = lVar1;
            __ZNKSt3__110error_code7messageEv(auStack_118,aiStack_88);
            apppuStack_b0[0] = appuStack_d8;
            uStack_90 = 0x402;
            ppppuStack_78 = apppuStack_b0;
            puStack_68 = &DAT_10f684600;
            uStack_58 = 0x302;
            uVar8 = *(undefined8 *)(param_1 + 8);
            puStack_a0 = auStack_118;
            FUN_109dd98f8(uVar8,param_4,&ppppuStack_78,0,0);
            if (cStack_101 < '\0') {
              __ZdlPv(auStack_118[0]);
            }
            (**(code **)(*plVar6 + 8))(plVar6);
            return uVar8;
          }
          plVar5 = *(long **)(param_1 + 8);
          (**(code **)(*plVar5 + 0x30))();
          plVar7 = (long *)plVar5[0xa8];
          plVar5[0xa8] = (long)plVar6;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        plVar5 = *(long **)(param_1 + 8);
        (**(code **)(*plVar5 + 0x20))();
        iVar3 = (int)plVar5;
        FUN_109e00498();
        plVar5 = *(long **)(param_1 + 8);
        (**(code **)(*plVar5 + 0x20))();
        plVar5 = *(long **)(*plVar5 + (ulong)(iVar3 - 1) * 0x18);
        (**(code **)(*plVar5 + 0x10))();
        FUN_109d2f728(plVar6,plVar5,param_4);
        if ((undefined1 *)plVar6[3] == (undefined1 *)plVar6[4]) {
          FUN_109e0560c(plVar6,":",1);
        }
        else {
          *(undefined1 *)plVar6[4] = 0x3a;
          plVar6[4] = plVar6[4] + 1;
        }
        plVar5 = *(long **)(param_1 + 8);
        (**(code **)(*plVar5 + 0x20))();
        FUN_109e00770();
        FUN_109df9d4c(plVar6,(ulong)plVar5 & 0xffffffff,0,0,0);
        if ((undefined1 *)plVar6[3] == (undefined1 *)plVar6[4]) {
          FUN_109e0560c(plVar6,":",1);
        }
        else {
          *(undefined1 *)plVar6[4] = 0x3a;
          plVar6[4] = plVar6[4] + 1;
        }
        uStack_58 = 0x305;
        puStack_68 = &DAT_10f68f57e;
        ppppuStack_78 = ppppuVar4;
        uStack_70 = param_2;
        FUN_109e046a0(&ppppuStack_78,plVar6);
        plVar5 = *(long **)(param_1 + 8);
        (**(code **)(*plVar5 + 0x30))();
        *(undefined1 *)(plVar5 + 0xa9) = 1;
        return 0;
      }
      ppppuStack_78 = (undefined ****)&UNK_10f5fe36d;
    }
    uStack_58 = 0x103;
    uVar8 = *(undefined8 *)(param_1 + 8);
    FUN_109dd98f8(uVar8,param_4,&ppppuStack_78,0,0);
  }
  else {
    ppppuStack_78 = (undefined ****)&UNK_10f5fe30e;
    uStack_58 = 0x103;
    plVar6 = *(long **)(param_1 + 8);
    plVar5 = plVar6;
    (**(code **)(*plVar6 + 0x28))();
    FUN_109dd98f8(plVar6,plVar5[0xc],&ppppuStack_78,0,0);
    uVar8 = 1;
  }
  return uVar8;
}



/* Entry: 109dd3728; end: 109dd37db;  */

bool FUN_109dd3728(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 9) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x30))();
    *(undefined1 *)(plVar2 + 0xa9) = 0;
  }
  else {
    apuStack_48[0] = &UNK_10f5fe3d5;
    uStack_28 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar2[0xc],apuStack_48,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dd37dc; end: 109dd3ee3;  */

void FUN_109dd37dc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined2 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  lVar5 = plVar1[0xc];
  puStack_50 = (undefined *)0x0;
  uStack_48 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_50);
  if ((int)plVar1 == 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x30))();
    uStack_58 = 0x105;
    puStack_78 = puStack_50;
    uStack_70 = uStack_48;
    FUN_109da7538();
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0x28))();
    if (*(int *)plVar4[1] == 0x19) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      lVar6 = plVar4[0xc];
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x100))(plVar4,&lStack_80);
      if (((ulong)plVar4 & 1) != 0) {
        return;
      }
      uStack_88 = 0;
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      lVar7 = 0;
      if (*(int *)plVar4[1] == 0x19) {
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        plVar4 = *(long **)(param_1 + 8);
        (**(code **)(*plVar4 + 0x28))();
        lVar7 = plVar4[0xc];
        plVar4 = *(long **)(param_1 + 8);
        (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_88);
        if (((ulong)plVar4 & 1) != 0) {
          return;
        }
      }
      plVar4 = *(long **)(param_1 + 8);
      (**(code **)(*plVar4 + 0x28))();
      if (*(int *)plVar4[1] == 9) {
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        if (lStack_80 < 0) {
          puStack_78 = &UNK_10f5fe42d;
          uVar2 = *(undefined8 *)(param_1 + 8);
        }
        else if ((long)uStack_88 < 0) {
          puStack_78 = &UNK_10f5fe464;
          uVar2 = *(undefined8 *)(param_1 + 8);
          lVar6 = lVar7;
        }
        else {
          plVar4 = plVar1;
          func_0x000109da4494(plVar1,1);
          if (plVar4 == (long *)0x0) {
            plVar4 = *(long **)(param_1 + 8);
            (**(code **)(*plVar4 + 0x38))();
            plVar3 = *(long **)(param_1 + 8);
            (**(code **)(*plVar3 + 0x30))();
            FUN_109da85ec();
            (**(code **)(*plVar4 + 0x1d8))(plVar4,plVar3,plVar1,lStack_80,uStack_88 & 0xff);
            return;
          }
          puStack_78 = &UNK_10f5fa772;
          uVar2 = *(undefined8 *)(param_1 + 8);
          lVar6 = lVar5;
        }
        uStack_58 = 0x103;
        FUN_109dd98f8(uVar2,lVar6,&puStack_78,0,0);
        return;
      }
      puStack_78 = &UNK_10f5fe407;
    }
    else {
      puStack_78 = &UNK_10f5fc1d0;
    }
  }
  else {
    puStack_78 = &UNK_10f5fc428;
  }
  uStack_58 = 0x103;
  plVar4 = *(long **)(param_1 + 8);
  plVar1 = plVar4;
  (**(code **)(*plVar4 + 0x28))();
  FUN_109dd98f8(plVar4,plVar1[0xc],&puStack_78,0,0);
  return;
}



/* Entry: 109dd3ee4; end: 109dd4163;  */

void FUN_109dd3ee4(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  int *piStack_30;
  long lStack_28;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  if (*(int *)plVar1[1] == 9) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x38))();
    pcVar2 = *(code **)(*plVar1 + 0xe0);
LAB_109dd3f44:
    (*pcVar2)();
  }
  else {
    piStack_30 = (int *)0x0;
    lStack_28 = 0;
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    uVar4 = *(undefined8 *)(plVar1[1] + 8);
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0xc0))(plVar1,&piStack_30);
    if ((int)plVar1 != 0) {
      apuStack_58[0] = &UNK_10f5fe5aa;
      uStack_38 = 0x103;
      plVar3 = *(long **)(param_1 + 8);
      plVar1 = plVar3;
      (**(code **)(*plVar3 + 0x28))();
      FUN_109dd98f8(plVar3,plVar1[0xc],apuStack_58,0,0);
      return;
    }
    if (lStack_28 == 4) {
      if ((*piStack_30 == 0x3631746a) || (*piStack_30 == 0x3233746a)) {
LAB_109dd4074:
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        plVar1 = *(long **)(param_1 + 8);
        (**(code **)(*plVar1 + 0x38))();
        pcVar2 = *(code **)(*plVar1 + 0xe0);
        goto LAB_109dd3f44;
      }
    }
    else if ((lStack_28 == 3) &&
            ((short)*piStack_30 == 0x746a && *(char *)((long)piStack_30 + 2) == '8'))
    goto LAB_109dd4074;
    apuStack_58[0] = &UNK_10f5fe5de;
    uStack_38 = 0x103;
    FUN_109dd98f8(*(undefined8 *)(param_1 + 8),uVar4,apuStack_58,0,0);
  }
  return;
}



/* Entry: 109dd4164; end: 109dd418b;  */

/* WARNING: Removing unreachable block (ram,0x000109dd4270) */
/* WARNING: Removing unreachable block (ram,0x000109dd42b0) */

bool FUN_109dd4164(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 9) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x30))();
    FUN_109da85ec();
    (**(code **)(*plVar2 + 0xa8))(plVar2,plVar3,0);
  }
  else {
    apuStack_88[0] = &UNK_10f5fd937;
    uStack_68 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar2[0xc],apuStack_88,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dd418c; end: 109dd430b;  */

bool FUN_109dd418c(long param_1)

{
  int iVar1;
  long *plVar2;
  int in_w6;
  long *plVar3;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 9) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x30))();
    FUN_109da85ec();
    (**(code **)(*plVar2 + 0xa8))(plVar2,plVar3,0);
    if (in_w6 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      (**(code **)(*plVar2 + 0x38))();
      (**(code **)(*plVar2 + 0x270))();
    }
  }
  else {
    apuStack_88[0] = &UNK_10f5fd937;
    uStack_68 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar2[0xc],apuStack_88,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dd430c; end: 109dd449b;  */

/* WARNING: Removing unreachable block (ram,0x000109dd4270) */
/* WARNING: Removing unreachable block (ram,0x000109dd42b0) */

bool FUN_109dd430c(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 9) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x30))();
    FUN_109da85ec();
    (**(code **)(*plVar2 + 0xa8))(plVar2,plVar3,0);
  }
  else {
    apuStack_88[0] = &UNK_10f5fd937;
    uStack_68 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar2[0xc],apuStack_88,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dd449c; end: 109dd4733;  */

undefined1 ** FUN_109dd449c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  int iVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined *apuStack_128 [2];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined **appuStack_100 [2];
  undefined *puStack_f0;
  undefined2 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [96];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = auStack_c8;
  uStack_d0 = 0x400000000;
  do {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    if (*(int *)plVar1[1] != 3) {
      apuStack_128[0] = &UNK_10f5fe67f;
      uStack_108 = 0x503;
      appuStack_100[0] = apuStack_128;
      puStack_f0 = &UNK_10f5fc5cd;
      uStack_e0 = 0x302;
      plVar6 = *(long **)(param_1 + 8);
      plVar1 = plVar6;
      uStack_118 = param_2;
      uStack_110 = param_3;
      (**(code **)(*plVar6 + 0x28))();
      FUN_109dd98f8(plVar6,plVar1[0xc],appuStack_100,0,0);
      goto LAB_109dd46b0;
    }
    uStack_140 = 0;
    uStack_138 = 0;
    lStack_130 = 0;
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0xd0))(plVar1,&uStack_140);
    if (((ulong)plVar1 & 1) == 0) {
      FUN_109dd4734(&puStack_d8,&uStack_140);
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      if (*(int *)plVar1[1] == 9) {
        iVar5 = 3;
      }
      else {
        plVar1 = *(long **)(param_1 + 8);
        (**(code **)(*plVar1 + 0x28))();
        if (*(int *)plVar1[1] != 0x19) {
          apuStack_128[0] = &UNK_10f5fc5b7;
          uStack_108 = 0x503;
          puStack_f0 = &UNK_10f5fc5cd;
          uStack_e0 = 0x302;
          plVar6 = *(long **)(param_1 + 8);
          plVar1 = plVar6;
          uStack_118 = param_2;
          uStack_110 = param_3;
          appuStack_100[0] = apuStack_128;
          (**(code **)(*plVar6 + 0x28))();
          FUN_109dd98f8(plVar6,plVar1[0xc],appuStack_100,0,0);
          goto LAB_109dd454c;
        }
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        iVar5 = 0;
      }
    }
    else {
LAB_109dd454c:
      iVar5 = 1;
    }
    if (lStack_130 < 0) {
      __ZdlPv(uStack_140);
    }
  } while (iVar5 == 0);
  if (iVar5 == 3) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x38))();
    (**(code **)(*plVar1 + 0xd8))();
    ppuVar4 = (undefined1 **)0x0;
  }
  else {
LAB_109dd46b0:
    ppuVar4 = (undefined1 **)0x1;
  }
  ppuVar2 = &puStack_d8;
  FUN_109dceacc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_109dceacc(&puStack_d8);
    __Unwind_Resume();
    ppuVar4 = ppuVar2;
    FUN_109d37bcc();
    ppuVar3 = (undefined1 **)(*ppuVar2 + (ulong)*(uint *)(ppuVar2 + 1) * 0x18);
    if (*(char *)((long)ppuVar4 + 0x17) < '\0') {
      func_0x000107c3192c(ppuVar3,*ppuVar4,ppuVar4[1]);
    }
    else {
      puVar8 = ppuVar4[1];
      puVar7 = *ppuVar4;
      ppuVar3[2] = ppuVar4[2];
      ppuVar3[1] = puVar8;
      *ppuVar3 = puVar7;
      ppuVar3 = ppuVar4;
    }
    *(int *)(ppuVar2 + 1) = *(int *)(ppuVar2 + 1) + 1;
    return ppuVar3;
  }
  return ppuVar4;
}



/* Entry: 109dd4734; end: 109dd479b;  */

void FUN_109dd4734(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = param_1;
  FUN_109d37bcc(param_1,param_2,1);
  plVar2 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x18);
  if (*(char *)((long)plVar1 + 0x17) < '\0') {
    func_0x000107c3192c(plVar2,*plVar1,plVar1[1]);
  }
  else {
    lVar4 = plVar1[1];
    lVar3 = *plVar1;
    plVar2[2] = plVar1[2];
    plVar2[1] = lVar4;
    *plVar2 = lVar3;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



/* Entry: 109dd479c; end: 109dd4cfb;  */

/* WARNING: Removing unreachable block (ram,0x000109dd4270) */

bool FUN_109dd479c(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *apuStack_88 [4];
  undefined2 uStack_68;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 9) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x30))();
    FUN_109da85ec();
    (**(code **)(*plVar2 + 0xa8))(plVar2,plVar3,0);
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x270))();
  }
  else {
    apuStack_88[0] = &UNK_10f5fd937;
    uStack_68 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar2[0xc],apuStack_88,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dd4cfc; end: 109dd4d1f;  */

undefined8 FUN_109dd4cfc(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0xe0))();
  return 0;
}



/* Entry: 109dd4d20; end: 109dd4d27;  */

void FUN_109dd4d20(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *apuStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined *apuStack_88 [2];
  undefined *puStack_78;
  undefined2 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  uVar2 = param_1;
  FUN_109dd4e78(param_1,auStack_44,auStack_48,auStack_4c);
  if ((uVar2 & 1) == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x28))();
    iVar1 = (int)plVar3[1];
    FUN_109dd4f80();
    if ((iVar1 == 0) || (uVar2 = param_1, FUN_109dd4fd8(param_1,&uStack_60), (uVar2 & 1) == 0)) {
      apuStack_88[0] = &UNK_10f5fcfd4;
      uStack_68 = 0x103;
      uVar4 = *(undefined8 *)(param_1 + 8);
      FUN_109dd99f4(uVar4,apuStack_88);
      if ((int)uVar4 == 0) {
        FUN_109dd5098(param_1,param_2,param_3,0,0,param_4,0x1d);
        plVar3 = *(long **)(param_1 + 8);
        (**(code **)(*plVar3 + 0x38))();
        (**(code **)(*plVar3 + 0xe8))();
      }
      else {
        apuStack_b0[0] = &UNK_10f5fe7c7;
        uStack_90 = 0x503;
        puStack_78 = &UNK_10f5fc5cd;
        uStack_68 = 0x302;
        uStack_a0 = param_2;
        uStack_98 = param_3;
        apuStack_88[0] = (undefined *)apuStack_b0;
        func_0x000109dd9cb8(*(undefined8 *)(param_1 + 8),apuStack_88);
      }
    }
  }
  return;
}



/* Entry: 109dd4d28; end: 109dd4e77;  */

void FUN_109dd4d28(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *apuStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined *apuStack_88 [2];
  undefined *puStack_78;
  undefined2 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  uVar2 = param_1;
  FUN_109dd4e78(param_1,auStack_44,auStack_48,auStack_4c);
  if ((uVar2 & 1) == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x28))();
    iVar1 = (int)plVar3[1];
    FUN_109dd4f80();
    if ((iVar1 == 0) || (uVar2 = param_1, FUN_109dd4fd8(param_1,&uStack_60), (uVar2 & 1) == 0)) {
      apuStack_88[0] = &UNK_10f5fcfd4;
      uStack_68 = 0x103;
      uVar4 = *(undefined8 *)(param_1 + 8);
      FUN_109dd99f4(uVar4,apuStack_88);
      if ((int)uVar4 == 0) {
        FUN_109dd5098(param_1,param_2,param_3,0,0,param_4,
                      *(undefined4 *)(&UNK_10e05a7d0 + (param_5 & 0xffffffff) * 4));
        plVar3 = *(long **)(param_1 + 8);
        (**(code **)(*plVar3 + 0x38))();
        (**(code **)(*plVar3 + 0xe8))();
      }
      else {
        apuStack_b0[0] = &UNK_10f5fe7c7;
        uStack_90 = 0x503;
        puStack_78 = &UNK_10f5fc5cd;
        uStack_68 = 0x302;
        uStack_a0 = param_2;
        uStack_98 = param_3;
        apuStack_88[0] = (undefined *)apuStack_b0;
        func_0x000109dd9cb8(*(undefined8 *)(param_1 + 8),apuStack_88);
      }
    }
  }
  return;
}



/* Entry: 109dd4e78; end: 109dd4f7f;  */

/* WARNING: Removing unreachable block (ram,0x000109dd5630) */
/* WARNING: Removing unreachable block (ram,0x000109dd55fc) */

undefined8 FUN_109dd4e78(ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  undefined *apuStack_80 [2];
  undefined *puStack_70;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined **appuStack_58 [2];
  undefined *apuStack_48 [2];
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  uVar3 = param_1;
  FUN_109dd522c();
  if ((uVar3 & 1) == 0) {
    *param_4 = 0;
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x28))();
    if (*(int *)plVar2[1] != 9) {
      plVar2 = *(long **)(param_1 + 8);
      (**(code **)(*plVar2 + 0x28))();
      uVar3 = plVar2[1];
      FUN_109dd4f80();
      if ((uVar3 & 1) == 0) {
        plVar2 = *(long **)(param_1 + 8);
        (**(code **)(*plVar2 + 0x28))();
        if (*(int *)plVar2[1] == 0x19) {
          (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
          plVar2 = *(long **)(param_1 + 8);
          (**(code **)(*plVar2 + 0x28))();
          if (*(int *)plVar2[1] == 4) {
            plVar2 = *(long **)(param_1 + 8);
            (**(code **)(*plVar2 + 0x28))();
            puVar4 = (ulong *)(plVar2[1] + 0x18);
            if (0x40 < *(uint *)(plVar2[1] + 0x20)) {
              puVar4 = (ulong *)*puVar4;
            }
            if (*puVar4 < 0x100) {
              *param_4 = (int)*puVar4;
              (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
              return 0;
            }
            apuStack_48[0] = &UNK_10f5fe8d3;
          }
          else {
            apuStack_48[0] = &UNK_10f5fe8b1;
          }
          appuStack_58[0] = apuStack_80;
          uStack_5f = 3;
          puStack_70 = &UNK_10f5fe7fc;
          uStack_38 = 2;
          uStack_60 = 3;
          apuStack_80[0] = &UNK_10f5fa5cc;
          uStack_37 = 3;
          plVar5 = *(long **)(param_1 + 8);
          plVar2 = plVar5;
          (**(code **)(*plVar5 + 0x28))();
          FUN_109dd98f8(plVar5,plVar2[0xc],appuStack_58,0,0);
          return 1;
        }
        apuStack_48[0] = &UNK_10f5fe7d0;
        plVar5 = *(long **)(param_1 + 8);
        plVar2 = plVar5;
        (**(code **)(*plVar5 + 0x28))();
        FUN_109dd98f8(plVar5,plVar2[0xc],apuStack_48,0,0);
        goto LAB_109dd4ea0;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_109dd4ea0:
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 109dd4f80; end: 109dd4fd7;  */

bool FUN_109dd4f80(int *param_1)

{
  if (*param_1 != 2 || *(long *)(param_1 + 4) != 0xb) {
    return false;
  }
  return **(long **)(param_1 + 2) == 0x737265765f6b6473 &&
         *(long *)((long)*(long **)(param_1 + 2) + 3) == 0x6e6f69737265765f;
}



/* Entry: 109dd4fd8; end: 109dd5097;  */

void FUN_109dd4fd8(ulong param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  uVar2 = param_1;
  FUN_109dd522c(param_1,&uStack_34,&uStack_38,&DAT_10f555fec);
  if ((uVar2 & 1) == 0) {
    uVar2 = CONCAT44(uStack_38,uStack_34) | 0x8000000000000000;
    *param_2 = uVar2;
    param_2[1] = 0;
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    if ((*(int *)plVar1[1] == 0x19) &&
       (func_0x000109dd5524(param_1,&uStack_3c,&UNK_10f5fe8ef), (param_1 & 1) == 0)) {
      *param_2 = uVar2;
      param_2[1] = (ulong)uStack_3c | 0x80000000;
    }
  }
  return;
}



/* Entry: 109dd5098; end: 109dd522b;  */

void FUN_109dd5098(long param_1,undefined8 ***param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,int param_7)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  undefined8 auStack_f0 [2];
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined8 **ppuStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined8 **appuStack_78 [2];
  long *plStack_68;
  undefined8 **ppuStack_60;
  undefined2 uStack_58;
  
  plVar1 = *(long **)(param_1 + 8);
  pppuVar2 = param_2;
  (**(code **)(*plVar1 + 0x30))();
  if (*(int *)((long)plVar1 + 0x3c) != param_7) {
    if (param_5 == 0) {
      uStack_d0 = 1;
      uStack_cf = 1;
      uStack_a7 = 1;
      uStack_80 = 5;
      ppuStack_a0 = param_2;
    }
    else {
      auStack_f0[0] = 0x20;
      uStack_a7 = 2;
      uStack_cf = 5;
      uStack_d0 = 7;
      uStack_80 = 2;
      ppuStack_a0 = &ppuStack_c8;
      uStack_e0 = param_4;
      lStack_d8 = param_5;
      puStack_b8 = (undefined1 *)auStack_f0;
    }
    uStack_a8 = 5;
    puStack_90 = &UNK_10f5fe8fc;
    uStack_7f = 3;
    plVar1 = plVar1 + 3;
    ppuStack_c8 = param_2;
    uStack_c0 = param_3;
    uStack_98 = param_3;
    FUN_109e0eb9c();
    appuStack_78[0] = &ppuStack_a0;
    uStack_58 = 0x502;
    plStack_68 = plVar1;
    ppuStack_60 = pppuVar2;
    (**(code **)(**(long **)(param_1 + 8) + 0xa8))(*(long **)(param_1 + 8),param_6,appuStack_78,0,0)
    ;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    appuStack_78[0] = (undefined8 **)&UNK_10f5fe913;
    uStack_58 = 0x103;
    (**(code **)(**(long **)(param_1 + 8) + 0xa8))(*(long **)(param_1 + 8),param_6,appuStack_78,0,0)
    ;
    appuStack_78[0] = (undefined8 **)&UNK_10f5fe939;
    uStack_58 = 0x103;
    (**(code **)(**(long **)(param_1 + 8) + 0xa0))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),appuStack_78,0,0);
  }
  *(undefined8 *)(param_1 + 0x18) = param_6;
  return;
}



/* Entry: 109dd522c; end: 109dd56b3;  */

undefined8 FUN_109dd522c(long param_1,undefined4 *param_2,undefined4 *param_3,char *param_4)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  undefined *apuStack_80 [2];
  char *pcStack_70;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  char *apcStack_58 [2];
  undefined *puStack_48;
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  if (*(int *)plVar1[1] == 4) {
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x28))();
    plVar1 = (long *)(plVar2[1] + 0x18);
    if (0x40 < *(uint *)(plVar2[1] + 0x20)) {
      plVar1 = (long *)*plVar1;
    }
    if (*plVar1 - 0x10000U < 0xffffffffffff0001) {
      if (*param_4 == '\0') {
        uStack_5f = 1;
        uStack_38 = 3;
      }
      else {
        uStack_5f = 3;
        uStack_38 = 2;
        pcStack_70 = param_4;
      }
      apcStack_58[0] = "invalid ";
      if (*param_4 != '\0') {
        apcStack_58[0] = (char *)apuStack_80;
      }
      puStack_48 = &UNK_10f5fe82e;
    }
    else {
      *param_2 = (int)*plVar1;
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      if (*(int *)plVar1[1] != 0x19) {
        apcStack_58[0] = " minor version number required, comma expected";
        if (*param_4 == '\0') {
          uStack_37 = 1;
        }
        else {
          puStack_48 = &UNK_10f5fe844;
          uStack_37 = 3;
          apcStack_58[0] = param_4;
        }
        uStack_38 = 3;
        goto LAB_109dd5428;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      if (*(int *)plVar1[1] == 4) {
        plVar1 = *(long **)(param_1 + 8);
        (**(code **)(*plVar1 + 0x28))();
        puVar3 = (ulong *)(plVar1[1] + 0x18);
        if (0x40 < *(uint *)(plVar1[1] + 0x20)) {
          puVar3 = (ulong *)*puVar3;
        }
        if (*puVar3 < 0x100) {
          *param_3 = (int)*puVar3;
          (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
          return 0;
        }
        if (*param_4 == '\0') {
          uStack_5f = 1;
          uStack_38 = 3;
        }
        else {
          uStack_5f = 3;
          uStack_38 = 2;
          pcStack_70 = param_4;
        }
        apcStack_58[0] = "invalid ";
        if (*param_4 != '\0') {
          apcStack_58[0] = (char *)apuStack_80;
        }
        puStack_48 = &UNK_10f5fe89b;
      }
      else {
        if (*param_4 == '\0') {
          uStack_5f = 1;
          uStack_38 = 3;
        }
        else {
          uStack_5f = 3;
          uStack_38 = 2;
          pcStack_70 = param_4;
        }
        apcStack_58[0] = "invalid ";
        if (*param_4 != '\0') {
          apcStack_58[0] = (char *)apuStack_80;
        }
        puStack_48 = &UNK_10f5fe873;
      }
    }
  }
  else {
    if (*param_4 == '\0') {
      uStack_5f = 1;
      uStack_38 = 3;
    }
    else {
      uStack_5f = 3;
      uStack_38 = 2;
      pcStack_70 = param_4;
    }
    apcStack_58[0] = "invalid ";
    if (*param_4 != '\0') {
      apcStack_58[0] = (char *)apuStack_80;
    }
    puStack_48 = &UNK_10f5fe806;
  }
  uStack_60 = 3;
  apuStack_80[0] = &UNK_10f5fa5cc;
  uStack_37 = 3;
LAB_109dd5428:
  plVar2 = *(long **)(param_1 + 8);
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x28))();
  FUN_109dd98f8(plVar2,plVar1[0xc],apcStack_58,0,0);
  return 1;
}



/* Entry: 109dd56b4; end: 109dd56cb;  */

void FUN_109dd56b4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *apuStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined *apuStack_88 [2];
  undefined *puStack_78;
  undefined2 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  uVar2 = param_1;
  FUN_109dd4e78(param_1,auStack_44,auStack_48,auStack_4c);
  if ((uVar2 & 1) == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x28))();
    iVar1 = (int)plVar3[1];
    FUN_109dd4f80();
    if ((iVar1 == 0) || (uVar2 = param_1, FUN_109dd4fd8(param_1,&uStack_60), (uVar2 & 1) == 0)) {
      apuStack_88[0] = &UNK_10f5fcfd4;
      uStack_68 = 0x103;
      uVar4 = *(undefined8 *)(param_1 + 8);
      FUN_109dd99f4(uVar4,apuStack_88);
      if ((int)uVar4 == 0) {
        FUN_109dd5098(param_1,param_2,param_3,0,0,param_4,0x1c);
        plVar3 = *(long **)(param_1 + 8);
        (**(code **)(*plVar3 + 0x38))();
        (**(code **)(*plVar3 + 0xe8))();
      }
      else {
        apuStack_b0[0] = &UNK_10f5fe7c7;
        uStack_90 = 0x503;
        puStack_78 = &UNK_10f5fc5cd;
        uStack_68 = 0x302;
        uStack_a0 = param_2;
        uStack_98 = param_3;
        apuStack_88[0] = (undefined *)apuStack_b0;
        func_0x000109dd9cb8(*(undefined8 *)(param_1 + 8),apuStack_88);
      }
    }
  }
  return;
}



/* Entry: 109dd56cc; end: 109dd5a13;  */

void FUN_109dd56cc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined *apuStack_78 [4];
  undefined2 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  plStack_50 = (long *)0x0;
  lStack_48 = 0;
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  uVar6 = *(undefined8 *)(plVar2[1] + 8);
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0xc0))(plVar2,&plStack_50);
  if ((int)plVar2 == 0) {
    if (lStack_48 < 7) {
      if (lStack_48 == 3) {
        if ((short)*plStack_50 == 0x6f69 && *(char *)((long)plStack_50 + 2) == 's') {
          iVar5 = 2;
          goto LAB_109dd58f0;
        }
      }
      else if (lStack_48 == 4) {
        if ((int)*plStack_50 == 0x736f7674) {
          iVar5 = 3;
          goto LAB_109dd58f0;
        }
      }
      else if ((lStack_48 == 5) &&
              ((int)*plStack_50 == 0x6f63616d && *(char *)((long)plStack_50 + 4) == 's')) {
        iVar5 = 1;
LAB_109dd58f0:
        plVar2 = *(long **)(param_1 + 8);
        (**(code **)(*plVar2 + 0x28))();
        if (*(int *)plVar2[1] == 0x19) {
          (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
          uVar3 = param_1;
          FUN_109dd4e78(param_1,auStack_7c,auStack_80,auStack_84);
          if ((uVar3 & 1) != 0) {
            return;
          }
          uStack_98 = 0;
          uStack_90 = 0;
          plVar2 = *(long **)(param_1 + 8);
          (**(code **)(*plVar2 + 0x28))();
          iVar1 = (int)plVar2[1];
          FUN_109dd4f80();
          if ((iVar1 != 0) && (uVar3 = param_1, FUN_109dd4fd8(param_1,&uStack_98), (uVar3 & 1) != 0)
             ) {
            return;
          }
          apuStack_78[0] = &UNK_10f5fcfd4;
          uStack_58 = 0x103;
          uVar6 = *(undefined8 *)(param_1 + 8);
          FUN_109dd99f4(uVar6,apuStack_78);
          if ((int)uVar6 != 0) {
            apuStack_78[0] = &UNK_10f5fe9aa;
            uStack_58 = 0x103;
            func_0x000109dd9cb8(*(undefined8 *)(param_1 + 8),apuStack_78);
            return;
          }
          FUN_109dd5098(param_1,param_2,param_3,plStack_50,lStack_48,param_4,
                        *(undefined4 *)(&UNK_10e05a7a8 + (ulong)(iVar5 - 1) * 4));
          plVar2 = *(long **)(param_1 + 8);
          (**(code **)(*plVar2 + 0x38))();
          (**(code **)(*plVar2 + 0xf0))();
          return;
        }
        apuStack_78[0] = &UNK_10f5fe982;
        goto LAB_109dd5730;
      }
    }
    else if (lStack_48 == 7) {
      if ((int)*plStack_50 == 0x63746177 && *(int *)((long)plStack_50 + 3) == 0x736f6863) {
        iVar5 = 4;
        goto LAB_109dd58f0;
      }
    }
    else if (lStack_48 == 9) {
      if (*plStack_50 == 0x696b726576697264 && (char)plStack_50[1] == 't') {
        iVar5 = 10;
        goto LAB_109dd58f0;
      }
    }
    else if ((lStack_48 == 0xb) &&
            (*plStack_50 == 0x6c6174614363616d &&
             *(long *)((long)plStack_50 + 3) == 0x7473796c61746143)) {
      iVar5 = 6;
      goto LAB_109dd58f0;
    }
    apuStack_78[0] = &UNK_10f5fe96c;
    uStack_58 = 0x103;
    FUN_109dd98f8(*(undefined8 *)(param_1 + 8),uVar6,apuStack_78,0,0);
  }
  else {
    apuStack_78[0] = &UNK_10f5fe955;
LAB_109dd5730:
    uStack_58 = 0x103;
    plVar4 = *(long **)(param_1 + 8);
    plVar2 = plVar4;
    (**(code **)(*plVar4 + 0x28))();
    FUN_109dd98f8(plVar4,plVar2[0xc],apuStack_78,0,0);
  }
  return;
}



/* Entry: 109dd5a14; end: 109dd5a1f;  */

undefined8 FUN_109dd5a14(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined2 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = (undefined *)0x0;
  uStack_48 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  lVar6 = plVar1[0xc];
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_50);
  if ((int)plVar1 == 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    if (*(int *)plVar1[1] == 0x19) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      puStack_88 = (undefined *)0x0;
      uStack_80 = 0;
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      lVar7 = plVar1[0xc];
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_88);
      if ((int)plVar1 != 0) goto LAB_109dda108;
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      if (*(int *)plVar1[1] == 0x19) {
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        uVar2 = *(ulong *)(param_1 + 8);
        puStack_78 = &UNK_10f5fef5b;
        uStack_58 = 0x103;
        func_0x000109dd9b2c(uVar2,&uStack_90,&puStack_78);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        plVar1 = *(long **)(param_1 + 8);
        (**(code **)(*plVar1 + 0x28))();
        if (*(int *)plVar1[1] == 9) {
          plVar3 = *(long **)(param_1 + 8);
          (**(code **)(*plVar3 + 0x30))();
          uStack_58 = 0x105;
          puStack_78 = puStack_50;
          uStack_70 = uStack_48;
          FUN_109da7538();
          plVar4 = *(long **)(param_1 + 8);
          (**(code **)(*plVar4 + 0x30))();
          uStack_58 = 0x105;
          puStack_78 = puStack_88;
          uStack_70 = uStack_80;
          FUN_109da7538();
          plVar1 = *(long **)(param_1 + 8);
          (**(code **)(*plVar1 + 0x38))();
          plVar5 = *(long **)(param_1 + 8);
          (**(code **)(*plVar5 + 0x30))();
          FUN_109dae8f4(plVar3,0,plVar5,lVar6);
          plVar5 = *(long **)(param_1 + 8);
          (**(code **)(*plVar5 + 0x30))();
          FUN_109dae8f4(plVar4,0,plVar5,lVar7);
          (**(code **)(*plVar1 + 0x478))(plVar1,plVar3,plVar4,uStack_90);
          return 0;
        }
        puStack_78 = &UNK_10f5fc1d0;
        goto LAB_109dda2cc;
      }
    }
    puStack_78 = &UNK_10f5feea4;
  }
  else {
LAB_109dda108:
    puStack_78 = &UNK_10f5fc428;
  }
LAB_109dda2cc:
  uStack_58 = 0x103;
  plVar5 = *(long **)(param_1 + 8);
  plVar1 = plVar5;
  (**(code **)(*plVar5 + 0x28))();
  FUN_109dd98f8(plVar5,plVar1[0xc],&puStack_78,0,0);
  return 1;
}



/* Entry: 109dd5a20; end: 109dd5e43;  */

void FUN_109dd5a20(long param_1,long *param_2)

{
  *(long **)(param_1 + 8) = param_2;
  (**(code **)(*param_2 + 0x10))(param_2,&UNK_10f5fa793,5,param_1,FUN_109dd5e44);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd845,5,param_1,FUN_109dd5f74);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa78e,4,param_1,0x109dd5f8c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa7a6,7,param_1,0x109dd5fa4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa7b4,6,param_1,0x109dd5fbc);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa7ae,5,param_1,0x109dd5fd4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fe9c9,9,param_1,0x109dd5fec);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa799,0xc,param_1,0x109dd6004);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5af365,9,param_1,0x109dd601c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd84b,8,param_1,0x109dd6034);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc6a,0xc,param_1,FUN_109dd8138);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc77,0xb,param_1,0x109dd819c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fe9d3,5,param_1,0x109dd8220);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdc83,9,param_1,FUN_109dd8394);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd85e,5,param_1,0x109dd845c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf65,6,param_1,0x109dd89c4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fe9d9,7,param_1,0x109dd8b18);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fe9e1,8,param_1,FUN_109dd8d68);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fe9ea,8,param_1,FUN_109dd8fe4);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd89d,5,param_1,0x109dd9190);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fe9f3,6,param_1,0x109dd9190);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fe9fa,10,param_1,0x109dd9190);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fea05,9,param_1,0x109dd9190);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fea0f,7,param_1,0x109dd9190);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fea17,0xb,param_1,FUN_109dd9470);
                    /* WARNING: Could not recover jumptable at 0x000109dd5e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd8a3,0xb,param_1,FUN_109dd9588);
  return;
}



/* Entry: 109dd5e44; end: 109dd5e5b;  */

undefined8 FUN_109dd5e44(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_70;
  undefined8 auStack_68 [4];
  undefined2 uStack_48;
  
  uStack_70 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  if (*(int *)plVar1[1] != 9) {
    plVar1 = *(long **)(param_1 + 8);
    auStack_68[0] = 0;
    (**(code **)(*plVar1 + 0xe8))(plVar1,&uStack_70,auStack_68);
    if (((ulong)plVar1 & 1) != 0) {
      return 1;
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x38))();
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x30))();
  uStack_48 = 0x101;
  FUN_109da8870();
  (**(code **)(*plVar1 + 0xa8))(plVar1,plVar2,uStack_70);
  return 0;
}



/* Entry: 109dd5e5c; end: 109dd5f73;  */

undefined8 FUN_109dd5e5c(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_70;
  undefined8 auStack_68 [4];
  undefined2 uStack_48;
  
  uStack_70 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  if (*(int *)plVar1[1] != 9) {
    plVar1 = *(long **)(param_1 + 8);
    auStack_68[0] = 0;
    (**(code **)(*plVar1 + 0xe8))(plVar1,&uStack_70,auStack_68);
    if (((ulong)plVar1 & 1) != 0) {
      return 1;
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x38))();
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x30))();
  uStack_48 = 0x101;
  FUN_109da8870();
  (**(code **)(*plVar1 + 0xa8))(plVar1,plVar2,uStack_70);
  return 0;
}



/* Entry: 109dd5f74; end: 109dd603f;  */

undefined8 FUN_109dd5f74(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_70;
  undefined8 auStack_68 [4];
  undefined2 uStack_48;
  
  uStack_70 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  if (*(int *)plVar1[1] != 9) {
    plVar1 = *(long **)(param_1 + 8);
    auStack_68[0] = 0;
    (**(code **)(*plVar1 + 0xe8))(plVar1,&uStack_70,auStack_68);
    if (((ulong)plVar1 & 1) != 0) {
      return 1;
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x38))();
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x30))();
  uStack_48 = 0x101;
  FUN_109da8870();
  (**(code **)(*plVar1 + 0xa8))(plVar1,plVar2,uStack_70);
  return 0;
}



/* Entry: 109dd6040; end: 109dd7ff3;  */

long * FUN_109dd6040(long param_1,int param_2,ulong *****param_3,ulong *****param_4)

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  ulong *****pppppuVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  char cVar13;
  uint uVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  undefined1 uVar18;
  uint uVar19;
  ulong uVar20;
  ulong *****pppppuVar21;
  long *plVar22;
  ulong uVar23;
  ulong *****pppppuVar24;
  ulong uVar25;
  ulong *****pppppuVar26;
  uint uVar27;
  ulong ***apppuStack_158 [2];
  char cStack_141;
  ulong ***apppuStack_140 [2];
  ulong ****ppppuStack_130;
  ulong uStack_128;
  undefined2 uStack_120;
  ulong ****ppppuStack_118;
  ulong uStack_110;
  undefined *puStack_108;
  undefined2 uStack_f8;
  ulong ***pppuStack_f0;
  ulong ****ppppuStack_e8;
  ulong ****ppppuStack_e0;
  ulong uStack_d8;
  ulong ****ppppuStack_c8;
  ulong ****ppppuStack_c0;
  ulong uStack_b8;
  ulong ****ppppuStack_b0;
  ulong uStack_a8;
  ulong ****ppppuStack_a0;
  ulong uStack_98;
  undefined2 uStack_90;
  undefined1 uStack_71;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(param_1 + 8);
  pppppuVar12 = param_3;
  (**(code **)(*plVar9 + 0x28))();
  pppppuVar21 = (ulong *****)plVar9[0xc];
  plVar9 = *(long **)(param_1 + 8);
  (**(code **)(*plVar9 + 0x28))();
  plVar22 = *(long **)(param_1 + 8);
  if (*(int *)plVar9[1] != 3) {
    if ((int)plVar22[3] == 0) {
      (**(code **)(*plVar22 + 0x28))();
      lVar17 = plVar22[0xc];
      plVar9 = *(long **)(param_1 + 8);
      (**(code **)(*plVar9 + 0x28))();
      if (*(int *)plVar9[1] != 0x19) {
        plVar9 = *(long **)(param_1 + 8);
        (**(code **)(*plVar9 + 0x28))();
        if (*(int *)plVar9[1] == 9) {
          pppppuVar21 = (ulong *****)0x0;
          uVar27 = 0;
        }
        else {
          uVar27 = 0;
          do {
            plVar9 = *(long **)(param_1 + 8);
            (**(code **)(*plVar9 + 0x28))();
            iVar4 = *(int *)plVar9[1];
            plVar9 = *(long **)(param_1 + 8);
            (**(code **)(*plVar9 + 0x28))();
            iVar3 = *(int *)plVar9[1];
            if (iVar4 == 3) {
              lVar16 = *(long *)((int *)plVar9[1] + 4);
              if (iVar3 != 2) {
                uVar25 = (ulong)(lVar16 != 0);
                uVar23 = uVar25;
                if (uVar25 <= lVar16 - 1U) {
                  uVar23 = lVar16 - 1U;
                }
                uVar20 = 0;
                if (lVar16 != 0) {
                  uVar20 = uVar23;
                }
                lVar16 = uVar20 - uVar25;
              }
              uVar23 = (ulong)((int)lVar16 + 2);
            }
            else {
              plVar9 = *(long **)(param_1 + 8);
              (**(code **)(*plVar9 + 0x28))();
              piVar15 = (int *)plVar9[1];
              if (iVar3 == 2) {
                uVar23 = *(ulong *)(piVar15 + 4);
                if (*piVar15 != 2) {
                  uVar20 = (ulong)(uVar23 != 0);
                  uVar25 = uVar20;
                  if (uVar20 <= uVar23 - 1) {
                    uVar25 = uVar23 - 1;
                  }
                  uVar2 = 0;
                  if (uVar23 != 0) {
                    uVar2 = uVar25;
                  }
                  uVar23 = uVar2 - uVar20;
                }
              }
              else {
                uVar23 = (ulong)(uint)piVar15[4];
              }
            }
            (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
            uVar27 = (int)uVar23 + uVar27;
            plVar9 = *(long **)(param_1 + 8);
            (**(code **)(*plVar9 + 0x28))();
            if ((lVar17 + (uVar23 & 0xffffffff) != *(long *)(plVar9[1] + 8)) ||
               (plVar9 = *(long **)(param_1 + 8), (int)plVar9[3] != 0)) break;
            (**(code **)(*plVar9 + 0x28))();
            lVar17 = plVar9[0xc];
            plVar9 = *(long **)(param_1 + 8);
            (**(code **)(*plVar9 + 0x28))();
            if (*(int *)plVar9[1] == 0x19) break;
            plVar9 = *(long **)(param_1 + 8);
            (**(code **)(*plVar9 + 0x28))();
          } while (*(int *)plVar9[1] != 9);
        }
        if (uVar27 != 0) {
          uVar23 = (ulong)uVar27;
          goto LAB_109dd6180;
        }
      }
      plVar22 = *(long **)(param_1 + 8);
    }
    ppppuStack_b0 = (ulong ****)&UNK_10f5fbf88;
    uStack_90 = 0x103;
    plVar9 = plVar22;
    (**(code **)(*plVar22 + 0x28))();
    pppppuVar11 = (ulong *****)plVar9[0xc];
    pppppuVar12 = &ppppuStack_b0;
    param_4 = (ulong *****)0x0;
    FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
    goto LAB_109dd74e4;
  }
  (**(code **)(*plVar22 + 0x28))();
  piVar15 = (int *)plVar22[1];
  if (*piVar15 == 2) {
    pppppuVar21 = *(ulong ******)(piVar15 + 2);
    uVar23 = *(ulong *)(piVar15 + 4);
  }
  else {
    pppppuVar21 = *(ulong ******)(piVar15 + 2);
    lVar17 = *(long *)(piVar15 + 4);
    uVar25 = (ulong)(lVar17 != 0);
    if (lVar17 != 0) {
      pppppuVar21 = (ulong *****)((long)pppppuVar21 + 1);
    }
    uVar20 = uVar25;
    if (uVar25 <= lVar17 - 1U) {
      uVar20 = lVar17 - 1U;
    }
    uVar23 = 0;
    if (lVar17 != 0) {
      uVar23 = uVar20;
    }
    uVar23 = uVar23 - uVar25;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
LAB_109dd6180:
  ppppuStack_c0 = (ulong ****)0x0;
  uStack_b8 = 0;
  ppppuStack_c8 = (ulong ****)0x0;
  ppppuStack_e0 = (ulong ****)0x0;
  uStack_d8 = 0;
  pppuStack_f0 = (ulong ***)0xffffffffffffffff;
  ppppuStack_e8 = (ulong ****)0x0;
  if (((uVar23 < 7) ||
      (*(int *)pppppuVar21 != 0x646f722e || *(int *)((long)pppppuVar21 + 3) != 0x61746164)) ||
     ((uVar23 != 7 && (*(byte *)((long)pppppuVar21 + 7) != 0x2e)))) {
    if (uVar23 == 5) {
      if (((*(int *)pppppuVar21 == 0x6e69662e && *(byte *)((long)pppppuVar21 + 4) == 0x69) ||
          (*(int *)pppppuVar21 == 0x696e692e && *(byte *)((long)pppppuVar21 + 4) == 0x74)) ||
         (*(int *)pppppuVar21 == 0x7865742e && *(byte *)((long)pppppuVar21 + 4) == 0x74)) {
LAB_109dd636c:
        pppppuVar24 = (ulong *****)0x6;
        goto LAB_109dd662c;
      }
      if (*(int *)pppppuVar21 != 0x7461642e || *(byte *)((long)pppppuVar21 + 4) != 0x61) {
LAB_109dd63e0:
        if (*(int *)pppppuVar21 == 0x7373622e) {
          if (uVar23 != 4) {
LAB_109dd6604:
            if (*(byte *)((long)pppppuVar21 + 4) != 0x2e) goto LAB_109dd63f4;
          }
        }
        else {
LAB_109dd63f4:
          if (((uVar23 < 0xb) ||
              (*pppppuVar21 != (ulong ****)0x72615f74696e692e ||
               *(long *)((long)pppppuVar21 + 3) != 0x79617272615f7469)) ||
             ((uVar23 != 0xb && (*(byte *)((long)pppppuVar21 + 0xb) != 0x2e)))) goto LAB_109dd6430;
        }
      }
    }
    else if (uVar23 == 8) {
      if (*pppppuVar21 == (ulong ****)0x31617461646f722e) goto LAB_109dd6330;
      if (*(int *)pppppuVar21 == 0x7865742e && *(byte *)((long)pppppuVar21 + 4) == 0x74) {
LAB_109dd6360:
        if (*(byte *)((long)pppppuVar21 + 5) != 0x2e) goto LAB_109dd6374;
        goto LAB_109dd636c;
      }
      if (*(int *)pppppuVar21 != 0x7461642e || *(byte *)((long)pppppuVar21 + 4) != 0x61)
      goto LAB_109dd63e0;
LAB_109dd639c:
      if (*(byte *)((long)pppppuVar21 + 5) != 0x2e) {
LAB_109dd63a8:
        if (uVar23 != 6) goto LAB_109dd63e0;
        if (*(int *)pppppuVar21 != 0x7461642e || *(short *)((long)pppppuVar21 + 4) != 0x3161) {
          if (*(int *)pppppuVar21 != 0x7373622e) goto LAB_109dd6430;
          goto LAB_109dd6604;
        }
      }
    }
    else if (uVar23 < 5) {
      if ((uVar23 != 4) || (*(int *)pppppuVar21 != 0x7373622e)) {
LAB_109dd6430:
        pppppuVar12 = (ulong *****)&UNK_10f5fea23;
        param_4 = (ulong *****)0xb;
        pppppuVar11 = pppppuVar21;
        FUN_109dd7ff4(pppppuVar21,uVar23,&UNK_10f5fea23);
        if (((ulong)pppppuVar11 & 1) == 0) {
          pppppuVar12 = (ulong *****)&UNK_10f5fea2f;
          param_4 = (ulong *****)0xe;
          pppppuVar11 = pppppuVar21;
          FUN_109dd7ff4(pppppuVar21,uVar23,&UNK_10f5fea2f);
          if (((ulong)pppppuVar11 & 1) == 0) {
            pppppuVar12 = (ulong *****)&UNK_10f5fa7b4;
            param_4 = (ulong *****)0x6;
            pppppuVar11 = pppppuVar21;
            FUN_109dd7ff4(pppppuVar21,uVar23,&UNK_10f5fa7b4);
            if (((ulong)pppppuVar11 & 1) == 0) {
              pppppuVar12 = (ulong *****)&UNK_10f5fa7ae;
              param_4 = (ulong *****)0x5;
              pppppuVar11 = pppppuVar21;
              FUN_109dd7ff4(pppppuVar21,uVar23,&UNK_10f5fa7ae);
              if ((int)pppppuVar11 == 0) {
                pppppuVar24 = (ulong *****)0x0;
                goto LAB_109dd662c;
              }
            }
            pppppuVar24 = (ulong *****)0x403;
            goto LAB_109dd662c;
          }
        }
      }
    }
    else {
      if (*(int *)pppppuVar21 == 0x7865742e && *(byte *)((long)pppppuVar21 + 4) == 0x74) {
        if (uVar23 != 5) goto LAB_109dd6360;
        goto LAB_109dd636c;
      }
LAB_109dd6374:
      if (*(int *)pppppuVar21 != 0x7461642e || *(byte *)((long)pppppuVar21 + 4) != 0x61)
      goto LAB_109dd63a8;
      if (uVar23 != 5) goto LAB_109dd639c;
    }
    pppppuVar24 = (ulong *****)0x3;
  }
  else {
LAB_109dd6330:
    pppppuVar24 = (ulong *****)0x2;
  }
LAB_109dd662c:
  plVar9 = *(long **)(param_1 + 8);
  (**(code **)(*plVar9 + 0x28))();
  if (*(int *)plVar9[1] == 0x19) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    if (param_2 != 0) {
      plVar9 = *(long **)(param_1 + 8);
      (**(code **)(*plVar9 + 0x28))();
      if (*(int *)plVar9[1] != 3) {
        plVar9 = *(long **)(param_1 + 8);
        ppppuStack_b0 = (ulong ****)0x0;
        pppppuVar11 = &ppppuStack_e8;
        pppppuVar12 = &ppppuStack_b0;
        (**(code **)(*plVar9 + 0xe8))(plVar9,pppppuVar11,pppppuVar12);
        if (((ulong)plVar9 & 1) != 0) goto LAB_109dd74e4;
        plVar9 = *(long **)(param_1 + 8);
        (**(code **)(*plVar9 + 0x28))();
        if (*(int *)plVar9[1] != 0x19) goto LAB_109dd6988;
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      }
    }
    plVar9 = *(long **)(param_1 + 8);
    (**(code **)(*plVar9 + 0x28))();
    iVar4 = *(int *)plVar9[1];
    plVar9 = *(long **)(param_1 + 8);
    (**(code **)(*plVar9 + 0x28))();
    piVar15 = (int *)plVar9[1];
    if (iVar4 == 3) {
      pppppuVar26 = *(ulong ******)(piVar15 + 2);
      lVar17 = *(long *)(piVar15 + 4);
      uVar25 = (ulong)(lVar17 != 0);
      if (lVar17 != 0) {
        pppppuVar26 = (ulong *****)((long)pppppuVar26 + 1);
      }
      uVar20 = uVar25;
      if (uVar25 <= lVar17 - 1U) {
        uVar20 = lVar17 - 1U;
      }
      uVar2 = 0;
      if (lVar17 != 0) {
        uVar2 = uVar20;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      plVar9 = *(long **)(param_1 + 8);
      (**(code **)(*plVar9 + 0x30))();
      uStack_a8 = uVar2 - uVar25;
      pppppuVar11 = &ppppuStack_b0;
      pppppuVar12 = &ppppuStack_118;
      ppppuStack_b0 = (ulong ****)pppppuVar26;
      FUN_109e03e50(pppppuVar11,0,pppppuVar12);
      if (((((ulong)pppppuVar11 & 1) == 0) && (uStack_a8 == 0)) &&
         (pppppuVar11 = (ulong *****)ppppuStack_118, (ulong)ppppuStack_118 >> 0x20 == 0))
      goto LAB_109dd6738;
      lVar17 = uVar2 - uVar25;
      if (lVar17 != 0) {
        bVar8 = false;
        pppppuVar11 = (ulong *****)0x0;
        do {
          bVar5 = *(byte *)pppppuVar26;
          uVar27 = (uint)pppppuVar11;
          if (bVar5 < 99) {
            if (bVar5 < 0x52) {
              if (bVar5 == 0x3f) {
                bVar8 = true;
              }
              else if (bVar5 == 0x47) {
                pppppuVar11 = (ulong *****)(ulong)(uVar27 | 0x200);
              }
              else {
                if (bVar5 != 0x4d) goto LAB_109dd6c18;
                pppppuVar11 = (ulong *****)(ulong)(uVar27 | 0x10);
              }
            }
            else if (bVar5 < 0x54) {
              if (bVar5 == 0x52) {
                uVar19 = uVar27 | 0x200000;
                if (*(int *)((long)plVar9 + 0x3c) == 0xe) {
                  uVar19 = uVar27 | 0x100000;
                }
                pppppuVar11 = (ulong *****)(ulong)uVar19;
              }
              else {
                if (bVar5 != 0x53) goto LAB_109dd6c18;
                pppppuVar11 = (ulong *****)(ulong)(uVar27 | 0x20);
              }
            }
            else if (bVar5 == 0x54) {
              pppppuVar11 = (ulong *****)(ulong)(uVar27 | 0x400);
            }
            else {
              if (bVar5 != 0x61) goto LAB_109dd6c18;
              pppppuVar11 = (ulong *****)(ulong)(uVar27 | 2);
            }
          }
          else if (bVar5 < 0x73) {
            if (bVar5 < 0x65) {
              if (bVar5 == 99) {
LAB_109dd6ba4:
                pppppuVar11 = (ulong *****)(ulong)(uVar27 | 0x20000000);
              }
              else {
                if (bVar5 != 100) goto LAB_109dd6c18;
LAB_109dd6bac:
                pppppuVar11 = (ulong *****)(ulong)(uVar27 | 0x10000000);
              }
            }
            else if (bVar5 == 0x65) {
              pppppuVar11 = (ulong *****)(ulong)(uVar27 | 0x80000000);
            }
            else {
              if (bVar5 != 0x6f) goto LAB_109dd6c18;
              pppppuVar11 = (ulong *****)(ulong)(uVar27 | 0x80);
            }
          }
          else if (bVar5 < 0x78) {
            if (bVar5 == 0x73) goto LAB_109dd6bac;
            if (bVar5 != 0x77) goto LAB_109dd6c18;
            pppppuVar11 = (ulong *****)(ulong)(uVar27 | 1);
          }
          else {
            if (bVar5 != 0x78) {
              if (bVar5 == 0x79) goto LAB_109dd6ba4;
              goto LAB_109dd6c18;
            }
            pppppuVar11 = (ulong *****)(ulong)(uVar27 | 4);
          }
          pppppuVar26 = (ulong *****)((long)pppppuVar26 + 1);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        goto LAB_109dd6bf8;
      }
LAB_109dd6920:
      bVar8 = false;
      uVar27 = 0;
      bVar6 = true;
      bVar7 = true;
LAB_109dd6d78:
      plVar9 = *(long **)(param_1 + 8);
      (**(code **)(*plVar9 + 0x28))();
      if (*(int *)plVar9[1] == 0x19) {
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        iVar4 = *(int *)plVar9[1];
        if (iVar4 != 3) {
          if ((iVar4 != 0x24) && (iVar4 != 0x2d)) {
            if (*(char *)((long)plVar9 + 0x69) == '\x01') {
              ppppuStack_b0 = (ulong ****)&UNK_10f5fec6b;
              uStack_90 = 0x103;
              plVar22 = *(long **)(param_1 + 8);
              plVar9 = plVar22;
              (**(code **)(*plVar22 + 0x28))();
              pppppuVar11 = (ulong *****)plVar9[0xc];
              pppppuVar12 = &ppppuStack_b0;
              param_4 = (ulong *****)0x0;
              FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
            }
            else {
              ppppuStack_b0 = (ulong ****)&UNK_10f5fec95;
              uStack_90 = 0x103;
              plVar22 = *(long **)(param_1 + 8);
              plVar9 = plVar22;
              (**(code **)(*plVar22 + 0x28))();
              pppppuVar11 = (ulong *****)plVar9[0xc];
              pppppuVar12 = &ppppuStack_b0;
              param_4 = (ulong *****)0x0;
              FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
            }
            goto LAB_109dd74e4;
          }
          (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
          if (*(int *)plVar9[1] == 4) {
            plVar9 = *(long **)(param_1 + 8);
            (**(code **)(*plVar9 + 0x28))();
            uStack_b8 = *(ulong *)(plVar9[1] + 0x10);
            ppppuStack_c0 = *(ulong *****)(plVar9[1] + 8);
            (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
            goto LAB_109dd6e7c;
          }
        }
        plVar9 = *(long **)(param_1 + 8);
        (**(code **)(*plVar9 + 0xc0))(plVar9,&ppppuStack_c0);
        if ((int)plVar9 != 0) {
          ppppuStack_b0 = (ulong ****)&UNK_10f5fbf88;
          uStack_90 = 0x103;
          plVar22 = *(long **)(param_1 + 8);
          plVar9 = plVar22;
          (**(code **)(*plVar22 + 0x28))();
          pppppuVar11 = (ulong *****)plVar9[0xc];
          pppppuVar12 = &ppppuStack_b0;
          param_4 = (ulong *****)0x0;
          FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
          goto LAB_109dd74e4;
        }
      }
LAB_109dd6e7c:
      plVar9 = *(long **)(param_1 + 8);
      (**(code **)(*plVar9 + 0x28))();
      if (uStack_b8 == 0) {
        if (bVar7) {
          if (bVar6) {
            if (*(int *)plVar9[1] == 9) goto joined_r0x000109dd7640;
            ppppuStack_b0 = (ulong ****)&UNK_10f5feadf;
            uStack_90 = 0x103;
            plVar22 = *(long **)(param_1 + 8);
            plVar9 = plVar22;
            (**(code **)(*plVar22 + 0x28))();
            pppppuVar11 = (ulong *****)plVar9[0xc];
            pppppuVar12 = &ppppuStack_b0;
            param_4 = (ulong *****)0x0;
            FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
          }
          else {
            ppppuStack_b0 = (ulong ****)&UNK_10f5feabb;
            uStack_90 = 0x103;
            plVar22 = *(long **)(param_1 + 8);
            plVar9 = plVar22;
            (**(code **)(*plVar22 + 0x28))();
            pppppuVar11 = (ulong *****)plVar9[0xc];
            pppppuVar12 = &ppppuStack_b0;
            param_4 = (ulong *****)0x0;
            FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
          }
        }
        else {
          ppppuStack_b0 = (ulong ****)&UNK_10f5fea93;
          uStack_90 = 0x103;
          plVar22 = *(long **)(param_1 + 8);
          plVar9 = plVar22;
          (**(code **)(*plVar22 + 0x28))();
          pppppuVar11 = (ulong *****)plVar9[0xc];
          pppppuVar12 = &ppppuStack_b0;
          param_4 = (ulong *****)0x0;
          FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
        }
      }
      else if (bVar7) {
LAB_109dd6e98:
        if (bVar6) {
joined_r0x000109dd7640:
          if ((uVar27 >> 7 & 1) != 0) {
            plVar9 = *(long **)(param_1 + 8);
            (**(code **)(*plVar9 + 0x28))();
            if (*(int *)plVar9[1] != 0x19) {
              ppppuStack_b0 = (ulong ****)&UNK_10f5fed38;
              uStack_90 = 0x103;
              plVar22 = *(long **)(param_1 + 8);
              plVar9 = plVar22;
              (**(code **)(*plVar22 + 0x28))();
              pppppuVar11 = (ulong *****)plVar9[0xc];
              pppppuVar12 = &ppppuStack_b0;
              param_4 = (ulong *****)0x0;
              FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
              goto LAB_109dd74e4;
            }
            plVar22 = (long *)(param_1 + 8);
            (**(code **)(*(long *)*plVar22 + 0xb8))();
            ppppuStack_118 = (ulong ****)0x0;
            uStack_110 = 0;
            pppppuVar11 = (ulong *****)plVar9[0xc];
            plVar9 = (long *)*plVar22;
            (**(code **)(*plVar9 + 0xc0))(plVar9,&ppppuStack_118);
            plVar22 = (long *)*plVar22;
            if ((int)plVar9 == 0) {
              (**(code **)(*plVar22 + 0x30))();
              uStack_90 = 0x105;
              ppppuStack_b0 = ppppuStack_118;
              uStack_a8 = uStack_110;
              FUN_109da83b8();
              if (((plVar22 == (long *)0x0) || ((plVar22[1] & 0x1c0U) != 0x80)) ||
                 (func_0x000109da4450(), (int)plVar22 == 0)) {
                uStack_90 = 0x503;
                ppppuStack_b0 = (ulong ****)&UNK_10f5fed6b;
                ppppuStack_a0 = ppppuStack_118;
                uStack_98 = uStack_110;
                uVar25 = *(ulong *)(param_1 + 8);
                pppppuVar12 = &ppppuStack_b0;
                param_4 = (ulong *****)0x0;
                FUN_109dd98f8(uVar25,pppppuVar11,pppppuVar12,0,0);
                if ((uVar25 & 1) != 0) goto LAB_109dd74e4;
              }
            }
            else {
              (**(code **)(*plVar22 + 0x28))();
              if ((*(long *)(plVar22[1] + 0x10) != 1) || (**(char **)(plVar22[1] + 8) != '0')) {
                ppppuStack_b0 = (ulong ****)&UNK_10f5fed52;
                uStack_90 = 0x103;
                plVar22 = *(long **)(param_1 + 8);
                plVar9 = plVar22;
                (**(code **)(*plVar22 + 0x28))();
                pppppuVar11 = (ulong *****)plVar9[0xc];
                pppppuVar12 = &ppppuStack_b0;
                param_4 = (ulong *****)0x0;
                FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
                goto LAB_109dd74e4;
              }
              (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
            }
          }
          plVar9 = *(long **)(param_1 + 8);
          (**(code **)(*plVar9 + 0x28))();
          if (*(int *)plVar9[1] != 0x19) goto LAB_109dd6998;
          (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
          ppppuStack_118 = (ulong ****)0x0;
          uStack_110 = 0;
          plVar22 = *(long **)(param_1 + 8);
          (**(code **)(*plVar22 + 0xc0))(plVar22,&ppppuStack_118);
          if ((int)plVar22 == 0) {
            if ((uStack_110 == 6) &&
               (*(int *)ppppuStack_118 == 0x71696e75 &&
                *(short *)((long)ppppuStack_118 + 4) == 0x6575)) {
              if (*(int *)plVar9[1] == 0x19) {
                (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
                plVar9 = *(long **)(param_1 + 8);
                pppppuVar11 = (ulong *****)&pppuStack_f0;
                (**(code **)(*plVar9 + 0x100))();
                if (((ulong)plVar9 & 1) == 0) {
                  if ((long)pppuStack_f0 < 0) {
                    ppppuStack_b0 = (ulong ****)&UNK_10f5fedb4;
                    uStack_90 = 0x103;
                    plVar22 = *(long **)(param_1 + 8);
                    plVar9 = plVar22;
                    (**(code **)(*plVar22 + 0x28))();
                    pppppuVar11 = (ulong *****)plVar9[0xc];
                    pppppuVar12 = &ppppuStack_b0;
                    param_4 = (ulong *****)0x0;
                    FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
                  }
                  else {
                    if (pppuStack_f0 < (ulong ****)0xffffffff) goto LAB_109dd6998;
                    ppppuStack_b0 = (ulong ****)&UNK_10f5fedcf;
                    uStack_90 = 0x103;
                    plVar22 = *(long **)(param_1 + 8);
                    plVar9 = plVar22;
                    (**(code **)(*plVar22 + 0x28))();
                    pppppuVar11 = (ulong *****)plVar9[0xc];
                    pppppuVar12 = &ppppuStack_b0;
                    param_4 = (ulong *****)0x0;
                    FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
                  }
                }
              }
              else {
                ppppuStack_b0 = (ulong ****)&UNK_10f5feda4;
                uStack_90 = 0x103;
                plVar22 = *(long **)(param_1 + 8);
                plVar9 = plVar22;
                (**(code **)(*plVar22 + 0x28))();
                pppppuVar11 = (ulong *****)plVar9[0xc];
                pppppuVar12 = &ppppuStack_b0;
                param_4 = (ulong *****)0x0;
                FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
              }
            }
            else {
              ppppuStack_b0 = (ulong ****)&UNK_10f5fed92;
              uStack_90 = 0x103;
              plVar22 = *(long **)(param_1 + 8);
              plVar9 = plVar22;
              (**(code **)(*plVar22 + 0x28))();
              pppppuVar11 = (ulong *****)plVar9[0xc];
              pppppuVar12 = &ppppuStack_b0;
              param_4 = (ulong *****)0x0;
              FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
            }
          }
          else {
            ppppuStack_b0 = (ulong ****)&UNK_10f5fbf88;
            uStack_90 = 0x103;
            plVar22 = *(long **)(param_1 + 8);
            plVar9 = plVar22;
            (**(code **)(*plVar22 + 0x28))();
            pppppuVar11 = (ulong *****)plVar9[0xc];
            pppppuVar12 = &ppppuStack_b0;
            param_4 = (ulong *****)0x0;
            FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
          }
        }
        else {
          plVar9 = *(long **)(param_1 + 8);
          (**(code **)(*plVar9 + 0x28))();
          if (*(int *)plVar9[1] == 0x19) {
            (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
            plVar22 = *(long **)(param_1 + 8);
            if (*(int *)plVar9[1] == 4) {
              (**(code **)(*plVar22 + 0x28))();
              uStack_d8 = *(ulong *)(plVar22[1] + 0x10);
              ppppuStack_e0 = *(ulong *****)(plVar22[1] + 8);
              (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
            }
            else {
              (**(code **)(*plVar22 + 0xc0))(plVar22,&ppppuStack_e0);
              if ((int)plVar22 != 0) {
                ppppuStack_b0 = (ulong ****)&UNK_10f5fecfc;
                uStack_90 = 0x103;
                plVar22 = *(long **)(param_1 + 8);
                plVar9 = plVar22;
                (**(code **)(*plVar22 + 0x28))();
                pppppuVar11 = (ulong *****)plVar9[0xc];
                pppppuVar12 = &ppppuStack_b0;
                param_4 = (ulong *****)0x0;
                FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
                goto LAB_109dd74e4;
              }
            }
            if (*(int *)plVar9[1] != 0x19) goto joined_r0x000109dd7640;
            (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
            ppppuStack_118 = (ulong ****)0x0;
            uStack_110 = 0;
            plVar9 = *(long **)(param_1 + 8);
            (**(code **)(*plVar9 + 0xc0))(plVar9,&ppppuStack_118);
            if ((int)plVar9 == 0) {
              if ((uStack_110 == 6) &&
                 (*(int *)ppppuStack_118 == 0x646d6f63 &&
                  *(short *)((long)ppppuStack_118 + 4) == 0x7461)) goto joined_r0x000109dd7640;
              ppppuStack_b0 = (ulong ****)&UNK_10f5fed1f;
              uStack_90 = 0x103;
              plVar22 = *(long **)(param_1 + 8);
              plVar9 = plVar22;
              (**(code **)(*plVar22 + 0x28))();
              pppppuVar11 = (ulong *****)plVar9[0xc];
              pppppuVar12 = &ppppuStack_b0;
              param_4 = (ulong *****)0x0;
              FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
            }
            else {
              ppppuStack_b0 = (ulong ****)&UNK_10f5fed0f;
              uStack_90 = 0x103;
              plVar22 = *(long **)(param_1 + 8);
              plVar9 = plVar22;
              (**(code **)(*plVar22 + 0x28))();
              pppppuVar11 = (ulong *****)plVar9[0xc];
              pppppuVar12 = &ppppuStack_b0;
              param_4 = (ulong *****)0x0;
              FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
            }
          }
          else {
            ppppuStack_b0 = (ulong ****)&UNK_10f5fece8;
            uStack_90 = 0x103;
            plVar22 = *(long **)(param_1 + 8);
            plVar9 = plVar22;
            (**(code **)(*plVar22 + 0x28))();
            pppppuVar11 = (ulong *****)plVar9[0xc];
            pppppuVar12 = &ppppuStack_b0;
            param_4 = (ulong *****)0x0;
            FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
          }
        }
      }
      else {
        plVar9 = *(long **)(param_1 + 8);
        (**(code **)(*plVar9 + 0x28))();
        if (*(int *)plVar9[1] == 0x19) {
          (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
          plVar9 = *(long **)(param_1 + 8);
          pppppuVar11 = &ppppuStack_c8;
          (**(code **)(*plVar9 + 0x100))();
          if (((ulong)plVar9 & 1) == 0) {
            if (0 < (long)ppppuStack_c8) goto LAB_109dd6e98;
            ppppuStack_b0 = (ulong ****)&UNK_10f5feccc;
            uStack_90 = 0x103;
            plVar22 = *(long **)(param_1 + 8);
            plVar9 = plVar22;
            (**(code **)(*plVar22 + 0x28))();
            pppppuVar11 = (ulong *****)plVar9[0xc];
            pppppuVar12 = &ppppuStack_b0;
            param_4 = (ulong *****)0x0;
            FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
          }
        }
        else {
          ppppuStack_b0 = (ulong ****)&UNK_10f5fecb4;
          uStack_90 = 0x103;
          plVar22 = *(long **)(param_1 + 8);
          plVar9 = plVar22;
          (**(code **)(*plVar22 + 0x28))();
          pppppuVar11 = (ulong *****)plVar9[0xc];
          pppppuVar12 = &ppppuStack_b0;
          param_4 = (ulong *****)0x0;
          FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
        }
      }
    }
    else {
      if (*piVar15 != 0x25) {
        ppppuStack_b0 = (ulong ****)&UNK_10f5aef1d;
        uStack_90 = 0x103;
        plVar22 = *(long **)(param_1 + 8);
        plVar9 = plVar22;
        (**(code **)(*plVar22 + 0x28))();
        pppppuVar11 = (ulong *****)plVar9[0xc];
        pppppuVar12 = &ppppuStack_b0;
        param_4 = (ulong *****)0x0;
        FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
        goto LAB_109dd74e4;
      }
      plVar9 = *(long **)(param_1 + 8);
      (**(code **)(*plVar9 + 0x28))();
      if (*(int *)plVar9[1] != 0x25) goto LAB_109dd6920;
      pppppuVar11 = (ulong *****)0x0;
      do {
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        plVar9 = *(long **)(param_1 + 8);
        (**(code **)(*plVar9 + 0x28))();
        if (*(int *)plVar9[1] != 2) goto LAB_109dd6c18;
        plVar9 = *(long **)(param_1 + 8);
        (**(code **)(*plVar9 + 0x28))();
        piVar15 = (int *)plVar9[1];
        if (*piVar15 == 2) {
          plVar9 = *(long **)(piVar15 + 2);
          lVar17 = *(long *)(piVar15 + 4);
        }
        else {
          plVar9 = *(long **)(piVar15 + 2);
          lVar17 = *(long *)(piVar15 + 4);
          uVar25 = (ulong)(lVar17 != 0);
          if (lVar17 != 0) {
            plVar9 = (long *)((long)plVar9 + 1);
          }
          uVar20 = uVar25;
          if (uVar25 <= lVar17 - 1U) {
            uVar20 = lVar17 - 1U;
          }
          uVar2 = 0;
          if (lVar17 != 0) {
            uVar2 = uVar20;
          }
          lVar17 = uVar2 - uVar25;
        }
        if (lVar17 == 3) {
          if ((short)*plVar9 != 0x6c74 || *(char *)((long)plVar9 + 2) != 's') goto LAB_109dd6c18;
          uVar27 = 0x400;
        }
        else if (lVar17 == 9) {
          if (*plVar9 != 0x74736e6963657865 || (char)plVar9[1] != 'r') goto LAB_109dd6c18;
          uVar27 = 4;
        }
        else {
          if (lVar17 != 5) goto LAB_109dd6c18;
          if ((int)*plVar9 == 0x6f6c6c61 && *(char *)((long)plVar9 + 4) == 'c') {
            uVar27 = 2;
          }
          else {
            if ((int)*plVar9 != 0x74697277 || *(char *)((long)plVar9 + 4) != 'e')
            goto LAB_109dd6c18;
            uVar27 = 1;
          }
        }
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        plVar9 = *(long **)(param_1 + 8);
        (**(code **)(*plVar9 + 0x28))();
        pppppuVar11 = (ulong *****)(ulong)(uVar27 | (uint)pppppuVar11);
        if (*(int *)plVar9[1] != 0x19) break;
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        plVar9 = *(long **)(param_1 + 8);
        (**(code **)(*plVar9 + 0x28))();
      } while (*(int *)plVar9[1] == 0x25);
LAB_109dd6738:
      bVar8 = false;
LAB_109dd6bf8:
      uVar27 = (uint)pppppuVar11;
      if (uVar27 != 0xffffffff) {
        pppppuVar24 = (ulong *****)(ulong)(uVar27 | (uint)pppppuVar24);
        bVar7 = ((ulong)pppppuVar11 & 0x10) == 0;
        if ((uVar27 >> 9 & 1) == 0) {
          bVar6 = true;
        }
        else {
          if (bVar8) {
            ppppuStack_b0 = (ulong ****)&UNK_10f5fea3e;
            uStack_90 = 0x103;
            plVar22 = *(long **)(param_1 + 8);
            plVar9 = plVar22;
            (**(code **)(*plVar22 + 0x28))();
            pppppuVar11 = (ulong *****)plVar9[0xc];
            pppppuVar12 = &ppppuStack_b0;
            param_4 = (ulong *****)0x0;
            FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
            goto LAB_109dd74e4;
          }
          bVar6 = false;
          bVar8 = false;
        }
        goto LAB_109dd6d78;
      }
LAB_109dd6c18:
      ppppuStack_b0 = (ulong ****)&UNK_10f5fda11;
      uStack_90 = 0x103;
      plVar22 = *(long **)(param_1 + 8);
      plVar9 = plVar22;
      (**(code **)(*plVar22 + 0x28))();
      pppppuVar11 = (ulong *****)plVar9[0xc];
      pppppuVar12 = &ppppuStack_b0;
      param_4 = (ulong *****)0x0;
      FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
    }
    goto LAB_109dd74e4;
  }
LAB_109dd6988:
  bVar8 = false;
  uVar27 = 0;
LAB_109dd6998:
  plVar9 = *(long **)(param_1 + 8);
  (**(code **)(*plVar9 + 0x28))();
  if (*(int *)plVar9[1] != 9) {
    ppppuStack_b0 = (ulong ****)&UNK_10f5feadf;
    uStack_90 = 0x103;
    plVar22 = *(long **)(param_1 + 8);
    plVar9 = plVar22;
    (**(code **)(*plVar22 + 0x28))();
    pppppuVar11 = (ulong *****)plVar9[0xc];
    pppppuVar12 = &ppppuStack_b0;
    param_4 = (ulong *****)0x0;
    FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
    goto LAB_109dd74e4;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  if (uStack_b8 == 0) {
    if (uVar23 < 5) {
      if ((uVar23 != 4) || (*(int *)pppppuVar21 != 0x7373622e)) {
LAB_109dd6cd8:
        pppppuVar12 = pppppuVar21;
        FUN_109dd7ff4(pppppuVar21,uVar23,&UNK_10f5fa7ae,5);
        if (((ulong)pppppuVar12 & 1) == 0) {
          pppppuVar12 = pppppuVar21;
          FUN_109dd7ff4(pppppuVar21,uVar23,&UNK_10f5fea23,0xb);
          if (((ulong)pppppuVar12 & 1) != 0) goto code_r0x000109dd6d60;
          pppppuVar12 = pppppuVar21;
          FUN_109dd7ff4(pppppuVar21,uVar23,&UNK_10f5fea2f,0xe);
          uVar19 = 0x10;
          if ((int)pppppuVar12 == 0) {
            uVar19 = 1;
          }
          pppppuVar26 = (ulong *****)(ulong)uVar19;
          goto LAB_109dd7780;
        }
      }
    }
    else {
      if (*(int *)pppppuVar21 == 0x746f6e2e && *(byte *)((long)pppppuVar21 + 4) == 0x65)
      goto LAB_109dd6d68;
      if (((10 < uVar23) &&
          (*pppppuVar21 == (ulong ****)0x72615f74696e692e &&
           *(long *)((long)pppppuVar21 + 3) == 0x79617272615f7469)) &&
         ((uVar23 == 0xb || (*(byte *)((long)pppppuVar21 + 0xb) == 0x2e)))) goto LAB_109dd76f4;
      if ((*(int *)pppppuVar21 != 0x7373622e) || (*(byte *)((long)pppppuVar21 + 4) != 0x2e))
      goto LAB_109dd6cd8;
    }
LAB_109dd6cf4:
    pppppuVar26 = (ulong *****)0x8;
    goto LAB_109dd7780;
  }
  switch(uStack_b8) {
  case 4:
    if (*(int *)ppppuStack_c0 != 0x65746f6e) goto LAB_109dd7478;
LAB_109dd6d68:
    pppppuVar26 = (ulong *****)0x7;
    break;
  default:
    goto LAB_109dd7478;
  case 6:
    if (*(int *)ppppuStack_c0 == 0x69626f6e && *(short *)((long)ppppuStack_c0 + 4) == 0x7374)
    goto LAB_109dd6cf4;
    if (*(int *)ppppuStack_c0 == 0x69776e75 && *(short *)((long)ppppuStack_c0 + 4) == 0x646e) {
      pppppuVar26 = (ulong *****)0x70000001;
      break;
    }
    goto LAB_109dd7478;
  case 8:
    if ((ulong ****)*ppppuStack_c0 != (ulong ****)0x73746962676f7270) goto LAB_109dd7478;
    pppppuVar26 = (ulong *****)0x1;
    break;
  case 10:
    if ((ulong ****)*ppppuStack_c0 == (ulong ****)0x7272615f74696e69 &&
        *(short *)(ppppuStack_c0 + 1) == 0x7961) {
LAB_109dd76f4:
      pppppuVar26 = (ulong *****)0xe;
    }
    else {
      if ((ulong ****)*ppppuStack_c0 != (ulong ****)0x7272615f696e6966 ||
          *(short *)(ppppuStack_c0 + 1) != 0x7961) goto LAB_109dd7478;
code_r0x000109dd6d60:
      pppppuVar26 = (ulong *****)0xf;
    }
    break;
  case 0xb:
    if ((ulong ****)*ppppuStack_c0 != (ulong ****)0x72646f5f6d766c6c ||
        *(long *)((long)ppppuStack_c0 + 3) != 0x62617472646f5f6d) goto LAB_109dd7478;
    pppppuVar26 = (ulong *****)0x6fff4c00;
    break;
  case 0xc:
    if ((ulong ****)*ppppuStack_c0 != (ulong ****)0x6d79735f6d766c6c ||
        *(int *)(ppppuStack_c0 + 1) != 0x74726170) goto LAB_109dd7478;
    uVar19 = 5;
code_r0x000109dd7774:
    pppppuVar26 = (ulong *****)(ulong)(uVar19 | 0x6fff4c00);
    break;
  case 0xd:
    if ((ulong ****)*ppppuStack_c0 != (ulong ****)0x5f74696e69657270 ||
        *(long *)((long)ppppuStack_c0 + 5) != 0x79617272615f7469) goto LAB_109dd7478;
    pppppuVar26 = (ulong *****)0x10;
    break;
  case 0xf:
    if ((ulong ****)*ppppuStack_c0 == (ulong ****)0x66666f5f6d766c6c &&
        *(long *)((long)ppppuStack_c0 + 7) == 0x676e6964616f6c66) {
      uVar19 = 0xb;
      goto code_r0x000109dd7774;
    }
    goto LAB_109dd7478;
  case 0x10:
    if ((ulong ****)*ppppuStack_c0 == (ulong ****)0x5f62625f6d766c6c &&
        (ulong ****)ppppuStack_c0[1] == (ulong ****)0x70616d5f72646461) {
      uVar19 = 10;
      goto code_r0x000109dd7774;
    }
    goto LAB_109dd7478;
  case 0x13:
    if (((ulong ****)*ppppuStack_c0 != (ulong ****)0x6e696c5f6d766c6c ||
        (ulong ****)ppppuStack_c0[1] != (ulong ****)0x6974706f5f72656b) ||
        *(long *)((long)ppppuStack_c0 + 0xb) != 0x736e6f6974706f5f) goto LAB_109dd7478;
    pppppuVar26 = (ulong *****)0x6fff4c01;
    break;
  case 0x17:
    if (((ulong ****)*ppppuStack_c0 == (ulong ****)0x6c61635f6d766c6c &&
        (ulong ****)ppppuStack_c0[1] == (ulong ****)0x5f68706172675f6c) &&
        *(long *)((long)ppppuStack_c0 + 0xf) == 0x656c69666f72705f) {
      uVar19 = 9;
      goto code_r0x000109dd7774;
    }
LAB_109dd7478:
    ppppuStack_b0 = ppppuStack_c0;
    uStack_a8 = uStack_b8;
    pppppuVar12 = &ppppuStack_b0;
    FUN_109e03e50(pppppuVar12,0,&ppppuStack_118);
    if (((((ulong)pppppuVar12 & 1) != 0) || (uStack_a8 != 0)) ||
       (pppppuVar26 = (ulong *****)ppppuStack_118, (ulong)ppppuStack_118 >> 0x20 != 0)) {
      ppppuStack_b0 = (ulong ****)&UNK_10f5febb2;
      uStack_90 = 0x103;
      plVar22 = *(long **)(param_1 + 8);
      plVar9 = plVar22;
      (**(code **)(*plVar22 + 0x28))();
      pppppuVar11 = (ulong *****)plVar9[0xc];
      pppppuVar12 = &ppppuStack_b0;
      param_4 = (ulong *****)0x0;
      FUN_109dd98f8(plVar22,pppppuVar11,pppppuVar12,0,0);
LAB_109dd74e4:
      plVar9 = (long *)0x1;
      goto LAB_109dd74e8;
    }
    break;
  case 0x18:
    if (((ulong ****)*ppppuStack_c0 != (ulong ****)0x7065645f6d766c6c ||
        (ulong ****)ppppuStack_c0[1] != (ulong ****)0x6c5f746e65646e65) ||
        (ulong ****)ppppuStack_c0[2] != (ulong ****)0x7365697261726269) goto LAB_109dd7478;
    pppppuVar26 = (ulong *****)0x6fff4c04;
  }
LAB_109dd7780:
  if (bVar8) {
    plVar9 = *(long **)(param_1 + 8);
    (**(code **)(*plVar9 + 0x38))();
    if (((*(uint *)(plVar9 + 0xf) != 0) &&
        (lVar17 = *(long *)(plVar9[0xe] + (ulong)*(uint *)(plVar9 + 0xf) * 0x20 + -0x20),
        lVar17 != 0)) &&
       (pbVar1 = (byte *)(*(ulong *)(lVar17 + 0xf0) & 0xfffffffffffffff8), pbVar1 != (byte *)0x0)) {
      if ((*pbVar1 >> 2 & 1) == 0) {
        ppppuStack_e0 = (ulong ****)0x0;
        uStack_d8 = 0;
      }
      else {
        ppppuStack_e0 = (ulong ****)(*(ulong **)(pbVar1 + -8) + 2);
        uStack_d8 = **(ulong **)(pbVar1 + -8);
      }
      pppppuVar24 = (ulong *****)(ulong)((uint)pppppuVar24 | 0x200);
    }
  }
  pppppuVar10 = *(ulong ******)(param_1 + 8);
  (*(code *)(*pppppuVar10)[6])();
  uStack_90 = 0x105;
  uStack_f8 = 0x105;
  ppppuStack_118 = ppppuStack_e0;
  uStack_110 = uStack_d8;
  param_4 = pppppuVar24;
  ppppuStack_b0 = (ulong ****)pppppuVar21;
  uStack_a8 = uVar23;
  FUN_109da8870();
  plVar9 = *(long **)(param_1 + 8);
  (**(code **)(*plVar9 + 0x38))();
  pppppuVar11 = pppppuVar10;
  pppppuVar12 = (ulong *****)ppppuStack_e8;
  (**(code **)(*plVar9 + 0xa8))();
  if ((uStack_b8 != 0) && (*(int *)(pppppuVar10 + 0x1c) != (int)pppppuVar26)) {
    plVar9 = *(long **)(param_1 + 8);
    (**(code **)(*plVar9 + 0x30))();
    if (*(uint *)(plVar9 + 6) == 0x26) {
      if (uVar23 == 9) {
        uVar19 = (uint)*(byte *)(pppppuVar21 + 1);
        bVar8 = *pppppuVar21 == (ulong ****)0x6d6172665f68652e;
        uVar14 = 0x65;
LAB_109dd78e4:
        if (((int)pppppuVar26 == 1) && (bVar8 && uVar19 == uVar14)) goto LAB_109dd7a04;
      }
    }
    else if ((6 < uVar23) && ((*(uint *)(plVar9 + 6) & 0xfffffffc) == 0x10)) {
      uVar19 = *(uint *)((long)pppppuVar21 + 3);
      bVar8 = *(int *)pppppuVar21 == 0x6265642e;
      uVar14 = 0x5f677562;
      goto LAB_109dd78e4;
    }
    uStack_120 = 0x503;
    apppuStack_140[0] = (ulong ***)&UNK_10f5febc7;
    ppppuStack_118 = apppuStack_140;
    puStack_108 = &UNK_10f5febe1;
    uStack_f8 = 0x302;
    uVar25 = (ulong)*(uint *)(pppppuVar10 + 0x1c);
    plVar9 = alStack_70;
    if (*(uint *)(pppppuVar10 + 0x1c) == 0) {
      plVar9 = (long *)&uStack_71;
      uStack_71 = 0x30;
    }
    else {
      do {
        plVar9 = (long *)((long)plVar9 + -1);
        *(undefined *)plVar9 = (&UNK_10e043c4d)[uVar25 & 0xf];
        bVar8 = 0xf < uVar25;
        uVar25 = uVar25 >> 4;
      } while (bVar8);
    }
    ppppuStack_130 = (ulong ****)pppppuVar21;
    uStack_128 = uVar23;
    func_0x0001092d2e50(apppuStack_158,plVar9,alStack_70,(long)alStack_70 - (long)plVar9);
    cVar13 = (char)uStack_f8;
    if ((char)uStack_f8 == '\0') {
      uVar18 = 1;
    }
    else if ((char)uStack_f8 == '\x01') {
      ppppuStack_b0 = apppuStack_158;
      uVar18 = 1;
      cVar13 = '\x04';
    }
    else {
      ppppuStack_b0 = ppppuStack_118;
      if (uStack_f8._1_1_ != '\x01') {
        cVar13 = '\x02';
        ppppuStack_b0 = (ulong ****)&ppppuStack_118;
      }
      uStack_a8 = uStack_110;
      ppppuStack_a0 = apppuStack_158;
      uVar18 = 4;
    }
    uStack_90 = CONCAT11(uVar18,cVar13);
    pppppuVar12 = &ppppuStack_b0;
    param_4 = (ulong *****)0x0;
    pppppuVar11 = param_3;
    FUN_109dd98f8(*(undefined8 *)(param_1 + 8),param_3,pppppuVar12,0,0);
    if (cStack_141 < '\0') {
      __ZdlPv(apppuStack_158[0]);
    }
  }
LAB_109dd7a04:
  if (((uVar27 == 0) && ((ulong *****)ppppuStack_c8 == (ulong *****)0x0)) && (uStack_b8 == 0)) {
    pppppuVar26 = (ulong *****)0x0;
  }
  else {
    uVar19 = *(uint *)((long)pppppuVar10 + 0xe4);
    uVar25 = (ulong)uVar19;
    pppppuVar26 = (ulong *****)ppppuStack_c8;
    if (uVar19 != (uint)pppppuVar24) {
      uStack_120 = 0x503;
      apppuStack_140[0] = (ulong ***)&UNK_10f5febf0;
      ppppuStack_118 = apppuStack_140;
      puStack_108 = &UNK_10f5febe1;
      uStack_f8 = 0x302;
      plVar9 = alStack_70;
      if (uVar19 == 0) {
        plVar9 = (long *)&uStack_71;
        uStack_71 = 0x30;
      }
      else {
        do {
          plVar9 = (long *)((long)plVar9 + -1);
          *(undefined *)plVar9 = (&UNK_10e043c4d)[uVar25 & 0xf];
          bVar8 = 0xf < uVar25;
          uVar25 = uVar25 >> 4;
        } while (bVar8);
      }
      ppppuStack_130 = (ulong ****)pppppuVar21;
      uStack_128 = uVar23;
      func_0x0001092d2e50(apppuStack_158,plVar9,alStack_70,(long)alStack_70 - (long)plVar9);
      ppppuStack_b0 = (ulong ****)&ppppuStack_118;
      uStack_90 = 0x402;
      pppppuVar12 = &ppppuStack_b0;
      param_4 = (ulong *****)0x0;
      pppppuVar11 = param_3;
      ppppuStack_a0 = apppuStack_158;
      FUN_109dd98f8(*(undefined8 *)(param_1 + 8),param_3,pppppuVar12,0,0);
      pppppuVar26 = (ulong *****)ppppuStack_c8;
      if (cStack_141 < '\0') {
        __ZdlPv(apppuStack_158[0]);
        pppppuVar26 = (ulong *****)ppppuStack_c8;
      }
    }
  }
  if ((((uVar27 != 0) || (pppppuVar26 != (ulong *****)0x0)) || (uStack_b8 != 0)) &&
     (pppppuVar26 != (ulong *****)(ulong)*(uint *)((long)pppppuVar10 + 0xec))) {
    uStack_120 = 0x503;
    apppuStack_140[0] = (ulong ***)&UNK_10f5fec0b;
    ppppuStack_118 = apppuStack_140;
    puStack_108 = &UNK_10f5fec28;
    uStack_f8 = 0x302;
    ppppuStack_b0 = (ulong ****)&ppppuStack_118;
    uStack_90 = 0x802;
    pppppuVar12 = &ppppuStack_b0;
    param_4 = (ulong *****)0x0;
    pppppuVar11 = param_3;
    ppppuStack_130 = (ulong ****)pppppuVar21;
    uStack_128 = uVar23;
    ppppuStack_a0 = (ulong ****)(ulong)*(uint *)((long)pppppuVar10 + 0xec);
    FUN_109dd98f8(*(undefined8 *)(param_1 + 8),param_3,pppppuVar12,0,0);
  }
  plVar9 = *(long **)(param_1 + 8);
  (**(code **)(*plVar9 + 0x30))();
  if ((*(char *)((long)plVar9 + 0x641) == '\x01') &&
     (((*(uint *)((long)pppppuVar10 + 0xe4) ^ 0xffffffff) & 6) == 0)) {
    plVar9 = *(long **)(param_1 + 8);
    (**(code **)(*plVar9 + 0x30))();
    plVar9 = plVar9 + 0xc9;
    pppppuVar11 = &ppppuStack_b0;
    ppppuStack_b0 = (ulong ****)pppppuVar10;
    FUN_109dce3e0();
    if ((int)plVar9 == 0) goto LAB_109dd74e8;
    plVar9 = *(long **)(param_1 + 8);
    (**(code **)(*plVar9 + 0x30))();
    if (*(ushort *)(plVar9 + 0xd6) < 3) {
      ppppuStack_b0 = (ulong ****)&UNK_10f5fec35;
      uStack_90 = 0x103;
      pppppuVar12 = &ppppuStack_b0;
      param_4 = (ulong *****)0x0;
      (**(code **)(**(long **)(param_1 + 8) + 0xa8))
                (*(long **)(param_1 + 8),param_3,pppppuVar12,0,0);
      pppppuVar11 = param_3;
    }
    if (pppppuVar10[1] == (ulong ****)0x0) {
      pppppuVar21 = *(ulong ******)(param_1 + 8);
      (*(code *)(*pppppuVar21)[6])();
      ppppuStack_b0 = (ulong ****)&UNK_10f5fa737;
      uStack_90 = 0x103;
      FUN_109da7f80();
      plVar9 = *(long **)(param_1 + 8);
      (**(code **)(*plVar9 + 0x38))();
      pppppuVar12 = (ulong *****)0x0;
      pppppuVar11 = pppppuVar21;
      (**(code **)(*plVar9 + 0xc0))();
      plVar9 = (long *)0x0;
      pppppuVar10[1] = (ulong ****)pppppuVar21;
      goto LAB_109dd74e8;
    }
  }
  plVar9 = (long *)0x0;
LAB_109dd74e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_70[0]) {
    return plVar9;
  }
  ___stack_chk_fail();
  if (cStack_141 < '\0') {
    __ZdlPv(apppuStack_158[0]);
  }
  __Unwind_Resume();
  if (param_4 <= pppppuVar11) {
    if ((param_4 == (ulong *****)0x0) ||
       (plVar22 = plVar9, _memcmp(plVar9,pppppuVar12,param_4), (int)plVar22 == 0)) {
      if (pppppuVar11 == param_4) {
        plVar9 = (long *)0x1;
      }
      else {
        plVar9 = (long *)(ulong)(*(byte *)((long)plVar9 + (long)param_4) == 0x2e);
      }
    }
    else {
      plVar9 = (long *)0x0;
    }
    return plVar9;
  }
  return (long *)0x0;
}



/* Entry: 109dd7ff4; end: 109dd806b;  */

bool FUN_109dd7ff4(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  
  if (param_2 < param_4) {
    return false;
  }
  if ((param_4 == 0) || (lVar2 = param_1, _memcmp(param_1,param_3,param_4), (int)lVar2 == 0)) {
    if (param_2 == param_4) {
      bVar1 = true;
    }
    else {
      bVar1 = *(char *)(param_1 + param_4) == '.';
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 109dd806c; end: 109dd8137;  */

long FUN_109dd806c(long param_1,ulong param_2,int param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  byte bStack_19;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar3 = (byte *)&lStack_18;
  if (param_2 == 0) {
    pbVar3 = &bStack_19;
    bStack_19 = 0x30;
  }
  uVar1 = param_2;
  if (param_4 != 0) {
    uVar1 = 1;
  }
  if (uVar1 != 0) {
    bVar5 = 0x20;
    if (param_3 == 0) {
      bVar5 = 0;
    }
    uVar6 = 1;
    do {
      pbVar3 = pbVar3 + -1;
      *pbVar3 = (&UNK_10e043c4d)[param_2 & 0xf] | bVar5;
      param_2 = param_2 >> 4;
      uVar1 = param_2;
      if (param_4 != 0) {
        uVar1 = (ulong)(uVar6 < param_4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != 0);
  }
  lVar4 = (long)&lStack_18 - (long)pbVar3;
  func_0x0001092d2e50();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return param_1;
  }
  ___stack_chk_fail();
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  func_0x000109dd3040();
  lVar2 = param_1;
  FUN_109dd6040(param_1,1,lVar4);
  if ((int)lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    func_0x000109dd30b8();
  }
  return lVar2;
}



/* Entry: 109dd8138; end: 109dd8393;  */

long FUN_109dd8138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  func_0x000109dd3040();
  lVar1 = param_1;
  FUN_109dd6040(param_1,1,param_4);
  if ((int)lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    func_0x000109dd30b8();
  }
  return lVar1;
}



/* Entry: 109dd8394; end: 109dd8d67;  */

undefined8 FUN_109dd8394(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x38))();
  if ((*(uint *)(plVar1 + 0xf) != 0) &&
     (*(long *)(plVar1[0xe] + (ulong)*(uint *)(plVar1 + 0xf) * 0x20 + -0x10) != 0)) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x38))();
    (**(code **)(*plVar1 + 0xa8))();
    return 0;
  }
  apuStack_58[0] = &UNK_10f5fe2e5;
  uStack_38 = 0x103;
  plVar2 = *(long **)(param_1 + 8);
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x28))();
  FUN_109dd98f8(plVar2,plVar1[0xc],apuStack_58,0,0);
  return 1;
}



/* Entry: 109dd8d68; end: 109dd8fe3;  */

bool FUN_109dd8d68(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined *apuStack_68 [4];
  undefined2 uStack_48;
  
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 3) {
    (**(code **)(**(long **)(param_1 + 8) + 0x28))();
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    (**(code **)(**(long **)(param_1 + 8) + 0x30))();
    uStack_48 = 0x101;
    FUN_109da8870();
    (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    func_0x000109dd3040();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0xa8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x1f8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x1f8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x1f8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x1e0))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x1f8))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x270))();
    (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    func_0x000109dd30b8();
  }
  else {
    apuStack_68[0] = &UNK_10f5aef1d;
    uStack_48 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar2[0xc],apuStack_68,0,0);
  }
  return iVar1 != 3;
}



/* Entry: 109dd8fe4; end: 109dd946f;  */

long * FUN_109dd8fe4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_40);
  if ((int)plVar1 == 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    if (*(int *)plVar1[1] == 0x19) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      puStack_78 = (undefined *)0x0;
      uStack_70 = 0;
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_78);
      if ((int)plVar1 != 0) {
        puStack_68 = &UNK_10f5fbf88;
        uStack_48 = 0x103;
        plVar2 = *(long **)(param_1 + 8);
        plVar3 = plVar2;
        (**(code **)(*plVar2 + 0x28))();
        FUN_109dd98f8(plVar2,plVar3[0xc],&puStack_68,0,0);
        return plVar1;
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x30))();
      uStack_48 = 0x105;
      puStack_68 = puStack_40;
      uStack_60 = uStack_38;
      FUN_109da7538();
      (**(code **)(**(long **)(param_1 + 8) + 0x30))();
      uStack_48 = 0x105;
      puStack_68 = puStack_78;
      uStack_60 = uStack_70;
      FUN_109da7538();
      plVar3 = *(long **)(param_1 + 8);
      (**(code **)(*plVar3 + 0x38))();
      (**(code **)(*plVar3 + 0x118))();
      return plVar1;
    }
    puStack_68 = &UNK_10f5feea4;
  }
  else {
    puStack_68 = &UNK_10f5fbf88;
  }
  uStack_48 = 0x103;
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = plVar3;
  (**(code **)(*plVar3 + 0x28))();
  FUN_109dd98f8(plVar3,plVar1[0xc],&puStack_68,0,0);
  return (long *)0x1;
}



/* Entry: 109dd9470; end: 109dd9587;  */

undefined8 FUN_109dd9470(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *apuStack_50 [4];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  if (*(int *)plVar1[1] != 9) {
    plVar1 = *(long **)(param_1 + 8);
    apuStack_50[0] = (undefined *)0x0;
    (**(code **)(*plVar1 + 0xe8))(plVar1,&uStack_28,apuStack_50);
    if (((ulong)plVar1 & 1) != 0) {
      return 1;
    }
  }
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  if (*(int *)plVar1[1] != 9) {
    apuStack_50[0] = &UNK_10f5feadf;
    uStack_30 = 0x103;
    plVar2 = *(long **)(param_1 + 8);
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x28))();
    FUN_109dd98f8(plVar2,plVar1[0xc],apuStack_50,0,0);
    return 1;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x38))();
  if ((int)plVar1[0xf] != 0) {
    (**(code **)(*plVar1 + 0xa8))();
  }
  return 0;
}



/* Entry: 109dd9588; end: 109dd959b;  */

undefined8 FUN_109dd9588(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined2 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = (undefined *)0x0;
  uStack_48 = 0;
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x28))();
  lVar6 = plVar1[0xc];
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_50);
  if ((int)plVar1 == 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))();
    if (*(int *)plVar1[1] == 0x19) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
      puStack_88 = (undefined *)0x0;
      uStack_80 = 0;
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      lVar7 = plVar1[0xc];
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_88);
      if ((int)plVar1 != 0) goto LAB_109dda108;
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      if (*(int *)plVar1[1] == 0x19) {
        (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
        uVar2 = *(ulong *)(param_1 + 8);
        puStack_78 = &UNK_10f5fef5b;
        uStack_58 = 0x103;
        func_0x000109dd9b2c(uVar2,&uStack_90,&puStack_78);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        plVar1 = *(long **)(param_1 + 8);
        (**(code **)(*plVar1 + 0x28))();
        if (*(int *)plVar1[1] == 9) {
          plVar3 = *(long **)(param_1 + 8);
          (**(code **)(*plVar3 + 0x30))();
          uStack_58 = 0x105;
          puStack_78 = puStack_50;
          uStack_70 = uStack_48;
          FUN_109da7538();
          plVar4 = *(long **)(param_1 + 8);
          (**(code **)(*plVar4 + 0x30))();
          uStack_58 = 0x105;
          puStack_78 = puStack_88;
          uStack_70 = uStack_80;
          FUN_109da7538();
          plVar1 = *(long **)(param_1 + 8);
          (**(code **)(*plVar1 + 0x38))();
          plVar5 = *(long **)(param_1 + 8);
          (**(code **)(*plVar5 + 0x30))();
          FUN_109dae8f4(plVar3,0,plVar5,lVar6);
          plVar5 = *(long **)(param_1 + 8);
          (**(code **)(*plVar5 + 0x30))();
          FUN_109dae8f4(plVar4,0,plVar5,lVar7);
          (**(code **)(*plVar1 + 0x478))(plVar1,plVar3,plVar4,uStack_90);
          return 0;
        }
        puStack_78 = &UNK_10f5fc1d0;
        goto LAB_109dda2cc;
      }
    }
    puStack_78 = &UNK_10f5feea4;
  }
  else {
LAB_109dda108:
    puStack_78 = &UNK_10f5fc428;
  }
LAB_109dda2cc:
  uStack_58 = 0x103;
  plVar5 = *(long **)(param_1 + 8);
  plVar1 = plVar5;
  (**(code **)(*plVar5 + 0x28))();
  FUN_109dd98f8(plVar5,plVar1[0xc],&puStack_78,0,0);
  return 1;
}



/* Entry: 109dd959c; end: 109dd9663;  */

undefined8 * FUN_109dd959c(undefined8 *param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  *param_1 = &PTR____cxa_pure_virtual_110b58ef0;
  param_1[1] = param_1 + 3;
  param_1[2] = 0x100000000;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined2 *)((long)param_1 + 0x6a) = 0x100;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 10;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  uStack_34 = 0xb;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_109dd9664(param_1 + 1,&uStack_34,&uStack_48);
  return param_1;
}



/* Entry: 109dd9664; end: 109dd9723;  */

long * FUN_109dd9664(long *param_1,undefined4 *param_2,long *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 auStack_48 [2];
  
  if (*(uint *)(param_1 + 1) < *(uint *)((long)param_1 + 0xc)) {
    puVar2 = (undefined4 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x28);
    *puVar2 = *param_2;
    lVar6 = param_3[1];
    lVar5 = *param_3;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(long *)(puVar2 + 4) = lVar6;
    *(long *)(puVar2 + 2) = lVar5;
    puVar2[8] = 0x40;
    FUN_109d301fc();
    uVar1 = (int)param_1[1] + 1;
    *(uint *)(param_1 + 1) = uVar1;
    return (long *)(*param_1 + (ulong)uVar1 * 0x28 + -0x28);
  }
  plVar3 = param_1;
  FUN_109dffb24(param_1,param_1 + 2,0,0x28,auStack_48);
  plVar4 = plVar3 + (ulong)*(uint *)(param_1 + 1) * 5;
  *(undefined4 *)plVar4 = *param_2;
  lVar6 = param_3[1];
  lVar5 = *param_3;
  plVar4[3] = 0;
  plVar4[2] = lVar6;
  plVar4[1] = lVar5;
  *(undefined4 *)(plVar4 + 4) = 0x40;
  FUN_109d301fc();
  FUN_109db840c(param_1,plVar3);
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  *param_1 = (long)plVar3;
  uVar1 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = auStack_48[0];
  return plVar3 + (ulong)uVar1 * 5 + -5;
}



/* Entry: 109dd9724; end: 109dd97a3;  */

long * FUN_109dd9724(long *param_1)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    puVar3 = (uint *)(plVar2 + (ulong)uVar1 * 5 + -1);
    lVar4 = (ulong)uVar1 * -0x28;
    do {
      if ((0x40 < *puVar3) && (*(long *)(puVar3 + -2) != 0)) {
        __ZdaPv();
      }
      puVar3 = puVar3 + -10;
      lVar4 = lVar4 + 0x28;
    } while (lVar4 != 0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 109dd97a4; end: 109dd985f;  */

long * FUN_109dd97a4(long *param_1,undefined4 *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 auStack_48 [2];
  
  plVar2 = param_1;
  FUN_109dffb24(param_1,param_1 + 2,0,0x28,auStack_48);
  plVar3 = plVar2 + (ulong)*(uint *)(param_1 + 1) * 5;
  *(undefined4 *)plVar3 = *param_2;
  lVar5 = param_3[1];
  lVar4 = *param_3;
  plVar3[3] = 0;
  plVar3[2] = lVar5;
  plVar3[1] = lVar4;
  *(undefined4 *)(plVar3 + 4) = 0x40;
  FUN_109d301fc();
  FUN_109db840c(param_1,plVar2);
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  *param_1 = (long)plVar2;
  uVar1 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = auStack_48[0];
  return plVar2 + (ulong)uVar1 * 5 + -5;
}



/* Entry: 109dd9860; end: 109dd98f7;  */

bool FUN_109dd9860(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 9) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  else {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    apuStack_48[0] = &UNK_10f5fef39;
    uStack_28 = 0x103;
    FUN_109dd98f8(param_1,*(undefined8 *)(plVar2[1] + 8),apuStack_48,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dd98f8; end: 109dd99f3;  */

bool FUN_109dd98f8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long alStack_88 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = 0x40;
  uStack_98 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_a8 = param_2;
  plStack_a0 = alStack_88;
  FUN_109e04614(param_3,&plStack_a0);
  puVar4 = &uStack_a8;
  uStack_48 = param_4;
  uStack_40 = param_5;
  func_0x000109dd9c50(param_1 + 2,puVar4);
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  if (*(int *)plVar2[1] == 1) {
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_109dc0bd8();
  }
  plVar2 = plStack_a0;
  if (plStack_a0 != alStack_88) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return true;
  }
  ___stack_chk_fail();
  if (plStack_a0 != alStack_88) {
    _free();
  }
  __Unwind_Resume();
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x28))();
  iVar1 = *(int *)plVar3[1];
  if (iVar1 == 9) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  else {
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0x28))();
    FUN_109dd98f8(plVar2,*(undefined8 *)(plVar3[1] + 8),puVar4,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dd99f4; end: 109dd9d3f;  */

bool FUN_109dd99f4(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x28))();
  iVar1 = *(int *)plVar2[1];
  if (iVar1 == 9) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  else {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x28))();
    FUN_109dd98f8(param_1,*(undefined8 *)(plVar2[1] + 8),param_2,0,0);
  }
  return iVar1 != 9;
}



/* Entry: 109dd9d40; end: 109dd9dff;  */

uint FUN_109dd9d40(ulong param_1,code *param_2,ulong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined *apuStack_78 [4];
  undefined2 uStack_58;
  
  iVar5 = (int)param_3;
  uVar3 = param_1;
  func_0x000109dd9bd8(param_1,9);
  if ((uVar3 & 1) == 0) {
    (*param_2)();
    if ((param_3 & 1) == 0) {
      do {
        uVar3 = param_1;
        func_0x000109dd9bd8(param_1,9);
        if ((uVar3 & 1) != 0) break;
        if (param_4 != 0) {
          apuStack_78[0] = &UNK_10f5fef4a;
          uStack_58 = 0x103;
          uVar4 = param_1;
          func_0x000109dd9a7c(param_1,0x19,apuStack_78);
          if ((uVar4 & 1) != 0) break;
        }
        iVar1 = iVar5;
        (*param_2)();
      } while (iVar1 == 0);
      uVar2 = (uint)uVar3 ^ 1;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 109dd9e00; end: 109dd9e13;  */

undefined8 FUN_109dd9e00(void)

{
  return 0;
}



/* Entry: 109dd9e14; end: 109dd9e8f;  */

long * FUN_109dd9e14(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    plVar2 = plVar2 + (ulong)uVar1 * 0xe + -0xd;
    lVar3 = (ulong)uVar1 * -0x70;
    do {
      if (plVar2 + 3 != (long *)*plVar2) {
        _free();
      }
      plVar2 = plVar2 + -0xe;
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != 0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 109dd9e90; end: 109dd9ef7;  */

ulong FUN_109dd9e90(ulong *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((ulong)*(uint *)((long)param_1 + 0xc) < param_3 + (ulong)(uint)param_1[1]) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (ulong)(uint)param_1[1] * 0x70;
    if ((param_2 >= uVar2 && param_2 <= uVar1) && (param_2 < uVar2 || uVar1 != param_2)) {
      FUN_109dd9ef8();
      param_2 = *param_1 + (param_2 - uVar2);
    }
    else {
      FUN_109dd9ef8();
    }
  }
  return param_2;
}



/* Entry: 109dd9ef8; end: 109dd9f67;  */

void FUN_109dd9ef8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 auStack_38 [2];
  
  plVar1 = param_1;
  FUN_109dffb24(param_1,param_1 + 2,param_2,0x70,auStack_38);
  FUN_109dd9f68(param_1,plVar1);
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  *param_1 = (long)plVar1;
  *(undefined4 *)((long)param_1 + 0xc) = auStack_38[0];
  return;
}


