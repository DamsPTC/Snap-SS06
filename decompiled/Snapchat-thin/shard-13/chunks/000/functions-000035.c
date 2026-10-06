/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109dd9f68; end: 109dda0bb;  */

void FUN_109dd9f68(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *param_1;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar5);
      puVar2 = (undefined8 *)(lVar6 + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar1 + 4;
      puVar1[3] = 0x40;
      puVar1[2] = 0;
      if (puVar2[2] != 0) {
        func_0x000109d3a838(puVar1 + 1,puVar2 + 1);
      }
      uVar7 = puVar2[0xc];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xc] = uVar7;
      lVar5 = lVar5 + 0x70;
    } while (puVar2 + 0xe != (undefined8 *)(lVar6 + (ulong)uVar3 * 0x70));
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 != 0) {
      plVar4 = (long *)(*param_1 + (ulong)uVar3 * 0x70 + -0x68);
      lVar5 = (ulong)uVar3 * -0x70;
      do {
        if (plVar4 + 3 != (long *)*plVar4) {
          _free();
        }
        plVar4 = plVar4 + -0xe;
        lVar5 = lVar5 + 0x70;
      } while (lVar5 != 0);
    }
  }
  return;
}



/* Entry: 109dda0bc; end: 109dda32b;  */

undefined8 FUN_109dda0bc(long param_1)

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



/* Entry: 109dda32c; end: 109dda333;  */

void FUN_109dda32c(void)

{
  return;
}



/* Entry: 109dda334; end: 109dda4ef;  */

void FUN_109dda334(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x18) = param_2;
  (**(code **)(*param_2 + 0x28))();
  *(long **)(param_1 + 0x20) = param_2;
  plVar1 = *(long **)(param_1 + 0x18);
  *(long **)(param_1 + 8) = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&UNK_10f5fd845,5,param_1,FUN_109dda4f0);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fa793,5,param_1,FUN_109dda4f8);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd84b,8,param_1,FUN_109dda554);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fe9d3,5,param_1,FUN_109ddae68);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd85e,5,param_1,0x109ddaff0);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fdf65,6,param_1,0x109ddb224);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fd89d,5,param_1,0x109ddb36c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fe9f3,6,param_1,0x109ddb36c);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fea05,9,param_1,0x109ddb36c);
                    /* WARNING: Could not recover jumptable at 0x000109dda4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))
            (*(long **)(param_1 + 8),&UNK_10f5fea0f,7,param_1,0x109ddb36c);
  return;
}



/* Entry: 109dda4f0; end: 109dda4f7;  */

undefined8 FUN_109dda4f0(void)

{
  return 0;
}



/* Entry: 109dda4f8; end: 109dda553;  */

undefined8 FUN_109dda4f8(long param_1)

{
  long *plVar1;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x38))();
  (**(code **)(*plVar1 + 0xa8))();
  return 0;
}



/* Entry: 109dda554; end: 109ddab53;  */

void FUN_109dda554(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined1 *apuStack_138 [4];
  undefined2 uStack_118;
  undefined *apuStack_110 [4];
  undefined2 uStack_f0;
  undefined *apuStack_e8 [2];
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  plVar3 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar3 + 0xc0))(plVar3,&plStack_88);
  if ((int)plVar3 != 0) {
    plStack_78 = (long *)&UNK_10f5fc428;
LAB_109dda59c:
    uStack_58 = 0x103;
    plVar9 = *(long **)(param_1 + 8);
    plVar3 = plVar9;
    (**(code **)(*plVar9 + 0x28))();
    FUN_109dd98f8(plVar9,plVar3[0xc],&plStack_78,0,0);
    return;
  }
  uVar4 = param_1;
  FUN_109ddab54(param_1,0x19,&DAT_10f68e8ee);
  if ((uVar4 & 1) != 0) {
    return;
  }
  piVar5 = *(int **)(*(long *)(param_1 + 0x20) + 8);
  if (*piVar5 == 3) {
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x28))();
    lVar6 = *(long *)(plVar3[1] + 0x10);
    uVar8 = (ulong)(lVar6 != 0);
    uVar4 = uVar8;
    if (uVar8 <= lVar6 - 1U) {
      uVar4 = lVar6 - 1U;
    }
    uVar1 = 0;
    if (lVar6 != 0) {
      uVar1 = uVar4;
    }
    lVar6 = uVar1 - uVar8;
    if (lVar6 == 0) {
      uVar10 = 0;
      bVar12 = false;
      bVar13 = false;
    }
    else {
      bVar13 = false;
      bVar12 = false;
      uVar10 = 0;
      pbVar7 = (byte *)(*(long *)(plVar3[1] + 8) + uVar8);
      do {
        bVar2 = *pbVar7;
        if (bVar2 < 0x54) {
          if (bVar2 == 0x47) {
            bVar13 = true;
          }
          else {
            if (bVar2 != 0x53) {
LAB_109ddaae4:
              plStack_78 = (long *)&UNK_10f5fda11;
              goto LAB_109dda59c;
            }
            uVar10 = uVar10 | 1;
          }
        }
        else if (bVar2 == 0x54) {
          uVar10 = uVar10 | 2;
        }
        else {
          if (bVar2 != 0x70) goto LAB_109ddaae4;
          bVar12 = true;
        }
        pbVar7 = pbVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    uVar4 = param_1;
    FUN_109ddab54(param_1,0x19,&DAT_10f68e8ee);
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar4 = param_1;
    FUN_109ddab54(param_1,0x2d,"@");
    if ((uVar4 & 1) != 0) {
      return;
    }
    uStack_98 = 0;
    uStack_90 = 0;
    if ((bVar13) && (uVar4 = param_1, FUN_109ddace0(param_1,&uStack_98), (uVar4 & 1) != 0)) {
      return;
    }
    uVar4 = param_1;
    FUN_109ddab54(param_1,9,&UNK_10f5fefb9);
    if ((uVar4 & 1) != 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x30))();
    uStack_58 = 0x105;
    plStack_78 = plStack_88;
    uStack_70 = uStack_80;
    uStack_a0 = 0x105;
    uStack_c0 = uStack_98;
    uStack_b8 = uStack_90;
    FUN_109da99f8();
    if (*(uint *)(plVar3 + 0x20) != uVar10) {
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uStack_c8 = 0x503;
      apuStack_e8[0] = &UNK_10f5febf0;
      plStack_d8 = plStack_88;
      uStack_d0 = uStack_80;
      apuStack_110[0] = &UNK_10f5febe1;
      uStack_f0 = 0x103;
      FUN_109d35b30(&uStack_c0,apuStack_e8,apuStack_110);
      FUN_109dd806c(auStack_150,(int)plVar3[0x20],0,0);
      uStack_118 = 0x104;
      apuStack_138[0] = (undefined1 *)auStack_150;
      FUN_109d35b30(&plStack_78,&uStack_c0,apuStack_138);
      FUN_109dd98f8(uVar11,param_4,&plStack_78,0,0);
      if (cStack_139 < '\0') {
        __ZdlPv(auStack_150[0]);
      }
    }
    if (bVar12) {
      bVar2 = *(byte *)((long)plVar3 + 0xdc);
      uVar10 = bVar2 & 0xfc;
      if (((5 < bVar2 - 0xf && uVar10 != 4) && uVar10 != 8) && (2 < bVar2 - 0xc)) {
        uVar11 = *(undefined8 *)(param_1 + 0x18);
        plStack_78 = (long *)&UNK_10f5fefbd;
        uStack_58 = 0x103;
        goto LAB_109dda67c;
      }
      *(undefined1 *)((long)plVar3 + 0xfc) = 1;
    }
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x38))();
    (**(code **)(*plVar3 + 0xa8))();
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    param_4 = *(undefined8 *)(piVar5 + 2);
    uStack_60 = *(undefined8 *)(piVar5 + 4);
    plStack_78 = (long *)&UNK_10f5fef8d;
    uStack_70 = 0x2b;
    uStack_58 = 0x505;
    uStack_68 = param_4;
LAB_109dda67c:
    FUN_109dd98f8(uVar11,param_4,&plStack_78,0,0);
  }
  return;
}



/* Entry: 109ddab54; end: 109ddacdf;  */

undefined8 FUN_109ddab54(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long alStack_98 [2];
  char cStack_81;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  
  if (**(int **)(*(long *)(param_1 + 0x20) + 8) == param_2) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    uVar3 = 0;
  }
  else {
    func_0x000107c31940(alStack_98,&UNK_10f417c67);
    uVar3 = param_3;
    _strlen(param_3);
    plVar1 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar1,param_3,uVar3);
    lStack_78 = plVar1[1];
    lStack_80 = *plVar1;
    lStack_70 = plVar1[2];
    plVar1[1] = 0;
    plVar1[2] = 0;
    *plVar1 = 0;
    plVar1 = &lStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar1,&UNK_10f5fefdf,0xf);
    lStack_58 = plVar1[1];
    ppuStack_60 = (undefined8 **)*plVar1;
    uStack_50 = plVar1[2];
    plVar1[1] = 0;
    plVar1[2] = 0;
    *plVar1 = 0;
    ppuStack_48 = ppuStack_60;
    if (-1 < (long)uStack_50._7_1_) {
      ppuStack_48 = &ppuStack_60;
    }
    lStack_40 = lStack_58;
    if (-1 < uStack_50) {
      lStack_40 = (long)uStack_50._7_1_;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uStack_38 = *(undefined8 *)(lVar2 + 8);
    uStack_30 = *(undefined8 *)(lVar2 + 0x10);
    uStack_28 = 0x505;
    FUN_109dd98f8(uVar3,uStack_38,&ppuStack_48,0,0);
    if (uStack_50 < 0) {
      __ZdlPv(ppuStack_60);
    }
    if (lStack_70 < 0) {
      __ZdlPv(lStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  }
  return uVar3;
}



/* Entry: 109ddace0; end: 109ddae67;  */

undefined8 FUN_109ddace0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piStack_58;
  long lStack_50;
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  if (**(int **)(*(long *)(param_1 + 0x20) + 8) == 0x19) {
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    if (**(int **)(*(long *)(param_1 + 0x20) + 8) == 4) {
      plVar1 = *(long **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x28))();
      uVar3 = *(undefined8 *)(plVar1[1] + 8);
      param_2[1] = *(undefined8 *)(plVar1[1] + 0x10);
      *param_2 = uVar3;
      (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    }
    else {
      plVar1 = *(long **)(param_1 + 0x18);
      (**(code **)(*plVar1 + 0xc0))(plVar1,param_2);
      if ((int)plVar1 != 0) {
        apuStack_48[0] = &UNK_10f5fecfc;
        goto LAB_109ddad68;
      }
    }
    if (**(int **)(*(long *)(param_1 + 0x20) + 8) != 0x19) {
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
    piStack_58 = (int *)0x0;
    lStack_50 = 0;
    plVar1 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar1 + 0xc0))(plVar1,&piStack_58);
    if ((int)plVar1 == 0) {
      if ((lStack_50 == 6) && (*piStack_58 == 0x646d6f63 && (short)piStack_58[1] == 0x7461)) {
        return 0;
      }
      apuStack_48[0] = &UNK_10f5fed1f;
    }
    else {
      apuStack_48[0] = &UNK_10f5fed0f;
    }
  }
  else {
    apuStack_48[0] = &UNK_10f5fece8;
  }
LAB_109ddad68:
  uStack_28 = 0x103;
  plVar2 = *(long **)(param_1 + 8);
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x28))();
  FUN_109dd98f8(plVar2,plVar1[0xc],apuStack_48,0,0);
  return 1;
}



/* Entry: 109ddae68; end: 109ddb613;  */

undefined8 FUN_109ddae68(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined2 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0xc0))(plVar1,&puStack_40);
  if ((int)plVar1 == 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x30))();
    uStack_48 = 0x105;
    puStack_68 = puStack_40;
    uStack_60 = uStack_38;
    FUN_109da7538();
    uVar2 = param_1;
    FUN_109ddab54(param_1,0x19,&DAT_10f68e8ee);
    if ((uVar2 & 1) == 0) {
      plVar3 = *(long **)(param_1 + 0x18);
      puStack_68 = (undefined *)0x0;
      (**(code **)(*plVar3 + 0xe8))(plVar3,auStack_70,&puStack_68);
      if ((((ulong)plVar3 & 1) == 0) &&
         (uVar2 = param_1, FUN_109ddab54(param_1,9,&UNK_10f5fefb9), (uVar2 & 1) == 0)) {
        if (*(char *)((long)plVar1 + 0x24) == '\x01' && (int)plVar1[4] == 0) {
          puStack_68 = &UNK_10f5fefef;
          uStack_48 = 0x103;
          (**(code **)(**(long **)(param_1 + 8) + 0xa8))
                    (*(long **)(param_1 + 8),param_4,&puStack_68,0,0);
        }
        else {
          plVar1 = *(long **)(param_1 + 8);
          (**(code **)(*plVar1 + 0x38))();
          (**(code **)(*plVar1 + 0x1a0))();
        }
        return 0;
      }
    }
  }
  else {
    puStack_68 = &UNK_10f5fc428;
    uStack_48 = 0x103;
    plVar3 = *(long **)(param_1 + 8);
    plVar1 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    FUN_109dd98f8(plVar3,plVar1[0xc],&puStack_68,0,0);
  }
  return 1;
}



/* Entry: 109ddb614; end: 109ddb61b;  */

void FUN_109ddb614(void)

{
  return;
}



/* Entry: 109ddb61c; end: 109ddb677;  */

void FUN_109ddb61c(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x18) = param_2;
  (**(code **)(*param_2 + 0x28))();
  *(long **)(param_1 + 0x20) = param_2;
  plVar1 = *(long **)(param_1 + 0x18);
  *(long **)(param_1 + 8) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x000109ddb674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,&UNK_10f5ff0b6,6,param_1,FUN_109ddb678);
  return;
}



/* Entry: 109ddb678; end: 109ddb68f;  */

void FUN_109ddb678(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = &UNK_10f5ff0bd;
  uVar2 = 1;
  FUN_109df7828(&UNK_10f5ff0bd);
  FUN_109ddb750();
  if ((int)param_3[1] != 0) {
    if ((int)param_3[1] != 1) {
      lVar3 = *param_3 + 0x10;
      do {
        FUN_109ddb750();
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != *param_3 + (ulong)*(uint *)(param_3 + 1) * 0x10);
    }
    FUN_109ddb750();
  }
  FUN_109ddb7e4(puVar1 + 0x28,uVar2);
  return;
}



/* Entry: 109ddb690; end: 109ddb74f;  */

void FUN_109ddb690(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = param_2;
  if ((int)param_3[1] != 0) {
    puVar1 = (undefined8 *)*param_3;
  }
  uStack_40 = *puVar1;
  uStack_38 = 0;
  FUN_109ddb750(param_1,&uStack_40);
  if ((int)param_3[1] != 0) {
    if ((int)param_3[1] != 1) {
      lVar2 = *param_3 + 0x10;
      do {
        FUN_109ddb750();
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != *param_3 + (ulong)*(uint *)(param_3 + 1) * 0x10);
    }
    FUN_109ddb750();
  }
  FUN_109ddb7e4(param_1 + 0x28,param_2);
  return;
}



/* Entry: 109ddb750; end: 109ddb7e3;  */

void FUN_109ddb750(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  puVar1[5] = 0;
  puVar1[6] = 0;
  uVar3 = *param_2;
  puVar1[7] = 0;
  puVar1[8] = uVar3;
  lVar2 = param_1;
  puStack_28 = puVar1;
  FUN_109ddb8f4(param_1,param_2,param_2,&puStack_28);
  func_0x000109ddbd40(&puStack_28,0);
  *(long *)(*(long *)(lVar2 + 0x20) + 0x48) = param_1;
  return;
}



/* Entry: 109ddb7e4; end: 109ddb8ab;  */

undefined1  [16] FUN_109ddb7e4(ulong *param_1,ulong *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  ulong *puVar20;
  ulong unaff_x25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  
  puVar20 = (ulong *)param_1[1];
  if (puVar20 < (ulong *)param_1[2]) {
    uVar17 = *param_2;
    uVar9 = param_2[3];
    uVar11 = param_2[2];
    puVar20[1] = param_2[1];
    *puVar20 = uVar17;
    puVar20[3] = uVar9;
    puVar20[2] = uVar11;
    puVar20 = puVar20 + 4;
    puVar4 = param_1;
LAB_109ddb894:
    param_1[1] = (ulong)puVar20;
    auVar21._8_8_ = param_2;
    auVar21._0_8_ = puVar4;
    return auVar21;
  }
  lVar19 = (long)puVar20 - *param_1;
  uVar17 = (lVar19 >> 5) + 1;
  if (uVar17 >> 0x3b == 0) {
    uVar9 = (long)param_1[2] - *param_1;
    uVar11 = (long)uVar9 >> 4;
    if (uVar11 <= uVar17) {
      uVar11 = uVar17;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar11 = 0x7ffffffffffffff;
    }
    puVar3 = param_1;
    FUN_109ddb8c0();
    puVar4 = (ulong *)((long)puVar3 + lVar19);
    uVar17 = *param_2;
    uVar13 = param_2[3];
    uVar9 = param_2[2];
    puVar4[1] = param_2[1];
    *puVar4 = uVar17;
    puVar4[3] = uVar13;
    puVar4[2] = uVar9;
    puVar20 = puVar4 + 4;
    param_2 = (ulong *)*param_1;
    uVar17 = (long)puVar4 - (param_1[1] - (long)param_2);
    _memcpy(uVar17);
    puVar4 = (ulong *)*param_1;
    *param_1 = uVar17;
    param_1[1] = (ulong)puVar20;
    param_1[2] = (ulong)(puVar3 + uVar11 * 4);
    if (puVar4 != (ulong *)0x0) {
      __ZdlPv();
    }
    goto LAB_109ddb894;
  }
  FUN_109ddb8ac();
  plVar5 = (long *)&UNK_10f5ff0e9;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar19 = (long)param_2 << 5;
    __Znwm(lVar19);
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = lVar19;
    return auVar22;
  }
  func_0x000104c4f740();
  uVar11 = *param_2 ^ (ulong)(uint)param_2[1];
  uVar17 = plVar5[1];
  if (uVar17 != 0) {
    uVar9 = uVar17 - 1;
    if ((uVar17 & uVar9) == 0) {
      unaff_x25 = uVar9 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar17 <= uVar11) {
        uVar13 = 0;
        if (uVar17 != 0) {
          uVar13 = uVar11 / uVar17;
        }
        unaff_x25 = uVar11 - uVar13 * uVar17;
      }
    }
    puVar12 = *(undefined8 **)(*plVar5 + unaff_x25 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar18 = (long *)*puVar12; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
        uVar13 = plVar18[1];
        if (uVar13 == uVar11) {
          if (plVar18[2] == *param_2 && *(uint *)(plVar18 + 3) == (uint)param_2[1]) {
            uVar7 = 0;
            goto LAB_109ddbc74;
          }
        }
        else {
          if ((uVar17 & uVar9) == 0) {
            uVar13 = uVar13 & uVar9;
          }
          else if (uVar17 <= uVar13) {
            uVar8 = 0;
            if (uVar17 != 0) {
              uVar8 = uVar13 / uVar17;
            }
            uVar13 = uVar13 - uVar8 * uVar17;
          }
          if (uVar13 != unaff_x25) break;
        }
      }
    }
  }
  plVar18 = (long *)0x28;
  __Znwm();
  uStack_b8 = 1;
  *plVar18 = 0;
  plVar18[1] = uVar11;
  lVar19 = *param_3;
  plVar18[3] = param_3[1];
  plVar18[2] = lVar19;
  lVar19 = *param_4;
  *param_4 = 0;
  plVar18[4] = lVar19;
  plStack_c0 = plVar5;
  if ((uVar17 != 0) && ((float)(plVar5[3] + 1) <= *(float *)(plVar5 + 4) * (float)uVar17))
  goto LAB_109ddbbf0;
  uVar9 = 1;
  if (2 < uVar17) {
    uVar9 = (ulong)((uVar17 & uVar17 - 1) != 0);
  }
  uVar9 = uVar9 | uVar17 << 1;
  uVar13 = (ulong)((float)(plVar5[3] + 1) / *(float *)(plVar5 + 4));
  if (uVar9 <= uVar13) {
    uVar9 = uVar13;
  }
  plStack_c8 = plVar18;
  if (uVar9 - 1 == 0) {
    uVar9 = 2;
  }
  else if ((uVar9 & uVar9 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar17 = plVar5[1];
  }
  if (uVar17 < uVar9) {
LAB_109ddba78:
    if (uVar9 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109ddbce0);
      (*pcVar2)();
    }
    lVar19 = uVar9 << 3;
    __Znwm();
    lVar6 = *plVar5;
    *plVar5 = lVar19;
    if (lVar6 != 0) {
      __ZdlPv();
    }
    uVar17 = 0;
    plVar5[1] = uVar9;
    do {
      *(undefined8 *)(*plVar5 + uVar17 * 8) = 0;
      uVar17 = uVar17 + 1;
    } while (uVar9 != uVar17);
    plVar10 = (long *)plVar5[2];
    uVar17 = uVar9;
    if (plVar10 != (long *)0x0) {
      uVar13 = plVar10[1];
      uVar8 = uVar9 - 1;
      if ((uVar9 & uVar8) == 0) {
        uVar13 = uVar13 & uVar8;
      }
      else if (uVar9 <= uVar13) {
        uVar16 = 0;
        if (uVar9 != 0) {
          uVar16 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar16 * uVar9;
      }
      *(long **)(*plVar5 + uVar13 * 8) = plVar5 + 2;
      plVar14 = (long *)*plVar10;
      while (plVar14 != (long *)0x0) {
        uVar16 = plVar14[1];
        if ((uVar9 & uVar8) == 0) {
          uVar16 = uVar16 & uVar8;
        }
        else if (uVar9 <= uVar16) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar16 / uVar9;
          }
          uVar16 = uVar16 - uVar1 * uVar9;
        }
        plVar15 = plVar14;
        if (uVar16 != uVar13) {
          lVar19 = *plVar5;
          if (*(long *)(lVar19 + uVar16 * 8) == 0) {
            *(long **)(lVar19 + uVar16 * 8) = plVar10;
            uVar13 = uVar16;
          }
          else {
            *plVar10 = *plVar14;
            *plVar14 = **(undefined8 **)(lVar19 + uVar16 * 8);
            **(long **)(lVar19 + uVar16 * 8) = (long)plVar14;
            plVar15 = plVar10;
          }
        }
        plVar10 = plVar15;
        plVar14 = (long *)*plVar15;
      }
    }
  }
  else if (uVar9 < uVar17) {
    uVar13 = (ulong)((float)(ulong)plVar5[3] / *(float *)(plVar5 + 4));
    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar13) {
      uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
    }
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    if (uVar9 < uVar17) {
      if (uVar9 != 0) goto LAB_109ddba78;
      lVar19 = *plVar5;
      *plVar5 = 0;
      if (lVar19 != 0) {
        __ZdlPv();
      }
      plVar5[1] = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = plVar5[1];
    }
  }
  if ((uVar17 & uVar17 - 1) == 0) {
    unaff_x25 = uVar17 - 1 & uVar11;
  }
  else {
    unaff_x25 = uVar11;
    if (uVar17 <= uVar11) {
      uVar9 = 0;
      if (uVar17 != 0) {
        uVar9 = uVar11 / uVar17;
      }
      unaff_x25 = uVar11 - uVar9 * uVar17;
    }
  }
