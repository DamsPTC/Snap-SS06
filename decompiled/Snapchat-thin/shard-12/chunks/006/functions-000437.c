/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109498574; end: 10949865f;  */

/* WARNING: Removing unreachable block (ram,0x0001094988dc) */
/* WARNING: Removing unreachable block (ram,0x000109498718) */
/* WARNING: Removing unreachable block (ram,0x000109498828) */
/* WARNING: Removing unreachable block (ram,0x000109498970) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109498574(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 *******pppppppuVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined1 *puStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  byte *pbStack_80;
  byte *pbStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pbVar2 = (byte *)param_2[8];
  for (pbVar1 = (byte *)param_2[7]; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
    bVar3 = *pbVar1;
    param_2 = param_1;
    if (bVar3 < 0x20) {
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_50 = (ulong)bVar3;
      _snprintf(&uStack_48,9,&UNK_10f568509);
      param_4 = &uStack_48;
      _strlen();
      param_3 = &uStack_48;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    }
    else {
      param_3 = (undefined8 *)(ulong)(uint)(int)(char)bVar3;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  puVar6 = param_2;
  __Unwind_Resume();
  pcStack_58 = FUN_109498660;
  pbStack_80 = pbVar2;
  pbStack_78 = pbVar1;
  puStack_70 = param_2;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107c31940(extraout_x8,&UNK_10f568528);
  uVar8 = param_4[1];
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)param_4 + 0x17);
  }
  if (uVar8 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_c0,&UNK_10f568536,param_4);
    puVar7 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7," ",1);
    uStack_98 = puVar7[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar7;
    uStack_90 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (extraout_x8,&DAT_10f568545,2);
  uVar8 = (ulong)*(uint *)(puVar6 + 4);
  if (*(uint *)(puVar6 + 4) == 0xe) {
    func_0x000107c31940(auStack_f8,puVar6[0x12]);
    puVar7 = auStack_f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f568548,0xe);
    uStack_d8 = puVar7[1];
    uStack_e0 = *puVar7;
    lStack_d0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_109498574(&puStack_110,puVar6 + 5);
    ppuVar5 = (undefined1 **)puStack_110;
    if (-1 < (char)bStack_f9) {
      uStack_108 = (ulong)bStack_f9;
      ppuVar5 = &puStack_110;
    }
    puVar6 = &uStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,ppuVar5,uStack_108);
    uStack_b8 = puVar6[1];
    uStack_c0 = *puVar6;
    lStack_b0 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar6 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,&DAT_10f638984,1);
    uStack_98 = puVar6[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar6;
    uStack_90 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    if ((char)bStack_f9 < '\0') {
      __ZdlPv(puStack_110);
    }
    if (lStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    if (-1 < cStack_e1) goto joined_r0x0001094988fc;
  }
  else {
    FUN_109387a10();
    func_0x000107c31940(&uStack_c0,uVar8);
    puVar6 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar6,0,&UNK_10f568557,0xb);
    uStack_98 = puVar6[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar6;
    uStack_90 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    auStack_f8[0] = uStack_c0;
    if (-1 < lStack_b0) goto joined_r0x0001094988fc;
  }
  __ZdlPv(auStack_f8[0]);
joined_r0x0001094988fc:
  if ((int)param_3 != 0) {
    FUN_109387a10(param_3);
    func_0x000107c31940(&uStack_c0,param_3);
    puVar6 = &uStack_c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar6,0,&UNK_10f568563,0xb);
    uStack_98 = puVar6[1];
    pppppppuStack_a0 = (undefined8 *******)*puVar6;
    uStack_90 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar8 = uStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar8 = uStack_90 >> 0x38;
      pppppppuVar4 = &pppppppuStack_a0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (extraout_x8,pppppppuVar4,uVar8);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
  }
  return;
}



/* Entry: 109498660; end: 109498a7b;  */

/* WARNING: Removing unreachable block (ram,0x0001094988dc) */
/* WARNING: Removing unreachable block (ram,0x000109498718) */
/* WARNING: Removing unreachable block (ram,0x000109498828) */
/* WARNING: Removing unreachable block (ram,0x000109498970) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109498660(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *******pppppppuVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *******pppppppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  func_0x000107c31940(param_1,&UNK_10f568528);
  uVar4 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar4 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar4 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_70,&UNK_10f568536,param_4);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3," ",1);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f568545,2);
  uVar4 = (ulong)*(uint *)(param_2 + 0x20);
  if (*(uint *)(param_2 + 0x20) == 0xe) {
    func_0x000107c31940(auStack_a8,*(undefined8 *)(param_2 + 0x90));
    puVar3 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f568548,0xe);
    uStack_88 = puVar3[1];
    uStack_90 = *puVar3;
    lStack_80 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_109498574(&puStack_c0,param_2 + 0x28);
    ppuVar2 = (undefined1 **)puStack_c0;
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      ppuVar2 = &puStack_c0;
    }
    puVar3 = &uStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,ppuVar2,uStack_b8);
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    lStack_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&DAT_10f638984,1);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(puStack_c0);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
    if (-1 < cStack_91) goto joined_r0x0001094988ec;
  }
  else {
    FUN_109387a10();
    func_0x000107c31940(&uStack_70,uVar4);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f568557,0xb);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    auStack_a8[0] = uStack_70;
    if (-1 < lStack_60) goto joined_r0x0001094988ec;
  }
  __ZdlPv(auStack_a8[0]);
joined_r0x0001094988ec:
  if ((int)param_3 != 0) {
    FUN_109387a10(param_3);
    func_0x000107c31940(&uStack_70,param_3);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f568563,0xb);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  return;
}



/* Entry: 109498a7c; end: 1094993b3;  */

undefined ** FUN_109498a7c(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined **appuStack_a8 [2];
  undefined1 auStack_98 [24];
  undefined1 uStack_80;
  undefined7 uStack_7f;
  char cStack_69;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  ppuVar1 = (undefined **)(param_1 + 0x78);
code_r0x000109498ac8:
  iVar3 = (int)param_1;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    appuStack_a8[0] = (undefined **)CONCAT71(appuStack_a8[0]._1_7_,1);
    FUN_109388000(param_2,appuStack_a8);
    break;
  case 2:
    appuStack_a8[0] = (undefined **)((ulong)appuStack_a8[0]._1_7_ << 8);
    FUN_109388000(param_2,appuStack_a8);
    break;
  case 3:
    appuStack_a8[0] = (undefined **)0x0;
    FUN_109388200(param_2,appuStack_a8);
    break;
  case 4:
    FUN_1093885d4(param_2,ppuVar1);
    break;
  case 5:
    appuStack_a8[0] = *(undefined ***)(param_1 + 0xa0);
    FUN_109388804(param_2,appuStack_a8);
    break;
  case 6:
    appuStack_a8[0] = *(undefined ***)(param_1 + 0x98);
    FUN_1093883d4(param_2,appuStack_a8);
    break;
  case 7:
    if (0x7fefffffffffffff < ((ulong)*(undefined ***)(param_1 + 0xa8) & 0x7fffffffffffffff)) {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_109498574(&uStack_80,param_1 + 0x28);
      FUN_109498574(auStack_f0,param_1 + 0x28);
      FUN_10928a5e0(auStack_d8,&UNK_10f568460,auStack_f0);
      FUN_109259240(&uStack_c0,auStack_d8,&DAT_10f638984);
      FUN_109386318(appuStack_a8,0x196,&uStack_c0);
      func_0x000109387ab4(param_2,uVar6,&uStack_80,appuStack_a8);
      appuStack_a8[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_98);
      __ZNSt9exceptionD2Ev(appuStack_a8);
      if (lStack_b0 < 0) {
        __ZdlPv(uStack_c0);
      }
      goto code_r0x000109498ea0;
    }
    appuStack_a8[0] = *(undefined ***)(param_1 + 0xa8);
    FUN_109387e00(param_2,appuStack_a8);
    break;
  case 8:
    uStack_80 = 2;
    ppuVar4 = param_2;
    FUN_109387bc8(param_2,&uStack_80);
    appuStack_a8[0] = ppuVar4;
    FUN_109387b04(param_2 + 1,appuStack_a8);
    iVar2 = iVar3 + 0x28;
    FUN_109496e04();
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 10) {
code_r0x000109498bb8:
      param_2[2] = param_2[2] + -8;
      break;
    }
    appuStack_a8[0] = (undefined **)CONCAT71(appuStack_a8[0]._1_7_,1);
    func_0x0001078db3d4(&lStack_68,appuStack_a8);
    goto code_r0x000109498ac8;
  case 9:
    uStack_80 = 1;
    ppuVar4 = param_2;
    FUN_109387bc8(param_2,&uStack_80);
    appuStack_a8[0] = ppuVar4;
    FUN_109387b04(param_2 + 1,appuStack_a8);
    iVar2 = iVar3 + 0x28;
    FUN_109496e04();
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 0xb) goto code_r0x000109498bb8;
    if (iVar2 == 4) {
      lVar5 = *(long *)(*(long *)(param_2[2] + -8) + 8);
      appuStack_a8[0] = ppuVar1;
      FUN_109386c9c(lVar5,ppuVar1,&UNK_10dd5b8f9,appuStack_a8,&uStack_80);
      param_2[4] = (undefined *)(lVar5 + 0x38);
      iVar2 = iVar3 + 0x28;
      FUN_109496e04();
      *(int *)(param_1 + 0x20) = iVar2;
      if (iVar2 == 0xc) {
        appuStack_a8[0] = (undefined **)((ulong)appuStack_a8[0] & 0xffffffffffffff00);
        func_0x0001078db3d4(&lStack_68,appuStack_a8);
        iVar3 = iVar3 + 0x28;
        FUN_109496e04();
        goto code_r0x000109498cf8;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_109498574(&uStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      uStack_c0 = *(undefined8 *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_f0,&UNK_10f56844f);
      FUN_109498660(auStack_d8,param_1,0xc,auStack_f0);
      FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
      FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_109498574(&uStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      uStack_c0 = *(undefined8 *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_f0,&UNK_10f568444);
      FUN_109498660(auStack_d8,param_1,4,auStack_f0);
      FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
      FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    }
    goto code_r0x000109498e80;
  default:
    goto LAB_109498e0c;
  case 0xe:
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    FUN_109498574(&uStack_80,param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x50);
    uStack_c0 = *(undefined8 *)(param_1 + 0x48);
    lStack_b0 = *(long *)(param_1 + 0x58);
    func_0x000107c31940(auStack_f0,"value");
    FUN_109498660(auStack_d8,param_1,0,auStack_f0);
    FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
    FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    goto code_r0x000109498e80;
  }
  if (lStack_60 != 0) {
    do {
      if ((*(ulong *)(lStack_68 + (lStack_60 - 1U >> 6) * 8) >> (lStack_60 - 1U & 0x3f) & 1) == 0) {
        iVar2 = iVar3 + 0x28;
        FUN_109496e04();
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) {
          iVar2 = iVar3 + 0x28;
          FUN_109496e04();
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 != 4) {
            uVar6 = *(undefined8 *)(param_1 + 0x48);
            FUN_109498574(&uStack_80,param_1 + 0x28);
            uStack_b8 = *(undefined8 *)(param_1 + 0x50);
            uStack_c0 = *(undefined8 *)(param_1 + 0x48);
            lStack_b0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(auStack_f0,&UNK_10f568444);
            FUN_109498660(auStack_d8,param_1,4,auStack_f0);
            FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
            FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
            goto code_r0x000109498e80;
          }
          lVar5 = *(long *)(*(long *)(param_2[2] + -8) + 8);
          appuStack_a8[0] = ppuVar1;
          FUN_109386c9c(lVar5,ppuVar1,&UNK_10dd5b8f9,appuStack_a8,&uStack_80);
          param_2[4] = (undefined *)(lVar5 + 0x38);
          iVar2 = iVar3 + 0x28;
          FUN_109496e04();
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 == 0xc) {
            iVar3 = iVar3 + 0x28;
            FUN_109496e04();
            goto code_r0x000109498cf8;
          }
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_109498574(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,&UNK_10f56844f);
          FUN_109498660(auStack_d8,param_1,0xc,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x000109498e80;
        }
        if (iVar2 != 0xb) {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_109498574(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,&DAT_10f365d6f);
          FUN_109498660(auStack_d8,param_1,0xb,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x000109498e80;
        }
      }
      else {
        iVar2 = iVar3 + 0x28;
        FUN_109496e04();
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) goto code_r0x000109498c90;
        if (iVar2 != 10) {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_109498574(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,"array");
          FUN_109498660(auStack_d8,param_1,10,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x000109498e80;
        }
      }
      param_2[2] = param_2[2] + -8;
      lStack_60 = lStack_60 + -1;
      if (lStack_60 == 0) break;
    } while( true );
  }
  param_2 = (undefined **)0x1;
  goto LAB_109498d68;
code_r0x000109498c90:
  iVar3 = iVar3 + 0x28;
  FUN_109496e04();
code_r0x000109498cf8:
  *(int *)(param_1 + 0x20) = iVar3;
  goto code_r0x000109498ac8;
LAB_109498e0c:
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  FUN_109498574(&uStack_80,param_1 + 0x28);
  uStack_b8 = *(undefined8 *)(param_1 + 0x50);
  uStack_c0 = *(undefined8 *)(param_1 + 0x48);
  lStack_b0 = *(long *)(param_1 + 0x58);
  func_0x000107c31940(auStack_f0,"value");
  FUN_109498660(auStack_d8,param_1,0x10,auStack_f0);
  FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
  FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
code_r0x000109498e80:
  appuStack_a8[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(auStack_98);
  __ZNSt9exceptionD2Ev(appuStack_a8);
code_r0x000109498ea0:
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(auStack_f0[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT71(uStack_7f,uStack_80));
  }
LAB_109498d68:
  if (lStack_68 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 1094993b4; end: 109499437;  */

long * FUN_1094993b4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_109499420;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_109499420:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 109499438; end: 1094994d7;  */

void FUN_109499438(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_109499438(*param_1);
    FUN_109499438(param_1[1]);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1094994d8; end: 1094994e7;  */

void FUN_1094994d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6bf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094994e8; end: 109499507;  */

void FUN_1094994e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6bf0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109499508; end: 109499517;  */

void FUN_109499508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109499510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 109499518; end: 1094995c7;  */

long FUN_109499518(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1094995c8; end: 1094995cb;  */

void FUN_1094995c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094995cc; end: 1094995df;  */

void FUN_1094995cc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094995e0; end: 1094995f7;  */

void FUN_1094995e0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001094995f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1094995f8; end: 10949962f;  */

undefined8 FUN_1094995f8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af6c80);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109499630; end: 109499637;  */

void FUN_109499630(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109499638; end: 10949964b;  */

void FUN_109499638(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10949964c; end: 109499663;  */

void FUN_10949964c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010949965c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 109499664; end: 10949969b;  */

undefined8 FUN_109499664(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af6ce0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10949969c; end: 10949969f;  */

void FUN_10949969c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094996a0; end: 10949a2e3;  */

long FUN_1094996a0(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  double dVar20;
  double dVar22;
  undefined1 auVar21 [16];
  double dVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  long lStack_758;
  long *plStack_750;
  long lStack_748;
  undefined1 *puStack_740;
  code *pcStack_738;
  long *plStack_730;
  undefined8 *puStack_728;
  undefined1 *puStack_720;
  undefined1 *puStack_718;
  undefined8 uStack_710;
  undefined **ppuStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined4 uStack_6e8;
  long lStack_6e0;
  long *plStack_6d8;
  long *plStack_6d0;
  long lStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  long lStack_690;
  undefined1 auStack_680 [4];
  int iStack_67c;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_648;
  long lStack_640;
  undefined1 *puStack_638;
  undefined1 auStack_630 [16];
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined2 uStack_5b8;
  undefined2 uStack_5b6;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  long lStack_5a0;
  undefined8 uStack_598;
  undefined1 uStack_590;
  long *aplStack_580 [10];
  undefined1 auStack_530 [4];
  int iStack_52c;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_4f8;
  long lStack_4f0;
  undefined1 *puStack_4e8;
  undefined1 auStack_4e0 [24];
  undefined8 uStack_4c8;
  float fStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [4];
  int iStack_4ac;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_478;
  long lStack_470;
  undefined1 *puStack_468;
  undefined1 auStack_460 [16];
  long lStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_430;
  long *plStack_428;
  long *plStack_420;
  undefined8 auStack_410 [2];
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  long *plStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined2 uStack_1a8;
  undefined1 uStack_1a0;
  long *plStack_198;
  char cStack_190;
  undefined8 uStack_180;
  double dStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [40];
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_410[0] = 0;
  uStack_400 = 0;
  uStack_3a0 = 0;
  lStack_3a8 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3b0 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0x3ff0000000000000;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_350 = 0x3ff0000000000000;
  uStack_340 = 0;
  uStack_348 = 0;
  uStack_338 = 0;
  uStack_330 = 0x3ff0000000000000;
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 0x3ff0000000000000;
  plStack_2f8 = (long *)0x0;
  uStack_300 = 0;
  dStack_2e8 = 0.0;
  dStack_2f0 = 0.0;
  dStack_2e0 = 0.0;
  dStack_2d8 = 1.0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0x3ff0000000000000;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_290 = 0x3ff0000000000000;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_278 = 0;
  uStack_270 = 0x3ff0000000000000;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0x3ff0000000000000;
  uStack_240 = 0;
  lStack_230 = 0;
  lStack_238 = 0;
  lStack_220 = 0;
  uStack_228 = 0;
  uStack_210 = 0;
  lStack_218 = 0;
  lStack_200 = 0;
  lStack_208 = 0;
  uStack_1f8 = 0;
  uStack_1c8 = 0x403e000000000000;
  uStack_1c0 = 0x403e000000000000;
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  cStack_190 = '\0';
  lVar16 = *param_3;
  uStack_710 = param_1;
  if (*(char *)(lVar16 + 0x14) == '\x01') {
    dVar23 = 0.017453292519943295;
    dVar20 = (double)___sincos_stret((double)*(float *)(lVar16 + 0x10) * 0.017453292519943295);
    dVar20 = dVar20 * -0.7071067811865475;
    dVar23 = dVar23 * 0.7071067811865475;
    auVar21._0_8_ = -0.0 - dVar20 * -3.0908620960936135e-08;
    dVar22 = 0.0 - dVar20 * -3.090861960987738e-08;
    auVar21[8] = SUB81(dVar22,0);
    auVar21[9] = (undefined1)((ulong)dVar22 >> 8);
    auVar21[10] = (undefined1)((ulong)dVar22 >> 0x10);
    auVar21[0xb] = (undefined1)((ulong)dVar22 >> 0x18);
    auVar21[0xc] = (undefined1)((ulong)dVar22 >> 0x20);
    auVar21[0xd] = (undefined1)((ulong)dVar22 >> 0x28);
    auVar21[0xe] = (undefined1)((ulong)dVar22 >> 0x30);
    auVar21[0xf] = (byte)((ulong)dVar22 >> 0x38) ^ 0x80;
    auVar21 = NEON_ext(auVar21,auVar21,8,1);
    dStack_2f0 = dVar23 * -3.0908620960936135e-08 + -0.5000000109278468 + auVar21._0_8_;
    dStack_2e8 = dVar23 * -3.090861960987738e-08 + 0.4999999890721518 + auVar21._8_8_;
    dVar22 = dVar20 * 0.7071067657322365;
    auVar25._0_8_ = -(dVar20 * -0.7071067966408568);
    auVar25[8] = SUB81(dVar22,0);
    auVar25[9] = (undefined1)((ulong)dVar22 >> 8);
    auVar25[10] = (undefined1)((ulong)dVar22 >> 0x10);
    auVar25[0xb] = (undefined1)((ulong)dVar22 >> 0x18);
    auVar25[0xc] = (undefined1)((ulong)dVar22 >> 0x20);
    auVar25[0xd] = (undefined1)((ulong)dVar22 >> 0x28);
    auVar25[0xe] = (undefined1)((ulong)dVar22 >> 0x30);
    auVar25[0xf] = (undefined1)((ulong)dVar22 >> 0x38);
    auVar21 = NEON_ext(auVar25,auVar25,8,1);
    dStack_2e0 = (-2.1855695478602602e-08 - dVar23 * -0.7071067966408568) + auVar21._0_8_;
    dStack_2d8 = (-2.1855694523259794e-08 - dVar23 * 0.7071067657322365) + auVar21._8_8_;
    dVar20 = dStack_2e0 * dStack_2e0 + dStack_2f0 * dStack_2f0 +
             dStack_2d8 * dStack_2d8 + dStack_2e8 * dStack_2e8;
    if (0.0 < dVar20) {
      dVar20 = SQRT(dVar20);
      dStack_2f0 = dStack_2f0 / dVar20;
      dStack_2e8 = dStack_2e8 / dVar20;
      dStack_2e0 = dStack_2e0 / dVar20;
      dStack_2d8 = dStack_2d8 / dVar20;
    }
    uStack_1a8 = CONCAT11(uStack_1a8._1_1_,1);
  }
  lVar16 = **(long **)(lVar16 + 8);
  uStack_6f8 = *(undefined8 *)(lVar16 + 8);
  uStack_6f0 = *(undefined8 *)(lVar16 + 0x10);
  uStack_6e8 = *(undefined4 *)(lVar16 + 0x18);
  ppuStack_700 = &PTR_DAT_110af5e80;
  if (*(char *)(param_5 + 0x13) == '\x01') {
    uStack_5e0 = param_5[8];
    uStack_5d8 = param_5[9];
    uStack_5c8 = param_5[0xb];
    uStack_5d0 = param_5[10];
    uStack_5c0 = param_5[0xc];
    uStack_5b8 = (undefined2)param_5[0xd];
    uStack_5b6 = (undefined2)((ulong)param_5[0xd] >> 0x10);
    uStack_5ac = (undefined4)*(undefined8 *)((long)param_5 + 0x74);
    uStack_5a8 = (undefined4)((ulong)*(undefined8 *)((long)param_5 + 0x74) >> 0x20);
    uStack_5b4 = (undefined4)*(undefined8 *)((long)param_5 + 0x6c);
    uStack_5b0 = (undefined4)((ulong)*(undefined8 *)((long)param_5 + 0x6c) >> 0x20);
    uStack_620 = *param_5;
    uStack_618 = param_5[1];
    uStack_608 = param_5[3];
    uStack_610 = param_5[2];
    uStack_600 = param_5[4];
    uStack_5f8 = param_5[5];
    uStack_5e8 = param_5[7];
    uStack_5f0 = param_5[6];
    lStack_5a0 = (ulong)lStack_5a0._1_7_ << 8;
    uStack_590 = 0;
    if (*(char *)(param_5 + 0x12) == '\x01') {
      lStack_5a0 = param_5[0x10];
      uStack_598 = param_5[0x11];
      uStack_590 = 1;
    }
  }
  else {
    uStack_608 = 0x700000000;
    uStack_600 = 0x3fb504f3000001f4;
    uStack_5f8 = 0;
    uStack_5d8 = 0x1900000001e;
    uStack_5e0 = 0x7fffffff00000012;
    uStack_5d0 = 0x753000000190;
    uStack_5c8 = 0x3b23d70a40400000;
    uStack_5c0 = 0xffffffffffffffff;
    uStack_5b8 = 0x101;
    uStack_5b0 = 0x40;
    uStack_5ac = 0;
    uStack_5a8 = 0x40800000;
    lStack_5a0 = (ulong)lStack_5a0._1_7_ << 8;
    uStack_590 = 0;
    uStack_620 = 0x1400000000;
    uStack_618 = 0x3f93333300000fa0;
    uStack_610 = 0xc;
    uStack_5f0 = 0x1e;
    uStack_5e8 = CONCAT44(uStack_5e8._4_4_,5);
  }
  FUN_10940b4e0(&lStack_698,&ppuStack_700,&uStack_620);
  lStack_6b0 = 0;
  lStack_6a8 = 0;
  uStack_6a0 = 0;
  FUN_10940ca8c(&lStack_6b0,lStack_698,lStack_690,
                (lStack_690 - lStack_698 >> 2) * 0x6db6db6db6db6db7);
  (**(code **)(*param_4 + 0x20))(param_4);
  (**(code **)(*param_4 + 0x18))(param_4);
  plStack_428 = (long *)0x0;
  lStack_430 = 0;
  plStack_420 = (long *)0x0;
  FUN_10949a328(&lStack_430,(lStack_6a8 - lStack_6b0 >> 2) * 0x6db6db6db6db6db7);
  uStack_448 = 0;
  lStack_450 = 0;
  uStack_440 = 0;
  plStack_730 = param_3;
  puStack_728 = param_2;
  FUN_10949a3c0(&lStack_450,(lStack_6a8 - lStack_6b0 >> 2) * 0x6db6db6db6db6db7);
  if ((int)((ulong)(lStack_6a8 - lStack_6b0) >> 2) * -0x49249249 != 0) {
    puStack_718 = auStack_d0;
    puStack_720 = auStack_4e0;
    uVar18 = 0;
    do {
      lVar16 = lStack_6b0;
      uVar1 = uVar18 + 1;
      uStack_180._4_4_ = (float)uVar1;
      uStack_4c8 = 0x7fffffff80000000;
      uStack_180._0_4_ = (float)uVar18;
      FUN_109a84930(auStack_4b0,auStack_680,&uStack_180,&uStack_4c8);
      puVar19 = (undefined8 *)(lVar16 + uVar18 * 0x1c);
      uVar24 = NEON_scvtf(uStack_6f0,4);
      uStack_4b8 = CONCAT44(((float)((ulong)*puVar19 >> 0x20) + 0.5) /
                            (float)((ulong)uVar24 >> 0x20),((float)*puVar19 + 0.5) / (float)uVar24);
      (**(code **)*param_4)(&uStack_180,param_4,&uStack_4b8);
      fVar7 = uStack_180._4_4_;
      fVar6 = (float)uStack_180;
      fVar8 = dStack_178._0_4_;
      (**(code **)(*param_4 + 8))(&uStack_4c8,param_4,&uStack_4b8);
      fVar5 = fStack_4c0;
      uVar24 = uStack_4c8;
      puVar10 = (undefined8 *)0x68;
      __Znwm();
      fVar26 = (float)uStack_710;
      *puVar10 = 0;
      puVar10[2] = (double)(fVar7 * fVar26);
      puVar10[1] = (double)(fVar6 * fVar26);
      puVar10[3] = (double)(fVar26 * fVar8);
      puVar10[5] = (double)(float)((ulong)uVar24 >> 0x20);
      puVar10[4] = (double)(float)uVar24;
      puVar10[6] = (double)fVar5;
      *(undefined1 *)(puVar10 + 8) = 0;
      *(undefined1 *)(puVar10 + 9) = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      *(undefined1 *)(puVar10 + 0xc) = 0;
      *(undefined4 *)(puVar10 + 10) = 1;
      *(float *)(puVar10 + 7) = (float)uVar18;
      if (plStack_428 < plStack_420) {
        plVar17 = plStack_428 + 1;
        *plStack_428 = (long)puVar10;
      }
      else {
        lVar16 = (long)plStack_428 - lStack_430;
        uVar18 = (lVar16 >> 3) + 1;
        if (uVar18 >> 0x3d != 0) {
          FUN_10942ff3c();
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10949a1c8);
          (*pcVar9)();
        }
        uVar15 = (long)plStack_420 - lStack_430 >> 2;
        if (uVar15 <= uVar18) {
          uVar15 = uVar18;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)plStack_420 - lStack_430)) {
          uVar15 = 0x1fffffffffffffff;
        }
        plStack_160 = &lStack_430;
        plVar11 = &lStack_430;
        func_0x000109454f6c();
        lVar13 = lStack_430;
        puVar12 = (undefined8 *)((long)plVar11 + lVar16);
        lVar16 = (long)puVar12 - ((long)plStack_428 - lStack_430);
        plVar17 = puVar12 + 1;
        *puVar12 = puVar10;
        _memcpy(lVar16,lVar13);
        lStack_170 = lStack_430;
        plStack_168 = plStack_420;
        dStack_178 = (double)lStack_430;
        uStack_180 = (long *)lStack_430;
        lStack_430 = lVar16;
        plStack_428 = plVar17;
        plStack_420 = plVar11 + uVar15;
        func_0x000109454fa0(&uStack_180);
      }
      uStack_180 = (long *)(double)(float)uStack_4b8;
      dStack_178 = (double)(float)((ulong)uStack_4b8 >> 0x20);
      plStack_428 = plVar17;
      FUN_109460a1c((double)*(float *)(puVar19 + 2),(double)*(float *)((long)puVar19 + 0xc),
                    (double)*(float *)(puVar19 + 1),aplStack_580,&uStack_180,
                    *(undefined4 *)((long)puVar19 + 0x14),auStack_4b0);
      FUN_1094545a4(&uStack_180,plStack_428[-1],aplStack_580);
      FUN_10945fba8(&lStack_450,&uStack_180);
      if (lStack_e8 != 0) {
        piVar2 = (int *)(lStack_e8 + 0x14);
        do {
          iVar14 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          func_0x000109a848d4(&uStack_120);
        }
      }
      lStack_e8 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      if (0 < uStack_120._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)(lStack_e0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_120._4_4_);
      }
      if (puStack_d8 != puStack_718 && puStack_d8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_d8 + -8));
      }
      if (lStack_4f8 != 0) {
        piVar2 = (int *)(lStack_4f8 + 0x14);
        do {
          iVar14 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          func_0x000109a848d4(auStack_530);
        }
      }
      lStack_4f8 = 0;
      uStack_518 = 0;
      uStack_520 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      if (0 < iStack_52c) {
        lVar16 = 0;
        do {
          *(undefined4 *)(lStack_4f0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_52c);
      }
      if (puStack_4e8 != puStack_720 && puStack_4e8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_4e8 + -8));
      }
      if (lStack_478 != 0) {
        piVar2 = (int *)(lStack_478 + 0x14);
        do {
          iVar14 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar14 + -1 == 0) {
          func_0x000109a848d4(auStack_4b0);
        }
      }
      lStack_478 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      if (0 < iStack_4ac) {
        lVar16 = 0;
        do {
          *(undefined4 *)(lStack_470 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_4ac);
      }
      if (puStack_468 != auStack_460 && puStack_468 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_468 + -8));
      }
      uVar18 = uVar1;
    } while (uVar1 != (uint)((int)((ulong)(lStack_6a8 - lStack_6b0) >> 2) * -0x49249249));
  }
  plStack_6d8 = plStack_428;
  lStack_6e0 = lStack_430;
  plStack_6d0 = plStack_420;
  plStack_420 = (long *)0x0;
  plStack_428 = (long *)0x0;
  lStack_430 = 0;
  uStack_6c0 = uStack_448;
  lStack_6c8 = lStack_450;
  uStack_6b8 = uStack_440;
  lStack_450 = 0;
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_180 = &lStack_450;
  FUN_10942a570(&uStack_180);
  uStack_180 = &lStack_430;
  func_0x0001094606b4(&uStack_180);
  if (lStack_6b0 != 0) {
    lStack_6a8 = lStack_6b0;
    __ZdlPv();
  }
  puVar10 = puStack_728;
  plVar11 = plStack_730;
  if (lStack_648 != 0) {
    piVar2 = (int *)(lStack_648 + 0x14);
    do {
      iVar14 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar14 + -1 == 0) {
      func_0x000109a848d4(auStack_680);
    }
  }
  lStack_648 = 0;
  uStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  uStack_660 = 0;
  if (0 < iStack_67c) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_640 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_67c);
  }
  if (puStack_638 != auStack_630 && puStack_638 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_638 + -8));
  }
  if (lStack_698 != 0) {
    lStack_690 = lStack_698;
    __ZdlPv();
  }
  puVar19 = (undefined8 *)0x120;
  __Znwm();
  puVar19[0x1b] = 0;
  puVar19[0x1a] = 0;
  puVar19[0x1d] = 0;
  puVar19[0x1c] = 0;
  puVar19[0x17] = 0;
  puVar19[0x16] = 0;
  puVar19[0x19] = 0;
  puVar19[0x18] = 0;
  puVar19[0x13] = 0;
  puVar19[0x12] = 0;
  puVar19[0x15] = 0;
  puVar19[0x14] = 0;
  puVar19[0xf] = 0;
  puVar19[0xe] = 0;
  puVar19[0x11] = 0;
  puVar19[0x10] = 0;
  puVar19[0xb] = 0;
  puVar19[10] = 0;
  puVar19[0xd] = 0;
  puVar19[0xc] = 0;
  puVar19[7] = 0;
  puVar19[6] = 0;
  puVar19[9] = 0;
  puVar19[8] = 0;
  puVar19[5] = 0;
  puVar19[4] = 0;
  puVar19[1] = 0;
  *puVar19 = 0;
  puVar19[2] = 0;
  puVar19[3] = 0;
  puVar19[0xc] = 0;
  puVar19[0xd] = 0;
  puVar19[0x10] = 0;
  puVar19[0x11] = 0;
  puVar19[4] = 0;
  puVar19[5] = 0x3ff0000000000000;
  puVar19[7] = 0;
  puVar19[8] = 0;
  puVar19[6] = 0;
  puVar19[10] = 0x3ff0000000000000;
  puVar19[0xb] = 0;
  puVar19[0xe] = 0x3ff0000000000000;
  puVar19[0xf] = 0;
  puVar19[0x12] = 0x3ff0000000000000;
  puVar19[0x14] = 0x3ff0000000000000;
  *(undefined1 *)(puVar19 + 0x16) = 0;
  *(undefined1 *)(puVar19 + 0x19) = 0;
  *(undefined1 *)(puVar19 + 0x1a) = 0;
  *(undefined1 *)(puVar19 + 0x1c) = 0;
  *(undefined8 *)((long)puVar19 + 0xe4) = 0;
  *puVar19 = &PTR_FUN_110af6af0;
  puVar19[0x1f] = 0;
  puVar19[0x1e] = 0;
  puVar19[0x21] = 0;
  puVar19[0x20] = 0;
  puVar19[0x23] = 0;
  puVar19[0x22] = 0;
  lVar16 = *plVar11;
  lVar13 = plVar11[1];
  if (plVar11[1] != 0) {
    plVar11 = (long *)(plVar11[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar19[0x1f] = lVar13;
  puVar19[0x1e] = lVar16;
  puVar19[0x21] = plStack_6d8;
  puVar19[0x20] = lStack_6e0;
  puVar19[0x22] = plStack_6d0;
  plStack_6d8 = (long *)0x0;
  plStack_6d0 = (long *)0x0;
  lStack_6e0 = 0;
  dStack_178 = 0.0;
  uStack_180 = (long *)0x0;
  lStack_170 = 0;
  plStack_168 = (long *)0x3ff0000000000000;
  plStack_160 = (long *)0x0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_140 = 0x3ff0000000000000;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0x3ff0000000000000;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0x3ff0000000000000;
  uVar24 = 0x470;
  __Znwm(0x470);
  FUN_1094607b0(0x4000000000000000);
  FUN_109454df4(puVar19 + 0x23,uVar24);
  plVar11 = &lStack_6c8;
  FUN_109423ca0(puVar19[0x23]);
  iVar14 = (int)plVar11;
  *(undefined4 *)puVar19[0x23] = 4;
  *puVar10 = puVar19;
  puVar12 = (undefined8 *)0x20;
  __Znwm();
  *puVar12 = &PTR_FUN_110af6d00;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = puVar19;
  puVar10[1] = puVar12;
  uStack_180 = &lStack_6c8;
  FUN_10942a570(&uStack_180);
  uStack_180 = &lStack_6e0;
  func_0x0001094606b4(&uStack_180);
  if ((cStack_190 == '\x01') && (plStack_198 != (long *)0x0)) {
    plVar11 = plStack_198 + 1;
    do {
      lVar16 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_198);
    }
  }
  if (lStack_208 != 0) {
    lStack_200 = lStack_208;
    __ZdlPv();
  }
  if (lStack_220 != 0) {
    lStack_218 = lStack_220;
    __ZdlPv();
  }
  if (lStack_238 != 0) {
    lStack_230 = lStack_238;
    __ZdlPv();
  }
  plVar11 = plStack_2f8;
  if (plStack_2f8 != (long *)0x0) {
    plVar17 = plStack_2f8 + 1;
    do {
      lVar16 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  lVar16 = lStack_3a8;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return lVar16;
  }
  ___stack_chk_fail();
  if (iVar14 != 0) {
    func_0x000104bd46a0();
    __ZdlPv(uVar24);
    func_0x00010567aa40(auStack_4b0);
    aplStack_580[0] = &lStack_450;
    FUN_10942a570(aplStack_580);
    aplStack_580[0] = &lStack_430;
    func_0x0001094606b4(aplStack_580);
    if (lStack_6b0 != 0) {
      lStack_6a8 = lStack_6b0;
      __ZdlPv();
    }
    FUN_10940b66c(&lStack_698);
    FUN_109458ce0(auStack_410);
  }
  lVar13 = lVar16;
  __Unwind_Resume();
  pcStack_738 = FUN_10949a2e4;
  lStack_758 = lVar13 + 0x18;
  plStack_750 = &lStack_6c8;
  lStack_748 = lVar16;
  puStack_740 = &stack0xfffffffffffffff0;
  FUN_10942a570(&lStack_758);
  lStack_758 = lVar13;
  func_0x0001094606b4(&lStack_758);
  return lVar13;
}



/* Entry: 10949a2e4; end: 10949a327;  */

long FUN_10949a2e4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x18;
  FUN_10942a570(&lStack_28);
  lStack_28 = param_1;
  func_0x0001094606b4(&lStack_28);
  return param_1;
}



/* Entry: 10949a328; end: 10949a3bf;  */

void FUN_10949a328(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_10942ff3c();
      lVar2 = *param_1;
      if ((ulong)((param_1[2] - lVar2 >> 4) * 0x4ec4ec4ec4ec4ec5) < param_2) {
        if (0x13b13b13b13b13b < param_2) {
          FUN_109428800();
          FUN_10942d114(&plStack_b8);
          __Unwind_Resume(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
          return;
        }
        lVar3 = param_1[1];
        plVar1 = param_1;
        plStack_98 = param_1;
        FUN_109428814();
        lVar2 = (long)plVar1 + (lVar3 - lVar2);
        lVar3 = lVar2 + (*param_1 - param_1[1]);
        plStack_b8 = plVar1;
        plStack_b0 = (long *)lVar2;
        plStack_a8 = (long *)lVar2;
        plStack_a0 = plVar1 + param_2 * 0x1a;
        FUN_10942cdf0(param_1,*param_1,param_1[1],lVar3);
        plStack_b8 = (long *)*param_1;
        *param_1 = lVar3;
        param_1[1] = lVar2;
        plStack_a0 = (long *)param_1[2];
        param_1[2] = (long)(plVar1 + param_2 * 0x1a);
        plStack_b0 = plStack_b8;
        plStack_a8 = plStack_b8;
        FUN_10942d114(&plStack_b8);
      }
      return;
    }
    lVar3 = param_1[1];
    plVar1 = param_1;
    plStack_38 = param_1;
    func_0x000109454f6c();
    lVar2 = (long)plVar1 + (lVar3 - lVar2);
    lVar3 = lVar2 - (param_1[1] - *param_1);
    _memcpy(lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar1 + param_2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000109454fa0(&lStack_58);
  }
  return;
}



/* Entry: 10949a3c0; end: 10949a4af;  */

void FUN_10949a3c0(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 4) * 0x4ec4ec4ec4ec4ec5) < param_2) {
    if (0x13b13b13b13b13b < param_2) {
      FUN_109428800();
      FUN_10942d114(&plStack_58);
      __Unwind_Resume(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
      return;
    }
    lVar3 = param_1[1];
    plVar1 = param_1;
    plStack_38 = param_1;
    FUN_109428814(param_1,param_2,0);
    lVar2 = (long)plVar1 + (lVar3 - lVar2);
    lVar3 = lVar2 + (*param_1 - param_1[1]);
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar2;
    plStack_48 = (long *)lVar2;
    plStack_40 = plVar1 + param_2 * 0x1a;
    FUN_10942cdf0(param_1,*param_1,param_1[1],lVar3);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + param_2 * 0x1a);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_10942d114(&plStack_58);
  }
  return;
}



/* Entry: 10949a4b0; end: 10949a4b3;  */

void FUN_10949a4b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10949a4b4; end: 10949a4c7;  */

void FUN_10949a4b4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10949a4c8; end: 10949a4df;  */

void FUN_10949a4c8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010949a4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    return;
  }
  return;
}



/* Entry: 10949a4e0; end: 10949a517;  */

undefined8 FUN_10949a4e0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af6d40);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10949a518; end: 10949a51b;  */

void FUN_10949a518(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10949a51c; end: 10949a59f;  */

long * FUN_10949a51c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x00010938cf14(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar2) {
      plVar4 = plVar3 + 4;
      func_0x00010938cf14(plVar4,param_2);
      if ((char)plVar4 < '\x01') {
        return plVar3;
      }
    }
  }
  return plVar2;
}



/* Entry: 10949a5a0; end: 10949a69b;  */

void FUN_10949a5a0(byte *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte **ppbVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (*param_1 != 2) {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_1);
    func_0x000107c31940(&pbStack_60,param_1);
    FUN_10928a5e0(&uStack_48,&UNK_10f56748c,&pbStack_60);
    FUN_10937bbbc(uVar3,0x12e,&uStack_48);
    ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10949a644);
    (*pcVar2)();
  }
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  bVar1 = *param_1;
  uVar6 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar6 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar6 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar6 = 1;
    }
  }
  func_0x000107732f18(&lStack_40,uVar6);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  bVar1 = *param_1;
  plVar7 = plStack_38;
  pbStack_80 = param_1;
  pbStack_60 = param_1;
  if (bVar1 == 0) {
    uStack_48 = 1;
  }
  else {
    if (bVar1 == 2) {
      uStack_50 = **(undefined8 **)(param_1 + 8);
      puStack_78 = (undefined8 *)0x0;
      uStack_68 = 0x8000000000000000;
      uStack_70 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_10949a788;
    }
    if (bVar1 == 1) {
      puStack_78 = *(undefined8 **)(param_1 + 8) + 1;
      uStack_58 = **(undefined8 **)(param_1 + 8);
      uStack_68 = 0x8000000000000000;
      uStack_70 = 0;
      goto LAB_10949a788;
    }
    uStack_48 = 0;
  }
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 1;
LAB_10949a788:
  while( true ) {
    ppbVar4 = &pbStack_60;
    FUN_10937c708(ppbVar4,&pbStack_80);
    if (((ulong)ppbVar4 & 1) != 0) break;
    FUN_10937c560(&pbStack_60);
    FUN_10949aadc();
    plVar5 = &lStack_40;
    FUN_10949a828(plVar5,plVar7,&stack0xffffffffffffffd8);
    FUN_10937c698(&pbStack_60);
    plVar7 = plVar5 + 1;
  }
  if (*param_2 != 0) {
    param_2[1] = *param_2;
    __ZdlPv();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = (long)plStack_38;
  *param_2 = lStack_40;
  param_2[2] = 0;
  return;
}



/* Entry: 10949a69c; end: 10949a827;  */

void FUN_10949a69c(byte *param_1,long *param_2)

{
  byte bVar1;
  byte **ppbVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  byte *pbStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  undefined1 auStack_28 [8];
  
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  lStack_30 = 0;
  bVar1 = *param_1;
  uVar4 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar4 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar4 = 1;
    }
  }
  func_0x000107732f18(&lStack_40,uVar4);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  bVar1 = *param_1;
  plVar5 = plStack_38;
  pbStack_80 = param_1;
  pbStack_60 = param_1;
  if (bVar1 == 0) {
    uStack_48 = 1;
  }
  else {
    if (bVar1 == 2) {
      uStack_50 = **(undefined8 **)(param_1 + 8);
      puStack_78 = (undefined8 *)0x0;
      uStack_68 = 0x8000000000000000;
      uStack_70 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_10949a788;
    }
    if (bVar1 == 1) {
      puStack_78 = *(undefined8 **)(param_1 + 8) + 1;
      uStack_58 = **(undefined8 **)(param_1 + 8);
      uStack_68 = 0x8000000000000000;
      uStack_70 = 0;
      goto LAB_10949a788;
    }
    uStack_48 = 0;
  }
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 1;
LAB_10949a788:
  while( true ) {
    ppbVar2 = &pbStack_60;
    FUN_10937c708(ppbVar2,&pbStack_80);
    if (((ulong)ppbVar2 & 1) != 0) break;
    FUN_10937c560(&pbStack_60);
    FUN_10949aadc();
    plVar3 = &lStack_40;
    FUN_10949a828(plVar3,plVar5,auStack_28);
    FUN_10937c698(&pbStack_60);
    plVar5 = plVar3 + 1;
  }
  if (*param_2 != 0) {
    param_2[1] = *param_2;
    __ZdlPv();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = (long)plStack_38;
  *param_2 = lStack_40;
  param_2[2] = lStack_30;
  return;
}



/* Entry: 10949a828; end: 10949a9df;  */

ulong * FUN_10949a828(ulong *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar2 = (ulong *)param_1[1];
  if (puVar2 < (ulong *)param_1[2]) {
    puVar3 = param_2;
    if (param_2 == puVar2) {
      *puVar2 = *param_3;
      param_1[1] = (ulong)(puVar2 + 1);
    }
    else {
      puVar11 = puVar2;
      if (puVar2 + -1 < puVar2) {
        *puVar2 = puVar2[-1];
        puVar11 = puVar2 + 1;
      }
      param_1[1] = (ulong)puVar11;
      if (puVar2 != param_2 + 1) {
        _memmove(param_2 + 1,param_2);
      }
      *param_2 = *param_3;
    }
  }
  else {
    uVar6 = *param_1;
    uVar10 = ((long)((long)puVar2 - uVar6) >> 3) + 1;
    if (uVar10 >> 0x3d != 0) {
      FUN_1092d2ba8();
      if (puStack_48 != puStack_50) {
        puStack_48 = (ulong *)((long)puStack_48 +
                              (((long)puStack_50 - (long)puStack_48) + 7U & 0xfffffffffffffff8));
      }
      if (puStack_58 != (ulong *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar2 = (ulong *)param_1[2];
      puVar3 = param_1;
      if (puVar2 == (ulong *)param_1[3]) {
        uVar10 = *param_1;
        uVar6 = param_1[1];
        if (uVar6 < uVar10 || uVar6 - uVar10 == 0) {
          uVar6 = (long)((long)puVar2 - uVar10) >> 2;
          if ((long)puVar2 - uVar10 == 0) {
            uVar6 = 1;
          }
          puVar3 = (ulong *)param_1[4];
          uVar10 = uVar6;
          FUN_1092d2bbc();
          puVar11 = puVar3 + (uVar6 >> 2);
          lVar8 = param_1[2] - (long)param_1[1];
          puVar2 = puVar11;
          if (lVar8 != 0) {
            puVar2 = (ulong *)((long)puVar11 + lVar8);
            puVar4 = (ulong *)param_1[1];
            puVar9 = puVar11;
            do {
              *puVar9 = *puVar4;
              lVar8 = lVar8 + -8;
              puVar4 = puVar4 + 1;
              puVar9 = puVar9 + 1;
            } while (lVar8 != 0);
          }
          puVar4 = (ulong *)*param_1;
          *param_1 = (ulong)puVar3;
          param_1[1] = (ulong)puVar11;
          param_1[2] = (ulong)puVar2;
          param_1[3] = (ulong)(puVar3 + uVar10);
          if (puVar4 != (ulong *)0x0) {
            __ZdlPv(puVar4);
            puVar2 = (ulong *)param_1[2];
            puVar3 = puVar4;
          }
        }
        else {
          lVar8 = (((long)(uVar6 - uVar10) >> 3) + 1) / 2;
          puVar11 = (ulong *)(uVar6 + lVar8 * -8);
          lVar1 = (long)puVar2 - uVar6;
          if (lVar1 != 0) {
            puVar3 = puVar11;
            _memmove(puVar11,uVar6,lVar1);
            uVar6 = param_1[1];
          }
          puVar2 = (ulong *)((long)puVar11 + lVar1);
          param_1[1] = uVar6 + lVar8 * -8;
        }
      }
      *puVar2 = *param_2;
      param_1[2] = (ulong)(puVar2 + 1);
      return puVar3;
    }
    uVar5 = (long)param_1[2] - uVar6;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    puStack_38 = param_1;
    if (uVar7 == 0) {
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar2 = param_1;
      FUN_1092d2bbc();
    }
    puStack_50 = (ulong *)((long)puVar2 + ((long)param_2 - uVar6));
    puStack_40 = puVar2 + uVar7;
    puStack_58 = puVar2;
    puStack_48 = puStack_50;
    FUN_10949a9e0(&puStack_58,param_3);
    puVar3 = puStack_50;
    _memcpy(puStack_48,param_2,param_1[1] - (long)param_2);
    puStack_48 = (ulong *)((long)puStack_48 + (param_1[1] - (long)param_2));
    param_1[1] = (ulong)param_2;
    uVar10 = (long)puStack_50 - ((long)param_2 - *param_1);
    _memcpy(uVar10);
    puStack_58 = (ulong *)*param_1;
    *param_1 = uVar10;
    uVar10 = param_1[2];
    param_1[2] = (ulong)puStack_40;
    param_1[1] = (ulong)puStack_48;
    if (puStack_58 != (ulong *)0x0) {
      puStack_50 = puStack_58;
      puStack_48 = puStack_58;
      puStack_40 = (ulong *)uVar10;
      __ZdlPv();
    }
  }
  return puVar3;
}



/* Entry: 10949a9e0; end: 10949aadb;  */

void FUN_10949a9e0(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_1092d2bbc();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = (ulong)(puVar7 + 1);
  return;
}



/* Entry: 10949aadc; end: 10949ac03;  */

void FUN_10949aadc(char *param_1,double *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  cVar1 = *param_1;
  if (cVar1 == '\x05') {
    dVar4 = (double)*(long *)(param_1 + 8);
  }
  else if (cVar1 == '\a') {
    dVar4 = *(double *)(param_1 + 8);
  }
  else {
    if (cVar1 != '\x06') {
      uVar3 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(param_1);
      func_0x000107c31940(auStack_60,param_1);
      FUN_10928a5e0(auStack_48,&UNK_10f567436,auStack_60);
      FUN_10937bbbc(uVar3,0x12e,auStack_48);
      ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10949abac);
      (*pcVar2)();
    }
    dVar4 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 8));
  }
  *param_2 = dVar4;
  return;
}



/* Entry: 10949ac04; end: 10949af97;  */

void FUN_10949ac04(double param_1,undefined8 param_2,double param_3,undefined8 *param_4,long param_5
                  )

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  double *pdVar13;
  long lVar14;
  double *pdVar15;
  long lVar16;
  ulong uVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double adStack_1c0 [4];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  double dStack_178;
  undefined8 uStack_170;
  double dStack_168;
  double adStack_160 [6];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double dStack_118;
  undefined8 uStack_110;
  double dStack_108;
  double adStack_f8 [13];
  
  uVar3 = *(ulong *)(param_5 + 0x28);
  if (uVar3 != 0) {
    uVar11 = 0;
    lVar6 = *(long *)(param_5 + 0x20);
    iVar9 = -1;
    lVar7 = *(long *)(param_5 + 8);
    dVar24 = 1.79769313486232e+308;
    do {
      uVar17 = 0;
      uVar1 = lVar6 + uVar11;
      lVar12 = *(long *)(lVar7 + (uVar1 / 0x2a) * 8);
      dVar25 = 0.0;
      do {
        lVar4 = 0;
        lVar16 = *(long *)(lVar7 + ((lVar6 + uVar17) / 0x2a) * 8);
        puVar5 = (undefined8 *)(lVar12 + uVar1 * 0x60 + (uVar1 / 0x2a) * -0xfc0 + 0x18);
        do {
          uVar19 = *puVar5;
          *(undefined8 *)((long)adStack_160 + lVar4) = puVar5[-3];
          *(undefined8 *)((long)adStack_160 + lVar4 + 8) = uVar19;
          dVar18 = (double)puVar5[3];
          *(double *)((long)adStack_160 + lVar4 + 0x10) = dVar18;
          lVar4 = lVar4 + 0x18;
          puVar5 = puVar5 + 1;
        } while (lVar4 != 0x48);
        FUN_10949d9a4(adStack_160,lVar12 + (uVar1 % 0x2a) * 0x60 + 0x48);
        lVar4 = 0;
        adStack_f8[0] = dVar18;
        adStack_f8[1] = (double)uVar19;
        adStack_f8[2] = param_3;
        do {
          *(double *)((long)adStack_f8 + lVar4 + 0x18) = -*(double *)((long)adStack_f8 + lVar4);
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0x18);
        lVar4 = 0;
        lVar16 = lVar16 + ((lVar6 + uVar17) % 0x2a) * 0x60;
        uStack_198 = adStack_160[5];
        uStack_1a0 = adStack_160[4];
        uStack_188 = uStack_128;
        uStack_190 = uStack_130;
        uStack_180 = uStack_120;
        adStack_1c0[1] = adStack_160[1];
        adStack_1c0[0] = adStack_160[0];
        adStack_1c0[3] = adStack_160[3];
        adStack_1c0[2] = adStack_160[2];
        uStack_170 = adStack_f8[4];
        dStack_178 = adStack_f8[3];
        dStack_168 = adStack_f8[5];
        lVar8 = lVar16;
        do {
          lVar10 = 0;
          pdVar13 = adStack_1c0;
          do {
            lVar14 = 0;
            dVar18 = 0.0;
            pdVar15 = pdVar13;
            do {
              dVar20 = *(double *)(lVar8 + lVar14);
              dVar23 = *pdVar15;
              dVar18 = dVar18 + dVar23 * dVar20;
              lVar14 = lVar14 + 8;
              pdVar15 = pdVar15 + 3;
            } while (lVar14 != 0x18);
            adStack_f8[lVar10 + lVar4 * 3 + 3] = dVar18;
            lVar10 = lVar10 + 1;
            pdVar13 = pdVar13 + 1;
          } while (lVar10 != 3);
          lVar4 = lVar4 + 1;
          lVar8 = lVar8 + 0x18;
        } while (lVar4 != 3);
        FUN_10949d9a4(lVar16,&dStack_178);
        lVar4 = 0;
        adStack_f8[0] = dVar18;
        adStack_f8[1] = dVar20;
        adStack_f8[2] = dVar23;
        do {
          *(double *)((long)adStack_160 + lVar4) =
               *(double *)(lVar16 + 0x48 + lVar4) + *(double *)((long)adStack_f8 + lVar4);
          dVar20 = adStack_160[2];
          uStack_110 = adStack_160[1];
          dVar18 = adStack_160[0];
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0x18);
        adStack_160[5] = adStack_f8[8];
        adStack_160[4] = adStack_f8[7];
        uStack_128 = adStack_f8[10];
        uStack_130 = adStack_f8[9];
        uStack_120 = adStack_f8[0xb];
        adStack_160[1] = adStack_f8[4];
        adStack_160[0] = adStack_f8[3];
        adStack_160[3] = adStack_f8[6];
        adStack_160[2] = adStack_f8[5];
        dStack_118 = dVar18;
        dStack_108 = dVar20;
        param_3 = adStack_f8[5];
        FUN_10949af98(adStack_160);
        lVar4 = 0;
        adStack_1c0[0] = dVar20;
        adStack_1c0[1] = dVar18;
        adStack_1c0[2] = param_3;
        dVar18 = 0.0;
        do {
          dVar18 = dVar18 + *(double *)((long)adStack_1c0 + lVar4) *
                            *(double *)((long)adStack_1c0 + lVar4);
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0x18);
        dVar18 = (SQRT(dVar18) * SQRT(dVar18)) / param_1 + 1.0;
        _log();
        dVar25 = dVar25 + dVar18 * 0.5;
        uVar17 = (ulong)((int)uVar17 + 1);
      } while (uVar17 < uVar3);
      iVar2 = (int)uVar11;
      if (dVar24 <= dVar25) {
        dVar25 = dVar24;
        iVar2 = iVar9;
      }
      iVar9 = iVar2;
      uVar11 = (ulong)((int)uVar11 + 1);
      dVar24 = dVar25;
    } while (uVar11 < uVar3);
    if (iVar9 != -1) {
      puVar5 = (undefined8 *)
               (*(long *)(lVar7 + ((ulong)(lVar6 + iVar9) / 0x2a) * 8) +
               ((ulong)(lVar6 + iVar9) % 0x2a) * 0x60);
      uVar19 = puVar5[4];
      uVar22 = puVar5[7];
      uVar21 = puVar5[6];
      param_4[5] = puVar5[5];
      param_4[4] = uVar19;
      param_4[7] = uVar22;
      param_4[6] = uVar21;
      uVar19 = puVar5[8];
      uVar22 = puVar5[0xb];
      uVar21 = puVar5[10];
      param_4[9] = puVar5[9];
      param_4[8] = uVar19;
      param_4[0xb] = uVar22;
      param_4[10] = uVar21;
      uVar19 = *puVar5;
      uVar22 = puVar5[3];
      uVar21 = puVar5[2];
      param_4[1] = puVar5[1];
      *param_4 = uVar19;
      param_4[3] = uVar22;
      param_4[2] = uVar21;
      return;
    }
  }
  param_4[4] = 0;
  param_4[3] = 0;
  param_4[6] = 0;
  param_4[5] = 0;
  param_4[2] = 0;
  param_4[1] = 0;
  *param_4 = 0x3ff0000000000000;
  param_4[4] = 0x3ff0000000000000;
  param_4[7] = 0;
  param_4[8] = 0x3ff0000000000000;
  param_4[10] = 0;
  param_4[0xb] = 0;
  param_4[9] = 0;
  return;
}



/* Entry: 10949af98; end: 10949b273;  */

double FUN_10949af98(double *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double adStack_b0 [4];
  double adStack_90 [4];
  double adStack_70 [4];
  
  lVar4 = 0;
  dVar13 = param_1[3];
  dVar14 = param_1[4];
  dVar9 = param_1[7];
  dVar15 = param_1[8];
  dVar8 = param_1[6];
  dVar7 = param_1[5];
  dVar16 = param_1[1];
  dVar10 = param_1[2];
  auVar6 = NEON_fmov(0x3fe0000000000000,8);
  adStack_90[1] = (dVar10 - dVar8) * auVar6._8_8_;
  adStack_90[0] = (dVar9 - dVar7) * auVar6._0_8_;
  dVar17 = *param_1;
  adStack_90[2] = (dVar13 - dVar16) * 0.5;
  dVar5 = 0.0;
  do {
    dVar5 = dVar5 + *(double *)((long)adStack_90 + lVar4) * *(double *)((long)adStack_90 + lVar4);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x18);
  dVar12 = (dVar17 + dVar14 + dVar15 + -1.0) * 0.5;
  dVar11 = SQRT(dVar5);
  if (dVar12 <= 0.7071067811865476) {
    if (dVar12 <= -0.7071067811865476) {
      _asin();
      adStack_b0[0] = dVar17 - dVar12;
      adStack_b0[1] = dVar14 - dVar12;
      adStack_b0[2] = dVar15 - dVar12;
      dVar14 = adStack_b0[0] * adStack_b0[0];
      dVar5 = adStack_b0[2] * adStack_b0[2];
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (adStack_b0[1] * adStack_b0[1] < dVar14) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(dVar14) && !NAN(dVar5)) {
          bVar1 = dVar14 < dVar5;
          bVar2 = dVar14 == dVar5;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        if (adStack_b0[1] * adStack_b0[1] <= dVar5) {
          adStack_b0[0] = (dVar10 + dVar8) * 0.5;
          adStack_b0[1] = (dVar9 + dVar7) * 0.5;
        }
        else {
          adStack_b0[0] = (dVar13 + dVar16) * 0.5;
          adStack_b0[2] = (dVar9 + dVar7) * 0.5;
        }
      }
      else {
        adStack_b0[1] = (dVar13 + dVar16) * 0.5;
        adStack_b0[2] = (dVar10 + dVar8) * 0.5;
      }
      lVar4 = 0;
      dVar5 = 0.0;
      do {
        dVar5 = dVar5 + *(double *)((long)adStack_90 + lVar4) *
                        *(double *)((long)adStack_b0 + lVar4);
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x18);
      if (dVar5 < 0.0) {
        lVar4 = 0;
        do {
          *(double *)((long)adStack_b0 + lVar4) = -*(double *)((long)adStack_b0 + lVar4);
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0x18);
      }
      lVar4 = 0;
      dVar5 = 0.0;
      do {
        dVar5 = dVar5 + *(double *)((long)adStack_b0 + lVar4) *
                        *(double *)((long)adStack_b0 + lVar4);
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x18);
      lVar4 = 0;
      do {
        *(double *)((long)adStack_70 + lVar4) =
             (1.0 / SQRT(dVar5)) * *(double *)((long)adStack_b0 + lVar4);
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x18);
      lVar4 = 0;
      adStack_b0[1] = adStack_70[1];
      adStack_b0[0] = adStack_70[0];
      adStack_b0[2] = adStack_70[2];
      do {
        *(double *)((long)adStack_70 + lVar4) =
             (3.141592653589793 - dVar11) * *(double *)((long)adStack_b0 + lVar4);
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x18);
      adStack_90[0] = adStack_70[0];
    }
    else {
      _acos();
      lVar4 = 0;
      do {
        *(double *)((long)adStack_90 + lVar4) =
             (dVar12 / dVar11) * *(double *)((long)adStack_90 + lVar4);
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0x18);
    }
  }
  else if (0.0 < dVar5) {
    dVar5 = dVar11;
    _asin();
    lVar4 = 0;
    do {
      *(double *)((long)adStack_90 + lVar4) =
           (dVar5 / dVar11) * *(double *)((long)adStack_90 + lVar4);
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x18);
  }
  return adStack_90[0];
}



/* Entry: 10949b274; end: 10949b423;  */

void FUN_10949b274(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  lVar4 = *(long *)(param_1 + 0xa8) - (long)puVar1;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0xa0) + 8);
    *(undefined8 **)(param_1 + 0xa0) = puVar1;
    lVar4 = *(long *)(param_1 + 0xa8) - (long)puVar1;
  }
  if (uVar2 == 1) {
    uVar3 = 0x15;
LAB_10949b2e0:
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
  }
  else if (uVar2 == 2) {
    uVar3 = 0x2a;
    goto LAB_10949b2e0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  lVar4 = *(long *)(param_1 + 0xd8) - (long)puVar1;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0xd0) + 8);
    *(undefined8 **)(param_1 + 0xd0) = puVar1;
    lVar4 = *(long *)(param_1 + 0xd8) - (long)puVar1;
  }
  if (uVar2 == 1) {
    uVar3 = 0x15;
LAB_10949b33c:
    *(undefined8 *)(param_1 + 0xe8) = uVar3;
  }
  else if (uVar2 == 2) {
    uVar3 = 0x2a;
    goto LAB_10949b33c;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x120) = 0;
  lVar4 = *(long *)(param_1 + 0x108) - (long)puVar1;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x100) + 8);
    *(undefined8 **)(param_1 + 0x100) = puVar1;
    lVar4 = *(long *)(param_1 + 0x108) - (long)puVar1;
  }
  if (uVar2 == 1) {
    uVar3 = 0x15;
  }
  else {
    if (uVar2 != 2) goto LAB_10949b3bc;
    uVar3 = 0x2a;
  }
  *(undefined8 *)(param_1 + 0x118) = uVar3;
LAB_10949b3bc:
  puVar1 = *(undefined8 **)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x150) = 0;
  lVar4 = *(long *)(param_1 + 0x138) - (long)puVar1;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x130) + 8);
    *(undefined8 **)(param_1 + 0x130) = puVar1;
    lVar4 = *(long *)(param_1 + 0x138) - (long)puVar1;
  }
  if (uVar2 == 1) {
    uVar3 = 0x15;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    uVar3 = 0x2a;
  }
  *(undefined8 *)(param_1 + 0x148) = uVar3;
  return;
}



/* Entry: 10949b424; end: 10949c69b;  */

/* WARNING: Possible PIC construction at 0x00010949b9bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010949b9c0) */
/* WARNING: Removing unreachable block (ram,0x00010949b9dc) */

void FUN_10949b424(undefined8 param_1,undefined8 param_2,double param_3,double *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  ulong uVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  double **ppdVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  double *unaff_x23;
  double *pdVar20;
  long *unaff_x24;
  double *unaff_x27;
  double *unaff_x28;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double *pdStack_5e0;
  double adStack_5d8 [2];
  double *pdStack_5c8;
  double dStack_5c0;
  double dStack_5b8;
  double adStack_5b0 [5];
  undefined8 uStack_588;
  double dStack_580;
  double dStack_578;
  double dStack_570;
  undefined8 uStack_568;
  double adStack_560 [7];
  double dStack_528;
  double dStack_508;
  long *plStack_500;
  double *pdStack_4f8;
  long *plStack_4f0;
  double *pdStack_4e8;
  double *apdStack_4e0 [4];
  double *pdStack_4c0;
  double *pdStack_4b8;
  double dStack_4a8;
  double dStack_4a0;
  double *pdStack_498;
  double *pdStack_490;
  double dStack_488;
  double dStack_480;
  double *pdStack_478;
  double adStack_470 [21];
  double dStack_3c8;
  double adStack_3c0 [12];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [72];
  double adStack_300 [12];
  double adStack_2a0 [9];
  double adStack_258 [7];
  double adStack_220 [4];
  double adStack_200 [4];
  double adStack_1e0 [9];
  double adStack_198 [28];
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10949c69c(auStack_348);
  pdVar20 = adStack_3c0 + 3;
  FUN_10949c69c(adStack_3c0 + 3,param_6);
  lVar7 = 0x18;
  pdVar9 = adStack_198 + 5;
  do {
    adStack_1e0[1] = *(double *)((long)pdVar20 + lVar7);
    pdVar9[-2] = *(double *)((long)adStack_3c0 + lVar7);
    pdVar9[-1] = adStack_1e0[1];
    adStack_1e0[0] = *(double *)((long)adStack_3c0 + lVar7 + 0x30);
    *pdVar9 = adStack_1e0[0];
    lVar7 = lVar7 + 8;
    pdVar9 = pdVar9 + 3;
  } while (lVar7 != 0x30);
  FUN_10949d9a4(adStack_198 + 3,auStack_360);
  lVar7 = 0;
  adStack_1e0[2] = param_3;
  do {
    *(double *)((long)adStack_470 + lVar7 + 0x60) = -*(double *)((long)adStack_1e0 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  adStack_198[0x14] = adStack_198[8];
  adStack_198[0x13] = adStack_198[7];
  adStack_198[0x16] = adStack_198[10];
  adStack_198[0x15] = adStack_198[9];
  adStack_198[0x17] = adStack_198[0xb];
  adStack_198[0x10] = adStack_198[4];
  adStack_198[0xf] = adStack_198[3];
  adStack_198[0x12] = adStack_198[6];
  adStack_198[0x11] = adStack_198[5];
  adStack_198[0x19] = adStack_470[0xd];
  adStack_198[0x18] = adStack_470[0xc];
  puVar11 = auStack_348;
  adStack_198[0x1a] = adStack_470[0xe];
  do {
    lVar16 = 0;
    pdVar9 = adStack_198 + 0xf;
    do {
      lVar18 = 0;
      adStack_2a0[0] = 0.0;
      pdVar5 = pdVar9;
      do {
        adStack_2a0[1] = *(double *)(puVar11 + lVar18);
        adStack_2a0[2] = *pdVar5;
        adStack_2a0[0] = adStack_2a0[0] + adStack_2a0[2] * adStack_2a0[1];
        lVar18 = lVar18 + 8;
        pdVar5 = pdVar5 + 3;
      } while (lVar18 != 0x18);
      adStack_198[lVar16 + lVar7 * 3 + 3] = adStack_2a0[0];
      lVar16 = lVar16 + 1;
      pdVar9 = pdVar9 + 1;
    } while (lVar16 != 3);
    lVar7 = lVar7 + 1;
    puVar11 = puVar11 + 0x18;
  } while (lVar7 != 3);
  FUN_10949d9a4(auStack_348,adStack_198 + 0x18);
  lVar7 = 0;
  do {
    *(double *)((long)adStack_1e0 + lVar7) =
         *(double *)((long)adStack_300 + lVar7) + *(double *)((long)adStack_2a0 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  adStack_470[0x11] = adStack_198[8];
  adStack_470[0x10] = adStack_198[7];
  adStack_470[0x13] = adStack_198[10];
  adStack_470[0x12] = adStack_198[9];
  adStack_470[0x14] = adStack_198[0xb];
  adStack_470[0xd] = adStack_198[4];
  adStack_470[0xc] = adStack_198[3];
  adStack_470[0xf] = adStack_198[6];
  adStack_470[0xe] = adStack_198[5];
  adStack_3c0[0] = adStack_1e0[1];
  dStack_3c8 = adStack_1e0[0];
  adStack_3c0[1] = adStack_1e0[2];
  dVar21 = param_4[0x26];
  pdStack_478 = param_4;
  dVar24 = adStack_198[5];
  if (param_4[0x27] != dVar21) {
    dVar23 = param_4[0x29];
    lVar7 = *(long *)((long)dVar21 + ((ulong)dVar23 / 0x2a) * 8) + ((ulong)dVar23 % 0x2a) * 0x60;
    lVar16 = *(long *)((long)dVar21 + ((ulong)((long)param_4[0x2a] + (long)dVar23) / 0x2a) * 8) +
             ((ulong)((long)param_4[0x2a] + (long)dVar23) % 0x2a) * 0x60;
    if (lVar7 != lVar16) {
      unaff_x27 = adStack_198 + 3;
      unaff_x28 = adStack_3c0 + 6;
      pdVar20 = adStack_198 + 0xf;
      unaff_x23 = adStack_2a0;
      param_4 = adStack_1e0;
      unaff_x24 = (long *)((long)dVar21 + ((ulong)dVar23 / 0x2a) * 8);
      do {
        lVar18 = 0;
        pdVar9 = unaff_x28;
        do {
          dVar23 = *pdVar9;
          *(double *)((long)pdVar20 + lVar18) = pdVar9[-3];
          *(double *)((long)adStack_198 + lVar18 + 0x80) = dVar23;
          dVar21 = pdVar9[3];
          *(double *)((long)adStack_198 + lVar18 + 0x88) = dVar21;
          lVar18 = lVar18 + 0x18;
          pdVar9 = pdVar9 + 1;
        } while (lVar18 != 0x48);
        FUN_10949d9a4(adStack_198 + 0xf,auStack_360);
        lVar18 = 0;
        adStack_2a0[0] = dVar21;
        adStack_2a0[1] = dVar23;
        adStack_2a0[2] = dVar24;
        do {
          *(double *)((long)param_4 + lVar18) = -*(double *)((long)unaff_x23 + lVar18);
          lVar18 = lVar18 + 8;
        } while (lVar18 != 0x18);
        lVar18 = 0;
        adStack_198[8] = adStack_198[0x14];
        adStack_198[7] = adStack_198[0x13];
        adStack_198[10] = adStack_198[0x16];
        adStack_198[9] = adStack_198[0x15];
        adStack_198[0xb] = adStack_198[0x17];
        adStack_198[4] = adStack_198[0x10];
        adStack_198[3] = adStack_198[0xf];
        adStack_198[6] = adStack_198[0x12];
        adStack_198[5] = adStack_198[0x11];
        adStack_198[0xd] = adStack_1e0[1];
        adStack_198[0xc] = adStack_1e0[0];
        adStack_198[0xe] = adStack_1e0[2];
        lVar13 = lVar7;
        do {
          lVar12 = 0;
          pdVar9 = adStack_198 + 3;
          do {
            lVar17 = 0;
            dVar21 = 0.0;
            pdVar5 = pdVar9;
            do {
              dVar24 = *(double *)(lVar13 + lVar17);
              dVar23 = *pdVar5;
              dVar21 = dVar21 + dVar23 * dVar24;
              lVar17 = lVar17 + 8;
              pdVar5 = pdVar5 + 3;
            } while (lVar17 != 0x18);
            param_4[lVar12 + lVar18 * 3] = dVar21;
            lVar12 = lVar12 + 1;
            pdVar9 = pdVar9 + 1;
          } while (lVar12 != 3);
          lVar18 = lVar18 + 1;
          lVar13 = lVar13 + 0x18;
        } while (lVar18 != 3);
        pdVar9 = (double *)(lVar7 + 0x48);
        FUN_10949d9a4(lVar7,adStack_198 + 0xc);
        lVar18 = 0;
        adStack_2a0[0] = dVar21;
        adStack_2a0[1] = dVar24;
        adStack_2a0[2] = dVar23;
        do {
          *(double *)((long)pdVar20 + lVar18) =
               *(double *)((long)pdVar9 + lVar18) + *(double *)((long)unaff_x23 + lVar18);
          dVar24 = adStack_198[0x11];
          adStack_198[0x19] = adStack_198[0x10];
          dVar21 = adStack_198[0xf];
          lVar18 = lVar18 + 8;
        } while (lVar18 != 0x18);
        adStack_198[0x14] = adStack_1e0[5];
        adStack_198[0x13] = adStack_1e0[4];
        adStack_198[0x16] = adStack_1e0[7];
        adStack_198[0x15] = adStack_1e0[6];
        adStack_198[0x17] = adStack_1e0[8];
        adStack_198[0x10] = adStack_1e0[1];
        adStack_198[0xf] = adStack_1e0[0];
        adStack_198[0x12] = adStack_1e0[3];
        adStack_198[0x11] = adStack_1e0[2];
        adStack_198[0x18] = dVar21;
        adStack_198[0x1a] = dVar24;
        dVar23 = adStack_1e0[2];
        FUN_10949af98(adStack_198 + 0xf);
        lVar18 = 0;
        adStack_198[3] = dVar24;
        adStack_198[4] = dVar21;
        adStack_198[5] = dVar23;
        dVar21 = 0.0;
        do {
          dVar21 = dVar21 + *(double *)((long)unaff_x27 + lVar18) *
                            *(double *)((long)unaff_x27 + lVar18);
          lVar18 = lVar18 + 8;
        } while (lVar18 != 0x18);
        dVar23 = 0.0;
        lVar18 = 0x48;
        do {
          dVar24 = *(double *)((long)pdVar20 + lVar18);
          dVar23 = dVar23 + dVar24 * dVar24;
          lVar18 = lVar18 + 8;
        } while (lVar18 != 0x60);
        if ((SQRT(dVar21) < 0.08726646259971647) && (SQRT(dVar23) < 0.2)) goto LAB_10949b89c;
        lVar7 = lVar7 + 0x60;
        if (lVar7 - *unaff_x24 == 0xfc0) {
          unaff_x24 = unaff_x24 + 1;
          lVar7 = *unaff_x24;
        }
      } while (lVar7 != lVar16);
    }
  }
  pdVar9 = pdStack_478;
  FUN_10949ca58(pdStack_478 + 0x1f,adStack_470 + 0xc);
  if (0x14 < (ulong)pdVar9[0x24]) {
    pdStack_478[0x24] = (double)((long)pdVar9[0x24] + -1);
    FUN_10949e950(pdStack_478 + 0x1f);
  }
LAB_10949b89c:
  pdVar2 = pdStack_478;
  pdVar5 = pdStack_478 + 0x25;
  pdVar6 = adStack_3c0 + 3;
  FUN_10949ca58();
  if (0x28 < (ulong)pdVar2[0x2a]) {
    pdVar2[0x2a] = (double)((long)pdVar2[0x2a] + -1);
    pdVar5 = pdVar2 + 0x25;
    FUN_10949e950();
  }
  iVar1 = *(int *)(pdVar2 + 0xc);
  if (iVar1 == 2) {
    FUN_10949ac04(0x3fc657184ae74487,adStack_1e0,pdVar2 + 0x1f);
    lVar7 = 0x18;
    pdVar20 = adStack_198 + 0x11;
    do {
      adStack_470[7] = *(double *)((long)adStack_470 + lVar7 + 0x60);
      pdVar20[-2] = *(double *)((long)adStack_470 + lVar7 + 0x48);
      pdVar20[-1] = adStack_470[7];
      adStack_470[6] = *(double *)((long)adStack_470 + lVar7 + 0x78);
      *pdVar20 = adStack_470[6];
      lVar7 = lVar7 + 8;
      pdVar20 = pdVar20 + 3;
    } while (lVar7 != 0x30);
    FUN_10949d9a4(adStack_198 + 0xf,&dStack_3c8);
    lVar7 = 0;
    adStack_470[8] = dVar24;
    do {
      *(double *)((long)adStack_2a0 + lVar7) = -*(double *)((long)adStack_470 + lVar7 + 0x30);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    adStack_198[8] = adStack_198[0x14];
    adStack_198[7] = adStack_198[0x13];
    adStack_198[10] = adStack_198[0x16];
    adStack_198[9] = adStack_198[0x15];
    adStack_198[0xb] = adStack_198[0x17];
    adStack_198[4] = adStack_198[0x10];
    adStack_198[3] = adStack_198[0xf];
    adStack_198[6] = adStack_198[0x12];
    adStack_198[5] = adStack_198[0x11];
    adStack_198[0xd] = adStack_2a0[1];
    adStack_198[0xc] = adStack_2a0[0];
    pdVar20 = adStack_1e0;
    adStack_198[0xe] = adStack_2a0[2];
    do {
      lVar16 = 0;
      pdVar9 = adStack_198 + 3;
      do {
        lVar18 = 0;
        dVar21 = 0.0;
        pdVar5 = pdVar9;
        do {
          dVar24 = *(double *)((long)pdVar20 + lVar18);
          dVar23 = *pdVar5;
          dVar21 = dVar21 + dVar23 * dVar24;
          lVar18 = lVar18 + 8;
          pdVar5 = pdVar5 + 3;
        } while (lVar18 != 0x18);
        adStack_2a0[lVar16 + lVar7 * 3] = dVar21;
        lVar16 = lVar16 + 1;
        pdVar9 = pdVar9 + 1;
      } while (lVar16 != 3);
      lVar7 = lVar7 + 1;
      pdVar20 = pdVar20 + 3;
    } while (lVar7 != 3);
    pdVar6 = adStack_198 + 0xc;
    FUN_10949d9a4(adStack_1e0);
    lVar7 = 0;
    adStack_470[6] = dVar21;
    adStack_470[7] = dVar24;
    adStack_470[8] = dVar23;
    do {
      *(double *)((long)adStack_198 + lVar7 + 0x78) =
           *(double *)((long)adStack_198 + lVar7) + *(double *)((long)adStack_470 + lVar7 + 0x30);
      dVar24 = adStack_198[0x11];
      adStack_198[0x19] = adStack_198[0x10];
      dVar21 = adStack_198[0xf];
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    adStack_198[0x14] = adStack_2a0[5];
    adStack_198[0x13] = adStack_2a0[4];
    adStack_198[0x16] = adStack_2a0[7];
    adStack_198[0x15] = adStack_2a0[6];
    adStack_198[0x17] = adStack_2a0[8];
    adStack_198[0x10] = adStack_2a0[1];
    adStack_198[0xf] = adStack_2a0[0];
    adStack_198[0x12] = adStack_2a0[3];
    adStack_198[0x11] = adStack_2a0[2];
    adStack_198[0x18] = dVar21;
    adStack_198[0x1a] = dVar24;
    pdVar5 = adStack_198 + 0xf;
    dVar23 = adStack_2a0[2];
    FUN_10949af98();
    lVar7 = 0;
    adStack_198[3] = dVar24;
    adStack_198[4] = dVar21;
    adStack_198[5] = dVar23;
    dVar21 = 0.0;
    do {
      dVar24 = *(double *)((long)adStack_198 + lVar7 + 0x18);
      dVar21 = dVar21 + dVar24 * dVar24;
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    if (SQRT(dVar21) < 0.17453292519943295) {
      FUN_10949ca58(pdVar2 + 0x13,adStack_470 + 0xc);
      pdVar2[0x18] = (double)((long)pdVar2[0x18] + -1);
      FUN_10949e950(pdVar2 + 0x13);
      adStack_198[0x11] = 0.0;
      adStack_198[0xf] = 0.0;
      adStack_198[0x10] = 0.0;
      adStack_198[5] = 0.0;
      adStack_198[3] = 0.0;
      adStack_198[4] = 0.0;
      adStack_1e0[2] = 0.0;
      adStack_1e0[0] = 0.0;
      adStack_1e0[1] = 0.0;
      dVar21 = pdVar2[0x1d];
      if (dVar21 == 0.0) {
        FUN_10949d9f4(pdVar2 + 0x19);
        dVar21 = pdVar2[0x1d];
      }
      plVar19 = (long *)((long)pdVar2[0x1a] + ((ulong)dVar21 / 0x2a) * 8);
      lVar16 = *plVar19;
      lVar7 = 0;
      if (pdVar2[0x1b] != pdVar2[0x1a]) {
        lVar7 = lVar16 + ((ulong)dVar21 % 0x2a) * 0x60;
      }
      if (lVar7 == lVar16) {
        lVar7 = plVar19[-1] + 0xfc0;
      }
      *(undefined8 *)(lVar7 + -0x60) = 0x3ff0000000000000;
      *(double *)(lVar7 + -0x50) = adStack_198[0x10];
      *(double *)(lVar7 + -0x58) = adStack_198[0xf];
      *(double *)(lVar7 + -0x48) = adStack_198[0x11];
      *(undefined8 *)(lVar7 + -0x40) = 0x3ff0000000000000;
      *(double *)(lVar7 + -0x30) = adStack_198[4];
      *(double *)(lVar7 + -0x38) = adStack_198[3];
      *(double *)(lVar7 + -0x28) = adStack_198[5];
      *(undefined8 *)(lVar7 + -0x20) = 0x3ff0000000000000;
      *(double *)(lVar7 + -0x10) = adStack_1e0[1];
      *(double *)(lVar7 + -0x18) = adStack_1e0[0];
      *(double *)(lVar7 + -8) = adStack_1e0[2];
      pdVar2[0x1d] = (double)((long)pdVar2[0x1d] + -1);
      pdVar2[0x1e] = pdVar2[0x1e];
      FUN_10949e950(pdVar2 + 0x19);
      dStack_4a0 = pdVar2[0x1d];
      uVar8 = (long)pdVar2[0x1d] + 1;
      dStack_4a8 = pdVar2[0x1a];
      pdVar20 = (double *)
                (*(long *)((long)pdVar2[0x1a] + (uVar8 / 0x2a) * 8) + (uVar8 % 0x2a) * 0x60);
      adStack_198[0x14] = pdVar20[5];
      adStack_198[0x13] = pdVar20[4];
      adStack_198[0x16] = pdVar20[7];
      adStack_198[0x15] = pdVar20[6];
      adStack_198[0x18] = pdVar20[9];
      adStack_198[0x17] = pdVar20[8];
      adStack_198[0x1a] = pdVar20[0xb];
      adStack_198[0x19] = pdVar20[10];
      adStack_198[0x10] = pdVar20[1];
      adStack_198[0xf] = *pdVar20;
      adStack_198[0x12] = pdVar20[3];
      adStack_198[0x11] = pdVar20[2];
      adStack_470[9] = 0.0;
      adStack_470[8] = 0.0;
      adStack_470[0xb] = 0.0;
      adStack_470[10] = 0.0;
      adStack_470[7] = 0.0;
      adStack_470[6] = 0.0;
      dVar21 = pdVar2[0xd];
      lVar7 = (long)pdVar2[0xe] - (long)dVar21;
      if (lVar7 != 0) {
        unaff_x27 = (double *)0x0;
        dStack_480 = pdStack_478[0x17];
        dStack_488 = pdStack_478[0x14];
        pdStack_490 = (double *)(lVar7 >> 3);
        pdStack_498 = adStack_198 + 0x12;
        do {
          lVar7 = 0;
          unaff_x28 = (double *)((long)dStack_480 + (long)unaff_x27);
          lVar16 = *(long *)((long)dStack_488 + ((ulong)unaff_x28 / 0x2a) * 8);
          pdVar20 = pdStack_498;
          do {
            dVar25 = *pdVar20;
            *(double *)((long)adStack_198 + lVar7 + 0x18) = pdVar20[-3];
            *(double *)((long)adStack_198 + lVar7 + 0x20) = dVar25;
            dVar24 = pdVar20[3];
            *(double *)((long)adStack_198 + lVar7 + 0x28) = dVar24;
            lVar7 = lVar7 + 0x18;
            pdVar20 = pdVar20 + 1;
          } while (lVar7 != 0x48);
          FUN_10949d9a4(adStack_198 + 3,adStack_198 + 0x18);
          lVar7 = 0;
          adStack_470[0] = dVar24;
          adStack_470[1] = dVar25;
          adStack_470[2] = dVar23;
          do {
            *(double *)((long)adStack_2a0 + lVar7) = -*(double *)((long)adStack_470 + lVar7);
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0x18);
          lVar7 = 0;
          lVar16 = lVar16 + ((ulong)unaff_x28 % 0x2a) * 0x60;
          adStack_1e0[5] = adStack_198[8];
          adStack_1e0[4] = adStack_198[7];
          adStack_1e0[7] = adStack_198[10];
          adStack_1e0[6] = adStack_198[9];
          adStack_1e0[8] = adStack_198[0xb];
          adStack_1e0[1] = adStack_198[4];
          adStack_1e0[0] = adStack_198[3];
          adStack_1e0[3] = adStack_198[6];
          adStack_1e0[2] = adStack_198[5];
          adStack_198[1] = adStack_2a0[1];
          adStack_198[0] = adStack_2a0[0];
          adStack_198[2] = adStack_2a0[2];
          lVar18 = lVar16;
          do {
            lVar13 = 0;
            pdVar20 = adStack_1e0;
            do {
              lVar12 = 0;
              dVar24 = 0.0;
              pdVar9 = pdVar20;
              do {
                dVar23 = *(double *)(lVar18 + lVar12);
                dVar25 = *pdVar9;
                dVar24 = dVar24 + dVar25 * dVar23;
                lVar12 = lVar12 + 8;
                pdVar9 = pdVar9 + 3;
              } while (lVar12 != 0x18);
              adStack_2a0[lVar13 + lVar7 * 3] = dVar24;
              lVar13 = lVar13 + 1;
              pdVar20 = pdVar20 + 1;
            } while (lVar13 != 3);
            lVar7 = lVar7 + 1;
            lVar18 = lVar18 + 0x18;
          } while (lVar7 != 3);
          FUN_10949d9a4(lVar16,adStack_198);
          lVar7 = 0;
          adStack_470[0] = dVar24;
          adStack_470[1] = dVar23;
          adStack_470[2] = dVar25;
          do {
            *(double *)((long)adStack_198 + lVar7 + 0x18) =
                 *(double *)(lVar16 + 0x48 + lVar7) + *(double *)((long)adStack_470 + lVar7);
            adStack_198[0xe] = adStack_198[5];
            adStack_198[0xd] = adStack_198[4];
            adStack_198[0xc] = adStack_198[3];
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0x18);
          adStack_198[8] = adStack_2a0[5];
          adStack_198[7] = adStack_2a0[4];
          adStack_198[10] = adStack_2a0[7];
          adStack_198[9] = adStack_2a0[6];
          adStack_198[0xb] = adStack_2a0[8];
          adStack_198[4] = adStack_2a0[1];
          adStack_198[3] = adStack_2a0[0];
          adStack_198[6] = adStack_2a0[3];
          adStack_198[5] = adStack_2a0[2];
          dVar23 = adStack_2a0[2];
          FUN_10949ea70(adStack_470,adStack_198 + 3);
          lVar7 = 0;
          dVar24 = *(double *)((long)dVar21 + (long)unaff_x27 * 8);
          do {
            dVar25 = *(double *)((long)adStack_470 + lVar7);
            *(double *)((long)adStack_2a0 + lVar7 + 8) =
                 *(double *)((long)adStack_470 + lVar7 + 8) * dVar24;
            *(double *)((long)adStack_2a0 + lVar7) = dVar25 * dVar24;
            lVar7 = lVar7 + 0x10;
          } while (lVar7 != 0x30);
          lVar7 = 0;
          do {
            dVar24 = *(double *)((long)adStack_2a0 + lVar7);
            *(double *)((long)adStack_470 + lVar7 + 0x38) =
                 *(double *)((long)adStack_2a0 + lVar7 + 8) +
                 *(double *)((long)adStack_470 + lVar7 + 0x38);
            *(double *)((long)adStack_470 + lVar7 + 0x30) =
                 dVar24 + *(double *)((long)adStack_470 + lVar7 + 0x30);
            lVar7 = lVar7 + 0x10;
          } while (lVar7 != 0x30);
          unaff_x27 = (double *)(ulong)((int)unaff_x27 + 1);
        } while (unaff_x27 < pdStack_490);
      }
      dVar21 = pdStack_478[0x10];
      uVar8 = (long)pdStack_478[0x11] - (long)dVar21;
      if (0x10 < uVar8) {
        dStack_480 = (double)((long)uVar8 >> 3);
        dVar24 = 9.88131291682493e-324;
        unaff_x27 = adStack_470;
        unaff_x28 = adStack_2a0;
        do {
          lVar7 = 0;
          uVar8 = (long)dStack_4a0 + (long)dVar24;
          lVar16 = *(long *)((long)dStack_4a8 + (uVar8 / 0x2a) * 8);
          pdVar20 = adStack_198 + 0x12;
          do {
            dVar26 = *pdVar20;
            *(double *)((long)adStack_198 + lVar7 + 0x18) = pdVar20[-3];
            *(double *)((long)adStack_198 + lVar7 + 0x20) = dVar26;
            dVar25 = pdVar20[3];
            *(double *)((long)adStack_198 + lVar7 + 0x28) = dVar25;
            lVar7 = lVar7 + 0x18;
            pdVar20 = pdVar20 + 1;
          } while (lVar7 != 0x48);
          FUN_10949d9a4(adStack_198 + 3,adStack_198 + 0x18);
          lVar7 = 0;
          adStack_470[0] = dVar25;
          adStack_470[1] = dVar26;
          adStack_470[2] = dVar23;
          do {
            *(double *)((long)unaff_x28 + lVar7) = -*(double *)((long)unaff_x27 + lVar7);
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0x18);
          lVar7 = 0;
          lVar16 = lVar16 + (uVar8 % 0x2a) * 0x60;
          adStack_1e0[5] = adStack_198[8];
          adStack_1e0[4] = adStack_198[7];
          adStack_1e0[7] = adStack_198[10];
          adStack_1e0[6] = adStack_198[9];
          adStack_1e0[8] = adStack_198[0xb];
          adStack_1e0[1] = adStack_198[4];
          adStack_1e0[0] = adStack_198[3];
          adStack_1e0[3] = adStack_198[6];
          adStack_1e0[2] = adStack_198[5];
          adStack_198[1] = adStack_2a0[1];
          adStack_198[0] = adStack_2a0[0];
          adStack_198[2] = adStack_2a0[2];
          lVar18 = lVar16;
          do {
            lVar13 = 0;
            pdVar20 = adStack_1e0;
            do {
              lVar12 = 0;
              dVar23 = 0.0;
              pdVar9 = pdVar20;
              do {
                dVar25 = *(double *)(lVar18 + lVar12);
                dVar26 = *pdVar9;
                dVar23 = dVar23 + dVar26 * dVar25;
                lVar12 = lVar12 + 8;
                pdVar9 = pdVar9 + 3;
              } while (lVar12 != 0x18);
              unaff_x28[lVar13 + lVar7 * 3] = dVar23;
              lVar13 = lVar13 + 1;
              pdVar20 = pdVar20 + 1;
            } while (lVar13 != 3);
            lVar7 = lVar7 + 1;
            lVar18 = lVar18 + 0x18;
          } while (lVar7 != 3);
          FUN_10949d9a4(lVar16,adStack_198);
          lVar7 = 0;
          adStack_470[0] = dVar23;
          adStack_470[1] = dVar25;
          adStack_470[2] = dVar26;
          do {
            *(double *)((long)adStack_198 + lVar7 + 0x18) =
                 *(double *)(lVar16 + 0x48 + lVar7) + *(double *)((long)unaff_x27 + lVar7);
            adStack_198[0xe] = adStack_198[5];
            adStack_198[0xd] = adStack_198[4];
            adStack_198[0xc] = adStack_198[3];
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0x18);
          adStack_198[8] = adStack_2a0[5];
          adStack_198[7] = adStack_2a0[4];
          adStack_198[10] = adStack_2a0[7];
          adStack_198[9] = adStack_2a0[6];
          adStack_198[0xb] = adStack_2a0[8];
          adStack_198[4] = adStack_2a0[1];
          adStack_198[3] = adStack_2a0[0];
          adStack_198[6] = adStack_2a0[3];
          adStack_198[5] = adStack_2a0[2];
          dVar23 = adStack_2a0[2];
          FUN_10949ea70(adStack_470,adStack_198 + 3);
          lVar7 = 0;
          dVar25 = *(double *)((long)dVar21 + (long)dVar24 * 8);
          do {
            dVar26 = *(double *)((long)unaff_x27 + lVar7);
            *(double *)((long)adStack_2a0 + lVar7 + 8) =
                 *(double *)((long)adStack_470 + lVar7 + 8) * dVar25;
            *(double *)((long)unaff_x28 + lVar7) = dVar26 * dVar25;
            lVar7 = lVar7 + 0x10;
          } while (lVar7 != 0x30);
          lVar7 = 0;
          do {
            dVar25 = *(double *)((long)unaff_x28 + lVar7);
            *(double *)((long)adStack_470 + lVar7 + 0x38) =
                 *(double *)((long)adStack_470 + lVar7 + 0x38) -
                 *(double *)((long)adStack_2a0 + lVar7 + 8);
            *(double *)((long)adStack_470 + lVar7 + 0x30) =
                 *(double *)((long)adStack_470 + lVar7 + 0x30) - dVar25;
            lVar7 = lVar7 + 0x10;
          } while (lVar7 != 0x30);
          dVar24 = (double)(ulong)(SUB84(dVar24,0) + 1);
        } while ((ulong)dVar24 < (ulong)dStack_480);
      }
      dVar23 = adStack_470[0xb];
      dVar24 = adStack_470[10];
      dVar21 = adStack_470[9];
      lVar7 = 0;
      adStack_198[6] = 0.0;
      adStack_198[9] = 0.0;
      adStack_198[8] = 0.0;
      adStack_198[5] = 0.0;
      adStack_198[4] = 0.0;
      adStack_198[3] = 1.0;
      adStack_198[7] = 1.0;
      adStack_198[10] = 0.0;
      adStack_198[0xb] = 1.0;
      adStack_198[0xe] = 0.0;
      adStack_2a0[1] = adStack_470[10];
      adStack_2a0[0] = adStack_470[9];
      adStack_2a0[2] = adStack_470[0xb];
      dVar25 = 0.0;
      adStack_198[0xc] = 0.0;
      adStack_198[0xd] = 0.0;
      do {
        dVar25 = dVar25 + *(double *)((long)adStack_2a0 + lVar7) *
                          *(double *)((long)adStack_2a0 + lVar7);
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0x18);
      dVar26 = -(adStack_470[0xb] * adStack_470[7]) + adStack_470[8] * adStack_470[10];
      dVar28 = -(adStack_470[9] * adStack_470[8]) + adStack_470[6] * adStack_470[0xb];
      dVar29 = -(adStack_470[10] * adStack_470[6]) + adStack_470[7] * adStack_470[9];
      adStack_470[0] = dVar26;
      adStack_470[1] = dVar28;
      adStack_470[2] = dVar29;
      if (1e-08 <= dVar25) {
        if (1e-06 <= dVar25) {
          dVar22 = SQRT(dVar25);
          dVar27 = 1.0 / dVar22;
          ___sincos_stret();
          dVar22 = dVar22 * dVar27;
          dVar25 = (1.0 - dVar25) * dVar27 * dVar27;
          dVar27 = dVar27 * dVar27 * (1.0 - dVar22);
        }
        else {
          dVar27 = (dVar25 * -0.05 + 1.0) * 0.16666666666666666;
          dVar22 = 1.0 - dVar27 * dVar25;
          dVar25 = dVar25 * -0.041666666666666664 + 0.5;
        }
        lVar7 = 0;
        do {
          *(double *)((long)adStack_1e0 + lVar7) = dVar25 * *(double *)((long)adStack_470 + lVar7);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x18);
        lVar7 = 0;
        adStack_220[1] = adStack_1e0[1];
        adStack_220[0] = adStack_1e0[0];
        adStack_220[2] = adStack_1e0[2];
        do {
          *(double *)((long)adStack_1e0 + lVar7) =
               *(double *)((long)adStack_470 + lVar7 + 0x30) +
               *(double *)((long)adStack_220 + lVar7);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x18);
        lVar7 = 0;
        adStack_200[1] = adStack_1e0[1];
        adStack_200[0] = adStack_1e0[0];
        adStack_200[2] = adStack_1e0[2];
        adStack_258[0] = dVar28 * -dVar23 + dVar29 * dVar24;
        adStack_258[1] = dVar29 * -dVar21 + dVar26 * dVar23;
        adStack_258[2] = dVar26 * -dVar24 + dVar28 * dVar21;
        do {
          *(double *)((long)adStack_1e0 + lVar7) = dVar27 * *(double *)((long)adStack_258 + lVar7);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x18);
        lVar7 = 0;
        adStack_258[4] = adStack_1e0[1];
        adStack_258[3] = adStack_1e0[0];
        adStack_258[5] = adStack_1e0[2];
        do {
          *(double *)((long)adStack_1e0 + lVar7) =
               *(double *)((long)adStack_200 + lVar7) +
               *(double *)((long)adStack_258 + lVar7 + 0x18);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x18);
        adStack_198[0xd] = adStack_1e0[1];
        adStack_198[0xc] = adStack_1e0[0];
        adStack_198[0xe] = adStack_1e0[2];
      }
      else {
        lVar7 = 0;
        do {
          *(double *)((long)adStack_1e0 + lVar7) = *(double *)((long)adStack_470 + lVar7) * 0.5;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x18);
        lVar7 = 0;
        adStack_200[1] = adStack_1e0[1];
        adStack_200[0] = adStack_1e0[0];
        adStack_200[2] = adStack_1e0[2];
        do {
          *(double *)((long)adStack_1e0 + lVar7) =
               *(double *)((long)adStack_470 + lVar7 + 0x30) +
               *(double *)((long)adStack_200 + lVar7);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x18);
        adStack_198[0xd] = adStack_1e0[1];
        adStack_198[0xc] = adStack_1e0[0];
        adStack_198[0xe] = adStack_1e0[2];
        dVar22 = dVar25 * -0.16666666666666666 + 1.0;
        dVar25 = 0.5;
      }
      pdVar9 = pdStack_478;
      lVar7 = 0;
      adStack_198[0xb] = 1.0 - (dVar24 * dVar24 + dVar21 * dVar21) * dVar25;
      dVar26 = dVar24 * dVar21 * dVar25;
      adStack_198[3] = 1.0 - (dVar24 * dVar24 + dVar23 * dVar23) * dVar25;
      adStack_198[4] = dVar26 - dVar23 * dVar22;
      dVar28 = dVar23 * dVar21 * dVar25;
      adStack_198[6] = dVar26 + dVar23 * dVar22;
      adStack_198[5] = dVar28 + dVar24 * dVar22;
      dVar26 = dVar24 * dVar23 * dVar25;
      adStack_198[7] = 1.0 - (dVar23 * dVar23 + dVar21 * dVar21) * dVar25;
      adStack_198[8] = dVar26 - dVar21 * dVar22;
      adStack_198[9] = dVar28 - dVar24 * dVar22;
      adStack_198[10] = dVar26 + dVar21 * dVar22;
      pdVar20 = adStack_198;
      do {
        pdVar20 = pdVar20 + 3;
        lVar16 = 0;
        pdVar5 = adStack_198 + 0xf;
        do {
          lVar18 = 0;
          dVar21 = 0.0;
          pdVar6 = pdVar5;
          do {
            dVar24 = *(double *)((long)pdVar20 + lVar18);
            dVar23 = *pdVar6;
            dVar21 = dVar21 + dVar23 * dVar24;
            lVar18 = lVar18 + 8;
            pdVar6 = pdVar6 + 3;
          } while (lVar18 != 0x18);
          adStack_300[lVar16 + lVar7 * 3 + 3] = dVar21;
          lVar16 = lVar16 + 1;
          pdVar5 = pdVar5 + 1;
        } while (lVar16 != 3);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      pdVar5 = adStack_198 + 3;
      pdVar6 = adStack_198 + 0x18;
      adStack_198[0xc] = adStack_1e0[0];
      adStack_198[0xd] = adStack_1e0[1];
      adStack_198[0xe] = adStack_1e0[2];
      FUN_10949d9a4();
      lVar7 = 0;
      adStack_2a0[0] = dVar21;
      adStack_2a0[1] = dVar24;
      adStack_2a0[2] = dVar23;
      do {
        *(double *)((long)adStack_1e0 + lVar7) =
             *(double *)((long)adStack_198 + lVar7 + 0x60) + *(double *)((long)adStack_2a0 + lVar7);
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0x18);
      lVar7 = 0;
      lVar18 = *(long *)((long)dStack_4a8 + ((ulong)dStack_4a0 / 0x2a) * 8);
      puVar10 = (undefined8 *)
                (lVar18 + ((ulong)dStack_4a0 / 0x2a) * -0xfc0 + (long)dStack_4a0 * 0x60);
      puVar10[8] = adStack_300[0xb];
      puVar10[5] = adStack_300[8];
      puVar10[4] = adStack_300[7];
      puVar10[7] = adStack_300[10];
      puVar10[6] = adStack_300[9];
      puVar10[1] = adStack_300[4];
      *puVar10 = adStack_300[3];
      puVar10[3] = adStack_300[6];
      puVar10[2] = adStack_300[5];
      lVar18 = lVar18 + ((ulong)dStack_4a0 % 0x2a) * 0x60;
      *(double *)(lVar18 + 0x50) = adStack_1e0[1];
      *(double *)(lVar18 + 0x48) = adStack_1e0[0];
      *(double *)(lVar18 + 0x58) = adStack_1e0[2];
      lVar16 = lVar18;
      pdVar20 = pdVar9;
      do {
        lVar13 = 0;
        do {
          *(undefined8 *)((long)pdVar20 + lVar13) = *(undefined8 *)(lVar16 + lVar13);
          lVar13 = lVar13 + 8;
        } while (lVar13 != 0x18);
        lVar7 = lVar7 + 1;
        pdVar20 = pdVar20 + 3;
        lVar16 = lVar16 + 0x18;
      } while (lVar7 != 3);
      lVar7 = 0;
      do {
        *(undefined8 *)((long)pdVar9 + lVar7 + 0x48) = *(undefined8 *)(lVar18 + 0x48 + lVar7);
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0x18);
    }
  }
  else if (iVar1 == 1) {
    FUN_10949ca58(pdVar2 + 0x13,adStack_470 + 0xc);
    pdVar5 = adStack_198 + 0xf;
    pdVar6 = pdVar2 + 0x13;
    FUN_10949ac04(0x3fb657184ae74487);
    pdVar2[8] = adStack_198[0x17];
    pdVar2[5] = adStack_198[0x14];
    pdVar2[4] = adStack_198[0x13];
    pdVar2[7] = adStack_198[0x16];
    pdVar2[6] = adStack_198[0x15];
    pdVar2[1] = adStack_198[0x10];
    *pdVar2 = adStack_198[0xf];
    pdVar2[3] = adStack_198[0x12];
    pdVar2[2] = adStack_198[0x11];
    pdVar2[10] = adStack_198[0x19];
    pdVar2[9] = adStack_198[0x18];
    pdVar2[0xb] = adStack_198[0x1a];
    if ((ulong)*(uint *)((long)pdVar2 + 100) <= (ulong)pdVar2[0x18]) {
      *(undefined4 *)(pdVar2 + 0xc) = 2;
      dVar21 = (double)((long)pdVar2[0xe] - (long)pdVar2[0xd] >> 3);
      apdStack_4e0[2] = pdVar2;
      pdStack_4b8 = (double *)0x10949b9c0;
      dVar24 = pdVar2[0x18];
      uVar8 = (long)dVar21 - (long)dVar24;
      apdStack_4e0[3] = pdVar9;
      pdStack_4c0 = (double *)&stack0xfffffffffffffff0;
      if ((ulong)dVar21 < (ulong)dVar24 || uVar8 == 0) {
        if ((ulong)dVar21 < (ulong)dVar24) {
          apdStack_4e0[0] = (double *)((long)pdVar2[0x14] + ((ulong)pdVar2[0x17] / 0x2a) * 8);
          if (pdVar2[0x15] == pdVar2[0x14]) {
            apdStack_4e0[1] = (double *)0x0;
          }
          else {
            apdStack_4e0[1] =
                 (double *)((long)*apdStack_4e0[0] + ((ulong)pdVar2[0x17] % 0x2a) * 0x60);
          }
          FUN_10949e9bc(apdStack_4e0);
          FUN_10949e2d0(pdVar2 + 0x13,apdStack_4e0[0],apdStack_4e0[1]);
        }
        return;
      }
      pdStack_4b8 = (double *)0x10949b9c0;
      dVar21 = pdVar2[0x14];
      dVar24 = pdVar2[0x15];
      lVar7 = 0;
      if (dVar24 != dVar21) {
        lVar7 = ((long)dVar24 - (long)dVar21 >> 3) * 0x2a + -1;
      }
      uVar15 = (long)pdVar2[0x18] + (long)pdVar2[0x17];
      lVar16 = uVar8 - (lVar7 - uVar15);
      plStack_4f0 = unaff_x24;
      pdStack_4e8 = unaff_x23;
      apdStack_4e0[0] = param_4;
      apdStack_4e0[1] = pdVar20;
      if (lVar7 - uVar15 <= uVar8 && lVar16 != 0) {
        FUN_10949e428(pdVar2 + 0x13,lVar16);
        dVar21 = pdVar2[0x14];
        dVar24 = pdVar2[0x15];
        uVar15 = (long)pdVar2[0x17] + (long)pdVar2[0x18];
      }
      plVar19 = (long *)((long)dVar21 + (uVar15 / 0x2a) * 8);
      if (dVar24 == dVar21) {
        pdVar20 = (double *)0x0;
      }
      else {
        pdVar20 = (double *)(*plVar19 + (uVar15 % 0x2a) * 0x60);
      }
      plStack_500 = plVar19;
      pdStack_4f8 = pdVar20;
      FUN_10949e9bc(&plStack_500,uVar8);
      while( true ) {
        if (pdVar20 == pdStack_4f8) {
          return;
        }
        pdVar9 = pdVar20;
        pdVar5 = pdVar20;
        pdVar6 = pdStack_4f8;
        if (plVar19 != plStack_500) {
          pdVar6 = (double *)(*plVar19 + 0xfc0);
        }
        for (; pdVar9 != pdVar6; pdVar9 = pdVar9 + 0xc) {
          dVar21 = *pdVar2;
          dVar23 = pdVar2[3];
          dVar24 = pdVar2[2];
          pdVar9[1] = pdVar2[1];
          *pdVar9 = dVar21;
          pdVar9[3] = dVar23;
          pdVar9[2] = dVar24;
          dVar24 = pdVar2[5];
          dVar21 = pdVar2[4];
          dVar25 = pdVar2[7];
          dVar23 = pdVar2[6];
          dVar26 = pdVar2[8];
          dVar29 = pdVar2[0xb];
          dVar28 = pdVar2[10];
          pdVar9[9] = pdVar2[9];
          pdVar9[8] = dVar26;
          pdVar9[0xb] = dVar29;
          pdVar9[10] = dVar28;
          pdVar9[5] = dVar24;
          pdVar9[4] = dVar21;
          pdVar9[7] = dVar25;
          pdVar9[6] = dVar23;
          pdVar5 = pdVar6;
        }
        pdVar2[0x18] = (double)((long)pdVar2[0x18] +
                               ((long)pdVar5 - (long)pdVar20 >> 5) * -0x5555555555555555);
        if (plVar19 == plStack_500) break;
        plVar19 = plVar19 + 1;
        pdVar20 = (double *)*plVar19;
      }
      return;
    }
  }
  else if (iVar1 == 0) {
    pdVar5 = pdVar2 + 0x13;
    pdVar6 = adStack_470 + 0xc;
    FUN_10949ca58();
    if (2 < (ulong)pdVar2[0x18]) {
      pdVar5 = adStack_198 + 0xf;
      pdVar6 = pdVar2 + 0x13;
      FUN_10949ac04(0x3fb657184ae74487);
      pdVar2[8] = adStack_198[0x17];
      pdVar2[5] = adStack_198[0x14];
      pdVar2[4] = adStack_198[0x13];
      pdVar2[7] = adStack_198[0x16];
      pdVar2[6] = adStack_198[0x15];
      pdVar2[1] = adStack_198[0x10];
      *pdVar2 = adStack_198[0xf];
      pdVar2[3] = adStack_198[0x12];
      pdVar2[2] = adStack_198[0x11];
      pdVar2[10] = adStack_198[0x19];
      pdVar2[9] = adStack_198[0x18];
      pdVar2[0xb] = adStack_198[0x1a];
      *(undefined4 *)(pdVar2 + 0xc) = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    ___stack_chk_fail();
    __Unwind_Resume();
    ppdVar14 = &pdStack_5e0;
    pdStack_4c0 = unaff_x28;
    pdStack_4b8 = unaff_x27;
    lVar7 = 0;
    pdVar20 = pdVar6 + 10;
    do {
      dVar21 = pdVar20[-2];
      *(double *)((long)adStack_5d8 + lVar7) = pdVar20[-1];
      *(double *)((long)&pdStack_5e0 + lVar7) = dVar21;
      *(double *)((long)adStack_5d8 + lVar7 + 8) = *pdVar20;
      lVar7 = lVar7 + 0x20;
      pdVar20 = pdVar20 + 3;
    } while (lVar7 != 0x60);
    lVar7 = 0;
    dStack_578 = pdVar6[5];
    dStack_580 = pdVar6[4];
    dStack_570 = pdVar6[6];
    pdStack_5c8 = (double *)0x0;
    adStack_5b0[1] = 0.0;
    uStack_588 = 0;
    uStack_568 = 0x3ff0000000000000;
    pdVar20 = adStack_560;
    do {
      lVar16 = 0;
      puVar10 = ppdVar14;
      do {
        *(undefined8 *)((long)pdVar20 + lVar16) = *puVar10;
        lVar16 = lVar16 + 8;
        puVar10 = puVar10 + 4;
      } while (lVar16 != 0x20);
      lVar7 = lVar7 + 1;
      pdVar20 = pdVar20 + 4;
      ppdVar14 = ppdVar14 + 1;
    } while (lVar7 != 4);
    lVar7 = 0;
    pdVar20 = adStack_560;
    do {
      dVar21 = *pdVar20;
      *(double *)((long)adStack_5d8 + lVar7) = pdVar20[1];
      *(double *)((long)&pdStack_5e0 + lVar7) = dVar21;
      *(double *)((long)adStack_5d8 + lVar7 + 8) = pdVar20[2];
      lVar7 = lVar7 + 0x18;
      pdVar20 = pdVar20 + 4;
    } while (lVar7 != 0x48);
    lVar7 = 0;
    dVar21 = 0.0;
    do {
      dVar21 = dVar21 + *(double *)((long)&pdStack_5e0 + lVar7) *
                        *(double *)((long)&pdStack_5e0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    do {
      *(double *)((long)apdStack_4e0 + lVar7) =
           (1.0 / SQRT(dVar21)) * *(double *)((long)&pdStack_5e0 + lVar7);
      pdVar6 = apdStack_4e0[2];
      pdVar9 = apdStack_4e0[1];
      pdVar20 = apdStack_4e0[0];
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    adStack_5d8[0] = (double)apdStack_4e0[1];
    pdStack_5e0 = apdStack_4e0[0];
    adStack_5d8[1] = (double)apdStack_4e0[2];
    dVar21 = 0.0;
    do {
      dVar21 = dVar21 + *(double *)((long)&pdStack_5c8 + lVar7) *
                        *(double *)((long)&pdStack_5e0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    do {
      *(double *)((long)apdStack_4e0 + lVar7) = dVar21 * *(double *)((long)&pdStack_5e0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    do {
      *(double *)((long)&pdStack_5c8 + lVar7) =
           *(double *)((long)&pdStack_5c8 + lVar7) - *(double *)((long)apdStack_4e0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    dVar21 = 0.0;
    lVar7 = 0x18;
    do {
      dVar21 = dVar21 + *(double *)((long)&pdStack_5e0 + lVar7) *
                        *(double *)((long)&pdStack_5e0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x30);
    lVar7 = 0;
    do {
      *(double *)((long)apdStack_4e0 + lVar7) =
           (1.0 / SQRT(dVar21)) * *(double *)((long)&pdStack_5c8 + lVar7);
      pdVar4 = apdStack_4e0[2];
      pdVar3 = apdStack_4e0[1];
      pdVar2 = apdStack_4e0[0];
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    dStack_5c0 = (double)apdStack_4e0[1];
    pdStack_5c8 = apdStack_4e0[0];
    dStack_5b8 = (double)apdStack_4e0[2];
    dVar21 = 0.0;
    do {
      dVar21 = dVar21 + *(double *)((long)adStack_5b0 + lVar7) *
                        *(double *)((long)&pdStack_5e0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    do {
      *(double *)((long)apdStack_4e0 + lVar7) = dVar21 * *(double *)((long)&pdStack_5e0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    do {
      *(double *)((long)adStack_5b0 + lVar7) =
           *(double *)((long)adStack_5b0 + lVar7) - *(double *)((long)apdStack_4e0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    dVar21 = 0.0;
    do {
      dVar21 = dVar21 + *(double *)((long)adStack_5b0 + lVar7) *
                        *(double *)((long)&pdStack_5c8 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    do {
      *(double *)((long)apdStack_4e0 + lVar7) = dVar21 * *(double *)((long)&pdStack_5c8 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    lVar7 = 0;
    do {
      *(double *)((long)adStack_5b0 + lVar7) =
           *(double *)((long)adStack_5b0 + lVar7) - *(double *)((long)apdStack_4e0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    dVar21 = 0.0;
    lVar7 = 0x30;
    do {
      dVar21 = dVar21 + *(double *)((long)&pdStack_5e0 + lVar7) *
                        *(double *)((long)&pdStack_5e0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x48);
    lVar7 = 0;
    do {
      *(double *)((long)apdStack_4e0 + lVar7) =
           (1.0 / SQRT(dVar21)) * *(double *)((long)adStack_5b0 + lVar7);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x18);
    pdVar5[1] = (double)pdVar9;
    *pdVar5 = (double)pdVar20;
    pdVar5[3] = (double)pdVar2;
    pdVar5[2] = (double)pdVar6;
    pdVar5[5] = (double)pdVar4;
    pdVar5[4] = (double)pdVar3;
    pdVar5[7] = (double)apdStack_4e0[1];
    pdVar5[6] = (double)apdStack_4e0[0];
    pdVar5[8] = (double)apdStack_4e0[2];
    pdVar5[9] = adStack_560[3];
    pdVar5[10] = dStack_528;
    pdVar5[0xb] = dStack_508;
    return;
  }
  return;
}



/* Entry: 10949c69c; end: 10949ca57;  */

void FUN_10949c69c(double *param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  undefined8 *puVar8;
  double *pdVar9;
  double *pdVar10;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  double adStack_130 [14];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double adStack_b0 [7];
  double dStack_78;
  double dStack_58;
  double adStack_30 [4];
  
  pdVar10 = adStack_130;
  lVar7 = 0;
  puVar8 = (undefined8 *)(param_2 + 0x50);
  do {
    uVar12 = puVar8[-2];
    *(undefined8 *)((long)adStack_130 + lVar7 + 8) = puVar8[-1];
    *(undefined8 *)((long)adStack_130 + lVar7) = uVar12;
    *(undefined8 *)((long)adStack_130 + lVar7 + 0x10) = *puVar8;
    lVar7 = lVar7 + 0x20;
    puVar8 = puVar8 + 3;
  } while (lVar7 != 0x60);
  lVar7 = 0;
  adStack_130[0xd] = (double)*(undefined8 *)(param_2 + 0x28);
  adStack_130[0xc] = (double)*(undefined8 *)(param_2 + 0x20);
  uStack_c0 = *(undefined8 *)(param_2 + 0x30);
  adStack_130[3] = 0.0;
  adStack_130[7] = 0.0;
  adStack_130[0xb] = 0.0;
  uStack_b8 = 0x3ff0000000000000;
  pdVar9 = adStack_b0;
  do {
    lVar11 = 0;
    puVar8 = pdVar10;
    do {
      *(undefined8 *)((long)pdVar9 + lVar11) = *puVar8;
      lVar11 = lVar11 + 8;
      puVar8 = puVar8 + 4;
    } while (lVar11 != 0x20);
    lVar7 = lVar7 + 1;
    pdVar9 = pdVar9 + 4;
    pdVar10 = pdVar10 + 1;
  } while (lVar7 != 4);
  lVar7 = 0;
  pdVar10 = adStack_b0;
  do {
    dVar13 = *pdVar10;
    *(double *)((long)adStack_130 + lVar7 + 8) = pdVar10[1];
    *(double *)((long)adStack_130 + lVar7) = dVar13;
    *(double *)((long)adStack_130 + lVar7 + 0x10) = pdVar10[2];
    lVar7 = lVar7 + 0x18;
    pdVar10 = pdVar10 + 4;
  } while (lVar7 != 0x48);
  lVar7 = 0;
  dVar13 = 0.0;
  do {
    dVar13 = dVar13 + *(double *)((long)adStack_130 + lVar7) *
                      *(double *)((long)adStack_130 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  do {
    *(double *)((long)adStack_30 + lVar7) =
         (1.0 / SQRT(dVar13)) * *(double *)((long)adStack_130 + lVar7);
    dVar5 = adStack_30[2];
    dVar3 = adStack_30[1];
    dVar1 = adStack_30[0];
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  adStack_130[1] = adStack_30[1];
  adStack_130[0] = adStack_30[0];
  adStack_130[2] = adStack_30[2];
  dVar13 = 0.0;
  do {
    dVar13 = dVar13 + *(double *)((long)adStack_130 + lVar7 + 0x18) *
                      *(double *)((long)adStack_130 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  do {
    *(double *)((long)adStack_30 + lVar7) = dVar13 * *(double *)((long)adStack_130 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  do {
    *(double *)((long)adStack_130 + lVar7 + 0x18) =
         *(double *)((long)adStack_130 + lVar7 + 0x18) - *(double *)((long)adStack_30 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  dVar13 = 0.0;
  lVar7 = 0x18;
  do {
    dVar13 = dVar13 + *(double *)((long)adStack_130 + lVar7) *
                      *(double *)((long)adStack_130 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x30);
  lVar7 = 0;
  do {
    *(double *)((long)adStack_30 + lVar7) =
         (1.0 / SQRT(dVar13)) * *(double *)((long)adStack_130 + lVar7 + 0x18);
    dVar6 = adStack_30[2];
    dVar4 = adStack_30[1];
    dVar2 = adStack_30[0];
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  adStack_130[4] = adStack_30[1];
  adStack_130[3] = adStack_30[0];
  adStack_130[5] = adStack_30[2];
  dVar13 = 0.0;
  do {
    dVar13 = dVar13 + *(double *)((long)adStack_130 + lVar7 + 0x30) *
                      *(double *)((long)adStack_130 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  do {
    *(double *)((long)adStack_30 + lVar7) = dVar13 * *(double *)((long)adStack_130 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  do {
    *(double *)((long)adStack_130 + lVar7 + 0x30) =
         *(double *)((long)adStack_130 + lVar7 + 0x30) - *(double *)((long)adStack_30 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  dVar13 = 0.0;
  do {
    dVar13 = dVar13 + *(double *)((long)adStack_130 + lVar7 + 0x30) *
                      *(double *)((long)adStack_130 + lVar7 + 0x18);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  do {
    *(double *)((long)adStack_30 + lVar7) = dVar13 * *(double *)((long)adStack_130 + lVar7 + 0x18);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  lVar7 = 0;
  do {
    *(double *)((long)adStack_130 + lVar7 + 0x30) =
         *(double *)((long)adStack_130 + lVar7 + 0x30) - *(double *)((long)adStack_30 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  dVar13 = 0.0;
  lVar7 = 0x30;
  do {
    dVar13 = dVar13 + *(double *)((long)adStack_130 + lVar7) *
                      *(double *)((long)adStack_130 + lVar7);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x48);
  lVar7 = 0;
  do {
    *(double *)((long)adStack_30 + lVar7) =
         (1.0 / SQRT(dVar13)) * *(double *)((long)adStack_130 + lVar7 + 0x30);
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x18);
  param_1[1] = dVar3;
  *param_1 = dVar1;
  param_1[3] = dVar2;
  param_1[2] = dVar5;
  param_1[5] = dVar6;
  param_1[4] = dVar4;
  param_1[7] = adStack_30[1];
  param_1[6] = adStack_30[0];
  param_1[8] = adStack_30[2];
  param_1[9] = adStack_b0[3];
  param_1[10] = dStack_78;
  param_1[0xb] = dStack_58;
  return;
}



/* Entry: 10949ca58; end: 10949cbb7;  */

void FUN_10949ca58(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (uVar2 == 0) {
    FUN_10949d9f4(param_1);
    uVar2 = *(ulong *)(param_1 + 0x20);
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + (uVar2 / 0x2a) * 8);
  lVar4 = *plVar1;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar3 = lVar4 + (uVar2 % 0x2a) * 0x60;
  }
  if (lVar3 == lVar4) {
    lVar3 = plVar1[-1] + 0xfc0;
  }
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar3 + -0x58) = param_2[1];
  *(undefined8 *)(lVar3 + -0x60) = uVar5;
  *(undefined8 *)(lVar3 + -0x48) = uVar7;
  *(undefined8 *)(lVar3 + -0x50) = uVar6;
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  uVar9 = param_2[8];
  uVar11 = param_2[0xb];
  uVar10 = param_2[10];
  *(undefined8 *)(lVar3 + -0x18) = param_2[9];
  *(undefined8 *)(lVar3 + -0x20) = uVar9;
  *(undefined8 *)(lVar3 + -8) = uVar11;
  *(undefined8 *)(lVar3 + -0x10) = uVar10;
  *(undefined8 *)(lVar3 + -0x38) = uVar6;
  *(undefined8 *)(lVar3 + -0x40) = uVar5;
  *(undefined8 *)(lVar3 + -0x28) = uVar8;
  *(undefined8 *)(lVar3 + -0x30) = uVar7;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  return;
}



/* Entry: 10949cbb8; end: 10949cfb3;  */

void FUN_10949cbb8(long param_1,long param_2)

{
  double *pdVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  double *pdVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double adStack_2f0 [25];
  undefined1 auStack_228 [24];
  double dStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  double adStack_1c8 [19];
  double adStack_130 [4];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  double adStack_b0 [9];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pdVar4 = adStack_2f0;
  FUN_10949c69c(adStack_2f0 + 0x10);
  lVar2 = 0;
  lVar8 = param_2;
  do {
    lVar5 = 0;
    pdVar3 = adStack_2f0 + 0x10;
    do {
      lVar7 = 0;
      adStack_1c8[3] = 0.0;
      pdVar6 = pdVar3;
      do {
        adStack_1c8[4] = *(double *)(lVar8 + lVar7);
        adStack_1c8[5] = *pdVar6;
        adStack_1c8[3] = adStack_1c8[3] + adStack_1c8[5] * adStack_1c8[4];
        lVar7 = lVar7 + 8;
        pdVar6 = pdVar6 + 3;
      } while (lVar7 != 0x18);
      adStack_b0[lVar5 + lVar2 * 3] = adStack_1c8[3];
      lVar5 = lVar5 + 1;
      pdVar3 = pdVar3 + 1;
    } while (lVar5 != 3);
    lVar2 = lVar2 + 1;
    lVar8 = lVar8 + 0x18;
  } while (lVar2 != 3);
  FUN_10949d9a4(param_2,auStack_228);
  lVar2 = 0;
  do {
    *(double *)((long)adStack_130 + lVar2) =
         *(double *)(param_2 + 0x48 + lVar2) + *(double *)((long)adStack_1c8 + lVar2 + 0x18);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  lVar2 = 0;
  uStack_1e8 = adStack_b0[5];
  uStack_1f0 = adStack_b0[4];
  uStack_1d8 = adStack_b0[7];
  uStack_1e0 = adStack_b0[6];
  uStack_1d0 = adStack_b0[8];
  uStack_208 = adStack_b0[1];
  dStack_210 = adStack_b0[0];
  uStack_1f8 = adStack_b0[3];
  uStack_200 = adStack_b0[2];
  adStack_1c8[1] = adStack_130[1];
  adStack_1c8[0] = adStack_130[0];
  adStack_1c8[2] = adStack_130[2];
  adStack_2f0[6] = 0.0;
  adStack_2f0[9] = 0.0;
  adStack_2f0[0xe] = 0.0;
  adStack_2f0[0xd] = 0.0;
  adStack_2f0[0xc] = 0.0;
  adStack_2f0[0xb] = 0.0;
  adStack_2f0[8] = 0.0;
  adStack_2f0[7] = 0.0;
  adStack_2f0[4] = 0.0;
  adStack_2f0[3] = 0.0;
  adStack_2f0[0] = 1.0;
  adStack_2f0[5] = 1.0;
  adStack_2f0[10] = 1.0;
  pdVar3 = adStack_1c8 + 3;
  adStack_2f0[0xf] = 1.0;
  adStack_2f0[2] = 0.0;
  adStack_2f0[1] = 0.0;
  do {
    lVar8 = 0;
    pdVar6 = &dStack_210;
    do {
      lVar5 = 0;
      dVar9 = 0.0;
      pdVar1 = pdVar4;
      do {
        dVar9 = dVar9 + *pdVar1 * *(double *)((long)pdVar6 + lVar5);
        lVar5 = lVar5 + 8;
        pdVar1 = pdVar1 + 4;
      } while (lVar5 != 0x18);
      adStack_b0[lVar8] = dVar9;
      lVar8 = lVar8 + 1;
      pdVar6 = pdVar6 + 3;
    } while (lVar8 != 3);
    lVar8 = 0;
    adStack_b0[3] = adStack_2f0[lVar2 + 0xc];
    do {
      *(double *)((long)adStack_130 + lVar8) =
           adStack_b0[3] * *(double *)((long)adStack_1c8 + lVar8);
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x18);
    lVar8 = 0;
    do {
      *(double *)((long)adStack_b0 + lVar8) =
           *(double *)((long)adStack_130 + lVar8) + *(double *)((long)adStack_b0 + lVar8);
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x18);
    lVar8 = 0;
    pdVar6 = pdVar3;
    do {
      *pdVar6 = *(double *)((long)adStack_b0 + lVar8);
      lVar8 = lVar8 + 8;
      pdVar6 = pdVar6 + 4;
    } while (lVar8 != 0x20);
    lVar2 = lVar2 + 1;
    pdVar4 = pdVar4 + 1;
    pdVar3 = pdVar3 + 1;
  } while (lVar2 != 4);
  lVar2 = 0;
  pdVar3 = adStack_b0;
  pdVar4 = adStack_1c8 + 3;
  do {
    lVar8 = 0;
    pdVar6 = pdVar3;
    do {
      *pdVar6 = *(double *)((long)pdVar4 + lVar8);
      lVar8 = lVar8 + 8;
      pdVar6 = pdVar6 + 4;
    } while (lVar8 != 0x20);
    lVar2 = lVar2 + 1;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 4;
  } while (lVar2 != 4);
  uStack_e8 = uStack_68;
  uStack_f0 = adStack_b0[8];
  uStack_d8 = uStack_58;
  uStack_e0 = uStack_60;
  uStack_c8 = uStack_48;
  uStack_d0 = uStack_50;
  uStack_b8 = uStack_38;
  uStack_c0 = uStack_40;
  adStack_130[1] = adStack_b0[1];
  adStack_130[0] = adStack_b0[0];
  adStack_130[3] = adStack_b0[3];
  adStack_130[2] = adStack_b0[2];
  uStack_108 = adStack_b0[5];
  uStack_110 = adStack_b0[4];
  uStack_f8 = adStack_b0[7];
  uStack_100 = adStack_b0[6];
  FUN_10937fc48(param_1,adStack_130);
  func_0x00010937fbc4(adStack_b0);
  *(double *)(param_1 + 0x68) = adStack_b0[5];
  *(double *)(param_1 + 0x60) = adStack_b0[4];
  *(double *)(param_1 + 0x78) = adStack_b0[7];
  *(double *)(param_1 + 0x70) = adStack_b0[6];
  *(double *)(param_1 + 0x80) = adStack_b0[8];
  *(double *)(param_1 + 0x48) = adStack_b0[1];
  *(double *)(param_1 + 0x40) = adStack_b0[0];
  *(double *)(param_1 + 0x58) = adStack_b0[3];
  *(double *)(param_1 + 0x50) = adStack_b0[2];
  return;
}



/* Entry: 10949cfb4; end: 10949cfe3;  */

undefined8 FUN_10949cfb4(undefined8 param_1,long *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double adStack_48 [3];
  
  uVar4 = param_2[1] - *param_2 >> 3;
  if (param_3 <= uVar4) {
    if (param_3 < uVar4) {
      param_2[1] = *param_2 + param_3 * 8;
    }
    return param_1;
  }
  param_3 = param_3 - uVar4;
  puVar2 = (undefined8 *)param_2[1];
  if ((ulong)(param_2[2] - (long)puVar2 >> 3) < param_3) {
    lVar8 = (long)puVar2 - *param_2;
    uVar4 = param_3 + (lVar8 >> 3);
    if (uVar4 >> 0x3d != 0) {
      FUN_1092d2ba8();
      lVar8 = 0;
      do {
        lVar7 = 0;
        dVar9 = 0.0;
        do {
          dVar9 = dVar9 + *(double *)(param_3 + lVar7) * *(double *)((long)param_2 + lVar7);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x18);
        adStack_48[lVar8] = dVar9;
        lVar8 = lVar8 + 1;
        param_2 = param_2 + 3;
      } while (lVar8 != 3);
      return adStack_48[0];
    }
    uVar5 = param_2[2] - *param_2;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_2;
      FUN_1092d2bbc();
    }
    puVar2 = (undefined8 *)((long)plVar1 + lVar8);
    lVar8 = param_3 * 8;
    param_1 = *param_4;
    puVar3 = puVar2;
    do {
      *puVar3 = param_1;
      lVar8 = lVar8 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar8 != 0);
    lVar7 = (long)puVar2 - (param_2[1] - *param_2);
    _memcpy(lVar7);
    lVar8 = *param_2;
    *param_2 = lVar7;
    param_2[1] = (long)(puVar2 + param_3);
    param_2[2] = (long)(plVar1 + uVar6);
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return param_1;
    }
  }
  else {
    puVar3 = puVar2;
    if (param_3 != 0) {
      param_1 = *param_4;
      lVar8 = param_3 * 8;
      puVar3 = puVar2 + param_3;
      do {
        *puVar2 = param_1;
        lVar8 = lVar8 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar8 != 0);
    }
    param_2[1] = (long)puVar3;
  }
  return param_1;
}



/* Entry: 10949cfe4; end: 10949d1cb;  */

double * FUN_10949cfe4(double *param_1)

{
  double dVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  long lVar6;
  long lVar7;
  double *pdVar8;
  long *plVar9;
  double *pdVar10;
  long *plVar11;
  double *pdVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  double adStack_330 [9];
  double adStack_2e8 [4];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  double adStack_288 [4];
  double dStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  double adStack_220 [12];
  double adStack_1c0 [12];
  double adStack_160 [4];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double adStack_118 [5];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[4] = 0.0;
  param_1[3] = 0.0;
  param_1[6] = 0.0;
  param_1[5] = 0.0;
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  *param_1 = 1.0;
  param_1[4] = 1.0;
  param_1[7] = 0.0;
  param_1[8] = 1.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0x14] = 0.0;
  param_1[0x13] = 0.0;
  param_1[0x1a] = 0.0;
  param_1[0x19] = 0.0;
  param_1[0x20] = 0.0;
  param_1[0x1f] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 1.06099789548264e-313;
  param_1[0x10] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x12] = 0.0;
  param_1[0x11] = 0.0;
  param_1[0x16] = 0.0;
  param_1[0x15] = 0.0;
  param_1[0x18] = 0.0;
  param_1[0x17] = 0.0;
  param_1[0x1c] = 0.0;
  param_1[0x1b] = 0.0;
  param_1[0x1e] = 0.0;
  param_1[0x1d] = 0.0;
  param_1[0x22] = 0.0;
  param_1[0x21] = 0.0;
  param_1[0x24] = 0.0;
  param_1[0x23] = 0.0;
  param_1[0x26] = 0.0;
  param_1[0x25] = 0.0;
  param_1[0x28] = 0.0;
  param_1[0x27] = 0.0;
  param_1[0x2a] = 0.0;
  param_1[0x29] = 0.0;
  uStack_50 = 0x3f847ae147ae147b;
  lStack_70 = 0;
  uStack_68 = 0;
  lStack_78 = 0;
  FUN_1092d4cc8(&lStack_78,&uStack_50,&lStack_48,1);
  uStack_58 = 0xbfefae147ae147ae;
  uStack_60 = 0x3ff0000000000000;
  lStack_88 = 0;
  uStack_80 = 0;
  lStack_90 = 0;
  FUN_1092d4cc8(&lStack_90,&uStack_60,&uStack_50,2);
  func_0x00010949ce84(param_1,&lStack_78,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  pdVar10 = param_1;
  FUN_10949b274();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  FUN_10949ee1c(param_1 + 0x25);
  FUN_10949ee1c(param_1 + 0x1f);
  FUN_10949ee1c(param_1 + 0x19);
  FUN_10949ee1c(param_1 + 0x13);
  if (param_1[0x10] != 0.0) {
    param_1[0x11] = param_1[0x10];
    __ZdlPv();
  }
  dVar1 = param_1[0xd];
  if (dVar1 != 0.0) {
    param_1[0xe] = dVar1;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_10949c69c(&dStack_268);
  uStack_2a8 = uStack_240;
  uStack_2b0 = uStack_248;
  uStack_298 = uStack_230;
  uStack_2a0 = uStack_238;
  adStack_288[0] = adStack_220[0];
  uStack_290 = uStack_228;
  adStack_288[2] = adStack_220[2];
  adStack_288[1] = adStack_220[1];
  uStack_2c8 = uStack_260;
  adStack_2e8[3] = dStack_268;
  uStack_2b8 = uStack_250;
  uStack_2c0 = uStack_258;
  dVar1 = pdVar10[0x14];
  if (pdVar10[0x15] != dVar1) {
    dVar14 = pdVar10[0x17];
    pdVar12 = (double *)
              (*(long *)((long)dVar1 + ((ulong)dVar14 / 0x2a) * 8) + ((ulong)dVar14 % 0x2a) * 0x60);
    pdVar5 = (double *)
             (*(long *)((long)dVar1 + ((ulong)((long)pdVar10[0x18] + (long)dVar14) / 0x2a) * 8) +
             ((ulong)((long)pdVar10[0x18] + (long)dVar14) % 0x2a) * 0x60);
    adStack_330[5] = (double)uStack_240;
    adStack_330[4] = (double)uStack_248;
    adStack_330[7] = (double)uStack_230;
    adStack_330[6] = (double)uStack_238;
    adStack_2e8[0] = adStack_220[0];
    adStack_330[8] = (double)uStack_228;
    adStack_2e8[2] = adStack_220[2];
    adStack_2e8[1] = adStack_220[1];
    adStack_330[1] = (double)uStack_260;
    adStack_330[0] = dStack_268;
    adStack_330[3] = (double)uStack_250;
    adStack_330[2] = (double)uStack_258;
    if (pdVar12 != pdVar5) {
      plVar9 = (long *)((long)dVar1 + ((ulong)dVar14 / 0x2a) * 8);
      pdVar13 = pdVar12;
      plVar11 = plVar9;
      do {
        lVar2 = 0;
        pdVar3 = adStack_330;
        do {
          lVar6 = 0;
          pdVar4 = pdVar12;
          do {
            lVar7 = 0;
            dVar1 = 0.0;
            pdVar8 = pdVar4;
            do {
              dVar14 = *(double *)((long)pdVar3 + lVar7);
              dVar15 = *pdVar8;
              dVar1 = dVar1 + dVar15 * dVar14;
              lVar7 = lVar7 + 8;
              pdVar8 = pdVar8 + 3;
            } while (lVar7 != 0x18);
            adStack_1c0[lVar6 + lVar2 * 3 + 3] = dVar1;
            lVar6 = lVar6 + 1;
            pdVar4 = pdVar4 + 1;
          } while (lVar6 != 3);
          lVar2 = lVar2 + 1;
          pdVar3 = pdVar3 + 3;
        } while (lVar2 != 3);
        FUN_10949d9a4(adStack_330,pdVar12 + 9);
        lVar2 = 0;
        adStack_1c0[0] = dVar1;
        adStack_1c0[1] = dVar14;
        adStack_1c0[2] = dVar15;
        do {
          *(double *)((long)adStack_160 + lVar2) =
               *(double *)((long)adStack_2e8 + lVar2) + *(double *)((long)adStack_1c0 + lVar2);
          adStack_118[2] = adStack_160[2];
          adStack_118[1] = adStack_160[1];
          adStack_118[0] = adStack_160[0];
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0x18);
        lVar2 = 0;
        uStack_138 = adStack_1c0[8];
        uStack_140 = adStack_1c0[7];
        uStack_128 = adStack_1c0[10];
        uStack_130 = adStack_1c0[9];
        uStack_120 = adStack_1c0[0xb];
        adStack_160[1] = adStack_1c0[4];
        adStack_160[0] = adStack_1c0[3];
        adStack_160[3] = adStack_1c0[6];
        adStack_160[2] = adStack_1c0[5];
        pdVar4 = adStack_160;
        pdVar3 = pdVar13;
        do {
          lVar6 = 0;
          do {
            *(undefined8 *)((long)pdVar3 + lVar6) = *(undefined8 *)((long)pdVar4 + lVar6);
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0x18);
          lVar2 = lVar2 + 1;
          pdVar3 = pdVar3 + 3;
          pdVar4 = pdVar4 + 3;
        } while (lVar2 != 3);
        lVar2 = 0x48;
        do {
          *(undefined8 *)((long)pdVar13 + lVar2) = *(undefined8 *)((long)adStack_160 + lVar2);
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0x60);
        pdVar12 = pdVar12 + 0xc;
        if ((long)pdVar12 - *plVar11 == 0xfc0) {
          plVar11 = plVar11 + 1;
          pdVar12 = (double *)*plVar11;
        }
        pdVar13 = pdVar13 + 0xc;
        if ((long)pdVar13 - *plVar9 == 0xfc0) {
          plVar9 = plVar9 + 1;
          pdVar13 = (double *)*plVar9;
        }
      } while (pdVar12 != pdVar5);
    }
  }
  dVar1 = pdVar10[0x1a];
  if (pdVar10[0x1b] != dVar1) {
    dVar14 = pdVar10[0x1d];
    pdVar12 = (double *)
              (*(long *)((long)dVar1 + ((ulong)dVar14 / 0x2a) * 8) + ((ulong)dVar14 % 0x2a) * 0x60);
    pdVar5 = (double *)
             (*(long *)((long)dVar1 + ((ulong)((long)pdVar10[0x1e] + (long)dVar14) / 0x2a) * 8) +
             ((ulong)((long)pdVar10[0x1e] + (long)dVar14) % 0x2a) * 0x60);
    adStack_330[5] = (double)uStack_2a8;
    adStack_330[4] = (double)uStack_2b0;
    adStack_330[7] = (double)uStack_298;
    adStack_330[6] = (double)uStack_2a0;
    adStack_2e8[0] = adStack_288[0];
    adStack_330[8] = (double)uStack_290;
    adStack_2e8[2] = adStack_288[2];
    adStack_2e8[1] = adStack_288[1];
    adStack_330[1] = (double)uStack_2c8;
    adStack_330[0] = adStack_2e8[3];
    adStack_330[3] = (double)uStack_2b8;
    adStack_330[2] = (double)uStack_2c0;
    if (pdVar12 != pdVar5) {
      plVar9 = (long *)((long)dVar1 + ((ulong)dVar14 / 0x2a) * 8);
      pdVar13 = pdVar12;
      plVar11 = plVar9;
      do {
        lVar2 = 0;
        pdVar3 = adStack_330;
        do {
          lVar6 = 0;
          pdVar4 = pdVar12;
          do {
            lVar7 = 0;
            dVar1 = 0.0;
            pdVar8 = pdVar4;
            do {
              dVar14 = *(double *)((long)pdVar3 + lVar7);
              dVar15 = *pdVar8;
              dVar1 = dVar1 + dVar15 * dVar14;
              lVar7 = lVar7 + 8;
              pdVar8 = pdVar8 + 3;
            } while (lVar7 != 0x18);
            adStack_1c0[lVar6 + lVar2 * 3 + 3] = dVar1;
            lVar6 = lVar6 + 1;
            pdVar4 = pdVar4 + 1;
          } while (lVar6 != 3);
          lVar2 = lVar2 + 1;
          pdVar3 = pdVar3 + 3;
        } while (lVar2 != 3);
        FUN_10949d9a4(adStack_330,pdVar12 + 9);
        lVar2 = 0;
        adStack_1c0[0] = dVar1;
        adStack_1c0[1] = dVar14;
        adStack_1c0[2] = dVar15;
        do {
          *(double *)((long)adStack_160 + lVar2) =
               *(double *)((long)adStack_2e8 + lVar2) + *(double *)((long)adStack_1c0 + lVar2);
          adStack_118[2] = adStack_160[2];
          adStack_118[1] = adStack_160[1];
          adStack_118[0] = adStack_160[0];
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0x18);
        lVar2 = 0;
        uStack_138 = adStack_1c0[8];
        uStack_140 = adStack_1c0[7];
        uStack_128 = adStack_1c0[10];
        uStack_130 = adStack_1c0[9];
        uStack_120 = adStack_1c0[0xb];
        adStack_160[1] = adStack_1c0[4];
        adStack_160[0] = adStack_1c0[3];
        adStack_160[3] = adStack_1c0[6];
        adStack_160[2] = adStack_1c0[5];
        pdVar4 = adStack_160;
        pdVar3 = pdVar13;
        do {
          lVar6 = 0;
          do {
            *(undefined8 *)((long)pdVar3 + lVar6) = *(undefined8 *)((long)pdVar4 + lVar6);
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0x18);
          lVar2 = lVar2 + 1;
          pdVar3 = pdVar3 + 3;
          pdVar4 = pdVar4 + 3;
        } while (lVar2 != 3);
        lVar2 = 0x48;
        do {
          *(undefined8 *)((long)pdVar13 + lVar2) = *(undefined8 *)((long)adStack_160 + lVar2);
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0x60);
        pdVar12 = pdVar12 + 0xc;
        if ((long)pdVar12 - *plVar9 == 0xfc0) {
          plVar9 = plVar9 + 1;
          pdVar12 = (double *)*plVar9;
        }
        pdVar13 = pdVar13 + 0xc;
        if ((long)pdVar13 - *plVar11 == 0xfc0) {
          plVar11 = plVar11 + 1;
          pdVar13 = (double *)*plVar11;
        }
      } while (pdVar12 != pdVar5);
    }
  }
  lVar2 = 0;
  pdVar12 = adStack_2e8;
  do {
    pdVar12 = pdVar12 + 3;
    lVar6 = 0;
    pdVar5 = pdVar10;
    do {
      lVar7 = 0;
      dVar1 = 0.0;
      pdVar13 = pdVar5;
      do {
        dVar14 = *(double *)((long)pdVar12 + lVar7);
        dVar15 = *pdVar13;
        dVar1 = dVar1 + dVar15 * dVar14;
        lVar7 = lVar7 + 8;
        pdVar13 = pdVar13 + 3;
      } while (lVar7 != 0x18);
      adStack_220[lVar6 + lVar2 * 3 + 3] = dVar1;
      lVar6 = lVar6 + 1;
      pdVar5 = pdVar5 + 1;
    } while (lVar6 != 3);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  pdVar12 = adStack_2e8 + 3;
  FUN_10949d9a4(pdVar12,pdVar10 + 9);
  lVar2 = 0;
  adStack_330[0] = dVar1;
  adStack_330[1] = dVar14;
  adStack_330[2] = dVar15;
  do {
    *(double *)((long)adStack_160 + lVar2) =
         *(double *)((long)adStack_288 + lVar2) + *(double *)((long)adStack_330 + lVar2);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  pdVar10[5] = adStack_220[8];
  pdVar10[4] = adStack_220[7];
  pdVar10[7] = adStack_220[10];
  pdVar10[6] = adStack_220[9];
  pdVar10[8] = adStack_220[0xb];
  pdVar10[1] = adStack_220[4];
  *pdVar10 = adStack_220[3];
  pdVar10[3] = adStack_220[6];
  pdVar10[2] = adStack_220[5];
  pdVar10[10] = adStack_160[1];
  pdVar10[9] = adStack_160[0];
  pdVar10[0xb] = adStack_160[2];
  dVar1 = pdVar10[0x20];
  if (pdVar10[0x21] != dVar1) {
    dVar14 = pdVar10[0x23];
    pdVar5 = (double *)
             (*(long *)((long)dVar1 + ((ulong)dVar14 / 0x2a) * 8) + ((ulong)dVar14 % 0x2a) * 0x60);
    pdVar10 = (double *)
              (*(long *)((long)dVar1 + ((ulong)((long)pdVar10[0x24] + (long)dVar14) / 0x2a) * 8) +
              ((ulong)((long)pdVar10[0x24] + (long)dVar14) % 0x2a) * 0x60);
    if (pdVar5 != pdVar10) {
      plVar9 = (long *)((long)dVar1 + ((ulong)dVar14 / 0x2a) * 8);
      plVar11 = plVar9;
      pdVar13 = pdVar5;
      do {
        lVar2 = 0;
        pdVar12 = &dStack_268;
        do {
          lVar6 = 0;
          pdVar3 = pdVar5;
          do {
            lVar7 = 0;
            dVar1 = 0.0;
            pdVar4 = pdVar3;
            do {
              dVar14 = *(double *)((long)pdVar12 + lVar7);
              dVar15 = *pdVar4;
              dVar1 = dVar1 + dVar15 * dVar14;
              lVar7 = lVar7 + 8;
              pdVar4 = pdVar4 + 3;
            } while (lVar7 != 0x18);
            adStack_330[lVar6 + lVar2 * 3] = dVar1;
            lVar6 = lVar6 + 1;
            pdVar3 = pdVar3 + 1;
          } while (lVar6 != 3);
          lVar2 = lVar2 + 1;
          pdVar12 = pdVar12 + 3;
        } while (lVar2 != 3);
        pdVar12 = &dStack_268;
        FUN_10949d9a4(pdVar12,pdVar5 + 9);
        lVar2 = 0;
        adStack_1c0[3] = dVar1;
        adStack_1c0[4] = dVar14;
        adStack_1c0[5] = dVar15;
        do {
          *(double *)((long)adStack_160 + lVar2) =
               *(double *)((long)adStack_220 + lVar2) +
               *(double *)((long)adStack_1c0 + lVar2 + 0x18);
          adStack_118[2] = adStack_160[2];
          adStack_118[1] = adStack_160[1];
          adStack_118[0] = adStack_160[0];
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0x18);
        lVar2 = 0;
        uStack_138 = adStack_330[5];
        uStack_140 = adStack_330[4];
        uStack_128 = adStack_330[7];
        uStack_130 = adStack_330[6];
        uStack_120 = adStack_330[8];
        adStack_160[1] = adStack_330[1];
        adStack_160[0] = adStack_330[0];
        adStack_160[3] = adStack_330[3];
        adStack_160[2] = adStack_330[2];
        pdVar4 = adStack_160;
        pdVar3 = pdVar13;
        do {
          lVar6 = 0;
          do {
            *(undefined8 *)((long)pdVar3 + lVar6) = *(undefined8 *)((long)pdVar4 + lVar6);
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0x18);
          lVar2 = lVar2 + 1;
          pdVar3 = pdVar3 + 3;
          pdVar4 = pdVar4 + 3;
        } while (lVar2 != 3);
        lVar2 = 0x48;
        do {
          *(undefined8 *)((long)pdVar13 + lVar2) = *(undefined8 *)((long)adStack_160 + lVar2);
          lVar2 = lVar2 + 8;
        } while (lVar2 != 0x60);
        pdVar5 = pdVar5 + 0xc;
        if ((long)pdVar5 - *plVar9 == 0xfc0) {
          plVar9 = plVar9 + 1;
          pdVar5 = (double *)*plVar9;
        }
        pdVar13 = pdVar13 + 0xc;
        if ((long)pdVar13 - *plVar11 == 0xfc0) {
          plVar11 = plVar11 + 1;
          pdVar13 = (double *)*plVar11;
        }
      } while (pdVar5 != pdVar10);
    }
  }
  return pdVar12;
}



/* Entry: 10949d1cc; end: 10949d89b;  */

void FUN_10949d1cc(double *param_1)

{
  long lVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  double *pdVar7;
  long *plVar8;
  long *plVar9;
  double *pdVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double adStack_2a0 [9];
  double adStack_258 [4];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  double adStack_1f8 [4];
  double dStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  double adStack_190 [12];
  double adStack_130 [12];
  double adStack_d0 [4];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double adStack_88 [5];
  
  FUN_10949c69c(&dStack_1d8);
  uStack_218 = uStack_1b0;
  uStack_220 = uStack_1b8;
  uStack_208 = uStack_1a0;
  uStack_210 = uStack_1a8;
  adStack_1f8[0] = adStack_190[0];
  uStack_200 = uStack_198;
  adStack_1f8[2] = adStack_190[2];
  adStack_1f8[1] = adStack_190[1];
  uStack_238 = uStack_1d0;
  adStack_258[3] = dStack_1d8;
  uStack_228 = uStack_1c0;
  uStack_230 = uStack_1c8;
  dVar12 = param_1[0x14];
  if (param_1[0x15] != dVar12) {
    dVar13 = param_1[0x17];
    pdVar10 = (double *)
              (*(long *)((long)dVar12 + ((ulong)dVar13 / 0x2a) * 8) + ((ulong)dVar13 % 0x2a) * 0x60)
    ;
    pdVar4 = (double *)
             (*(long *)((long)dVar12 + ((ulong)((long)param_1[0x18] + (long)dVar13) / 0x2a) * 8) +
             ((ulong)((long)param_1[0x18] + (long)dVar13) % 0x2a) * 0x60);
    adStack_2a0[5] = (double)uStack_1b0;
    adStack_2a0[4] = (double)uStack_1b8;
    adStack_2a0[7] = (double)uStack_1a0;
    adStack_2a0[6] = (double)uStack_1a8;
    adStack_258[0] = adStack_190[0];
    adStack_2a0[8] = (double)uStack_198;
    adStack_258[2] = adStack_190[2];
    adStack_258[1] = adStack_190[1];
    adStack_2a0[1] = (double)uStack_1d0;
    adStack_2a0[0] = dStack_1d8;
    adStack_2a0[3] = (double)uStack_1c0;
    adStack_2a0[2] = (double)uStack_1c8;
    if (pdVar10 != pdVar4) {
      plVar8 = (long *)((long)dVar12 + ((ulong)dVar13 / 0x2a) * 8);
      pdVar11 = pdVar10;
      plVar9 = plVar8;
      do {
        lVar1 = 0;
        pdVar2 = adStack_2a0;
        do {
          lVar5 = 0;
          pdVar3 = pdVar10;
          do {
            lVar6 = 0;
            dVar12 = 0.0;
            pdVar7 = pdVar3;
            do {
              dVar13 = *(double *)((long)pdVar2 + lVar6);
              dVar14 = *pdVar7;
              dVar12 = dVar12 + dVar14 * dVar13;
              lVar6 = lVar6 + 8;
              pdVar7 = pdVar7 + 3;
            } while (lVar6 != 0x18);
            adStack_130[lVar5 + lVar1 * 3 + 3] = dVar12;
            lVar5 = lVar5 + 1;
            pdVar3 = pdVar3 + 1;
          } while (lVar5 != 3);
          lVar1 = lVar1 + 1;
          pdVar2 = pdVar2 + 3;
        } while (lVar1 != 3);
        FUN_10949d9a4(adStack_2a0,pdVar10 + 9);
        lVar1 = 0;
        adStack_130[0] = dVar12;
        adStack_130[1] = dVar13;
        adStack_130[2] = dVar14;
        do {
          *(double *)((long)adStack_d0 + lVar1) =
               *(double *)((long)adStack_258 + lVar1) + *(double *)((long)adStack_130 + lVar1);
          adStack_88[2] = adStack_d0[2];
          adStack_88[1] = adStack_d0[1];
          adStack_88[0] = adStack_d0[0];
          lVar1 = lVar1 + 8;
        } while (lVar1 != 0x18);
        lVar1 = 0;
        uStack_a8 = adStack_130[8];
        uStack_b0 = adStack_130[7];
        uStack_98 = adStack_130[10];
        uStack_a0 = adStack_130[9];
        uStack_90 = adStack_130[0xb];
        adStack_d0[1] = adStack_130[4];
        adStack_d0[0] = adStack_130[3];
        adStack_d0[3] = adStack_130[6];
        adStack_d0[2] = adStack_130[5];
        pdVar3 = adStack_d0;
        pdVar2 = pdVar11;
        do {
          lVar5 = 0;
          do {
            *(undefined8 *)((long)pdVar2 + lVar5) = *(undefined8 *)((long)pdVar3 + lVar5);
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x18);
          lVar1 = lVar1 + 1;
          pdVar2 = pdVar2 + 3;
          pdVar3 = pdVar3 + 3;
        } while (lVar1 != 3);
        lVar1 = 0x48;
        do {
          *(undefined8 *)((long)pdVar11 + lVar1) = *(undefined8 *)((long)adStack_d0 + lVar1);
          lVar1 = lVar1 + 8;
        } while (lVar1 != 0x60);
        pdVar10 = pdVar10 + 0xc;
        if ((long)pdVar10 - *plVar9 == 0xfc0) {
          plVar9 = plVar9 + 1;
          pdVar10 = (double *)*plVar9;
        }
        pdVar11 = pdVar11 + 0xc;
        if ((long)pdVar11 - *plVar8 == 0xfc0) {
          plVar8 = plVar8 + 1;
          pdVar11 = (double *)*plVar8;
        }
      } while (pdVar10 != pdVar4);
    }
  }
  dVar12 = param_1[0x1a];
  if (param_1[0x1b] != dVar12) {
    dVar13 = param_1[0x1d];
    pdVar10 = (double *)
              (*(long *)((long)dVar12 + ((ulong)dVar13 / 0x2a) * 8) + ((ulong)dVar13 % 0x2a) * 0x60)
    ;
    pdVar4 = (double *)
             (*(long *)((long)dVar12 + ((ulong)((long)param_1[0x1e] + (long)dVar13) / 0x2a) * 8) +
             ((ulong)((long)param_1[0x1e] + (long)dVar13) % 0x2a) * 0x60);
    adStack_2a0[5] = (double)uStack_218;
    adStack_2a0[4] = (double)uStack_220;
    adStack_2a0[7] = (double)uStack_208;
    adStack_2a0[6] = (double)uStack_210;
    adStack_258[0] = adStack_1f8[0];
    adStack_2a0[8] = (double)uStack_200;
    adStack_258[2] = adStack_1f8[2];
    adStack_258[1] = adStack_1f8[1];
    adStack_2a0[1] = (double)uStack_238;
    adStack_2a0[0] = adStack_258[3];
    adStack_2a0[3] = (double)uStack_228;
    adStack_2a0[2] = (double)uStack_230;
    if (pdVar10 != pdVar4) {
      plVar8 = (long *)((long)dVar12 + ((ulong)dVar13 / 0x2a) * 8);
      pdVar11 = pdVar10;
      plVar9 = plVar8;
      do {
        lVar1 = 0;
        pdVar2 = adStack_2a0;
        do {
          lVar5 = 0;
          pdVar3 = pdVar10;
          do {
            lVar6 = 0;
            dVar12 = 0.0;
            pdVar7 = pdVar3;
            do {
              dVar13 = *(double *)((long)pdVar2 + lVar6);
              dVar14 = *pdVar7;
              dVar12 = dVar12 + dVar14 * dVar13;
              lVar6 = lVar6 + 8;
              pdVar7 = pdVar7 + 3;
            } while (lVar6 != 0x18);
            adStack_130[lVar5 + lVar1 * 3 + 3] = dVar12;
            lVar5 = lVar5 + 1;
            pdVar3 = pdVar3 + 1;
          } while (lVar5 != 3);
          lVar1 = lVar1 + 1;
          pdVar2 = pdVar2 + 3;
        } while (lVar1 != 3);
        FUN_10949d9a4(adStack_2a0,pdVar10 + 9);
        lVar1 = 0;
        adStack_130[0] = dVar12;
        adStack_130[1] = dVar13;
        adStack_130[2] = dVar14;
        do {
          *(double *)((long)adStack_d0 + lVar1) =
               *(double *)((long)adStack_258 + lVar1) + *(double *)((long)adStack_130 + lVar1);
          adStack_88[2] = adStack_d0[2];
          adStack_88[1] = adStack_d0[1];
          adStack_88[0] = adStack_d0[0];
          lVar1 = lVar1 + 8;
        } while (lVar1 != 0x18);
        lVar1 = 0;
        uStack_a8 = adStack_130[8];
        uStack_b0 = adStack_130[7];
        uStack_98 = adStack_130[10];
        uStack_a0 = adStack_130[9];
        uStack_90 = adStack_130[0xb];
        adStack_d0[1] = adStack_130[4];
        adStack_d0[0] = adStack_130[3];
        adStack_d0[3] = adStack_130[6];
        adStack_d0[2] = adStack_130[5];
        pdVar3 = adStack_d0;
        pdVar2 = pdVar11;
        do {
          lVar5 = 0;
          do {
            *(undefined8 *)((long)pdVar2 + lVar5) = *(undefined8 *)((long)pdVar3 + lVar5);
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x18);
          lVar1 = lVar1 + 1;
          pdVar2 = pdVar2 + 3;
          pdVar3 = pdVar3 + 3;
        } while (lVar1 != 3);
        lVar1 = 0x48;
        do {
          *(undefined8 *)((long)pdVar11 + lVar1) = *(undefined8 *)((long)adStack_d0 + lVar1);
          lVar1 = lVar1 + 8;
        } while (lVar1 != 0x60);
        pdVar10 = pdVar10 + 0xc;
        if ((long)pdVar10 - *plVar8 == 0xfc0) {
          plVar8 = plVar8 + 1;
          pdVar10 = (double *)*plVar8;
        }
        pdVar11 = pdVar11 + 0xc;
        if ((long)pdVar11 - *plVar9 == 0xfc0) {
          plVar9 = plVar9 + 1;
          pdVar11 = (double *)*plVar9;
        }
      } while (pdVar10 != pdVar4);
    }
  }
  lVar1 = 0;
  pdVar10 = adStack_258;
  do {
    pdVar10 = pdVar10 + 3;
    lVar5 = 0;
    pdVar4 = param_1;
    do {
      lVar6 = 0;
      dVar12 = 0.0;
      pdVar11 = pdVar4;
      do {
        dVar13 = *(double *)((long)pdVar10 + lVar6);
        dVar14 = *pdVar11;
        dVar12 = dVar12 + dVar14 * dVar13;
        lVar6 = lVar6 + 8;
        pdVar11 = pdVar11 + 3;
      } while (lVar6 != 0x18);
      adStack_190[lVar5 + lVar1 * 3 + 3] = dVar12;
      lVar5 = lVar5 + 1;
      pdVar4 = pdVar4 + 1;
    } while (lVar5 != 3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  FUN_10949d9a4(adStack_258 + 3,param_1 + 9);
  lVar1 = 0;
  adStack_2a0[0] = dVar12;
  adStack_2a0[1] = dVar13;
  adStack_2a0[2] = dVar14;
  do {
    *(double *)((long)adStack_d0 + lVar1) =
         *(double *)((long)adStack_1f8 + lVar1) + *(double *)((long)adStack_2a0 + lVar1);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  param_1[5] = adStack_190[8];
  param_1[4] = adStack_190[7];
  param_1[7] = adStack_190[10];
  param_1[6] = adStack_190[9];
  param_1[8] = adStack_190[0xb];
  param_1[1] = adStack_190[4];
  *param_1 = adStack_190[3];
  param_1[3] = adStack_190[6];
  param_1[2] = adStack_190[5];
  param_1[10] = adStack_d0[1];
  param_1[9] = adStack_d0[0];
  param_1[0xb] = adStack_d0[2];
  dVar12 = param_1[0x20];
  if (param_1[0x21] != dVar12) {
    dVar13 = param_1[0x23];
    pdVar10 = (double *)
              (*(long *)((long)dVar12 + ((ulong)dVar13 / 0x2a) * 8) + ((ulong)dVar13 % 0x2a) * 0x60)
    ;
    pdVar4 = (double *)
             (*(long *)((long)dVar12 + ((ulong)((long)param_1[0x24] + (long)dVar13) / 0x2a) * 8) +
             ((ulong)((long)param_1[0x24] + (long)dVar13) % 0x2a) * 0x60);
    if (pdVar10 != pdVar4) {
      plVar8 = (long *)((long)dVar12 + ((ulong)dVar13 / 0x2a) * 8);
      plVar9 = plVar8;
      pdVar11 = pdVar10;
      do {
        lVar1 = 0;
        pdVar2 = &dStack_1d8;
        do {
          lVar5 = 0;
          pdVar3 = pdVar10;
          do {
            lVar6 = 0;
            dVar12 = 0.0;
            pdVar7 = pdVar3;
            do {
              dVar13 = *(double *)((long)pdVar2 + lVar6);
              dVar14 = *pdVar7;
              dVar12 = dVar12 + dVar14 * dVar13;
              lVar6 = lVar6 + 8;
              pdVar7 = pdVar7 + 3;
            } while (lVar6 != 0x18);
            adStack_2a0[lVar5 + lVar1 * 3] = dVar12;
            lVar5 = lVar5 + 1;
            pdVar3 = pdVar3 + 1;
          } while (lVar5 != 3);
          lVar1 = lVar1 + 1;
          pdVar2 = pdVar2 + 3;
        } while (lVar1 != 3);
        FUN_10949d9a4(&dStack_1d8,pdVar10 + 9);
        lVar1 = 0;
        adStack_130[3] = dVar12;
        adStack_130[4] = dVar13;
        adStack_130[5] = dVar14;
        do {
          *(double *)((long)adStack_d0 + lVar1) =
               *(double *)((long)adStack_190 + lVar1) +
               *(double *)((long)adStack_130 + lVar1 + 0x18);
          adStack_88[2] = adStack_d0[2];
          adStack_88[1] = adStack_d0[1];
          adStack_88[0] = adStack_d0[0];
          lVar1 = lVar1 + 8;
        } while (lVar1 != 0x18);
        lVar1 = 0;
        uStack_a8 = adStack_2a0[5];
        uStack_b0 = adStack_2a0[4];
        uStack_98 = adStack_2a0[7];
        uStack_a0 = adStack_2a0[6];
        uStack_90 = adStack_2a0[8];
        adStack_d0[1] = adStack_2a0[1];
        adStack_d0[0] = adStack_2a0[0];
        adStack_d0[3] = adStack_2a0[3];
        adStack_d0[2] = adStack_2a0[2];
        pdVar3 = adStack_d0;
        pdVar2 = pdVar11;
        do {
          lVar5 = 0;
          do {
            *(undefined8 *)((long)pdVar2 + lVar5) = *(undefined8 *)((long)pdVar3 + lVar5);
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x18);
          lVar1 = lVar1 + 1;
          pdVar2 = pdVar2 + 3;
          pdVar3 = pdVar3 + 3;
        } while (lVar1 != 3);
        lVar1 = 0x48;
        do {
          *(undefined8 *)((long)pdVar11 + lVar1) = *(undefined8 *)((long)adStack_d0 + lVar1);
          lVar1 = lVar1 + 8;
        } while (lVar1 != 0x60);
        pdVar10 = pdVar10 + 0xc;
        if ((long)pdVar10 - *plVar8 == 0xfc0) {
          plVar8 = plVar8 + 1;
          pdVar10 = (double *)*plVar8;
        }
        pdVar11 = pdVar11 + 0xc;
        if ((long)pdVar11 - *plVar9 == 0xfc0) {
          plVar9 = plVar9 + 1;
          pdVar11 = (double *)*plVar9;
        }
      } while (pdVar10 != pdVar4);
    }
  }
  return;
}



/* Entry: 10949d89c; end: 10949d9a3;  */

undefined8 FUN_10949d89c(undefined8 param_1,long *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double adStack_48 [3];
  
  puVar3 = (undefined8 *)param_2[1];
  if ((ulong)(param_2[2] - (long)puVar3 >> 3) < param_3) {
    lVar8 = (long)puVar3 - *param_2;
    uVar1 = param_3 + (lVar8 >> 3);
    if (uVar1 >> 0x3d != 0) {
      FUN_1092d2ba8();
      lVar8 = 0;
      do {
        lVar7 = 0;
        dVar9 = 0.0;
        do {
          dVar9 = dVar9 + *(double *)(param_3 + lVar7) * *(double *)((long)param_2 + lVar7);
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x18);
        adStack_48[lVar8] = dVar9;
        lVar8 = lVar8 + 1;
        param_2 = param_2 + 3;
      } while (lVar8 != 3);
      return adStack_48[0];
    }
    uVar5 = param_2[2] - *param_2;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_2;
      FUN_1092d2bbc();
    }
    puVar3 = (undefined8 *)((long)plVar2 + lVar8);
    lVar8 = param_3 << 3;
    param_1 = *param_4;
    puVar4 = puVar3;
    do {
      *puVar4 = param_1;
      lVar8 = lVar8 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar8 != 0);
    lVar7 = (long)puVar3 - (param_2[1] - *param_2);
    _memcpy(lVar7);
    lVar8 = *param_2;
    *param_2 = lVar7;
    param_2[1] = (long)(puVar3 + param_3);
    param_2[2] = (long)(plVar2 + uVar6);
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return param_1;
    }
  }
  else {
    puVar4 = puVar3;
    if (param_3 != 0) {
      param_1 = *param_4;
      lVar8 = param_3 << 3;
      puVar4 = puVar3 + param_3;
      do {
        *puVar3 = param_1;
        lVar8 = lVar8 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar8 != 0);
    }
    param_2[1] = (long)puVar4;
  }
  return param_1;
}



/* Entry: 10949d9a4; end: 10949d9f3;  */

double FUN_10949d9a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double adStack_18 [3];
  
  lVar1 = 0;
  do {
    lVar2 = 0;
    dVar3 = 0.0;
    do {
      dVar3 = dVar3 + *(double *)(param_2 + lVar2) * *(double *)(param_1 + lVar2);
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x18);
    adStack_18[lVar1] = dVar3;
    lVar1 = lVar1 + 1;
    param_1 = param_1 + 0x18;
  } while (lVar1 != 3);
  return adStack_18[0];
}



/* Entry: 10949d9f4; end: 10949dc13;  */

/* WARNING: Possible PIC construction at 0x00010949db90: Changing call to branch */

void FUN_10949d9f4(long *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar11;
  undefined8 *puVar12;
  undefined8 unaff_x22;
  long lVar13;
  undefined1 *unaff_x29;
  undefined1 *puVar14;
  undefined8 unaff_x30;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  
  puVar2 = auStack_60;
  puVar14 = &stack0xfffffffffffffff0;
  lVar11 = param_1[1];
  lVar8 = param_1[2];
  lVar13 = 0;
  if (lVar8 != lVar11) {
    lVar13 = (lVar8 - lVar11 >> 3) * 0x2a + -1;
  }
  if ((ulong)(lVar13 - (param_1[5] + param_1[4])) < 0x2a) {
    lVar13 = *param_1;
    uVar5 = param_1[3] - lVar13;
    if ((ulong)(lVar8 - lVar11) < uVar5) {
      plVar3 = (long *)0xfc0;
      if (lVar11 == lVar13) {
        __Znwm();
        plStack_50 = plVar3;
        FUN_10949de20(param_1,&plStack_50);
        uVar4 = *(undefined8 *)(param_1[2] + -8);
        param_1[2] = param_1[2] + -8;
        unaff_x30 = 0x10949db94;
        unaff_x19 = param_1;
        goto FUN_10949dc14;
      }
      __Znwm();
      plStack_50 = plVar3;
      func_0x00010949dd18(param_1,&plStack_50);
      if (param_1[2] - param_1[1] == 8) {
        lVar13 = 0x15;
      }
      else {
        lVar13 = param_1[4] + 0x2a;
      }
      param_1[4] = lVar13;
    }
    else {
      lVar11 = (long)uVar5 >> 2;
      if (param_1[3] == lVar13) {
        lVar11 = 1;
      }
      plVar3 = param_1;
      plStack_30 = param_1;
      FUN_10949e12c();
      plStack_38 = plVar3 + lVar11;
      uVar4 = 0xfc0;
      plStack_50 = plVar3;
      plStack_48 = plVar3;
      plStack_40 = plVar3;
      __Znwm();
      uStack_58 = uVar4;
      func_0x00010949df24(&plStack_50,&uStack_58);
      lVar13 = param_1[1];
      lVar11 = param_1[2];
      if (lVar13 != lVar11) {
        do {
          func_0x00010949e028(&plStack_50,lVar13);
          lVar13 = lVar13 + 8;
          lVar11 = param_1[2];
        } while (lVar13 != lVar11);
        lVar13 = param_1[1];
      }
      plVar3 = (long *)*param_1;
      lVar8 = param_1[3];
      param_1[1] = (long)plStack_48;
      *param_1 = (long)plStack_50;
      param_1[3] = (long)plStack_38;
      param_1[2] = (long)plStack_40;
      if ((long)plStack_40 - (long)plStack_48 == 8) {
        lVar7 = 0x15;
      }
      else {
        lVar7 = param_1[4] + 0x2a;
      }
      param_1[4] = lVar7;
      plStack_40 = (long *)lVar11;
      if (lVar11 != lVar13) {
        plStack_40 = (long *)(lVar11 + ((lVar13 - lVar11) + 7U & 0xfffffffffffffff8));
      }
      if (plVar3 != (long *)0x0) {
        plStack_50 = plVar3;
        plStack_48 = (long *)lVar13;
        plStack_38 = (long *)lVar8;
        __ZdlPv();
      }
    }
    return;
  }
  param_1[4] = param_1[4] + 0x2a;
  uVar4 = *(undefined8 *)(lVar8 + -8);
  param_1[2] = lVar8 + -8;
  puVar2 = (undefined1 *)register0x00000008;
  puVar14 = unaff_x29;
FUN_10949dc14:
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(long **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar14;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 == (undefined8 *)*param_1) {
    uVar5 = param_1[2];
    uVar1 = param_1[3];
    if (uVar5 < uVar1) {
      lVar13 = (((long)(uVar1 - uVar5) >> 3) + 1) / 2;
      puVar9 = puVar12 + lVar13;
      if (uVar5 - (long)puVar12 != 0) {
        _memmove(puVar9,puVar12,uVar5 - (long)puVar12);
        uVar5 = param_1[2];
      }
      param_1[1] = (long)puVar9;
      param_1[2] = uVar5 + lVar13 * 8;
      puVar12 = puVar9;
    }
    else {
      lVar13 = (long)(uVar1 - (long)puVar12) >> 2;
      if (uVar1 - (long)puVar12 == 0) {
        lVar13 = 1;
      }
      lVar11 = lVar13 * 2;
      plVar3 = param_1;
      FUN_10949e12c();
      puVar12 = (undefined8 *)((long)plVar3 + (lVar11 + 6U & 0xfffffffffffffff8));
      lVar11 = param_1[2] - param_1[1];
      puVar9 = puVar12;
      if (lVar11 != 0) {
        puVar9 = (undefined8 *)((long)puVar12 + lVar11);
        puVar6 = (undefined8 *)param_1[1];
        puVar10 = puVar12;
        do {
          *puVar10 = *puVar6;
          lVar11 = lVar11 + -8;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar11 != 0);
      }
      lVar11 = *param_1;
      *param_1 = (long)plVar3;
      param_1[1] = (long)puVar12;
      param_1[2] = (long)puVar9;
      param_1[3] = (long)(plVar3 + lVar13);
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
        puVar12 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar12[-1] = uVar4;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10949dc14; end: 10949de1f;  */

void FUN_10949dc14(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_10949e12c();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10949de20; end: 10949e12b;  */

void FUN_10949de20(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10949e12c();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10949e12c; end: 10949e15f;  */

void FUN_10949e12c(long param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plStack_70;
  undefined8 *puStack_68;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  lVar5 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = 0;
  if (lVar6 != lVar5) {
    lVar1 = (lVar6 - lVar5 >> 3) * 0x2a + -1;
  }
  uVar7 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  lVar2 = param_2 - (lVar1 - uVar7);
  if (lVar1 - uVar7 <= param_2 && lVar2 != 0) {
    FUN_10949e428(param_1,lVar2);
    lVar5 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
    uVar7 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
  }
  plVar9 = (long *)(lVar5 + (uVar7 / 0x2a) * 8);
  if (lVar6 == lVar5) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(*plVar9 + (uVar7 % 0x2a) * 0x60);
  }
  plStack_70 = plVar9;
  puStack_68 = puVar10;
  FUN_10949e9bc(&plStack_70,param_2);
  while( true ) {
    if (puVar10 == puStack_68) {
      return;
    }
    puVar3 = puVar10;
    puVar4 = puVar10;
    puVar8 = puStack_68;
    if (plVar9 != plStack_70) {
      puVar8 = (undefined8 *)(*plVar9 + 0xfc0);
    }
    for (; puVar3 != puVar8; puVar3 = puVar3 + 0xc) {
      uVar11 = *param_3;
      uVar13 = param_3[3];
      uVar12 = param_3[2];
      puVar3[1] = param_3[1];
      *puVar3 = uVar11;
      puVar3[3] = uVar13;
      puVar3[2] = uVar12;
      uVar12 = param_3[5];
      uVar11 = param_3[4];
      uVar14 = param_3[7];
      uVar13 = param_3[6];
      uVar15 = param_3[8];
      uVar17 = param_3[0xb];
      uVar16 = param_3[10];
      puVar3[9] = param_3[9];
      puVar3[8] = uVar15;
      puVar3[0xb] = uVar17;
      puVar3[10] = uVar16;
      puVar3[5] = uVar12;
      puVar3[4] = uVar11;
      puVar3[7] = uVar14;
      puVar3[6] = uVar13;
      puVar4 = puVar8;
    }
    *(long *)(param_1 + 0x28) =
         *(long *)(param_1 + 0x28) + ((long)puVar4 - (long)puVar10 >> 5) * -0x5555555555555555;
    if (plVar9 == plStack_70) break;
    plVar9 = plVar9 + 1;
    puVar10 = (undefined8 *)*plVar9;
  }
  return;
}



/* Entry: 10949e160; end: 10949e2cf;  */

void FUN_10949e160(long param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plStack_50;
  undefined8 *puStack_48;
  
  lVar5 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = 0;
  if (lVar6 != lVar5) {
    lVar1 = (lVar6 - lVar5 >> 3) * 0x2a + -1;
  }
  uVar7 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  lVar2 = param_2 - (lVar1 - uVar7);
  if (lVar1 - uVar7 <= param_2 && lVar2 != 0) {
    FUN_10949e428(param_1,lVar2);
    lVar5 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
    uVar7 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
  }
  plVar9 = (long *)(lVar5 + (uVar7 / 0x2a) * 8);
  if (lVar6 == lVar5) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(*plVar9 + (uVar7 % 0x2a) * 0x60);
  }
  plStack_50 = plVar9;
  puStack_48 = puVar10;
  FUN_10949e9bc(&plStack_50,param_2);
  while( true ) {
    if (puVar10 == puStack_48) {
      return;
    }
    puVar3 = puVar10;
    puVar4 = puVar10;
    puVar8 = puStack_48;
    if (plVar9 != plStack_50) {
      puVar8 = (undefined8 *)(*plVar9 + 0xfc0);
    }
    for (; puVar3 != puVar8; puVar3 = puVar3 + 0xc) {
      uVar11 = *param_3;
      uVar13 = param_3[3];
      uVar12 = param_3[2];
      puVar3[1] = param_3[1];
      *puVar3 = uVar11;
      puVar3[3] = uVar13;
      puVar3[2] = uVar12;
      uVar12 = param_3[5];
      uVar11 = param_3[4];
      uVar14 = param_3[7];
      uVar13 = param_3[6];
      uVar15 = param_3[8];
      uVar17 = param_3[0xb];
      uVar16 = param_3[10];
      puVar3[9] = param_3[9];
      puVar3[8] = uVar15;
      puVar3[0xb] = uVar17;
      puVar3[10] = uVar16;
      puVar3[5] = uVar12;
      puVar3[4] = uVar11;
      puVar3[7] = uVar14;
      puVar3[6] = uVar13;
      puVar4 = puVar8;
    }
    *(long *)(param_1 + 0x28) =
         *(long *)(param_1 + 0x28) + ((long)puVar4 - (long)puVar10 >> 5) * -0x5555555555555555;
    if (plVar9 == plStack_50) break;
    plVar9 = plVar9 + 1;
    puVar10 = (undefined8 *)*plVar9;
  }
  return;
}



/* Entry: 10949e2d0; end: 10949e427;  */

void FUN_10949e2d0(ulong param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = uVar2 + *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 8);
  plVar1 = (long *)(lVar4 + (uVar3 / 0x2a) * 8);
  if (*(long *)(param_1 + 0x10) == lVar4) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar1 + (uVar3 % 0x2a) * 0x60;
  }
  if (lVar6 != param_3) {
    lVar5 = param_3 - *param_2 >> 5;
    lVar6 = ((long)plVar1 - (long)param_2 >> 3) * 0x2a +
            (lVar6 - *plVar1 >> 5) * -0x5555555555555555 + lVar5 * 0x5555555555555555;
    if (0 < lVar6) {
      plStack_30 = (long *)(lVar4 + (uVar2 / 0x2a) * 8);
      if (*(long *)(param_1 + 0x10) == lVar4) {
        lStack_28 = 0;
      }
      else {
        lStack_28 = *plStack_30 + (uVar2 % 0x2a) * 0x60;
      }
      if (param_3 == lStack_28) {
        lVar4 = 0;
      }
      else {
        lVar4 = ((long)param_2 - (long)plStack_30 >> 3) * 0x2a + lVar5 * -0x5555555555555555 +
                (lStack_28 - *plStack_30 >> 5) * 0x5555555555555555;
      }
      FUN_10949e9bc(&plStack_30,lVar4);
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar6;
      do {
        uVar3 = param_1;
        FUN_10949e950();
      } while ((uVar3 & 1) != 0);
    }
  }
  return;
}



/* Entry: 10949e428; end: 10949e743;  */

void FUN_10949e428(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  
  if (param_1[2] - param_1[1] == 0) {
    param_2 = param_2 + 1;
  }
  uVar7 = param_2 / 0x2a;
  if (param_2 % 0x2a != 0) {
    uVar7 = uVar7 + 1;
  }
  uVar11 = param_1[4];
  uVar6 = uVar11 >> 1;
  uVar8 = uVar7;
  if (uVar6 / 0x15 <= uVar7) {
    uVar8 = uVar6 / 0x15;
  }
  if (uVar7 <= uVar6 / 0x15) {
    param_1[4] = uVar11 + uVar8 * -0x2a;
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      lStack_70 = *(long *)param_1[1];
      param_1[1] = (long)((long *)param_1[1] + 1);
      FUN_10949e744(param_1,&lStack_70);
    }
    return;
  }
  uVar6 = uVar7 - uVar8;
  lVar4 = param_1[2] - param_1[1] >> 3;
  if ((ulong)((param_1[3] - *param_1 >> 3) - lVar4) < uVar6) {
    uVar7 = param_1[3] - *param_1 >> 2;
    if (uVar7 <= uVar6 + lVar4) {
      uVar7 = uVar6 + lVar4;
    }
    plStack_50 = param_1;
    if (uVar7 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10949e12c();
    }
    lVar12 = uVar8 * -0x2a;
    plStack_68 = plVar1 + (lVar4 - uVar8);
    plStack_58 = plVar1 + uVar7;
    lStack_70 = (long)plVar1;
    plStack_60 = plStack_68;
    do {
      uVar2 = 0xfc0;
      __Znwm();
      uStack_78 = uVar2;
      func_0x00010949df24(&lStack_70,&uStack_78);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (0x29 < uVar11) {
      lVar4 = param_1[1];
      do {
        func_0x00010949e028(&lStack_70,lVar4);
        lVar4 = param_1[1] + 8;
        param_1[1] = lVar4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar9 = param_1[2];
    lVar4 = -7 - lVar9;
    while (lVar5 = param_1[1], lVar9 != lVar5) {
      lVar9 = lVar9 + -8;
      lVar4 = lVar4 + 8;
      FUN_10949e848(&lStack_70,lVar9);
    }
    lVar3 = *param_1;
    lVar14 = param_1[3];
    lVar13 = param_1[2];
    param_1[1] = (long)plStack_68;
    *param_1 = lStack_70;
    param_1[3] = (long)plStack_58;
    param_1[2] = (long)plStack_60;
    param_1[4] = param_1[4] + lVar12;
    plStack_60 = (long *)lVar13;
    if (lVar9 != lVar13) {
      plStack_60 = (long *)(lVar13 + (-(lVar13 + lVar4) & 0xfffffffffffffff8U));
    }
    if (lVar3 == 0) {
      return;
    }
    lStack_70 = lVar3;
    plStack_68 = (long *)lVar5;
    plStack_58 = (long *)lVar14;
    __ZdlPv();
    return;
  }
  uVar10 = uVar8;
  if (uVar6 != 0) {
    do {
      uVar10 = uVar7;
      if (param_1[3] == param_1[2]) goto LAB_10949e644;
      lVar4 = 0xfc0;
      __Znwm();
      lStack_70 = lVar4;
      func_0x00010949de20(param_1,&lStack_70);
      uVar6 = uVar6 - 1;
      uVar7 = uVar10 - 1;
    } while (uVar6 != 0);
    uVar11 = param_1[4];
    uVar10 = uVar8;
  }
LAB_10949e684:
  param_1[4] = uVar11 + uVar10 * -0x2a;
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    lStack_70 = *(long *)param_1[1];
    param_1[1] = (long)((long *)param_1[1] + 1);
    FUN_10949e744(param_1,&lStack_70);
  }
  return;
LAB_10949e644:
  do {
    lVar4 = 0xfc0;
    __Znwm();
    lStack_70 = lVar4;
    func_0x00010949dd18(param_1,&lStack_70);
    lVar4 = 0x29;
    if (param_1[2] - param_1[1] != 8) {
      lVar4 = 0x2a;
    }
    uVar11 = lVar4 + param_1[4];
    param_1[4] = uVar11;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  goto LAB_10949e684;
}



/* Entry: 10949e744; end: 10949e847;  */

void FUN_10949e744(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_10949e12c();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10949e848; end: 10949e94f;  */

void FUN_10949e848(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_10949e12c();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 10949e950; end: 10949e9bb;  */

bool FUN_10949e950(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = 0;
  if (lVar2 != *(long *)(param_1 + 8)) {
    lVar1 = (lVar2 - *(long *)(param_1 + 8) >> 3) * 0x2a + -1;
  }
  uVar3 = lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  if (0x53 < uVar3) {
    __ZdlPv(*(undefined8 *)(lVar2 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  return 0x53 < uVar3;
}



/* Entry: 10949e9bc; end: 10949ea6f;  */

void FUN_10949e9bc(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    plVar1 = (long *)*param_1;
    uVar3 = param_2 + (param_1[1] - *plVar1 >> 5) * -0x5555555555555555;
    if ((long)uVar3 < 1) {
      uVar4 = (0x29 - uVar3) / 0x2a;
      *param_1 = (long)(plVar1 + -uVar4);
      lVar2 = plVar1[-uVar4] + (uVar4 * 0x2a - (0x29 - uVar3)) * 0x60 + 0xf60;
    }
    else {
      *param_1 = (long)(plVar1 + uVar3 / 0x2a);
      lVar2 = plVar1[uVar3 / 0x2a] + (uVar3 % 0x2a) * 0x60;
    }
    param_1[1] = lVar2;
  }
  return;
}



/* Entry: 10949ea70; end: 10949ee1b;  */

void FUN_10949ea70(double param_1,double param_2,double param_3,double *param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double adStack_108 [7];
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double adStack_a8 [7];
  
  FUN_10949af98(param_5);
  lVar1 = 0;
  adStack_a8[0] = param_1;
  adStack_a8[1] = param_2;
  adStack_a8[2] = param_3;
  dVar2 = 0.0;
  do {
    dVar2 = dVar2 + *(double *)((long)adStack_a8 + lVar1) * *(double *)((long)adStack_a8 + lVar1);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  dVar2 = SQRT(dVar2);
  dVar11 = 0.5;
  if (1e-05 < dVar2) {
    dVar11 = dVar2 * 0.5;
    _sin();
    dVar11 = dVar11 / dVar2;
  }
  lVar1 = 0;
  do {
    *(double *)((long)adStack_108 + lVar1 + 0x18) = *(double *)((long)adStack_a8 + lVar1) * -0.5;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  lVar1 = 0;
  adStack_a8[3] = adStack_108[3];
  adStack_a8[4] = adStack_108[4];
  adStack_a8[5] = adStack_108[5];
  dVar5 = 0.0;
  do {
    dVar3 = *(double *)((long)adStack_a8 + lVar1 + 0x18);
    dVar5 = dVar5 + dVar3 * dVar3;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  if (1e-08 <= dVar5) {
    if (1e-06 <= dVar5) {
      dVar3 = SQRT(dVar5);
      dVar4 = 1.0 / dVar3;
      ___sincos_stret();
      dVar3 = dVar3 * dVar4;
      dVar4 = (1.0 - dVar5) * dVar4 * dVar4;
    }
    else {
      dVar4 = dVar5 * -0.041666666666666664 + 0.5;
      dVar3 = (dVar5 * -0.05 + 1.0) * dVar5 * -0.16666666666666666 + 1.0;
    }
  }
  else {
    dVar3 = dVar5 * -0.16666666666666666 + 1.0;
    dVar4 = 0.5;
  }
  dStack_d0 = 1.0 - (adStack_108[3] * adStack_108[3] + adStack_108[5] * adStack_108[5]) * dVar4;
  dStack_b0 = 1.0 - (adStack_108[3] * adStack_108[3] + adStack_108[4] * adStack_108[4]) * dVar4;
  dVar8 = adStack_108[3] * adStack_108[4] * dVar4;
  adStack_108[6] = dVar8 + adStack_108[5] * dVar3;
  dVar9 = adStack_108[4] * dVar3;
  dVar10 = adStack_108[3] * adStack_108[5] * dVar4;
  dVar6 = dVar10 - dVar9;
  dVar7 = adStack_108[3] * dVar3;
  dVar5 = adStack_108[4] * adStack_108[5] * dVar4;
  dStack_c8 = dVar5 - dVar7;
  dVar5 = dVar5 + dVar7;
  param_5 = param_5 + 0x48;
  adStack_108[3] = 1.0 - (adStack_108[4] * adStack_108[4] + adStack_108[5] * adStack_108[5]) * dVar4
  ;
  adStack_108[4] = dVar8 - adStack_108[5] * dVar3;
  adStack_108[5] = dVar10 + dVar9;
  dStack_c0 = dVar6;
  dStack_b8 = dVar5;
  FUN_10949d9a4(adStack_108 + 3,param_5);
  adStack_108[0] = dVar5;
  adStack_108[1] = dVar6;
  adStack_108[2] = dVar7;
  lVar1 = 0;
  if (dVar2 <= 0.001) {
    dVar2 = 0.0;
    do {
      dVar2 = dVar2 + *(double *)((long)adStack_a8 + lVar1) * *(double *)(param_5 + lVar1);
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x18);
    lVar1 = 0;
    do {
      *(double *)((long)adStack_a8 + lVar1 + 0x18) =
           (dVar2 / 24.0) * *(double *)((long)adStack_a8 + lVar1);
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x18);
    lVar1 = 0;
    do {
      *(double *)((long)adStack_108 + lVar1) =
           *(double *)((long)adStack_108 + lVar1) - *(double *)((long)adStack_a8 + lVar1 + 0x18);
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x18);
  }
  else {
    dVar2 = 0.0;
    do {
      dVar2 = dVar2 + *(double *)((long)adStack_a8 + lVar1) * *(double *)(param_5 + lVar1);
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x18);
    lVar1 = 0;
    dVar5 = 0.0;
    do {
      dVar5 = dVar5 + *(double *)((long)adStack_a8 + lVar1) * *(double *)((long)adStack_a8 + lVar1);
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x18);
    lVar1 = 0;
    do {
      *(double *)((long)adStack_a8 + lVar1 + 0x18) =
           (((dVar11 * -2.0 + 1.0) * dVar2) / dVar5) * *(double *)((long)adStack_a8 + lVar1);
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x18);
    lVar1 = 0;
    do {
      *(double *)((long)adStack_108 + lVar1) =
           *(double *)((long)adStack_108 + lVar1) - *(double *)((long)adStack_a8 + lVar1 + 0x18);
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x18);
  }
  lVar1 = 0;
  do {
    *(double *)((long)adStack_108 + lVar1) =
         *(double *)((long)adStack_108 + lVar1) / (dVar11 + dVar11);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  param_4[1] = adStack_108[1];
  *param_4 = adStack_108[0];
  param_4[2] = adStack_108[2];
  param_4[4] = adStack_a8[1];
  param_4[3] = adStack_a8[0];
  param_4[5] = adStack_a8[2];
  return;
}



/* Entry: 10949ee1c; end: 10949eeb3;  */

long * FUN_10949ee1c(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x15;
  }
  else {
    if (uVar2 != 2) goto LAB_10949ee98;
    lVar3 = 0x2a;
  }
  param_1[4] = lVar3;
LAB_10949ee98:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10949eeb4; end: 10949eeff;  */

long * FUN_10949eeb4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10949ef00; end: 10949f0cf;  */

undefined8 * FUN_10949ef00(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = param_2;
  uVar1 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar1;
  uVar2 = param_3[3];
  uVar1 = param_3[2];
  uVar4 = param_3[5];
  uVar3 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  param_1[9] = param_3[8];
  param_1[8] = uVar6;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0x3ff0000000000000;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3ff0000000000000;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  param_1[0x31] = &PTR_FUN_110af4c80;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = &PTR_FUN_110af4c80;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  FUN_10949f0d0();
  return param_1;
}



/* Entry: 10949f0d0; end: 10949f52b;  */

void FUN_10949f0d0(long *param_1)

{
  double *pdVar1;
  code *pcVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 *puVar5;
  uint uVar6;
  double **ppdVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  double *pdVar14;
  long lVar15;
  double *pdVar16;
  double dVar17;
  double *pdVar18;
  double dVar19;
  double dVar20;
  double *pdStack_d0;
  undefined8 uStack_c8;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar13 = param_1[0x49];
  lVar15 = param_1[0x48];
  while (lVar13 != lVar15) {
    lVar13 = lVar13 + -0xb0;
    FUN_10939c9a0(lVar13);
  }
  param_1[0x49] = lVar15;
  FUN_109454674(param_1 + 0x4b);
  pdVar3 = *(double **)(*param_1 + 8);
  dVar17 = *pdVar3;
  if ((int)((ulong)((long)pdVar3[1] - (long)dVar17) >> 5) < 1) {
    ppdVar7 = (double **)0x0;
  }
  else {
    uVar8 = 0;
    ppdVar7 = (double **)0x0;
    iVar10 = 0x7fffffff;
    puVar5 = (undefined8 *)((long)dVar17 + 0x10);
    do {
      iVar11 = (int)*puVar5;
      iVar12 = (int)((ulong)*puVar5 >> 0x20);
      if (iVar11 <= iVar12) {
        iVar12 = iVar11;
      }
      iVar11 = iVar12 + -400;
      if (iVar12 + -400 < 0) {
        iVar11 = 400 - iVar12;
      }
      uVar6 = (uint)uVar8;
      if (iVar10 <= iVar11) {
        uVar6 = (uint)ppdVar7;
        iVar11 = iVar10;
      }
      iVar10 = iVar11;
      ppdVar7 = (double **)(ulong)uVar6;
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 4;
    } while (((ulong)((long)pdVar3[1] - (long)dVar17) >> 5 & 0x7fffffff) != uVar8);
  }
  dStack_98 = *(double *)((long)dVar17 + 0x10);
  uStack_a0 = (long *)0x0;
  FUN_10939c0d4(&lStack_88,pdVar3,ppdVar7,ppdVar7,&uStack_a0,10,0x1e);
  for (lVar13 = lStack_88; lVar13 != lStack_80; lVar13 = lVar13 + 0xb0) {
    uStack_c8 = *(undefined8 *)(lVar13 + 0x18);
    pdStack_d0 = *(double **)(lVar13 + 0x10);
    (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&pdStack_d0,&uStack_a0,&dStack_b8);
    pdVar3 = (double *)0x68;
    __Znwm();
    *pdVar3 = 0.0;
    pdVar3[2] = dStack_98;
    pdVar3[1] = (double)uStack_a0;
    pdVar3[3] = dStack_90;
    pdVar3[5] = dStack_b0;
    pdVar3[4] = dStack_b8;
    pdVar3[6] = dStack_a8;
    *(undefined4 *)(pdVar3 + 7) = 0x80000000;
    *(undefined1 *)(pdVar3 + 8) = 0;
    *(undefined1 *)(pdVar3 + 9) = 0;
    pdVar3[10] = 0.0;
    pdVar3[0xb] = 0.0;
    *(undefined4 *)(pdVar3 + 10) = 3;
    *(undefined1 *)(pdVar3 + 0xc) = 1;
    pdStack_d0 = pdVar3;
    FUN_10939c084(param_1 + 0x48,lVar13);
    ppdVar7 = &pdStack_d0;
    FUN_1094269c0(param_1 + 0x4b);
    pdVar3 = pdStack_d0;
    pdStack_d0 = (double *)0x0;
    if (pdVar3 != (double *)0x0) {
      __ZdlPv();
    }
  }
  if (param_1[0x4c] - param_1[0x4b] == 0) {
    pdVar14 = (double *)0x0;
    pdVar16 = (double *)0x0;
  }
  else {
    pdVar3 = (double *)(param_1[0x4c] - param_1[0x4b] >> 3);
    if ((ulong)pdVar3 >> 0x3c != 0) {
      FUN_1094a17bc();
LAB_10949f4d0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10949f4d4);
      (*pcVar2)();
    }
    FUN_1094a17d0();
    pdVar14 = pdVar3;
    pdVar16 = pdVar3;
    if (param_1[0x4c] != param_1[0x4b]) {
      dVar17 = 0.0;
      lVar13 = 0x20;
      pdVar18 = pdVar3 + (long)ppdVar7 * 2;
      pdVar4 = pdVar3;
      do {
        dVar20 = -*(double *)(param_1[0x48] + lVar13);
        if (pdVar16 < pdVar18) {
          *pdVar16 = dVar20;
          pdVar16[1] = dVar17;
          pdVar14 = pdVar4;
        }
        else {
          lVar15 = (long)pdVar16 - (long)pdVar4;
          uVar8 = (lVar15 >> 4) + 1;
          if (uVar8 >> 0x3c != 0) {
            FUN_1094a17bc();
            goto LAB_10949f4d0;
          }
          uVar9 = (long)pdVar18 - (long)pdVar4 >> 3;
          if (uVar9 <= uVar8) {
            uVar9 = uVar8;
          }
          if (0x7fffffffffffffef < (ulong)((long)pdVar18 - (long)pdVar4)) {
            uVar9 = 0xfffffffffffffff;
          }
          FUN_1094a17d0();
          pdVar16 = (double *)(uVar9 + lVar15);
          pdVar18 = (double *)(uVar9 + (long)ppdVar7 * 0x10);
          *pdVar16 = dVar20;
          pdVar16[1] = dVar17;
          pdVar14 = pdVar16 + (lVar15 >> 4) * -2;
          pdVar3 = pdVar14;
          ppdVar7 = (double **)pdVar4;
          _memcpy(pdVar14,pdVar4,lVar15);
          if (pdVar4 != (double *)0x0) {
            __ZdlPv(pdVar4);
            pdVar3 = pdVar4;
          }
        }
        pdVar16 = pdVar16 + 2;
        dVar17 = (double)((long)dVar17 + 1);
        lVar13 = lVar13 + 0xb0;
        pdVar4 = pdVar14;
      } while ((ulong)dVar17 < (ulong)(param_1[0x4c] - param_1[0x4b] >> 3));
    }
  }
  FUN_10937eb64();
  dVar17 = (double)((long)pdVar16 - (long)pdVar14 >> 4);
  if (1 < (long)dVar17) {
    dStack_98 = NAN;
    uStack_a0 = (long *)0x0;
    dVar20 = dVar17;
    pdVar4 = pdVar14;
    for (pdVar18 = pdVar14; pdVar18 < pdVar16 + -2; pdVar18 = pdVar18 + 2) {
      dVar20 = (double)((long)dVar20 + -1);
      dStack_b8 = 0.0;
      puVar5 = &uStack_a0;
      dStack_b0 = dVar20;
      func_0x000109453a74(puVar5,pdVar3,&dStack_b8);
      if (puVar5 != (undefined8 *)0x0) {
        pdVar1 = pdVar4 + (long)puVar5 * 2;
        dVar19 = *pdVar18;
        *pdVar18 = *pdVar1;
        *pdVar1 = dVar19;
        dVar19 = pdVar18[1];
        pdVar18[1] = pdVar1[1];
        pdVar1[1] = dVar19;
      }
      pdVar4 = pdVar4 + 2;
    }
  }
  lVar13 = 0;
  if (pdVar16 != pdVar14) {
    lVar13 = LZCOUNT(dVar17) * -2 + 0x7e;
  }
  FUN_1094a1804(pdVar14,pdVar16,lVar13,1);
  param_1[0x4f] = param_1[0x4e];
  func_0x000107c27e9c(param_1 + 0x4e,param_1[0x4c] - param_1[0x4b] >> 3);
  for (pdVar3 = pdVar14; pdVar16 != pdVar3; pdVar3 = pdVar3 + 2) {
    uVar8 = (ulong)uStack_a0 >> 0x20;
    uStack_a0 = (long *)CONCAT44((int)uVar8,SUB84(pdVar3[1],0));
    FUN_1092d7128(param_1 + 0x4e,&uStack_a0);
  }
  if (pdVar14 != (double *)0x0) {
    __ZdlPv(pdVar14);
  }
  uStack_a0 = &lStack_88;
  FUN_10939cb28(&uStack_a0);
  return;
}



/* Entry: 10949f52c; end: 1094a000f;  */

undefined8 * FUN_10949f52c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong *puVar24;
  undefined1 *puVar25;
  long *plVar26;
  ulong unaff_x28;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  float fStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  *param_1 = *param_2;
  uVar27 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar27;
  uVar28 = param_2[4];
  uVar27 = param_2[3];
  uVar30 = param_2[6];
  uVar29 = param_2[5];
  uVar32 = param_2[8];
  uVar31 = param_2[7];
  param_1[9] = param_2[9];
  param_1[8] = uVar32;
  param_1[7] = uVar31;
  param_1[6] = uVar30;
  param_1[5] = uVar29;
  param_1[4] = uVar28;
  param_1[3] = uVar27;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  uVar27 = param_2[0xc];
  uVar29 = param_2[0xf];
  uVar28 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar27;
  param_1[0xf] = uVar29;
  param_1[0xe] = uVar28;
  uVar28 = param_2[0x11];
  uVar27 = param_2[0x10];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar28;
  param_1[0x10] = uVar27;
  uVar30 = param_2[0x19];
  uVar29 = param_2[0x18];
  uVar28 = param_2[0x1b];
  uVar27 = param_2[0x1a];
  uVar32 = param_2[0x17];
  uVar31 = param_2[0x16];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x19] = uVar30;
  param_1[0x18] = uVar29;
  param_1[0x1b] = uVar28;
  param_1[0x1a] = uVar27;
  param_1[0x17] = uVar32;
  param_1[0x16] = uVar31;
  uVar27 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar27;
  uVar27 = param_2[0x1e];
  uVar29 = param_2[0x21];
  uVar28 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar27;
  param_1[0x21] = uVar29;
  param_1[0x20] = uVar28;
  uVar28 = param_2[0x23];
  uVar27 = param_2[0x22];
  param_1[0x24] = param_2[0x24];
  param_1[0x23] = uVar28;
  param_1[0x22] = uVar27;
  uVar30 = param_2[0x2b];
  uVar29 = param_2[0x2a];
  uVar28 = param_2[0x2d];
  uVar27 = param_2[0x2c];
  uVar32 = param_2[0x29];
  uVar31 = param_2[0x28];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2b] = uVar30;
  param_1[0x2a] = uVar29;
  param_1[0x2d] = uVar28;
  param_1[0x2c] = uVar27;
  param_1[0x29] = uVar32;
  param_1[0x28] = uVar31;
  uVar27 = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x26] = uVar27;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((long)param_1 + 0x184) = *(undefined4 *)((long)param_2 + 0x184);
  FUN_10939d4b8(param_1 + 0x31,param_2 + 0x31);
  FUN_10939d4b8(param_1 + 0x35,param_2 + 0x35);
  param_1[0x3a] = param_2[0x3a];
  uVar27 = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3c] = uVar27;
  uVar27 = param_2[0x3e];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x3e] = uVar27;
  uVar27 = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x40] = uVar27;
  uVar27 = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x42] = uVar27;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  FUN_10937da58(param_1 + 0x45,param_2 + 0x45);
  puVar6 = param_1 + 0x48;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  puVar19 = (undefined8 *)param_2[0x48];
  puVar20 = (undefined8 *)param_2[0x49];
  puStack_80 = (undefined8 *)((ulong)puStack_80 & 0xffffffffffffff00);
  lVar8 = (long)puVar20 - (long)puVar19;
  puStack_88 = puVar6;
  if (lVar8 != 0) {
    uVar7 = (lVar8 >> 4) * 0x2e8ba2e8ba2e8ba3;
    if (0x1745d1745d1745d < uVar7) {
      FUN_10939c884();
      goto LAB_10949fe9c;
    }
    FUN_10939c898(puVar6,uVar7,0);
    param_1[0x48] = puVar6;
    param_1[0x49] = puVar6;
    param_1[0x4a] = (long)puVar6 + lVar8;
    do {
      uVar27 = *puVar19;
      puVar6[1] = puVar19[1];
      *puVar6 = uVar27;
      uVar27 = puVar19[2];
      puVar6[3] = puVar19[3];
      puVar6[2] = uVar27;
      uVar28 = puVar19[5];
      uVar27 = puVar19[4];
      uVar29 = puVar19[6];
      uVar31 = puVar19[9];
      uVar30 = puVar19[8];
      puVar6[7] = puVar19[7];
      puVar6[6] = uVar29;
      puVar6[9] = uVar31;
      puVar6[8] = uVar30;
      puVar6[5] = uVar28;
      puVar6[4] = uVar27;
      uVar28 = puVar19[0xb];
      uVar27 = puVar19[10];
      uVar29 = puVar19[0xc];
      puVar6[0xd] = puVar19[0xd];
      puVar6[0xc] = uVar29;
      uVar29 = puVar19[0xe];
      puVar6[0xf] = puVar19[0xf];
      puVar6[0xe] = uVar29;
      lVar8 = puVar19[0x11];
      uVar30 = puVar19[0x11];
      uVar29 = puVar19[0x10];
      puVar6[0x14] = 0;
      puVar6[0x11] = uVar30;
      puVar6[0x10] = uVar29;
      puVar6[0x12] = puVar6 + 0xb;
      puVar6[0x13] = puVar6 + 0x14;
      puVar6[0x15] = 0;
      puVar6[0xb] = uVar28;
      puVar6[10] = uVar27;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x14);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(int *)((long)puVar19 + 0x54) < 3) {
        puVar9 = (undefined8 *)puVar19[0x13];
        puVar15 = (undefined8 *)puVar6[0x13];
        *puVar15 = *puVar9;
        puVar15[1] = puVar9[1];
      }
      else {
        *(undefined4 *)((long)puVar6 + 0x54) = 0;
        func_0x000109a84868();
      }
      puVar19 = puVar19 + 0x16;
      puVar6 = puVar6 + 0x16;
    } while (puVar19 != puVar20);
    param_1[0x49] = puVar6;
  }
  plVar18 = param_1 + 0x4b;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  *plVar18 = 0;
  FUN_109285684(param_1 + 0x4e,param_2[0x4e],param_2[0x4f],
                (long)(param_2[0x4f] - param_2[0x4e]) >> 2);
  puVar6 = param_1 + 0x51;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = 0;
  *puVar6 = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  FUN_10949a328(plVar18,(long)(param_2[0x4c] - param_2[0x4b]) >> 3);
  FUN_10949a3c0(puVar6,((long)(param_2[0x52] - param_2[0x51]) >> 4) * 0x4ec4ec4ec4ec4ec5);
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  fStack_90 = 1.0;
  puVar24 = (ulong *)param_2[0x4b];
  puVar10 = (ulong *)param_2[0x4c];
  if (puVar24 != puVar10) {
    do {
      puVar20 = (undefined8 *)*puVar24;
      puVar19 = (undefined8 *)0x68;
      __Znwm();
      uVar7 = uStack_a8;
      *puVar19 = *puVar20;
      uVar28 = puVar20[2];
      uVar27 = puVar20[1];
      puVar19[3] = puVar20[3];
      puVar19[2] = uVar28;
      puVar19[1] = uVar27;
      uVar28 = puVar20[5];
      uVar27 = puVar20[4];
      puVar19[6] = puVar20[6];
      puVar19[5] = uVar28;
      puVar19[4] = uVar27;
      uVar28 = puVar20[8];
      uVar27 = puVar20[7];
      uVar30 = puVar20[10];
      uVar29 = puVar20[9];
      uVar31 = *(undefined8 *)((long)puVar20 + 0x51);
      *(undefined8 *)((long)puVar19 + 0x59) = *(undefined8 *)((long)puVar20 + 0x59);
      *(undefined8 *)((long)puVar19 + 0x51) = uVar31;
      puVar19[10] = uVar30;
      puVar19[9] = uVar29;
      puVar19[8] = uVar28;
      puVar19[7] = uVar27;
      uVar23 = *puVar24;
      uVar13 = ((ulong)(uint)((int)uVar23 << 3) + 8 ^ uVar23 >> 0x20) * -0x622015f714c7d297;
      uVar13 = (uVar23 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
      uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_a8 != 0) {
        uVar11 = uStack_a8 - 1;
        if ((uStack_a8 & uVar11) == 0) {
          unaff_x28 = uVar13 & uVar11;
        }
        else {
          unaff_x28 = uVar13;
          if (uStack_a8 <= uVar13) {
            uVar14 = 0;
            if (uStack_a8 != 0) {
              uVar14 = uVar13 / uStack_a8;
            }
            unaff_x28 = uVar13 - uVar14 * uStack_a8;
          }
        }
        puVar20 = *(undefined8 **)(lStack_b0 + unaff_x28 * 8);
        if (puVar20 != (undefined8 *)0x0) {
          for (plVar26 = (long *)*puVar20; plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
            uVar14 = plVar26[1];
            if (uVar14 == uVar13) {
              if (plVar26[2] == uVar23) goto LAB_10949fc20;
            }
            else {
              if ((uStack_a8 & uVar11) == 0) {
                uVar14 = uVar14 & uVar11;
              }
              else if (uStack_a8 <= uVar14) {
                uVar4 = 0;
                if (uStack_a8 != 0) {
                  uVar4 = uVar14 / uStack_a8;
                }
                uVar14 = uVar14 - uVar4 * uStack_a8;
              }
              if (uVar14 != unaff_x28) break;
            }
          }
        }
      }
      plVar26 = (long *)0x20;
      __Znwm();
      *plVar26 = 0;
      plVar26[1] = uVar13;
      plVar26[2] = uVar23;
      plVar26[3] = 0;
      if ((uVar7 == 0) || (fStack_90 * (float)uVar7 < (float)(uStack_98 + 1))) {
        uVar23 = 1;
        if (2 < uVar7) {
          uVar23 = (ulong)((uVar7 & uVar7 - 1) != 0);
        }
        uVar23 = uVar23 | uVar7 << 1;
        uVar11 = (ulong)((float)(uStack_98 + 1) / fStack_90);
        if (uVar23 <= uVar11) {
          uVar23 = uVar11;
        }
        uVar11 = uVar7;
        if (uVar23 - 1 == 0) {
          uVar23 = 2;
        }
        else if ((uVar23 & uVar23 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar11 = uStack_a8;
        }
        uVar7 = uVar23;
        if (uVar11 < uVar23) {
LAB_10949fa30:
          if (uVar7 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_10949fe9c;
          }
          lVar8 = uVar7 << 3;
          __Znwm();
          bVar3 = lStack_b0 != 0;
          lStack_b0 = lVar8;
          if (bVar3) {
            __ZdlPv();
          }
          uVar23 = 0;
          do {
            *(undefined8 *)(lStack_b0 + uVar23 * 8) = 0;
            uVar23 = uVar23 + 1;
          } while (uVar7 != uVar23);
          uStack_a8 = uVar7;
          if (plStack_a0 != (long *)0x0) {
            uVar23 = plStack_a0[1];
            uVar11 = uVar7 - 1;
            if ((uVar7 & uVar11) == 0) {
              uVar23 = uVar23 & uVar11;
            }
            else if (uVar7 <= uVar23) {
              uVar14 = 0;
              if (uVar7 != 0) {
                uVar14 = uVar23 / uVar7;
              }
              uVar23 = uVar23 - uVar14 * uVar7;
            }
            *(long ***)(lStack_b0 + uVar23 * 8) = &plStack_a0;
            plVar16 = (long *)*plStack_a0;
            plVar21 = plStack_a0;
            while (plVar16 != (long *)0x0) {
              uVar14 = plVar16[1];
              if ((uVar7 & uVar11) == 0) {
                uVar14 = uVar14 & uVar11;
              }
              else if (uVar7 <= uVar14) {
                uVar4 = 0;
                if (uVar7 != 0) {
                  uVar4 = uVar14 / uVar7;
                }
                uVar14 = uVar14 - uVar4 * uVar7;
              }
              plVar17 = plVar16;
              if (uVar14 != uVar23) {
                if (*(long *)(lStack_b0 + uVar14 * 8) == 0) {
                  *(long **)(lStack_b0 + uVar14 * 8) = plVar21;
                  uVar23 = uVar14;
                }
                else {
                  *plVar21 = *plVar16;
                  *plVar16 = **(long **)(lStack_b0 + uVar14 * 8);
                  **(undefined8 **)(lStack_b0 + uVar14 * 8) = plVar16;
                  plVar17 = plVar21;
                }
              }
              plVar21 = plVar17;
              plVar16 = (long *)*plVar17;
            }
          }
        }
        else {
          uVar7 = uVar11;
          if (uVar23 < uVar11) {
            uVar7 = (ulong)((float)uStack_98 / fStack_90);
            if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if (1 < uVar7) {
              uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
            }
            lVar8 = lStack_b0;
            if (uVar23 <= uVar7) {
              uVar23 = uVar7;
            }
            uVar7 = uStack_a8;
            if (uVar23 < uVar11) {
              uVar7 = uVar23;
              if (uVar23 != 0) goto LAB_10949fa30;
              lStack_b0 = 0;
              if (lVar8 != 0) {
                __ZdlPv();
              }
              uStack_a8 = 0;
              uVar7 = 0;
            }
          }
        }
        if ((uVar7 & uVar7 - 1) == 0) {
          unaff_x28 = uVar7 - 1 & uVar13;
        }
        else {
          unaff_x28 = uVar13;
          if (uVar7 <= uVar13) {
            uVar23 = 0;
            if (uVar7 != 0) {
              uVar23 = uVar13 / uVar7;
            }
            unaff_x28 = uVar13 - uVar23 * uVar7;
          }
        }
      }
      plVar16 = *(long **)(lStack_b0 + unaff_x28 * 8);
      if (plVar16 == (long *)0x0) {
        *plVar26 = (long)plStack_a0;
        *(long ***)(lStack_b0 + unaff_x28 * 8) = &plStack_a0;
        plStack_a0 = plVar26;
        if (*plVar26 != 0) {
          uVar13 = *(ulong *)(*plVar26 + 8);
          if ((uVar7 & uVar7 - 1) == 0) {
            uVar13 = uVar13 & uVar7 - 1;
          }
          else if (uVar7 <= uVar13) {
            uVar23 = 0;
            if (uVar7 != 0) {
              uVar23 = uVar13 / uVar7;
            }
            uVar13 = uVar13 - uVar23 * uVar7;
          }
          plVar16 = (long *)(lStack_b0 + uVar13 * 8);
          goto LAB_10949fc10;
        }
      }
      else {
        *plVar26 = *plVar16;
LAB_10949fc10:
        *plVar16 = (long)plVar26;
      }
      uStack_98 = uStack_98 + 1;
LAB_10949fc20:
      plVar26[3] = (long)puVar19;
      plVar26 = (long *)param_1[0x4c];
      if (plVar26 < (long *)param_1[0x4d]) {
        plVar21 = plVar26 + 1;
        *plVar26 = (long)puVar19;
      }
      else {
        lVar8 = (long)plVar26 - *plVar18;
        uVar7 = (lVar8 >> 3) + 1;
        if (uVar7 >> 0x3d != 0) {
          FUN_10942ff3c();
          goto LAB_10949fe9c;
        }
        uVar23 = (long)param_1[0x4d] - *plVar18;
        uVar13 = (long)uVar23 >> 2;
        if (uVar13 <= uVar7) {
          uVar13 = uVar7;
        }
        if (0x7ffffffffffffff7 < uVar23) {
          uVar13 = 0x1fffffffffffffff;
        }
        plVar16 = plVar18;
        plStack_68 = plVar18;
        func_0x000109454f6c();
        lVar12 = param_1[0x4b];
        plVar26 = (long *)((long)plVar16 + lVar8);
        lVar8 = (long)plVar26 - (param_1[0x4c] - lVar12);
        plVar21 = plVar26 + 1;
        *plVar26 = (long)puVar19;
        _memcpy(lVar8,lVar12);
        puStack_88 = (undefined8 *)param_1[0x4b];
        param_1[0x4b] = lVar8;
        param_1[0x4c] = plVar21;
        uStack_70 = param_1[0x4d];
        param_1[0x4d] = plVar16 + uVar13;
        puStack_80 = puStack_88;
        puStack_78 = puStack_88;
        func_0x000109454fa0(&puStack_88);
      }
      param_1[0x4c] = plVar21;
      puVar24 = puVar24 + 1;
    } while (puVar24 != puVar10);
  }
  puVar22 = (undefined1 *)param_2[0x51];
  puVar25 = (undefined1 *)param_2[0x52];
  while( true ) {
    if (puVar22 == puVar25) {
      FUN_1094a28f4(&lStack_b0);
      return param_1;
    }
    if (uStack_a8 == 0) break;
    uVar7 = *(ulong *)(puVar22 + 8);
    uVar13 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
    uVar13 = (uVar7 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
    uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
    uVar23 = uStack_a8 - 1;
    if ((uStack_a8 & uVar23) == 0) {
      uVar11 = uVar13 & uVar23;
    }
    else {
      uVar11 = uVar13;
      if (uStack_a8 <= uVar13) {
        uVar11 = 0;
        if (uStack_a8 != 0) {
          uVar11 = uVar13 / uStack_a8;
        }
        uVar11 = uVar13 - uVar11 * uStack_a8;
      }
    }
    plVar18 = *(long **)(lStack_b0 + uVar11 * 8);
    if (plVar18 == (long *)0x0) break;
    do {
      while( true ) {
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) goto LAB_10949fe78;
        uVar14 = plVar18[1];
        if (uVar14 == uVar13) break;
        if ((uStack_a8 & uVar23) == 0) {
          uVar14 = uVar14 & uVar23;
        }
        else if (uStack_a8 <= uVar14) {
          uVar4 = 0;
          if (uStack_a8 != 0) {
            uVar4 = uVar14 / uStack_a8;
          }
          uVar14 = uVar14 - uVar4 * uStack_a8;
        }
        if (uVar14 != uVar11) goto LAB_10949fe78;
      }
    } while (plVar18[2] != uVar7);
    uVar7 = param_1[0x52];
    if (uVar7 < (ulong)param_1[0x53]) {
      FUN_1094545a4(uVar7,plVar18[3],puVar22 + 0x10);
      puVar19 = (undefined8 *)(uVar7 + 0xd0);
      param_1[0x52] = puVar19;
    }
    else {
      puVar19 = puVar6;
      FUN_10942ff50(puVar6,plVar18 + 3,puVar22 + 0x10);
    }
    param_1[0x52] = puVar19;
    *(undefined1 *)(puVar19 + -0x1a) = *puVar22;
    puVar19[-2] = *(undefined8 *)(puVar22 + 0xc0);
    puVar22 = puVar22 + 0xd0;
  }
LAB_10949fe78:
  FUN_109262df8(&UNK_10f639994);
LAB_10949fe9c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10949fea0);
  (*pcVar5)();
}



/* Entry: 1094a0010; end: 1094a01df;  */

void FUN_1094a0010(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined8 auStack_80 [3];
  undefined **ppuStack_68;
  long lStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 0x68) = param_3[1];
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  uVar3 = param_3[2];
  *(undefined8 *)(param_1 + 0x78) = param_3[3];
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar3 = param_3[4];
  *(undefined8 *)(param_1 + 0x88) = param_3[5];
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = param_3[6];
  uVar3 = param_3[8];
  *(undefined8 *)(param_1 + 0xa8) = param_3[9];
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  uVar3 = param_3[10];
  *(undefined8 *)(param_1 + 0xb8) = param_3[0xb];
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  uVar3 = param_3[0xc];
  *(undefined8 *)(param_1 + 200) = param_3[0xd];
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  uVar3 = param_3[0xe];
  *(undefined8 *)(param_1 + 0xd8) = param_3[0xf];
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  *(undefined8 *)(param_1 + 0xe0) = param_3[0x10];
  *(undefined4 *)(param_1 + 0x50) = 1;
  lStack_60 = 0;
  uStack_58 = 0;
  ppuStack_68 = &PTR_FUN_110af4c80;
  iStack_50 = 0;
  lVar1 = *(long *)(param_2 + 0x110);
  auStack_80[0] = *(undefined8 *)(lVar1 + 0x10);
  func_0x00010938e870(&ppuStack_68,auStack_80);
  if (0 < uStack_58._4_4_) {
    iVar2 = 0;
    do {
      _memcpy(lStack_60 + (long)iStack_50 * (long)iVar2,
              *(long *)(lVar1 + 8) + (long)*(int *)(lVar1 + 0x18) * (long)iVar2,(long)(int)uStack_58
             );
      iVar2 = iVar2 + 1;
    } while (iVar2 < uStack_58._4_4_);
  }
  ppuStack_a0 = &PTR_FUN_110af4c80;
  lStack_98 = lStack_60;
  uStack_90 = CONCAT44(uStack_58._4_4_,(int)uStack_58);
  iStack_88 = iStack_50;
  iStack_50 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  FUN_1093fb548(auStack_80,&ppuStack_a0,7);
  ppuStack_a0 = &PTR_FUN_110af4c80;
  if (lStack_98 != 0) {
    __ZdaPv();
  }
  lStack_98 = 0;
  uStack_90 = 0;
  iStack_88 = 0;
  FUN_1094a01e0(param_1,param_2,auStack_80[0]);
  *(undefined4 *)(param_1 + 0x184) = 10000;
  puStack_48 = auStack_80;
  FUN_10939d590(&puStack_48);
  ppuStack_68 = &PTR_FUN_110af4c80;
  if (lStack_60 != 0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 1094a01e0; end: 1094a09ef;  */

void FUN_1094a01e0(long param_1,long param_2,long param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined **ppuStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long lStack_130;
  undefined8 uStack_128;
  double dStack_f0;
  int iStack_e0;
  int iStack_dc;
  undefined8 *puStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(ulong *)(param_3 + 0x10);
  uVar14 = (uint)(uVar11 >> 0x20);
  if ((int)uVar14 <= (int)(uint)uVar11) {
    uVar14 = (uint)uVar11;
  }
  if ((int)uVar14 < 0x3d) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    puVar12 = (ulong *)(param_3 + 0x10);
    do {
      lVar16 = lVar16 + 1;
      puVar12 = puVar12 + 4;
      bVar1 = 0x79 < uVar14;
      uVar14 = uVar14 >> 1;
    } while (bVar1);
    uVar11 = *puVar12;
  }
  param_3 = param_3 + lVar16 * 0x20;
  if ((((int)uVar11 == (int)*(ulong *)(param_1 + 0x1b8) &&
        uVar11 >> 0x20 == *(ulong *)(param_1 + 0x1b8) >> 0x20) &&
      ((int)uVar11 == (int)*(ulong *)(param_1 + 0x198))) &&
     (uVar11 >> 0x20 == *(ulong *)(param_1 + 0x198) >> 0x20)) {
    bVar1 = true;
  }
  else {
    uStack_178 = 0;
    lStack_170 = 0;
    uStack_168 = uStack_168 & 0xffffffff00000000;
    uStack_180 = &PTR_FUN_110af4c80;
    uStack_210 = (undefined **)uVar11;
    func_0x00010938e870(&uStack_180,&uStack_210);
    FUN_10938c7c4(param_1 + 0x1a8,&uStack_180);
    uStack_180 = &PTR_FUN_110af4c80;
    if (uStack_178 != 0) {
      __ZdaPv();
    }
    uStack_210 = *(undefined ***)(param_3 + 0x10);
    uStack_178 = 0;
    lStack_170 = 0;
    uStack_168 = uStack_168 & 0xffffffff00000000;
    uStack_180 = &PTR_FUN_110af4c80;
    func_0x00010938e870(&uStack_180,&uStack_210);
    FUN_10938c7c4(param_1 + 0x188,&uStack_180);
    uStack_180 = &PTR_FUN_110af4c80;
    if (uStack_178 != 0) {
      __ZdaPv();
    }
    bVar1 = false;
    uVar11 = *(ulong *)(param_3 + 0x10);
  }
  if ((uVar11 >> 0x21 == 0) || ((uVar11 & 0xfffffff8) == 0)) {
    lStack_170 = *(long *)(param_3 + 8);
    uVar11 = *(ulong *)(param_3 + 0x10);
    iVar4 = *(int *)(param_3 + 0x18);
    uStack_180 = (undefined **)0x242ff0000;
    puStack_140 = &uStack_178;
    iVar17 = (int)(uVar11 >> 0x20);
    iVar10 = (int)uVar11;
    uStack_178 = CONCAT44(iVar10,iVar17);
    lStack_158 = 0;
    lStack_160 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    lVar16 = (long)iVar10;
    lStack_130 = 0;
    uStack_128 = 0;
    uStack_168 = lStack_170;
    plStack_138 = &lStack_130;
    if ((lStack_170 != 0) || ((long)iVar10 * (long)iVar17 == 0)) {
      uVar5 = 0x42ff4000;
      lVar18 = lVar16;
      if (uVar11 >> 0x20 != 1) {
        lVar18 = (long)iVar4;
      }
      lStack_130 = lVar16;
      if (iVar4 != 0) {
        lStack_130 = lVar18;
      }
      uVar3 = uVar5;
      if (lVar18 != lVar16 && iVar4 != 0) {
        uVar3 = 0x42ff0000;
      }
      uStack_180 = (undefined **)CONCAT44(2,uVar3);
      uStack_128 = 1;
      lStack_158 = lStack_170 + lStack_130 * ((long)uVar11 >> 0x20);
      lStack_160 = (lStack_158 - lStack_130) + lVar16;
      dStack_d0 = 0.0;
      iStack_e0 = 0x1010000;
      lStack_200 = *(long *)(param_1 + 0x1b0);
      uVar11 = *(ulong *)(param_1 + 0x1b8);
      iVar4 = *(int *)(param_1 + 0x1c0);
      uStack_210 = (undefined **)0x242ff0000;
      puStack_1d0 = &uStack_208;
      iVar10 = (int)(uVar11 >> 0x20);
      iVar17 = (int)uVar11;
      uStack_208 = CONCAT44(iVar17,iVar10);
      lStack_1e8 = 0;
      lStack_1f0 = 0;
      lStack_1d8 = 0;
      uStack_1e0 = 0;
      lVar16 = (long)iVar17;
      lStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1f8 = lStack_200;
      plStack_1c8 = &lStack_1c0;
      puStack_d8 = &uStack_180;
      if ((lStack_200 == 0) && ((long)iVar17 * (long)iVar10 != 0)) {
        puVar9 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar9 = 1;
        puStack_220 = puVar9 + 1;
        uStack_218 = 0x1c;
        *(undefined1 *)(puVar9 + 8) = 0;
        *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&puStack_220,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
        goto LAB_1094a0914;
      }
      lVar18 = lVar16;
      if (uVar11 >> 0x20 != 1) {
        lVar18 = (long)iVar4;
      }
      lStack_1c0 = lVar16;
      if (iVar4 != 0) {
        lStack_1c0 = lVar18;
      }
      if (lVar18 != lVar16 && iVar4 != 0) {
        uVar5 = 0x42ff0000;
      }
      uStack_210 = (undefined **)CONCAT44(2,uVar5);
      uStack_1b8 = 1;
      lStack_1e8 = lStack_200 + lStack_1c0 * ((long)uVar11 >> 0x20);
      lStack_1f0 = (lStack_1e8 - lStack_1c0) + lVar16;
      ppuStack_240 = (undefined **)CONCAT44(ppuStack_240._4_4_,0xc2010000);
      uStack_230 = 0;
      puStack_220 = (undefined4 *)0x500000005;
      puStack_238 = &uStack_210;
      FUN_109b44a6c(0x3ff0000000000000,0x3ff0000000000000,&iStack_e0,&ppuStack_240,&puStack_220,4);
      if (lStack_1d8 != 0) {
        piVar2 = (int *)(lStack_1d8 + 0x14);
        do {
          iVar4 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_210);
        }
      }
      lStack_1d8 = 0;
      uStack_1f8 = 0;
      lStack_200 = 0;
      lStack_1e8 = 0;
      lStack_1f0 = 0;
      if (0 < uStack_210._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)puStack_1d0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_210._4_4_);
      }
      if (plStack_1c8 != &lStack_1c0 && plStack_1c8 != (long *)0x0) {
        _free(plStack_1c8[-1]);
      }
      if (lStack_148 != 0) {
        piVar2 = (int *)(lStack_148 + 0x14);
        do {
          iVar4 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_180);
        }
      }
      lStack_148 = 0;
      uStack_168 = 0;
      lStack_170 = 0;
      lStack_158 = 0;
      lStack_160 = 0;
      if (0 < uStack_180._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)((long)puStack_140 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_180._4_4_);
      }
      if (plStack_138 != &lStack_130 && plStack_138 != (long *)0x0) {
        _free(plStack_138[-1]);
      }
      goto LAB_1094a05a0;
    }
  }
  else {
    uStack_210 = (undefined **)(long)(int)*(long *)(param_3 + 0x10);
    uStack_208 = *(long *)(param_3 + 0x10) >> 0x20;
    uStack_178 = 0;
    uStack_180 = (undefined **)0x0;
    uStack_168 = 0;
    lStack_170 = 0;
    FUN_109365b00(&uStack_210,1,*(undefined8 *)(param_3 + 8),(long)*(int *)(param_3 + 0x18),
                  *(undefined8 *)(param_1 + 0x1b0),(long)*(int *)(param_1 + 0x1c0),4,2,&uStack_180);
LAB_1094a05a0:
    iStack_e0 = *(int *)(param_3 + 0x10);
    iVar4 = *(int *)(param_3 + 0x14);
    dStack_c0 = (double)iStack_e0 / (double)*(int *)(param_2 + 0x10);
    dVar23 = (double)iVar4 / (double)*(int *)(param_2 + 0x14);
    dStack_d0 = *(double *)(param_2 + 0x20) * dStack_c0;
    dStack_c8 = *(double *)(param_2 + 0x28) * dVar23;
    dStack_c0 = *(double *)(param_2 + 0x30) * dStack_c0;
    dVar23 = *(double *)(param_2 + 0x38) * dVar23;
    uVar14 = *(uint *)(param_2 + 0x60);
    dVar21 = ((double)iStack_e0 / 2.0) / dStack_c0;
    iStack_dc = iVar4;
    dStack_b8 = dVar23;
    _atan();
    dVar23 = ((double)iVar4 / 2.0) / dVar23;
    _atan();
    dStack_b0 = dVar21 + dVar21;
    dStack_a8 = dVar23 + dVar23;
    if ((uVar14 & 0xfffffffe) == 2) {
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = uVar14;
      FUN_10937da58(&puStack_88,param_2 + 0x68);
    }
    else {
      uStack_98 = *(undefined8 *)(param_2 + 0x58);
      uStack_a0 = *(undefined8 *)(param_2 + 0x50);
      uStack_90 = 0;
      puStack_88 = (undefined8 *)0x0;
      lStack_80 = 0;
      if ((*(double *)(param_2 + 0x50) != 0.0) || (*(double *)(param_2 + 0x58) != 0.0)) {
        uStack_90 = 1;
      }
    }
    if ((bVar1) && ((*(uint *)(param_1 + 0x50) & 0xfffffffe) == 2)) {
      lStack_200 = *(long *)(param_1 + 0x198);
      uStack_208 = *(long *)(param_1 + 400);
      uVar11 = (ulong)uStack_1f8 >> 0x20;
      uStack_1f8 = CONCAT44((int)uVar11,*(undefined4 *)(param_1 + 0x1a0));
      uStack_210 = &PTR_DAT_110af5e80;
      uStack_230 = *(undefined8 *)(param_1 + 0x1b8);
      puStack_238 = *(undefined8 **)(param_1 + 0x1b0);
      uStack_228 = *(undefined4 *)(param_1 + 0x1c0);
      ppuStack_240 = &PTR_DAT_110af5e80;
      FUN_1095329ac(&uStack_180,param_1 + 0x1d0,&iStack_e0,&uStack_210,&ppuStack_240);
      FUN_10937f9d4(&uStack_210,&uStack_180,param_1 + 0x60);
      *(long *)(param_1 + 0x68) = uStack_208;
      *(undefined ***)(param_1 + 0x60) = uStack_210;
      *(long *)(param_1 + 0x78) = uStack_1f8;
      *(long *)(param_1 + 0x70) = lStack_200;
      *(long *)(param_1 + 0x88) = lStack_1e8;
      *(long *)(param_1 + 0x80) = lStack_1f0;
      *(undefined8 *)(param_1 + 0x90) = uStack_1e0;
      *(undefined8 *)(param_1 + 200) = uStack_1a8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_1b0;
      *(undefined8 *)(param_1 + 0xd8) = uStack_198;
      *(undefined8 *)(param_1 + 0xd0) = uStack_1a0;
      *(undefined8 *)(param_1 + 0xe0) = uStack_190;
      *(long **)(param_1 + 0xa8) = plStack_1c8;
      *(undefined8 **)(param_1 + 0xa0) = puStack_1d0;
      *(undefined8 *)(param_1 + 0xb8) = uStack_1b8;
      *(long *)(param_1 + 0xb0) = lStack_1c0;
      *(double *)(param_1 + 0x88) = *(double *)(param_1 + 0x88) / dStack_f0;
      *(double *)(param_1 + 0x80) = *(double *)(param_1 + 0x80) / dStack_f0;
      *(double *)(param_1 + 0x90) = *(double *)(param_1 + 0x90) / dStack_f0;
    }
    uStack_178 = *(long *)(param_1 + 0x1b0);
    uStack_180 = &PTR_FUN_110af4c80;
    lStack_170 = *(long *)(param_1 + 0x1b8);
    uStack_168 = CONCAT44(uStack_168._4_4_,*(undefined4 *)(param_1 + 0x1c0));
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    FUN_10938c7c4(param_1 + 0x1a8,param_1 + 0x188);
    FUN_10938c7c4(param_1 + 0x188,&uStack_180);
    uStack_180 = &PTR_FUN_110af4c80;
    if (uStack_178 != 0) {
      __ZdaPv();
    }
    puVar15 = puStack_88;
    *(ulong *)(param_1 + 0x1d0) = CONCAT44(iStack_dc,iStack_e0);
    *(double *)(param_1 + 0x1e8) = dStack_c8;
    *(double *)(param_1 + 0x1e0) = dStack_d0;
    *(double *)(param_1 + 0x1f8) = dStack_b8;
    *(double *)(param_1 + 0x1f0) = dStack_c0;
    *(double *)(param_1 + 0x208) = dStack_a8;
    *(double *)(param_1 + 0x200) = dStack_b0;
    *(undefined8 *)(param_1 + 0x218) = uStack_98;
    *(undefined8 *)(param_1 + 0x210) = uStack_a0;
    *(uint *)(param_1 + 0x220) = uStack_90;
    lVar16 = lStack_80;
    if (*(long *)(param_1 + 0x230) != lStack_80) {
      FUN_10942c088((long *)(param_1 + 0x228),lStack_80,1);
      lVar16 = *(long *)(param_1 + 0x230);
    }
    puVar13 = *(undefined8 **)(param_1 + 0x228);
    uVar11 = lVar16 - (lVar16 >> 0x3f) & 0xfffffffffffffffe;
    if (1 < lVar16) {
      lVar18 = 0;
      puVar19 = puVar13;
      puVar20 = puVar15;
      do {
        uVar22 = *puVar20;
        puVar19[1] = puVar20[1];
        *puVar19 = uVar22;
        lVar18 = lVar18 + 2;
        puVar19 = puVar19 + 2;
        puVar20 = puVar20 + 2;
      } while (lVar18 < (long)uVar11);
    }
    lVar18 = lVar16 % 2;
    if (lVar18 != 0 && lVar18 < 0 == SBORROW8(lVar16,uVar11)) {
      puVar13 = puVar13 + (lVar16 / 2) * 2;
      puVar15 = puVar15 + (lVar16 / 2) * 2;
      do {
        *puVar13 = *puVar15;
        lVar18 = lVar18 + -1;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      } while (lVar18 != 0);
    }
    _free(puStack_88);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar9 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  uStack_210 = (undefined **)(puVar9 + 1);
  uStack_208 = 0x1c;
  *(undefined1 *)(puVar9 + 8) = 0;
  *(undefined8 *)(puVar9 + 3) = 0x207c7c2030203d3d;
  *(undefined8 *)(puVar9 + 1) = 0x2029286c61746f74;
  *(undefined8 *)(puVar9 + 6) = 0x4c4c554e203d2120;
  *(undefined8 *)(puVar9 + 4) = 0x61746164207c7c20;
  FUN_109ac3188(0xffffff29,&uStack_210,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_1094a0914:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1094a0918);
  (*pcVar8)();
}



/* Entry: 1094a09f0; end: 1094a0ddf;  */

void FUN_1094a09f0(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined8 auStack_80 [3];
  undefined **ppuStack_68;
  long lStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  
  if ((int)param_1[10] == 0) {
    return;
  }
  param_1[0x1f] = param_1[0xd];
  param_1[0x1e] = param_1[0xc];
  param_1[0x21] = param_1[0xf];
  param_1[0x20] = param_1[0xe];
  param_1[0x23] = param_1[0x11];
  param_1[0x22] = param_1[0x10];
  param_1[0x24] = param_1[0x12];
  param_1[0x27] = param_1[0x15];
  param_1[0x26] = param_1[0x14];
  param_1[0x29] = param_1[0x17];
  param_1[0x28] = param_1[0x16];
  param_1[0x2b] = param_1[0x19];
  param_1[0x2a] = param_1[0x18];
  param_1[0x2d] = param_1[0x1b];
  param_1[0x2c] = param_1[0x1a];
  param_1[0x2e] = param_1[0x1c];
  lStack_60 = 0;
  uStack_58 = 0;
  ppuStack_68 = &PTR_FUN_110af4c80;
  iStack_50 = 0;
  lVar6 = *(long *)(param_2 + 0x110);
  auStack_80[0] = *(undefined8 *)(lVar6 + 0x10);
  func_0x00010938e870(&ppuStack_68,auStack_80);
  if (0 < uStack_58._4_4_) {
    iVar7 = 0;
    do {
      _memcpy(lStack_60 + (long)iStack_50 * (long)iVar7,
              *(long *)(lVar6 + 8) + (long)*(int *)(lVar6 + 0x18) * (long)iVar7,(long)(int)uStack_58
             );
      iVar7 = iVar7 + 1;
    } while (iVar7 < uStack_58._4_4_);
  }
  ppuStack_a0 = &PTR_FUN_110af4c80;
  lStack_98 = lStack_60;
  uStack_90 = CONCAT44(uStack_58._4_4_,(int)uStack_58);
  iStack_88 = iStack_50;
  iStack_50 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  FUN_1093fb548(auStack_80,&ppuStack_a0,7);
  ppuStack_a0 = &PTR_FUN_110af4c80;
  if (lStack_98 != 0) {
    __ZdaPv();
  }
  lStack_98 = 0;
  uStack_90 = 0;
  iStack_88 = 0;
  FUN_1094a01e0(param_1,param_2,auStack_80[0]);
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (*(char *)(*param_1 + 0x15) == '\x01') {
    if ((char)param_1[1] != '\0') {
      plVar3 = param_1;
      FUN_1094a0e24(param_1[2],param_1,param_2,auStack_80,2,0,0,5,
                    *(undefined4 *)((long)param_1 + 0x24));
      plVar4 = param_1;
      FUN_1094a0e24(((double)param_1[3] + (double)param_1[2]) * 0.5,param_1,param_2,auStack_80,1,0,0
                    ,4,*(undefined4 *)((long)param_1 + 0x24));
      plVar5 = param_1;
      FUN_1094a0e24(param_1[3],param_1,param_2,auStack_80,0,0,0,3,
                    *(undefined4 *)((long)param_1 + 0x24));
      plVar2 = param_1;
      FUN_1094a0e24(param_1[3],param_1,param_2,auStack_80,0,0,(char)param_1[4],3,(int)param_1[5]);
      uVar1 = ((uint)plVar3 | (uint)plVar4 | (uint)plVar5 | (uint)plVar2) & 1;
      goto joined_r0x0001094a0cf8;
    }
  }
  else if ((char)param_1[1] != '\0') {
    FUN_1094a0e24(param_1[2],param_1,param_2,auStack_80,3,0,0,3,
                  *(undefined4 *)((long)param_1 + 0x24));
    FUN_1094a0e24(param_1[2],param_1,param_2,auStack_80,2,0,0,3,
                  *(undefined4 *)((long)param_1 + 0x24));
    plVar3 = param_1;
    FUN_1094a0e24(param_1[2],param_1,param_2,auStack_80,1,0,0,3,
                  *(undefined4 *)((long)param_1 + 0x24));
    plVar4 = param_1;
    FUN_1094a0e24(param_1[2],param_1,param_2,auStack_80,0,0,0,3,
                  *(undefined4 *)((long)param_1 + 0x24));
    plVar5 = param_1;
    FUN_1094a0e24(param_1[3],param_1,param_2,auStack_80,0,0,(char)param_1[4],3,(int)param_1[5]);
    uVar1 = ((uint)plVar3 | (uint)plVar4 | (uint)plVar5) & 1;
    goto joined_r0x0001094a0cf8;
  }
  plVar3 = param_1;
  FUN_1094a0e24(param_1[3],param_1,param_2,auStack_80,0,2,(char)param_1[4],3,
                *(undefined4 *)((long)param_1 + 0x24));
  uVar1 = (uint)plVar3;
joined_r0x0001094a0cf8:
  if (uVar1 == 0) {
    iVar7 = *(int *)((long)param_1 + 0x184);
    *(int *)((long)param_1 + 0x184) = iVar7 + 1;
    if (iVar7 < (int)param_1[6]) {
      *(undefined4 *)(param_1 + 10) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 10) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 10) = 2;
    *(undefined4 *)((long)param_1 + 0x184) = 0;
  }
  puStack_48 = auStack_80;
  FUN_10939d590(&puStack_48);
  ppuStack_68 = &PTR_FUN_110af4c80;
  if (lStack_60 != 0) {
    __ZdaPv();
  }
  return;
}



/* Entry: 1094a0de0; end: 1094a0e23;  */

void FUN_1094a0de0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = param_2;
  FUN_10949f0d0();
  lVar1 = param_1[0x5a];
  lVar2 = param_1[0x59];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x28;
    func_0x000109466414();
  }
  param_1[0x5a] = lVar2;
  return;
}



/* Entry: 1094a0e24; end: 1094a172f;  */

undefined8
FUN_1094a0e24(double param_1,undefined8 *param_2,long param_3,undefined8 param_4,ulong param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  double dVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  uint uStack_2c4;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  int iStack_2a4;
  ulong auStack_2a0 [2];
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  int iStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [32];
  undefined8 auStack_1c0 [2];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 auStack_b8 [4];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = param_2[0x52];
  lVar22 = param_2[0x51];
  iStack_2a4 = param_9;
  while (lVar27 != lVar22) {
    lVar27 = lVar27 + -0xd0;
    FUN_109454e1c(lVar27);
  }
  param_2[0x52] = lVar22;
  lStack_2c0 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  auStack_1c0[0] = *param_2;
  uStack_1a8 = param_2[0xd];
  uStack_1b0 = param_2[0xc];
  uStack_198 = param_2[0xf];
  uStack_1a0 = param_2[0xe];
  uStack_188 = param_2[0x11];
  uStack_190 = param_2[0x10];
  uStack_180 = param_2[0x12];
  uStack_148 = param_2[0x19];
  uStack_150 = param_2[0x18];
  uStack_138 = param_2[0x1b];
  uStack_140 = param_2[0x1a];
  uStack_130 = param_2[0x1c];
  uStack_168 = param_2[0x15];
  uStack_170 = param_2[0x14];
  uStack_158 = param_2[0x17];
  uStack_160 = param_2[0x16];
  puVar25 = (undefined8 *)(param_3 + 0x10);
  uStack_110 = *puVar25;
  uStack_f8 = *(undefined8 *)(param_3 + 0x28);
  uStack_100 = *(undefined8 *)(param_3 + 0x20);
  uStack_e8 = *(undefined8 *)(param_3 + 0x38);
  uStack_f0 = *(undefined8 *)(param_3 + 0x30);
  uStack_d8 = *(undefined8 *)(param_3 + 0x48);
  uStack_e0 = *(undefined8 *)(param_3 + 0x40);
  uStack_c8 = *(undefined8 *)(param_3 + 0x58);
  uStack_d0 = *(undefined8 *)(param_3 + 0x50);
  uStack_c0 = *(undefined4 *)(param_3 + 0x60);
  uStack_120 = param_4;
  FUN_10937da58(auStack_b8,param_3 + 0x68);
  puVar26 = (undefined8 *)param_2[0x5a];
  puVar28 = (undefined8 *)param_2[0x59];
  lVar22 = (long)puVar26 - (long)puVar28;
  uVar16 = (lVar22 >> 3) * -0x3333333333333333;
  uVar24 = (uint)param_5;
  if ((int)uVar16 <= (int)uVar24) {
    uVar13 = (ulong)(uVar24 + 1);
    uVar9 = uVar13 + (lVar22 >> 3) * 0x3333333333333333;
    if (uVar13 < uVar16 || uVar9 == 0) {
      if (uVar13 < uVar16) {
        while (puVar26 != puVar28 + uVar13 * 5) {
          puVar26 = puVar26 + -5;
          func_0x000109466414(puVar26);
        }
        param_2[0x5a] = puVar28 + uVar13 * 5;
      }
    }
    else if ((ulong)((param_2[0x5b] - (long)puVar26 >> 3) * -0x3333333333333333) < uVar9) {
      lVar27 = param_2[0x5b] - (long)puVar28 >> 3;
      uVar16 = lVar27 * -0x6666666666666666;
      if (uVar16 < uVar13 || uVar16 - uVar13 == 0) {
        uVar16 = uVar13;
      }
      if (0x333333333333332 < (ulong)(lVar27 * -0x3333333333333333)) {
        uVar16 = 0x666666666666666;
      }
      if (0x666666666666666 < uVar16) goto LAB_1094a169c;
      lVar27 = uVar16 * 0x28;
      __Znwm();
      puVar2 = (undefined8 *)(lVar27 + lVar22);
      puVar12 = puVar2;
      do {
        puVar12[1] = 0;
        *puVar12 = 0;
        puVar12[3] = 0;
        puVar12[2] = 0;
        *(undefined4 *)(puVar12 + 4) = 0x3f800000;
        puVar12 = puVar12 + 5;
      } while (puVar12 != puVar2 + (uVar9 & 0xffffffff) * 5);
      if (puVar28 != puVar26) {
        lVar14 = 0;
        do {
          plVar3 = (long *)((long)puVar28 + lVar14);
          plVar4 = (long *)(((long)puVar2 - lVar22) + lVar14);
          lVar17 = *plVar3;
          *plVar3 = 0;
          *plVar4 = lVar17;
          lVar18 = plVar3[2];
          uVar13 = plVar3[1];
          plVar4[2] = lVar18;
          plVar4[1] = uVar13;
          plVar3[1] = 0;
          lVar20 = plVar3[3];
          plVar4[3] = lVar20;
          *(int *)(plVar4 + 4) = (int)plVar3[4];
          if (lVar20 != 0) {
            uVar19 = *(ulong *)(lVar18 + 8);
            if ((uVar13 & uVar13 - 1) == 0) {
              uVar19 = uVar19 & uVar13 - 1;
            }
            else if (uVar13 <= uVar19) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar19 / uVar13;
              }
              uVar19 = uVar19 - uVar10 * uVar13;
            }
            *(long **)(lVar17 + uVar19 * 8) = plVar4 + 2;
            plVar3[2] = 0;
            plVar3[3] = 0;
          }
          lVar14 = lVar14 + 0x28;
        } while ((undefined8 *)((long)puVar28 + lVar14) != puVar26);
        do {
          func_0x000109466414(puVar28);
          puVar28 = puVar28 + 5;
        } while (puVar28 != puVar26);
        puVar28 = (undefined8 *)param_2[0x59];
      }
      param_2[0x59] = (long)puVar2 - lVar22;
      param_2[0x5a] = puVar2 + (uVar9 & 0xffffffff) * 5;
      param_2[0x5b] = lVar27 + uVar16 * 0x28;
      if (puVar28 != (undefined8 *)0x0) {
        __ZdlPv(puVar28);
      }
    }
    else {
      puVar28 = puVar26 + (uVar9 & 0xffffffff) * 5;
      do {
        puVar26[1] = 0;
        *puVar26 = 0;
        puVar26[3] = 0;
        puVar26[2] = 0;
        *(undefined4 *)(puVar26 + 4) = 0x3f800000;
        puVar26 = puVar26 + 5;
      } while (puVar26 != puVar28);
      param_2[0x5a] = puVar28;
    }
    puVar28 = (undefined8 *)param_2[0x59];
  }
  puVar28 = puVar28 + (param_5 & 0xffffffff) * 5;
  FUN_109466494(puVar28,&iStack_2a4);
  if (puVar28 == (undefined8 *)0x0) {
    lVar22 = param_2[0x59];
    puVar12 = (undefined8 *)0xa68;
    __Znwm();
    puVar28 = (undefined8 *)(lVar22 + (param_5 & 0xffffffff) * 0x28);
    uStack_280 = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    *(int *)(puVar12 + 2) = iStack_2a4;
    auStack_2a0[1] = 0x3fa999999999999a;
    auStack_2a0[0] = 0x3f947ae147ae147b;
    puStack_290 = puVar12;
    puStack_288 = puVar28;
    FUN_109452ff8(puVar12 + 3,param_2 + 0x4e,iStack_2a4,auStack_2a0);
    uStack_280 = CONCAT71(uStack_280._1_7_,1);
    puVar12[1] = (long)*(int *)(puVar12 + 2);
    func_0x000109465f68();
    puVar26 = puStack_290;
    if ((((ulong)puVar12 & 1) == 0) && (puStack_290 != (undefined8 *)0x0)) {
      if ((char)uStack_280 == '\x01') {
        func_0x0001094663b0(puStack_290 + 2);
      }
      __ZdlPv(puVar26);
    }
  }
  puVar12 = puVar28 + 0x11;
  *(undefined4 *)(puVar28 + 0xd) = 0;
  puVar28[0x12] = *puVar12;
  FUN_1094533d8(puVar12,(long)*(int *)(puVar28 + 0x10));
  puVar26 = puVar28 + 3;
  if (iStack_2a4 < 1) {
    iVar21 = 0;
  }
  else {
    iVar21 = 0;
    do {
      iVar6 = *(int *)(puVar28 + 0xd);
      if (*(int *)((long)puVar28 + 100) <= iVar6) break;
      uStack_2c4 = *(uint *)(puVar28[6] + (long)iVar6 * 4);
      *(int *)(puVar28 + 0xd) = iVar6 + 1;
      if ((int)uStack_2c4 < 0) break;
      lVar22 = *(long *)(param_2[0x4b] + (long)(ulong)uStack_2c4 * 8);
      if ((*(int *)(lVar22 + 0x50) == 0) || ((*(byte *)(lVar22 + 0x60) & 1) == 0)) {
        if ((int)uStack_2c4 < (int)((ulong)(puVar28[4] - puVar28[3]) >> 2)) {
          puStack_290 = (undefined8 *)(ulong)uStack_2c4;
          FUN_1094538d8(puVar12,&puStack_290);
        }
      }
      else {
        FUN_109453cac(&puStack_290,param_1,auStack_1c0,lVar22,
                      param_2[0x48] + (ulong)uStack_2c4 * 0xb0,param_8,param_6,param_7,param_5);
        if (((ulong)puStack_290 & 1) == 0) {
          if ((-1 < (int)uStack_2c4) &&
             ((int)uStack_2c4 < (int)((ulong)(puVar28[4] - puVar28[3]) >> 2))) {
            auStack_2a0[0] = (ulong)uStack_2c4;
            FUN_1094538d8(puVar12,auStack_2a0);
          }
        }
        else {
          iVar21 = iVar21 + 1;
          if (param_1 <= dStack_260) {
            FUN_10945fba8(param_2 + 0x51,&puStack_290);
            FUN_10923b3a0(&lStack_2c0,&uStack_2c4);
          }
          else {
            func_0x000109453894(puVar26,uStack_2c4,2);
          }
        }
        if (lStack_1f8 != 0) {
          piVar1 = (int *)(lStack_1f8 + 0x14);
          do {
            iVar6 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar6 + -1 == 0) {
            func_0x000109a848d4(&uStack_230);
          }
        }
        lStack_1f8 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        if (0 < iStack_22c) {
          lVar22 = 0;
          do {
            *(undefined4 *)(lStack_1f0 + lVar22 * 4) = 0;
            lVar22 = lVar22 + 1;
          } while (lVar22 < iStack_22c);
        }
        if (puStack_1e8 != auStack_1e0 && puStack_1e8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_1e8 + -8));
        }
      }
    } while (iVar21 < iStack_2a4);
  }
  uVar16 = ((long)(param_2[0x52] - param_2[0x51]) >> 4) * 0x4ec4ec4ec4ec4ec5;
  if (param_2[0x52] - param_2[0x51] == 0) {
    fVar29 = 0.0;
  }
  else {
    fVar29 = (float)uVar16 / (float)iVar21;
  }
  *(undefined1 *)(param_2 + 0x30) = 0;
  if (uVar16 < *(uint *)((long)param_2 + 0x2c)) {
LAB_1094a13e0:
    FUN_109453464(puVar26);
    FUN_10945311c(puVar26,puVar28 + 9,*(undefined4 *)(puVar28 + 0x10));
    lVar22 = param_2[0x52];
    lVar27 = param_2[0x51];
    while (lVar22 != lVar27) {
      lVar22 = lVar22 + -0xd0;
      FUN_109454e1c(lVar22);
    }
    uVar23 = 0;
    param_2[0x52] = lVar27;
  }
  else {
    fVar33 = 0.75;
    if (*(int *)(param_2 + 10) != 1) {
      fVar33 = 0.1;
    }
    if (fVar29 < fVar33) goto LAB_1094a13e0;
    uVar37 = param_2[0xd];
    uVar34 = param_2[0xc];
    uVar31 = param_2[0xf];
    uVar23 = param_2[0xe];
    uVar38 = param_2[0x11];
    uVar35 = param_2[0x10];
    uVar44 = param_2[0x12];
    uVar41 = param_2[0x15];
    uVar40 = param_2[0x14];
    uVar43 = param_2[0x17];
    uVar42 = param_2[0x16];
    uVar39 = param_2[0x19];
    uVar36 = param_2[0x18];
    uVar32 = param_2[0x1b];
    uVar30 = param_2[0x1a];
    dVar15 = (double)(0x3ff0000000000000 - (param_5 << 0x34));
    uVar45 = param_2[0x1c];
    if (uVar24 == 0) {
      FUN_109466534(&puStack_290,dVar15 * 0.5,puVar25,param_2 + 0x51,param_2 + 0xc,0,5,0);
    }
    else {
      FUN_109466534(&puStack_290,dVar15 + dVar15,puVar25,param_2 + 0x51,param_2 + 0xc,0,5,1);
    }
    param_2[0xd] = puStack_288;
    param_2[0xc] = puStack_290;
    param_2[0xf] = uStack_278;
    param_2[0xe] = uStack_280;
    param_2[0x11] = uStack_268;
    param_2[0x10] = uStack_270;
    param_2[0x12] = dStack_260;
    param_2[0x19] = uStack_228;
    param_2[0x18] = CONCAT44(iStack_22c,uStack_230);
    param_2[0x1b] = uStack_218;
    param_2[0x1a] = uStack_220;
    param_2[0x1c] = uStack_210;
    param_2[0x15] = uStack_248;
    param_2[0x14] = uStack_250;
    param_2[0x17] = uStack_238;
    param_2[0x16] = uStack_240;
    lVar22 = param_2[0x51];
    lVar27 = param_2[0x52];
    if (lVar22 == lVar27) {
      iVar21 = 0;
    }
    else {
      lVar14 = 0;
      iVar21 = 0;
      do {
        dVar15 = (double)param_2[7] / (double)(uint)(1 << (ulong)(uVar24 & 0x1f));
        if (*(double *)(lVar22 + 0xc0) <= dVar15 * dVar15) {
          func_0x000109453894(puVar26,*(undefined4 *)(lStack_2c0 + lVar14),1);
          iVar21 = iVar21 + 1;
        }
        else {
          func_0x000109453894(puVar26,*(undefined4 *)(lStack_2c0 + lVar14),2);
        }
        lVar22 = lVar22 + 0xd0;
        lVar14 = lVar14 + 4;
      } while (lVar22 != lVar27);
    }
    FUN_109453464(puVar26);
    lVar22 = param_2[0x52];
    lVar27 = param_2[0x51];
    if (iVar21 < *(int *)((long)param_2 + 0x2c)) {
LAB_1094a1618:
      param_2[0xd] = uVar37;
      param_2[0xc] = uVar34;
      param_2[0xf] = uVar31;
      param_2[0xe] = uVar23;
      param_2[0x11] = uVar38;
      param_2[0x10] = uVar35;
      param_2[0x12] = uVar44;
      param_2[0x15] = uVar41;
      param_2[0x14] = uVar40;
      param_2[0x17] = uVar43;
      param_2[0x16] = uVar42;
      param_2[0x19] = uVar39;
      param_2[0x18] = uVar36;
      param_2[0x1b] = uVar32;
      param_2[0x1a] = uVar30;
      param_2[0x1c] = uVar45;
      while (lVar22 != lVar27) {
        lVar22 = lVar22 + -0xd0;
        FUN_109454e1c(lVar22);
      }
      param_2[0x52] = lVar27;
      FUN_10945311c(puVar26,puVar28 + 9,*(undefined4 *)(puVar28 + 0x10));
      uVar23 = 0;
    }
    else {
      lVar14 = 0x48;
      if (*(int *)(param_2 + 10) != 1) {
        lVar14 = 0x40;
      }
      dVar15 = (double)((float)iVar21 / (float)(ulong)((lVar22 - lVar27 >> 4) * 0x4ec4ec4ec4ec4ec5))
      ;
      if (dVar15 < *(double *)((long)param_2 + lVar14)) goto LAB_1094a1618;
      uVar5 = 0;
      if (0.9 < dVar15 && uVar24 == 0) {
        uVar5 = (char)param_7;
      }
      *(undefined1 *)(param_2 + 0x30) = uVar5;
      uVar23 = 1;
    }
  }
  _free(auStack_b8[0]);
  if (lStack_2c0 != 0) {
    lStack_2b8 = lStack_2c0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return uVar23;
  }
  ___stack_chk_fail();
LAB_1094a169c:
  func_0x000104c4f740();
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1094a16a4);
  (*pcVar11)();
}



/* Entry: 1094a1730; end: 1094a17bb;  */

undefined1 FUN_1094a1730(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  dVar7 = 0.0;
  for (lVar1 = *(long *)(param_1 + 0x288); lVar1 != *(long *)(param_1 + 0x290); lVar1 = lVar1 + 0xd0
      ) {
    dVar7 = dVar7 + *(double *)(lVar1 + 0x30);
  }
  uVar6 = (*(long *)(param_1 + 0x290) - *(long *)(param_1 + 0x288) >> 4) * 0x4ec4ec4ec4ec4ec5;
  uVar5 = *(long *)(param_1 + 0x260) - *(long *)(param_1 + 600) >> 3;
  uVar4 = (long)*(int *)(param_1 + 0x28);
  if ((int)uVar5 <= *(int *)(param_1 + 0x28)) {
    uVar4 = uVar5;
  }
  uVar2 = 0;
  if (0.95 < dVar7 / (double)uVar6) {
    uVar2 = *(undefined1 *)(param_1 + 0x180);
  }
  uVar3 = 0;
  if (uVar4 <= uVar6) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 1094a17bc; end: 1094a17cf;  */

void FUN_1094a17bc(undefined8 param_1,double *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  ulong uVar8;
  double dVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  double *pdVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  double *pdVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  pdVar4 = (double *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)pdVar4 >> 0x3c == 0) {
    __Znwm((long)pdVar4 << 4);
    return;
  }
  func_0x000104c4f740();
LAB_1094a1830:
  do {
    pdVar17 = pdVar4;
    uVar10 = (long)param_2 - (long)pdVar17 >> 4;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        dVar18 = *pdVar17;
        if (dVar18 <= param_2[-2]) {
          return;
        }
        *pdVar17 = param_2[-2];
        param_2[-2] = dVar18;
LAB_1094a1eb4:
        dVar7 = pdVar17[1];
        pdVar17[1] = param_2[-1];
LAB_1094a1ec0:
        param_2[-1] = dVar7;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        dVar7 = pdVar17[2];
        dVar18 = *pdVar17;
        dVar19 = param_2[-2];
        if (dVar18 <= dVar7) {
          if (dVar7 <= dVar19) {
            return;
          }
          pdVar17[2] = dVar19;
          param_2[-2] = dVar7;
          dVar18 = pdVar17[3];
          pdVar17[3] = param_2[-1];
          param_2[-1] = dVar18;
          dVar18 = *pdVar17;
          if (dVar18 <= pdVar17[2]) {
            return;
          }
          *pdVar17 = pdVar17[2];
          pdVar17[2] = dVar18;
          dVar18 = pdVar17[1];
          pdVar17[1] = pdVar17[3];
          pdVar17[3] = dVar18;
          return;
        }
        if (dVar7 <= dVar19) {
          *pdVar17 = dVar7;
          pdVar17[2] = dVar18;
          dVar7 = pdVar17[1];
          pdVar17[1] = pdVar17[3];
          pdVar17[3] = dVar7;
          if (dVar18 <= param_2[-2]) {
            return;
          }
          pdVar17[2] = param_2[-2];
          param_2[-2] = dVar18;
          pdVar17[3] = param_2[-1];
          goto LAB_1094a1ec0;
        }
        *pdVar17 = dVar19;
        param_2[-2] = dVar18;
        goto LAB_1094a1eb4;
      }
      if (uVar10 == 4) {
        dVar7 = pdVar17[2];
        dVar19 = *pdVar17;
        dVar20 = pdVar17[4];
        dVar18 = dVar20;
        if (dVar19 <= dVar7) {
          if (dVar20 < dVar7) {
            pdVar17[2] = dVar20;
            pdVar17[4] = dVar7;
            dVar18 = pdVar17[3];
            dVar9 = pdVar17[5];
            pdVar17[3] = dVar9;
            pdVar17[5] = dVar18;
            dVar18 = dVar7;
            if (dVar20 < dVar19) {
              *pdVar17 = dVar20;
              pdVar17[2] = dVar19;
              dVar7 = pdVar17[1];
              pdVar17[1] = dVar9;
              pdVar17[3] = dVar7;
            }
          }
        }
        else {
          if (dVar7 <= dVar20) {
            *pdVar17 = dVar7;
            pdVar17[2] = dVar19;
            dVar7 = pdVar17[1];
            pdVar17[1] = pdVar17[3];
            pdVar17[3] = dVar7;
            if (dVar19 <= dVar20) goto LAB_1094a22ec;
            pdVar17[2] = dVar20;
            pdVar17[4] = dVar19;
            pdVar17[3] = pdVar17[5];
          }
          else {
            *pdVar17 = dVar20;
            pdVar17[4] = dVar19;
            dVar7 = pdVar17[1];
            pdVar17[1] = pdVar17[5];
          }
          pdVar17[5] = dVar7;
          dVar18 = dVar19;
        }
LAB_1094a22ec:
        if (dVar18 <= param_2[-2]) {
          return;
        }
        pdVar17[4] = param_2[-2];
        param_2[-2] = dVar18;
        dVar18 = pdVar17[5];
        pdVar17[5] = param_2[-1];
        param_2[-1] = dVar18;
        dVar18 = pdVar17[4];
        dVar7 = pdVar17[2];
        if (dVar7 <= dVar18) {
          return;
        }
        pdVar17[2] = dVar18;
        pdVar17[4] = dVar7;
        dVar19 = pdVar17[3];
        dVar7 = pdVar17[5];
        pdVar17[3] = dVar7;
        pdVar17[5] = dVar19;
        dVar19 = *pdVar17;
        if (dVar19 <= dVar18) {
          return;
        }
        *pdVar17 = dVar18;
        pdVar17[2] = dVar19;
        dVar18 = pdVar17[1];
        pdVar17[1] = dVar7;
        pdVar17[3] = dVar18;
        return;
      }
      if (uVar10 == 5) {
        pdVar4 = pdVar17 + 2;
        pdVar5 = pdVar17 + 4;
        pdVar6 = pdVar17 + 6;
        dVar7 = *pdVar4;
        dVar19 = *pdVar17;
        dVar18 = *pdVar5;
        if (dVar19 <= dVar7) {
          if (dVar18 < dVar7) {
            *pdVar4 = dVar18;
            *pdVar5 = dVar7;
            dVar18 = pdVar17[3];
            pdVar17[3] = pdVar17[5];
            pdVar17[5] = dVar18;
            dVar19 = *pdVar17;
            dVar18 = dVar7;
            if (*pdVar4 < dVar19) {
              *pdVar17 = *pdVar4;
              *pdVar4 = dVar19;
              dVar18 = pdVar17[1];
              pdVar17[1] = pdVar17[3];
              pdVar17[3] = dVar18;
              dVar18 = *pdVar5;
            }
          }
        }
        else {
          if (dVar7 <= dVar18) {
            *pdVar17 = dVar7;
            *pdVar4 = dVar19;
            dVar7 = pdVar17[1];
            pdVar17[1] = pdVar17[3];
            pdVar17[3] = dVar7;
            dVar18 = *pdVar5;
            if (dVar19 <= dVar18) goto LAB_1094a2438;
            *pdVar4 = dVar18;
            *pdVar5 = dVar19;
            pdVar17[3] = pdVar17[5];
          }
          else {
            *pdVar17 = dVar18;
            *pdVar5 = dVar19;
            dVar7 = pdVar17[1];
            pdVar17[1] = pdVar17[5];
          }
          pdVar17[5] = dVar7;
          dVar18 = dVar19;
        }
LAB_1094a2438:
        if (*pdVar6 < dVar18) {
          *pdVar5 = *pdVar6;
          *pdVar6 = dVar18;
          dVar18 = pdVar17[5];
          pdVar17[5] = pdVar17[7];
          pdVar17[7] = dVar18;
          dVar18 = *pdVar4;
          if (*pdVar5 < dVar18) {
            *pdVar4 = *pdVar5;
            *pdVar5 = dVar18;
            dVar18 = pdVar17[3];
            pdVar17[3] = pdVar17[5];
            pdVar17[5] = dVar18;
            dVar18 = *pdVar17;
            if (*pdVar4 < dVar18) {
              *pdVar17 = *pdVar4;
              *pdVar4 = dVar18;
              dVar18 = pdVar17[1];
              pdVar17[1] = pdVar17[3];
              pdVar17[3] = dVar18;
            }
          }
        }
        dVar18 = param_2[-2];
        dVar7 = *pdVar6;
        if (dVar18 < dVar7) {
          *pdVar6 = dVar18;
          param_2[-2] = dVar7;
          dVar18 = pdVar17[7];
          pdVar17[7] = param_2[-1];
          param_2[-1] = dVar18;
          dVar18 = *pdVar5;
          if (*pdVar6 < dVar18) {
            *pdVar5 = *pdVar6;
            *pdVar6 = dVar18;
            dVar18 = pdVar17[5];
            pdVar17[5] = pdVar17[7];
            pdVar17[7] = dVar18;
            dVar18 = *pdVar4;
            if (*pdVar5 < dVar18) {
              *pdVar4 = *pdVar5;
              *pdVar5 = dVar18;
              dVar18 = pdVar17[3];
              pdVar17[3] = pdVar17[5];
              pdVar17[5] = dVar18;
              dVar18 = *pdVar17;
              if (*pdVar4 < dVar18) {
                *pdVar17 = *pdVar4;
                *pdVar4 = dVar18;
                dVar18 = pdVar17[1];
                pdVar17[1] = pdVar17[3];
                pdVar17[3] = dVar18;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      pdVar4 = pdVar17 + 2;
      if ((param_4 & 1) == 0) {
        if (pdVar17 == param_2 || pdVar4 == param_2) {
          return;
        }
        pdVar5 = pdVar17 + 3;
        do {
          pdVar6 = pdVar4;
          dVar18 = pdVar17[2];
          dVar7 = *pdVar17;
          if (dVar18 < dVar7) {
            dVar19 = pdVar17[3];
            pdVar4 = pdVar5;
            do {
              pdVar17 = pdVar4;
              pdVar17[-1] = dVar7;
              pdVar4 = pdVar17 + -2;
              *pdVar17 = *pdVar4;
              dVar7 = pdVar17[-5];
            } while (dVar18 < dVar7);
            pdVar17[-3] = dVar18;
            *pdVar4 = dVar19;
          }
          pdVar4 = pdVar6 + 2;
          pdVar5 = pdVar5 + 2;
          pdVar17 = pdVar6;
        } while (pdVar4 != param_2);
        return;
      }
      if (pdVar17 == param_2 || pdVar4 == param_2) {
        return;
      }
      lVar12 = 0;
      pdVar5 = pdVar17;
      do {
        pdVar6 = pdVar4;
        dVar18 = pdVar5[2];
        dVar7 = *pdVar5;
        if (dVar18 < dVar7) {
          dVar19 = pdVar5[3];
          lVar3 = lVar12;
          do {
            lVar14 = lVar3;
            *(double *)((long)pdVar17 + lVar14 + 0x10) = dVar7;
            *(undefined8 *)((long)pdVar17 + lVar14 + 0x18) =
                 *(undefined8 *)((long)pdVar17 + lVar14 + 8);
            pdVar4 = pdVar17;
            if (lVar14 == 0) goto LAB_1094a1f6c;
            dVar7 = *(double *)((long)pdVar17 + lVar14 + -0x10);
            lVar3 = lVar14 + -0x10;
          } while (dVar18 < dVar7);
          pdVar4 = (double *)((long)pdVar17 + lVar14);
LAB_1094a1f6c:
          *pdVar4 = dVar18;
          pdVar4[1] = dVar19;
        }
        pdVar4 = pdVar6 + 2;
        lVar12 = lVar12 + 0x10;
        pdVar5 = pdVar6;
        if (pdVar4 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pdVar17 == param_2) {
        return;
      }
      uVar8 = uVar10 - 2 >> 1;
      uVar16 = uVar8;
      do {
        if ((long)uVar16 <= (long)uVar8) {
          uVar15 = uVar16 << 1 | 1;
          pdVar4 = pdVar17 + uVar15 * 2;
          uVar11 = uVar16 * 2 + 2;
          if (((long)uVar11 < (long)uVar10) && (*pdVar4 < pdVar4[2])) {
            uVar15 = uVar11;
            pdVar4 = pdVar4 + 2;
          }
          pdVar5 = pdVar17 + uVar16 * 2;
          dVar7 = *pdVar4;
          dVar18 = *pdVar5;
          if (dVar18 <= dVar7) {
            dVar19 = pdVar5[1];
            do {
              pdVar6 = pdVar4;
              *pdVar5 = dVar7;
              pdVar5[1] = pdVar6[1];
              if ((long)uVar8 < (long)uVar15) break;
              uVar1 = uVar15 << 1 | 1;
              pdVar4 = pdVar17 + uVar1 * 2;
              uVar11 = uVar15 * 2 + 2;
              uVar15 = uVar1;
              if (((long)uVar11 < (long)uVar10) && (*pdVar4 < pdVar4[2])) {
                uVar15 = uVar11;
                pdVar4 = pdVar4 + 2;
              }
              dVar7 = *pdVar4;
              pdVar5 = pdVar6;
            } while (dVar18 <= dVar7);
            *pdVar6 = dVar18;
            pdVar6[1] = dVar19;
          }
        }
        bVar2 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar2);
      do {
        dVar7 = *pdVar17;
        dVar18 = pdVar17[1];
        pdVar4 = pdVar17;
        uVar16 = 0;
        do {
          uVar11 = uVar16 << 1 | 1;
          uVar8 = uVar16 * 2 + 2;
          pdVar5 = pdVar4 + uVar16 * 2 + 2;
          if (((long)uVar8 < (long)uVar10) && (pdVar4[uVar16 * 2 + 2] < pdVar4[uVar16 * 2 + 4])) {
            pdVar5 = pdVar4 + uVar16 * 2 + 4;
            uVar11 = uVar8;
          }
          *pdVar4 = *pdVar5;
          pdVar4[1] = pdVar5[1];
          pdVar4 = pdVar5;
          uVar16 = uVar11;
        } while ((long)uVar11 <= (long)(uVar10 - 2 >> 1));
        if (pdVar5 == param_2 + -2) {
          *pdVar5 = dVar7;
          pdVar5[1] = dVar18;
        }
        else {
          *pdVar5 = param_2[-2];
          pdVar5[1] = param_2[-1];
          param_2[-2] = dVar7;
          param_2[-1] = dVar18;
          lVar12 = (long)((long)pdVar5 + (0x10 - (long)pdVar17)) >> 4;
          if (1 < lVar12) {
            uVar16 = lVar12 - 2U >> 1;
            dVar7 = pdVar17[uVar16 * 2];
            dVar18 = *pdVar5;
            if (dVar7 < dVar18) {
              dVar19 = pdVar5[1];
              pdVar4 = pdVar17 + uVar16 * 2;
              do {
                pdVar6 = pdVar4;
                *pdVar5 = dVar7;
                pdVar5[1] = pdVar6[1];
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1 >> 1;
                dVar7 = pdVar17[uVar16 * 2];
                pdVar5 = pdVar6;
                pdVar4 = pdVar17 + uVar16 * 2;
              } while (dVar7 < dVar18);
              *pdVar6 = dVar18;
              pdVar6[1] = dVar19;
            }
          }
        }
        bVar2 = (long)uVar10 < 3;
        uVar10 = uVar10 - 1;
        param_2 = param_2 + -2;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    pdVar4 = pdVar17 + (uVar10 & 0xfffffffffffffffe);
    dVar18 = param_2[-2];
    if (uVar10 < 0x81) {
      dVar19 = *pdVar17;
      dVar7 = *pdVar4;
      if (dVar7 <= dVar19) {
        if (dVar18 < dVar19) {
          *pdVar17 = dVar18;
          param_2[-2] = dVar19;
          dVar18 = pdVar17[1];
          pdVar17[1] = param_2[-1];
          param_2[-1] = dVar18;
          dVar18 = *pdVar4;
          if (*pdVar17 < dVar18) {
            *pdVar4 = *pdVar17;
            *pdVar17 = dVar18;
            dVar18 = pdVar4[1];
            pdVar4[1] = pdVar17[1];
            pdVar17[1] = dVar18;
          }
        }
      }
      else {
        if (dVar19 <= dVar18) {
          *pdVar4 = dVar19;
          *pdVar17 = dVar7;
          dVar18 = pdVar4[1];
          pdVar4[1] = pdVar17[1];
          pdVar17[1] = dVar18;
          if (dVar7 <= param_2[-2]) goto LAB_1094a1c3c;
          *pdVar17 = param_2[-2];
          param_2[-2] = dVar7;
          pdVar17[1] = param_2[-1];
        }
        else {
          *pdVar4 = dVar18;
          param_2[-2] = dVar7;
          dVar18 = pdVar4[1];
          pdVar4[1] = param_2[-1];
        }
        param_2[-1] = dVar18;
      }
    }
    else {
      dVar19 = *pdVar4;
      dVar7 = *pdVar17;
      if (dVar7 <= dVar19) {
        if (dVar18 < dVar19) {
          *pdVar4 = dVar18;
          param_2[-2] = dVar19;
          dVar18 = pdVar4[1];
          pdVar4[1] = param_2[-1];
          param_2[-1] = dVar18;
          dVar18 = *pdVar17;
          if (*pdVar4 < dVar18) {
            *pdVar17 = *pdVar4;
            *pdVar4 = dVar18;
            dVar18 = pdVar17[1];
            pdVar17[1] = pdVar4[1];
            pdVar4[1] = dVar18;
          }
        }
      }
      else {
        if (dVar19 <= dVar18) {
          *pdVar17 = dVar19;
          *pdVar4 = dVar7;
          dVar18 = pdVar17[1];
          pdVar17[1] = pdVar4[1];
          pdVar4[1] = dVar18;
          if (dVar7 <= param_2[-2]) goto LAB_1094a19bc;
          *pdVar4 = param_2[-2];
          param_2[-2] = dVar7;
          pdVar4[1] = param_2[-1];
        }
        else {
          *pdVar17 = dVar18;
          param_2[-2] = dVar7;
          dVar18 = pdVar17[1];
          pdVar17[1] = param_2[-1];
        }
        param_2[-1] = dVar18;
      }
LAB_1094a19bc:
      dVar7 = pdVar4[-2];
      dVar18 = pdVar17[2];
      dVar19 = param_2[-4];
      if (dVar18 <= dVar7) {
        if (dVar19 < dVar7) {
          pdVar4[-2] = dVar19;
          param_2[-4] = dVar7;
          dVar18 = pdVar4[-1];
          pdVar4[-1] = param_2[-3];
          param_2[-3] = dVar18;
          dVar18 = pdVar17[2];
          if (pdVar4[-2] < dVar18) {
            pdVar17[2] = pdVar4[-2];
            pdVar4[-2] = dVar18;
            dVar18 = pdVar17[3];
            pdVar17[3] = pdVar4[-1];
            pdVar4[-1] = dVar18;
          }
        }
      }
      else {
        if (dVar7 <= dVar19) {
          pdVar17[2] = dVar7;
          pdVar4[-2] = dVar18;
          dVar7 = pdVar17[3];
          pdVar17[3] = pdVar4[-1];
          pdVar4[-1] = dVar7;
          if (dVar18 <= param_2[-4]) goto LAB_1094a1ab0;
          pdVar4[-2] = param_2[-4];
          param_2[-4] = dVar18;
          pdVar4[-1] = param_2[-3];
        }
        else {
          pdVar17[2] = dVar19;
          param_2[-4] = dVar18;
          dVar7 = pdVar17[3];
          pdVar17[3] = param_2[-3];
        }
        param_2[-3] = dVar7;
      }
LAB_1094a1ab0:
      dVar7 = pdVar4[2];
      dVar18 = pdVar17[4];
      dVar19 = param_2[-6];
      if (dVar18 <= dVar7) {
        if (dVar19 < dVar7) {
          pdVar4[2] = dVar19;
          param_2[-6] = dVar7;
          dVar18 = pdVar4[3];
          pdVar4[3] = param_2[-5];
          param_2[-5] = dVar18;
          dVar18 = pdVar17[4];
          if (pdVar4[2] < dVar18) {
            pdVar17[4] = pdVar4[2];
            pdVar4[2] = dVar18;
            dVar18 = pdVar17[5];
            pdVar17[5] = pdVar4[3];
            pdVar4[3] = dVar18;
          }
        }
      }
      else {
        if (dVar7 <= dVar19) {
          pdVar17[4] = dVar7;
          pdVar4[2] = dVar18;
          dVar7 = pdVar17[5];
          pdVar17[5] = pdVar4[3];
          pdVar4[3] = dVar7;
          if (dVar18 <= param_2[-6]) goto LAB_1094a1b68;
          pdVar4[2] = param_2[-6];
          param_2[-6] = dVar18;
          pdVar4[3] = param_2[-5];
        }
        else {
          pdVar17[4] = dVar19;
          param_2[-6] = dVar18;
          dVar7 = pdVar17[5];
          pdVar17[5] = param_2[-5];
        }
        param_2[-5] = dVar7;
      }
LAB_1094a1b68:
      dVar18 = *pdVar4;
      dVar7 = pdVar4[-2];
      dVar19 = pdVar4[2];
      if (dVar7 <= dVar18) {
        if (dVar19 < dVar18) {
          *pdVar4 = dVar19;
          pdVar4[2] = dVar18;
          dVar18 = pdVar4[1];
          dVar20 = pdVar4[3];
          pdVar4[1] = dVar20;
          pdVar4[3] = dVar18;
          dVar18 = dVar19;
          if (dVar19 < dVar7) {
            pdVar4[-2] = dVar19;
            *pdVar4 = dVar7;
            dVar18 = pdVar4[-1];
            pdVar4[-1] = dVar20;
            pdVar4[1] = dVar18;
            dVar18 = dVar7;
          }
        }
      }
      else if (dVar18 <= dVar19) {
        pdVar4[-2] = dVar18;
        *pdVar4 = dVar7;
        dVar20 = pdVar4[-1];
        pdVar4[-1] = pdVar4[1];
        pdVar4[1] = dVar20;
        dVar18 = dVar7;
        if (dVar19 < dVar7) {
          *pdVar4 = dVar19;
          pdVar4[2] = dVar7;
          pdVar4[1] = pdVar4[3];
          pdVar4[3] = dVar20;
          dVar18 = dVar19;
        }
      }
      else {
        pdVar4[-2] = dVar19;
        pdVar4[2] = dVar7;
        dVar7 = pdVar4[-1];
        pdVar4[-1] = pdVar4[3];
        pdVar4[3] = dVar7;
      }
      dVar7 = *pdVar17;
      *pdVar17 = dVar18;
      *pdVar4 = dVar7;
      dVar18 = pdVar17[1];
      pdVar17[1] = pdVar4[1];
      pdVar4[1] = dVar18;
    }
LAB_1094a1c3c:
    param_3 = param_3 + -1;
    dVar18 = *pdVar17;
    pdVar4 = pdVar17;
    if (((param_4 & 1) == 0) && (dVar18 <= pdVar17[-2])) {
      if (param_2[-2] <= dVar18) {
        do {
          pdVar4 = pdVar4 + 2;
          if (param_2 <= pdVar4) break;
        } while (*pdVar4 <= dVar18);
      }
      else {
        do {
          pdVar4 = pdVar4 + 2;
        } while (*pdVar4 <= dVar18);
      }
      pdVar5 = param_2;
      if (pdVar4 < param_2) {
        do {
          pdVar5 = pdVar5 + -2;
        } while (dVar18 < *pdVar5);
      }
      dVar7 = pdVar17[1];
      if (pdVar4 < pdVar5) {
        dVar19 = *pdVar4;
        dVar20 = *pdVar5;
        do {
          *pdVar4 = dVar20;
          *pdVar5 = dVar19;
          dVar19 = pdVar4[1];
          pdVar4[1] = pdVar5[1];
          pdVar5[1] = dVar19;
          do {
            pdVar4 = pdVar4 + 2;
            dVar19 = *pdVar4;
          } while (dVar19 <= dVar18);
          do {
            pdVar5 = pdVar5 + -2;
            dVar20 = *pdVar5;
          } while (dVar18 < dVar20);
        } while (pdVar4 < pdVar5);
      }
      if (pdVar4 + -2 != pdVar17) {
        *pdVar17 = pdVar4[-2];
        pdVar17[1] = pdVar4[-1];
      }
      param_4 = 0;
      pdVar4[-2] = dVar18;
      pdVar4[-1] = dVar7;
      goto LAB_1094a1830;
    }
    lVar12 = 0;
    dVar7 = pdVar17[1];
    do {
      dVar19 = *(double *)((long)pdVar17 + lVar12 + 0x10);
      lVar12 = lVar12 + 0x10;
    } while (dVar19 < dVar18);
    pdVar5 = (double *)((long)pdVar17 + lVar12);
    pdVar6 = param_2;
    if (lVar12 == 0x10) {
      do {
        if (pdVar6 <= pdVar5) break;
        pdVar6 = pdVar6 + -2;
      } while (dVar18 <= *pdVar6);
    }
    else {
      do {
        pdVar6 = pdVar6 + -2;
      } while (dVar18 <= *pdVar6);
    }
    pdVar4 = pdVar5;
    if (pdVar5 < pdVar6) {
      dVar20 = *pdVar6;
      pdVar13 = pdVar6;
      do {
        *pdVar4 = dVar20;
        *pdVar13 = dVar19;
        dVar19 = pdVar4[1];
        pdVar4[1] = pdVar13[1];
        pdVar13[1] = dVar19;
        do {
          pdVar4 = pdVar4 + 2;
          dVar19 = *pdVar4;
        } while (dVar19 < dVar18);
        do {
          pdVar13 = pdVar13 + -2;
          dVar20 = *pdVar13;
        } while (dVar18 <= dVar20);
      } while (pdVar4 < pdVar13);
    }
    pdVar13 = pdVar4 + -2;
    if (pdVar13 != pdVar17) {
      *pdVar17 = pdVar4[-2];
      pdVar17[1] = pdVar4[-1];
    }
    pdVar4[-2] = dVar18;
    pdVar4[-1] = dVar7;
    if (pdVar5 < pdVar6) {
LAB_1094a1d4c:
      FUN_1094a1804(pdVar17,pdVar13,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      pdVar5 = pdVar17;
      FUN_1094a2550(pdVar17,pdVar13);
      pdVar6 = pdVar4;
      FUN_1094a2550(pdVar4,param_2);
      if ((int)pdVar6 == 0) {
        if (((ulong)pdVar5 & 1) == 0) goto LAB_1094a1d4c;
      }
      else {
        pdVar4 = pdVar17;
        param_2 = pdVar13;
        if (((ulong)pdVar5 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 1094a17d0; end: 1094a1803;  */

void FUN_1094a17d0(double *param_1,double *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  ulong uVar7;
  double dVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  double *pdVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000104c4f740();
LAB_1094a1830:
  do {
    pdVar16 = param_1;
    uVar9 = (long)param_2 - (long)pdVar16 >> 4;
    if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        dVar17 = *pdVar16;
        if (dVar17 <= param_2[-2]) {
          return;
        }
        *pdVar16 = param_2[-2];
        param_2[-2] = dVar17;
LAB_1094a1eb4:
        dVar6 = pdVar16[1];
        pdVar16[1] = param_2[-1];
LAB_1094a1ec0:
        param_2[-1] = dVar6;
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        dVar6 = pdVar16[2];
        dVar17 = *pdVar16;
        dVar18 = param_2[-2];
        if (dVar17 <= dVar6) {
          if (dVar6 <= dVar18) {
            return;
          }
          pdVar16[2] = dVar18;
          param_2[-2] = dVar6;
          dVar17 = pdVar16[3];
          pdVar16[3] = param_2[-1];
          param_2[-1] = dVar17;
          dVar17 = *pdVar16;
          if (dVar17 <= pdVar16[2]) {
            return;
          }
          *pdVar16 = pdVar16[2];
          pdVar16[2] = dVar17;
          dVar17 = pdVar16[1];
          pdVar16[1] = pdVar16[3];
          pdVar16[3] = dVar17;
          return;
        }
        if (dVar6 <= dVar18) {
          *pdVar16 = dVar6;
          pdVar16[2] = dVar17;
          dVar6 = pdVar16[1];
          pdVar16[1] = pdVar16[3];
          pdVar16[3] = dVar6;
          if (dVar17 <= param_2[-2]) {
            return;
          }
          pdVar16[2] = param_2[-2];
          param_2[-2] = dVar17;
          pdVar16[3] = param_2[-1];
          goto LAB_1094a1ec0;
        }
        *pdVar16 = dVar18;
        param_2[-2] = dVar17;
        goto LAB_1094a1eb4;
      }
      if (uVar9 == 4) {
        dVar6 = pdVar16[2];
        dVar18 = *pdVar16;
        dVar19 = pdVar16[4];
        dVar17 = dVar19;
        if (dVar18 <= dVar6) {
          if (dVar19 < dVar6) {
            pdVar16[2] = dVar19;
            pdVar16[4] = dVar6;
            dVar17 = pdVar16[3];
            dVar8 = pdVar16[5];
            pdVar16[3] = dVar8;
            pdVar16[5] = dVar17;
            dVar17 = dVar6;
            if (dVar19 < dVar18) {
              *pdVar16 = dVar19;
              pdVar16[2] = dVar18;
              dVar6 = pdVar16[1];
              pdVar16[1] = dVar8;
              pdVar16[3] = dVar6;
            }
          }
        }
        else {
          if (dVar6 <= dVar19) {
            *pdVar16 = dVar6;
            pdVar16[2] = dVar18;
            dVar6 = pdVar16[1];
            pdVar16[1] = pdVar16[3];
            pdVar16[3] = dVar6;
            if (dVar18 <= dVar19) goto LAB_1094a22ec;
            pdVar16[2] = dVar19;
            pdVar16[4] = dVar18;
            pdVar16[3] = pdVar16[5];
          }
          else {
            *pdVar16 = dVar19;
            pdVar16[4] = dVar18;
            dVar6 = pdVar16[1];
            pdVar16[1] = pdVar16[5];
          }
          pdVar16[5] = dVar6;
          dVar17 = dVar18;
        }
LAB_1094a22ec:
        if (dVar17 <= param_2[-2]) {
          return;
        }
        pdVar16[4] = param_2[-2];
        param_2[-2] = dVar17;
        dVar17 = pdVar16[5];
        pdVar16[5] = param_2[-1];
        param_2[-1] = dVar17;
        dVar17 = pdVar16[4];
        dVar6 = pdVar16[2];
        if (dVar6 <= dVar17) {
          return;
        }
        pdVar16[2] = dVar17;
        pdVar16[4] = dVar6;
        dVar18 = pdVar16[3];
        dVar6 = pdVar16[5];
        pdVar16[3] = dVar6;
        pdVar16[5] = dVar18;
        dVar18 = *pdVar16;
        if (dVar18 <= dVar17) {
          return;
        }
        *pdVar16 = dVar17;
        pdVar16[2] = dVar18;
        dVar17 = pdVar16[1];
        pdVar16[1] = dVar6;
        pdVar16[3] = dVar17;
        return;
      }
      if (uVar9 == 5) {
        pdVar4 = pdVar16 + 2;
        pdVar5 = pdVar16 + 4;
        pdVar12 = pdVar16 + 6;
        dVar6 = *pdVar4;
        dVar18 = *pdVar16;
        dVar17 = *pdVar5;
        if (dVar18 <= dVar6) {
          if (dVar17 < dVar6) {
            *pdVar4 = dVar17;
            *pdVar5 = dVar6;
            dVar17 = pdVar16[3];
            pdVar16[3] = pdVar16[5];
            pdVar16[5] = dVar17;
            dVar18 = *pdVar16;
            dVar17 = dVar6;
            if (*pdVar4 < dVar18) {
              *pdVar16 = *pdVar4;
              *pdVar4 = dVar18;
              dVar17 = pdVar16[1];
              pdVar16[1] = pdVar16[3];
              pdVar16[3] = dVar17;
              dVar17 = *pdVar5;
            }
          }
        }
        else {
          if (dVar6 <= dVar17) {
            *pdVar16 = dVar6;
            *pdVar4 = dVar18;
            dVar6 = pdVar16[1];
            pdVar16[1] = pdVar16[3];
            pdVar16[3] = dVar6;
            dVar17 = *pdVar5;
            if (dVar18 <= dVar17) goto LAB_1094a2438;
            *pdVar4 = dVar17;
            *pdVar5 = dVar18;
            pdVar16[3] = pdVar16[5];
          }
          else {
            *pdVar16 = dVar17;
            *pdVar5 = dVar18;
            dVar6 = pdVar16[1];
            pdVar16[1] = pdVar16[5];
          }
          pdVar16[5] = dVar6;
          dVar17 = dVar18;
        }
LAB_1094a2438:
        if (*pdVar12 < dVar17) {
          *pdVar5 = *pdVar12;
          *pdVar12 = dVar17;
          dVar17 = pdVar16[5];
          pdVar16[5] = pdVar16[7];
          pdVar16[7] = dVar17;
          dVar17 = *pdVar4;
          if (*pdVar5 < dVar17) {
            *pdVar4 = *pdVar5;
            *pdVar5 = dVar17;
            dVar17 = pdVar16[3];
            pdVar16[3] = pdVar16[5];
            pdVar16[5] = dVar17;
            dVar17 = *pdVar16;
            if (*pdVar4 < dVar17) {
              *pdVar16 = *pdVar4;
              *pdVar4 = dVar17;
              dVar17 = pdVar16[1];
              pdVar16[1] = pdVar16[3];
              pdVar16[3] = dVar17;
            }
          }
        }
        dVar17 = param_2[-2];
        dVar6 = *pdVar12;
        if (dVar17 < dVar6) {
          *pdVar12 = dVar17;
          param_2[-2] = dVar6;
          dVar17 = pdVar16[7];
          pdVar16[7] = param_2[-1];
          param_2[-1] = dVar17;
          dVar17 = *pdVar5;
          if (*pdVar12 < dVar17) {
            *pdVar5 = *pdVar12;
            *pdVar12 = dVar17;
            dVar17 = pdVar16[5];
            pdVar16[5] = pdVar16[7];
            pdVar16[7] = dVar17;
            dVar17 = *pdVar4;
            if (*pdVar5 < dVar17) {
              *pdVar4 = *pdVar5;
              *pdVar5 = dVar17;
              dVar17 = pdVar16[3];
              pdVar16[3] = pdVar16[5];
              pdVar16[5] = dVar17;
              dVar17 = *pdVar16;
              if (*pdVar4 < dVar17) {
                *pdVar16 = *pdVar4;
                *pdVar4 = dVar17;
                dVar17 = pdVar16[1];
                pdVar16[1] = pdVar16[3];
                pdVar16[3] = dVar17;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar9 < 0x18) {
      pdVar4 = pdVar16 + 2;
      if ((param_4 & 1) == 0) {
        if (pdVar16 == param_2 || pdVar4 == param_2) {
          return;
        }
        pdVar5 = pdVar16 + 3;
        do {
          pdVar12 = pdVar4;
          dVar17 = pdVar16[2];
          dVar6 = *pdVar16;
          if (dVar17 < dVar6) {
            dVar18 = pdVar16[3];
            pdVar16 = pdVar5;
            do {
              pdVar4 = pdVar16;
              pdVar4[-1] = dVar6;
              pdVar16 = pdVar4 + -2;
              *pdVar4 = *pdVar16;
              dVar6 = pdVar4[-5];
            } while (dVar17 < dVar6);
            pdVar4[-3] = dVar17;
            *pdVar16 = dVar18;
          }
          pdVar4 = pdVar12 + 2;
          pdVar5 = pdVar5 + 2;
          pdVar16 = pdVar12;
        } while (pdVar4 != param_2);
        return;
      }
      if (pdVar16 == param_2 || pdVar4 == param_2) {
        return;
      }
      lVar11 = 0;
      pdVar5 = pdVar16;
      do {
        pdVar12 = pdVar4;
        dVar17 = pdVar5[2];
        dVar6 = *pdVar5;
        if (dVar17 < dVar6) {
          dVar18 = pdVar5[3];
          lVar3 = lVar11;
          do {
            lVar13 = lVar3;
            *(double *)((long)pdVar16 + lVar13 + 0x10) = dVar6;
            *(undefined8 *)((long)pdVar16 + lVar13 + 0x18) =
                 *(undefined8 *)((long)pdVar16 + lVar13 + 8);
            pdVar4 = pdVar16;
            if (lVar13 == 0) goto LAB_1094a1f6c;
            dVar6 = *(double *)((long)pdVar16 + lVar13 + -0x10);
            lVar3 = lVar13 + -0x10;
          } while (dVar17 < dVar6);
          pdVar4 = (double *)((long)pdVar16 + lVar13);
LAB_1094a1f6c:
          *pdVar4 = dVar17;
          pdVar4[1] = dVar18;
        }
        pdVar4 = pdVar12 + 2;
        lVar11 = lVar11 + 0x10;
        pdVar5 = pdVar12;
        if (pdVar4 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pdVar16 == param_2) {
        return;
      }
      uVar7 = uVar9 - 2 >> 1;
      uVar15 = uVar7;
      do {
        if ((long)uVar15 <= (long)uVar7) {
          uVar14 = uVar15 << 1 | 1;
          pdVar4 = pdVar16 + uVar14 * 2;
          uVar10 = uVar15 * 2 + 2;
          if (((long)uVar10 < (long)uVar9) && (*pdVar4 < pdVar4[2])) {
            uVar14 = uVar10;
            pdVar4 = pdVar4 + 2;
          }
          pdVar5 = pdVar16 + uVar15 * 2;
          dVar6 = *pdVar4;
          dVar17 = *pdVar5;
          if (dVar17 <= dVar6) {
            dVar18 = pdVar5[1];
            do {
              pdVar12 = pdVar4;
              *pdVar5 = dVar6;
              pdVar5[1] = pdVar12[1];
              if ((long)uVar7 < (long)uVar14) break;
              uVar1 = uVar14 << 1 | 1;
              pdVar4 = pdVar16 + uVar1 * 2;
              uVar10 = uVar14 * 2 + 2;
              uVar14 = uVar1;
              if (((long)uVar10 < (long)uVar9) && (*pdVar4 < pdVar4[2])) {
                uVar14 = uVar10;
                pdVar4 = pdVar4 + 2;
              }
              dVar6 = *pdVar4;
              pdVar5 = pdVar12;
            } while (dVar17 <= dVar6);
            *pdVar12 = dVar17;
            pdVar12[1] = dVar18;
          }
        }
        bVar2 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar2);
      do {
        dVar6 = *pdVar16;
        dVar17 = pdVar16[1];
        pdVar4 = pdVar16;
        uVar15 = 0;
        do {
          uVar10 = uVar15 << 1 | 1;
          uVar7 = uVar15 * 2 + 2;
          pdVar5 = pdVar4 + uVar15 * 2 + 2;
          if (((long)uVar7 < (long)uVar9) && (pdVar4[uVar15 * 2 + 2] < pdVar4[uVar15 * 2 + 4])) {
            pdVar5 = pdVar4 + uVar15 * 2 + 4;
            uVar10 = uVar7;
          }
          *pdVar4 = *pdVar5;
          pdVar4[1] = pdVar5[1];
          pdVar4 = pdVar5;
          uVar15 = uVar10;
        } while ((long)uVar10 <= (long)(uVar9 - 2 >> 1));
        if (pdVar5 == param_2 + -2) {
          *pdVar5 = dVar6;
          pdVar5[1] = dVar17;
        }
        else {
          *pdVar5 = param_2[-2];
          pdVar5[1] = param_2[-1];
          param_2[-2] = dVar6;
          param_2[-1] = dVar17;
          lVar11 = (long)pdVar5 + (0x10 - (long)pdVar16) >> 4;
          if (1 < lVar11) {
            uVar15 = lVar11 - 2U >> 1;
            dVar6 = pdVar16[uVar15 * 2];
            dVar17 = *pdVar5;
            if (dVar6 < dVar17) {
              dVar18 = pdVar5[1];
              pdVar4 = pdVar16 + uVar15 * 2;
              do {
                pdVar12 = pdVar4;
                *pdVar5 = dVar6;
                pdVar5[1] = pdVar12[1];
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1 >> 1;
                dVar6 = pdVar16[uVar15 * 2];
                pdVar5 = pdVar12;
                pdVar4 = pdVar16 + uVar15 * 2;
              } while (dVar6 < dVar17);
              *pdVar12 = dVar17;
              pdVar12[1] = dVar18;
            }
          }
        }
        bVar2 = (long)uVar9 < 3;
        uVar9 = uVar9 - 1;
        param_2 = param_2 + -2;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    pdVar4 = pdVar16 + (uVar9 & 0xfffffffffffffffe);
    dVar17 = param_2[-2];
    if (uVar9 < 0x81) {
      dVar18 = *pdVar16;
      dVar6 = *pdVar4;
      if (dVar6 <= dVar18) {
        if (dVar17 < dVar18) {
          *pdVar16 = dVar17;
          param_2[-2] = dVar18;
          dVar17 = pdVar16[1];
          pdVar16[1] = param_2[-1];
          param_2[-1] = dVar17;
          dVar17 = *pdVar4;
          if (*pdVar16 < dVar17) {
            *pdVar4 = *pdVar16;
            *pdVar16 = dVar17;
            dVar17 = pdVar4[1];
            pdVar4[1] = pdVar16[1];
            pdVar16[1] = dVar17;
          }
        }
      }
      else {
        if (dVar18 <= dVar17) {
          *pdVar4 = dVar18;
          *pdVar16 = dVar6;
          dVar17 = pdVar4[1];
          pdVar4[1] = pdVar16[1];
          pdVar16[1] = dVar17;
          if (dVar6 <= param_2[-2]) goto LAB_1094a1c3c;
          *pdVar16 = param_2[-2];
          param_2[-2] = dVar6;
          pdVar16[1] = param_2[-1];
        }
        else {
          *pdVar4 = dVar17;
          param_2[-2] = dVar6;
          dVar17 = pdVar4[1];
          pdVar4[1] = param_2[-1];
        }
        param_2[-1] = dVar17;
      }
    }
    else {
      dVar18 = *pdVar4;
      dVar6 = *pdVar16;
      if (dVar6 <= dVar18) {
        if (dVar17 < dVar18) {
          *pdVar4 = dVar17;
          param_2[-2] = dVar18;
          dVar17 = pdVar4[1];
          pdVar4[1] = param_2[-1];
          param_2[-1] = dVar17;
          dVar17 = *pdVar16;
          if (*pdVar4 < dVar17) {
            *pdVar16 = *pdVar4;
            *pdVar4 = dVar17;
            dVar17 = pdVar16[1];
            pdVar16[1] = pdVar4[1];
            pdVar4[1] = dVar17;
          }
        }
      }
      else {
        if (dVar18 <= dVar17) {
          *pdVar16 = dVar18;
          *pdVar4 = dVar6;
          dVar17 = pdVar16[1];
          pdVar16[1] = pdVar4[1];
          pdVar4[1] = dVar17;
          if (dVar6 <= param_2[-2]) goto LAB_1094a19bc;
          *pdVar4 = param_2[-2];
          param_2[-2] = dVar6;
          pdVar4[1] = param_2[-1];
        }
        else {
          *pdVar16 = dVar17;
          param_2[-2] = dVar6;
          dVar17 = pdVar16[1];
          pdVar16[1] = param_2[-1];
        }
        param_2[-1] = dVar17;
      }
LAB_1094a19bc:
      dVar6 = pdVar4[-2];
      dVar17 = pdVar16[2];
      dVar18 = param_2[-4];
      if (dVar17 <= dVar6) {
        if (dVar18 < dVar6) {
          pdVar4[-2] = dVar18;
          param_2[-4] = dVar6;
          dVar17 = pdVar4[-1];
          pdVar4[-1] = param_2[-3];
          param_2[-3] = dVar17;
          dVar17 = pdVar16[2];
          if (pdVar4[-2] < dVar17) {
            pdVar16[2] = pdVar4[-2];
            pdVar4[-2] = dVar17;
            dVar17 = pdVar16[3];
            pdVar16[3] = pdVar4[-1];
            pdVar4[-1] = dVar17;
          }
        }
      }
      else {
        if (dVar6 <= dVar18) {
          pdVar16[2] = dVar6;
          pdVar4[-2] = dVar17;
          dVar6 = pdVar16[3];
          pdVar16[3] = pdVar4[-1];
          pdVar4[-1] = dVar6;
          if (dVar17 <= param_2[-4]) goto LAB_1094a1ab0;
          pdVar4[-2] = param_2[-4];
          param_2[-4] = dVar17;
          pdVar4[-1] = param_2[-3];
        }
        else {
          pdVar16[2] = dVar18;
          param_2[-4] = dVar17;
          dVar6 = pdVar16[3];
          pdVar16[3] = param_2[-3];
        }
        param_2[-3] = dVar6;
      }
LAB_1094a1ab0:
      dVar6 = pdVar4[2];
      dVar17 = pdVar16[4];
      dVar18 = param_2[-6];
      if (dVar17 <= dVar6) {
        if (dVar18 < dVar6) {
          pdVar4[2] = dVar18;
          param_2[-6] = dVar6;
          dVar17 = pdVar4[3];
          pdVar4[3] = param_2[-5];
          param_2[-5] = dVar17;
          dVar17 = pdVar16[4];
          if (pdVar4[2] < dVar17) {
            pdVar16[4] = pdVar4[2];
            pdVar4[2] = dVar17;
            dVar17 = pdVar16[5];
            pdVar16[5] = pdVar4[3];
            pdVar4[3] = dVar17;
          }
        }
      }
      else {
        if (dVar6 <= dVar18) {
          pdVar16[4] = dVar6;
          pdVar4[2] = dVar17;
          dVar6 = pdVar16[5];
          pdVar16[5] = pdVar4[3];
          pdVar4[3] = dVar6;
          if (dVar17 <= param_2[-6]) goto LAB_1094a1b68;
          pdVar4[2] = param_2[-6];
          param_2[-6] = dVar17;
          pdVar4[3] = param_2[-5];
        }
        else {
          pdVar16[4] = dVar18;
          param_2[-6] = dVar17;
          dVar6 = pdVar16[5];
          pdVar16[5] = param_2[-5];
        }
        param_2[-5] = dVar6;
      }
LAB_1094a1b68:
      dVar17 = *pdVar4;
      dVar6 = pdVar4[-2];
      dVar18 = pdVar4[2];
      if (dVar6 <= dVar17) {
        if (dVar18 < dVar17) {
          *pdVar4 = dVar18;
          pdVar4[2] = dVar17;
          dVar17 = pdVar4[1];
          dVar19 = pdVar4[3];
          pdVar4[1] = dVar19;
          pdVar4[3] = dVar17;
          dVar17 = dVar18;
          if (dVar18 < dVar6) {
            pdVar4[-2] = dVar18;
            *pdVar4 = dVar6;
            dVar17 = pdVar4[-1];
            pdVar4[-1] = dVar19;
            pdVar4[1] = dVar17;
            dVar17 = dVar6;
          }
        }
      }
      else if (dVar17 <= dVar18) {
        pdVar4[-2] = dVar17;
        *pdVar4 = dVar6;
        dVar19 = pdVar4[-1];
        pdVar4[-1] = pdVar4[1];
        pdVar4[1] = dVar19;
        dVar17 = dVar6;
        if (dVar18 < dVar6) {
          *pdVar4 = dVar18;
          pdVar4[2] = dVar6;
          pdVar4[1] = pdVar4[3];
          pdVar4[3] = dVar19;
          dVar17 = dVar18;
        }
      }
      else {
        pdVar4[-2] = dVar18;
        pdVar4[2] = dVar6;
        dVar6 = pdVar4[-1];
        pdVar4[-1] = pdVar4[3];
        pdVar4[3] = dVar6;
      }
      dVar6 = *pdVar16;
      *pdVar16 = dVar17;
      *pdVar4 = dVar6;
      dVar17 = pdVar16[1];
      pdVar16[1] = pdVar4[1];
      pdVar4[1] = dVar17;
    }
LAB_1094a1c3c:
    param_3 = param_3 + -1;
    dVar17 = *pdVar16;
    param_1 = pdVar16;
    if (((param_4 & 1) == 0) && (dVar17 <= pdVar16[-2])) {
      if (param_2[-2] <= dVar17) {
        do {
          param_1 = param_1 + 2;
          if (param_2 <= param_1) break;
        } while (*param_1 <= dVar17);
      }
      else {
        do {
          param_1 = param_1 + 2;
        } while (*param_1 <= dVar17);
      }
      pdVar4 = param_2;
      if (param_1 < param_2) {
        do {
          pdVar4 = pdVar4 + -2;
        } while (dVar17 < *pdVar4);
      }
      dVar6 = pdVar16[1];
      if (param_1 < pdVar4) {
        dVar18 = *param_1;
        dVar19 = *pdVar4;
        do {
          *param_1 = dVar19;
          *pdVar4 = dVar18;
          dVar18 = param_1[1];
          param_1[1] = pdVar4[1];
          pdVar4[1] = dVar18;
          do {
            param_1 = param_1 + 2;
            dVar18 = *param_1;
          } while (dVar18 <= dVar17);
          do {
            pdVar4 = pdVar4 + -2;
            dVar19 = *pdVar4;
          } while (dVar17 < dVar19);
        } while (param_1 < pdVar4);
      }
      if (param_1 + -2 != pdVar16) {
        *pdVar16 = param_1[-2];
        pdVar16[1] = param_1[-1];
      }
      param_4 = 0;
      param_1[-2] = dVar17;
      param_1[-1] = dVar6;
      goto LAB_1094a1830;
    }
    lVar11 = 0;
    dVar6 = pdVar16[1];
    do {
      dVar18 = *(double *)((long)pdVar16 + lVar11 + 0x10);
      lVar11 = lVar11 + 0x10;
    } while (dVar18 < dVar17);
    pdVar4 = (double *)((long)pdVar16 + lVar11);
    pdVar5 = param_2;
    if (lVar11 == 0x10) {
      do {
        if (pdVar5 <= pdVar4) break;
        pdVar5 = pdVar5 + -2;
      } while (dVar17 <= *pdVar5);
    }
    else {
      do {
        pdVar5 = pdVar5 + -2;
      } while (dVar17 <= *pdVar5);
    }
    param_1 = pdVar4;
    if (pdVar4 < pdVar5) {
      dVar19 = *pdVar5;
      pdVar12 = pdVar5;
      do {
        *param_1 = dVar19;
        *pdVar12 = dVar18;
        dVar18 = param_1[1];
        param_1[1] = pdVar12[1];
        pdVar12[1] = dVar18;
        do {
          param_1 = param_1 + 2;
          dVar18 = *param_1;
        } while (dVar18 < dVar17);
        do {
          pdVar12 = pdVar12 + -2;
          dVar19 = *pdVar12;
        } while (dVar17 <= dVar19);
      } while (param_1 < pdVar12);
    }
    pdVar12 = param_1 + -2;
    if (pdVar12 != pdVar16) {
      *pdVar16 = param_1[-2];
      pdVar16[1] = param_1[-1];
    }
    param_1[-2] = dVar17;
    param_1[-1] = dVar6;
    if (pdVar4 < pdVar5) {
LAB_1094a1d4c:
      FUN_1094a1804(pdVar16,pdVar12,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      pdVar4 = pdVar16;
      FUN_1094a2550(pdVar16,pdVar12);
      pdVar5 = param_1;
      FUN_1094a2550(param_1,param_2);
      if ((int)pdVar5 == 0) {
        if (((ulong)pdVar4 & 1) == 0) goto LAB_1094a1d4c;
      }
      else {
        param_1 = pdVar16;
        param_2 = pdVar12;
        if (((ulong)pdVar4 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 1094a1804; end: 1094a236f;  */

void FUN_1094a1804(double *param_1,double *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  ulong uVar7;
  double dVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  double *pdVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
LAB_1094a1830:
  do {
    pdVar16 = param_1;
    uVar9 = (long)param_2 - (long)pdVar16 >> 4;
    if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        dVar17 = *pdVar16;
        if (dVar17 <= param_2[-2]) {
          return;
        }
        *pdVar16 = param_2[-2];
        param_2[-2] = dVar17;
LAB_1094a1eb4:
        dVar6 = pdVar16[1];
        pdVar16[1] = param_2[-1];
LAB_1094a1ec0:
        param_2[-1] = dVar6;
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        dVar6 = pdVar16[2];
        dVar17 = *pdVar16;
        dVar18 = param_2[-2];
        if (dVar17 <= dVar6) {
          if (dVar6 <= dVar18) {
            return;
          }
          pdVar16[2] = dVar18;
          param_2[-2] = dVar6;
          dVar17 = pdVar16[3];
          pdVar16[3] = param_2[-1];
          param_2[-1] = dVar17;
          dVar17 = *pdVar16;
          if (dVar17 <= pdVar16[2]) {
            return;
          }
          *pdVar16 = pdVar16[2];
          pdVar16[2] = dVar17;
          dVar17 = pdVar16[1];
          pdVar16[1] = pdVar16[3];
          pdVar16[3] = dVar17;
          return;
        }
        if (dVar6 <= dVar18) {
          *pdVar16 = dVar6;
          pdVar16[2] = dVar17;
          dVar6 = pdVar16[1];
          pdVar16[1] = pdVar16[3];
          pdVar16[3] = dVar6;
          if (dVar17 <= param_2[-2]) {
            return;
          }
          pdVar16[2] = param_2[-2];
          param_2[-2] = dVar17;
          pdVar16[3] = param_2[-1];
          goto LAB_1094a1ec0;
        }
        *pdVar16 = dVar18;
        param_2[-2] = dVar17;
        goto LAB_1094a1eb4;
      }
      if (uVar9 == 4) {
        dVar6 = pdVar16[2];
        dVar18 = *pdVar16;
        dVar19 = pdVar16[4];
        dVar17 = dVar19;
        if (dVar18 <= dVar6) {
          if (dVar19 < dVar6) {
            pdVar16[2] = dVar19;
            pdVar16[4] = dVar6;
            dVar17 = pdVar16[3];
            dVar8 = pdVar16[5];
            pdVar16[3] = dVar8;
            pdVar16[5] = dVar17;
            dVar17 = dVar6;
            if (dVar19 < dVar18) {
              *pdVar16 = dVar19;
              pdVar16[2] = dVar18;
              dVar6 = pdVar16[1];
              pdVar16[1] = dVar8;
              pdVar16[3] = dVar6;
            }
          }
        }
        else {
          if (dVar6 <= dVar19) {
            *pdVar16 = dVar6;
            pdVar16[2] = dVar18;
            dVar6 = pdVar16[1];
            pdVar16[1] = pdVar16[3];
            pdVar16[3] = dVar6;
            if (dVar18 <= dVar19) goto LAB_1094a22ec;
            pdVar16[2] = dVar19;
            pdVar16[4] = dVar18;
            pdVar16[3] = pdVar16[5];
          }
          else {
            *pdVar16 = dVar19;
            pdVar16[4] = dVar18;
            dVar6 = pdVar16[1];
            pdVar16[1] = pdVar16[5];
          }
          pdVar16[5] = dVar6;
          dVar17 = dVar18;
        }
LAB_1094a22ec:
        if (dVar17 <= param_2[-2]) {
          return;
        }
        pdVar16[4] = param_2[-2];
        param_2[-2] = dVar17;
        dVar17 = pdVar16[5];
        pdVar16[5] = param_2[-1];
        param_2[-1] = dVar17;
        dVar17 = pdVar16[4];
        dVar6 = pdVar16[2];
        if (dVar6 <= dVar17) {
          return;
        }
        pdVar16[2] = dVar17;
        pdVar16[4] = dVar6;
        dVar18 = pdVar16[3];
        dVar6 = pdVar16[5];
        pdVar16[3] = dVar6;
        pdVar16[5] = dVar18;
        dVar18 = *pdVar16;
        if (dVar18 <= dVar17) {
          return;
        }
        *pdVar16 = dVar17;
        pdVar16[2] = dVar18;
        dVar17 = pdVar16[1];
        pdVar16[1] = dVar6;
        pdVar16[3] = dVar17;
        return;
      }
      if (uVar9 == 5) {
        pdVar4 = pdVar16 + 2;
        pdVar5 = pdVar16 + 4;
        pdVar12 = pdVar16 + 6;
        dVar6 = *pdVar4;
        dVar18 = *pdVar16;
        dVar17 = *pdVar5;
        if (dVar18 <= dVar6) {
          if (dVar17 < dVar6) {
            *pdVar4 = dVar17;
            *pdVar5 = dVar6;
            dVar17 = pdVar16[3];
            pdVar16[3] = pdVar16[5];
            pdVar16[5] = dVar17;
            dVar18 = *pdVar16;
            dVar17 = dVar6;
            if (*pdVar4 < dVar18) {
              *pdVar16 = *pdVar4;
              *pdVar4 = dVar18;
              dVar17 = pdVar16[1];
              pdVar16[1] = pdVar16[3];
              pdVar16[3] = dVar17;
              dVar17 = *pdVar5;
            }
          }
        }
        else {
          if (dVar6 <= dVar17) {
            *pdVar16 = dVar6;
            *pdVar4 = dVar18;
            dVar6 = pdVar16[1];
            pdVar16[1] = pdVar16[3];
            pdVar16[3] = dVar6;
            dVar17 = *pdVar5;
            if (dVar18 <= dVar17) goto LAB_1094a2438;
            *pdVar4 = dVar17;
            *pdVar5 = dVar18;
            pdVar16[3] = pdVar16[5];
          }
          else {
            *pdVar16 = dVar17;
            *pdVar5 = dVar18;
            dVar6 = pdVar16[1];
            pdVar16[1] = pdVar16[5];
          }
          pdVar16[5] = dVar6;
          dVar17 = dVar18;
        }
LAB_1094a2438:
        if (*pdVar12 < dVar17) {
          *pdVar5 = *pdVar12;
          *pdVar12 = dVar17;
          dVar17 = pdVar16[5];
          pdVar16[5] = pdVar16[7];
          pdVar16[7] = dVar17;
          dVar17 = *pdVar4;
          if (*pdVar5 < dVar17) {
            *pdVar4 = *pdVar5;
            *pdVar5 = dVar17;
            dVar17 = pdVar16[3];
            pdVar16[3] = pdVar16[5];
            pdVar16[5] = dVar17;
            dVar17 = *pdVar16;
            if (*pdVar4 < dVar17) {
              *pdVar16 = *pdVar4;
              *pdVar4 = dVar17;
              dVar17 = pdVar16[1];
              pdVar16[1] = pdVar16[3];
              pdVar16[3] = dVar17;
            }
          }
        }
        dVar17 = param_2[-2];
        dVar6 = *pdVar12;
        if (dVar17 < dVar6) {
          *pdVar12 = dVar17;
          param_2[-2] = dVar6;
          dVar17 = pdVar16[7];
          pdVar16[7] = param_2[-1];
          param_2[-1] = dVar17;
          dVar17 = *pdVar5;
          if (*pdVar12 < dVar17) {
            *pdVar5 = *pdVar12;
            *pdVar12 = dVar17;
            dVar17 = pdVar16[5];
            pdVar16[5] = pdVar16[7];
            pdVar16[7] = dVar17;
            dVar17 = *pdVar4;
            if (*pdVar5 < dVar17) {
              *pdVar4 = *pdVar5;
              *pdVar5 = dVar17;
              dVar17 = pdVar16[3];
              pdVar16[3] = pdVar16[5];
              pdVar16[5] = dVar17;
              dVar17 = *pdVar16;
              if (*pdVar4 < dVar17) {
                *pdVar16 = *pdVar4;
                *pdVar4 = dVar17;
                dVar17 = pdVar16[1];
                pdVar16[1] = pdVar16[3];
                pdVar16[3] = dVar17;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar9 < 0x18) {
      pdVar4 = pdVar16 + 2;
      if ((param_4 & 1) == 0) {
        if (pdVar16 == param_2 || pdVar4 == param_2) {
          return;
        }
        pdVar5 = pdVar16 + 3;
        do {
          pdVar12 = pdVar4;
          dVar17 = pdVar16[2];
          dVar6 = *pdVar16;
          if (dVar17 < dVar6) {
            dVar18 = pdVar16[3];
            pdVar16 = pdVar5;
            do {
              pdVar4 = pdVar16;
              pdVar4[-1] = dVar6;
              pdVar16 = pdVar4 + -2;
              *pdVar4 = *pdVar16;
              dVar6 = pdVar4[-5];
            } while (dVar17 < dVar6);
            pdVar4[-3] = dVar17;
            *pdVar16 = dVar18;
          }
          pdVar4 = pdVar12 + 2;
          pdVar5 = pdVar5 + 2;
          pdVar16 = pdVar12;
        } while (pdVar4 != param_2);
        return;
      }
      if (pdVar16 == param_2 || pdVar4 == param_2) {
        return;
      }
      lVar11 = 0;
      pdVar5 = pdVar16;
      do {
        pdVar12 = pdVar4;
        dVar17 = pdVar5[2];
        dVar6 = *pdVar5;
        if (dVar17 < dVar6) {
          dVar18 = pdVar5[3];
          lVar3 = lVar11;
          do {
            lVar13 = lVar3;
            *(double *)((long)pdVar16 + lVar13 + 0x10) = dVar6;
            *(undefined8 *)((long)pdVar16 + lVar13 + 0x18) =
                 *(undefined8 *)((long)pdVar16 + lVar13 + 8);
            pdVar4 = pdVar16;
            if (lVar13 == 0) goto LAB_1094a1f6c;
            dVar6 = *(double *)((long)pdVar16 + lVar13 + -0x10);
            lVar3 = lVar13 + -0x10;
          } while (dVar17 < dVar6);
          pdVar4 = (double *)((long)pdVar16 + lVar13);
LAB_1094a1f6c:
          *pdVar4 = dVar17;
          pdVar4[1] = dVar18;
        }
        pdVar4 = pdVar12 + 2;
        lVar11 = lVar11 + 0x10;
        pdVar5 = pdVar12;
        if (pdVar4 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pdVar16 == param_2) {
        return;
      }
      uVar7 = uVar9 - 2 >> 1;
      uVar15 = uVar7;
      do {
        if ((long)uVar15 <= (long)uVar7) {
          uVar14 = uVar15 << 1 | 1;
          pdVar4 = pdVar16 + uVar14 * 2;
          uVar10 = uVar15 * 2 + 2;
          if (((long)uVar10 < (long)uVar9) && (*pdVar4 < pdVar4[2])) {
            uVar14 = uVar10;
            pdVar4 = pdVar4 + 2;
          }
          pdVar5 = pdVar16 + uVar15 * 2;
          dVar6 = *pdVar4;
          dVar17 = *pdVar5;
          if (dVar17 <= dVar6) {
            dVar18 = pdVar5[1];
            do {
              pdVar12 = pdVar4;
              *pdVar5 = dVar6;
              pdVar5[1] = pdVar12[1];
              if ((long)uVar7 < (long)uVar14) break;
              uVar1 = uVar14 << 1 | 1;
              pdVar4 = pdVar16 + uVar1 * 2;
              uVar10 = uVar14 * 2 + 2;
              uVar14 = uVar1;
              if (((long)uVar10 < (long)uVar9) && (*pdVar4 < pdVar4[2])) {
                uVar14 = uVar10;
                pdVar4 = pdVar4 + 2;
              }
              dVar6 = *pdVar4;
              pdVar5 = pdVar12;
            } while (dVar17 <= dVar6);
            *pdVar12 = dVar17;
            pdVar12[1] = dVar18;
          }
        }
        bVar2 = uVar15 != 0;
        uVar15 = uVar15 - 1;
      } while (bVar2);
      do {
        dVar6 = *pdVar16;
        dVar17 = pdVar16[1];
        pdVar4 = pdVar16;
        uVar15 = 0;
        do {
          uVar10 = uVar15 << 1 | 1;
          uVar7 = uVar15 * 2 + 2;
          pdVar5 = pdVar4 + uVar15 * 2 + 2;
          if (((long)uVar7 < (long)uVar9) && (pdVar4[uVar15 * 2 + 2] < pdVar4[uVar15 * 2 + 4])) {
            pdVar5 = pdVar4 + uVar15 * 2 + 4;
            uVar10 = uVar7;
          }
          *pdVar4 = *pdVar5;
          pdVar4[1] = pdVar5[1];
          pdVar4 = pdVar5;
          uVar15 = uVar10;
        } while ((long)uVar10 <= (long)(uVar9 - 2 >> 1));
        if (pdVar5 == param_2 + -2) {
          *pdVar5 = dVar6;
          pdVar5[1] = dVar17;
        }
        else {
          *pdVar5 = param_2[-2];
          pdVar5[1] = param_2[-1];
          param_2[-2] = dVar6;
          param_2[-1] = dVar17;
          lVar11 = (long)pdVar5 + (0x10 - (long)pdVar16) >> 4;
          if (1 < lVar11) {
            uVar15 = lVar11 - 2U >> 1;
            dVar6 = pdVar16[uVar15 * 2];
            dVar17 = *pdVar5;
            if (dVar6 < dVar17) {
              dVar18 = pdVar5[1];
              pdVar4 = pdVar16 + uVar15 * 2;
              do {
                pdVar12 = pdVar4;
                *pdVar5 = dVar6;
                pdVar5[1] = pdVar12[1];
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1 >> 1;
                dVar6 = pdVar16[uVar15 * 2];
                pdVar5 = pdVar12;
                pdVar4 = pdVar16 + uVar15 * 2;
              } while (dVar6 < dVar17);
              *pdVar12 = dVar17;
              pdVar12[1] = dVar18;
            }
          }
        }
        bVar2 = (long)uVar9 < 3;
        uVar9 = uVar9 - 1;
        param_2 = param_2 + -2;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    pdVar4 = pdVar16 + (uVar9 & 0xfffffffffffffffe);
    dVar17 = param_2[-2];
    if (uVar9 < 0x81) {
      dVar18 = *pdVar16;
      dVar6 = *pdVar4;
      if (dVar6 <= dVar18) {
        if (dVar17 < dVar18) {
          *pdVar16 = dVar17;
          param_2[-2] = dVar18;
          dVar17 = pdVar16[1];
          pdVar16[1] = param_2[-1];
          param_2[-1] = dVar17;
          dVar17 = *pdVar4;
          if (*pdVar16 < dVar17) {
            *pdVar4 = *pdVar16;
            *pdVar16 = dVar17;
            dVar17 = pdVar4[1];
            pdVar4[1] = pdVar16[1];
            pdVar16[1] = dVar17;
          }
        }
      }
      else {
        if (dVar18 <= dVar17) {
          *pdVar4 = dVar18;
          *pdVar16 = dVar6;
          dVar17 = pdVar4[1];
          pdVar4[1] = pdVar16[1];
          pdVar16[1] = dVar17;
          if (dVar6 <= param_2[-2]) goto LAB_1094a1c3c;
          *pdVar16 = param_2[-2];
          param_2[-2] = dVar6;
          pdVar16[1] = param_2[-1];
        }
        else {
          *pdVar4 = dVar17;
          param_2[-2] = dVar6;
          dVar17 = pdVar4[1];
          pdVar4[1] = param_2[-1];
        }
        param_2[-1] = dVar17;
      }
    }
    else {
      dVar18 = *pdVar4;
      dVar6 = *pdVar16;
      if (dVar6 <= dVar18) {
        if (dVar17 < dVar18) {
          *pdVar4 = dVar17;
          param_2[-2] = dVar18;
          dVar17 = pdVar4[1];
          pdVar4[1] = param_2[-1];
          param_2[-1] = dVar17;
          dVar17 = *pdVar16;
          if (*pdVar4 < dVar17) {
            *pdVar16 = *pdVar4;
            *pdVar4 = dVar17;
            dVar17 = pdVar16[1];
            pdVar16[1] = pdVar4[1];
            pdVar4[1] = dVar17;
          }
        }
      }
      else {
        if (dVar18 <= dVar17) {
          *pdVar16 = dVar18;
          *pdVar4 = dVar6;
          dVar17 = pdVar16[1];
          pdVar16[1] = pdVar4[1];
          pdVar4[1] = dVar17;
          if (dVar6 <= param_2[-2]) goto LAB_1094a19bc;
          *pdVar4 = param_2[-2];
          param_2[-2] = dVar6;
          pdVar4[1] = param_2[-1];
        }
        else {
          *pdVar16 = dVar17;
          param_2[-2] = dVar6;
          dVar17 = pdVar16[1];
          pdVar16[1] = param_2[-1];
        }
        param_2[-1] = dVar17;
      }
LAB_1094a19bc:
      dVar6 = pdVar4[-2];
      dVar17 = pdVar16[2];
      dVar18 = param_2[-4];
      if (dVar17 <= dVar6) {
        if (dVar18 < dVar6) {
          pdVar4[-2] = dVar18;
          param_2[-4] = dVar6;
          dVar17 = pdVar4[-1];
          pdVar4[-1] = param_2[-3];
          param_2[-3] = dVar17;
          dVar17 = pdVar16[2];
          if (pdVar4[-2] < dVar17) {
            pdVar16[2] = pdVar4[-2];
            pdVar4[-2] = dVar17;
            dVar17 = pdVar16[3];
            pdVar16[3] = pdVar4[-1];
            pdVar4[-1] = dVar17;
          }
        }
      }
      else {
        if (dVar6 <= dVar18) {
          pdVar16[2] = dVar6;
          pdVar4[-2] = dVar17;
          dVar6 = pdVar16[3];
          pdVar16[3] = pdVar4[-1];
          pdVar4[-1] = dVar6;
          if (dVar17 <= param_2[-4]) goto LAB_1094a1ab0;
          pdVar4[-2] = param_2[-4];
          param_2[-4] = dVar17;
          pdVar4[-1] = param_2[-3];
        }
        else {
          pdVar16[2] = dVar18;
          param_2[-4] = dVar17;
          dVar6 = pdVar16[3];
          pdVar16[3] = param_2[-3];
        }
        param_2[-3] = dVar6;
      }
LAB_1094a1ab0:
      dVar6 = pdVar4[2];
      dVar17 = pdVar16[4];
      dVar18 = param_2[-6];
      if (dVar17 <= dVar6) {
        if (dVar18 < dVar6) {
          pdVar4[2] = dVar18;
          param_2[-6] = dVar6;
          dVar17 = pdVar4[3];
          pdVar4[3] = param_2[-5];
          param_2[-5] = dVar17;
          dVar17 = pdVar16[4];
          if (pdVar4[2] < dVar17) {
            pdVar16[4] = pdVar4[2];
            pdVar4[2] = dVar17;
            dVar17 = pdVar16[5];
            pdVar16[5] = pdVar4[3];
            pdVar4[3] = dVar17;
          }
        }
      }
      else {
        if (dVar6 <= dVar18) {
          pdVar16[4] = dVar6;
          pdVar4[2] = dVar17;
          dVar6 = pdVar16[5];
          pdVar16[5] = pdVar4[3];
          pdVar4[3] = dVar6;
          if (dVar17 <= param_2[-6]) goto LAB_1094a1b68;
          pdVar4[2] = param_2[-6];
          param_2[-6] = dVar17;
          pdVar4[3] = param_2[-5];
        }
        else {
          pdVar16[4] = dVar18;
          param_2[-6] = dVar17;
          dVar6 = pdVar16[5];
          pdVar16[5] = param_2[-5];
        }
        param_2[-5] = dVar6;
      }
LAB_1094a1b68:
      dVar17 = *pdVar4;
      dVar6 = pdVar4[-2];
      dVar18 = pdVar4[2];
      if (dVar6 <= dVar17) {
        if (dVar18 < dVar17) {
          *pdVar4 = dVar18;
          pdVar4[2] = dVar17;
          dVar17 = pdVar4[1];
          dVar19 = pdVar4[3];
          pdVar4[1] = dVar19;
          pdVar4[3] = dVar17;
          dVar17 = dVar18;
          if (dVar18 < dVar6) {
            pdVar4[-2] = dVar18;
            *pdVar4 = dVar6;
            dVar17 = pdVar4[-1];
            pdVar4[-1] = dVar19;
            pdVar4[1] = dVar17;
            dVar17 = dVar6;
          }
        }
      }
      else if (dVar17 <= dVar18) {
        pdVar4[-2] = dVar17;
        *pdVar4 = dVar6;
        dVar19 = pdVar4[-1];
        pdVar4[-1] = pdVar4[1];
        pdVar4[1] = dVar19;
        dVar17 = dVar6;
        if (dVar18 < dVar6) {
          *pdVar4 = dVar18;
          pdVar4[2] = dVar6;
          pdVar4[1] = pdVar4[3];
          pdVar4[3] = dVar19;
          dVar17 = dVar18;
        }
      }
      else {
        pdVar4[-2] = dVar18;
        pdVar4[2] = dVar6;
        dVar6 = pdVar4[-1];
        pdVar4[-1] = pdVar4[3];
        pdVar4[3] = dVar6;
      }
      dVar6 = *pdVar16;
      *pdVar16 = dVar17;
      *pdVar4 = dVar6;
      dVar17 = pdVar16[1];
      pdVar16[1] = pdVar4[1];
      pdVar4[1] = dVar17;
    }
LAB_1094a1c3c:
    param_3 = param_3 + -1;
    dVar17 = *pdVar16;
    param_1 = pdVar16;
    if (((param_4 & 1) == 0) && (dVar17 <= pdVar16[-2])) {
      if (param_2[-2] <= dVar17) {
        do {
          param_1 = param_1 + 2;
          if (param_2 <= param_1) break;
        } while (*param_1 <= dVar17);
      }
      else {
        do {
          param_1 = param_1 + 2;
        } while (*param_1 <= dVar17);
      }
      pdVar4 = param_2;
      if (param_1 < param_2) {
        do {
          pdVar4 = pdVar4 + -2;
        } while (dVar17 < *pdVar4);
      }
      dVar6 = pdVar16[1];
      if (param_1 < pdVar4) {
        dVar18 = *param_1;
        dVar19 = *pdVar4;
        do {
          *param_1 = dVar19;
          *pdVar4 = dVar18;
          dVar18 = param_1[1];
          param_1[1] = pdVar4[1];
          pdVar4[1] = dVar18;
          do {
            param_1 = param_1 + 2;
            dVar18 = *param_1;
          } while (dVar18 <= dVar17);
          do {
            pdVar4 = pdVar4 + -2;
            dVar19 = *pdVar4;
          } while (dVar17 < dVar19);
        } while (param_1 < pdVar4);
      }
      if (param_1 + -2 != pdVar16) {
        *pdVar16 = param_1[-2];
        pdVar16[1] = param_1[-1];
      }
      param_4 = 0;
      param_1[-2] = dVar17;
      param_1[-1] = dVar6;
      goto LAB_1094a1830;
    }
    lVar11 = 0;
    dVar6 = pdVar16[1];
    do {
      dVar18 = *(double *)((long)pdVar16 + lVar11 + 0x10);
      lVar11 = lVar11 + 0x10;
    } while (dVar18 < dVar17);
    pdVar4 = (double *)((long)pdVar16 + lVar11);
    pdVar5 = param_2;
    if (lVar11 == 0x10) {
      do {
        if (pdVar5 <= pdVar4) break;
        pdVar5 = pdVar5 + -2;
      } while (dVar17 <= *pdVar5);
    }
    else {
      do {
        pdVar5 = pdVar5 + -2;
      } while (dVar17 <= *pdVar5);
    }
    param_1 = pdVar4;
    if (pdVar4 < pdVar5) {
      dVar19 = *pdVar5;
      pdVar12 = pdVar5;
      do {
        *param_1 = dVar19;
        *pdVar12 = dVar18;
        dVar18 = param_1[1];
        param_1[1] = pdVar12[1];
        pdVar12[1] = dVar18;
        do {
          param_1 = param_1 + 2;
          dVar18 = *param_1;
        } while (dVar18 < dVar17);
        do {
          pdVar12 = pdVar12 + -2;
          dVar19 = *pdVar12;
        } while (dVar17 <= dVar19);
      } while (param_1 < pdVar12);
    }
    pdVar12 = param_1 + -2;
    if (pdVar12 != pdVar16) {
      *pdVar16 = param_1[-2];
      pdVar16[1] = param_1[-1];
    }
    param_1[-2] = dVar17;
    param_1[-1] = dVar6;
    if (pdVar4 < pdVar5) {
LAB_1094a1d4c:
      FUN_1094a1804(pdVar16,pdVar12,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      pdVar4 = pdVar16;
      FUN_1094a2550(pdVar16,pdVar12);
      pdVar5 = param_1;
      FUN_1094a2550(param_1,param_2);
      if ((int)pdVar5 == 0) {
        if (((ulong)pdVar4 & 1) == 0) goto LAB_1094a1d4c;
      }
      else {
        param_1 = pdVar16;
        param_2 = pdVar12;
        if (((ulong)pdVar4 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 1094a2370; end: 1094a254f;  */

void FUN_1094a2370(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_2;
  dVar2 = *param_1;
  dVar3 = *param_3;
  if (dVar2 <= dVar1) {
    if (dVar3 < dVar1) {
      *param_2 = dVar3;
      *param_3 = dVar1;
      dVar3 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = dVar3;
      dVar2 = *param_1;
      dVar3 = dVar1;
      if (*param_2 < dVar2) {
        *param_1 = *param_2;
        *param_2 = dVar2;
        dVar3 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = dVar3;
        dVar3 = *param_3;
      }
    }
  }
  else {
    if (dVar1 <= dVar3) {
      *param_1 = dVar1;
      *param_2 = dVar2;
      dVar1 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = dVar1;
      dVar3 = *param_3;
      if (dVar2 <= dVar3) goto LAB_1094a2438;
      *param_2 = dVar3;
      *param_3 = dVar2;
      param_2[1] = param_3[1];
    }
    else {
      *param_1 = dVar3;
      *param_3 = dVar2;
      dVar1 = param_1[1];
      param_1[1] = param_3[1];
    }
    param_3[1] = dVar1;
    dVar3 = dVar2;
  }
LAB_1094a2438:
  if (*param_4 < dVar3) {
    *param_3 = *param_4;
    *param_4 = dVar3;
    dVar3 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = dVar3;
    dVar3 = *param_2;
    if (*param_3 < dVar3) {
      *param_2 = *param_3;
      *param_3 = dVar3;
      dVar3 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = dVar3;
      dVar3 = *param_1;
      if (*param_2 < dVar3) {
        *param_1 = *param_2;
        *param_2 = dVar3;
        dVar3 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = dVar3;
      }
    }
  }
  dVar3 = *param_4;
  if (*param_5 < dVar3) {
    *param_4 = *param_5;
    *param_5 = dVar3;
    dVar3 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = dVar3;
    dVar3 = *param_3;
    if (*param_4 < dVar3) {
      *param_3 = *param_4;
      *param_4 = dVar3;
      dVar3 = param_3[1];
      param_3[1] = param_4[1];
      param_4[1] = dVar3;
      dVar3 = *param_2;
      if (*param_3 < dVar3) {
        *param_2 = *param_3;
        *param_3 = dVar3;
        dVar3 = param_2[1];
        param_2[1] = param_3[1];
        param_3[1] = dVar3;
        dVar3 = *param_1;
        if (*param_2 < dVar3) {
          *param_1 = *param_2;
          *param_2 = dVar3;
          dVar3 = param_1[1];
          param_1[1] = param_2[1];
          param_2[1] = dVar3;
        }
      }
    }
  }
  return;
}



/* Entry: 1094a2550; end: 1094a28f3;  */

bool FUN_1094a2550(double *param_1,double *param_2)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  
  uVar3 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 == 2) {
      dVar12 = *param_1;
      if (dVar12 <= param_2[-2]) {
        return true;
      }
      *param_1 = param_2[-2];
      param_2[-2] = dVar12;
LAB_1094a25e4:
      dVar4 = param_1[1];
      param_1[1] = param_2[-1];
LAB_1094a25f0:
      param_2[-1] = dVar4;
      return true;
    }
  }
  else {
    if (uVar3 == 3) {
      dVar4 = param_1[2];
      dVar12 = *param_1;
      dVar13 = param_2[-2];
      if (dVar12 <= dVar4) {
        if (dVar4 <= dVar13) {
          return true;
        }
        param_1[2] = dVar13;
        param_2[-2] = dVar4;
        dVar12 = param_1[3];
        param_1[3] = param_2[-1];
        param_2[-1] = dVar12;
        dVar12 = *param_1;
        if (dVar12 <= param_1[2]) {
          return true;
        }
        *param_1 = param_1[2];
        param_1[2] = dVar12;
        dVar12 = param_1[1];
        param_1[1] = param_1[3];
        param_1[3] = dVar12;
        return true;
      }
      if (dVar4 <= dVar13) {
        *param_1 = dVar4;
        param_1[2] = dVar12;
        dVar4 = param_1[1];
        param_1[1] = param_1[3];
        param_1[3] = dVar4;
        if (dVar12 <= param_2[-2]) {
          return true;
        }
        param_1[2] = param_2[-2];
        param_2[-2] = dVar12;
        param_1[3] = param_2[-1];
        goto LAB_1094a25f0;
      }
      *param_1 = dVar13;
      param_2[-2] = dVar12;
      goto LAB_1094a25e4;
    }
    if (uVar3 == 4) {
      dVar4 = param_1[2];
      dVar13 = *param_1;
      dVar8 = param_1[4];
      dVar12 = dVar8;
      if (dVar13 <= dVar4) {
        if (dVar8 < dVar4) {
          param_1[2] = dVar8;
          param_1[4] = dVar4;
          dVar12 = param_1[3];
          dVar5 = param_1[5];
          param_1[3] = dVar5;
          param_1[5] = dVar12;
          dVar12 = dVar4;
          if (dVar8 < dVar13) {
            *param_1 = dVar8;
            param_1[2] = dVar13;
            dVar4 = param_1[1];
            param_1[1] = dVar5;
            param_1[3] = dVar4;
          }
        }
      }
      else {
        if (dVar4 <= dVar8) {
          *param_1 = dVar4;
          param_1[2] = dVar13;
          dVar4 = param_1[1];
          param_1[1] = param_1[3];
          param_1[3] = dVar4;
          if (dVar13 <= dVar8) goto LAB_1094a286c;
          param_1[2] = dVar8;
          param_1[4] = dVar13;
          param_1[3] = param_1[5];
        }
        else {
          *param_1 = dVar8;
          param_1[4] = dVar13;
          dVar4 = param_1[1];
          param_1[1] = param_1[5];
        }
        param_1[5] = dVar4;
        dVar12 = dVar13;
      }
LAB_1094a286c:
      if (dVar12 <= param_2[-2]) {
        return true;
      }
      param_1[4] = param_2[-2];
      param_2[-2] = dVar12;
      dVar12 = param_1[5];
      param_1[5] = param_2[-1];
      param_2[-1] = dVar12;
      dVar12 = param_1[4];
      dVar4 = param_1[2];
      if (dVar4 <= dVar12) {
        return true;
      }
      param_1[2] = dVar12;
      param_1[4] = dVar4;
      dVar13 = param_1[3];
      dVar4 = param_1[5];
      param_1[3] = dVar4;
      param_1[5] = dVar13;
      dVar13 = *param_1;
      if (dVar13 <= dVar12) {
        return true;
      }
      *param_1 = dVar12;
      param_1[2] = dVar13;
      dVar12 = param_1[1];
      param_1[1] = dVar4;
      param_1[3] = dVar12;
      return true;
    }
    if (uVar3 == 5) {
      FUN_1094a2370(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
      return true;
    }
  }
  dVar4 = param_1[4];
  dVar13 = param_1[2];
  dVar12 = *param_1;
  if (dVar12 <= dVar13) {
    if (dVar4 < dVar13) {
      param_1[2] = dVar4;
      param_1[4] = dVar13;
      dVar8 = param_1[3];
      dVar13 = param_1[5];
      param_1[3] = dVar13;
      param_1[5] = dVar8;
      if (dVar4 < dVar12) {
        *param_1 = dVar4;
        param_1[2] = dVar12;
        dVar12 = param_1[1];
        param_1[1] = dVar13;
        param_1[3] = dVar12;
      }
    }
  }
  else {
    if (dVar13 <= dVar4) {
      *param_1 = dVar13;
      param_1[2] = dVar12;
      dVar13 = param_1[1];
      param_1[1] = param_1[3];
      param_1[3] = dVar13;
      if (dVar12 <= dVar4) goto LAB_1094a279c;
      param_1[2] = dVar4;
      param_1[4] = dVar12;
      param_1[3] = param_1[5];
    }
    else {
      *param_1 = dVar4;
      param_1[4] = dVar12;
      dVar13 = param_1[1];
      param_1[1] = param_1[5];
    }
    param_1[5] = dVar13;
  }
LAB_1094a279c:
  if (param_1 + 6 != param_2) {
    lVar9 = 0;
    iVar10 = 0;
    pdVar6 = param_1 + 4;
    pdVar7 = param_1 + 6;
    do {
      dVar12 = *pdVar7;
      dVar4 = *pdVar6;
      if (dVar12 < dVar4) {
        dVar13 = pdVar7[1];
        lVar2 = lVar9;
        do {
          lVar11 = lVar2;
          *(double *)((long)param_1 + lVar11 + 0x30) = dVar4;
          *(undefined8 *)((long)param_1 + lVar11 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x28);
          pdVar6 = param_1;
          if (lVar11 == -0x20) goto LAB_1094a2800;
          dVar4 = *(double *)((long)param_1 + lVar11 + 0x10);
          lVar2 = lVar11 + -0x10;
        } while (dVar12 < dVar4);
        pdVar6 = (double *)((long)param_1 + lVar11 + 0x20);
LAB_1094a2800:
        *pdVar6 = dVar12;
        pdVar6[1] = dVar13;
        iVar10 = iVar10 + 1;
        if (iVar10 == 8) {
          return pdVar7 + 2 == param_2;
        }
      }
      pdVar1 = pdVar7 + 2;
      lVar9 = lVar9 + 0x10;
      pdVar6 = pdVar7;
      pdVar7 = pdVar1;
    } while (pdVar1 != param_2);
  }
  return true;
}



/* Entry: 1094a28f4; end: 1094a293b;  */

long * FUN_1094a28f4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094a293c; end: 1094a2ae3;  */

void FUN_1094a293c(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar1 = (*param_3 * 3.141592653589793) / 180.0;
  dVar3 = param_3[1] * 3.141592653589793;
  dVar6 = dVar3 / 180.0;
  ___sincos_stret();
  dVar12 = 6378137.0 / SQRT(dVar1 * dVar1 * -0.006694379990141316 + 1.0);
  dVar9 = param_3[2];
  dVar8 = dVar3 * (dVar9 + dVar12);
  dVar4 = dVar3;
  ___sincos_stret();
  dVar2 = (*param_2 * 3.141592653589793) / 180.0;
  dVar5 = param_2[1] * 3.141592653589793;
  dVar7 = dVar5 / 180.0;
  ___sincos_stret();
  dVar11 = 6378137.0 / SQRT(dVar2 * dVar2 * -0.006694379990141316 + 1.0);
  dVar13 = param_2[2];
  dVar10 = dVar5 * (dVar13 + dVar11);
  ___sincos_stret();
  dVar5 = dVar5 * dVar10 - dVar4 * dVar8;
  dVar7 = dVar7 * dVar10 - dVar6 * dVar8;
  dVar2 = dVar2 * (dVar13 + dVar11 * 0.9933056200098587) -
          dVar1 * (dVar9 + dVar12 * 0.9933056200098587);
  param_1[1] = -(dVar1 * dVar4) * dVar5 + -(dVar1 * dVar6) * dVar7 + dVar3 * dVar2;
  *param_1 = -dVar6 * dVar5 + dVar4 * dVar7 + dVar2 * 0.0;
  param_1[2] = dVar3 * dVar4 * dVar5 + dVar1 * dVar2 + dVar3 * dVar6 * dVar7;
  return;
}



/* Entry: 1094a2ae4; end: 1094a2b53;  */

void FUN_1094a2ae4(double *param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  bVar1 = (*(byte *)(param_2 + 0x28) & 1) == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_1094a293c(&dStack_40);
    dVar2 = *(double *)(param_2 + 0x18);
    param_1[1] = dStack_30 * 100.0;
    *param_1 = dStack_38 * 100.0;
    param_1[3] = dVar2 * 100.0;
    param_1[2] = dStack_40 * 100.0;
  }
  *(bool *)(param_1 + 4) = !bVar1;
  return;
}



/* Entry: 1094a2b54; end: 1094a2fcb;  */

void FUN_1094a2b54(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined1 auStack_1c8 [224];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [56];
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  long alStack_80 [3];
  long *plStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  for (plVar10 = (long *)param_1[3]; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    uVar6 = param_2;
    FUN_1094a3be4(param_2,plVar10 + 4);
    if ((uVar6 & 1) == 0) {
      lVar9 = (long)(plVar10 + 4);
      FUN_1094a3be4(lVar9,param_2);
      if ((int)lVar9 == 0) goto LAB_1094a2e60;
      plVar10 = plVar10 + 1;
    }
  }
  uVar2 = *(uint *)(param_2 + 0x48);
  if ((((uVar2 - 2 < 0x3f && (1L << ((ulong)(uVar2 - 2) & 0x3f) & 0x4000000040000041U) != 0 ||
         (uVar2 & 0x20190) != 0) || (uVar2 == 0x200)) || (uVar2 == 0x400)) ||
     ((uVar2 & 0x2db800) != 0)) {
    plVar10 = (long *)param_1[1];
    if (plVar10 == (long *)0x0) goto LAB_1094a2ec0;
    uVar11 = *param_1;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar10 == (long *)0x0) goto LAB_1094a2ec0;
    plVar7 = plVar10 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar10 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uStack_1d8 = uVar11;
    plStack_1d0 = plVar10;
    FUN_1094a35d8(auStack_1c8,param_2);
    uStack_e8 = *param_3;
    (**(code **)(param_3[1] + 0x10))(auStack_e0,param_3 + 1);
    if (*(char *)(param_1 + 0x12) != '\x01') {
      FUN_1094a3198(&lStack_a8,&uStack_1d8);
      FUN_1094a324c();
      pcVar5 = pcStack_88;
      if (pcStack_88 == (code *)0x0) {
        FUN_1094362d4(3);
        goto LAB_1094a2edc;
      }
      FUN_1094a4db4(pcStack_88);
      param_1 = param_1 + 2;
      FUN_1094a42b4(param_1,param_2,param_2);
      plVar7 = (long *)param_1[0x20];
      param_1[0x20] = pcVar5;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      FUN_1094a37ec(&pcStack_88);
      if (pcStack_90 == (code *)&lStack_a8) {
        lVar9 = 0x18;
LAB_1094a2e44:
        (**(code **)(*(long *)pcStack_90 + lVar9))();
      }
      else if (pcStack_90 != (code *)0x0) {
        lVar9 = 0x20;
        goto LAB_1094a2e44;
      }
LAB_1094a2e50:
      FUN_1094a338c(&uStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
LAB_1094a2e60:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return;
      }
      goto LAB_1094a2ec4;
    }
    puVar12 = (undefined8 *)param_1[8];
    plStack_a0 = &lStack_a8;
    lStack_a8 = 0;
    uStack_98 = 0x5002000000;
    pcStack_90 = FUN_1094a440c;
    pcStack_88 = FUN_1094a4480;
    FUN_1094a3198(alStack_80,&uStack_1d8);
    lVar9 = plStack_a0[9];
    if (lVar9 != 0) {
      FUN_1094a4db4(lVar9);
      puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1f8 = 0x42000000;
      pcStack_1f0 = FUN_1094a44a8;
      puStack_1e8 = &UNK_110af6da0;
      plStack_1e0 = &lStack_a8;
      func_0x000104c62d88(puVar12[1],*puVar12,&puStack_200);
      __Block_object_dispose(&lStack_a8,8);
      FUN_1094a37ec(auStack_60);
      if (plStack_68 == alStack_80) {
        lVar8 = 0x18;
LAB_1094a2dec:
        (**(code **)(*plStack_68 + lVar8))();
      }
      else if (plStack_68 != (long *)0x0) {
        lVar8 = 0x20;
        goto LAB_1094a2dec;
      }
      param_1 = param_1 + 2;
      FUN_1094a42b4(param_1,param_2,param_2);
      plVar7 = (long *)param_1[0x20];
      param_1[0x20] = lVar9;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      goto LAB_1094a2e50;
    }
  }
  else {
    func_0x000105688514(&UNK_10f56e899);
LAB_1094a2ec0:
    FUN_1092315e8();
LAB_1094a2ec4:
    ___stack_chk_fail();
  }
  FUN_1094362d4(3);
LAB_1094a2edc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1094a2ee0);
  (*pcVar5)();
}



/* Entry: 1094a2fcc; end: 1094a310b;  */

undefined8 * FUN_1094a2fcc(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uStack_41;
  
  puVar3 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = param_1 + 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = param_1 + 6;
  if (param_3 != 0) {
    puVar3 = (undefined8 *)0x58;
    __Znwm();
    puVar3[2] = 0x32aaaba7;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    *(undefined8 *)((long)puVar3 + 0x49) = 0;
    *(undefined8 *)((long)puVar3 + 0x41) = 0;
    puVar1 = &UNK_10f57332b;
    _dispatch_queue_create(&UNK_10f57332b,PTR___dispatch_queue_attr_concurrent_11034be28);
    *puVar3 = puVar1;
    _dispatch_group_create();
    puVar3[1] = puVar1;
  }
  param_1[8] = puVar3;
  uVar2 = 0x10;
  __Znwm();
  func_0x000109d05694(uVar2,&uStack_41,param_2);
  param_1[9] = uVar2;
  param_1[10] = 0x32aaaba7;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  *(char *)(param_1 + 0x12) = (char)param_3;
  return param_1;
}



/* Entry: 1094a310c; end: 1094a3197;  */

void FUN_1094a310c(long *param_1)

{
  long lVar1;
  long lStack_30;
  undefined1 auStack_28 [8];
  
  lStack_30 = *param_1;
  *param_1 = 0;
  FUN_1094a342c(auStack_28,&lStack_30);
  __ZNSt3__16thread6detachEv(auStack_28);
  __ZNSt3__16threadD1Ev(auStack_28);
  lVar1 = lStack_30;
  lStack_30 = 0;
  if (lVar1 != 0) {
    FUN_10953be44();
    __ZdlPv();
  }
  return;
}



/* Entry: 1094a3198; end: 1094a324b;  */

long FUN_1094a3198(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar1 = 0x138;
  __Znwm();
  FUN_1094a44b8();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  puVar2 = (undefined8 *)0x90;
  __Znwm();
  puVar2[2] = 0;
  puVar2[3] = 0x32aaaba7;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0x3cb0b1bb;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  *(undefined8 *)((long)puVar2 + 0x84) = 0;
  *(undefined8 *)((long)puVar2 + 0x7c) = 0;
  *puVar2 = &PTR_DAT_110af6e48;
  puVar2[1] = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  return param_1;
}



/* Entry: 1094a324c; end: 1094a338b;  */

void FUN_1094a324c(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uStack_38;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    FUN_1094362d4(3);
LAB_1094a3324:
    FUN_1094362d4(3);
    goto LAB_1094a332c;
  }
  if ((*(byte *)(lVar3 + 0x88) & 1) == 0) {
    uStack_38 = 0;
    lVar3 = *(long *)(lVar3 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar3 != 0) goto LAB_1094a3308;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    plVar2 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar2 + 0x28))(plVar2,&uStack_38);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) goto LAB_1094a3324;
    __ZNSt3__15mutex4lockEv(lVar3 + 0x18);
    if ((*(byte *)(lVar3 + 0x88) & 1) == 0) {
      uStack_38 = 0;
      lVar4 = *(long *)(lVar3 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_38);
      if (lVar4 == 0) {
        *(char *)(lVar3 + 0x8c) = (char)plVar2;
        *(uint *)(lVar3 + 0x88) = *(uint *)(lVar3 + 0x88) | 5;
        __ZNSt3__118condition_variable10notify_allEv(lVar3 + 0x58);
        __ZNSt3__15mutex6unlockEv(lVar3 + 0x18);
        return;
      }
    }
  }
  else {
LAB_1094a3308:
    FUN_1094362d4(2);
  }
  FUN_1094362d4(2);
LAB_1094a332c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094a3330);
  (*pcVar1)();
}



/* Entry: 1094a338c; end: 1094a342b;  */

/* WARNING: Removing unreachable block (ram,0x0001094a33bc) */

long FUN_1094a338c(long param_1)

{
  long lStack_28;
  
  (*(code *)**(undefined8 **)(param_1 + 0xf8))((undefined8 *)(param_1 + 0xf8));
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  FUN_1094a3794(param_1 + 0x60);
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  lStack_28 = param_1 + 0x28;
  FUN_109378cec(&lStack_28);
  lStack_28 = param_1 + 0x10;
  FUN_109378cec(&lStack_28);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1094a342c; end: 1094a34ef;  */

undefined8 FUN_1094a342c(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = 8;
  __Znwm();
  __ZNSt3__115__thread_structC1Ev();
  puVar3 = (undefined8 *)0x10;
  __Znwm();
  uVar4 = *param_2;
  *param_2 = 0;
  *puVar3 = uVar2;
  puVar3[1] = uVar4;
  uVar2 = param_1;
  _pthread_create(param_1,0,FUN_1094a34f0,puVar3);
  if ((int)uVar2 == 0) {
    return param_1;
  }
  __ZNSt3__120__throw_system_errorEiPKc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094a34b4);
  (*pcVar1)();
}



/* Entry: 1094a34f0; end: 1094a356f;  */

undefined8 FUN_1094a34f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  puStack_28 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  uVar2 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*puVar1,uVar2);
  FUN_10953be74(puStack_28[1]);
  puVar1 = puStack_28;
  puStack_28 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1094a3570(&puStack_28);
  }
  return 0;
}



/* Entry: 1094a3570; end: 1094a35af;  */

void FUN_1094a3570(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_109476864(param_2 + 8,0);
    FUN_1094a35b0(param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1094a35b0; end: 1094a35d7;  */

void FUN_1094a35b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    __ZNSt3__115__thread_structD1Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1094a35d8; end: 1094a3793;  */

undefined8 * FUN_1094a35d8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_109379218();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_109379218(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) * 0x2e8ba2e8ba2e8ba3);
  if (*(char *)(param_2 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 6,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38))
    ;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar7;
    param_1[6] = uVar6;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  lVar5 = *(long *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = uVar6;
  *(undefined4 *)(param_1 + 9) = uVar2;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1092cc0dc(param_1 + 0xc,*(long *)(param_2 + 0x60),*(long *)(param_2 + 0x68),
                *(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 2);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((long)param_1 + 0x7b) = *(undefined4 *)(param_2 + 0x7b);
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  if (*(char *)(param_2 + 0x97) < '\0') {
    func_0x000107c3192c(param_1 + 0x10,*(undefined8 *)(param_2 + 0x80),
                        *(undefined8 *)(param_2 + 0x88));
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0x88);
    uVar6 = *(undefined8 *)(param_2 + 0x80);
    param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
    param_1[0x11] = uVar7;
    param_1[0x10] = uVar6;
  }
  uVar7 = *(undefined8 *)(param_2 + 0xa0);
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  uVar9 = *(undefined8 *)(param_2 + 0xb0);
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  uVar11 = *(undefined8 *)(param_2 + 0xc0);
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  uVar12 = *(undefined8 *)(param_2 + 0xc1);
  *(undefined8 *)((long)param_1 + 0xc9) = *(undefined8 *)(param_2 + 0xc9);
  *(undefined8 *)((long)param_1 + 0xc1) = uVar12;
  param_1[0x18] = uVar11;
  param_1[0x17] = uVar10;
  param_1[0x16] = uVar9;
  param_1[0x15] = uVar8;
  param_1[0x14] = uVar7;
  param_1[0x13] = uVar6;
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0xd8);
  return param_1;
}



/* Entry: 1094a3794; end: 1094a37eb;  */

long FUN_1094a3794(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1094a37ec; end: 1094a38bb;  */

undefined8 * FUN_1094a37ec(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(plVar5 + 0x11) & 1) == 0) {
      uStack_38 = 0;
      lVar6 = plVar5[2];
      puVar4 = &uStack_38;
      __ZNSt13exception_ptrD1Ev(puVar4);
      plVar5 = (long *)*param_1;
      if ((lVar6 == 0) && (0 < plVar5[1])) {
        __ZNSt3__115future_categoryEv();
        __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_60,4,puVar4);
        FUN_1094a38bc(auStack_40,auStack_60);
        __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar5,auStack_40);
        __ZNSt13exception_ptrD1Ev(auStack_40);
        __ZNSt3__112future_errorD1Ev(auStack_60);
        plVar5 = (long *)*param_1;
      }
    }
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1094a38bc; end: 1094a392f;  */

void FUN_1094a38bc(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)0x20;
  ___cxa_allocate_exception();
  __ZNSt11logic_errorC2ERKS_();
  *plVar2 = (long)(PTR___ZTVNSt3__112future_errorE_110346af8 + 0x10);
  lVar3 = *(long *)(param_1 + 0x10);
  plVar2[3] = *(long *)(param_1 + 0x18);
  plVar2[2] = lVar3;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094a3910);
  (*pcVar1)();
}



/* Entry: 1094a3930; end: 1094a397b;  */

long * FUN_1094a3930(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x18;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x20;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1094a397c; end: 1094a39d3;  */

long FUN_1094a397c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1094a39d4; end: 1094a3a3b;  */

void FUN_1094a39d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0xb0;
  __Znwm();
  FUN_1094a3a3c();
  lVar6 = lVar4 + 0x18;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x20);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x20) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 1094a3a3c; end: 1094a3a87;  */

undefined8 * FUN_1094a3a3c(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af6d60;
  FUN_1094a2fcc(param_1 + 3,param_2,*param_3);
  return param_1;
}



/* Entry: 1094a3a88; end: 1094a3a97;  */

void FUN_1094a3a88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6d60;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094a3a98; end: 1094a3ab7;  */

void FUN_1094a3a98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af6d60;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094a3ab8; end: 1094a3b2f;  */

void FUN_1094a3ab8(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x58);
  if (*plVar1 != 0) {
    FUN_1094a310c(plVar1);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  FUN_1093ef3e0(param_1 + 0x60,0);
  FUN_109476864(plVar1,0);
  func_0x0001094a41ec(*(undefined8 *)(param_1 + 0x48));
  func_0x0001094a4108(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1094a3b30; end: 1094a3b33;  */

void FUN_1094a3b30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094a3b34; end: 1094a3be3;  */

void FUN_1094a3b34(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 1094a3be4; end: 1094a3dab;  */

/* WARNING: Removing unreachable block (ram,0x0001094a3d0c) */
/* WARNING: Removing unreachable block (ram,0x0001094a3d38) */

uint FUN_1094a3be4(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 *apuStack_110 [2];
  char cStack_f9;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  char cStack_b1;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_68 [6];
  undefined8 *puStack_38;
  
  (**(code **)(**(long **)(param_1 + 0x50) + 0x30))(auStack_b0);
  FUN_1094a3ff0(auStack_98,auStack_b0,param_1);
  (**(code **)(**(long **)(param_2 + 0x50) + 0x30))(auStack_128);
  FUN_1094a3ff0(apuStack_110,auStack_128,param_2);
  puVar1 = auStack_98;
  func_0x000107c2abd4(puVar1,apuStack_110);
  if (((ulong)puVar1 & 0xff) == 0) {
    uVar2 = uStack_80;
    func_0x0001094a3e14(uStack_80,uStack_78,auStack_68,uStack_f8,uStack_f0,auStack_e0);
    if (((uint)uVar2 >> 7 & 1) == 0) {
      func_0x0001094a3e14(uStack_f8,uStack_f0,auStack_e0,uStack_80,uStack_78,auStack_68);
      uVar3 = 0;
    }
    else {
      uVar3 = 0xff;
    }
  }
  else {
    uVar3 = -((uint)puVar1 >> 7 & 1);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(uStack_c8);
  }
  puStack_38 = auStack_e0;
  FUN_109378cec(&puStack_38);
  puStack_38 = &uStack_f8;
  FUN_109378cec(&puStack_38);
  if (cStack_f9 < '\0') {
    __ZdlPv(apuStack_110[0]);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  apuStack_110[0] = auStack_68;
  FUN_109378cec(apuStack_110);
  apuStack_110[0] = &uStack_80;
  FUN_109378cec(apuStack_110);
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  return uVar3 >> 7 & 1;
}