LAB_109ddbbf0:
  lVar19 = *plVar5;
  plVar10 = *(long **)(lVar19 + unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = plVar5 + 2;
    *plVar18 = *plVar10;
    *plVar10 = (long)plVar18;
    *(long **)(lVar19 + unaff_x25 * 8) = plVar10;
    if (*plVar18 != 0) {
      uVar11 = *(ulong *)(*plVar18 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar11 = uVar11 & uVar17 - 1;
      }
      else if (uVar17 <= uVar11) {
        uVar9 = 0;
        if (uVar17 != 0) {
          uVar9 = uVar11 / uVar17;
        }
        uVar11 = uVar11 - uVar9 * uVar17;
      }
      *(long **)(*plVar5 + uVar11 * 8) = plVar18;
    }
  }
  else {
    *plVar18 = *plVar10;
    *plVar10 = (long)plVar18;
  }
  plStack_c8 = (long *)0x0;
  plVar5[3] = plVar5[3] + 1;
  FUN_109ddbcf4(&plStack_c8);
  uVar7 = 1;
LAB_109ddbc74:
  auVar23._8_8_ = uVar7;
  auVar23._0_8_ = plVar18;
  return auVar23;
}



/* Entry: 109ddb8ac; end: 109ddb8bf;  */

undefined1  [16] FUN_109ddb8ac(undefined8 param_1,ulong *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x25;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  
  plVar3 = (long *)&UNK_10f5ff0e9;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar4 = (long)param_2 << 5;
    __Znwm(lVar4);
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = lVar4;
    return auVar18;
  }
  func_0x000104c4f740();
  uVar16 = *param_2 ^ (ulong)(uint)param_2[1];
  uVar17 = plVar3[1];
  if (uVar17 != 0) {
    uVar9 = uVar17 - 1;
    if ((uVar17 & uVar9) == 0) {
      unaff_x25 = uVar9 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar17 <= uVar16) {
        uVar11 = 0;
        if (uVar17 != 0) {
          uVar11 = uVar16 / uVar17;
        }
        unaff_x25 = uVar16 - uVar11 * uVar17;
      }
    }
    puVar10 = *(undefined8 **)(*plVar3 + unaff_x25 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar10; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if (plVar15[2] == *param_2 && *(uint *)(plVar15 + 3) == (uint)param_2[1]) {
            uVar6 = 0;
            goto LAB_109ddbc74;
          }
        }
        else {
          if ((uVar17 & uVar9) == 0) {
            uVar11 = uVar11 & uVar9;
          }
          else if (uVar17 <= uVar11) {
            uVar7 = 0;
            if (uVar17 != 0) {
              uVar7 = uVar11 / uVar17;
            }
            uVar11 = uVar11 - uVar7 * uVar17;
          }
          if (uVar11 != unaff_x25) break;
        }
      }
    }
  }
  plVar15 = (long *)0x28;
  __Znwm();
  uStack_88 = 1;
  *plVar15 = 0;
  plVar15[1] = uVar16;
  lVar4 = *param_3;
  plVar15[3] = param_3[1];
  plVar15[2] = lVar4;
  lVar4 = *param_4;
  *param_4 = 0;
  plVar15[4] = lVar4;
  plStack_90 = plVar3;
  if ((uVar17 != 0) && ((float)(plVar3[3] + 1) <= *(float *)(plVar3 + 4) * (float)uVar17))
  goto LAB_109ddbbf0;
  uVar9 = 1;
  if (2 < uVar17) {
    uVar9 = (ulong)((uVar17 & uVar17 - 1) != 0);
  }
  uVar9 = uVar9 | uVar17 << 1;
  uVar11 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
  if (uVar9 <= uVar11) {
    uVar9 = uVar11;
  }
  plStack_98 = plVar15;
  if (uVar9 - 1 == 0) {
    uVar9 = 2;
  }
  else if ((uVar9 & uVar9 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar17 = plVar3[1];
  }
  if (uVar17 < uVar9) {
LAB_109ddba78:
    if (uVar9 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109ddbce0);
      (*pcVar2)();
    }
    lVar4 = uVar9 << 3;
    __Znwm();
    lVar5 = *plVar3;
    *plVar3 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    uVar17 = 0;
    plVar3[1] = uVar9;
    do {
      *(undefined8 *)(*plVar3 + uVar17 * 8) = 0;
      uVar17 = uVar17 + 1;
    } while (uVar9 != uVar17);
    plVar8 = (long *)plVar3[2];
    uVar17 = uVar9;
    if (plVar8 != (long *)0x0) {
      uVar11 = plVar8[1];
      uVar7 = uVar9 - 1;
      if ((uVar9 & uVar7) == 0) {
        uVar11 = uVar11 & uVar7;
      }
      else if (uVar9 <= uVar11) {
        uVar14 = 0;
        if (uVar9 != 0) {
          uVar14 = uVar11 / uVar9;
        }
        uVar11 = uVar11 - uVar14 * uVar9;
      }
      *(long **)(*plVar3 + uVar11 * 8) = plVar3 + 2;
      plVar12 = (long *)*plVar8;
      while (plVar12 != (long *)0x0) {
        uVar14 = plVar12[1];
        if ((uVar9 & uVar7) == 0) {
          uVar14 = uVar14 & uVar7;
        }
        else if (uVar9 <= uVar14) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar14 / uVar9;
          }
          uVar14 = uVar14 - uVar1 * uVar9;
        }
        plVar13 = plVar12;
        if (uVar14 != uVar11) {
          lVar4 = *plVar3;
          if (*(long *)(lVar4 + uVar14 * 8) == 0) {
            *(long **)(lVar4 + uVar14 * 8) = plVar8;
            uVar11 = uVar14;
          }
          else {
            *plVar8 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar4 + uVar14 * 8);
            **(long **)(lVar4 + uVar14 * 8) = (long)plVar12;
            plVar13 = plVar8;
          }
        }
        plVar8 = plVar13;
        plVar12 = (long *)*plVar13;
      }
    }
  }
  else if (uVar9 < uVar17) {
    uVar11 = (ulong)((float)(ulong)plVar3[3] / *(float *)(plVar3 + 4));
    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar11) {
      uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
    }
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (uVar9 < uVar17) {
      if (uVar9 != 0) goto LAB_109ddba78;
      lVar4 = *plVar3;
      *plVar3 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar3[1] = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = plVar3[1];
    }
  }
  if ((uVar17 & uVar17 - 1) == 0) {
    unaff_x25 = uVar17 - 1 & uVar16;
  }
  else {
    unaff_x25 = uVar16;
    if (uVar17 <= uVar16) {
      uVar9 = 0;
      if (uVar17 != 0) {
        uVar9 = uVar16 / uVar17;
      }
      unaff_x25 = uVar16 - uVar9 * uVar17;
    }
  }
LAB_109ddbbf0:
  lVar4 = *plVar3;
  plVar8 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar3 + 2;
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar8;
    if (*plVar15 != 0) {
      uVar16 = *(ulong *)(*plVar15 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar16 = uVar16 & uVar17 - 1;
      }
      else if (uVar17 <= uVar16) {
        uVar9 = 0;
        if (uVar17 != 0) {
          uVar9 = uVar16 / uVar17;
        }
        uVar16 = uVar16 - uVar9 * uVar17;
      }
      *(long **)(*plVar3 + uVar16 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
  }
  plStack_98 = (long *)0x0;
  plVar3[3] = plVar3[3] + 1;
  FUN_109ddbcf4(&plStack_98);
  uVar6 = 1;
LAB_109ddbc74:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = plVar15;
  return auVar19;
}



/* Entry: 109ddb8c0; end: 109ddb8f3;  */

undefined1  [16] FUN_109ddb8c0(long *param_1,ulong *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x25;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar3 = (long)param_2 << 5;
    __Znwm(lVar3);
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = lVar3;
    return auVar17;
  }
  func_0x000104c4f740();
  uVar15 = *param_2 ^ (ulong)(uint)param_2[1];
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar8 = uVar16 - 1;
    if ((uVar16 & uVar8) == 0) {
      unaff_x25 = uVar8 & uVar15;
    }
    else {
      unaff_x25 = uVar15;
      if (uVar16 <= uVar15) {
        uVar10 = 0;
        if (uVar16 != 0) {
          uVar10 = uVar15 / uVar16;
        }
        unaff_x25 = uVar15 - uVar10 * uVar16;
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar9; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar10 = plVar14[1];
        if (uVar10 == uVar15) {
          if (plVar14[2] == *param_2 && *(uint *)(plVar14 + 3) == (uint)param_2[1]) {
            uVar5 = 0;
            goto LAB_109ddbc74;
          }
        }
        else {
          if ((uVar16 & uVar8) == 0) {
            uVar10 = uVar10 & uVar8;
          }
          else if (uVar16 <= uVar10) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar10 / uVar16;
            }
            uVar10 = uVar10 - uVar6 * uVar16;
          }
          if (uVar10 != unaff_x25) break;
        }
      }
    }
  }
  plVar14 = (long *)0x28;
  __Znwm();
  uStack_78 = 1;
  *plVar14 = 0;
  plVar14[1] = uVar15;
  lVar3 = *param_3;
  plVar14[3] = param_3[1];
  plVar14[2] = lVar3;
  lVar3 = *param_4;
  *param_4 = 0;
  plVar14[4] = lVar3;
  plStack_80 = param_1;
  if ((uVar16 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar16))
  goto LAB_109ddbbf0;
  uVar8 = 1;
  if (2 < uVar16) {
    uVar8 = (ulong)((uVar16 & uVar16 - 1) != 0);
  }
  uVar8 = uVar8 | uVar16 << 1;
  uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  plStack_88 = plVar14;
  if (uVar8 - 1 == 0) {
    uVar8 = 2;
  }
  else if ((uVar8 & uVar8 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar16 = param_1[1];
  }
  if (uVar16 < uVar8) {
LAB_109ddba78:
    if (uVar8 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109ddbce0);
      (*pcVar2)();
    }
    lVar3 = uVar8 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    uVar16 = 0;
    param_1[1] = uVar8;
    do {
      *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
      uVar16 = uVar16 + 1;
    } while (uVar8 != uVar16);
    plVar7 = (long *)param_1[2];
    uVar16 = uVar8;
    if (plVar7 != (long *)0x0) {
      uVar10 = plVar7[1];
      uVar6 = uVar8 - 1;
      if ((uVar8 & uVar6) == 0) {
        uVar10 = uVar10 & uVar6;
      }
      else if (uVar8 <= uVar10) {
        uVar13 = 0;
        if (uVar8 != 0) {
          uVar13 = uVar10 / uVar8;
        }
        uVar10 = uVar10 - uVar13 * uVar8;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar7;
      while (plVar11 != (long *)0x0) {
        uVar13 = plVar11[1];
        if ((uVar8 & uVar6) == 0) {
          uVar13 = uVar13 & uVar6;
        }
        else if (uVar8 <= uVar13) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar13 / uVar8;
          }
          uVar13 = uVar13 - uVar1 * uVar8;
        }
        plVar12 = plVar11;
        if (uVar13 != uVar10) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar13 * 8) == 0) {
            *(long **)(lVar3 + uVar13 * 8) = plVar7;
            uVar10 = uVar13;
          }
          else {
            *plVar7 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar3 + uVar13 * 8);
            **(long **)(lVar3 + uVar13 * 8) = (long)plVar11;
            plVar12 = plVar7;
          }
        }
        plVar7 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (uVar8 < uVar16) {
    uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar10) {
      uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
    }
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 < uVar16) {
      if (uVar8 != 0) goto LAB_109ddba78;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = param_1[1];
    }
  }
  if ((uVar16 & uVar16 - 1) == 0) {
    unaff_x25 = uVar16 - 1 & uVar15;
  }
  else {
    unaff_x25 = uVar15;
    if (uVar16 <= uVar15) {
      uVar8 = 0;
      if (uVar16 != 0) {
        uVar8 = uVar15 / uVar16;
      }
      unaff_x25 = uVar15 - uVar8 * uVar16;
    }
  }
LAB_109ddbbf0:
  lVar3 = *param_1;
  plVar7 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar14 = *plVar7;
    *plVar7 = (long)plVar14;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar7;
    if (*plVar14 != 0) {
      uVar15 = *(ulong *)(*plVar14 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar15 = uVar15 & uVar16 - 1;
      }
      else if (uVar16 <= uVar15) {
        uVar8 = 0;
        if (uVar16 != 0) {
          uVar8 = uVar15 / uVar16;
        }
        uVar15 = uVar15 - uVar8 * uVar16;
      }
      *(long **)(*param_1 + uVar15 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar7;
    *plVar7 = (long)plVar14;
  }
  plStack_88 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_109ddbcf4(&plStack_88);
  uVar5 = 1;
LAB_109ddbc74:
  auVar18._8_8_ = uVar5;
  auVar18._0_8_ = plVar14;
  return auVar18;
}



/* Entry: 109ddb8f4; end: 109ddbcf3;  */

undefined1  [16] FUN_109ddb8f4(long *param_1,ulong *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x25;
  undefined1 auVar17 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar15 = *param_2 ^ (ulong)(uint)param_2[1];
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar8 = uVar16 - 1;
    if ((uVar16 & uVar8) == 0) {
      unaff_x25 = uVar8 & uVar15;
    }
    else {
      unaff_x25 = uVar15;
      if (uVar16 <= uVar15) {
        uVar10 = 0;
        if (uVar16 != 0) {
          uVar10 = uVar15 / uVar16;
        }
        unaff_x25 = uVar15 - uVar10 * uVar16;
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar9; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar10 = plVar14[1];
        if (uVar10 == uVar15) {
          if (plVar14[2] == *param_2 && *(uint *)(plVar14 + 3) == (uint)param_2[1]) {
            uVar4 = 0;
            goto LAB_109ddbc74;
          }
        }
        else {
          if ((uVar16 & uVar8) == 0) {
            uVar10 = uVar10 & uVar8;
          }
          else if (uVar16 <= uVar10) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar10 / uVar16;
            }
            uVar10 = uVar10 - uVar6 * uVar16;
          }
          if (uVar10 != unaff_x25) break;
        }
      }
    }
  }
  plVar14 = (long *)0x28;
  __Znwm();
  uStack_58 = 1;
  *plVar14 = 0;
  plVar14[1] = uVar15;
  lVar5 = *param_3;
  plVar14[3] = param_3[1];
  plVar14[2] = lVar5;
  lVar5 = *param_4;
  *param_4 = 0;
  plVar14[4] = lVar5;
  plStack_60 = param_1;
  if ((uVar16 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar16))
  goto LAB_109ddbbf0;
  uVar8 = 1;
  if (2 < uVar16) {
    uVar8 = (ulong)((uVar16 & uVar16 - 1) != 0);
  }
  uVar8 = uVar8 | uVar16 << 1;
  uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar8 <= uVar10) {
    uVar8 = uVar10;
  }
  plStack_68 = plVar14;
  if (uVar8 - 1 == 0) {
    uVar8 = 2;
  }
  else if ((uVar8 & uVar8 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar16 = param_1[1];
  }
  if (uVar16 < uVar8) {
LAB_109ddba78:
    if (uVar8 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109ddbce0);
      (*pcVar2)();
    }
    lVar5 = uVar8 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar5;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar16 = 0;
    param_1[1] = uVar8;
    do {
      *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
      uVar16 = uVar16 + 1;
    } while (uVar8 != uVar16);
    plVar7 = (long *)param_1[2];
    uVar16 = uVar8;
    if (plVar7 != (long *)0x0) {
      uVar10 = plVar7[1];
      uVar6 = uVar8 - 1;
      if ((uVar8 & uVar6) == 0) {
        uVar10 = uVar10 & uVar6;
      }
      else if (uVar8 <= uVar10) {
        uVar13 = 0;
        if (uVar8 != 0) {
          uVar13 = uVar10 / uVar8;
        }
        uVar10 = uVar10 - uVar13 * uVar8;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      plVar11 = (long *)*plVar7;
      while (plVar11 != (long *)0x0) {
        uVar13 = plVar11[1];
        if ((uVar8 & uVar6) == 0) {
          uVar13 = uVar13 & uVar6;
        }
        else if (uVar8 <= uVar13) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar13 / uVar8;
          }
          uVar13 = uVar13 - uVar1 * uVar8;
        }
        plVar12 = plVar11;
        if (uVar13 != uVar10) {
          lVar5 = *param_1;
          if (*(long *)(lVar5 + uVar13 * 8) == 0) {
            *(long **)(lVar5 + uVar13 * 8) = plVar7;
            uVar10 = uVar13;
          }
          else {
            *plVar7 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar5 + uVar13 * 8);
            **(long **)(lVar5 + uVar13 * 8) = (long)plVar11;
            plVar12 = plVar7;
          }
        }
        plVar7 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (uVar8 < uVar16) {
    uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar10) {
      uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
    }
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (uVar8 < uVar16) {
      if (uVar8 != 0) goto LAB_109ddba78;
      lVar5 = *param_1;
      *param_1 = 0;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = param_1[1];
    }
  }
  if ((uVar16 & uVar16 - 1) == 0) {
    unaff_x25 = uVar16 - 1 & uVar15;
  }
  else {
    unaff_x25 = uVar15;
    if (uVar16 <= uVar15) {
      uVar8 = 0;
      if (uVar16 != 0) {
        uVar8 = uVar15 / uVar16;
      }
      unaff_x25 = uVar15 - uVar8 * uVar16;
    }
  }
LAB_109ddbbf0:
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar14 = *plVar7;
    *plVar7 = (long)plVar14;
    *(long **)(lVar5 + unaff_x25 * 8) = plVar7;
    if (*plVar14 != 0) {
      uVar15 = *(ulong *)(*plVar14 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar15 = uVar15 & uVar16 - 1;
      }
      else if (uVar16 <= uVar15) {
        uVar8 = 0;
        if (uVar16 != 0) {
          uVar8 = uVar15 / uVar16;
        }
        uVar15 = uVar15 - uVar8 * uVar16;
      }
      *(long **)(*param_1 + uVar15 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar7;
    *plVar7 = (long)plVar14;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_109ddbcf4(&plStack_68);
  uVar4 = 1;
LAB_109ddbc74:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 109ddbcf4; end: 109ddbd87;  */

void FUN_109ddbcf4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109ddbd40(lVar1 + 0x20,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109ddbd88; end: 109ddbe07;  */

uint FUN_109ddbd88(long param_1,uint param_2,int param_3)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = 0x88;
  if (param_3 == 0) {
    lVar2 = 0x80;
  }
  puVar3 = *(uint **)(param_1 + lVar2);
  if (puVar3 != (uint *)0x0) {
    lVar2 = 0x74;
    if (param_3 == 0) {
      lVar2 = 0x70;
    }
    uVar5 = (ulong)*(uint *)(param_1 + lVar2);
    puVar1 = puVar3 + uVar5 * 2;
    puVar4 = puVar3;
    if (*(uint *)(param_1 + lVar2) != 0) {
      do {
        uVar6 = uVar5 >> 1;
        puVar3 = puVar4 + uVar6 * 2 + 2;
        uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
        if (param_2 <= puVar4[uVar6 * 2]) {
          puVar3 = puVar4;
          uVar5 = uVar6;
        }
        puVar4 = puVar3;
      } while (uVar5 != 0);
    }
    if ((puVar3 != puVar1) && (*puVar3 == param_2)) {
      return puVar3[1];
    }
  }
  return 0xffffffff;
}



/* Entry: 109ddbe08; end: 109ddbe5b;  */

undefined1  [16] FUN_109ddbe08(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lStack_28;
  
  plVar1 = param_1;
  FUN_109ddbe5c(param_1,param_2,&lStack_28);
  if ((int)plVar1 == 0) {
    lStack_28 = *param_1 + (ulong)*(uint *)(param_1 + 2) * 8;
    lVar2 = lStack_28;
  }
  else {
    lVar2 = *param_1 + (ulong)*(uint *)(param_1 + 2) * 8;
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lStack_28;
  return auVar3;
}



/* Entry: 109ddbe5c; end: 109ddbf77;  */

undefined8 FUN_109ddbe5c(long *param_1,int *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    piVar5 = (int *)0x0;
  }
  else {
    iVar2 = *param_2;
    uVar3 = (int)param_1[2] - 1;
    uVar6 = iVar2 * 0x25 & uVar3;
    piVar5 = (int *)(*param_1 + (ulong)uVar6 * 8);
    iVar8 = *piVar5;
    if (iVar2 != iVar8) {
      iVar9 = 1;
      piVar7 = (int *)0x0;
      do {
        if (iVar8 == -1) {
          uVar4 = 0;
          if (piVar7 != (int *)0x0) {
            piVar5 = piVar7;
          }
          goto LAB_109ddbe9c;
        }
        piVar1 = piVar5;
        if (piVar7 != (int *)0x0 || iVar8 != -2) {
          piVar1 = piVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar3;
        piVar5 = (int *)(*param_1 + (ulong)uVar6 * 8);
        iVar8 = *piVar5;
        piVar7 = piVar1;
      } while (iVar2 != iVar8);
    }
    uVar4 = 1;
  }
LAB_109ddbe9c:
  *param_3 = (long)piVar5;
  return uVar4;
}



/* Entry: 109ddbf78; end: 109ddbfd7;  */

undefined8 * FUN_109ddbf78(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110b59100;
  if ((undefined8 *)param_1[0x13] != param_1 + 0x15) {
    _free();
  }
  if ((undefined8 *)param_1[0xf] != param_1 + 0x11) {
    _free();
  }
  FUN_109ddbfe8(param_1 + 0xd);
  return param_1;
}



/* Entry: 109ddbfd8; end: 109ddbfe7;  */

undefined1  [16] FUN_109ddbfd8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = &UNK_10f5ff0f0;
  return auVar1;
}



/* Entry: 109ddbfe8; end: 109ddc02f;  */

void FUN_109ddbfe8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  while (plVar3 != param_1) {
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    *plVar3 = 0;
    plVar3[1] = 0;
    FUN_109db0e0c();
    plVar3 = plVar2;
  }
  return;
}



/* Entry: 109ddc030; end: 109ddc56f;  */

long * FUN_109ddc030(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  uint uVar12;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    piVar2 = *(int **)(param_1 + 200);
    if (*(long *)(param_1 + 0xd0) == 4) {
      if (*piVar2 == 0x7373622e) goto LAB_109ddc42c;
    }
    else if ((*(long *)(param_1 + 0xd0) == 5) &&
            ((*piVar2 == 0x7865742e && (char)piVar2[1] == 't' ||
             (*piVar2 == 0x7461642e && (char)piVar2[1] == 'a')))) {
LAB_109ddc42c:
      puVar9 = (undefined1 *)param_4[4];
      if (puVar9 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar9 + 1);
        *puVar9 = 9;
      }
      else {
        FUN_109e05570(param_4,9);
      }
      FUN_109d2f728(param_4,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
      puVar9 = (undefined1 *)param_4[4];
      if ((undefined1 *)param_4[3] <= puVar9) goto LAB_109ddc55c;
      param_4[4] = (long)(puVar9 + 1);
      goto LAB_109ddc540;
    }
  }
  puVar3 = (undefined8 *)param_4[4];
  if ((ulong)(param_4[3] - (long)puVar3) < 10) {
    FUN_109e0560c(param_4,&UNK_10f5ff0f8,10);
  }
  else {
    *(undefined2 *)(puVar3 + 1) = 0x96e;
    *puVar3 = 0x6f69746365732e09;
    param_4[4] = param_4[4] + 10;
  }
  plVar6 = param_4;
  FUN_109d2f728(param_4,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
  if ((ulong)(plVar6[3] - plVar6[4]) < 2) {
    FUN_109e0560c();
  }
  else {
    *(undefined2 *)plVar6[4] = 0x222c;
    plVar6[4] = plVar6[4] + 2;
  }
  if ((*(byte *)(param_1 + 0xe0) >> 6 & 1) != 0) {
    puVar9 = (undefined1 *)param_4[4];
    if (puVar9 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar9 + 1);
      *puVar9 = 100;
    }
    else {
      plVar6 = param_4;
      FUN_109e05570(param_4,100);
    }
  }
  if (*(char *)(param_1 + 0xe0) < '\0') {
    puVar9 = (undefined1 *)param_4[4];
    if (puVar9 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar9 + 1);
      *puVar9 = 0x62;
    }
    else {
      plVar6 = param_4;
      FUN_109e05570(param_4,0x62);
    }
  }
  uVar12 = *(uint *)(param_1 + 0xe0);
  if ((uVar12 >> 0x1d & 1) != 0) {
    puVar9 = (undefined1 *)param_4[4];
    if (puVar9 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar9 + 1);
      *puVar9 = 0x78;
    }
    else {
      plVar6 = param_4;
      FUN_109e05570(param_4,0x78);
    }
    uVar12 = *(uint *)(param_1 + 0xe0);
  }
  if ((int)uVar12 < 0) {
    puVar9 = (undefined1 *)param_4[4];
    if (puVar9 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar9 + 1);
      uVar11 = 0x77;
      goto LAB_109ddc230;
    }
    uVar8 = 0x77;
LAB_109ddc258:
    plVar6 = param_4;
    FUN_109e05570(param_4,uVar8);
  }
  else {
    puVar9 = (undefined1 *)param_4[4];
    if (uVar12 >> 0x1e != 0) {
      if ((undefined1 *)param_4[3] > puVar9) {
        param_4[4] = (long)(puVar9 + 1);
        uVar11 = 0x72;
        goto LAB_109ddc230;
      }
      uVar8 = 0x72;
      goto LAB_109ddc258;
    }
    if ((undefined1 *)param_4[3] <= puVar9) {
      uVar8 = 0x79;
      goto LAB_109ddc258;
    }
    param_4[4] = (long)(puVar9 + 1);
    uVar11 = 0x79;
LAB_109ddc230:
    *puVar9 = uVar11;
  }
  if ((*(byte *)(param_1 + 0xe1) >> 3 & 1) != 0) {
    puVar9 = (undefined1 *)param_4[4];
    if (puVar9 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar9 + 1);
      *puVar9 = 0x6e;
    }
    else {
      plVar6 = param_4;
      FUN_109e05570(param_4,0x6e);
    }
  }
  if ((*(byte *)(param_1 + 0xe3) >> 4 & 1) != 0) {
    puVar9 = (undefined1 *)param_4[4];
    if (puVar9 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar9 + 1);
      *puVar9 = 0x73;
    }
    else {
      plVar6 = param_4;
      FUN_109e05570(param_4,0x73);
    }
  }
  if (((*(byte *)(param_1 + 0xe3) >> 1 & 1) != 0) &&
     ((*(ulong *)(param_1 + 0xd0) < 6 ||
      (**(int **)(param_1 + 200) != 0x6265642e || (short)(*(int **)(param_1 + 200))[1] != 0x6775))))
  {
    puVar9 = (undefined1 *)param_4[4];
    if (puVar9 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar9 + 1);
      *puVar9 = 0x44;
    }
    else {
      plVar6 = param_4;
      FUN_109e05570(param_4,0x44);
    }
  }
  if ((*(byte *)(param_1 + 0xe1) >> 1 & 1) != 0) {
    puVar9 = (undefined1 *)param_4[4];
    if (puVar9 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar9 + 1);
      *puVar9 = 0x69;
    }
    else {
      plVar6 = param_4;
      FUN_109e05570(param_4,0x69);
    }
  }
  puVar9 = (undefined1 *)param_4[4];
  if (puVar9 < (undefined1 *)param_4[3]) {
    param_4[4] = (long)(puVar9 + 1);
    *puVar9 = 0x22;
  }
  else {
    plVar6 = param_4;
    FUN_109e05570(param_4,0x22);
  }
  if ((*(byte *)(param_1 + 0xe1) >> 4 & 1) != 0) {
    bVar5 = *(long *)(param_1 + 0xe8) != 0;
    puVar1 = &UNK_10f5ff106;
    if (bVar5) {
      puVar1 = &DAT_10f68e8ee;
    }
    uVar8 = 0xc;
    if (bVar5) {
      uVar8 = 1;
    }
    plVar6 = param_4;
    FUN_109d2f728(param_4,puVar1,uVar8);
    iVar4 = *(int *)(param_1 + 0xf0);
    if (iVar4 < 4) {
      if (iVar4 == 1) {
        pcVar7 = "one_only";
        uVar8 = 8;
      }
      else {
        if (iVar4 == 2) {
          pcVar7 = "discard";
          goto LAB_109ddc4d0;
        }
        if (iVar4 != 3) goto LAB_109ddc4dc;
        pcVar7 = "same_size";
        uVar8 = 9;
      }
LAB_109ddc4d4:
      plVar6 = param_4;
      FUN_109d2f728(param_4,pcVar7,uVar8);
    }
    else {
      if (5 < iVar4) {
        if (iVar4 == 6) {
          pcVar7 = "largest";
LAB_109ddc4d0:
          uVar8 = 7;
        }
        else {
          if (iVar4 != 7) goto LAB_109ddc4dc;
          pcVar7 = "newest";
          uVar8 = 6;
        }
        goto LAB_109ddc4d4;
      }
      if (iVar4 == 4) {
        pcVar7 = "same_contents";
        uVar8 = 0xd;
        goto LAB_109ddc4d4;
      }
      if (iVar4 == 5) {
        pcVar7 = "associative";
        uVar8 = 0xb;
        goto LAB_109ddc4d4;
      }
    }
LAB_109ddc4dc:
    if (*(long *)(param_1 + 0xe8) != 0) {
      if ((undefined1 *)param_4[3] == (undefined1 *)param_4[4]) {
        FUN_109e0560c(param_4,&DAT_10f68e8ee,1);
      }
      else {
        *(undefined1 *)param_4[4] = 0x2c;
        param_4[4] = param_4[4] + 1;
      }
      plVar6 = *(long **)(param_1 + 0xe8);
      FUN_109de22a8(plVar6,param_4,param_2);
    }
  }
  puVar9 = (undefined1 *)param_4[4];
  if ((undefined1 *)param_4[3] <= puVar9) {
LAB_109ddc55c:
    puVar9 = (undefined1 *)param_4[3];
    puVar10 = (undefined1 *)param_4[4];
    do {
      if (puVar10 < puVar9) {
LAB_109e055c0:
        param_4[4] = (long)(puVar10 + 1);
        *puVar10 = 10;
        return param_4;
      }
      if (param_4[2] != 0) {
        FUN_109e05520(param_4);
        puVar10 = (undefined1 *)param_4[4];
        goto LAB_109e055c0;
      }
      if ((int)param_4[7] == 0) {
        if (param_4[6] != 0) {
          FUN_109e057dc();
        }
        (**(code **)(*param_4 + 0x48))(param_4,&stack0xffffffffffffffdf,1);
        return param_4;
      }
      FUN_109e0538c(param_4);
      puVar9 = (undefined1 *)param_4[3];
      puVar10 = (undefined1 *)param_4[4];
    } while( true );
  }
  param_4[4] = (long)(puVar9 + 1);
  param_4 = plVar6;
LAB_109ddc540:
  *puVar9 = 10;
  return param_4;
}



/* Entry: 109ddc570; end: 109ddc5b3;  */

bool FUN_109ddc570(long param_1)

{
  return (*(uint *)(param_1 + 0xdc) & 0xfe) == 2;
}



/* Entry: 109ddc5b4; end: 109ddd2a3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109ddc5b4(long param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  char **ppcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  undefined1 *puVar18;
  undefined8 unaff_x19;
  long unaff_x20;
  char *pcVar19;
  undefined1 *unaff_x29;
  code *unaff_x30;
  char *pcStack_1d0;
  ulong uStack_1c8;
  undefined1 auStack_181 [33];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_140;
  undefined *apuStack_138 [4];
  undefined2 uStack_118;
  ulong uStack_110;
  ulong *apuStack_108 [2];
  undefined8 uStack_f8;
  undefined2 uStack_e8;
  undefined *apuStack_e0 [4];
  undefined2 uStack_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  long alStack_68 [5];
  
  puVar15 = &uStack_160;
  puVar18 = &stack0xfffffffffffffff0;
  plVar5 = param_4;
  if ((*(int *)(param_1 + 0xe8) == -1) &&
     (plVar4 = param_2,
     (**(code **)(*param_2 + 0x40))
               (param_2,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0)),
     (int)plVar4 != 0)) {
    puVar18 = (undefined1 *)param_4[4];
    if (puVar18 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar18 + 1);
      *puVar18 = 9;
    }
    else {
      FUN_109e05570(param_4,9);
    }
    FUN_109d2f728(param_4,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
    if (param_5 != (long *)0x0) {
      puVar18 = (undefined1 *)param_4[4];
      if (puVar18 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar18 + 1);
        *puVar18 = 9;
      }
      else {
        FUN_109e05570(param_4,9);
      }
LAB_109ddd198:
      FUN_109dade30(param_5,param_4,param_2,0);
      plVar5 = param_5;
    }
LAB_109ddd1ac:
    puVar15 = (undefined8 *)param_4[4];
  }
  else {
    puVar7 = (undefined8 *)param_4[4];
    if ((ulong)(param_4[3] - (long)puVar7) < 10) {
      FUN_109e0560c(param_4,&UNK_10f5ff0f8,10);
    }
    else {
      *(undefined2 *)(puVar7 + 1) = 0x96e;
      *puVar7 = 0x6f69746365732e09;
      param_4[4] = param_4[4] + 10;
    }
    uVar10 = *(ulong *)(param_1 + 0xd0);
    FUN_109ddd2a4(param_4,*(undefined8 *)(param_1 + 200));
    if (((char)param_2[0x2a] != '\x01') ||
       (uVar12 = *(uint *)(param_1 + 0xe4), (uVar12 >> 4 & 1) != 0)) {
      if ((ulong)(param_4[3] - param_4[4]) < 2) {
        uVar10 = 2;
        FUN_109e0560c(param_4,&UNK_10f5ff103);
      }
      else {
        *(undefined2 *)param_4[4] = 0x222c;
        param_4[4] = param_4[4] + 2;
      }
      uVar12 = *(uint *)(param_1 + 0xe4);
      if ((uVar12 >> 1 & 1) != 0) {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x61;
        }
        else {
          FUN_109e05570(param_4,0x61);
        }
        uVar12 = *(uint *)(param_1 + 0xe4);
      }
      if ((int)uVar12 < 0) {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x65;
        }
        else {
          FUN_109e05570(param_4,0x65);
        }
      }
      if ((*(byte *)(param_1 + 0xe4) >> 2 & 1) != 0) {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x78;
        }
        else {
          FUN_109e05570(param_4,0x78);
        }
      }
      if ((*(byte *)(param_1 + 0xe5) >> 1 & 1) != 0) {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x47;
        }
        else {
          FUN_109e05570(param_4,0x47);
        }
      }
      if ((*(byte *)(param_1 + 0xe4) & 1) != 0) {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x77;
        }
        else {
          FUN_109e05570(param_4,0x77);
        }
      }
      if ((*(byte *)(param_1 + 0xe4) >> 4 & 1) != 0) {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x4d;
        }
        else {
          FUN_109e05570(param_4,0x4d);
        }
      }
      if ((*(byte *)(param_1 + 0xe4) >> 5 & 1) != 0) {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x53;
        }
        else {
          FUN_109e05570(param_4,0x53);
        }
      }
      if ((*(byte *)(param_1 + 0xe5) >> 2 & 1) != 0) {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x54;
        }
        else {
          FUN_109e05570(param_4,0x54);
        }
      }
      if (*(char *)(param_1 + 0xe4) < '\0') {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x6f;
        }
        else {
          FUN_109e05570(param_4,0x6f);
        }
      }
      if ((*(byte *)(param_1 + 0xe6) >> 5 & 1) != 0) {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x52;
        }
        else {
          FUN_109e05570(param_4,0x52);
        }
      }
      if ((*(int *)(param_3 + 0x24) == 0xe) && ((*(byte *)(param_1 + 0xe6) >> 4 & 1) != 0)) {
        puVar16 = (undefined1 *)param_4[4];
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          *puVar16 = 0x52;
        }
        else {
          FUN_109e05570(param_4,0x52);
        }
      }
      uVar13 = (ulong)*(uint *)(param_3 + 0x18);
      if (*(uint *)(param_3 + 0x18) < 0x28) {
        if ((1L << (uVar13 & 0x3f) & 0x1800000006U) == 0) {
          if (uVar13 == 0xc) {
            if ((*(byte *)(param_1 + 0xe7) >> 4 & 1) != 0) {
              puVar16 = (undefined1 *)param_4[4];
              if ((undefined1 *)param_4[3] <= puVar16) {
                uVar11 = 0x73;
                goto LAB_109ddca24;
              }
              param_4[4] = (long)(puVar16 + 1);
              uVar17 = 0x73;
LAB_109ddc9dc:
              *puVar16 = uVar17;
            }
          }
          else if (uVar13 == 0x27) {
            if ((*(byte *)(param_1 + 0xe7) >> 5 & 1) != 0) {
              puVar16 = (undefined1 *)param_4[4];
              if (puVar16 < (undefined1 *)param_4[3]) {
                param_4[4] = (long)(puVar16 + 1);
                *puVar16 = 99;
              }
              else {
                FUN_109e05570(param_4,99);
              }
            }
            if ((*(byte *)(param_1 + 0xe7) >> 4 & 1) != 0) {
              puVar16 = (undefined1 *)param_4[4];
              if ((undefined1 *)param_4[3] <= puVar16) {
                uVar11 = 100;
                goto LAB_109ddca24;
              }
              param_4[4] = (long)(puVar16 + 1);
              uVar17 = 100;
              goto LAB_109ddc9dc;
            }
          }
        }
        else if ((*(byte *)(param_1 + 0xe7) >> 5 & 1) != 0) {
          puVar16 = (undefined1 *)param_4[4];
          if (puVar16 < (undefined1 *)param_4[3]) {
            param_4[4] = (long)(puVar16 + 1);
            uVar17 = 0x79;
            goto LAB_109ddc9dc;
          }
          uVar11 = 0x79;
LAB_109ddca24:
          FUN_109e05570(param_4,uVar11);
        }
      }
      puVar16 = (undefined1 *)param_4[4];
      if (puVar16 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar16 + 1);
        *puVar16 = 0x22;
      }
      else {
        FUN_109e05570(param_4,0x22);
      }
      puVar16 = (undefined1 *)param_4[4];
      if (puVar16 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar16 + 1);
        *puVar16 = 0x2c;
      }
      else {
        FUN_109e05570(param_4,0x2c);
      }
      puVar16 = (undefined1 *)param_4[4];
      if (*(char *)param_2[6] == '@') {
        if (puVar16 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar16 + 1);
          uVar17 = 0x25;
          goto LAB_109ddcc90;
        }
        uVar11 = 0x25;
LAB_109ddccac:
        FUN_109e05570(param_4,uVar11);
      }
      else {
        if ((undefined1 *)param_4[3] <= puVar16) {
          uVar11 = 0x40;
          goto LAB_109ddccac;
        }
        param_4[4] = (long)(puVar16 + 1);
        uVar17 = 0x40;
LAB_109ddcc90:
        *puVar16 = uVar17;
      }
      uVar12 = *(uint *)(param_1 + 0xe0);
      if ((int)uVar12 < 0x6fff4c04) {
        if ((int)uVar12 < 0xf) {
          if ((int)uVar12 < 8) {
            if (uVar12 == 1) {
              pcVar8 = "progbits";
              uVar11 = 8;
            }
            else {
              if (uVar12 != 7) goto LAB_109ddd21c;
              pcVar8 = "note";
              uVar11 = 4;
            }
          }
          else {
            if (uVar12 != 8) {
              if (uVar12 == 0xe) {
                pcVar8 = "init_array";
                goto LAB_109ddce98;
              }
              goto LAB_109ddd21c;
            }
            pcVar8 = "nobits";
LAB_109ddcee4:
            uVar11 = 6;
          }
        }
        else if ((int)uVar12 < 0x6fff4c00) {
          if (uVar12 == 0xf) {
            pcVar8 = "fini_array";
LAB_109ddce98:
            uVar11 = 10;
          }
          else {
            if (uVar12 != 0x10) goto LAB_109ddd21c;
            pcVar8 = "preinit_array";
            uVar11 = 0xd;
          }
        }
        else {
          if (uVar12 != 0x6fff4c00) {
            if (uVar12 == 0x6fff4c01) {
              pcVar8 = "llvm_linker_options";
              goto LAB_109ddcec4;
            }
            goto LAB_109ddd21c;
          }
          pcVar8 = "llvm_odrtab";
          uVar11 = 0xb;
        }
      }
      else if ((int)uVar12 < 0x6fff4c0a) {
        if ((int)uVar12 < 0x6fff4c08) {
          if (uVar12 == 0x6fff4c04) {
            pcVar8 = "llvm_dependent_libraries";
            uVar11 = 0x18;
          }
          else {
            if (uVar12 != 0x6fff4c05) goto LAB_109ddd21c;
            pcVar8 = "llvm_sympart";
            uVar11 = 0xc;
          }
        }
        else if (uVar12 == 0x6fff4c08) {
          pcVar8 = "llvm_bb_addr_map_v0";
LAB_109ddcec4:
          uVar11 = 0x13;
        }
        else {
          if (uVar12 != 0x6fff4c09) goto LAB_109ddd21c;
          pcVar8 = "llvm_call_graph_profile";
          uVar11 = 0x17;
        }
      }
      else {
        if (0x70000000 < (int)uVar12) {
          if (uVar12 == 0x70000001) {
            pcVar8 = "unwind";
            goto LAB_109ddcee4;
          }
          if (uVar12 == 0x7000001e) {
            pcVar8 = "0x7000001e";
            goto LAB_109ddce98;
          }
LAB_109ddd21c:
          apuStack_e0[0] = &UNK_10f5ff17f;
          uStack_c0 = 0x103;
          apuStack_108[0] = &uStack_110;
          uStack_f8 = 0;
          uStack_e8 = 0x10e;
          uStack_110 = (ulong)uVar12;
          FUN_109d35b30(auStack_b8,apuStack_e0,apuStack_108);
          apuStack_138[0] = &UNK_10f5ff193;
          uStack_118 = 0x103;
          FUN_109d35b30(auStack_90,auStack_b8,apuStack_138);
          uStack_160 = *(undefined8 *)(param_1 + 200);
          uStack_158 = *(undefined8 *)(param_1 + 0xd0);
          uStack_140 = 0x105;
          FUN_109d35b30(alStack_68,auStack_90,&uStack_160);
          param_4 = alStack_68;
          pcVar8 = (char *)0x1;
          FUN_109df7858();
          ppcVar6 = &pcStack_1d0;
          pcStack_1d0 = pcVar8;
          uStack_1c8 = uVar10;
          func_0x000109e03bec(&pcStack_1d0,&UNK_10f5ff1cb,0x40,0);
          if (ppcVar6 == (char **)0xffffffffffffffff) {
            if ((ulong)(param_4[3] - param_4[4]) < uVar10) {
              FUN_109e0560c(param_4,pcVar8,uVar10);
            }
            else if (uVar10 != 0) {
              _memcpy(param_4[4],pcVar8,uVar10);
              param_4[4] = param_4[4] + uVar10;
            }
            return param_4;
          }
          puVar16 = (undefined1 *)param_4[4];
          if (puVar16 < (undefined1 *)param_4[3]) {
            param_4[4] = (long)(puVar16 + 1);
            *puVar16 = 0x22;
          }
          else {
            ppcVar6 = (char **)param_4;
            FUN_109e05570(param_4,0x22);
          }
          if (0 < (long)uVar10) {
            pcVar1 = pcVar8 + uVar10;
            do {
              cVar3 = *pcVar8;
              pcVar19 = pcVar8;
              if (cVar3 == '\\') {
                pcVar19 = pcVar8 + 1;
                if (pcVar19 == pcVar1) {
                  puVar9 = &DAT_10f47f5f4;
                  if (1 < (ulong)(param_4[3] - param_4[4])) {
                    *(undefined2 *)param_4[4] = 0x5c5c;
                    goto LAB_109ddd460;
                  }
LAB_109ddd414:
                  ppcVar6 = (char **)param_4;
                  FUN_109e0560c(param_4,puVar9,2);
                  pcVar19 = pcVar8;
                }
                else {
                  puVar16 = (undefined1 *)param_4[4];
                  if (puVar16 < (undefined1 *)param_4[3]) {
                    param_4[4] = (long)(puVar16 + 1);
                    *puVar16 = 0x5c;
                  }
                  else {
                    ppcVar6 = (char **)param_4;
                    FUN_109e05570(param_4,0x5c);
                  }
                  cVar3 = *pcVar19;
                  pcVar8 = (char *)param_4[4];
                  if (pcVar8 < (char *)param_4[3]) {
                    param_4[4] = (long)(pcVar8 + 1);
                    *pcVar8 = cVar3;
                  }
                  else {
                    ppcVar6 = (char **)param_4;
                    FUN_109e05570(param_4);
                  }
                }
              }
              else if (cVar3 == '\"') {
                puVar9 = &DAT_10f47f5ef;
                if ((ulong)(param_4[3] - param_4[4]) < 2) goto LAB_109ddd414;
                *(undefined2 *)param_4[4] = 0x225c;
LAB_109ddd460:
                param_4[4] = param_4[4] + 2;
                pcVar19 = pcVar8;
              }
              else {
                pcVar8 = (char *)param_4[4];
                if (pcVar8 < (char *)param_4[3]) {
                  param_4[4] = (long)(pcVar8 + 1);
                  *pcVar8 = cVar3;
                }
                else {
                  ppcVar6 = (char **)param_4;
                  FUN_109e05570(param_4);
                }
              }
              pcVar8 = pcVar19 + 1;
            } while (pcVar8 < pcVar1);
          }
          puVar16 = (undefined1 *)param_4[4];
          if (puVar16 < (undefined1 *)param_4[3]) {
            param_4[4] = (long)(puVar16 + 1);
            *puVar16 = 0x22;
            return (long *)ppcVar6;
          }
          uVar17 = 0x22;
          unaff_x30 = FUN_109ddd2a4;
          unaff_x19 = 0x103;
          goto code_r0x000109e05570;
        }
        if (uVar12 == 0x6fff4c0a) {
          pcVar8 = "llvm_bb_addr_map";
          uVar11 = 0x10;
        }
        else {
          if (uVar12 != 0x6fff4c0b) goto LAB_109ddd21c;
          pcVar8 = "llvm_offloading";
          uVar11 = 0xf;
        }
      }
      plVar5 = param_4;
      FUN_109d2f728(param_4,pcVar8,uVar11);
      if (*(int *)(param_1 + 0xec) != 0) {
        if ((undefined1 *)param_4[3] == (undefined1 *)param_4[4]) {
          FUN_109e0560c(param_4,&DAT_10f68e8ee,1);
        }
        else {
          *(undefined1 *)param_4[4] = 0x2c;
          param_4[4] = param_4[4] + 1;
        }
        plVar5 = param_4;
        FUN_109df9d4c(param_4,*(undefined4 *)(param_1 + 0xec),0,0,0);
      }
      if ((*(byte *)(param_1 + 0xe5) >> 1 & 1) != 0) {
        if ((undefined1 *)param_4[3] == (undefined1 *)param_4[4]) {
          FUN_109e0560c(param_4,&DAT_10f68e8ee,1);
        }
        else {
          *(undefined1 *)param_4[4] = 0x2c;
          param_4[4] = param_4[4] + 1;
        }
        pbVar14 = (byte *)(*(ulong *)(param_1 + 0xf0) & 0xfffffffffffffff8);
        if ((*pbVar14 >> 2 & 1) == 0) {
          puVar7 = (undefined8 *)0x0;
          uVar11 = 0;
        }
        else {
          puVar15 = *(undefined8 **)(pbVar14 + -8);
          puVar7 = puVar15 + 2;
          uVar11 = *puVar15;
        }
        plVar5 = param_4;
        FUN_109ddd2a4(param_4,puVar7,uVar11);
        if ((*(byte *)(param_1 + 0xf0) >> 2 & 1) != 0) {
          puVar2 = (undefined4 *)param_4[4];
          if ((ulong)(param_4[3] - (long)puVar2) < 7) {
            plVar5 = param_4;
            FUN_109e0560c(param_4,&UNK_10f5ff1a1,7);
          }
          else {
            *(undefined4 *)((long)puVar2 + 3) = 0x7461646d;
            *puVar2 = 0x6d6f632c;
            param_4[4] = param_4[4] + 7;
          }
        }
      }
      if (*(char *)(param_1 + 0xe4) < '\0') {
        if ((undefined1 *)param_4[3] == (undefined1 *)param_4[4]) {
          plVar5 = param_4;
          FUN_109e0560c(param_4,&DAT_10f68e8ee,1);
        }
        else {
          *(undefined1 *)param_4[4] = 0x2c;
          param_4[4] = param_4[4] + 1;
        }
        pbVar14 = *(byte **)(param_1 + 0xf8);
        if (pbVar14 == (byte *)0x0) {
          puVar18 = (undefined1 *)param_4[4];
          if (puVar18 < (undefined1 *)param_4[3]) {
            param_4[4] = (long)(puVar18 + 1);
            *puVar18 = 0x30;
          }
          else {
            plVar5 = param_4;
            FUN_109e05570(param_4,0x30);
          }
        }
        else {
          if ((*pbVar14 >> 2 & 1) == 0) {
            puVar15 = (undefined8 *)0x0;
            uVar11 = 0;
          }
          else {
            puVar15 = *(undefined8 **)(pbVar14 + -8) + 2;
            uVar11 = **(undefined8 **)(pbVar14 + -8);
          }
          plVar5 = param_4;
          FUN_109ddd2a4(param_4,puVar15,uVar11);
        }
      }
      puVar15 = (undefined8 *)param_4[4];
      if (*(int *)(param_1 + 0xe8) != -1) {
        if ((ulong)(param_4[3] - (long)puVar15) < 8) {
          FUN_109e0560c(param_4,&UNK_10f5ff1a9,8);
        }
        else {
          *puVar15 = 0x2c657571696e752c;
          param_4[4] = param_4[4] + 8;
        }
        plVar5 = param_4;
        FUN_109df9d4c(param_4,*(undefined4 *)(param_1 + 0xe8),0,0,0);
        puVar15 = (undefined8 *)param_4[4];
      }
      if (puVar15 < (undefined8 *)param_4[3]) {
        param_4[4] = (long)((long)puVar15 + 1);
        *(undefined1 *)puVar15 = 10;
      }
      else {
        plVar5 = param_4;
        FUN_109e05570(param_4,10);
      }
      if (param_5 == (long *)0x0) {
        return plVar5;
      }
      puVar15 = (undefined8 *)param_4[4];
      if ((ulong)(param_4[3] - (long)puVar15) < 0xd) {
        FUN_109e0560c(param_4,&UNK_10f5ff1b2,0xd);
      }
      else {
        *puVar15 = 0x6365736275732e09;
        *(undefined8 *)((long)puVar15 + 5) = 0x96e6f6974636573;
        param_4[4] = param_4[4] + 0xd;
      }
      goto LAB_109ddd198;
    }
    puVar15 = (undefined8 *)param_4[4];
    if ((uVar12 >> 1 & 1) != 0) {
      if ((ulong)(param_4[3] - (long)puVar15) < 7) {
        plVar5 = param_4;
        FUN_109e0560c(param_4,&UNK_10f5ff134,7);
        puVar15 = (undefined8 *)param_4[4];
      }
      else {
        *(undefined4 *)((long)puVar15 + 3) = 0x636f6c6c;
        *(undefined4 *)puVar15 = 0x6c61232c;
        puVar15 = (undefined8 *)(param_4[4] + 7);
        param_4[4] = (long)puVar15;
      }
      uVar12 = *(uint *)(param_1 + 0xe4);
    }
    if ((uVar12 >> 2 & 1) != 0) {
      if ((ulong)(param_4[3] - (long)puVar15) < 0xb) {
        plVar5 = param_4;
        FUN_109e0560c(param_4,&UNK_10f5ff13c,0xb);
        puVar15 = (undefined8 *)param_4[4];
      }
      else {
        *(undefined4 *)((long)puVar15 + 7) = 0x7274736e;
        *puVar15 = 0x6e6963657865232c;
        puVar15 = (undefined8 *)(param_4[4] + 0xb);
        param_4[4] = (long)puVar15;
      }
      uVar12 = *(uint *)(param_1 + 0xe4);
    }
    if ((uVar12 & 1) != 0) {
      if ((ulong)(param_4[3] - (long)puVar15) < 7) {
        plVar5 = param_4;
        FUN_109e0560c(param_4,&UNK_10f5ff148,7);
        puVar15 = (undefined8 *)param_4[4];
      }
      else {
        *(undefined4 *)((long)puVar15 + 3) = 0x65746972;
        *(undefined4 *)puVar15 = 0x7277232c;
        puVar15 = (undefined8 *)(param_4[4] + 7);
        param_4[4] = (long)puVar15;
      }
      uVar12 = *(uint *)(param_1 + 0xe4);
    }
    if ((int)uVar12 < 0) {
      if ((ulong)(param_4[3] - (long)puVar15) < 9) {
        plVar5 = param_4;
        FUN_109e0560c(param_4,&UNK_10f5ff150,9);
        puVar15 = (undefined8 *)param_4[4];
      }
      else {
        *(undefined1 *)(puVar15 + 1) = 0x65;
        *puVar15 = 0x64756c637865232c;
        puVar15 = (undefined8 *)(param_4[4] + 9);
        param_4[4] = (long)puVar15;
      }
      uVar12 = *(uint *)(param_1 + 0xe4);
    }
    if ((uVar12 >> 10 & 1) != 0) {
      if ((ulong)(param_4[3] - (long)puVar15) < 5) {
        plVar5 = param_4;
        FUN_109e0560c(param_4,&UNK_10f5ff15a,5);
        goto LAB_109ddd1ac;
      }
      *(undefined1 *)((long)puVar15 + 4) = 0x73;
      *(undefined4 *)puVar15 = 0x6c74232c;
      puVar15 = (undefined8 *)(param_4[4] + 5);
      param_4[4] = (long)puVar15;
    }
  }
  if (puVar15 < (undefined8 *)param_4[3]) {
    param_4[4] = (long)((long)puVar15 + 1);
    *(undefined1 *)puVar15 = 10;
    return plVar5;
  }
  uVar17 = 10;
  puVar15 = (undefined8 *)register0x00000008;
  param_1 = unaff_x20;
  puVar18 = unaff_x29;
code_r0x000109e05570:
  *(long *)((long)puVar15 + -0x20) = param_1;
  *(undefined8 *)((long)puVar15 + -0x18) = unaff_x19;
  *(undefined1 **)((long)puVar15 + -0x10) = puVar18;
  *(code **)((long)puVar15 + -8) = unaff_x30;
  puVar18 = (undefined1 *)param_4[3];
  puVar16 = (undefined1 *)param_4[4];
  do {
    if (puVar16 < puVar18) {
LAB_109e055c0:
      param_4[4] = (long)(puVar16 + 1);
      *puVar16 = uVar17;
      return param_4;
    }
    if (param_4[2] != 0) {
      FUN_109e05520(param_4);
      puVar16 = (undefined1 *)param_4[4];
      goto LAB_109e055c0;
    }
    if ((int)param_4[7] == 0) {
      *(undefined1 *)((long)puVar15 + -0x21) = uVar17;
      if (param_4[6] != 0) {
        FUN_109e057dc();
      }
      (**(code **)(*param_4 + 0x48))(param_4,(undefined1 *)((long)puVar15 + -0x21),1);
      return param_4;
    }
    FUN_109e0538c(param_4);
    puVar18 = (undefined1 *)param_4[3];
    puVar16 = (undefined1 *)param_4[4];
  } while( true );
}



/* Entry: 109ddd2a4; end: 109ddd4db;  */

char ** FUN_109ddd2a4(long *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char **ppcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcStack_70;
  ulong uStack_68;
  
  ppcVar4 = &pcStack_70;
  pcStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000109e03bec(&pcStack_70,&UNK_10f5ff1cb,0x40,0);
  if (ppcVar4 == (char **)0xffffffffffffffff) {
    if ((ulong)(param_1[3] - param_1[4]) < param_3) {
      FUN_109e0560c(param_1,param_2,param_3);
    }
    else if (param_3 != 0) {
      _memcpy(param_1[4],param_2,param_3);
      param_1[4] = param_1[4] + param_3;
    }
    return (char **)param_1;
  }
  puVar7 = (undefined1 *)param_1[4];
  if (puVar7 < (undefined1 *)param_1[3]) {
    param_1[4] = (long)(puVar7 + 1);
    *puVar7 = 0x22;
  }
  else {
    ppcVar4 = (char **)param_1;
    FUN_109e05570(param_1,0x22);
  }
  if (0 < (long)param_3) {
    pcVar1 = param_2 + param_3;
    do {
      cVar3 = *param_2;
      pcVar8 = param_2;
      if (cVar3 == '\\') {
        pcVar8 = param_2 + 1;
        if (pcVar8 == pcVar1) {
          puVar5 = &DAT_10f47f5f4;
          if (1 < (ulong)(param_1[3] - param_1[4])) {
            *(undefined2 *)param_1[4] = 0x5c5c;
            goto LAB_109ddd460;
          }
LAB_109ddd414:
          ppcVar4 = (char **)param_1;
          FUN_109e0560c(param_1,puVar5,2);
          pcVar8 = param_2;
        }
        else {
          puVar7 = (undefined1 *)param_1[4];
          if (puVar7 < (undefined1 *)param_1[3]) {
            param_1[4] = (long)(puVar7 + 1);
            *puVar7 = 0x5c;
          }
          else {
            ppcVar4 = (char **)param_1;
            FUN_109e05570(param_1,0x5c);
          }
          cVar3 = *pcVar8;
          pcVar2 = (char *)param_1[4];
          if (pcVar2 < (char *)param_1[3]) {
            param_1[4] = (long)(pcVar2 + 1);
            *pcVar2 = cVar3;
          }
          else {
            ppcVar4 = (char **)param_1;
            FUN_109e05570(param_1);
          }
        }
      }
      else if (cVar3 == '\"') {
        puVar5 = &DAT_10f47f5ef;
        if ((ulong)(param_1[3] - param_1[4]) < 2) goto LAB_109ddd414;
        *(undefined2 *)param_1[4] = 0x225c;
LAB_109ddd460:
        param_1[4] = param_1[4] + 2;
        pcVar8 = param_2;
      }
      else {
        pcVar2 = (char *)param_1[4];
        if (pcVar2 < (char *)param_1[3]) {
          param_1[4] = (long)(pcVar2 + 1);
          *pcVar2 = cVar3;
        }
        else {
          ppcVar4 = (char **)param_1;
          FUN_109e05570(param_1);
        }
      }
      param_2 = pcVar8 + 1;
    } while (param_2 < pcVar1);
  }
  puVar7 = (undefined1 *)param_1[4];
  if (puVar7 < (undefined1 *)param_1[3]) {
    param_1[4] = (long)(puVar7 + 1);
    *puVar7 = 0x22;
    return ppcVar4;
  }
  puVar7 = (undefined1 *)param_1[3];
  puVar6 = (undefined1 *)param_1[4];
  do {
    if (puVar6 < puVar7) {
LAB_109e055c0:
      param_1[4] = (long)(puVar6 + 1);
      *puVar6 = 0x22;
      return (char **)param_1;
    }
    if (param_1[2] != 0) {
      FUN_109e05520(param_1);
      puVar6 = (undefined1 *)param_1[4];
      goto LAB_109e055c0;
    }
    if ((int)param_1[7] == 0) {
      if (param_1[6] != 0) {
        FUN_109e057dc();
      }
      (**(code **)(*param_1 + 0x48))(param_1,&stack0xffffffffffffffdf,1);
      return (char **)param_1;
    }
    FUN_109e0538c(param_1);
    puVar7 = (undefined1 *)param_1[3];
    puVar6 = (undefined1 *)param_1[4];
  } while( true );
}



/* Entry: 109ddd4dc; end: 109ddd507;  */

byte FUN_109ddd4dc(long param_1)

{
  return *(byte *)(param_1 + 0xe4) >> 2 & 1;
}



/* Entry: 109ddd508; end: 109ddd82b;  */

long * FUN_109ddd508(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  long *plVar11;
  
  puVar1 = (undefined8 *)param_4[4];
  if ((ulong)(param_4[3] - (long)puVar1) < 10) {
    FUN_109e0560c(param_4,&UNK_10f5ff0f8,10);
  }
  else {
    *(undefined2 *)(puVar1 + 1) = 0x96e;
    *puVar1 = 0x6f69746365732e09;
    param_4[4] = param_4[4] + 10;
  }
  if (*(char *)(param_1 + 0xef) == '\0') {
    lVar6 = param_1 + 0xe0;
    _strlen(lVar6);
  }
  else {
    lVar6 = 0x10;
  }
  plVar5 = param_4;
  FUN_109d2f728(param_4,param_1 + 0xe0,lVar6);
  puVar8 = (undefined1 *)plVar5[4];
  if (puVar8 < (undefined1 *)plVar5[3]) {
    plVar5[4] = (long)(puVar8 + 1);
    *puVar8 = 0x2c;
  }
  else {
    FUN_109e05570();
  }
  FUN_109d2f728();
  uVar10 = *(uint *)(param_1 + 0xf0);
  if (uVar10 == 0) goto LAB_109ddd7d0;
  lVar6 = *(long *)(&UNK_110b59258 + ((ulong)uVar10 & 0xff) * 0x20);
  puVar8 = (undefined1 *)param_4[4];
  bVar4 = (undefined1 *)param_4[3] <= puVar8;
  if (lVar6 == 0) goto LAB_109ddd7d8;
  if (bVar4) {
    FUN_109e05570(param_4,0x2c);
  }
  else {
    param_4[4] = (long)(puVar8 + 1);
    *puVar8 = 0x2c;
  }
  plVar5 = param_4;
  FUN_109d2f728(param_4,(&PTR_s_regular_110b59250)[((ulong)uVar10 & 0xff) * 4],lVar6);
  uVar10 = uVar10 & 0xffffff00;
  if (uVar10 == 0) {
    if (*(int *)(param_1 + 0xf4) != 0) {
      puVar2 = (undefined4 *)param_4[4];
      if ((ulong)(param_4[3] - (long)puVar2) < 6) {
        FUN_109e0560c(param_4,&UNK_10f5ff20c,6);
      }
      else {
        *(undefined2 *)(puVar2 + 1) = 0x2c65;
        *puVar2 = 0x6e6f6e2c;
        param_4[4] = param_4[4] + 6;
      }
      goto LAB_109ddd7b8;
    }
  }
  else {
    uVar7 = 0x2c;
    plVar11 = (long *)&UNK_110b59540;
    lVar6 = 0xb;
    do {
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) break;
      uVar3 = *(uint *)(plVar11 + -2);
      if ((uVar3 & uVar10) != 0) {
        puVar8 = (undefined1 *)param_4[4];
        if (puVar8 < (undefined1 *)param_4[3]) {
          param_4[4] = (long)(puVar8 + 1);
          *puVar8 = uVar7;
        }
        else {
          FUN_109e05570(param_4,uVar7);
        }
        uVar10 = uVar10 & (uVar3 ^ 0xffffffff);
        if (*plVar11 == 0) {
          if ((ulong)(param_4[3] - param_4[4]) < 2) {
            FUN_109e0560c(param_4,&DAT_10f5ad81e,2);
          }
          else {
            *(undefined2 *)param_4[4] = 0x3c3c;
            param_4[4] = param_4[4] + 2;
          }
          plVar5 = param_4;
          FUN_109d2f728(param_4,plVar11[1],plVar11[2]);
          if ((ulong)(plVar5[3] - plVar5[4]) < 2) {
            FUN_109e0560c();
          }
          else {
            *(undefined2 *)plVar5[4] = 0x3e3e;
            plVar5[4] = plVar5[4] + 2;
          }
        }
        else {
          plVar5 = param_4;
          FUN_109d2f728(param_4,plVar11[-1]);
        }
        uVar7 = 0x2b;
      }
      plVar11 = plVar11 + 5;
    } while (uVar10 != 0);
    if (*(int *)(param_1 + 0xf4) != 0) {
      puVar8 = (undefined1 *)param_4[4];
      if (puVar8 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar8 + 1);
        *puVar8 = 0x2c;
      }
      else {
        FUN_109e05570(param_4,0x2c);
      }
LAB_109ddd7b8:
      plVar5 = param_4;
      FUN_109df9d4c(param_4,*(undefined4 *)(param_1 + 0xf4),0,0,0);
    }
  }
LAB_109ddd7d0:
  puVar8 = (undefined1 *)param_4[4];
  bVar4 = (undefined1 *)param_4[3] <= puVar8;
LAB_109ddd7d8:
  if (!bVar4) {
    param_4[4] = (long)(puVar8 + 1);
    *puVar8 = 10;
    return plVar5;
  }
  puVar8 = (undefined1 *)param_4[3];
  puVar9 = (undefined1 *)param_4[4];
  do {
    if (puVar9 < puVar8) {
LAB_109e055c0:
      param_4[4] = (long)(puVar9 + 1);
      *puVar9 = 10;
      return param_4;
    }
    if (param_4[2] != 0) {
      FUN_109e05520(param_4);
      puVar9 = (undefined1 *)param_4[4];
      goto LAB_109e055c0;
    }
    if ((int)param_4[7] == 0) {
      if (param_4[6] != 0) {
        FUN_109e057dc();
      }
      (**(code **)(*param_4 + 0x48))(param_4,&stack0xffffffffffffffdf,1);
      return param_4;
    }
    FUN_109e0538c(param_4);
    puVar8 = (undefined1 *)param_4[3];
    puVar9 = (undefined1 *)param_4[4];
  } while( true );
}



/* Entry: 109ddd82c; end: 109ddd85b;  */

uint FUN_109ddd82c(long param_1)

{
  return *(uint *)(param_1 + 0xf0) >> 0x1f;
}



/* Entry: 109ddd85c; end: 109dddd4f;  */

/* WARNING: Type propagation algorithm not settling */

ulong ******
FUN_109ddd85c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5,
             uint *param_6,undefined1 *param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  ulong ******ppppppuVar4;
  ulong *******pppppppuVar6;
  ulong *****pppppuVar7;
  ulong *******pppppppuVar8;
  undefined8 uVar9;
  ulong ***pppuVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  ulong ****ppppuVar13;
  ulong ****ppppuVar14;
  undefined1 uVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  ulong *******pppppppuVar18;
  uint uVar19;
  ulong *******pppppppuVar20;
  long lVar21;
  ulong ******ppppppuVar22;
  ulong *******pppppppuVar23;
  ulong *******pppppppuVar24;
  undefined8 uStack_178;
  ulong *******pppppppuStack_170;
  ulong ******ppppppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined4 *puStack_148;
  ulong *******pppppppuStack_140;
  uint *puStack_138;
  ulong ******ppppppuStack_130;
  ulong ******ppppppuStack_128;
  ulong *******pppppppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  ulong *******pppppppuStack_100;
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  undefined **ppuStack_e8;
  ulong ******appppppuStack_e0 [2];
  ulong ******ppppppuStack_d0;
  undefined8 uStack_c8;
  ulong *****apppppuStack_c0 [10];
  long lStack_70;
  ulong *******pppppppuVar5;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_7 = 0;
  ppppppuStack_130 = apppppuStack_c0;
  uStack_c8 = 0x500000000;
  pppppppuVar8 = &ppppppuStack_d0;
  pppppuVar11 = (ulong *****)0xffffffff;
  pppppuVar12 = (ulong *****)0x1;
  uStack_118 = param_2;
  uStack_110 = param_3;
  ppppppuStack_d0 = ppppppuStack_130;
  FUN_109e03d70(&uStack_118,pppppppuVar8,0x2c);
  if ((uint)uStack_c8 == 0) {
    *param_4 = 0;
    param_4[1] = 0;
LAB_109ddd9b8:
    param_5[1] = 0;
    *param_5 = 0;
LAB_109ddd9c4:
    ppppppuVar22 = (ulong ******)0x0;
    pppppppuVar23 = (ulong *******)0x0;
LAB_109ddd9cc:
    pppppppuVar24 = (ulong *******)0x0;
    pppppppuVar20 = (ulong *******)0x0;
    pppppppuVar6 = (ulong *******)0x0;
    ppppppuStack_128 = (ulong ******)0x0;
    pppppppuStack_120 = (ulong *******)0x0;
  }
  else {
    pppppppuVar8 = (ulong *******)&UNK_10f57e81c;
    ppppppuVar22 = ppppppuStack_d0;
    func_0x000109d5d4c8(ppppppuStack_d0,&UNK_10f57e81c,6);
    *param_4 = (long)ppppppuVar22;
    param_4[1] = (long)pppppppuVar8;
    if ((uint)uStack_c8 < 2) goto LAB_109ddd9b8;
    pppppppuVar8 = (ulong *******)&UNK_10f57e81c;
    ppppppuVar22 = ppppppuStack_d0 + 2;
    func_0x000109d5d4c8(ppppppuVar22,&UNK_10f57e81c,6);
    *param_5 = (long)ppppppuVar22;
    param_5[1] = (long)pppppppuVar8;
    if ((uint)uStack_c8 < 3) goto LAB_109ddd9c4;
    pppppppuVar23 = (ulong *******)&UNK_10f57e81c;
    ppppppuVar22 = ppppppuStack_d0 + 4;
    func_0x000109d5d4c8(ppppppuVar22,&UNK_10f57e81c,6);
    pppppppuVar8 = pppppppuVar23;
    if ((uint)uStack_c8 < 4) goto LAB_109ddd9cc;
    pppppppuVar24 = (ulong *******)&UNK_10f57e81c;
    ppppppuVar4 = ppppppuStack_d0 + 6;
    func_0x000109d5d4c8(ppppppuVar4,&UNK_10f57e81c,6);
    ppppppuStack_128 = ppppppuVar4;
    pppppppuStack_120 = pppppppuVar24;
    if ((uint)uStack_c8 < 5) {
      pppppppuVar20 = (ulong *******)0x0;
      pppppppuVar6 = (ulong *******)0x0;
      pppppppuVar8 = pppppppuVar24;
    }
    else {
      pppppppuVar20 = (ulong *******)&UNK_10f57e81c;
      pppppppuVar6 = (ulong *******)(ppppppuStack_d0 + 8);
      func_0x000109d5d4c8(pppppppuVar6,&UNK_10f57e81c,6);
      pppppppuVar8 = pppppppuVar20;
    }
  }
  pppppppuVar18 = (ulong *******)(param_5 + 1);
  if (*pppppppuVar18 == (ulong ******)0x0) {
    pppppppuVar24 = (ulong *******)&UNK_10f5ff213;
LAB_109ddda00:
    func_0x000109df6eb4();
    pppppppuStack_f0 = (ulong *******)0x3;
    ppuStack_e8 = &PTR_PTR_1132fef20;
    pppppppuVar8 = (ulong *******)&pppppppuStack_f0;
    pppppppuStack_100 = pppppppuVar24;
    FUN_109df7270(param_1,&pppppppuStack_100);
    ppppppuVar22 = ppppppuStack_130;
  }
  else {
    if ((ulong ******)0x10 < *pppppppuVar18) {
      pppppppuVar24 = (ulong *******)&UNK_10f5ff260;
      goto LAB_109ddda00;
    }
    *param_6 = 0;
    *param_8 = 0;
    if (pppppppuVar23 == (ulong *******)0x0) {
LAB_109dddc30:
      *param_1 = 0;
      ppppppuVar22 = ppppppuStack_130;
    }
    else {
      puVar16 = (undefined8 *)&UNK_110b59258;
      lVar21 = 0x5c00;
      pppppppuVar18 = (ulong *******)&UNK_10f5ff2b8;
      puVar2 = (uint *)0x0;
      puStack_148 = param_8;
      pppppppuStack_140 = pppppppuVar6;
      puStack_138 = param_6;
      do {
        param_6 = puVar2;
        uVar19 = (uint)param_6;
        if (pppppppuVar23 == (ulong *******)*puVar16) {
          pppppppuVar8 = (ulong *******)puVar16[-1];
          ppppppuVar4 = ppppppuVar22;
          _memcmp(ppppppuVar22,pppppppuVar8,pppppppuVar23);
          if ((int)ppppppuVar4 == 0) {
            if (lVar21 == 0) {
              pppppppuVar18 = (ulong *******)&UNK_10f5ff2b8;
            }
            else {
              *puStack_138 = uVar19;
              *param_7 = 1;
              if (pppppppuVar24 != (ulong *******)0x0) {
                pppppppuVar23 = appppppuStack_e0;
                ppuStack_e8 = (undefined **)0x100000000;
                pppppppuVar8 = (ulong *******)&pppppppuStack_f0;
                pppppuVar11 = (ulong *****)0xffffffff;
                pppppuVar12 = (ulong *****)0x0;
                pppppppuStack_f0 = pppppppuVar23;
                FUN_109e03d70(&ppppppuStack_128,pppppppuVar8,0x2b);
                pppppppuVar24 = pppppppuStack_140;
                if ((int)ppuStack_e8 == 0) {
                  uVar19 = *puStack_138;
                  goto LAB_109dddc3c;
                }
                pppppppuVar18 = pppppppuStack_f0 + ((ulong)ppuStack_e8 & 0xffffffff) * 2;
                pppppppuVar6 = pppppppuStack_f0;
                goto LAB_109dddb68;
              }
              if (uVar19 != 8) goto LAB_109dddc30;
              pppppppuVar18 = (ulong *******)&UNK_10f5ff2ee;
            }
            break;
          }
        }
        param_6 = (uint *)(ulong)(uVar19 + 1);
        puVar16 = puVar16 + 4;
        lVar21 = lVar21 + -0x400;
        puVar2 = param_6;
      } while (lVar21 != 0);
      func_0x000109df6eb4();
      pppppppuStack_f0 = (ulong *******)0x3;
      ppuStack_e8 = &PTR_PTR_1132fef20;
      pppppppuVar8 = (ulong *******)&pppppppuStack_f0;
      pppppppuStack_100 = pppppppuVar18;
      FUN_109df7270(param_1,&pppppppuStack_100);
      ppppppuVar22 = ppppppuStack_130;
    }
  }
  goto LAB_109ddda2c;
LAB_109dddb68:
  lVar21 = 0x1b8;
  param_6 = (uint *)&UNK_110b59540;
  do {
    pppppppuVar5 = pppppppuVar6;
    pppppppuVar8 = (ulong *******)&UNK_10f57e81c;
    func_0x000109d5d4c8(pppppppuVar6,&UNK_10f57e81c,6);
    iVar3 = (int)pppppppuVar5;
    if (pppppppuVar8 == *(ulong ********)param_6) {
      if (*(ulong ********)param_6 == (ulong *******)0x0) break;
      pppppppuVar8 = *(ulong ********)(param_6 + -2);
      _memcmp();
      if (iVar3 == 0) break;
    }
    param_6 = param_6 + 10;
    lVar21 = lVar21 + -0x28;
    if (lVar21 == 0) {
      func_0x000109df6eb4();
      pppppppuStack_100 = (ulong *******)0x3;
      pppppppuStack_f8 = (ulong *******)&PTR_PTR_1132fef20;
      puStack_108 = &UNK_10f5ff338;
      pppppppuVar8 = (ulong *******)&pppppppuStack_100;
      FUN_109df7270(param_1,&puStack_108);
      goto LAB_109dddcdc;
    }
  } while( true );
  uVar19 = *puStack_138 | param_6[-4];
  *puStack_138 = uVar19;
  pppppppuVar6 = pppppppuVar6 + 2;
  if (pppppppuVar6 == pppppppuVar18) goto LAB_109dddc3c;
  goto LAB_109dddb68;
LAB_109dddc3c:
  puVar1 = puStack_148;
  if (pppppppuVar20 == (ulong *******)0x0) {
    if (uVar19 == 8) {
      puVar17 = &UNK_10f5ff2ee;
      goto LAB_109dddcb4;
    }
LAB_109dddca4:
    *param_1 = 0;
  }
  else {
    if ((uVar19 & 0xff) == 8) {
      pppppppuStack_100 = pppppppuVar24;
      pppppppuVar24 = (ulong *******)&pppppppuStack_100;
      pppppppuVar8 = (ulong *******)0x0;
      pppppppuStack_f8 = pppppppuVar20;
      FUN_109e03e50(pppppppuVar24,0,&puStack_108);
      if (((((ulong)pppppppuVar24 & 1) == 0) && (pppppppuStack_f8 == (ulong *******)0x0)) &&
         ((ulong)puStack_108 >> 0x20 == 0)) {
        *puVar1 = (int)puStack_108;
        goto LAB_109dddca4;
      }
      puVar17 = &UNK_10f5ff3cf;
    }
    else {
      puVar17 = &UNK_10f5ff367;
    }
LAB_109dddcb4:
    func_0x000109df6eb4();
    pppppppuStack_100 = (ulong *******)0x3;
    pppppppuStack_f8 = (ulong *******)&PTR_PTR_1132fef20;
    pppppppuVar8 = (ulong *******)&pppppppuStack_100;
    puStack_108 = puVar17;
    FUN_109df7270(param_1,&puStack_108);
  }
LAB_109dddcdc:
  ppppppuVar22 = ppppppuStack_130;
  if (pppppppuStack_f0 != pppppppuVar23) {
    _free();
  }
LAB_109ddda2c:
  ppppppuVar4 = ppppppuStack_d0;
  if (ppppppuStack_d0 != ppppppuVar22) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppppuVar4;
  }
  ___stack_chk_fail();
  if (pppppppuStack_f0 != pppppppuVar23) {
    _free();
  }
  if (ppppppuStack_d0 != ppppppuStack_130) {
    _free();
  }
  ppppppuVar22 = ppppppuVar4;
  __Unwind_Resume();
  pcStack_158 = FUN_109dddd50;
  pppppppuVar23 = pppppppuVar8;
  uStack_178 = param_6;
  pppppppuStack_170 = pppppppuVar18;
  ppppppuStack_168 = ppppppuVar4;
  puStack_160 = &stack0xfffffffffffffff0;
  (*(code *)(*pppppppuVar8)[8])(pppppppuVar8,ppppppuVar22[0x19],ppppppuVar22[0x1a]);
  if ((int)pppppppuVar23 == 0) {
    ppppuVar13 = pppppuVar11[4];
    if ((ulong)((long)pppppuVar11[3] - (long)ppppuVar13) < 10) {
      FUN_109e0560c(pppppuVar11,&UNK_10f5ff0f8,10);
    }
    else {
      *(undefined2 *)(ppppuVar13 + 1) = 0x96e;
      *ppppuVar13 = (ulong ***)0x6f69746365732e09;
      pppppuVar11[4] = (ulong ****)((long)pppppuVar11[4] + 10);
    }
    pppppuVar7 = pppppuVar11;
    FUN_109dde218(pppppuVar11,ppppppuVar22[0x19],ppppppuVar22[0x1a]);
    if ((ulong)((long)pppppuVar11[3] - (long)pppppuVar11[4]) < 2) {
      pppppuVar7 = pppppuVar11;
      FUN_109e0560c(pppppuVar11,&UNK_10f5ff103,2);
    }
    else {
      *(undefined2 *)pppppuVar11[4] = 0x222c;
      pppppuVar11[4] = (ulong ****)((long)pppppuVar11[4] + 2);
    }
    if (*(char *)((long)ppppppuVar22 + 0xfc) == '\x01') {
      ppppuVar13 = pppppuVar11[4];
      if (ppppuVar13 < pppppuVar11[3]) {
        pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
        *(undefined1 *)ppppuVar13 = 0x70;
      }
      else {
        pppppuVar7 = pppppuVar11;
        FUN_109e05570(pppppuVar11,0x70);
      }
    }
    if (ppppppuVar22[0x1d] != (ulong *****)0x0) {
      ppppuVar13 = pppppuVar11[4];
      if (ppppuVar13 < pppppuVar11[3]) {
        pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
        *(undefined1 *)ppppuVar13 = 0x47;
      }
      else {
        pppppuVar7 = pppppuVar11;
        FUN_109e05570(pppppuVar11,0x47);
      }
    }
    if (((ulong)ppppppuVar22[0x20] & 1) != 0) {
      ppppuVar13 = pppppuVar11[4];
      if (ppppuVar13 < pppppuVar11[3]) {
        pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
        *(undefined1 *)ppppuVar13 = 0x53;
      }
      else {
        pppppuVar7 = pppppuVar11;
        FUN_109e05570(pppppuVar11,0x53);
      }
    }
    if ((*(byte *)(ppppppuVar22 + 0x20) >> 1 & 1) != 0) {
      ppppuVar13 = pppppuVar11[4];
      if (ppppuVar13 < pppppuVar11[3]) {
        pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
        *(undefined1 *)ppppuVar13 = 0x54;
      }
      else {
        pppppuVar7 = pppppuVar11;
        FUN_109e05570(pppppuVar11,0x54);
      }
    }
    ppppuVar13 = pppppuVar11[4];
    if (ppppuVar13 < pppppuVar11[3]) {
      pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
      *(undefined1 *)ppppuVar13 = 0x22;
    }
    else {
      pppppuVar7 = pppppuVar11;
      FUN_109e05570(pppppuVar11,0x22);
    }
    ppppuVar13 = pppppuVar11[4];
    if (ppppuVar13 < pppppuVar11[3]) {
      pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
      *(undefined1 *)ppppuVar13 = 0x2c;
    }
    else {
      pppppuVar7 = pppppuVar11;
      FUN_109e05570(pppppuVar11,0x2c);
    }
    ppppuVar13 = pppppuVar11[4];
    if (*(char *)pppppppuVar8[6] == '@') {
      if (pppppuVar11[3] <= ppppuVar13) {
        uVar9 = 0x25;
        goto LAB_109dde010;
      }
      pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
      uVar15 = 0x25;
LAB_109dddff4:
      *(undefined1 *)ppppuVar13 = uVar15;
    }
    else {
      if (ppppuVar13 < pppppuVar11[3]) {
        pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
        uVar15 = 0x40;
        goto LAB_109dddff4;
      }
      uVar9 = 0x40;
LAB_109dde010:
      pppppuVar7 = pppppuVar11;
      FUN_109e05570(pppppuVar11,uVar9);
    }
    ppppuVar13 = pppppuVar11[4];
    if (ppppppuVar22[0x1d] != (ulong *****)0x0) {
      if (pppppuVar11[3] == ppppuVar13) {
        FUN_109e0560c(pppppuVar11,&DAT_10f68e8ee,1);
      }
      else {
        *(undefined1 *)ppppuVar13 = 0x2c;
        pppppuVar11[4] = (ulong ****)((long)pppppuVar11[4] + 1);
      }
      if ((*(byte *)ppppppuVar22[0x1d] >> 2 & 1) == 0) {
        ppppuVar14 = (ulong ****)0x0;
        pppuVar10 = (ulong ***)0x0;
      }
      else {
        ppppuVar13 = ppppppuVar22[0x1d][-1];
        ppppuVar14 = ppppuVar13 + 2;
        pppuVar10 = *ppppuVar13;
      }
      pppppuVar7 = pppppuVar11;
      FUN_109dde218(pppppuVar11,ppppuVar14,pppuVar10);
      ppppuVar13 = pppppuVar11[4];
      if ((ulong)((long)pppppuVar11[3] - (long)ppppuVar13) < 7) {
        pppppuVar7 = pppppuVar11;
        FUN_109e0560c(pppppuVar11,&UNK_10f5ff1a1,7);
        ppppuVar13 = pppppuVar11[4];
      }
      else {
        *(undefined4 *)((long)ppppuVar13 + 3) = 0x7461646d;
        *(undefined4 *)ppppuVar13 = 0x6d6f632c;
        ppppuVar13 = (ulong ****)((long)pppppuVar11[4] + 7);
        pppppuVar11[4] = ppppuVar13;
      }
    }
    if (*(int *)(ppppppuVar22 + 0x1c) != -1) {
      if ((ulong)((long)pppppuVar11[3] - (long)ppppuVar13) < 8) {
        FUN_109e0560c(pppppuVar11,&UNK_10f5ff1a9,8);
      }
      else {
        *ppppuVar13 = (ulong ***)0x2c657571696e752c;
        pppppuVar11[4] = pppppuVar11[4] + 1;
      }
      pppppuVar7 = pppppuVar11;
      FUN_109df9d4c(pppppuVar11,*(undefined4 *)(ppppppuVar22 + 0x1c),0,0,0);
      ppppuVar13 = pppppuVar11[4];
    }
    if (ppppuVar13 < pppppuVar11[3]) {
      pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
      *(undefined1 *)ppppuVar13 = 10;
    }
    else {
      pppppuVar7 = pppppuVar11;
      FUN_109e05570(pppppuVar11,10);
    }
    if (pppppuVar12 == (ulong *****)0x0) {
      return (ulong ******)pppppuVar7;
    }
    ppppuVar13 = pppppuVar11[4];
    if ((ulong)((long)pppppuVar11[3] - (long)ppppuVar13) < 0xd) {
      FUN_109e0560c(pppppuVar11,&UNK_10f5ff1b2,0xd);
    }
    else {
      *ppppuVar13 = (ulong ***)0x6365736275732e09;
      *(undefined8 *)((long)ppppuVar13 + 5) = 0x96e6f6974636573;
      pppppuVar11[4] = (ulong ****)((long)pppppuVar11[4] + 0xd);
    }
  }
  else {
    ppppuVar13 = pppppuVar11[4];
    if (ppppuVar13 < pppppuVar11[3]) {
      pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
      *(undefined1 *)ppppuVar13 = 9;
    }
    else {
      FUN_109e05570(pppppuVar11,9);
    }
    pppppuVar7 = pppppuVar11;
    FUN_109d2f728(pppppuVar11,ppppppuVar22[0x19],ppppppuVar22[0x1a]);
    if (pppppuVar12 == (ulong *****)0x0) goto LAB_109dde1d4;
    ppppuVar13 = pppppuVar11[4];
    if (ppppuVar13 < pppppuVar11[3]) {
      pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
      *(undefined1 *)ppppuVar13 = 9;
    }
    else {
      FUN_109e05570(pppppuVar11,9);
    }
  }
  FUN_109dade30(pppppuVar12,pppppuVar11,pppppppuVar8,0);
  pppppuVar7 = pppppuVar12;
LAB_109dde1d4:
  ppppuVar13 = pppppuVar11[4];
  if (ppppuVar13 < pppppuVar11[3]) {
    pppppuVar11[4] = (ulong ****)((long)ppppuVar13 + 1);
    *(undefined1 *)ppppuVar13 = 10;
    return (ulong ******)pppppuVar7;
  }
  ppppuVar13 = pppppuVar11[3];
  ppppuVar14 = pppppuVar11[4];
  do {
    if (ppppuVar14 < ppppuVar13) {
LAB_109e055c0:
      pppppuVar11[4] = (ulong ****)((long)ppppuVar14 + 1);
      *(undefined1 *)ppppuVar14 = 10;
      return (ulong ******)pppppuVar11;
    }
    if (pppppuVar11[2] != (ulong ****)0x0) {
      FUN_109e05520(pppppuVar11);
      ppppuVar14 = pppppuVar11[4];
      goto LAB_109e055c0;
    }
    if (*(int *)(pppppuVar11 + 7) == 0) {
      uStack_178 = (uint *)CONCAT17(10,(undefined7)uStack_178);
      if (pppppuVar11[6] != (ulong ****)0x0) {
        FUN_109e057dc();
      }
      (*(code *)(*pppppuVar11)[9])(pppppuVar11,(long)&uStack_178 + 7,1);
      return (ulong ******)pppppuVar11;
    }
    FUN_109e0538c(pppppuVar11);
    ppppuVar13 = pppppuVar11[3];
    ppppuVar14 = pppppuVar11[4];
  } while( true );
}



/* Entry: 109dddd50; end: 109dde217;  */

long * FUN_109dddd50(long param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
  if ((int)plVar2 == 0) {
    puVar5 = (undefined8 *)param_4[4];
    if ((ulong)(param_4[3] - (long)puVar5) < 10) {
      FUN_109e0560c(param_4,&UNK_10f5ff0f8,10);
    }
    else {
      *(undefined2 *)(puVar5 + 1) = 0x96e;
      *puVar5 = 0x6f69746365732e09;
      param_4[4] = param_4[4] + 10;
    }
    plVar2 = param_4;
    FUN_109dde218(param_4,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
    if ((ulong)(param_4[3] - param_4[4]) < 2) {
      plVar2 = param_4;
      FUN_109e0560c(param_4,&UNK_10f5ff103,2);
    }
    else {
      *(undefined2 *)param_4[4] = 0x222c;
      param_4[4] = param_4[4] + 2;
    }
    if (*(char *)(param_1 + 0xfc) == '\x01') {
      puVar8 = (undefined1 *)param_4[4];
      if (puVar8 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar8 + 1);
        *puVar8 = 0x70;
      }
      else {
        plVar2 = param_4;
        FUN_109e05570(param_4,0x70);
      }
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      puVar8 = (undefined1 *)param_4[4];
      if (puVar8 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar8 + 1);
        *puVar8 = 0x47;
      }
      else {
        plVar2 = param_4;
        FUN_109e05570(param_4,0x47);
      }
    }
    if ((*(byte *)(param_1 + 0x100) & 1) != 0) {
      puVar8 = (undefined1 *)param_4[4];
      if (puVar8 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar8 + 1);
        *puVar8 = 0x53;
      }
      else {
        plVar2 = param_4;
        FUN_109e05570(param_4,0x53);
      }
    }
    if ((*(byte *)(param_1 + 0x100) >> 1 & 1) != 0) {
      puVar8 = (undefined1 *)param_4[4];
      if (puVar8 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar8 + 1);
        *puVar8 = 0x54;
      }
      else {
        plVar2 = param_4;
        FUN_109e05570(param_4,0x54);
      }
    }
    puVar8 = (undefined1 *)param_4[4];
    if (puVar8 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar8 + 1);
      *puVar8 = 0x22;
    }
    else {
      plVar2 = param_4;
      FUN_109e05570(param_4,0x22);
    }
    puVar8 = (undefined1 *)param_4[4];
    if (puVar8 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar8 + 1);
      *puVar8 = 0x2c;
    }
    else {
      plVar2 = param_4;
      FUN_109e05570(param_4,0x2c);
    }
    puVar8 = (undefined1 *)param_4[4];
    if (*(char *)param_2[6] == '@') {
      if ((undefined1 *)param_4[3] <= puVar8) {
        uVar4 = 0x25;
        goto LAB_109dde010;
      }
      param_4[4] = (long)(puVar8 + 1);
      uVar7 = 0x25;
LAB_109dddff4:
      *puVar8 = uVar7;
    }
    else {
      if (puVar8 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar8 + 1);
        uVar7 = 0x40;
        goto LAB_109dddff4;
      }
      uVar4 = 0x40;
LAB_109dde010:
      plVar2 = param_4;
      FUN_109e05570(param_4,uVar4);
    }
    puVar5 = (undefined8 *)param_4[4];
    if (*(long *)(param_1 + 0xe8) != 0) {
      if ((undefined8 *)param_4[3] == puVar5) {
        FUN_109e0560c(param_4,&DAT_10f68e8ee,1);
      }
      else {
        *(undefined1 *)puVar5 = 0x2c;
        param_4[4] = param_4[4] + 1;
      }
      if ((**(byte **)(param_1 + 0xe8) >> 2 & 1) == 0) {
        puVar3 = (undefined8 *)0x0;
        uVar4 = 0;
      }
      else {
        puVar5 = *(undefined8 **)(*(byte **)(param_1 + 0xe8) + -8);
        puVar3 = puVar5 + 2;
        uVar4 = *puVar5;
      }
      plVar2 = param_4;
      FUN_109dde218(param_4,puVar3,uVar4);
      puVar1 = (undefined4 *)param_4[4];
      if ((ulong)(param_4[3] - (long)puVar1) < 7) {
        plVar2 = param_4;
        FUN_109e0560c(param_4,&UNK_10f5ff1a1,7);
        puVar5 = (undefined8 *)param_4[4];
      }
      else {
        *(undefined4 *)((long)puVar1 + 3) = 0x7461646d;
        *puVar1 = 0x6d6f632c;
        puVar5 = (undefined8 *)(param_4[4] + 7);
        param_4[4] = (long)puVar5;
      }
    }
    if (*(int *)(param_1 + 0xe0) != -1) {
      if ((ulong)(param_4[3] - (long)puVar5) < 8) {
        FUN_109e0560c(param_4,&UNK_10f5ff1a9,8);
      }
      else {
        *puVar5 = 0x2c657571696e752c;
        param_4[4] = param_4[4] + 8;
      }
      plVar2 = param_4;
      FUN_109df9d4c(param_4,*(undefined4 *)(param_1 + 0xe0),0,0,0);
      puVar5 = (undefined8 *)param_4[4];
    }
    if (puVar5 < (undefined8 *)param_4[3]) {
      param_4[4] = (long)((long)puVar5 + 1);
      *(undefined1 *)puVar5 = 10;
    }
    else {
      plVar2 = param_4;
      FUN_109e05570(param_4,10);
    }
    if (param_5 == (long *)0x0) {
      return plVar2;
    }
    puVar5 = (undefined8 *)param_4[4];
    if ((ulong)(param_4[3] - (long)puVar5) < 0xd) {
      FUN_109e0560c(param_4,&UNK_10f5ff1b2,0xd);
    }
    else {
      *puVar5 = 0x6365736275732e09;
      *(undefined8 *)((long)puVar5 + 5) = 0x96e6f6974636573;
      param_4[4] = param_4[4] + 0xd;
    }
  }
  else {
    puVar8 = (undefined1 *)param_4[4];
    if (puVar8 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar8 + 1);
      *puVar8 = 9;
    }
    else {
      FUN_109e05570(param_4,9);
    }
    plVar2 = param_4;
    FUN_109d2f728(param_4,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
    if (param_5 == (long *)0x0) goto LAB_109dde1d4;
    puVar8 = (undefined1 *)param_4[4];
    if (puVar8 < (undefined1 *)param_4[3]) {
      param_4[4] = (long)(puVar8 + 1);
      *puVar8 = 9;
    }
    else {
      FUN_109e05570(param_4,9);
    }
  }
  FUN_109dade30(param_5,param_4,param_2,0);
  plVar2 = param_5;
LAB_109dde1d4:
  puVar8 = (undefined1 *)param_4[4];
  if (puVar8 < (undefined1 *)param_4[3]) {
    param_4[4] = (long)(puVar8 + 1);
    *puVar8 = 10;
    return plVar2;
  }
  puVar8 = (undefined1 *)param_4[3];
  puVar6 = (undefined1 *)param_4[4];
  do {
    if (puVar6 < puVar8) {
LAB_109e055c0:
      param_4[4] = (long)(puVar6 + 1);
      *puVar6 = 10;
      return param_4;
    }
    if (param_4[2] != 0) {
      FUN_109e05520(param_4);
      puVar6 = (undefined1 *)param_4[4];
      goto LAB_109e055c0;
    }
    if ((int)param_4[7] == 0) {
      if (param_4[6] != 0) {
        FUN_109e057dc();
      }
      (**(code **)(*param_4 + 0x48))(param_4,&stack0xffffffffffffffdf,1);
      return param_4;
    }
    FUN_109e0538c(param_4);
    puVar8 = (undefined1 *)param_4[3];
    puVar6 = (undefined1 *)param_4[4];
  } while( true );
}



/* Entry: 109dde218; end: 109dde44f;  */

char ** FUN_109dde218(long *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char **ppcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcStack_70;
  ulong uStack_68;
  
  ppcVar4 = &pcStack_70;
  pcStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000109e03bec(&pcStack_70,&UNK_10f5ff1cb,0x40,0);
  if (ppcVar4 == (char **)0xffffffffffffffff) {
    if ((ulong)(param_1[3] - param_1[4]) < param_3) {
      FUN_109e0560c(param_1,param_2,param_3);
    }
    else if (param_3 != 0) {
      _memcpy(param_1[4],param_2,param_3);
      param_1[4] = param_1[4] + param_3;
    }
    return (char **)param_1;
  }
  puVar7 = (undefined1 *)param_1[4];
  if (puVar7 < (undefined1 *)param_1[3]) {
    param_1[4] = (long)(puVar7 + 1);
    *puVar7 = 0x22;
  }
  else {
    ppcVar4 = (char **)param_1;
    FUN_109e05570(param_1,0x22);
  }
  if (0 < (long)param_3) {
    pcVar1 = param_2 + param_3;
    do {
      cVar3 = *param_2;
      pcVar8 = param_2;
      if (cVar3 == '\\') {
        pcVar8 = param_2 + 1;
        if (pcVar8 == pcVar1) {
          puVar5 = &DAT_10f47f5f4;
          if (1 < (ulong)(param_1[3] - param_1[4])) {
            *(undefined2 *)param_1[4] = 0x5c5c;
            goto LAB_109dde3d4;
          }
LAB_109dde388:
          ppcVar4 = (char **)param_1;
          FUN_109e0560c(param_1,puVar5,2);
          pcVar8 = param_2;
        }
        else {
          puVar7 = (undefined1 *)param_1[4];
          if (puVar7 < (undefined1 *)param_1[3]) {
            param_1[4] = (long)(puVar7 + 1);
            *puVar7 = 0x5c;
          }
          else {
            ppcVar4 = (char **)param_1;
            FUN_109e05570(param_1,0x5c);
          }
          cVar3 = *pcVar8;
          pcVar2 = (char *)param_1[4];
          if (pcVar2 < (char *)param_1[3]) {
            param_1[4] = (long)(pcVar2 + 1);
            *pcVar2 = cVar3;
          }
          else {
            ppcVar4 = (char **)param_1;
            FUN_109e05570(param_1);
          }
        }
      }
      else if (cVar3 == '\"') {
        puVar5 = &DAT_10f47f5ef;
        if ((ulong)(param_1[3] - param_1[4]) < 2) goto LAB_109dde388;
        *(undefined2 *)param_1[4] = 0x225c;
LAB_109dde3d4:
        param_1[4] = param_1[4] + 2;
        pcVar8 = param_2;
      }
      else {
        pcVar2 = (char *)param_1[4];
        if (pcVar2 < (char *)param_1[3]) {
          param_1[4] = (long)(pcVar2 + 1);
          *pcVar2 = cVar3;
        }
        else {
          ppcVar4 = (char **)param_1;
          FUN_109e05570(param_1);
        }
      }
      param_2 = pcVar8 + 1;
    } while (param_2 < pcVar1);
  }
  puVar7 = (undefined1 *)param_1[4];
  if (puVar7 < (undefined1 *)param_1[3]) {
    param_1[4] = (long)(puVar7 + 1);
    *puVar7 = 0x22;
    return ppcVar4;
  }
  puVar7 = (undefined1 *)param_1[3];
  puVar6 = (undefined1 *)param_1[4];
  do {
    if (puVar6 < puVar7) {
LAB_109e055c0:
      param_1[4] = (long)(puVar6 + 1);
      *puVar6 = 0x22;
      return (char **)param_1;
    }
    if (param_1[2] != 0) {
      FUN_109e05520(param_1);
      puVar6 = (undefined1 *)param_1[4];
      goto LAB_109e055c0;
    }
    if ((int)param_1[7] == 0) {
      if (param_1[6] != 0) {
        FUN_109e057dc();
      }
      (**(code **)(*param_1 + 0x48))(param_1,&stack0xffffffffffffffdf,1);
      return (char **)param_1;
    }
    FUN_109e0538c(param_1);
    puVar7 = (undefined1 *)param_1[3];
    puVar6 = (undefined1 *)param_1[4];
  } while( true );
}



/* Entry: 109dde450; end: 109dde45f;  */

undefined8 FUN_109dde450(void)

{
  return 0;
}



/* Entry: 109dde460; end: 109dde573;  */

long * FUN_109dde460(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uStack_21;
  
  if ((ulong)(param_2[3] - param_2[4]) < 8) {
    FUN_109e0560c(param_2,&UNK_10f5ff842,8);
  }
  else {
    *(undefined8 *)param_2[4] = 0x2074636573632e09;
    param_2[4] = param_2[4] + 8;
  }
  if ((**(byte **)(param_1 + 0xe8) >> 2 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(*(byte **)(param_1 + 0xe8) + -8);
    puVar2 = puVar3 + 2;
    uVar4 = *puVar3;
  }
  FUN_109d2f728(param_2,puVar2,uVar4);
  if ((undefined1 *)param_2[3] == (undefined1 *)param_2[4]) {
    FUN_109e0560c(param_2,&DAT_10f68e8ee,1);
  }
  else {
    *(undefined1 *)param_2[4] = 0x2c;
    param_2[4] = param_2[4] + 1;
  }
  plVar1 = param_2;
  FUN_109df9d4c(param_2,*(undefined1 *)(param_1 + 0x18),0,0,0);
  puVar6 = (undefined1 *)param_2[4];
  if (puVar6 < (undefined1 *)param_2[3]) {
    param_2[4] = (long)(puVar6 + 1);
    *puVar6 = 10;
    return plVar1;
  }
  puVar6 = (undefined1 *)param_2[3];
  puVar5 = (undefined1 *)param_2[4];
  do {
    if (puVar5 < puVar6) {
LAB_109e055c0:
      param_2[4] = (long)(puVar5 + 1);
      *puVar5 = 10;
      return param_2;
    }
    if (param_2[2] != 0) {
      FUN_109e05520(param_2);
      puVar5 = (undefined1 *)param_2[4];
      goto LAB_109e055c0;
    }
    if ((int)param_2[7] == 0) {
      uStack_21 = 10;
      if (param_2[6] != 0) {
        FUN_109e057dc();
      }
      (**(code **)(*param_2 + 0x48))(param_2,&uStack_21,1);
      return param_2;
    }
    FUN_109e0538c(param_2);
    puVar6 = (undefined1 *)param_2[3];
    puVar5 = (undefined1 *)param_2[4];
  } while( true );
}



/* Entry: 109dde574; end: 109dde7bb;  */

long * FUN_109dde574(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  bVar1 = *(byte *)((long)param_1 + 0xdc);
  if ((bVar1 & 0xfe) == 2) {
    if ((char)param_1[0x1c] == '\0') goto FUN_109dde460;
    puVar4 = &UNK_10f5ff84b;
  }
  else if ((bVar1 & 0xfc) == 8 || (bVar1 & 0xfc) == 4) {
    if ((char)param_1[0x1c] == '\x01' || (char)param_1[0x1c] == '\x10') goto FUN_109dde460;
    puVar4 = &UNK_10f5ff87b;
  }
  else {
    if (bVar1 != 0x13) {
      if (bVar1 == 0xd) {
        if ((char)param_1[0x1c] != '\x14') {
          puVar4 = &UNK_10f5ff8ae;
          goto LAB_109dde79c;
        }
      }
      else {
        if (*(char *)((long)param_1 + 0xe2) == '\x01') {
          if ((char)param_1[0x1c] == '\x10') goto FUN_109dde460;
          if (*(char *)((long)param_1 + 0xe1) == '\x03') {
            return param_1;
          }
        }
        if ((bVar1 & 0xfd) != 0xc) {
          if (bVar1 != 0) goto LAB_109dde7a4;
          if (*(char *)((long)param_1 + 0x104) != '\x01') goto LAB_109dde7a4;
          plVar3 = param_4;
          FUN_109d2f728(param_4,&UNK_10f5ff918,10);
          FUN_109e053d0();
          puVar9 = (undefined1 *)plVar3[4];
          if (puVar9 < (undefined1 *)plVar3[3]) {
            plVar3[4] = (long)(puVar9 + 1);
            *puVar9 = 10;
          }
          else {
            FUN_109e05570();
          }
          FUN_109d2f728(param_4,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
          FUN_109d2f728();
          puVar9 = (undefined1 *)param_4[4];
          if (puVar9 < (undefined1 *)param_4[3]) {
            param_4[4] = (long)(puVar9 + 1);
            *puVar9 = 0x3a;
          }
          else {
            FUN_109e05570();
          }
          puVar9 = (undefined1 *)param_4[4];
          if (puVar9 < (undefined1 *)param_4[3]) {
            param_4[4] = (long)(puVar9 + 1);
            *puVar9 = 10;
          }
          else {
            FUN_109e05570();
          }
          return param_4;
        }
      }
FUN_109dde460:
      if ((ulong)(param_4[3] - param_4[4]) < 8) {
        FUN_109e0560c(param_4,&UNK_10f5ff842,8);
      }
      else {
        *(undefined8 *)param_4[4] = 0x2074636573632e09;
        param_4[4] = param_4[4] + 8;
      }
      if ((*(byte *)param_1[0x1d] >> 2 & 1) == 0) {
        puVar5 = (undefined8 *)0x0;
        uVar7 = 0;
      }
      else {
        puVar6 = *(undefined8 **)((byte *)param_1[0x1d] + -8);
        puVar5 = puVar6 + 2;
        uVar7 = *puVar6;
      }
      FUN_109d2f728(param_4,puVar5,uVar7);
      if ((undefined1 *)param_4[3] == (undefined1 *)param_4[4]) {
        FUN_109e0560c(param_4,&DAT_10f68e8ee,1);
      }
      else {
        *(undefined1 *)param_4[4] = 0x2c;
        param_4[4] = param_4[4] + 1;
      }
      plVar3 = param_4;
      FUN_109df9d4c(param_4,(char)param_1[3],0,0,0);
      puVar9 = (undefined1 *)param_4[4];
      if (puVar9 < (undefined1 *)param_4[3]) {
        param_4[4] = (long)(puVar9 + 1);
        *puVar9 = 10;
        return plVar3;
      }
      puVar9 = (undefined1 *)param_4[3];
      puVar8 = (undefined1 *)param_4[4];
      do {
        if (puVar8 < puVar9) {
LAB_109e055c0:
          param_4[4] = (long)(puVar8 + 1);
          *puVar8 = 10;
          return param_4;
        }
        if (param_4[2] != 0) {
          FUN_109e05520(param_4);
          puVar8 = (undefined1 *)param_4[4];
          goto LAB_109e055c0;
        }
        if ((int)param_4[7] == 0) {
          if (param_4[6] != 0) {
            FUN_109e057dc();
          }
          (**(code **)(*param_4 + 0x48))(param_4,&stack0xffffffffffffffdf,1);
          return param_4;
        }
        FUN_109e0538c(param_4);
        puVar9 = (undefined1 *)param_4[3];
        puVar8 = (undefined1 *)param_4[4];
      } while( true );
    }
    bVar1 = *(byte *)(param_1 + 0x1c);
    if (bVar1 < 0x17) {
      uVar2 = 1 << (ulong)(bVar1 & 0x1f);
      if ((uVar2 & 0x10420) != 0) goto FUN_109dde460;
      if ((uVar2 & 0x400008) != 0) {
        return param_1;
      }
      if (bVar1 == 0xf) {
        if ((ulong)(param_4[3] - param_4[4]) < 6) {
          FUN_109e0560c(param_4,&UNK_10f5ff8e0,6);
        }
        else {
          _memcpy(param_4[4],&UNK_10f5ff8e0,6);
          param_4[4] = param_4[4] + 6;
        }
        return param_4;
      }
    }
    puVar4 = &UNK_10f5ff8e7;
  }
LAB_109dde79c:
  do {
    FUN_109df7828(puVar4,1);
LAB_109dde7a4:
    puVar4 = &UNK_10f5ff928;
  } while( true );
}



/* Entry: 109dde7bc; end: 109dde7ef;  */

bool FUN_109dde7bc(long param_1)

{
  return (*(uint *)(param_1 + 0xdc) & 0xfe) == 2;
}



/* Entry: 109dde7f0; end: 109dde823;  */

void FUN_109dde7f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  _snprintf(param_2,param_3,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 109dde824; end: 109dde937;  */

undefined8 * FUN_109dde824(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_110b597c0;
  param_1[1] = param_2;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar2 = param_1 + 0xe;
  *plVar2 = (long)(param_1 + 0x10);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[0xf] = 0x400000000;
  param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0x106) = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  func_0x000109dd3134(plVar2,&uStack_60,1);
  plVar1 = (long *)(param_1[0xe] + (ulong)*(uint *)(param_1 + 0xf) * 0x20);
  lVar3 = *plVar2;
  lVar5 = plVar2[3];
  lVar4 = plVar2[2];
  plVar1[1] = plVar2[1];
  *plVar1 = lVar3;
  plVar1[3] = lVar5;
  plVar1[2] = lVar4;
  *(int *)(param_1 + 0xf) = *(int *)(param_1 + 0xf) + 1;
  return param_1;
}



/* Entry: 109dde938; end: 109dde9c3;  */

undefined8 * FUN_109dde938(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b597c0;
  if ((undefined8 *)param_1[0xe] != param_1 + 0x10) {
    _free();
  }
  __ZdlPvSt11align_val_t(param_1[0xb],8);
  puStack_28 = param_1 + 6;
  FUN_109de1bec(&puStack_28);
  puStack_28 = param_1 + 3;
  FUN_109dadd20(&puStack_28);
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 109dde9c4; end: 109ddeb9b;  */

void FUN_109dde9c4(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long alStack_50 [4];
  
  lVar5 = *(long *)(param_1 + 0x18);
  for (lVar6 = *(long *)(param_1 + 0x20); lVar6 != lVar5; lVar6 = lVar6 + -0x58) {
    alStack_50[0] = lVar6 + -0x38;
    FUN_109dadc28(alStack_50);
  }
  *(long *)(param_1 + 0x20) = lVar5;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_109de1c2c((undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x30));
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 100) == 0) goto LAB_109ddeac8;
    uVar4 = *(uint *)(param_1 + 0x68);
    if (uVar4 < 0x41) goto LAB_109ddeaa4;
    uVar7 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x68);
    if ((uVar4 <= (uint)(iVar2 * 4)) || (uVar4 < 0x41)) {
LAB_109ddeaa4:
      if (uVar4 != 0) {
        lVar5 = (ulong)uVar4 << 4;
        puVar3 = *(undefined8 **)(param_1 + 0x58);
        do {
          *puVar3 = 0xfffffffffffff000;
          lVar5 = lVar5 + -0x10;
          puVar3 = puVar3 + 2;
        } while (lVar5 != 0);
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
      goto LAB_109ddeac8;
    }
    uVar7 = 1 << (ulong)(0x21U - (int)LZCOUNT(iVar2 + -1) & 0x1f);
    if ((int)uVar7 < 0x41) {
      uVar7 = 0x40;
    }
  }
  if (uVar7 == uVar4) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    lVar5 = (ulong)uVar4 << 4;
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar5 = lVar5 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar5 != 0);
  }
  else {
    __ZdlPvSt11align_val_t(*(undefined8 *)(param_1 + 0x58),8);
    if (uVar7 == 0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      uVar4 = (uVar7 << 2) / 3 + 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = (uVar4 >> 0x10 | uVar4) + 1;
      *(uint *)(param_1 + 0x68) = uVar4;
      puVar3 = (undefined8 *)((ulong)uVar4 << 4);
      __ZnwmSt11align_val_t(puVar3,8);
      *(undefined8 **)(param_1 + 0x58) = puVar3;
      *(undefined8 *)(param_1 + 0x60) = 0;
      if (*(uint *)(param_1 + 0x68) != 0) {
        lVar5 = (ulong)*(uint *)(param_1 + 0x68) << 4;
        do {
          *puVar3 = 0xfffffffffffff000;
          lVar5 = lVar5 + -0x10;
          puVar3 = puVar3 + 2;
        } while (lVar5 != 0);
      }
    }
  }
LAB_109ddeac8:
  *(undefined4 *)(param_1 + 0x78) = 0;
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  alStack_50[3] = 0;
  alStack_50[2] = 0;
  puVar3 = (undefined8 *)(param_1 + 0x70);
  func_0x000109dd3134(puVar3,alStack_50,1);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x78) * 0x20);
  uVar8 = *puVar3;
  uVar10 = puVar3[3];
  uVar9 = puVar3[2];
  puVar1[1] = puVar3[1];
  *puVar1 = uVar8;
  puVar1[3] = uVar10;
  puVar1[2] = uVar9;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  return;
}



/* Entry: 109ddeb9c; end: 109ddebab;  */

undefined8 FUN_109ddeb9c(void)

{
  int iVar1;
  
  if ((bRam0000000113834710 & 1) == 0) {
    iVar1 = 0x13834710;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138346d8 = 0;
      uRam00000001138346f8 = 0;
      uRam0000000113834700 = 0;
      uRam0000000113834708 = 1;
      uRam00000001138346e8 = 0;
      uRam00000001138346f0 = 0;
      uRam00000001138346e0 = 0;
      ppuRam00000001138346d0 = &PTR_FUN_110b5c608;
      ___cxa_atexit(FUN_109e0620c,0x1138346d0,0x100000000);
      ___cxa_guard_release(0x113834710);
    }
  }
  return 0x1138346d0;
}



/* Entry: 109ddebac; end: 109ddec07;  */

void FUN_109ddebac(long *param_1,ulong param_2,int param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uStack_18;
  
  cVar1 = *(char *)(*(long *)(param_1[1] + 0x90) + 0x10);
  uVar2 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  uStack_18 = param_2;
  if ((cVar1 - 1U & 0xfe) != 0) {
    uStack_18 = uVar2 >> 0x20 | uVar2 << 0x20;
  }
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = (ulong)(8 - param_3);
  }
  (**(code **)(*param_1 + 0x1e0))(param_1,(long)&uStack_18 + uVar2,param_3);
  return;
}



/* Entry: 109ddec08; end: 109ddeddf;  */

void FUN_109ddec08(long *param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puStack_70;
  uint uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(uint *)(param_2 + 1);
  uVar4 = (ulong)uVar2;
  if ((uVar4 + 0x3f & 0x1ffffffc0) == 0x40) {
    puVar3 = param_2;
    func_0x000109d30394(param_2,0xffffffffffffffff);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x000109ddec94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1f8))(param_1,puVar3,*(uint *)(param_2 + 1) >> 3);
      return;
    }
  }
  else {
    if ((*(byte *)(*(long *)(param_1[1] + 0x90) + 0x10) & 1) == 0) {
      FUN_109df0a7c(&puStack_70,param_2);
      uVar4 = (ulong)*(uint *)(param_2 + 1);
    }
    else {
      uStack_68 = uVar2;
      if (uVar2 < 0x41) {
        puStack_70 = (undefined8 *)*param_2;
      }
      else {
        puVar3 = (undefined8 *)(uVar4 + 0x3f >> 3 & 0x3ffffff8);
        __Znam();
        puStack_70 = puVar3;
        _memcpy();
      }
    }
    uStack_50 = 10;
    uStack_58 = 0;
    puStack_60 = auStack_48;
    FUN_109d596f0(&puStack_60,uVar4 >> 3);
    ppuVar1 = &puStack_70;
    if (0x40 < uStack_68) {
      ppuVar1 = (undefined8 **)puStack_70;
    }
    _memcpy(puStack_60,ppuVar1,uVar4 >> 3);
    (**(code **)(*param_1 + 0x1e0))(param_1,puStack_60,uStack_58);
    puVar3 = puStack_60;
    if (puStack_60 != auStack_48) {
      _free();
    }
    if ((0x40 < uStack_68) && (puVar3 = puStack_70, puStack_70 != (undefined8 *)0x0)) {
      __ZdaPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume(puVar3);
  FUN_109df7828(&UNK_10f5ff958,1);
  FUN_109df7828(&UNK_10f5ff958,1);
  FUN_109df7828(&UNK_10f5ff958,1);
  FUN_109df7828(&UNK_10f5ff958,1);
  FUN_109df7828(&UNK_10f5ff958,1);
  FUN_109df7828(&UNK_10f5ff958,1);
  return;
}



/* Entry: 109ddede0; end: 109ddee6f;  */

void FUN_109ddede0(void)

{
  FUN_109df7828(&UNK_10f5ff958,1);
  FUN_109df7828(&UNK_10f5ff958,1);
  FUN_109df7828(&UNK_10f5ff958,1);
  FUN_109df7828(&UNK_10f5ff958,1);
  FUN_109df7828(&UNK_10f5ff958,1);
  FUN_109df7828(&UNK_10f5ff958,1);
  return;
}



/* Entry: 109ddee70; end: 109ddee73;  */

void FUN_109ddee70(void)

{
  return;
}



/* Entry: 109ddee74; end: 109ddf047;  */

void FUN_109ddee74(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined4 param_9)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uStack_28 = param_7[1];
  uStack_30 = *param_7;
  uStack_20 = *(undefined1 *)(param_7 + 2);
  uStack_48 = param_8[1];
  uStack_50 = *param_8;
  uStack_40 = param_8[2];
  uStack_60 = param_9;
  puVar2 = &uStack_30;
  puVar3 = &uStack_50;
  func_0x000109daa884(lVar1,param_3,param_4,param_5,param_6,param_2,puVar2,puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_68 = 0x109ddef08;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(lVar1 + 8);
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_80 = *(undefined1 *)(param_2 + 2);
  uStack_a8 = puVar2[1];
  uStack_b0 = *puVar2;
  uStack_a0 = puVar2[2];
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000109daa7a8(lVar1,puVar3,param_3,param_4,param_5,param_6,&uStack_90,&uStack_b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x000109ddefb8();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x50) = 1;
  }
  return;
}



/* Entry: 109ddf048; end: 109ddf06f;  */

void FUN_109ddf048(long param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x630) = param_2;
  *(undefined4 *)(lVar1 + 0x634) = param_3;
  *(undefined2 *)(lVar1 + 0x638) = param_4;
  *(undefined1 *)(lVar1 + 0x63a) = param_5;
  *(undefined1 *)(lVar1 + 0x63b) = param_6;
  *(undefined4 *)(lVar1 + 0x63c) = param_7;
  *(undefined1 *)(lVar1 + 0x640) = 1;
  return;
}



/* Entry: 109ddf070; end: 109ddf11b;  */

void FUN_109ddf070(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined2 uStack_68;
  undefined8 *apuStack_60 [2];
  ulong uStack_50;
  undefined2 uStack_40;
  undefined1 uStack_31;
  
  uStack_88 = CONCAT44(uStack_88._4_4_,param_2);
  lVar1 = *(long *)(param_1 + 8) + 0x618;
  apuStack_60[0] = &uStack_88;
  FUN_109dab138(lVar1,&uStack_88,&UNK_10dd5b8f9,apuStack_60,&uStack_31);
  if (*(long *)(lVar1 + 0x28) == 0) {
    lVar2 = *(long *)(param_1 + 8);
    uStack_88 = *(undefined8 *)(*(long *)(lVar2 + 0x90) + 0x58);
    uStack_80 = *(undefined8 *)(*(long *)(lVar2 + 0x90) + 0x60);
    uStack_68 = 0x305;
    puStack_78 = &UNK_10f5ff97a;
    uStack_50 = (ulong)param_2;
    uStack_40 = 0x802;
    apuStack_60[0] = &uStack_88;
    FUN_109da7538(lVar2,apuStack_60);
    *(long *)(lVar1 + 0x28) = lVar2;
  }
  return;
}



/* Entry: 109ddf11c; end: 109ddf18b;  */

byte FUN_109ddf11c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined *apuStack_a0 [2];
  undefined4 uStack_90;
  undefined2 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lVar6 = *(long *)(param_1 + 8);
  func_0x000109daa9fc();
  FUN_109da4f30(&puStack_78);
  uVar7 = (ulong)(param_2 - 1U);
  if (*(uint *)(lVar6 + 0x30) <= param_2 - 1U) {
    func_0x000109da5628(lVar6 + 0x28,param_2);
  }
  bVar4 = *(byte *)(*(long *)(lVar6 + 0x28) + uVar7 * 0x20 + 4);
  if ((bVar4 & 1) == 0) {
    lVar2 = 7;
    if (lStack_70 != 0) {
      lVar2 = lStack_70;
    }
    puVar3 = &UNK_10f5fa6b1;
    if (lStack_70 != 0) {
      puVar3 = puStack_78;
    }
    FUN_109da4f30(apuStack_a0,lVar6,puVar3,lVar2);
    uVar5 = *(undefined8 *)(param_1 + 8);
    apuStack_a0[0] = &UNK_10f5fa6b9;
    uStack_80 = 0x103;
    FUN_109da7f80(uVar5,apuStack_a0,0);
    puVar1 = (undefined4 *)(*(long *)(lVar6 + 0x28) + uVar7 * 0x20);
    *puVar1 = uStack_90;
    *(undefined8 *)(puVar1 + 4) = param_6;
    *(undefined8 *)(puVar1 + 6) = uVar5;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = param_5;
    *(undefined1 *)(*(long *)(lVar6 + 0x28) + uVar7 * 0x20 + 5) = param_7;
  }
  return bVar4 ^ 1;
}



/* Entry: 109ddf18c; end: 109ddf1b3;  */

bool FUN_109ddf18c(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x000109daa9fc();
  plVar6 = (long *)(lVar2 + 0xe8);
  lVar3 = *plVar6;
  uVar4 = (*(long *)(lVar2 + 0xf0) - lVar3 >> 4) * -0x5555555555555555;
  if (uVar4 < param_2 || uVar4 - param_2 == 0) {
    FUN_109da503c(plVar6,param_2 + 1);
    lVar3 = *plVar6;
  }
  piVar5 = (int *)(lVar3 + (ulong)param_2 * 0x30);
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    *piVar5 = -1;
  }
  return iVar1 == 0;
}



/* Entry: 109ddf1b4; end: 109ddf2a3;  */

bool FUN_109ddf1b4(long param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                  undefined8 param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined *apuStack_78 [4];
  undefined2 uStack_58;
  uint uStack_54;
  
  lVar3 = *(long *)(param_1 + 8);
  func_0x000109daa9fc();
  uVar6 = (*(long *)(lVar3 + 0xf0) - *(long *)(lVar3 + 0xe8) >> 4) * -0x5555555555555555;
  if ((param_3 <= uVar6 && uVar6 - param_3 != 0) &&
     (*(int *)(*(long *)(lVar3 + 0xe8) + (ulong)param_3 * 0x30) != 0)) {
    lVar4 = *(long *)(param_1 + 8);
    func_0x000109daa9fc();
    plVar7 = (long *)(lVar4 + 0xe8);
    lVar3 = *plVar7;
    uVar6 = (*(long *)(lVar4 + 0xf0) - lVar3 >> 4) * -0x5555555555555555;
    uStack_54 = param_2;
    if (uVar6 < param_2 || uVar6 - param_2 == 0) {
      FUN_109da503c(plVar7,param_2 + 1);
      lVar3 = *plVar7;
    }
    piVar5 = (int *)(lVar3 + (ulong)param_2 * 0x30);
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      *piVar5 = param_3 + 1;
      piVar5[1] = param_4;
      piVar5[2] = param_5;
      piVar5[3] = param_6;
      while (param_3 < 0xfffffffe) {
        iVar2 = piVar5[3];
        piVar8 = (int *)(*plVar7 + (ulong)param_3 * 0x30);
        uVar9 = *(undefined8 *)(piVar5 + 1);
        piVar5 = piVar8 + 6;
        func_0x000109da5698(piVar5,&uStack_54);
        *(undefined8 *)(piVar5 + 1) = uVar9;
        piVar5[3] = iVar2;
        piVar5 = piVar8;
        param_3 = *piVar8 - 1;
      }
    }
    return iVar1 == 0;
  }
  apuStack_78[0] = &UNK_10f5ff9d9;
  uStack_58 = 0x103;
  FUN_109da84a4(*(undefined8 *)(param_1 + 8),param_7,apuStack_78);
  return true;
}



/* Entry: 109ddf2a4; end: 109ddf2b3;  */

void FUN_109ddf2a4(void)

{
  return;
}



/* Entry: 109ddf2b4; end: 109ddf39f;  */

void FUN_109ddf2b4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined2 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined2 auStack_1e0 [12];
  long lStack_1c8;
  long *plStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long alStack_160 [3];
  long lStack_148;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long alStack_e0 [3];
  long lStack_c8;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [3];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0x14;
  uStack_70 = 0;
  plStack_78 = alStack_60;
  FUN_109d596f0(&plStack_78,10);
  *(undefined2 *)plStack_78 = 0x1145;
  *(undefined8 *)((long)plStack_78 + 2) = param_4;
  plVar4 = plStack_78;
  (**(code **)(*param_1 + 0x2f8))(param_1,param_2,param_3,plStack_78,uStack_70);
  plVar1 = plStack_78;
  if (plStack_78 != alStack_60) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_78 != alStack_60) {
    _free();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = 0x14;
  uStack_f0 = 0;
  plStack_f8 = alStack_e0;
  FUN_109d596f0(&plStack_f8,10);
  *(undefined2 *)plStack_f8 = 0x1143;
  *(long **)((long)plStack_f8 + 2) = plVar4;
  plVar4 = plStack_f8;
  (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2,param_3,plStack_f8,uStack_f0);
  uVar3 = SUB84(plVar4,0);
  plVar1 = plStack_f8;
  if (plStack_f8 != alStack_e0) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_f8 != alStack_e0) {
    _free();
  }
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_168 = 0x14;
  uStack_170 = 0;
  plStack_178 = alStack_160;
  FUN_109d596f0(&plStack_178,6);
  *(undefined2 *)plStack_178 = 0x1141;
  *(undefined4 *)((long)plStack_178 + 2) = uVar3;
  plVar4 = plStack_178;
  (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2,param_3,plStack_178,uStack_170);
  uVar3 = SUB84(plVar4,0);
  plVar1 = plStack_178;
  if (plStack_178 != alStack_160) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_178 != alStack_160) {
    _free();
  }
  __Unwind_Resume();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1e8 = 0x14;
  uStack_1f0 = 0;
  puStack_1f8 = auStack_1e0;
  FUN_109d596f0(&puStack_1f8,6);
  *puStack_1f8 = 0x1142;
  *(undefined4 *)(puStack_1f8 + 1) = uVar3;
  (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2,param_3,puStack_1f8,uStack_1f0);
  puVar2 = puStack_1f8;
  if (puStack_1f8 != auStack_1e0) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_1f8 != auStack_1e0) {
    _free();
  }
  __Unwind_Resume(puVar2);
  return;
}



/* Entry: 109ddf3a0; end: 109ddf48b;  */

void FUN_109ddf3a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined2 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined2 auStack_160 [12];
  long lStack_148;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long alStack_e0 [3];
  long lStack_c8;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [3];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0x14;
  uStack_70 = 0;
  plStack_78 = alStack_60;
  FUN_109d596f0(&plStack_78,10);
  *(undefined2 *)plStack_78 = 0x1143;
  *(undefined8 *)((long)plStack_78 + 2) = param_4;
  plVar1 = plStack_78;
  (**(code **)(*param_1 + 0x2f8))(param_1,param_2,param_3,plStack_78,uStack_70);
  uVar3 = SUB84(plVar1,0);
  plVar1 = plStack_78;
  if (plStack_78 != alStack_60) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_78 != alStack_60) {
    _free();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = 0x14;
  uStack_f0 = 0;
  plStack_f8 = alStack_e0;
  FUN_109d596f0(&plStack_f8,6);
  *(undefined2 *)plStack_f8 = 0x1141;
  *(undefined4 *)((long)plStack_f8 + 2) = uVar3;
  plVar4 = plStack_f8;
  (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2,param_3,plStack_f8,uStack_f0);
  uVar3 = SUB84(plVar4,0);
  plVar1 = plStack_f8;
  if (plStack_f8 != alStack_e0) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_f8 != alStack_e0) {
    _free();
  }
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_168 = 0x14;
  uStack_170 = 0;
  puStack_178 = auStack_160;
  FUN_109d596f0(&puStack_178,6);
  *puStack_178 = 0x1142;
  *(undefined4 *)(puStack_178 + 1) = uVar3;
  (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2,param_3,puStack_178,uStack_170);
  puVar2 = puStack_178;
  if (puStack_178 != auStack_160) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_178 != auStack_160) {
    _free();
  }
  __Unwind_Resume(puVar2);
  return;
}



/* Entry: 109ddf48c; end: 109ddf577;  */

void FUN_109ddf48c(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 auStack_e0 [12];
  long lStack_c8;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [3];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0x14;
  uStack_70 = 0;
  plStack_78 = alStack_60;
  FUN_109d596f0(&plStack_78,6);
  *(undefined2 *)plStack_78 = 0x1141;
  *(undefined4 *)((long)plStack_78 + 2) = param_4;
  plVar1 = plStack_78;
  (**(code **)(*param_1 + 0x2f8))(param_1,param_2,param_3,plStack_78,uStack_70);
  uVar3 = SUB84(plVar1,0);
  plVar1 = plStack_78;
  if (plStack_78 != alStack_60) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_78 != alStack_60) {
    _free();
  }
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = 0x14;
  uStack_f0 = 0;
  puStack_f8 = auStack_e0;
  FUN_109d596f0(&puStack_f8,6);
  *puStack_f8 = 0x1142;
  *(undefined4 *)(puStack_f8 + 1) = uVar3;
  (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2,param_3,puStack_f8,uStack_f0);
  puVar2 = puStack_f8;
  if (puStack_f8 != auStack_e0) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_f8 != auStack_e0) {
    _free();
  }
  __Unwind_Resume(puVar2);
  return;
}



/* Entry: 109ddf578; end: 109ddf663;  */

void FUN_109ddf578(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 auStack_60 [12];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0x14;
  uStack_70 = 0;
  puStack_78 = auStack_60;
  FUN_109d596f0(&puStack_78,6);
  *puStack_78 = 0x1142;
  *(undefined4 *)(puStack_78 + 1) = param_4;
  (**(code **)(*param_1 + 0x2f8))(param_1,param_2,param_3,puStack_78,uStack_70);
  puVar1 = puStack_78;
  if (puStack_78 != auStack_60) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_78 != auStack_60) {
    _free();
  }
  __Unwind_Resume(puVar1);
  return;
}



/* Entry: 109ddf664; end: 109ddf67f;  */

void FUN_109ddf664(void)

{
  return;
}



/* Entry: 109ddf680; end: 109ddf7b7;  */

void FUN_109ddf680(long param_1,ulong *param_2,undefined8 param_3)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined *apuStack_80 [2];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined1 *apuStack_58 [2];
  undefined *puStack_48;
  undefined2 uStack_38;
  
  uVar3 = param_2[1];
  if (((uint)uVar3 >> 1 & 1) != 0) {
    if ((uVar3 & 0x1c00) == 0x800) {
      param_2[3] = 0;
      uVar3 = uVar3 & 0xffffffffffffe3ff;
    }
    *param_2 = *param_2 & 7;
    param_2[1] = uVar3 & 0xfffffffffffffffd;
  }
  puVar1 = param_2;
  func_0x000109da4494(param_2,1);
  if ((puVar1 == (ulong *)0x0) && ((param_2[1] & 0x1c00) != 0x800)) {
    if (*(uint *)(param_1 + 0x78) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x78) * 0x20 + -0x20)
      ;
    }
    *param_2 = *param_2 & 7 | lVar4 + 0x30U;
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109ddf7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      return;
    }
  }
  else {
    if (((byte)*param_2 >> 2 & 1) == 0) {
      puStack_70 = (undefined8 *)0x0;
      uStack_68 = 0;
    }
    else {
      puStack_70 = (undefined8 *)param_2[-1] + 2;
      uStack_68 = *(undefined8 *)param_2[-1];
    }
    apuStack_80[0] = &UNK_10f5ffa20;
    uStack_60 = 0x503;
    puStack_48 = &UNK_10f5ffa29;
    uStack_38 = 0x302;
    apuStack_58[0] = (undefined1 *)apuStack_80;
    FUN_109da84a4(*(undefined8 *)(param_1 + 8),param_3,apuStack_58);
  }
  return;
}



/* Entry: 109ddf7b8; end: 109ddf7bf;  */

void FUN_109ddf7b8(void)

{
  return;
}



/* Entry: 109ddf7c0; end: 109ddf8eb;  */

void FUN_109ddf7c0(undefined8 *param_1,byte param_2,undefined8 param_3)

{
  uint *puVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined2 uStack_40;
  long lStack_3e;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined8 *puStack_28;
  
  if ((param_1[3] == param_1[4]) || (*(long *)(param_1[4] + -0x50) != 0)) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_46 = 0;
    uStack_44 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    puStack_80 = (undefined *)0x0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_34 = 0x7fffffff;
    uStack_30 = 0;
    lStack_3e = (ulong)param_2 << 0x38;
    (**(code **)*param_1)(param_1,&puStack_80);
    lVar2 = *(long *)(param_1[1] + 0x90);
    if (lVar2 != 0) {
      for (puVar1 = *(uint **)(lVar2 + 0x1c0); puVar1 != *(uint **)(lVar2 + 0x1c8);
          puVar1 = puVar1 + 0x14) {
        if (*puVar1 < 8 && (1 << (ulong)(*puVar1 & 0x1f) & 0xb0U) != 0) {
          uStack_48 = (undefined2)puVar1[4];
          uStack_46 = (undefined2)(puVar1[4] >> 0x10);
        }
      }
    }
    FUN_109ddf8ec(param_1 + 3,&puStack_80);
    puStack_28 = &uStack_60;
    FUN_109dadc28(&puStack_28);
  }
  else {
    puStack_80 = &UNK_10f5ffa3e;
    uStack_60 = CONCAT62(uStack_60._2_6_,0x103);
    FUN_109da84a4(param_1[1],param_3,&puStack_80);
  }
  return;
}



/* Entry: 109ddf8ec; end: 109ddf927;  */

void FUN_109ddf8ec(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_109de1c88();
    lVar2 = uVar1 + 0x58;
  }
  else {
    lVar2 = param_1;
    FUN_109de1d08();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109ddf928; end: 109ddf93f;  */

void FUN_109ddf928(void)

{
  return;
}



/* Entry: 109ddf940; end: 109ddf9d3;  */

void FUN_109ddf940(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 auStack_80 [2];
  long *plStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_31;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_80[0] = 7;
  uStack_31 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  plStack_78 = plVar1;
  uStack_70 = param_2;
  uStack_6c = param_3;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_80);
    *(undefined4 *)(param_1 + 7) = param_2;
  }
  return;
}



/* Entry: 109ddf9d4; end: 109ddfb8f;  */

long *** FUN_109ddf9d4(long ***param_1,undefined8 param_2)

{
  long **pplVar1;
  long **pplVar2;
  long ***ppplVar3;
  long **pplVar4;
  long lVar5;
  long **pplVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long ***ppplVar10;
  long **pplVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long **pplStack_68;
  long *plStack_60;
  long *plStack_58;
  long **pplStack_50;
  long **pplStack_48;
  
  ppplVar10 = (long ***)param_1[1];
  if (ppplVar10 < param_1[2]) {
    ppplVar3 = ppplVar10;
    FUN_109de1f70(ppplVar10,param_2);
    ppplVar10 = ppplVar10 + 10;
    param_1[1] = (long **)ppplVar10;
  }
  else {
    lVar9 = (long)ppplVar10 - (long)*param_1;
    uVar8 = (lVar9 >> 4) * -0x3333333333333333 + 1;
    if (0x333333333333333 < uVar8) {
      FUN_109dad9f0();
      FUN_109de2010(&pplStack_68);
      __Unwind_Resume();
      if (*(char *)((long)param_1 + 0x4f) < '\0') {
        __ZdlPv(param_1[7]);
      }
      if (param_1[4] != (long **)0x0) {
        param_1[5] = param_1[4];
        __ZdlPv();
      }
      return param_1;
    }
    lVar5 = (long)param_1[2] - (long)*param_1 >> 4;
    uVar7 = lVar5 * -0x6666666666666666;
    if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
      uVar7 = uVar8;
    }
    if (0x199999999999998 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar7 = 0x333333333333333;
    }
    pplStack_48 = (long **)param_1;
    if (uVar7 == 0) {
      ppplVar3 = (long ***)0x0;
    }
    else {
      ppplVar3 = param_1;
      FUN_109dada04();
    }
    lVar9 = (long)ppplVar3 + lVar9;
    pplStack_68 = (long **)ppplVar3;
    plStack_60 = (long *)lVar9;
    plStack_58 = (long *)lVar9;
    pplStack_50 = (long **)(ppplVar3 + uVar7 * 10);
    FUN_109de1f70(lVar9,param_2);
    pplVar11 = *param_1;
    pplVar2 = param_1[1];
    pplVar1 = (long **)((long)pplVar11 + (lVar9 - (long)pplVar2));
    pplVar4 = pplVar11;
    pplVar6 = pplVar1;
    if (pplVar2 != pplVar11) {
      do {
        plVar13 = pplVar4[1];
        plVar12 = *pplVar4;
        uVar14 = *(undefined8 *)((long)pplVar4 + 0xc);
        *(undefined8 *)((long)pplVar6 + 0x14) = *(undefined8 *)((long)pplVar4 + 0x14);
        *(undefined8 *)((long)pplVar6 + 0xc) = uVar14;
        pplVar6[1] = plVar13;
        *pplVar6 = plVar12;
        pplVar6[5] = (long *)0x0;
        pplVar6[6] = (long *)0x0;
        pplVar6[4] = (long *)0x0;
        plVar12 = pplVar4[4];
        pplVar6[5] = pplVar4[5];
        pplVar6[4] = plVar12;
        pplVar6[6] = pplVar4[6];
        pplVar4[4] = (long *)0x0;
        pplVar4[5] = (long *)0x0;
        pplVar4[6] = (long *)0x0;
        plVar13 = pplVar4[8];
        plVar12 = pplVar4[7];
        pplVar6[9] = pplVar4[9];
        pplVar6[8] = plVar13;
        pplVar6[7] = plVar12;
        pplVar4[8] = (long *)0x0;
        pplVar4[9] = (long *)0x0;
        pplVar4[7] = (long *)0x0;
        pplVar4 = pplVar4 + 10;
        pplVar6 = pplVar6 + 10;
      } while (pplVar4 != pplVar2);
      do {
        FUN_109dadbe4(pplVar11);
        pplVar11 = pplVar11 + 10;
      } while (pplVar11 != pplVar2);
      pplVar11 = *param_1;
    }
    ppplVar10 = (long ***)(lVar9 + 0x50);
    *param_1 = pplVar1;
    param_1[1] = (long **)ppplVar10;
    pplStack_50 = param_1[2];
    param_1[2] = (long **)(ppplVar3 + uVar7 * 10);
    ppplVar3 = &pplStack_68;
    pplStack_68 = pplVar11;
    plStack_60 = (long *)pplVar11;
    plStack_58 = (long *)pplVar11;
    FUN_109de2010(ppplVar3);
  }
  param_1[1] = (long **)ppplVar10;
  return ppplVar3;
}



/* Entry: 109ddfb90; end: 109ddfbcf;  */

long FUN_109ddfb90(long param_1)

{
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ddfbd0; end: 109ddfc4f;  */

void FUN_109ddfbd0(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 6;
  uStack_60 = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  uStack_5c = param_2;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
  }
  return;
}



/* Entry: 109ddfc50; end: 109ddfccf;  */

void FUN_109ddfc50(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 9;
  uStack_60 = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  uStack_5c = param_2;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
  }
  return;
}



/* Entry: 109ddfcd0; end: 109ddfd57;  */

void FUN_109ddfcd0(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 5;
  uStack_5c = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  uStack_60 = param_2;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
    *(undefined4 *)(param_1 + 7) = param_2;
  }
  return;
}



/* Entry: 109ddfd58; end: 109ddfdef;  */

void FUN_109ddfd58(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined4 auStack_80 [2];
  long *plStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_80[0] = 4;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  plStack_78 = plVar1;
  uStack_70 = param_2;
  uStack_6c = param_3;
  uStack_68 = param_4;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_80);
    *(undefined4 *)(param_1 + 7) = param_2;
  }
  return;
}



/* Entry: 109ddfdf0; end: 109ddfe7b;  */

void FUN_109ddfdf0(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 auStack_80 [2];
  long *plStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_31;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_80[0] = 3;
  uStack_31 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  plStack_78 = plVar1;
  uStack_70 = param_2;
  uStack_6c = param_3;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_80);
  }
  return;
}



/* Entry: 109ddfe7c; end: 109ddff07;  */

void FUN_109ddfe7c(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 auStack_80 [2];
  long *plStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_31;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_80[0] = 8;
  uStack_31 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  plStack_78 = plVar1;
  uStack_70 = param_2;
  uStack_6c = param_3;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_80);
  }
  return;
}



/* Entry: 109ddff08; end: 109ddff67;  */

void FUN_109ddff08(long param_1,undefined8 param_2,undefined4 param_3)

{
  func_0x000109ddefb8();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = param_3;
  }
  return;
}



/* Entry: 109ddff68; end: 109ddffdf;  */

void FUN_109ddff68(long *param_1)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 1;
  uStack_60 = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
  }
  return;
}



/* Entry: 109ddffe0; end: 109de0057;  */

void FUN_109ddffe0(long *param_1)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 2;
  uStack_60 = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
  }
  return;
}



/* Entry: 109de0058; end: 109de00d3;  */

void FUN_109de0058(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 0;
  uStack_5c = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  uStack_60 = param_2;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
  }
  return;
}



/* Entry: 109de00d4; end: 109de0153;  */

void FUN_109de00d4(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 0xb;
  uStack_5c = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  uStack_60 = param_2;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
  }
  return;
}



/* Entry: 109de0154; end: 109de0213;  */

void FUN_109de0154(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined4 auStack_80 [2];
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  char cStack_31;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_80[0] = 10;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  lStack_60 = 0;
  plStack_78 = plVar1;
  func_0x0001092d76e8(&lStack_60,param_2,param_2 + param_3,param_3);
  cStack_31 = '\0';
  uStack_48 = 0;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_80);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(CONCAT71(uStack_47,uStack_48));
  }
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  return;
}



/* Entry: 109de0214; end: 109de0293;  */

void FUN_109de0214(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 0x10;
  uStack_60 = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  uStack_5c = param_2;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
  }
  return;
}



/* Entry: 109de0294; end: 109de02b3;  */

void FUN_109de0294(long param_1)

{
  func_0x000109ddefb8();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}



/* Entry: 109de02b4; end: 109de0333;  */

void FUN_109de02b4(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 0xc;
  uStack_5c = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  uStack_60 = param_2;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
  }
  return;
}



/* Entry: 109de0334; end: 109de03bb;  */

void FUN_109de0334(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined4 auStack_80 [2];
  long *plStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_80[0] = 0xd;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  plStack_78 = plVar1;
  uStack_70 = param_2;
  uStack_6c = param_3;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_80);
  }
  return;
}



/* Entry: 109de03bc; end: 109de0433;  */

void FUN_109de03bc(long *param_1)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 0xe;
  uStack_60 = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
  }
  return;
}



/* Entry: 109de0434; end: 109de04ab;  */

void FUN_109de0434(long *param_1)

{
  long *plVar1;
  undefined4 auStack_70 [2];
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_21;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x50))();
  auStack_70[0] = 0xf;
  uStack_60 = 0;
  uStack_21 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  plStack_68 = plVar1;
  func_0x000109ddefb8();
  if (param_1 != (long *)0x0) {
    FUN_109ddf9d4(param_1 + 4,auStack_70);
  }
  return;
}



/* Entry: 109de04ac; end: 109de04d3;  */

void FUN_109de04ac(long param_1,undefined4 param_2)

{
  func_0x000109ddefb8();
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = param_2;
  }
  return;
}



/* Entry: 109de04d4; end: 109de0553;  */

long FUN_109de04d4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *apuStack_38 [4];
  undefined2 uStack_18;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x90);
  if ((*(int *)(lVar2 + 0x1a4) == 4) && (iVar1 = *(int *)(lVar2 + 0x1ac), iVar1 != 6 && iVar1 != 0))
  {
    lVar2 = *(long *)(param_1 + 0x48);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 8) == 0)) {
      return lVar2;
    }
    apuStack_38[0] = &UNK_10f5ffaab;
  }
  else {
    apuStack_38[0] = &UNK_10f5ffa78;
  }
  uStack_18 = 0x103;
  FUN_109da84a4(*(long *)(param_1 + 8),param_2,apuStack_38);
  return 0;
}



/* Entry: 109de0554; end: 109de077f;  */

void FUN_109de0554(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar5 = param_1[1];
  if ((*(int *)(*(long *)(lVar5 + 0x90) + 0x1a4) == 4) &&
     (iVar3 = *(int *)(*(long *)(lVar5 + 0x90) + 0x1ac), iVar3 != 6 && iVar3 != 0)) {
    lVar8 = param_2;
    if ((param_1[9] != 0) && (*(long *)(param_1[9] + 8) == 0)) {
      puStack_78 = &UNK_10f5ffade;
      plStack_58 = (long *)CONCAT62(plStack_58._2_6_,0x103);
      FUN_109da84a4(lVar5,param_3,&puStack_78);
      lVar8 = param_3;
    }
    plVar6 = param_1;
    (**(code **)(*param_1 + 0x50))();
    lVar5 = param_1[6];
    puVar2 = (undefined8 *)param_1[7];
    lVar13 = (long)puVar2 - lVar5;
    lVar14 = lVar13 >> 3;
    param_1[10] = lVar14;
    plVar7 = (long *)0xb8;
    __Znwm();
    *plVar7 = (long)plVar6;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = param_2;
    plVar7[6] = 0;
    plVar7[5] = 0;
    plVar7[8] = 0;
    plVar7[7] = 0;
    plVar7[9] = -0x100000000;
    plVar7[0xb] = 0;
    plVar7[10] = 0;
    plVar7[0xd] = 0;
    plVar7[0xc] = 0;
    plVar7[0xf] = 0;
    plVar7[0xe] = 0;
    *(undefined4 *)(plVar7 + 0x10) = 0;
    plVar7[0x12] = 0;
    plVar7[0x11] = 0;
    plVar7[0x14] = 0;
    plVar7[0x13] = 0;
    plVar7[0x16] = 0;
    plVar7[0x15] = 0;
    if (puVar2 < (undefined8 *)param_1[8]) {
      puVar12 = puVar2 + 1;
      *puVar2 = plVar7;
      param_1[7] = (long)puVar12;
    }
    else {
      uVar1 = lVar14 + 1;
      plStack_80 = plVar7;
      if (uVar1 >> 0x3d != 0) {
        FUN_109de205c();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109de0760);
        (*pcVar4)();
      }
      uVar9 = param_1[8] - lVar5;
      uVar11 = (long)uVar9 >> 2;
      if (uVar11 <= uVar1) {
        uVar11 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar11 = 0x1fffffffffffffff;
      }
      plStack_58 = param_1 + 6;
      FUN_109de2070();
      plVar6 = plStack_80;
      lVar5 = param_1[6];
      puVar2 = (undefined8 *)(uVar11 + lVar13);
      plStack_80 = (long *)0x0;
      lVar13 = (long)puVar2 - (param_1[7] - lVar5);
      puVar12 = puVar2 + 1;
      *puVar2 = plVar6;
      _memcpy(lVar13,lVar5);
      puStack_78 = (undefined *)param_1[6];
      param_1[6] = lVar13;
      param_1[7] = (long)puVar12;
      lStack_60 = param_1[8];
      param_1[8] = uVar11 + lVar8 * 8;
      puStack_70 = puStack_78;
      puStack_68 = puStack_78;
      func_0x000109de20a4(&puStack_78);
      plVar6 = plStack_80;
      param_1[7] = (long)puVar12;
      plStack_80 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        FUN_109de210c(&plStack_80);
        puVar12 = (undefined8 *)param_1[7];
      }
    }
    lVar5 = puVar12[-1];
    param_1[9] = lVar5;
    if (*(uint *)(param_1 + 0xf) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1[0xe] + (ulong)*(uint *)(param_1 + 0xf) * 0x20 + -0x20);
    }
    *(undefined8 *)(lVar5 + 0x38) = uVar10;
  }
  else {
    puStack_78 = &UNK_10f5ffa78;
    plStack_58 = (long *)CONCAT62(plStack_58._2_6_,0x103);
    FUN_109da84a4(lVar5,param_3,&puStack_78);
  }
  return;
}



/* Entry: 109de0780; end: 109de08d7;  */

void FUN_109de0780(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  
  plVar3 = param_1;
  FUN_109de04d4();
  if (plVar3 != (long *)0x0) {
    if (plVar3[10] != 0) {
      apuStack_58[0] = &UNK_10f5ffb12;
      uStack_38 = 0x103;
      FUN_109da84a4(param_1[1],param_2,apuStack_58);
    }
    plVar4 = param_1;
    (**(code **)(*param_1 + 0x50))();
    plVar3[1] = (long)plVar4;
    if (plVar3[2] == 0) {
      plVar3[2] = (long)plVar4;
    }
    lVar1 = param_1[6];
    lVar2 = param_1[7];
    for (lVar5 = param_1[10]; lVar5 != lVar2 - lVar1 >> 3; lVar5 = lVar5 + 1) {
      (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(param_1[6] + lVar5 * 8));
    }
    (**(code **)(*param_1 + 0xa8))(param_1,plVar3[7],0);
  }
  return;
}



/* Entry: 109de08d8; end: 109de0a7f;  */

void FUN_109de08d8(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar5 = param_1;
  FUN_109de04d4();
  if (plVar5 != (long *)0x0) {
    plVar6 = param_1;
    (**(code **)(*param_1 + 0x50))();
    plVar7 = (long *)0xb8;
    __Znwm();
    lVar8 = plVar5[4];
    plVar7[2] = 0;
    plVar7[3] = 0;
    *plVar7 = (long)plVar6;
    plVar7[1] = 0;
    plVar7[4] = lVar8;
    plVar7[8] = 0;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[5] = 0;
    plVar7[9] = -0x100000000;
    plVar7[10] = (long)plVar5;
    *(undefined8 *)((long)plVar7 + 0x7c) = 0;
    *(undefined8 *)((long)plVar7 + 0x74) = 0;
    plVar7[0xe] = 0;
    plVar7[0xd] = 0;
    plVar7[0xc] = 0;
    plVar7[0xb] = 0;
    plVar7[0x16] = 0;
    plVar7[0x15] = 0;
    plVar7[0x14] = 0;
    plVar7[0x13] = 0;
    plVar7[0x12] = 0;
    plVar7[0x11] = 0;
    puVar2 = (undefined8 *)param_1[7];
    if (puVar2 < (undefined8 *)param_1[8]) {
      puVar12 = puVar2 + 1;
      *puVar2 = plVar7;
      param_1[7] = (long)puVar12;
    }
    else {
      plStack_38 = param_1 + 6;
      lVar8 = (long)puVar2 - *plStack_38;
      uVar1 = (lVar8 >> 3) + 1;
      plStack_60 = plVar7;
      if (uVar1 >> 0x3d != 0) {
        FUN_109de205c();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x109de0a60);
        (*pcVar4)();
      }
      uVar9 = param_1[8] - *plStack_38;
      uVar11 = (long)uVar9 >> 2;
      if (uVar11 <= uVar1) {
        uVar11 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar11 = 0x1fffffffffffffff;
      }
      FUN_109de2070();
      plVar5 = plStack_60;
      lVar3 = param_1[6];
      puVar2 = (undefined8 *)(uVar11 + lVar8);
      plStack_60 = (long *)0x0;
      lVar8 = (long)puVar2 - (param_1[7] - lVar3);
      puVar12 = puVar2 + 1;
      *puVar2 = plVar5;
      _memcpy(lVar8,lVar3);
      lStack_58 = param_1[6];
      param_1[6] = lVar8;
      param_1[7] = (long)puVar12;
      lStack_40 = param_1[8];
      param_1[8] = uVar11 + param_2 * 8;
      lStack_50 = lStack_58;
      lStack_48 = lStack_58;
      func_0x000109de20a4(&lStack_58);
      plVar5 = plStack_60;
      param_1[7] = (long)puVar12;
      plStack_60 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        FUN_109de210c(&plStack_60);
        puVar12 = (undefined8 *)param_1[7];
      }
    }
    lVar8 = puVar12[-1];
    param_1[9] = lVar8;
    if (*(uint *)(param_1 + 0xf) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1[0xe] + (ulong)*(uint *)(param_1 + 0xf) * 0x20 + -0x20);
    }
    *(undefined8 *)(lVar8 + 0x38) = uVar10;
  }
  return;
}



/* Entry: 109de0a80; end: 109de0b07;  */

void FUN_109de0a80(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *apuStack_58 [4];
  undefined2 uStack_38;
  
  plVar1 = param_1;
  FUN_109de04d4();
  if (plVar1 != (long *)0x0) {
    if (plVar1[10] == 0) {
      apuStack_58[0] = &UNK_10f5ffb36;
      uStack_38 = 0x103;
      FUN_109da84a4(param_1[1],param_2,apuStack_58);
    }
    else {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x50))();
      plVar1[1] = (long)plVar2;
      param_1[9] = plVar1[10];
    }
  }
  return;
}



/* Entry: 109de0b08; end: 109de0bd3;  */

void FUN_109de0b08(long param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  undefined *apuStack_68 [4];
  undefined2 uStack_48;
  
  lVar1 = param_1;
  FUN_109de04d4(param_1,param_5);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x50) == 0) {
      *(undefined8 *)(lVar1 + 0x18) = param_2;
      if (((param_3 & 1) == 0) && ((param_4 & 1) == 0)) {
        apuStack_68[0] = &UNK_10f5ffb92;
        uStack_48 = 0x103;
        FUN_109da84a4(*(undefined8 *)(param_1 + 8),param_5,apuStack_68);
      }
      if (param_3 != 0) {
        *(undefined1 *)(lVar1 + 0x48) = 1;
      }
      if (param_4 != 0) {
        *(undefined1 *)(lVar1 + 0x49) = 1;
      }
    }
    else {
      apuStack_68[0] = &UNK_10f5ffb68;
      uStack_48 = 0x103;
      FUN_109da84a4(*(undefined8 *)(param_1 + 8),param_5,apuStack_68);
    }
  }
  return;
}



/* Entry: 109de0bd4; end: 109de0c2f;  */

void FUN_109de0bd4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  lVar1 = param_1;
  FUN_109de04d4();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x50) != 0)) {
    apuStack_48[0] = &UNK_10f5ffb68;
    uStack_28 = 0x103;
    FUN_109da84a4(*(undefined8 *)(param_1 + 8),param_2,apuStack_48);
  }
  return;
}



/* Entry: 109de0c30; end: 109de0c37;  */

void FUN_109de0c30(void)

{
  return;
}



/* Entry: 109de0c38; end: 109de0cdf;  */

void FUN_109de0c38(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  plVar2 = param_1;
  FUN_109de04d4(param_1,param_3);
  if (plVar2 != (long *)0x0) {
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x50))();
    lVar5 = *(long *)(param_1[1] + 0x98);
    plStack_48 = (long *)CONCAT44(plStack_48._4_4_,param_2);
    lVar4 = lVar5 + 0xa0;
    FUN_109ddbe08(lVar4,&plStack_48);
    pplVar1 = &plStack_48;
    if (*(long *)(lVar5 + 0xa0) + (ulong)*(uint *)(lVar5 + 0xb0) * 8 != lVar4) {
      pplVar1 = (long **)(lVar4 + 4);
    }
    uStack_3c = *(undefined4 *)pplVar1;
    uStack_40 = 0xffffffff;
    uStack_38 = 0;
    plStack_48 = plVar3;
    FUN_109de0ce0(plVar2 + 0xb,&plStack_48);
  }
  return;
}



/* Entry: 109de0ce0; end: 109de0f1b;  */

void FUN_109de0ce0(long *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plStack_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_88;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puVar9[2] = param_2[2];
    puVar9[1] = uVar11;
    *puVar9 = uVar10;
    puVar9 = puVar9 + 3;
LAB_109de0dc8:
    param_1[1] = (long)puVar9;
    return;
  }
  lVar8 = *param_1;
  uVar6 = ((long)puVar9 - lVar8 >> 3) * -0x5555555555555555 + 1;
  if (uVar6 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_1[2] - lVar8 >> 3;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 < 0xaaaaaaaaaaaaaab) {
      lVar5 = uVar7 * 0x18;
      __Znwm();
      puVar9 = (undefined8 *)(lVar5 + ((long)puVar9 - lVar8));
      uVar10 = *param_2;
      puVar9[1] = param_2[1];
      *puVar9 = uVar10;
      puVar9[2] = param_2[2];
      puVar9 = puVar9 + 3;
      _memcpy();
      *param_1 = lVar5;
      param_1[1] = (long)puVar9;
      param_1[2] = lVar5 + uVar7 * 0x18;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
      goto LAB_109de0dc8;
    }
  }
  else {
    FUN_109de20f8();
  }
  uVar4 = SUB84(param_2,0);
  func_0x000104c4f740();
  plVar2 = param_1;
  FUN_109de04d4();
  if (plVar2 != (long *)0x0) {
    if (*(int *)((long)plVar2 + 0x4c) < 0) {
      if ((param_3 & 0xf) == 0) {
        if ((uint)param_3 < 0xf1) {
          plVar3 = param_1;
          (**(code **)(*param_1 + 0x50))();
          lVar5 = *(long *)(param_1[1] + 0x98);
          plStack_a8 = (long *)CONCAT44(plStack_a8._4_4_,uVar4);
          lVar8 = lVar5 + 0xa0;
          FUN_109ddbe08(lVar8,&plStack_a8);
          pplVar1 = &plStack_a8;
          if (*(long *)(lVar5 + 0xa0) + (ulong)*(uint *)(lVar5 + 0xb0) * 8 != lVar8) {
            pplVar1 = (long **)(lVar8 + 4);
          }
          uStack_9c = *(undefined4 *)pplVar1;
          uStack_98 = 3;
          *(int *)((long)plVar2 + 0x4c) =
               (int)((ulong)(plVar2[0xc] - plVar2[0xb]) >> 3) * -0x55555555;
          plStack_a8 = plVar3;
          uStack_a0 = (uint)param_3;
          FUN_109de0ce0(plVar2 + 0xb,&plStack_a8);
          return;
        }
        lVar8 = param_1[1];
        plStack_a8 = (long *)&UNK_10f5ffc0c;
      }
      else {
        lVar8 = param_1[1];
        plStack_a8 = (long *)&UNK_10f5ffbed;
      }
    }
    else {
      lVar8 = param_1[1];
      plStack_a8 = (long *)&UNK_10f5ffbbb;
    }
    uStack_88 = 0x103;
    FUN_109da84a4(lVar8,param_4,&plStack_a8);
  }
  return;
}



/* Entry: 109de0f1c; end: 109de0fdb;  */

void FUN_109de0f1c(long *param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_38;
  
  plVar1 = param_1;
  FUN_109de04d4(param_1,param_3);
  if (plVar1 != (long *)0x0) {
    if (param_2 == 0) {
      lVar2 = param_1[1];
      plStack_58 = (long *)&UNK_10f5ffc3b;
    }
    else {
      if ((param_2 & 7) == 0) {
        (**(code **)(*param_1 + 0x50))();
        uStack_48 = 1;
        if (param_2 < 0x81) {
          uStack_48 = 2;
        }
        uStack_4c = 0xffffffff;
        plStack_58 = param_1;
        uStack_50 = param_2;
        FUN_109de0ce0(plVar1 + 0xb,&plStack_58);
        return;
      }
      lVar2 = param_1[1];
      plStack_58 = (long *)&UNK_10f5ffc62;
    }
    uStack_38 = 0x103;
    FUN_109da84a4(lVar2,param_3,&plStack_58);
  }
  return;
}



/* Entry: 109de0fdc; end: 109de11c3;  */

void FUN_109de0fdc(long *param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 uStack_48;
  
  plVar2 = param_1;
  FUN_109de04d4(param_1,param_4);
  if (plVar2 != (long *)0x0) {
    if ((param_3 & 7) == 0) {
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x50))();
      lVar5 = *(long *)(param_1[1] + 0x98);
      plStack_68 = (long *)CONCAT44(plStack_68._4_4_,param_2);
      lVar4 = lVar5 + 0xa0;
      FUN_109ddbe08(lVar4,&plStack_68);
      pplVar1 = &plStack_68;
      if (*(long *)(lVar5 + 0xa0) + (ulong)*(uint *)(lVar5 + 0xb0) * 8 != lVar4) {
        pplVar1 = (long **)(lVar4 + 4);
      }
      uStack_5c = *(undefined4 *)pplVar1;
      uStack_58 = 4;
      if (0x7fff8 < param_3) {
        uStack_58 = 5;
      }
      plStack_68 = plVar3;
      uStack_60 = param_3;
      FUN_109de0ce0(plVar2 + 0xb,&plStack_68);
    }
    else {
      plStack_68 = (long *)&UNK_10f5ffc8f;
      uStack_48 = 0x103;
      FUN_109da84a4(param_1[1],param_4,&plStack_68);
    }
  }
  return;
}


