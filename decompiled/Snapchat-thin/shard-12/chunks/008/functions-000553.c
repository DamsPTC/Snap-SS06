/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098e9fd4; end: 1098ea053;  */

void FUN_1098e9fd4(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar3 = 0;
    uVar5 = 0;
    lVar2 = *param_1;
    do {
      uVar4 = uVar5 + (ulong)*(uint *)(lVar2 + lVar3 * 4) * (ulong)param_2;
      *(int *)(lVar2 + lVar3 * 4) = (int)uVar4;
      uVar5 = uVar4 >> 0x20;
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
    if (uVar5 != 0) {
      uVar5 = lVar1 + 1;
      if ((ulong)param_1[2] < uVar5) {
        (*(code *)param_1[3])(param_1);
        lVar2 = *param_1;
        lVar1 = param_1[1];
        uVar5 = lVar1 + 1;
      }
      param_1[1] = uVar5;
      *(int *)(lVar2 + lVar1 * 4) = (int)(uVar4 >> 0x20);
    }
  }
  return;
}



/* Entry: 1098ea054; end: 1098ea103;  */

void FUN_1098ea054(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = (int)param_1[0x14] - *(int *)(param_2 + 0xa0);
  if (0 < (int)uVar3) {
    iVar2 = (int)param_1[1];
    uVar7 = (ulong)(uVar3 + iVar2);
    uVar5 = param_1[2];
    if (uVar5 < uVar7) {
      (*(code *)param_1[3])(param_1,uVar7);
      uVar5 = param_1[2];
    }
    if (uVar5 <= uVar7) {
      uVar7 = uVar5;
    }
    param_1[1] = uVar7;
    lVar4 = *param_1;
    if (0 < iVar2) {
      uVar1 = (iVar2 - 1U) + uVar3;
      lVar6 = (ulong)(iVar2 - 1U) << 2;
      uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      do {
        *(undefined4 *)(lVar4 + uVar7) = *(undefined4 *)(lVar4 + lVar6);
        lVar6 = lVar6 + -4;
        uVar7 = uVar7 - 4;
      } while (lVar6 != -4);
    }
    _bzero(lVar4,(ulong)uVar3 << 2);
    *(uint *)(param_1 + 0x14) = (int)param_1[0x14] - uVar3;
  }
  return;
}



/* Entry: 1098ea104; end: 1098ea18f;  */

void FUN_1098ea104(long *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  
  FUN_1098e9a7c();
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    lVar11 = 0;
    uVar4 = *(int *)(param_2 + 0x14) - (int)param_1[0x14];
    lVar8 = *param_1;
    lVar9 = (ulong)uVar4 << 0x20;
    puVar10 = (uint *)*param_2;
    puVar12 = (uint *)(lVar8 + (long)(int)uVar4 * 4);
    do {
      lVar1 = (lVar11 - (ulong)*puVar10) + (ulong)*puVar12;
      *puVar12 = (uint)lVar1;
      lVar11 = lVar1 >> 0x3f;
      lVar9 = lVar9 + 0x100000000;
      lVar3 = lVar3 + -1;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar3 != 0);
    if (lVar1 < 0) {
      *(int *)(lVar8 + (lVar9 >> 0x1e)) = *(int *)(lVar8 + (lVar9 >> 0x1e)) + -1;
    }
  }
  uVar6 = param_1[1];
  uVar4 = (uint)uVar6;
  if (0 < (int)uVar4) {
    uVar4 = 1;
  }
  lVar3 = (uVar6 & 0xffffffff) * 4;
  do {
    lVar3 = lVar3 + -4;
    uVar5 = (uint)uVar6;
    uVar2 = uVar4;
    if ((int)uVar5 < 2) break;
    uVar6 = (ulong)(uVar5 - 1);
    uVar2 = uVar5;
  } while (*(int *)(*param_1 + lVar3) == 0);
  uVar6 = (ulong)uVar2;
  uVar7 = param_1[2];
  if (uVar7 < uVar2) {
    (*(code *)param_1[3])(param_1,uVar6);
    uVar7 = param_1[2];
  }
  if (uVar7 <= uVar6) {
    uVar6 = uVar7;
  }
  param_1[1] = uVar6;
  return;
}



/* Entry: 1098ea190; end: 1098ea62f;  */

long * FUN_1098ea190(long *param_1,int *param_2,uint *param_3,uint param_4,uint param_5,
                    ulong param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined1 uVar12;
  ulong uVar13;
  uint *puVar14;
  char cVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puStack_100;
  uint *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  uint *puStack_c8;
  undefined1 *puStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  char cStack_a1;
  undefined8 uStack_a0;
  char cStack_89;
  uint uStack_88;
  int iStack_84;
  undefined1 auStack_7e [2];
  uint uStack_7c;
  undefined8 uStack_78;
  uint auStack_6c [3];
  
  puVar14 = *(uint **)param_2;
  uVar6 = param_2[2];
  auStack_7e[1] = 0x30;
  uVar3 = uVar6;
  if (param_4 != 0) {
    uVar3 = uVar6 + 1;
  }
  uVar13 = (ulong)uVar3;
  uVar3 = *param_3;
  uStack_7c = uVar6;
  uStack_78 = puVar14;
  auStack_6c[0] = param_4;
  if ((uVar3 >> 0xe & 1) == 0) {
    uVar16 = 0x2e;
  }
  else {
    uVar16 = param_6;
    FUN_1099a8090();
    uVar3 = *param_3;
  }
  auStack_7e[0] = (undefined1)uVar16;
  uVar7 = param_2[3];
  iVar10 = uVar7 + uVar6;
  uVar8 = param_3[3];
  uVar2 = uVar3 & 7;
  if (uVar2 == 1) goto LAB_1098ea280;
  if (uVar2 != 2) {
    if (iVar10 < -3) {
LAB_1098ea280:
      if ((uVar3 >> 0xd & 1) == 0) {
        if (uVar6 == 1) {
          uVar16 = 0;
          uVar17 = 0;
          auStack_7e[0] = 0;
        }
        else {
          uVar17 = 0;
        }
      }
      else {
        uVar17 = (ulong)(uVar8 - uVar6 & ((int)(uVar8 - uVar6) >> 0x1f ^ 0xffffffffU));
        uVar13 = uVar17 + uVar13;
      }
      iVar5 = 1 - iVar10;
      if (1 - iVar10 == 0 || 1 < iVar10) {
        iVar5 = iVar10 + -1;
      }
      lVar11 = 3;
      if (999 < iVar5) {
        lVar11 = 4;
      }
      if (iVar5 < 100) {
        lVar11 = 2;
      }
      lVar1 = 2;
      if ((uVar16 & 0xff) != 0) {
        lVar1 = 3;
      }
      lVar1 = uVar13 + lVar11 + lVar1;
      uVar12 = 0x65;
      if ((uVar3 & 0x1000) != 0) {
        uVar12 = 0x45;
      }
      puStack_100 = (uint *)CONCAT44(puStack_100._4_4_,param_4);
      uStack_f0._0_5_ = CONCAT14((char)uVar16,uVar6);
      uStack_e8._0_6_ = CONCAT15(uVar12,CONCAT14(0x30,(int)uVar17));
      puStack_e0 = (uint *)CONCAT44(puStack_e0._4_4_,iVar10 + -1);
      puStack_f8 = puVar14;
      if ((int)param_3[2] < 1) {
        if ((ulong)param_1[2] < (ulong)(param_1[1] + lVar1)) {
          (*(code *)param_1[3])(param_1);
        }
        cVar15 = (char)uVar16;
        if (param_4 != 0) {
          lVar11 = param_1[1];
          uVar13 = lVar11 + 1;
          if ((ulong)param_1[2] < uVar13) {
            (*(code *)param_1[3])(param_1);
            lVar11 = param_1[1];
            uVar13 = lVar11 + 1;
          }
          param_1[1] = uVar13;
          *(char *)(*param_1 + lVar11) = (char)(0x202b2d00 >> (ulong)((param_4 & 3) << 3));
          uVar17 = (ulong)uStack_e8 & 0xffffffff;
          puVar14 = puStack_f8;
          uVar6 = (uint)uStack_f0;
          cVar15 = uStack_f0._4_1_;
        }
        func_0x0001098ea7a8(param_1,puVar14,uVar6,1,(int)cVar15);
        if (0 < (int)uVar17) {
          FUN_1098e7c90(param_1,uVar17,(long)&uStack_e8 + 4);
        }
        uVar12 = uStack_e8._5_1_;
        lVar11 = param_1[1];
        uVar13 = lVar11 + 1;
        if ((ulong)param_1[2] < uVar13) {
          (*(code *)param_1[3])(param_1);
          lVar11 = param_1[1];
          uVar13 = lVar11 + 1;
        }
        param_1[1] = uVar13;
        *(undefined1 *)(*param_1 + lVar11) = uVar12;
        plVar9 = (long *)((ulong)puStack_e0 & 0xffffffff);
        FUN_1098e7d04(plVar9,param_1);
      }
      else {
        FUN_1098ea630(param_1,param_3,lVar1,lVar1,&puStack_100);
        plVar9 = param_1;
      }
      return plVar9;
    }
    uVar4 = uVar8;
    if ((int)uVar8 < 1) {
      uVar4 = param_5;
    }
    if ((int)uVar4 < iVar10) goto LAB_1098ea280;
  }
  iStack_84 = iVar10;
  if (-1 < (int)uVar7) {
    lVar1 = uVar7 + uVar13;
    uStack_88 = uVar8 - iVar10;
    lVar11 = lVar1;
    if ((uVar3 >> 0xd & 1) != 0) {
      lVar11 = lVar1 + 1;
      if ((uVar2 == 2) || (0 < (int)uStack_88)) {
        lVar11 = lVar11 + (ulong)uStack_88;
        if ((int)uStack_88 < 1) {
          lVar11 = lVar1 + 1;
        }
      }
      else {
        uStack_88 = 0;
      }
    }
    FUN_1098e7eac(&uStack_b8,param_6,uVar3 >> 0xe & 1);
    puVar14 = &uStack_b8;
    func_0x0001098e7b24(puVar14,iVar10);
    puStack_100 = auStack_6c;
    puStack_f8 = (uint *)&uStack_78;
    lVar11 = lVar11 + ((ulong)puVar14 & 0xffffffff);
    uStack_f0 = &uStack_7c;
    puStack_d0 = (uint *)auStack_7e;
    puStack_c8 = &uStack_88;
    puStack_c0 = auStack_7e + 1;
    uStack_e8 = (uint *)param_2;
    puStack_e0 = &uStack_b8;
    puStack_d8 = param_3;
    FUN_1098ea87c(param_1,param_3,lVar11,lVar11,&puStack_100);
LAB_1098ea530:
    if (cStack_89 < '\0') {
      __ZdlPv(uStack_a0);
    }
    if (-1 < cStack_a1) {
      return param_1;
    }
    __ZdlPv(CONCAT44(uStack_b4,uStack_b8));
    return param_1;
  }
  if (0 < iVar10) {
    uVar6 = uVar8 - uVar6 & (int)(uVar3 << 0x12) >> 0x1f;
    uStack_88 = uVar6;
    FUN_1098e7eac(&uStack_b8,param_6,uVar3 >> 0xe & 1);
    puVar14 = &uStack_b8;
    func_0x0001098e7b24(puVar14,iVar10);
    puStack_100 = auStack_6c;
    puStack_f8 = (uint *)&uStack_78;
    uStack_f0 = &uStack_7c;
    uStack_e8 = (uint *)&iStack_84;
    lVar11 = ((uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) + 1) + uVar13 +
             ((ulong)puVar14 & 0xffffffff);
    puStack_e0 = (uint *)auStack_7e;
    puStack_d0 = &uStack_88;
    puStack_c8 = (uint *)(auStack_7e + 1);
    puStack_d8 = &uStack_b8;
    FUN_1098eab88(param_1,param_3,lVar11,lVar11,&puStack_100);
    goto LAB_1098ea530;
  }
  uStack_b8 = -iVar10;
  if (uVar6 == 0) {
    if ((-1 < (int)uVar8) && ((int)uVar8 < (int)uStack_b8)) {
      uStack_b8 = uVar8;
    }
    if (uStack_b8 == 0) {
      uStack_88 = CONCAT31(uStack_88._1_3_,(char)((uVar3 & 0x2000) >> 0xd));
      iVar10 = 1;
      if ((uVar3 & 0x2000) != 0) {
        iVar10 = 2;
      }
      goto LAB_1098ea588;
    }
  }
  uStack_88 = CONCAT31(uStack_88._1_3_,1);
  iVar10 = 2;
LAB_1098ea588:
  puStack_100 = auStack_6c;
  puStack_f8 = &uStack_88;
  uStack_f0 = (uint *)auStack_7e;
  uStack_e8 = &uStack_b8;
  puStack_e0 = (uint *)(auStack_7e + 1);
  puStack_d8 = (uint *)&uStack_78;
  puStack_d0 = &uStack_7c;
  FUN_1098eae0c(param_1,param_3,(iVar10 + uStack_b8) + uVar13,(iVar10 + uStack_b8) + uVar13,
                &puStack_100);
  return param_1;
}



/* Entry: 1098ea630; end: 1098ea84b;  */

ulong FUN_1098ea630(long *param_1,uint *param_2,long param_3,ulong param_4,uint *param_5)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  if (param_4 <= param_2[2]) {
    uVar6 = param_2[2] - param_4;
  }
  uVar5 = uVar6 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if ((ulong)param_1[2] < param_1[1] + param_3 + uVar6 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (*(code *)param_1[3])(param_1);
  }
  if (uVar5 != 0) {
    FUN_1094471fc(param_1,uVar5,param_2);
  }
  uVar1 = *param_5;
  if (uVar1 != 0) {
    lVar4 = param_1[1];
    uVar3 = lVar4 + 1;
    if ((ulong)param_1[2] < uVar3) {
      (*(code *)param_1[3])(param_1);
      lVar4 = param_1[1];
      uVar3 = lVar4 + 1;
    }
    param_1[1] = uVar3;
    *(char *)(*param_1 + lVar4) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  func_0x0001098ea7a8(param_1,*(undefined8 *)(param_5 + 2),param_5[4],1,(long)(char)param_5[5]);
  if (0 < (int)param_5[6]) {
    FUN_1098e7c90(param_1,param_5[6],param_5 + 7);
  }
  uVar2 = *(undefined1 *)((long)param_5 + 0x1d);
  lVar4 = param_1[1];
  uVar3 = lVar4 + 1;
  if ((ulong)param_1[2] < uVar3) {
    (*(code *)param_1[3])(param_1);
    lVar4 = param_1[1];
    uVar3 = lVar4 + 1;
  }
  param_1[1] = uVar3;
  *(undefined1 *)(*param_1 + lVar4) = uVar2;
  uVar3 = (ulong)param_5[8];
  FUN_1098e7d04(uVar3,param_1);
  if (uVar6 == uVar5) {
    return uVar3;
  }
  lVar4 = uVar6 - uVar5;
  uVar6 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar6 == 1) {
    func_0x000109447280(uVar3,lVar4,&stack0xffffffffffffffcf);
  }
  else if (lVar4 != 0) {
    do {
      FUN_109446adc(uVar3,param_2 + 1,(long)(param_2 + 1) + uVar6);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return uVar3;
}



/* Entry: 1098ea84c; end: 1098ea87b;  */

undefined8 FUN_1098ea84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_109446adc(param_3,param_1,param_2);
  return param_3;
}



/* Entry: 1098ea87c; end: 1098ea93f;  */

undefined8 FUN_1098ea87c(long param_1,uint *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar3 = uVar2 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(param_1 + 0x10) <
      *(long *)(param_1 + 8) + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  if (uVar3 != 0) {
    FUN_1094471fc(param_1,uVar3,param_2);
  }
  FUN_1098ea940(param_5,param_1);
  if (uVar2 == uVar3) {
    return param_5;
  }
  lVar1 = uVar2 - uVar3;
  uVar2 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar2 == 1) {
    func_0x000109447280(param_5,lVar1,&stack0xffffffffffffffcf);
  }
  else if (lVar1 != 0) {
    do {
      FUN_109446adc(param_5,param_2 + 1,(long)(param_2 + 1) + uVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_5;
}



/* Entry: 1098ea940; end: 1098eaa43;  */

long * FUN_1098ea940(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  
  uVar1 = *(uint *)*param_1;
  if (uVar1 != 0) {
    lVar5 = param_2[1];
    uVar3 = lVar5 + 1;
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar5 = param_2[1];
      uVar3 = lVar5 + 1;
    }
    param_2[1] = uVar3;
    *(char *)(*param_2 + lVar5) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098eaa44(param_2,*(undefined8 *)param_1[1],*(undefined4 *)param_1[2],
                *(undefined4 *)(param_1[3] + 0xc),param_1[4]);
  if ((*(byte *)(param_1[5] + 1) >> 5 & 1) != 0) {
    uVar2 = *(undefined1 *)param_1[6];
    lVar5 = param_2[1];
    uVar3 = lVar5 + 1;
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar5 = param_2[1];
      uVar3 = lVar5 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)(*param_2 + lVar5) = uVar2;
    iVar6 = *(int *)param_1[7];
    if (0 < iVar6) {
      puVar4 = (undefined1 *)param_1[8];
      if (0 < iVar6) {
        do {
          uVar2 = *puVar4;
          lVar5 = param_2[1];
          uVar3 = lVar5 + 1;
          if ((ulong)param_2[2] < uVar3) {
            (*(code *)param_2[3])(param_2);
            lVar5 = param_2[1];
            uVar3 = lVar5 + 1;
          }
          param_2[1] = uVar3;
          *(undefined1 *)(*param_2 + lVar5) = uVar2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      return param_2;
    }
  }
  return param_2;
}



/* Entry: 1098eaa44; end: 1098eab87;  */

uint **** FUN_1098eaa44(uint ****param_1,long param_2,int param_3,uint ****param_4,uint ****param_5)

{
  uint uVar1;
  uint ****ppppuVar2;
  uint ***pppuVar3;
  long lVar4;
  uint ****ppppuVar5;
  uint ****ppppuVar6;
  uint ****ppppuVar7;
  uint ***pppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uStack_261;
  uint ***pppuStack_260;
  uint ***pppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  uint **appuStack_240 [63];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = param_5[4];
  if (-1 < (char)*(byte *)((long)param_5 + 0x2f)) {
    pppuVar3 = (uint ***)(ulong)*(byte *)((long)param_5 + 0x2f);
  }
  if (pppuVar3 == (uint ***)0x0) {
    ppppuVar6 = param_4;
    FUN_109446adc(param_1,param_2,param_2 + param_3);
    pppuStack_260 = (uint ***)CONCAT71(pppuStack_260._1_7_,0x30);
    ppppuVar5 = &pppuStack_260;
    FUN_1098e7c90();
    ppppuVar2 = param_1;
    ppppuVar7 = param_5;
    param_5 = param_1;
  }
  else {
    uStack_248 = 0x1098e8c88;
    uStack_250 = 500;
    pppuStack_258 = (uint ***)0x0;
    ppppuVar7 = param_5;
    pppuStack_260 = appuStack_240;
    FUN_109446adc(&pppuStack_260,param_2,param_2 + param_3);
    uStack_261 = 0x30;
    FUN_1098e7c90(&pppuStack_260,param_4,&uStack_261);
    ppppuVar5 = (uint ****)pppuStack_260;
    ppppuVar6 = (uint ****)pppuStack_258;
    FUN_1098e834c(param_5);
    ppppuVar2 = (uint ****)pppuStack_260;
    param_4 = param_1;
    if (pppuStack_260 != appuStack_240) {
      _free();
      param_4 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  uVar10 = 0;
  if (ppppuVar6 <= (uint ****)(ulong)*(uint *)(param_4 + 1)) {
    uVar10 = (long)(ulong)*(uint *)(param_4 + 1) - (long)ppppuVar6;
  }
  uVar9 = uVar10 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*(uint *)param_4 >> 3) & 7] & 0x3fU);
  if (ppppuVar2[2] <
      (uint ***)
      ((long)ppppuVar5 +
      (long)(uVar10 * ((ulong)(*(uint *)param_4 >> 0xf) & 7) + (long)ppppuVar2[1]))) {
    (*(code *)ppppuVar2[3])(ppppuVar2);
  }
  if (uVar9 != 0) {
    FUN_1094471fc(ppppuVar2,uVar9,param_4);
  }
  uVar1 = *(uint *)*ppppuVar7;
  if (uVar1 != 0) {
    pppuVar8 = ppppuVar2[1];
    pppuVar3 = (uint ***)((long)pppuVar8 + 1);
    if (ppppuVar2[2] < pppuVar3) {
      (*(code *)ppppuVar2[3])(ppppuVar2);
      pppuVar8 = ppppuVar2[1];
      pppuVar3 = (uint ***)((long)pppuVar8 + 1);
    }
    ppppuVar2[1] = pppuVar3;
    *(char *)((long)*ppppuVar2 + (long)pppuVar8) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098eacc8(ppppuVar2,*ppppuVar7[1],*(undefined4 *)ppppuVar7[2],*(undefined4 *)ppppuVar7[3],
                (long)*(char *)ppppuVar7[4],ppppuVar7[5]);
  if (0 < *(int *)ppppuVar7[6]) {
    FUN_1098e7c90();
  }
  if (uVar10 == uVar9) {
    return ppppuVar2;
  }
  lVar4 = uVar10 - uVar9;
  uVar10 = (ulong)(*(uint *)param_4 >> 0xf) & 7;
  if ((int)uVar10 == 1) {
    func_0x000109447280(ppppuVar2,lVar4,&stack0xfffffffffffffd5f);
  }
  else if (lVar4 != 0) {
    do {
      FUN_109446adc(ppppuVar2,(uint *)((long)param_4 + 4),(long)param_4 + 4 + uVar10);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return ppppuVar2;
}



/* Entry: 1098eab88; end: 1098eacc7;  */

long * FUN_1098eab88(long *param_1,uint *param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  if (param_4 <= param_2[2]) {
    uVar5 = param_2[2] - param_4;
  }
  uVar4 = uVar5 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if ((ulong)param_1[2] < param_1[1] + param_3 + uVar5 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (*(code *)param_1[3])(param_1);
  }
  if (uVar4 != 0) {
    FUN_1094471fc(param_1,uVar4,param_2);
  }
  uVar1 = *(uint *)*param_5;
  if (uVar1 != 0) {
    lVar3 = param_1[1];
    uVar2 = lVar3 + 1;
    if ((ulong)param_1[2] < uVar2) {
      (*(code *)param_1[3])(param_1);
      lVar3 = param_1[1];
      uVar2 = lVar3 + 1;
    }
    param_1[1] = uVar2;
    *(char *)(*param_1 + lVar3) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098eacc8(param_1,*(undefined8 *)param_5[1],*(undefined4 *)param_5[2],
                *(undefined4 *)param_5[3],(long)*(char *)param_5[4],param_5[5]);
  if (0 < *(int *)param_5[6]) {
    FUN_1098e7c90();
  }
  if (uVar5 == uVar4) {
    return param_1;
  }
  lVar3 = uVar5 - uVar4;
  uVar5 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar5 == 1) {
    func_0x000109447280(param_1,lVar3,&stack0xffffffffffffffcf);
  }
  else if (lVar3 != 0) {
    do {
      FUN_109446adc(param_1,param_2 + 1,(long)(param_2 + 1) + uVar5);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return param_1;
}



/* Entry: 1098eacc8; end: 1098eae0b;  */

/* WARNING: Possible PIC construction at 0x0001098ead40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098ead44) */
/* WARNING: Removing unreachable block (ram,0x0001098ead7c) */
/* WARNING: Removing unreachable block (ram,0x0001098ead80) */
/* WARNING: Removing unreachable block (ram,0x0001098ead98) */

uint * FUN_1098eacc8(undefined1 *param_1,uint *param_2,long param_3,ulong param_4,uint *param_5,
                    long param_6)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  ulong uVar7;
  undefined1 *unaff_x22;
  ulong uVar8;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [504];
  long lStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  ppuVar2 = &puStack_260;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(ulong *)(param_6 + 0x20);
  if (-1 < (char)*(byte *)(param_6 + 0x2f)) {
    uVar7 = (ulong)*(byte *)(param_6 + 0x2f);
  }
  if (uVar7 == 0) {
    ppuVar3 = (undefined1 **)param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      if (puStack_260 != unaff_x22) {
        _free();
      }
      __Unwind_Resume();
      uVar7 = 0;
      if (param_4 <= param_2[2]) {
        uVar7 = param_2[2] - param_4;
      }
      uVar8 = uVar7 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
      if (*(ulong *)(param_1 + 0x10) <
          *(long *)(param_1 + 8) + param_3 + uVar7 * ((ulong)(*param_2 >> 0xf) & 7)) {
        (**(code **)(param_1 + 0x18))(param_1);
      }
      if (uVar8 != 0) {
        FUN_1094471fc(param_1,uVar8,param_2);
      }
      FUN_1098eaed0(param_5,param_1);
      if (uVar7 != uVar8) {
        lVar5 = uVar7 - uVar8;
        uVar7 = (ulong)(*param_2 >> 0xf) & 7;
        if ((int)uVar7 == 1) {
          func_0x000109447280(param_5,lVar5,&stack0xfffffffffffffd6f);
        }
        else if (lVar5 != 0) {
          do {
            FUN_109446adc(param_5,param_2 + 1,(long)(param_2 + 1) + uVar7);
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        return param_5;
      }
      return param_5;
    }
  }
  else {
    uStack_248 = 0x1098e8c88;
    unaff_x22 = auStack_240;
    uStack_250 = 500;
    uStack_258 = 0;
    unaff_x30 = 0x1098ead44;
    register0x00000008 = (BADSPACEBASE *)&puStack_260;
    ppuVar3 = ppuVar2;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x21 = param_6;
    unaff_x29 = puVar1;
    puStack_260 = unaff_x22;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar5 = (long)param_2 + (long)(int)param_4;
  puVar4 = param_2;
  FUN_1098ea84c(param_2,lVar5,ppuVar3);
  if ((int)param_5 == 0) {
    return puVar4;
  }
  lVar6 = *(long *)(puVar4 + 2);
  uVar7 = lVar6 + 1;
  if (*(ulong *)(puVar4 + 4) < uVar7) {
    (**(code **)(puVar4 + 6))(puVar4);
    lVar6 = *(long *)(puVar4 + 2);
    uVar7 = lVar6 + 1;
  }
  *(ulong *)(puVar4 + 2) = uVar7;
  *(char *)(*(long *)puVar4 + lVar6) = (char)param_5;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  FUN_109446adc(puVar4,lVar5,(long)param_2 + (long)(int)param_3);
  return puVar4;
}



/* Entry: 1098eae0c; end: 1098eaecf;  */

undefined8 FUN_1098eae0c(long param_1,uint *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar3 = uVar2 >> ((long)(char)(&UNK_10e00b1f9)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(param_1 + 0x10) <
      *(long *)(param_1 + 8) + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  if (uVar3 != 0) {
    FUN_1094471fc(param_1,uVar3,param_2);
  }
  FUN_1098eaed0(param_5,param_1);
  if (uVar2 == uVar3) {
    return param_5;
  }
  lVar1 = uVar2 - uVar3;
  uVar2 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar2 == 1) {
    func_0x000109447280(param_5,lVar1,&stack0xffffffffffffffcf);
  }
  else if (lVar1 != 0) {
    do {
      FUN_109446adc(param_5,param_2 + 1,(long)(param_2 + 1) + uVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_5;
}



/* Entry: 1098eaed0; end: 1098eafeb;  */

long * FUN_1098eaed0(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)*param_1;
  if (uVar1 != 0) {
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(char *)(*param_2 + lVar4) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  lVar4 = param_2[1];
  uVar3 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar3) {
    (*(code *)param_2[3])(param_2);
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)(*param_2 + lVar4) = 0x30;
  if (*(char *)param_1[1] == '\x01') {
    uVar2 = *(undefined1 *)param_1[2];
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)(*param_2 + lVar4) = uVar2;
    FUN_1098e7c90(param_2,*(undefined4 *)param_1[3],param_1[4]);
    FUN_109446adc();
  }
  return param_2;
}



/* Entry: 1098eafec; end: 1098eb09f;  */

undefined4 * FUN_1098eafec(undefined4 param_1,undefined4 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *param_2 = param_1;
  *(undefined8 *)(param_2 + 2) = param_3;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[0xc] = 0x3f800000;
  plVar1 = (long *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  FUN_1098e634c(&uStack_50);
  if (*plVar1 != 0) {
    *(long *)(param_2 + 0x10) = *plVar1;
    __ZdlPv();
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x12) = 0;
  }
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *(undefined8 *)(param_2 + 0xe) = uStack_50;
  *(undefined8 *)(param_2 + 0x12) = uStack_40;
  return param_2;
}



/* Entry: 1098eb0a0; end: 1098eb147;  */

void FUN_1098eb0a0(float *param_1,undefined8 *param_2,undefined2 param_3)

{
  float *pfVar1;
  float fVar2;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  puStack_38 = (undefined1 *)&uStack_40;
  pfVar1 = param_1 + 4;
  fVar2 = *param_1;
  uStack_40 = (undefined2)(int)((float)*param_2 / fVar2);
  uStack_3e = (undefined2)(int)((float)((ulong)*param_2 >> 0x20) / fVar2);
  uStack_3c = (undefined2)(int)(*(float *)(param_2 + 1) / fVar2);
  FUN_1098eb20c(pfVar1,&uStack_40,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  pfVar1 = pfVar1 + 6;
  FUN_1098e60a4(pfVar1,param_2,param_3);
  if ((int)pfVar1 != 0) {
    *(long *)(param_1 + 0x14) = *(long *)(param_1 + 0x14) + 1;
  }
  return;
}



/* Entry: 1098eb148; end: 1098eb20b;  */

long * FUN_1098eb148(long *param_1)

{
  long lVar1;
  
  func_0x0001098eb180(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098eb20c; end: 1098eb63f;  */

undefined1  [16] FUN_1098eb20c(long *param_1,short *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong unaff_x21;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined1 auVar19 [16];
  
  uVar16 = (long)(int)*param_2 * 0x466f45d + (long)(int)param_2[1] * 0x12740a5 +
           (long)(int)param_2[2] * 0x4f9ffb7;
  uVar17 = param_1[1];
  if (uVar17 != 0) {
    uVar7 = uVar17 - 1;
    if ((uVar17 & uVar7) == 0) {
      unaff_x21 = uVar16 & uVar7;
    }
    else {
      unaff_x21 = uVar16;
      if (uVar17 <= uVar16) {
        uVar13 = 0;
        if (uVar17 != 0) {
          uVar13 = uVar16 / uVar17;
        }
        unaff_x21 = uVar16 - uVar13 * uVar17;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x21 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar12; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar13 = plVar15[1];
        if (uVar13 == uVar16) {
          if ((((short)plVar15[2] == *param_2) && (*(short *)((long)plVar15 + 0x12) == param_2[1]))
             && (*(short *)((long)plVar15 + 0x14) == param_2[2])) {
            uVar6 = 0;
            goto LAB_1098eb5c0;
          }
        }
        else {
          if ((uVar17 & uVar7) == 0) {
            uVar13 = uVar13 & uVar7;
          }
          else if (uVar17 <= uVar13) {
            uVar8 = 0;
            if (uVar17 != 0) {
              uVar8 = uVar13 / uVar17;
            }
            uVar13 = uVar13 - uVar8 * uVar17;
          }
          if (uVar13 != unaff_x21) break;
        }
      }
    }
  }
  puVar18 = (undefined4 *)*param_4;
  plVar15 = (long *)0x50;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  uVar1 = *(undefined2 *)(puVar18 + 1);
  *(undefined4 *)(plVar15 + 2) = *puVar18;
  *(undefined2 *)((long)plVar15 + 0x14) = uVar1;
  FUN_1098e6034(plVar15 + 3);
  if ((uVar17 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar17))
  goto LAB_1098eb548;
  uVar7 = 1;
  if (2 < uVar17) {
    uVar7 = (ulong)((uVar17 & uVar17 - 1) != 0);
  }
  uVar7 = uVar7 | uVar17 << 1;
  uVar17 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar7 <= uVar17) {
    uVar7 = uVar17;
  }
  if (uVar7 - 1 == 0) {
    uVar7 = 2;
  }
  else if ((uVar7 & uVar7 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar17 = param_1[1];
  if (uVar17 < uVar7) {
LAB_1098eb3d0:
    if (uVar7 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1098eb628);
      (*pcVar3)();
    }
    lVar4 = uVar7 << 3;
    __Znwm();
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    uVar17 = 0;
    param_1[1] = uVar7;
    do {
      *(undefined8 *)(*param_1 + uVar17 * 8) = 0;
      uVar17 = uVar17 + 1;
    } while (uVar7 != uVar17);
    plVar9 = (long *)param_1[2];
    uVar17 = uVar7;
    if (plVar9 != (long *)0x0) {
      uVar13 = plVar9[1];
      uVar8 = uVar7 - 1;
      if ((uVar7 & uVar8) == 0) {
        uVar13 = uVar13 & uVar8;
      }
      else if (uVar7 <= uVar13) {
        uVar14 = 0;
        if (uVar7 != 0) {
          uVar14 = uVar13 / uVar7;
        }
        uVar13 = uVar13 - uVar14 * uVar7;
      }
      *(long **)(*param_1 + uVar13 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar14 = plVar10[1];
        if ((uVar7 & uVar8) == 0) {
          uVar14 = uVar14 & uVar8;
        }
        else if (uVar7 <= uVar14) {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = uVar14 / uVar7;
          }
          uVar14 = uVar14 - uVar2 * uVar7;
        }
        plVar11 = plVar10;
        if (uVar14 != uVar13) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + uVar14 * 8) == 0) {
            *(long **)(lVar4 + uVar14 * 8) = plVar9;
            uVar13 = uVar14;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar4 + uVar14 * 8);
            **(long **)(lVar4 + uVar14 * 8) = (long)plVar10;
            plVar11 = plVar9;
          }
        }
        plVar9 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar7 < uVar17) {
    uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar13) {
      uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
    }
    if (uVar7 <= uVar13) {
      uVar7 = uVar13;
    }
    if (uVar7 < uVar17) {
      if (uVar7 != 0) goto LAB_1098eb3d0;
      lVar4 = *param_1;
      *param_1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = param_1[1];
    }
  }
  if ((uVar17 & uVar17 - 1) == 0) {
    unaff_x21 = uVar17 - 1 & uVar16;
  }
  else {
    unaff_x21 = uVar16;
    if (uVar17 <= uVar16) {
      uVar7 = 0;
      if (uVar17 != 0) {
        uVar7 = uVar16 / uVar17;
      }
      unaff_x21 = uVar16 - uVar7 * uVar17;
    }
  }
LAB_1098eb548:
  lVar4 = *param_1;
  plVar9 = *(long **)(lVar4 + unaff_x21 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar15 = *plVar9;
    *plVar9 = (long)plVar15;
    *(long **)(lVar4 + unaff_x21 * 8) = plVar9;
    if (*plVar15 != 0) {
      uVar16 = *(ulong *)(*plVar15 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar16 = uVar16 & uVar17 - 1;
      }
      else if (uVar17 <= uVar16) {
        uVar7 = 0;
        if (uVar17 != 0) {
          uVar7 = uVar16 / uVar17;
        }
        uVar16 = uVar16 - uVar7 * uVar17;
      }
      *(long **)(*param_1 + uVar16 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar9;
    *plVar9 = (long)plVar15;
  }
  param_1[3] = param_1[3] + 1;
  uVar6 = 1;
LAB_1098eb5c0:
  auVar19._8_8_ = uVar6;
  auVar19._0_8_ = plVar15;
  return auVar19;
}



/* Entry: 1098eb640; end: 1098eb6db;  */

void FUN_1098eb640(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001098eb1bc(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1098eb6dc; end: 1098eba0f;  */

undefined8 * FUN_1098eb6dc(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  
  uVar5 = *param_3;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *param_1 = uVar5;
  uVar5 = *(undefined8 *)((long)param_3 + 0xc);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_3 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar5;
  uVar5 = param_3[3];
  uVar1 = *(undefined4 *)(param_3 + 4);
  param_1[5] = 0x32aaaba7;
  *(undefined4 *)(param_1 + 4) = uVar1;
  param_1[3] = uVar5;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  puVar2 = (undefined8 *)0x70;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110b1c888;
  puVar2[3] = 0x32aaaba7;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  param_1[0xf] = puVar2 + 3;
  param_1[0x10] = puVar2;
  puStack_60 = puVar2 + 0xb;
  lVar3 = 8;
  __Znwm();
  puVar2[0xb] = lVar3;
  puVar2[0xc] = lVar3;
  puVar2[0xd] = lVar3 + 8;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  FUN_1098ec82c(&uStack_80);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x7b8);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x750);
  *(undefined2 *)(param_1 + 0x13) = *(undefined2 *)(param_2 + 0xc4);
  *(undefined2 *)((long)param_1 + 0x9a) = *(undefined2 *)(param_2 + 100);
  *(float *)((long)param_1 + 0x9c) = *(float *)(param_2 + 0x128) * 0.5;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x1f8);
  param_1[0x15] = *(undefined8 *)(param_2 + 0x2d0);
  param_1[0x16] = *(undefined8 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 400);
  fVar6 = *(float *)(param_2 + 0x260) * 0.017453292;
  _cosf();
  *(float *)((long)param_1 + 0xbc) = fVar6;
  fVar6 = (90.0 - *(float *)(param_2 + 0x260)) * 0.017453292;
  _cosf();
  *(float *)(param_1 + 0x18) = fVar6;
  *(float *)((long)param_1 + 0xc4) = *(float *)(param_2 + 0x3a8) * *(float *)(param_2 + 0x3a8);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x410);
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x1a] = &PTR_FUN_110b1c808;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x7f7fffff;
  param_1[0x51] = 10;
  param_1[0x52] = 0x3fe0000000000000;
  param_1[0x53] = 0x32;
  param_1[0x54] = 500;
  param_1[0x55] = 0x3fefae147ae147ae;
  param_1[0x57] = 0;
  param_1[0x56] = 0x19;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)((long)param_1 + 0x2ec) = 0;
  *(undefined1 *)((long)param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x324) = *(undefined1 *)(param_2 + 0x473);
  *(undefined1 *)((long)param_1 + 0x325) = *(undefined1 *)(param_2 + 0x5a3);
  *(undefined4 *)(param_1 + 0x65) = *(undefined4 *)(param_2 + 0x608);
  *(undefined4 *)((long)param_1 + 0x32c) = *(undefined4 *)(param_2 + 0x670);
  *(float *)(param_1 + 0x66) = *(float *)(param_2 + 0x4d8) * *(float *)(param_2 + 0x4d8);
  *(float *)((long)param_1 + 0x334) = *(float *)(param_2 + 0x540) * *(float *)(param_2 + 0x540);
  *(int *)(param_1 + 0x67) = (int)*(undefined8 *)(param_2 + 0x6e0);
  *(undefined1 *)((long)param_1 + 0x33c) = *(undefined1 *)(param_2 + 0x81b);
  *(undefined1 *)((long)param_1 + 0x33d) = *(undefined1 *)(param_2 + 0x87b);
  *(undefined1 *)((long)param_1 + 0x33e) = *(undefined1 *)(param_2 + 0x8db);
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  puVar4 = (undefined4 *)0x4;
  __Znwm();
  param_1[0x69] = puVar4;
  *puVar4 = 0;
  param_1[0x6b] = puVar4 + 1;
  param_1[0x6a] = puVar4 + 1;
  param_1[0x6d] = 0x3f80000000000000;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  return param_1;
}



/* Entry: 1098eba10; end: 1098eba13;  */

long FUN_1098eba10(long param_1)

{
  if (*(long *)(param_1 + 0x178) != 0) {
    *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x178);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098eba14; end: 1098ec19f;  */

/* WARNING: Removing unreachable block (ram,0x0001098ec570) */
/* WARNING: Removing unreachable block (ram,0x0001098ec574) */
/* WARNING: Removing unreachable block (ram,0x0001098ec57c) */
/* WARNING: Removing unreachable block (ram,0x0001098ec584) */
/* WARNING: Removing unreachable block (ram,0x0001098ec588) */

ulong * FUN_1098eba14(long param_1,undefined8 param_2,float *param_3,int *param_4,float *param_5)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  float *pfVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  int *piVar18;
  int iVar19;
  long lVar20;
  float *pfVar21;
  ulong uVar22;
  float *pfVar23;
  float *pfVar24;
  ulong uVar25;
  long lVar26;
  float *pfVar27;
  long lVar28;
  ulong *puVar29;
  ushort *puVar30;
  float *pfVar31;
  ulong uVar32;
  long *plVar33;
  float *pfVar34;
  float *unaff_x24;
  float *pfVar35;
  float *unaff_x25;
  int iVar36;
  float *pfVar37;
  float *pfVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  double dVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uStack_5c0;
  float fStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  undefined8 uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  double dStack_190;
  double dStack_188;
  ulong uStack_180;
  float *pfStack_178;
  float *pfStack_170;
  float *pfStack_168;
  float *pfStack_160;
  float *pfStack_158;
  ulong uStack_150;
  ulong *puStack_148;
  float *pfStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined4 *puStack_120;
  float *pfStack_118;
  float *pfStack_110;
  float *pfStack_108;
  ulong uStack_100;
  float *pfStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  float *pfStack_e0;
  float *pfStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined8 uStack_bc;
  float fStack_b4;
  float afStack_b0 [2];
  float *pfStack_a8;
  ulong uStack_a0;
  long lStack_98;
  
  pfVar37 = (float *)(param_1 + 8);
  pfVar27 = *(float **)pfVar37;
  if (((ulong)pfVar27 & 0xfffffffc) == 0) {
    return (ulong *)0x0;
  }
  uVar13 = (uint)*(long *)(param_1 + 0x1e0);
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  uVar8 = (int)pfVar27 - 4;
  if (*(long *)(param_1 + 0x1e0) + 3U <= ((ulong)pfVar27 & 0xffffffff)) {
    uVar8 = uVar13;
  }
  uVar15 = (ulong)uVar8;
  dVar48 = *(double *)(param_1 + 0x1c0);
  dVar39 = 1.0 - *(double *)(param_1 + 0x1d8);
  _log();
  dVar40 = dVar48;
  _pow(dVar48,0x4008000000000000);
  dVar40 = 1.0 - dVar40;
  _log();
  *(long *)(param_1 + 0x1e8) = (long)(dVar39 / dVar40);
  *(ulong *)(param_1 + 0x198) = (ulong)pfVar27 & 0xffffffff;
  *(ulong *)(param_1 + 0x1a0) = uVar15;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x160);
  pfVar24 = (float *)(uVar15 + ((ulong)pfVar27 & 0xffffffff));
  pfVar11 = (float *)(param_1 + 0x160);
  func_0x0001056c5718();
  pfStack_e0 = (float *)0x0;
  puVar29 = (ulong *)0x0;
  pfStack_108 = (float *)(param_1 + 0x30);
  *(ulong *)(param_1 + 0x38) = *(ulong *)pfStack_108;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  pfVar38 = (float *)(param_1 + 0x18);
  pfVar38[0] = 0.0;
  pfVar38[1] = 0.0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  pfStack_110 = (float *)(param_1 + 0x80);
  pfStack_110[0] = 0.0;
  pfStack_110[1] = 0.0;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  uVar14 = *(undefined8 *)(param_1 + 0x100);
  pfVar34 = (float *)(param_1 + 0xe8);
  pfVar34[0] = 0.0;
  pfVar34[1] = 0.0;
  pfStack_d8 = (float *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x108) = uVar14;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  lStack_d0 = uVar15 + 3;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  puStack_120 = (undefined4 *)(param_1 + 0xcc);
  lStack_e8 = 0x7fffffffffffffff;
  uStack_f0 = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  pfStack_118 = pfVar37;
  uStack_100 = uVar15;
  pfStack_f8 = pfVar38;
  while( true ) {
    if ((*(ulong **)(param_1 + 0x1c8) <= puVar29) &&
       ((*(ulong **)(param_1 + 0x1d0) <= puVar29 || (*(ulong **)(param_1 + 0x1e8) <= puVar29)))) {
      if ((*(byte *)(param_1 + 0x158) & 1) != 0) {
        return puVar29;
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x80);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x8c);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x94);
      FUN_1093784d8(pfStack_108,*(long *)(param_1 + 0x98),*(long *)(param_1 + 0xa0),
                    *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 2);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
      puVar17 = (undefined4 *)(param_1 + 0xcc);
      lVar20 = 3;
      do {
        *(undefined8 *)(puVar17 + -0x1c) = *(undefined8 *)(puVar17 + -2);
        puVar17[-0x1a] = *puVar17;
        puVar17 = puVar17 + 3;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      FUN_1098ecd88(pfVar37,pfStack_d8,pfVar38);
      uVar16 = *(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 2;
      uVar15 = *(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100) >> 2;
      if (uVar16 <= uVar15) {
        if (uVar16 != uVar15) {
          return puVar29;
        }
        if (*(float *)(param_1 + 0x11c) <= *(float *)(param_1 + 0x4c)) {
          return puVar29;
        }
      }
      FUN_1098ecc94(pfVar34,pfVar38);
      return puVar29;
    }
    lVar20 = *(long *)(param_1 + 0x1a8);
    pfVar31 = *(float **)(param_1 + 0x160);
    pfVar21 = *(float **)(param_1 + 0x168);
    uVar16 = (long)pfVar21 - (long)pfVar31 >> 2;
    pfVar35 = unaff_x24;
    if (uVar16 < (ulong)(lStack_d0 + lVar20)) {
      if (pfVar31 == pfVar21) {
        uVar13 = *(uint *)(param_1 + 0x198);
        pfVar27 = (float *)(ulong)uVar13;
        uStack_a0 = uStack_a0 & 0xffffffff00000000;
        if (uVar13 == 0) {
          uVar16 = 0;
        }
        else {
          do {
            pfVar11 = (float *)(param_1 + 0x160);
            pfVar24 = (float *)&uStack_a0;
            FUN_109231afc();
            uVar8 = (int)(float)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar8);
          } while (uVar8 < uVar13);
          pfVar31 = *(float **)(param_1 + 0x160);
          pfVar21 = *(float **)(param_1 + 0x168);
          uVar16 = (long)pfVar21 - (long)pfVar31 >> 2;
        }
      }
      if (1 < (long)uVar16) {
        lStack_98 = lStack_e8;
        uStack_a0 = uStack_f0;
        pfVar27 = pfVar21 + -1;
        if (pfVar31 < pfVar27) {
          unaff_x24 = (float *)(uVar16 - 1);
          unaff_x25 = pfVar31;
          do {
            afStack_b0[0] = 0.0;
            afStack_b0[1] = 0.0;
            pfVar11 = (float *)&uStack_a0;
            pfVar24 = (float *)(param_1 + 400);
            param_3 = afStack_b0;
            pfStack_a8 = unaff_x24;
            func_0x0001098ec880();
            if (pfVar11 != (float *)0x0) {
              fVar41 = *pfVar31;
              *pfVar31 = unaff_x25[(long)pfVar11];
              unaff_x25[(long)pfVar11] = fVar41;
            }
            pfVar31 = pfVar31 + 1;
            unaff_x24 = (float *)((long)unaff_x24 + -1);
            unaff_x25 = unaff_x25 + 1;
          } while (pfVar31 < pfVar27);
          pfVar31 = *(float **)(param_1 + 0x160);
        }
      }
      lVar20 = 0;
      pfVar35 = unaff_x24;
    }
    *(long *)(param_1 + 0x1a8) = lVar20 + 3;
    uVar16 = 0;
    if (pfVar31 == (float *)0x0) break;
    lVar28 = 0;
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x178);
    do {
      uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)((long)pfVar31 + lVar28 + lVar20 * 4));
      pfVar11 = (float *)(param_1 + 0x178);
      pfVar24 = (float *)&uStack_a0;
      FUN_109231afc();
      lVar28 = lVar28 + 4;
    } while (lVar28 != 0xc);
    pfVar35 = *(float **)(param_1 + 0x178);
    unaff_x25 = (float *)(*(long *)(param_1 + 0x180) - (long)pfVar35);
    uVar32 = (long)unaff_x25 >> 2;
    pfVar27 = (float *)0xc;
    uVar16 = uVar32;
    if (((long)uVar32 < 0) || ((pfVar35 == (float *)0x0 && (*(long *)(param_1 + 0x180) != 0))))
    break;
    unaff_x24 = pfVar35;
    if (2 < uVar32) {
      uVar25 = *(ulong *)pfVar37;
      if (((uVar25 <= (uint)*pfVar35) || (uVar25 <= (uint)pfVar35[1])) ||
         (uVar25 <= (uint)pfVar35[2])) break;
      lVar20 = *(long *)(param_1 + 0x10);
      pfVar31 = (float *)(lVar20 + (ulong)(uint)*pfVar35 * 0xc);
      pfVar21 = (float *)(lVar20 + (ulong)(uint)pfVar35[1] * 0xc);
      pfVar23 = (float *)(lVar20 + (ulong)(uint)pfVar35[2] * 0xc);
      fVar41 = *pfVar23;
      fVar44 = *pfVar31;
      fVar45 = *pfVar21;
      fStack_b4 = pfVar31[2];
      uVar14 = *(undefined8 *)(pfVar21 + 1);
      fVar49 = (float)*(undefined8 *)(pfVar31 + 1);
      fVar46 = (float)uVar14 - fVar49;
      fVar43 = (float)((ulong)*(undefined8 *)(pfVar31 + 1) >> 0x20);
      fVar50 = (float)((ulong)uVar14 >> 0x20);
      uVar14 = *(undefined8 *)(pfVar23 + 1);
      fVar49 = (float)uVar14 - fVar49;
      fVar47 = (float)((ulong)uVar14 >> 0x20);
      fVar42 = fVar49 * -(fVar50 - fVar43) + (fVar47 - fVar43) * fVar46;
      fVar43 = (fVar47 - fVar43) * -(fVar45 - fVar44) + (fVar41 - fVar44) * (fVar50 - fVar43);
      uStack_c8 = CONCAT44(fVar43,fVar42);
      fStack_c0 = -(fVar46 * (fVar41 - fVar44)) + fVar49 * (fVar45 - fVar44);
      fVar41 = fStack_c0 * fStack_c0 + fVar42 * fVar42 + fVar43 * fVar43;
      if (0.0 < fVar41) {
        fVar41 = SQRT(fVar41);
        uStack_c8 = CONCAT44(fVar43 / fVar41,fVar42 / fVar41);
        fStack_c0 = fStack_c0 / fVar41;
      }
      uStack_bc = *(undefined8 *)pfVar31;
      lVar20 = *(long *)(param_1 + 0x1a8);
      *(ulong *)(param_1 + 0x1a8) = lVar20 + uVar15;
      if ((uVar15 != 0) && (*(long *)(param_1 + 0x160) == 0)) break;
      lStack_98 = *(long *)(param_1 + 0x160) + lVar20 * 4;
      pfVar24 = (float *)&uStack_a0;
      param_3 = (float *)&uStack_bc;
      param_4 = (int *)&uStack_c8;
      pfVar11 = pfVar37;
      param_5 = pfVar38;
      uStack_a0 = uVar15;
      FUN_1098ecb24(*pfStack_d8);
      if ((int)pfVar11 != 0) {
        uVar15 = *(ulong *)(param_1 + 0x30);
        pfVar38 = *(float **)(param_1 + 0x38);
        if (*(long *)(param_1 + 0x40) - (long)pfVar38 < (long)unaff_x25) {
          pfVar27 = (float *)((long)pfVar38 - uVar15);
          pfVar31 = (float *)(uVar32 + ((long)pfVar27 >> 2));
          if ((ulong)pfVar31 >> 0x3e != 0) goto LAB_1098ec19c;
          uVar15 = *(long *)(param_1 + 0x40) - uVar15;
          pfVar24 = (float *)((long)uVar15 >> 1);
          if (pfVar24 <= pfVar31) {
            pfVar24 = pfVar31;
          }
          if (0x7ffffffffffffffb < uVar15) {
            pfVar24 = (float *)0x3fffffffffffffff;
          }
          if (pfVar24 == (float *)0x0) {
            pfVar11 = (float *)0x0;
          }
          else {
            pfVar11 = pfStack_108;
            func_0x000107c2ab8c();
          }
          pfVar37 = (float *)((long)pfVar11 + (long)pfVar27);
          pfVar27 = pfVar11 + (long)pfVar24;
          uVar15 = (long)pfVar37 + (long)unaff_x25;
          pfVar31 = pfVar37;
          do {
            uVar16 = 0;
            if (uVar32 == 0) goto LAB_1098ec198;
            unaff_x24 = pfVar35 + 1;
            *pfVar31 = *pfVar35;
            uVar32 = uVar32 - 1;
            unaff_x25 = unaff_x25 + -1;
            pfVar31 = pfVar31 + 1;
            pfVar35 = unaff_x24;
          } while (unaff_x25 != (float *)0x0);
          _memcpy(uVar15,pfVar38,*(long *)(param_1 + 0x38) - (long)pfVar38);
          pfVar24 = *(float **)(param_1 + 0x30);
          pfVar31 = (float *)(uVar15 + (*(long *)(param_1 + 0x38) - (long)pfVar38));
          *(float **)(param_1 + 0x38) = pfVar38;
          param_3 = (float *)((long)pfVar38 - (long)pfVar24);
          uVar15 = (long)pfVar37 - (long)param_3;
          _memcpy(uVar15);
          pfVar11 = *(float **)(param_1 + 0x30);
          *(ulong *)(param_1 + 0x30) = uVar15;
          *(float **)(param_1 + 0x38) = pfVar31;
          *(float **)(param_1 + 0x40) = pfVar27;
          pfVar37 = pfStack_118;
          if (pfVar11 != (float *)0x0) {
            __ZdlPv();
            uVar15 = *(ulong *)(param_1 + 0x30);
            pfVar31 = *(float **)(param_1 + 0x38);
            pfVar37 = pfStack_118;
          }
        }
        else {
          do {
            unaff_x24 = pfVar35 + 1;
            pfVar31 = pfVar38 + 1;
            *pfVar38 = *pfVar35;
            uVar32 = uVar32 - 1;
            pfVar35 = unaff_x24;
            pfVar38 = pfVar31;
          } while (uVar32 != 0);
          *(float **)(param_1 + 0x38) = pfVar31;
        }
        pfVar38 = pfStack_f8;
        uVar16 = (long)((long)pfVar31 - uVar15) >> 2;
        uVar15 = *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 2;
        if ((uVar15 < uVar16) ||
           ((uVar16 == uVar15 && (*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0xb4))))) {
          pfVar11 = pfStack_110;
          pfVar24 = pfStack_f8;
          FUN_1098ecc94();
          uVar16 = 0;
          *(undefined1 *)(param_1 + 0x158) = 0;
          *(undefined8 *)(param_1 + 0x150) = 0;
LAB_1098ebf44:
          uVar15 = uStack_100;
          if (*(ulong *)(param_1 + 0x1b8) <= uVar16) {
            *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x80);
            *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x88);
            *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x8c);
            *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x94);
            param_4 = (int *)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 2);
            FUN_1093784d8(pfStack_108);
            *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0xb0);
            *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0xb8);
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
            lVar20 = 3;
            puVar17 = puStack_120;
            do {
              *(undefined8 *)(puVar17 + -0x1c) = *(undefined8 *)(puVar17 + -2);
              puVar17[-0x1a] = *puVar17;
              puVar17 = puVar17 + 3;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            pfVar11 = pfVar37;
            pfVar24 = pfStack_d8;
            param_3 = pfVar38;
            FUN_1098ecd88();
            uVar32 = *(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 2;
            uVar16 = *(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100) >> 2;
            if ((uVar16 < uVar32) ||
               ((uVar32 == uVar16 && (*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0x11c))))) {
              pfVar11 = pfVar34;
              pfVar24 = pfVar38;
              FUN_1098ecc94();
            }
            *(undefined1 *)(param_1 + 0x158) = 1;
            *(undefined8 *)(param_1 + 0x150) = 0;
          }
        }
        else {
          uVar16 = *(long *)(param_1 + 0x150) + 1;
          *(ulong *)(param_1 + 0x150) = uVar16;
          uVar15 = uStack_100;
          if ((*(byte *)(param_1 + 0x158) & 1) == 0) goto LAB_1098ebf44;
        }
        lVar20 = *(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100);
        if (lVar20 == 0) {
          lVar20 = *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98);
        }
        pfVar27 = (float *)(lVar20 >> 2);
        if (pfStack_e0 < pfVar27) {
          dVar48 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 8));
          dVar48 = (double)pfVar27 / dVar48;
          dVar39 = 1.0 - *(double *)(param_1 + 0x1d8);
          _log();
          dVar40 = dVar48;
          _pow(dVar48,0x4008000000000000);
          dVar40 = 1.0 - dVar40;
          _log();
          *(long *)(param_1 + 0x1e8) = (long)(dVar39 / dVar40);
          pfStack_e0 = pfVar27;
        }
      }
    }
    puVar29 = (ulong *)((long)puVar29 + 1);
  }
LAB_1098ec198:
  FUN_1098c25f0();
LAB_1098ec19c:
  FUN_109231bc0();
  dStack_190 = dVar39;
  dStack_188 = dVar48;
  uStack_180 = uVar15;
  pfStack_178 = pfVar38;
  pfStack_170 = pfVar37;
  pfStack_168 = unaff_x25;
  pfStack_160 = pfVar35;
  pfStack_158 = pfVar34;
  uStack_150 = uVar16;
  puStack_148 = puVar29;
  pfStack_140 = pfVar27;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  pcStack_128 = FUN_1098ec1a0;
  uVar16 = *(ulong *)(pfVar11 + 0x1e);
  __ZNSt3__15mutex4lockEv(uVar16);
  uVar15 = *(ulong *)(pfVar11 + 0x1e);
  if (*(long *)(uVar15 + 0x40) == *(long *)(uVar15 + 0x48)) {
    uStack_598 = 0;
    uStack_590 = 0;
    uStack_588 = 0;
    __ZNSt3__15mutex6unlockEv(uVar16);
  }
  else {
    puVar29 = (ulong *)(*(long *)(uVar15 + 0x48) + -8);
    uVar32 = *puVar29;
    *puVar29 = 0;
    uVar25 = *(ulong *)(pfVar11 + 0x20);
    *(ulong **)(uVar15 + 0x48) = puVar29;
    if (uVar25 != 0) {
      plVar33 = (long *)(uVar25 + 0x10);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar10) {
          *plVar33 = *plVar33 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    uStack_598 = uVar32;
    uStack_590 = uVar15;
    uStack_588 = uVar25;
    __ZNSt3__15mutex6unlockEv(uVar16);
    if (uVar32 != 0) {
      uStack_598 = 0;
      uStack_590 = 0;
      uStack_588 = 0;
      uStack_5a8 = uVar15;
      uStack_5a0 = uVar25;
      goto LAB_1098ec298;
    }
  }
  uVar32 = 0x58;
  __Znwm();
  FUN_1098eafec(pfVar11[0x22]);
  uStack_5a8 = *(ulong *)(pfVar11 + 0x1e);
  uStack_5a0 = *(ulong *)(pfVar11 + 0x20);
  if (uStack_5a0 != 0) {
    plVar33 = (long *)(uStack_5a0 + 0x10);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar10) {
        *plVar33 = *plVar33 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
LAB_1098ec298:
  uVar16 = uStack_5a0;
  uVar15 = uStack_5a8;
  uStack_5b0 = uVar32;
  FUN_1098ed658(&uStack_598);
  func_0x0001098eb688(uVar32 + 0x10);
  *(undefined8 *)(uVar32 + 0x50) = 0;
  iVar4 = *param_4;
  iVar5 = param_4[1];
  if (0 < iVar5 * iVar4) {
    iVar36 = 0;
    puVar30 = *(ushort **)(param_4 + 4);
    do {
      uVar7 = *puVar30;
      if ((*(ushort *)(pfVar11 + 0x26) < uVar7) && (uVar7 < *(ushort *)((long)pfVar11 + 0x9a))) {
        fVar41 = (float)uVar7 * 0.001;
        uVar13 = 0;
        if (iVar4 != 0) {
          uVar13 = iVar36 / iVar4;
        }
        uVar8 = iVar36 - uVar13 * iVar4;
        uVar14 = NEON_scvtf(CONCAT44(uVar13,uVar8),4);
        fVar42 = (float)*(ulong *)(pfVar24 + 6) * ((float)uVar14 - (float)*(ulong *)(pfVar24 + 8)) *
                 fVar41;
        fVar43 = (float)(*(ulong *)(pfVar24 + 6) >> 0x20) *
                 ((float)((ulong)uVar14 >> 0x20) - (float)(*(ulong *)(pfVar24 + 8) >> 0x20)) *
                 fVar41;
        fVar44 = param_3[2];
        fVar45 = param_3[3];
        fVar47 = *param_3;
        fVar46 = param_3[1];
        fVar49 = -fVar44 * fVar43 + fVar41 * fVar46;
        fVar50 = -(fVar47 * fVar41) + fVar42 * fVar44;
        fVar51 = -fVar46 * fVar42 + fVar47 * fVar43;
        fVar49 = fVar49 + fVar49;
        fVar50 = fVar50 + fVar50;
        fVar51 = fVar51 + fVar51;
        uStack_5c0 = CONCAT44((float)(*(ulong *)(param_3 + 4) >> 0x20) +
                              fVar43 + fVar50 * fVar45 + -(fVar47 * fVar51) + fVar49 * fVar44,
                              (float)*(ulong *)(param_3 + 4) +
                              fVar42 + fVar49 * fVar45 + -fVar44 * fVar50 + fVar51 * fVar46);
        fStack_5b8 = param_3[6] + fVar41 + fVar45 * fVar51 + -fVar46 * fVar49 + fVar47 * fVar50;
        uVar25 = 0;
        if (param_5 != (float *)0x0) {
          if ((int)uVar8 < 0) {
            uVar22 = 0;
          }
          else if ((int)uVar13 < 0) {
            uVar22 = 0;
          }
          else {
            fVar41 = *param_5;
            uVar22 = 0;
            if ((int)uVar8 < (int)fVar41) {
              fVar42 = param_5[1];
              if ((int)uVar13 < (int)fVar42) {
                _bzero(&uStack_598,0x400);
                fVar43 = param_5[2];
                lVar28 = *(ulong *)(param_5 + 4) + ((ulong)uVar13 - 1) * (long)(int)fVar43;
                lVar20 = -1;
                do {
                  lVar26 = 3;
                  uVar25 = (ulong)uVar8 - 1;
                  do {
                    if ((uVar25 < (uint)fVar41) && (lVar20 + (ulong)uVar13 < (ulong)(uint)fVar42)) {
                      *(int *)((long)&uStack_598 + (ulong)*(byte *)(lVar28 + uVar25) * 4) =
                           *(int *)((long)&uStack_598 + (ulong)*(byte *)(lVar28 + uVar25) * 4) + 1;
                    }
                    uVar25 = uVar25 + 1;
                    lVar26 = lVar26 + -1;
                  } while (lVar26 != 0);
                  lVar20 = lVar20 + 1;
                  lVar28 = lVar28 + (int)fVar43;
                } while (lVar20 != 2);
                lVar20 = 4;
                piVar18 = (int *)&uStack_598;
                iVar19 = (int)uStack_598;
                do {
                  piVar2 = (int *)((long)&uStack_598 + lVar20);
                  iVar6 = *piVar2;
                  iVar3 = iVar19;
                  if (iVar19 <= iVar6) {
                    iVar3 = iVar6;
                  }
                  if (iVar6 <= iVar19) {
                    piVar2 = piVar18;
                  }
                  lVar20 = lVar20 + 4;
                  piVar18 = piVar2;
                  iVar19 = iVar3;
                } while (lVar20 != 0x400);
                uVar25 = (ulong)((uint)((int)piVar2 - (int)&uStack_598) >> 2) & 0xff;
                uVar22 = 0x100;
              }
              else {
                uVar25 = 0;
                uVar22 = 0;
              }
            }
          }
          uVar25 = uVar22 | uVar25;
        }
        param_4 = (int *)(uVar25 | (ulong)param_4 & 0xffffffffffff0000);
        FUN_1098eb0a0(uVar32,&uStack_5c0,param_4);
      }
      puVar30 = puVar30 + (int)pfVar11[0xce];
      iVar36 = (int)pfVar11[0xce] + iVar36;
    } while (iVar36 < iVar5 * iVar4);
  }
  puVar12 = (undefined8 *)0x30;
  __Znwm();
  uStack_5a8 = 0;
  uStack_5a0 = 0;
  *puVar12 = &PTR_FUN_110b1c8d8;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = uVar32;
  puVar12[4] = uVar15;
  puVar12[5] = uVar16;
  uStack_5b0 = 0;
  __ZNSt3__15mutex4lockEv(pfVar11 + 10);
  plVar33 = *(long **)(pfVar11 + 0x1c);
  *(ulong *)(pfVar11 + 0x1a) = uVar32;
  *(undefined8 **)(pfVar11 + 0x1c) = puVar12;
  if (plVar33 != (long *)0x0) {
    plVar1 = plVar33 + 1;
    do {
      lVar20 = *plVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar20 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar33 + 0x10))(plVar33);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
    }
  }
  __ZNSt3__15mutex6unlockEv(pfVar11 + 10);
  puVar29 = &uStack_5b0;
  FUN_1098ed658(puVar29);
  return puVar29;
}



/* Entry: 1098ec1a0; end: 1098ec613;  */

/* WARNING: Removing unreachable block (ram,0x0001098ec570) */
/* WARNING: Removing unreachable block (ram,0x0001098ec574) */
/* WARNING: Removing unreachable block (ram,0x0001098ec57c) */
/* WARNING: Removing unreachable block (ram,0x0001098ec584) */
/* WARNING: Removing unreachable block (ram,0x0001098ec588) */

void FUN_1098ec1a0(long param_1,long param_2,float *param_3,int *param_4,uint *param_5)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  int *piVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ushort *puVar26;
  undefined8 uVar27;
  int iVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uStack_4a0;
  float fStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  undefined8 uStack_478;
  long lStack_470;
  long lStack_468;
  
  uVar27 = *(undefined8 *)(param_1 + 0x78);
  __ZNSt3__15mutex4lockEv(uVar27);
  lVar24 = *(long *)(param_1 + 0x78);
  if (*(long *)(lVar24 + 0x40) == *(long *)(lVar24 + 0x48)) {
    uStack_478 = 0;
    lStack_470 = 0;
    lStack_468 = 0;
    __ZNSt3__15mutex6unlockEv(uVar27);
  }
  else {
    plVar16 = (long *)(*(long *)(lVar24 + 0x48) + -8);
    lVar29 = *plVar16;
    *plVar16 = 0;
    lVar25 = *(long *)(param_1 + 0x80);
    *(long **)(lVar24 + 0x48) = plVar16;
    if (lVar25 != 0) {
      plVar16 = (long *)(lVar25 + 0x10);
      do {
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar14) {
          *plVar16 = *plVar16 + 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    uStack_478 = lVar29;
    lStack_470 = lVar24;
    lStack_468 = lVar25;
    __ZNSt3__15mutex6unlockEv(uVar27);
    if (lVar29 != 0) {
      uStack_478 = 0;
      lStack_470 = 0;
      lStack_468 = 0;
      lStack_488 = lVar24;
      lStack_480 = lVar25;
      goto LAB_1098ec298;
    }
  }
  lVar29 = 0x58;
  __Znwm();
  FUN_1098eafec(*(undefined4 *)(param_1 + 0x88));
  lStack_488 = *(long *)(param_1 + 0x78);
  lStack_480 = *(long *)(param_1 + 0x80);
  if (lStack_480 != 0) {
    plVar16 = (long *)(lStack_480 + 0x10);
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar14) {
        *plVar16 = *plVar16 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
LAB_1098ec298:
  lVar25 = lStack_480;
  lVar24 = lStack_488;
  lStack_490 = lVar29;
  FUN_1098ed658(&uStack_478);
  func_0x0001098eb688(lVar29 + 0x10);
  *(undefined8 *)(lVar29 + 0x50) = 0;
  iVar4 = *param_4;
  iVar5 = param_4[1];
  if (0 < iVar5 * iVar4) {
    iVar28 = 0;
    puVar26 = *(ushort **)(param_4 + 4);
    do {
      uVar9 = *puVar26;
      if ((*(ushort *)(param_1 + 0x98) < uVar9) && (uVar9 < *(ushort *)(param_1 + 0x9a))) {
        fVar30 = (float)uVar9 * 0.001;
        uVar12 = 0;
        if (iVar4 != 0) {
          uVar12 = iVar28 / iVar4;
        }
        uVar11 = iVar28 - uVar12 * iVar4;
        uVar27 = NEON_scvtf(CONCAT44(uVar12,uVar11),4);
        fVar31 = (float)*(undefined8 *)(param_2 + 0x18) *
                 ((float)uVar27 - (float)*(undefined8 *)(param_2 + 0x20)) * fVar30;
        fVar32 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) *
                 ((float)((ulong)uVar27 >> 0x20) -
                 (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20)) * fVar30;
        fVar33 = param_3[2];
        fVar34 = param_3[3];
        fVar37 = *param_3;
        fVar36 = param_3[1];
        fVar35 = -fVar33 * fVar32 + fVar30 * fVar36;
        fVar38 = -(fVar37 * fVar30) + fVar31 * fVar33;
        fVar39 = -fVar36 * fVar31 + fVar37 * fVar32;
        fVar35 = fVar35 + fVar35;
        fVar38 = fVar38 + fVar38;
        fVar39 = fVar39 + fVar39;
        uStack_4a0 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) +
                              fVar32 + fVar38 * fVar34 + -(fVar37 * fVar39) + fVar35 * fVar33,
                              (float)*(undefined8 *)(param_3 + 4) +
                              fVar31 + fVar35 * fVar34 + -fVar33 * fVar38 + fVar39 * fVar36);
        fStack_498 = param_3[6] + fVar30 + fVar34 * fVar39 + -fVar36 * fVar35 + fVar37 * fVar38;
        uVar17 = 0;
        if (param_5 != (uint *)0x0) {
          if ((int)uVar11 < 0) {
            uVar20 = 0;
          }
          else if ((int)uVar12 < 0) {
            uVar20 = 0;
          }
          else {
            uVar6 = *param_5;
            uVar20 = 0;
            if ((int)uVar11 < (int)uVar6) {
              uVar7 = param_5[1];
              if ((int)uVar12 < (int)uVar7) {
                _bzero(&uStack_478,0x400);
                uVar10 = param_5[2];
                lVar21 = *(long *)(param_5 + 4) + ((ulong)uVar12 - 1) * (long)(int)uVar10;
                lVar22 = -1;
                do {
                  lVar23 = 3;
                  uVar17 = (ulong)uVar11 - 1;
                  do {
                    if ((uVar17 < uVar6) && (lVar22 + (ulong)uVar12 < (ulong)uVar7)) {
                      *(int *)((long)&uStack_478 + (ulong)*(byte *)(lVar21 + uVar17) * 4) =
                           *(int *)((long)&uStack_478 + (ulong)*(byte *)(lVar21 + uVar17) * 4) + 1;
                    }
                    uVar17 = uVar17 + 1;
                    lVar23 = lVar23 + -1;
                  } while (lVar23 != 0);
                  lVar22 = lVar22 + 1;
                  lVar21 = lVar21 + (int)uVar10;
                } while (lVar22 != 2);
                lVar22 = 4;
                piVar18 = (int *)&uStack_478;
                iVar19 = (int)uStack_478;
                do {
                  piVar2 = (int *)((long)&uStack_478 + lVar22);
                  iVar8 = *piVar2;
                  iVar3 = iVar19;
                  if (iVar19 <= iVar8) {
                    iVar3 = iVar8;
                  }
                  if (iVar8 <= iVar19) {
                    piVar2 = piVar18;
                  }
                  lVar22 = lVar22 + 4;
                  piVar18 = piVar2;
                  iVar19 = iVar3;
                } while (lVar22 != 0x400);
                uVar17 = (ulong)((uint)((int)piVar2 - (int)&uStack_478) >> 2) & 0xff;
                uVar20 = 0x100;
              }
              else {
                uVar17 = 0;
                uVar20 = 0;
              }
            }
          }
          uVar17 = uVar20 | uVar17;
        }
        param_4 = (int *)(uVar17 | (ulong)param_4 & 0xffffffffffff0000);
        FUN_1098eb0a0(lVar29,&uStack_4a0,param_4);
      }
      puVar26 = puVar26 + *(int *)(param_1 + 0x338);
      iVar28 = *(int *)(param_1 + 0x338) + iVar28;
    } while (iVar28 < iVar5 * iVar4);
  }
  puVar15 = (undefined8 *)0x30;
  __Znwm();
  lStack_488 = 0;
  lStack_480 = 0;
  *puVar15 = &PTR_FUN_110b1c8d8;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = lVar29;
  puVar15[4] = lVar24;
  puVar15[5] = lVar25;
  lStack_490 = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  plVar16 = *(long **)(param_1 + 0x70);
  *(long *)(param_1 + 0x68) = lVar29;
  *(undefined8 **)(param_1 + 0x70) = puVar15;
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 1;
    do {
      lVar24 = *plVar1;
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar24 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
  FUN_1098ed658(&lStack_490);
  return;
}



/* Entry: 1098ec614; end: 1098ec627;  */

void FUN_1098ec614(void)

{
  FUN_1098ec628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ec628; end: 1098ec747;  */

long FUN_1098ec628(long param_1)

{
  if (*(long *)(param_1 + 0x178) != 0) {
    *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x178);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098ec748; end: 1098ec757;  */

void FUN_1098ec748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1c888;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1098ec758; end: 1098ec777;  */

void FUN_1098ec758(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1c888;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ec778; end: 1098ec7db;  */

void FUN_1098ec778(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x60);
    plVar2 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        lVar1 = *plVar4;
        *plVar4 = 0;
        if (lVar1 != 0) {
          FUN_1098ec7e0();
        }
      } while (plVar4 != plVar3);
      plVar2 = *(long **)(param_1 + 0x58);
    }
    *(long **)(param_1 + 0x60) = plVar3;
    __ZdlPv(plVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 1098ec7dc; end: 1098ec7df;  */

void FUN_1098ec7dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ec7e0; end: 1098ec817;  */

void FUN_1098ec7e0(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  FUN_1098eb148(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1098ec818; end: 1098ec82b;  */

long * FUN_1098ec818(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar1 = (long *)plVar2[1];
  plVar4 = (long *)plVar2[2];
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -1;
    lVar3 = *plVar4;
    plVar2[2] = (long)plVar4;
    *plVar4 = 0;
    if (lVar3 != 0) {
      FUN_1098ec7e0();
      plVar4 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 1098ec82c; end: 1098ec907;  */

long * FUN_1098ec82c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
  while (plVar3 != plVar1) {
    plVar3 = plVar3 + -1;
    lVar2 = *plVar3;
    param_1[2] = (long)plVar3;
    *plVar3 = 0;
    if (lVar2 != 0) {
      FUN_1098ec7e0();
      plVar3 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098ec908; end: 1098ecb23;  */

void FUN_1098ec908(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar4 = param_3 / 0x1e;
  if (param_3 % 0x1e != 0) {
    uVar4 = uVar4 + 1;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = param_3 / uVar4;
  }
  param_1[2] = uVar5;
  param_1[3] = uVar4;
  uVar6 = -1L << (uVar5 & 0x3f) & 0x7ffffffe;
  if (0x3f < uVar5) {
    uVar6 = 0;
  }
  param_1[5] = uVar6;
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = uVar6 / uVar4;
  }
  if (uVar3 < (uVar6 ^ 0x7ffffffe)) {
    uVar4 = uVar4 + 1;
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = param_3 / uVar4;
    }
    param_1[2] = uVar5;
    param_1[3] = uVar4;
    if (0x3f < uVar5) {
      lVar7 = 0;
      param_1[4] = uVar4 + (uVar5 * uVar4 - param_3);
      param_1[5] = 0;
      goto LAB_1098ec9cc;
    }
    param_1[5] = -1L << (uVar5 & 0x3f) & 0x7ffffffe;
  }
  uVar6 = 0;
  if (uVar4 != 0) {
    uVar6 = param_3 / uVar4;
  }
  param_1[4] = uVar4 + (uVar6 * uVar4 - param_3);
  if (uVar5 < 0x3f) {
    lVar7 = (0x3fffffffUL >> (uVar5 & 0x3f)) << (uVar5 + 1 & 0x3f);
  }
  else {
    lVar7 = 0;
  }
LAB_1098ec9cc:
  param_1[6] = lVar7;
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = 0xffffffff >> (ulong)(-(uint)uVar5 & 0x1f);
  }
  uVar2 = 0xffffffff >> (ulong)(~(uint)uVar5 & 0x1f);
  if (0x1e < uVar5) {
    uVar2 = 0xffffffff;
  }
  *(uint *)(param_1 + 7) = uVar1;
  *(uint *)((long)param_1 + 0x3c) = uVar2;
  return;
}



/* Entry: 1098ecb24; end: 1098ecc93;  */

ulong * FUN_1098ecb24(float param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                     ulong *param_6,ulong *param_7,ulong *param_8,ulong *param_9,ulong *param_10)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  ulong *puVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  undefined8 uVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint uStack_1b4;
  ulong uStack_180;
  float afStack_178 [4];
  ulong *puStack_168;
  float fStack_160;
  float afStack_15c [3];
  undefined8 uStack_150;
  ulong uStack_148;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  param_10[4] = param_10[3];
  param_10[7] = 0;
  param_10[6] = 0;
  param_10[1] = 0;
  param_10[2] = 0;
  *param_10 = 0;
  param_10[9] = 0;
  param_10[8] = 0;
  param_10[0xb] = 0;
  param_10[10] = 0;
  param_10[0xc] = 0;
  uVar26 = *param_7;
  if (uVar26 == 0) {
    uVar26 = *param_6;
    if ((int)uVar26 != 0) {
      iVar28 = 0;
      do {
        FUN_1098ed5c4(*param_8,(int)param_8[1],*param_9,(int)param_9[1],
                      (ulong)(uint)(param_1 * param_1),param_6,iVar28,param_10);
        iVar28 = iVar28 + 1;
      } while ((int)uVar26 != iVar28);
    }
  }
  else {
    uVar27 = 0;
    puVar7 = param_6;
    puVar9 = param_7;
    puVar10 = param_8;
    uVar15 = uVar26;
    do {
      fVar34 = (float)param_4;
      if (uVar27 == uVar15) {
LAB_1098ecc90:
        FUN_1098c25f0();
        pcStack_68 = FUN_1098ecc94;
        lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar26 = puVar7[3];
        puVar7[3] = puVar9[3];
        puVar9[3] = uVar26;
        uVar26 = puVar7[4];
        puVar7[4] = puVar9[4];
        puVar9[4] = uVar26;
        uVar26 = puVar7[5];
        puVar7[5] = puVar9[5];
        puVar9[5] = uVar26;
        uVar26 = puVar7[1];
        uVar15 = *puVar7;
        uVar27 = puVar9[1];
        *puVar7 = *puVar9;
        *(int *)(puVar7 + 1) = (int)uVar27;
        *puVar9 = uVar15;
        *(int *)(puVar9 + 1) = (int)uVar26;
        iVar28 = *(int *)((long)puVar7 + 0x14);
        uVar16 = *(undefined8 *)((long)puVar7 + 0xc);
        iVar3 = *(int *)((long)puVar9 + 0x14);
        *(undefined8 *)((long)puVar7 + 0xc) = *(undefined8 *)((long)puVar9 + 0xc);
        *(int *)((long)puVar7 + 0x14) = iVar3;
        *(undefined8 *)((long)puVar9 + 0xc) = uVar16;
        *(int *)((long)puVar9 + 0x14) = iVar28;
        uVar26 = puVar7[6];
        *(int *)(puVar7 + 6) = (int)puVar9[6];
        *(int *)(puVar9 + 6) = (int)uVar26;
        iVar28 = *(int *)((long)puVar7 + 0x34);
        uVar26 = (ulong)*(uint *)((long)puVar9 + 0x34);
        *(uint *)((long)puVar7 + 0x34) = *(uint *)((long)puVar9 + 0x34);
        *(int *)((long)puVar9 + 0x34) = iVar28;
        uVar27 = puVar7[8];
        uVar17 = puVar7[7];
        uVar15 = puVar9[8];
        puVar7[7] = puVar9[7];
        *(int *)(puVar7 + 8) = (int)uVar15;
        puVar9[7] = uVar17;
        *(int *)(puVar9 + 8) = (int)uVar27;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
          return puVar7;
        }
        puStack_70 = &stack0xfffffffffffffff0;
        ___stack_chk_fail();
        fVar35 = (float)param_5;
        puStack_e0 = param_6;
        puStack_d8 = param_8;
        puStack_d0 = param_9;
        puStack_c8 = param_10;
        ppuStack_c0 = &puStack_70;
        pcStack_b8 = FUN_1098ecd88;
        lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar27 = puVar10[3];
        if (uVar27 == puVar10[4]) goto LAB_1098ed41c;
        uVar26 = 0;
        puVar18 = (ulong *)*puVar7;
        uVar17 = (long)(puVar10[4] - uVar27) >> 2;
        fVar31 = 0.0;
        uVar15 = 0;
        goto LAB_1098ecddc;
      }
      puVar9 = (ulong *)(ulong)*(uint *)(param_7[1] + uVar27 * 4);
      param_3 = *param_9;
      param_4 = (ulong)(uint)param_9[1];
      puVar7 = param_6;
      puVar10 = param_10;
      param_5 = (ulong)(uint)(param_1 * param_1);
      FUN_1098ed5c4(*param_8,(int)param_8[1]);
      fVar34 = (float)param_4;
      uVar15 = *param_7;
      if (uVar27 == uVar15) goto LAB_1098ecc90;
      uVar27 = uVar27 + 1;
    } while (uVar26 != uVar27);
  }
  uVar26 = param_10[3];
  uVar27 = param_10[4];
  if (uVar26 == uVar27) {
    param_10[6] = 0x7f7fffff7f7fffff;
  }
  else {
    *(float *)((long)param_10 + 0x34) =
         SQRT(*(float *)(param_10 + 6) / (float)(ulong)((long)(uVar27 - uVar26) >> 2));
    *(ulong *)((long)param_10 + 0xc) = *param_8;
    *(int *)((long)param_10 + 0x14) = (int)param_8[1];
    *param_10 = *param_9;
    *(int *)(param_10 + 1) = (int)param_9[1];
  }
  return (ulong *)(ulong)(uVar26 != uVar27);
LAB_1098ed5a0:
  FUN_1098c25f0();
  uVar8 = (uint)puVar9;
  goto LAB_1098ed5a4;
  while( true ) {
    uVar19 = puVar7[1];
    puVar24 = (undefined8 *)(uVar19 + (long)puVar23 * 0xc);
    uVar16 = *puVar24;
    fVar29 = (float)uVar15 + (float)uVar16;
    fVar30 = (float)(uVar15 >> 0x20) + (float)((ulong)uVar16 >> 0x20);
    uVar15 = CONCAT44(fVar30,fVar29);
    fVar32 = *(float *)(puVar24 + 1);
    param_3 = (ulong)(uint)fVar32;
    fVar31 = fVar31 + fVar32;
    uVar26 = uVar26 + 1;
    if (uVar17 == uVar26) break;
LAB_1098ecddc:
    puVar23 = (ulong *)(ulong)*(uint *)(uVar27 + uVar26 * 4);
    puVar11 = puVar10;
    if (puVar18 <= puVar23) goto LAB_1098ed5a0;
  }
  uVar20 = 0;
  fVar33 = (float)uVar17;
  param_3 = (ulong)(uint)fVar33;
  fVar29 = fVar29 / fVar33;
  fVar30 = fVar30 / fVar33;
  uVar15 = CONCAT44(fVar30,fVar29);
  fVar31 = fVar31 / fVar33;
  uVar26 = (ulong)(uint)fVar31;
  fVar39 = 0.0;
  fVar40 = 0.0;
  fVar38 = 0.0;
  fVar34 = 0.0;
  fVar41 = 0.0;
  fVar32 = 0.0;
  do {
    fVar35 = (float)param_5;
    puVar11 = (ulong *)(ulong)*(uint *)(uVar27 + uVar20 * 4);
    if (puVar18 <= puVar11) goto LAB_1098ed5a0;
    lVar25 = 0;
    puVar24 = (undefined8 *)(uVar19 + (long)puVar11 * 0xc);
    uVar16 = *puVar24;
    fVar35 = (float)uVar16 - fVar29;
    fVar37 = (float)((ulong)uVar16 >> 0x20) - fVar30;
    uStack_118 = CONCAT44(fVar37,fVar35);
    fVar42 = *(float *)(puVar24 + 1) - fVar31;
    uStack_110 = CONCAT44(uStack_110._4_4_,fVar42);
    pfVar12 = afStack_178;
    do {
      fVar43 = *(float *)((long)&uStack_118 + lVar25);
      *(ulong *)(pfVar12 + -2) = CONCAT44(fVar37 * fVar43,fVar35 * fVar43);
      *pfVar12 = fVar42 * fVar43;
      lVar25 = lVar25 + 4;
      pfVar12 = pfVar12 + 3;
    } while (lVar25 != 0xc);
    fVar41 = fVar41 + (float)uStack_180;
    fVar32 = fVar32 + (float)(uStack_180 >> 0x20);
    fVar34 = fVar34 + afStack_178[0];
    fVar39 = fVar39 + afStack_178[2];
    fVar40 = fVar40 + afStack_178[3];
    param_5 = (ulong)(uint)fStack_160;
    fVar38 = fVar38 + fStack_160;
    uVar20 = uVar20 + 1;
  } while (uVar20 != uVar17);
  auStack_140._4_2_ = 0;
  uVar36 = NEON_fmax(CONCAT44(ABS(fVar32),ABS(fVar41)),(ulong)(uint)ABS(fVar34),4);
  uVar16 = NEON_fmax(CONCAT44(ABS(fVar40),ABS(fVar39)),0,4);
  uVar16 = NEON_fmax(uVar36,uVar16,4);
  fVar35 = (float)((ulong)uVar16 >> 0x20);
  if (fVar35 <= (float)uVar16) {
    fVar35 = (float)uVar16;
  }
  fVar29 = ABS(fVar38);
  if (ABS(fVar38) <= fVar35) {
    fVar29 = fVar35;
  }
  fVar35 = 1.0;
  if (fVar29 != 0.0) {
    fVar35 = fVar29;
  }
  fVar32 = fVar32 / fVar35;
  fVar34 = fVar34 / fVar35;
  afStack_15c[1] = fVar39 / fVar35;
  fVar40 = fVar40 / fVar35;
  afStack_15c[2] = fVar38 / fVar35;
  afStack_15c[0] = fVar41 / fVar35;
  afStack_178[3] = 0.0;
  if (fVar34 * fVar34 <= 1.1754944e-38) {
    afStack_178[2] = 1.0;
    fStack_160 = 1.0;
  }
  else {
    fVar29 = SQRT(fVar34 * fVar34 + fVar32 * fVar32);
    fVar30 = 1.0 / fVar29;
    afStack_178[2] = fVar32 * fVar30;
    afStack_178[3] = fVar34 * fVar30;
    fVar34 = (afStack_15c[2] - afStack_15c[1]) * afStack_178[3] +
             fVar40 * (afStack_178[2] + afStack_178[2]);
    afStack_15c[1] = afStack_15c[1] + fVar34 * afStack_178[3];
    afStack_15c[2] = afStack_15c[2] - fVar34 * afStack_178[3];
    fStack_160 = -(fVar32 * fVar30);
    fVar40 = fVar40 - fVar34 * afStack_178[2];
    fVar32 = fVar29;
  }
  uVar27 = 0;
  uVar19 = 0;
  uStack_150 = CONCAT44(fVar40,fVar32);
  afStack_178[0] = 0.0;
  afStack_178[1] = 0.0;
  uStack_180 = 0x3f800000;
  puStack_168 = (ulong *)((ulong)(uint)afStack_178[3] << 0x20);
  uVar17 = 2;
  while( true ) {
    lVar25 = uVar17 - uVar19;
    if (lVar25 != 0 && (long)uVar19 <= (long)uVar17) {
      pfVar12 = (float *)((long)&uStack_150 + uVar19 * 4);
      do {
        if ((ABS(*pfVar12) < 1.1754944e-38) ||
           (fVar34 = *pfVar12 * 8388608.0, fVar34 * fVar34 <= ABS(pfVar12[-3]) + ABS(pfVar12[-2])))
        {
          *pfVar12 = 0.0;
        }
        pfVar12 = pfVar12 + 1;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    uVar20 = uVar17;
    pfVar12 = afStack_15c + uVar17 + 2;
    do {
      pfVar13 = pfVar12;
      uVar17 = uVar20;
      uVar20 = uVar17 - 1;
      if ((long)uVar17 < 1) {
        if (uVar27 < 0x5b) {
          uVar27 = 0;
          bVar5 = true;
          do {
            bVar6 = bVar5;
            lVar21 = 0;
            fVar29 = afStack_15c[uVar27];
            lVar25 = 10;
            fVar34 = fVar29;
            do {
              fVar30 = *(float *)((long)&uStack_180 + lVar25 * 4 + uVar27 * 4);
              lVar4 = lVar25 + -9;
              if (fVar34 <= fVar30) {
                fVar30 = fVar34;
                lVar4 = lVar21;
              }
              lVar21 = lVar4;
              fVar34 = fVar30;
              uVar17 = lVar25 - 8;
              lVar25 = lVar25 + 1;
            } while ((uVar17 ^ uVar27) != 3);
            if (lVar21 != 0) {
              lVar21 = lVar21 + uVar27;
              afStack_15c[uVar27] = afStack_15c[lVar21];
              afStack_15c[lVar21] = fVar29;
              puVar24 = (undefined8 *)((long)&uStack_180 + uVar27 * 0xc);
              puVar22 = (undefined8 *)((long)&uStack_180 + lVar21 * 0xc);
              uVar16 = *puVar22;
              *puVar22 = *puVar24;
              *puVar24 = uVar16;
              fVar34 = afStack_178[uVar27 * 3];
              afStack_178[uVar27 * 3] = afStack_178[lVar21 * 3];
              afStack_178[lVar21 * 3] = fVar34;
            }
            uVar27 = 1;
            bVar5 = false;
          } while (bVar6);
        }
        goto LAB_1098ed398;
      }
      fVar34 = *pfVar13;
      pfVar12 = pfVar13 + -1;
    } while (fVar34 == 0.0);
    if (uVar27 == 0x5a) break;
    uVar27 = uVar27 + 1;
    bVar5 = uVar20 == 0;
    do {
      bVar6 = bVar5;
      if (bVar6) break;
      bVar5 = true;
    } while ((float)uStack_150 != 0.0);
    uVar2 = 1;
    if (bVar6 == false) {
      uVar2 = 2;
    }
    fVar29 = (pfVar13[-3] - pfVar13[-2]) * 0.5;
    if (fVar29 == 0.0) {
      fVar34 = ABS(fVar34);
    }
    else {
      fVar30 = INFINITY;
      if ((ABS(fVar34) != INFINITY) && (ABS(fVar29) != INFINITY)) {
        if (NAN(fVar29) || NAN(fVar34)) {
          fVar30 = NAN;
        }
        else {
          fVar38 = ABS(fVar29);
          fVar30 = ABS(fVar34);
          fVar32 = fVar38;
          if (fVar30 <= fVar38) {
            fVar32 = fVar30;
            fVar30 = fVar38;
          }
          fVar30 = fVar30 * SQRT((fVar32 / fVar30) * (fVar32 / fVar30) + 1.0);
        }
      }
      if (fVar29 <= 0.0) {
        fVar30 = -fVar30;
      }
      if (fVar34 * fVar34 == 0.0) {
        fVar34 = fVar34 / ((fVar29 + fVar30) / fVar34);
      }
      else {
        fVar34 = (fVar34 * fVar34) / (fVar29 + fVar30);
      }
    }
    uVar19 = (ulong)(byte)~bVar6;
    fVar29 = (float)uStack_150;
    if (bVar6 == false) {
      fVar29 = uStack_150._4_4_;
    }
    if ((uVar2 <= uVar17) && (fVar29 != 0.0)) {
      lVar25 = 0x24;
      if (bVar6 == false) {
        lVar25 = 0x28;
      }
      fVar34 = *(float *)((long)&uStack_180 + lVar25) - (pfVar13[-2] - fVar34);
      uVar14 = uVar19;
      do {
        if (fVar29 == 0.0) {
          fVar32 = -1.0;
          if (0.0 <= fVar34) {
            fVar32 = 1.0;
          }
          fVar30 = 0.0;
        }
        else if (fVar34 == 0.0) {
          fVar30 = 1.0;
          if (0.0 <= fVar29) {
            fVar30 = -1.0;
          }
          fVar32 = 0.0;
        }
        else if (ABS(fVar34) <= ABS(fVar29)) {
          fVar34 = fVar34 / fVar29;
          fVar32 = SQRT(fVar34 * fVar34 + 1.0);
          fVar30 = -fVar32;
          if (0.0 <= fVar29) {
            fVar30 = fVar32;
          }
          fVar30 = -1.0 / fVar30;
          fVar32 = -(fVar34 * fVar30);
        }
        else {
          fVar30 = fVar29 / fVar34;
          fVar38 = SQRT(fVar30 * fVar30 + 1.0);
          fVar32 = -fVar38;
          if (0.0 <= fVar34) {
            fVar32 = fVar38;
          }
          fVar32 = 1.0 / fVar32;
          fVar30 = -(fVar30 * fVar32);
        }
        pfVar12 = (float *)((long)&uStack_150 + uVar14 * 4);
        fVar34 = *pfVar12;
        fVar39 = fVar32 * fVar34 + afStack_15c[uVar14] * fVar30;
        uVar1 = uVar14 + 1;
        fVar40 = fVar32 * afStack_15c[uVar1] + fVar34 * fVar30;
        fVar38 = -fVar30;
        afStack_15c[uVar14] =
             -(fVar30 * (-(fVar30 * afStack_15c[uVar1]) + fVar34 * fVar32)) +
             (-(fVar30 * fVar34) + afStack_15c[uVar14] * fVar32) * fVar32;
        afStack_15c[uVar1] = fVar32 * fVar40 + fVar39 * fVar30;
        fVar34 = -(fVar30 * fVar40) + fVar39 * fVar32;
        *pfVar12 = fVar34;
        if (uVar2 <= uVar14) {
          afStack_15c[uVar14 + 2] = fVar29 * fVar38 + afStack_15c[uVar14 + 2] * fVar32;
        }
        if ((long)uVar14 < (long)uVar20) {
          fVar39 = *(float *)((long)&uStack_150 + uVar1 * 4);
          fVar29 = fVar39 * fVar38;
          *(float *)((long)&uStack_150 + uVar1 * 4) = fVar32 * fVar39;
        }
        if ((fVar32 != 1.0) || (fVar30 != 0.0)) {
          lVar25 = 0;
          do {
            pfVar12 = (float *)((long)&uStack_180 + lVar25 + uVar14 * 0xc);
            fVar39 = *pfVar12;
            *pfVar12 = pfVar12[3] * fVar38 + fVar39 * fVar32;
            pfVar12[3] = fVar32 * pfVar12[3] + fVar39 * fVar30;
            lVar25 = lVar25 + 4;
          } while (lVar25 != 0xc);
        }
      } while ((uVar1 < uVar17) && (uVar14 = 1, fVar29 != 0.0));
    }
  }
LAB_1098ed398:
  afStack_15c[0] = afStack_15c[0] * fVar35;
  param_5 = CONCAT44(afStack_15c[1] * fVar35,afStack_15c[0]);
  fVar34 = ABS(afStack_15c[0]);
  bVar5 = false;
  bVar6 = false;
  if (*(float *)(puVar10 + 6) < afStack_15c[0]) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar34)) {
      bVar5 = fVar34 == 1.1920929e-07;
      bVar6 = 1.1920929e-07 <= fVar34;
    }
  }
  fVar34 = fVar35;
  if (!bVar6 || bVar5) {
    fVar34 = fVar35 * afStack_15c[2];
    param_3 = (ulong)(uint)(afStack_15c[0] / fVar33);
    *(ulong *)((long)puVar10 + 0x44) = uStack_180;
    puVar10[10] = CONCAT44(afStack_178[2],afStack_178[1]);
    *(float *)(puVar10 + 0xb) = afStack_178[3];
    *(ulong **)((long)puVar10 + 0x5c) = puStack_168;
    *(float *)((long)puVar10 + 0x4c) = afStack_178[0];
    *(float *)((long)puVar10 + 100) = fStack_160;
    *puVar10 = uStack_180;
    *(float *)(puVar10 + 1) = afStack_178[0];
    puVar10[7] = param_5;
    *(float *)(puVar10 + 8) = fVar34;
    *(ulong *)((long)puVar10 + 0xc) = uVar15;
    *(float *)((long)puVar10 + 0x14) = fVar31;
    *(float *)(puVar10 + 6) = afStack_15c[0];
    *(float *)((long)puVar10 + 0x34) = SQRT(afStack_15c[0] / fVar33);
  }
LAB_1098ed41c:
  fVar35 = (float)param_5;
  uStack_120 = 0;
  uStack_138 = 0;
  auStack_140 = (undefined1  [8])0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  afStack_15c[1] = 0.0;
  afStack_15c[2] = 0.0;
  fStack_160 = 0.0;
  afStack_15c[0] = 0.0;
  uStack_148 = 0;
  uStack_150 = 0;
  afStack_178[0] = 0.0;
  afStack_178[1] = 0.0;
  uStack_180 = 0;
  puStack_168 = (ulong *)0x0;
  afStack_178[2] = 0.0;
  afStack_178[3] = 0.0;
  uStack_118 = 0;
  uStack_110 = 0;
  uVar15 = (ulong)(uint)*puVar9;
  uVar8 = (uint)&uStack_118;
  puVar11 = (ulong *)((long)puVar10 + 0xc);
  FUN_1098ecb24();
  iVar28 = (int)puVar7;
  puVar7 = puStack_168;
  if (iVar28 != 0) {
    uVar19 = (long)(CONCAT44(afStack_15c[0],fStack_160) - (long)puStack_168) >> 2;
    puVar9 = (ulong *)puVar10[3];
    uVar17 = puVar10[4];
    uVar27 = (long)(uVar17 - (long)puVar9) >> 2;
    if (uVar27 < uVar19) {
LAB_1098ed470:
      lVar25 = 0;
      puVar7 = puVar10 + 7;
      uVar15 = *puVar7;
      uVar27 = puVar10[8];
      do {
        *(undefined8 *)(auStack_140 + lVar25 + 4) = *(undefined8 *)((long)puVar10 + lVar25 + 0x44);
        *(undefined4 *)((long)&uStack_138 + lVar25 + 4) =
             *(undefined4 *)((long)puVar10 + lVar25 + 0x4c);
        lVar25 = lVar25 + 0xc;
      } while (lVar25 != 0x24);
      puVar10[3] = (ulong)puStack_168;
      puVar10[4] = CONCAT44(afStack_15c[0],fStack_160);
      fStack_160 = (float)uVar17;
      afStack_15c[0] = (float)(uVar17 >> 0x20);
      uVar26 = puVar10[5];
      puVar10[5] = CONCAT44(afStack_15c[2],afStack_15c[1]);
      afStack_15c[1] = (float)uVar26;
      afStack_15c[2] = (float)(uVar26 >> 0x20);
      uVar19 = *puVar10;
      fVar31 = *(float *)(puVar10 + 1);
      *puVar10 = uStack_180;
      *(float *)(puVar10 + 1) = afStack_178[0];
      uStack_118 = *(undefined8 *)((long)puVar10 + 0xc);
      fVar29 = *(float *)((long)puVar10 + 0x14);
      uStack_110 = CONCAT44(uStack_110._4_4_,fVar29);
      *(ulong *)((long)puVar10 + 0xc) = CONCAT44(afStack_178[2],afStack_178[1]);
      *(float *)((long)puVar10 + 0x14) = afStack_178[3];
      afStack_178[1] = (float)uStack_118;
      afStack_178[2] = (float)((ulong)uStack_118 >> 0x20);
      uVar26 = puVar10[6];
      puVar10[6] = uStack_150;
      uVar17 = puVar10[8];
      uStack_148 = *puVar7;
      *puVar7 = uVar15;
      *(int *)(puVar10 + 8) = (int)uVar27;
      auStack_140._0_4_ = (int)uVar17;
      uVar15 = uStack_150;
      uStack_180 = uVar19;
      afStack_178[0] = fVar31;
      afStack_178[3] = fVar29;
      puVar7 = puVar9;
      uStack_150 = uVar26;
    }
    else if (uVar19 == uVar27) {
      uVar15 = (ulong)(uint)uStack_150._4_4_;
      uVar26 = (ulong)(uint)*(float *)((long)puVar10 + 0x34);
      if (uStack_150._4_4_ < *(float *)((long)puVar10 + 0x34)) goto LAB_1098ed470;
    }
  }
  fVar31 = (float)uVar26;
  puStack_168 = puVar7;
  if (puVar7 != (ulong *)0x0) {
    fStack_160 = SUB84(puVar7,0);
    afStack_15c[0] = (float)((ulong)puVar7 >> 0x20);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar7;
  }
LAB_1098ed5a4:
  ___stack_chk_fail();
  if (puStack_168 != (ulong *)0x0) {
    fStack_160 = SUB84(puStack_168,0);
    afStack_15c[0] = (float)((ulong)puStack_168 >> 0x20);
    __ZdlPv();
  }
  __Unwind_Resume();
  uStack_1b4 = uVar8;
  if ((ulong)uVar8 < *puVar7) {
    puVar24 = (undefined8 *)(puVar7[1] + (ulong)uVar8 * 0xc);
    uVar16 = *puVar24;
    fVar34 = (float)param_3 * ((float)uVar16 - (float)uVar15) +
             (float)(param_3 >> 0x20) * ((float)((ulong)uVar16 >> 0x20) - (float)(uVar15 >> 0x20)) +
             fVar34 * (*(float *)(puVar24 + 1) - fVar31);
    fVar34 = fVar34 * fVar34;
    if (fVar34 <= fVar35) {
      puVar7 = puVar11 + 3;
      FUN_109231afc(puVar7,&uStack_1b4);
      *(float *)(puVar11 + 6) = fVar34 + *(float *)(puVar11 + 6);
    }
    return puVar7;
  }
  FUN_1098c25f0();
  uVar26 = *puVar7;
  *puVar7 = 0;
  if (uVar26 != 0) {
    FUN_1098ed69c(puVar7 + 1);
  }
  if (puVar7[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar7;
}



/* Entry: 1098ecc94; end: 1098ecd87;  */

ulong * FUN_1098ecc94(undefined8 param_1,undefined8 param_2,ulong param_3,float param_4,
                     ulong param_5,ulong *param_6,ulong *param_7,undefined8 *param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined4 uVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint uStack_154;
  undefined8 uStack_120;
  float afStack_118 [4];
  ulong *puStack_108;
  float fStack_100;
  float afStack_fc [3];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_88;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = param_6[3];
  param_6[3] = param_7[3];
  param_7[3] = uVar15;
  uVar15 = param_6[4];
  param_6[4] = param_7[4];
  param_7[4] = uVar15;
  uVar15 = param_6[5];
  param_6[5] = param_7[5];
  param_7[5] = uVar15;
  uVar15 = param_6[1];
  uVar16 = *param_6;
  uVar26 = param_7[1];
  *param_6 = *param_7;
  *(int *)(param_6 + 1) = (int)uVar26;
  *param_7 = uVar16;
  *(int *)(param_7 + 1) = (int)uVar15;
  uVar24 = *(undefined4 *)((long)param_6 + 0x14);
  uVar17 = *(undefined8 *)((long)param_6 + 0xc);
  uVar4 = *(undefined4 *)((long)param_7 + 0x14);
  *(undefined8 *)((long)param_6 + 0xc) = *(undefined8 *)((long)param_7 + 0xc);
  *(undefined4 *)((long)param_6 + 0x14) = uVar4;
  *(undefined8 *)((long)param_7 + 0xc) = uVar17;
  *(undefined4 *)((long)param_7 + 0x14) = uVar24;
  uVar15 = param_6[6];
  *(int *)(param_6 + 6) = (int)param_7[6];
  *(int *)(param_7 + 6) = (int)uVar15;
  uVar24 = *(undefined4 *)((long)param_6 + 0x34);
  uVar15 = (ulong)*(uint *)((long)param_7 + 0x34);
  *(uint *)((long)param_6 + 0x34) = *(uint *)((long)param_7 + 0x34);
  *(undefined4 *)((long)param_7 + 0x34) = uVar24;
  uVar26 = param_6[8];
  uVar18 = param_6[7];
  uVar16 = param_7[8];
  param_6[7] = param_7[7];
  *(int *)(param_6 + 8) = (int)uVar16;
  param_7[7] = uVar18;
  *(int *)(param_7 + 8) = (int)uVar26;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return param_6;
  }
  ___stack_chk_fail();
  fVar31 = (float)param_5;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_8[3];
  if (lVar14 != param_8[4]) {
    uVar15 = 0;
    puVar19 = (undefined8 *)*param_6;
    uVar16 = param_8[4] - lVar14 >> 2;
    fVar28 = 0.0;
    uVar26 = 0;
    do {
      puVar21 = (undefined8 *)(ulong)*(uint *)(lVar14 + uVar15 * 4);
      puVar22 = param_8;
      if (puVar19 <= puVar21) goto LAB_1098ed5a0;
      uVar18 = param_6[1];
      puVar22 = (undefined8 *)(uVar18 + (long)puVar21 * 0xc);
      uVar17 = *puVar22;
      fVar25 = (float)uVar26 + (float)uVar17;
      fVar27 = (float)(uVar26 >> 0x20) + (float)((ulong)uVar17 >> 0x20);
      uVar26 = CONCAT44(fVar27,fVar25);
      fVar29 = *(float *)(puVar22 + 1);
      param_3 = (ulong)(uint)fVar29;
      fVar28 = fVar28 + fVar29;
      uVar15 = uVar15 + 1;
    } while (uVar16 != uVar15);
    uVar20 = 0;
    fVar30 = (float)uVar16;
    param_3 = (ulong)(uint)fVar30;
    fVar25 = fVar25 / fVar30;
    fVar27 = fVar27 / fVar30;
    uVar26 = CONCAT44(fVar27,fVar25);
    fVar28 = fVar28 / fVar30;
    uVar15 = (ulong)(uint)fVar28;
    fVar35 = 0.0;
    fVar36 = 0.0;
    fVar34 = 0.0;
    param_4 = 0.0;
    fVar37 = 0.0;
    fVar29 = 0.0;
    do {
      fVar31 = (float)param_5;
      puVar22 = (undefined8 *)(ulong)*(uint *)(lVar14 + uVar20 * 4);
      if (puVar19 <= puVar22) goto LAB_1098ed5a0;
      lVar23 = 0;
      puVar22 = (undefined8 *)(uVar18 + (long)puVar22 * 0xc);
      uVar17 = *puVar22;
      fVar31 = (float)uVar17 - fVar25;
      fVar33 = (float)((ulong)uVar17 >> 0x20) - fVar27;
      uStack_b8 = CONCAT44(fVar33,fVar31);
      fVar38 = *(float *)(puVar22 + 1) - fVar28;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,fVar38);
      pfVar11 = afStack_118;
      do {
        fVar39 = *(float *)((long)&uStack_b8 + lVar23);
        *(ulong *)(pfVar11 + -2) = CONCAT44(fVar33 * fVar39,fVar31 * fVar39);
        *pfVar11 = fVar38 * fVar39;
        lVar23 = lVar23 + 4;
        pfVar11 = pfVar11 + 3;
      } while (lVar23 != 0xc);
      fVar37 = fVar37 + (float)uStack_120;
      fVar29 = fVar29 + (float)((ulong)uStack_120 >> 0x20);
      param_4 = param_4 + afStack_118[0];
      fVar35 = fVar35 + afStack_118[2];
      fVar36 = fVar36 + afStack_118[3];
      param_5 = (ulong)(uint)fStack_100;
      fVar34 = fVar34 + fStack_100;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar16);
    auStack_e0._4_2_ = 0;
    uVar32 = NEON_fmax(CONCAT44(ABS(fVar29),ABS(fVar37)),(ulong)(uint)ABS(param_4),4);
    uVar17 = NEON_fmax(CONCAT44(ABS(fVar36),ABS(fVar35)),0,4);
    uVar17 = NEON_fmax(uVar32,uVar17,4);
    fVar31 = (float)((ulong)uVar17 >> 0x20);
    if (fVar31 <= (float)uVar17) {
      fVar31 = (float)uVar17;
    }
    fVar25 = ABS(fVar34);
    if (ABS(fVar34) <= fVar31) {
      fVar25 = fVar31;
    }
    fVar31 = 1.0;
    if (fVar25 != 0.0) {
      fVar31 = fVar25;
    }
    fVar29 = fVar29 / fVar31;
    param_4 = param_4 / fVar31;
    afStack_fc[1] = fVar35 / fVar31;
    fVar36 = fVar36 / fVar31;
    afStack_fc[2] = fVar34 / fVar31;
    afStack_fc[0] = fVar37 / fVar31;
    afStack_118[3] = 0.0;
    if (param_4 * param_4 <= 1.1754944e-38) {
      afStack_118[2] = 1.0;
      fStack_100 = 1.0;
    }
    else {
      fVar25 = SQRT(param_4 * param_4 + fVar29 * fVar29);
      fVar27 = 1.0 / fVar25;
      afStack_118[2] = fVar29 * fVar27;
      afStack_118[3] = param_4 * fVar27;
      fVar34 = (afStack_fc[2] - afStack_fc[1]) * afStack_118[3] +
               fVar36 * (afStack_118[2] + afStack_118[2]);
      afStack_fc[1] = afStack_fc[1] + fVar34 * afStack_118[3];
      afStack_fc[2] = afStack_fc[2] - fVar34 * afStack_118[3];
      fStack_100 = -(fVar29 * fVar27);
      fVar36 = fVar36 - fVar34 * afStack_118[2];
      fVar29 = fVar25;
    }
    uVar16 = 0;
    uVar20 = 0;
    uStack_f0 = CONCAT44(fVar36,fVar29);
    afStack_118[0] = 0.0;
    afStack_118[1] = 0.0;
    uStack_120 = 0x3f800000;
    puStack_108 = (ulong *)((ulong)(uint)afStack_118[3] << 0x20);
    uVar18 = 2;
    while( true ) {
      lVar14 = uVar18 - uVar20;
      if (lVar14 != 0 && (long)uVar20 <= (long)uVar18) {
        pfVar11 = (float *)((long)&uStack_f0 + uVar20 * 4);
        do {
          if ((ABS(*pfVar11) < 1.1754944e-38) ||
             (fVar25 = *pfVar11 * 8388608.0, fVar25 * fVar25 <= ABS(pfVar11[-3]) + ABS(pfVar11[-2]))
             ) {
            *pfVar11 = 0.0;
          }
          pfVar11 = pfVar11 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      uVar5 = uVar18;
      pfVar11 = afStack_fc + uVar18 + 2;
      do {
        pfVar12 = pfVar11;
        uVar18 = uVar5;
        uVar5 = uVar18 - 1;
        if ((long)uVar18 < 1) {
          if (uVar16 < 0x5b) {
            uVar16 = 0;
            bVar7 = true;
            do {
              bVar8 = bVar7;
              lVar23 = 0;
              fVar27 = afStack_fc[uVar16];
              lVar14 = 10;
              fVar25 = fVar27;
              do {
                fVar29 = *(float *)((long)&uStack_120 + lVar14 * 4 + uVar16 * 4);
                lVar6 = lVar14 + -9;
                if (fVar25 <= fVar29) {
                  fVar29 = fVar25;
                  lVar6 = lVar23;
                }
                lVar23 = lVar6;
                fVar25 = fVar29;
                uVar18 = lVar14 - 8;
                lVar14 = lVar14 + 1;
              } while ((uVar18 ^ uVar16) != 3);
              if (lVar23 != 0) {
                lVar23 = lVar23 + uVar16;
                afStack_fc[uVar16] = afStack_fc[lVar23];
                afStack_fc[lVar23] = fVar27;
                puVar19 = (undefined8 *)((long)&uStack_120 + uVar16 * 0xc);
                puVar22 = (undefined8 *)((long)&uStack_120 + lVar23 * 0xc);
                uVar17 = *puVar22;
                *puVar22 = *puVar19;
                *puVar19 = uVar17;
                fVar25 = afStack_118[uVar16 * 3];
                afStack_118[uVar16 * 3] = afStack_118[lVar23 * 3];
                afStack_118[lVar23 * 3] = fVar25;
              }
              uVar16 = 1;
              bVar7 = false;
            } while (bVar8);
          }
          goto LAB_1098ed398;
        }
        fVar25 = *pfVar12;
        pfVar11 = pfVar12 + -1;
      } while (fVar25 == 0.0);
      if (uVar16 == 0x5a) break;
      uVar16 = uVar16 + 1;
      bVar7 = uVar5 == 0;
      do {
        bVar8 = bVar7;
        if (bVar8) break;
        bVar7 = true;
      } while ((float)uStack_f0 != 0.0);
      uVar2 = 1;
      if (bVar8 == false) {
        uVar2 = 2;
      }
      fVar27 = (pfVar12[-3] - pfVar12[-2]) * 0.5;
      if (fVar27 == 0.0) {
        fVar25 = ABS(fVar25);
      }
      else {
        fVar29 = INFINITY;
        if ((ABS(fVar25) != INFINITY) && (ABS(fVar27) != INFINITY)) {
          if (NAN(fVar27) || NAN(fVar25)) {
            fVar29 = NAN;
          }
          else {
            fVar35 = ABS(fVar27);
            fVar29 = ABS(fVar25);
            fVar34 = fVar35;
            if (fVar29 <= fVar35) {
              fVar34 = fVar29;
              fVar29 = fVar35;
            }
            fVar29 = fVar29 * SQRT((fVar34 / fVar29) * (fVar34 / fVar29) + 1.0);
          }
        }
        if (fVar27 <= 0.0) {
          fVar29 = -fVar29;
        }
        if (fVar25 * fVar25 == 0.0) {
          fVar25 = fVar25 / ((fVar27 + fVar29) / fVar25);
        }
        else {
          fVar25 = (fVar25 * fVar25) / (fVar27 + fVar29);
        }
      }
      uVar20 = (ulong)(byte)~bVar8;
      fVar27 = (float)uStack_f0;
      if (bVar8 == false) {
        fVar27 = uStack_f0._4_4_;
      }
      if ((uVar2 <= uVar18) && (fVar27 != 0.0)) {
        lVar14 = 0x24;
        if (bVar8 == false) {
          lVar14 = 0x28;
        }
        fVar25 = *(float *)((long)&uStack_120 + lVar14) - (pfVar12[-2] - fVar25);
        uVar13 = uVar20;
        do {
          if (fVar27 == 0.0) {
            fVar34 = -1.0;
            if (0.0 <= fVar25) {
              fVar34 = 1.0;
            }
            fVar29 = 0.0;
          }
          else if (fVar25 == 0.0) {
            fVar29 = 1.0;
            if (0.0 <= fVar27) {
              fVar29 = -1.0;
            }
            fVar34 = 0.0;
          }
          else if (ABS(fVar25) <= ABS(fVar27)) {
            fVar25 = fVar25 / fVar27;
            fVar34 = SQRT(fVar25 * fVar25 + 1.0);
            fVar29 = -fVar34;
            if (0.0 <= fVar27) {
              fVar29 = fVar34;
            }
            fVar29 = -1.0 / fVar29;
            fVar34 = -(fVar25 * fVar29);
          }
          else {
            fVar29 = fVar27 / fVar25;
            fVar35 = SQRT(fVar29 * fVar29 + 1.0);
            fVar34 = -fVar35;
            if (0.0 <= fVar25) {
              fVar34 = fVar35;
            }
            fVar34 = 1.0 / fVar34;
            fVar29 = -(fVar29 * fVar34);
          }
          pfVar11 = (float *)((long)&uStack_f0 + uVar13 * 4);
          fVar25 = *pfVar11;
          fVar36 = fVar34 * fVar25 + afStack_fc[uVar13] * fVar29;
          uVar1 = uVar13 + 1;
          fVar37 = fVar34 * afStack_fc[uVar1] + fVar25 * fVar29;
          fVar35 = -fVar29;
          afStack_fc[uVar13] =
               -(fVar29 * (-(fVar29 * afStack_fc[uVar1]) + fVar25 * fVar34)) +
               (-(fVar29 * fVar25) + afStack_fc[uVar13] * fVar34) * fVar34;
          afStack_fc[uVar1] = fVar34 * fVar37 + fVar36 * fVar29;
          fVar25 = -(fVar29 * fVar37) + fVar36 * fVar34;
          *pfVar11 = fVar25;
          if (uVar2 <= uVar13) {
            afStack_fc[uVar13 + 2] = fVar27 * fVar35 + afStack_fc[uVar13 + 2] * fVar34;
          }
          if ((long)uVar13 < (long)uVar5) {
            fVar36 = *(float *)((long)&uStack_f0 + uVar1 * 4);
            fVar27 = fVar36 * fVar35;
            *(float *)((long)&uStack_f0 + uVar1 * 4) = fVar34 * fVar36;
          }
          if ((fVar34 != 1.0) || (fVar29 != 0.0)) {
            lVar14 = 0;
            do {
              pfVar11 = (float *)((long)&uStack_120 + lVar14 + uVar13 * 0xc);
              fVar36 = *pfVar11;
              *pfVar11 = pfVar11[3] * fVar35 + fVar36 * fVar34;
              pfVar11[3] = fVar34 * pfVar11[3] + fVar36 * fVar29;
              lVar14 = lVar14 + 4;
            } while (lVar14 != 0xc);
          }
        } while ((uVar1 < uVar18) && (uVar13 = 1, fVar27 != 0.0));
      }
    }
LAB_1098ed398:
    afStack_fc[0] = afStack_fc[0] * fVar31;
    param_5 = CONCAT44(afStack_fc[1] * fVar31,afStack_fc[0]);
    fVar25 = ABS(afStack_fc[0]);
    bVar7 = false;
    bVar8 = false;
    if (*(float *)(param_8 + 6) < afStack_fc[0]) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar25)) {
        bVar7 = fVar25 == 1.1920929e-07;
        bVar8 = 1.1920929e-07 <= fVar25;
      }
    }
    param_4 = fVar31;
    if (!bVar8 || bVar7) {
      param_4 = fVar31 * afStack_fc[2];
      param_3 = (ulong)(uint)(afStack_fc[0] / fVar30);
      *(undefined8 *)((long)param_8 + 0x44) = uStack_120;
      param_8[10] = CONCAT44(afStack_118[2],afStack_118[1]);
      *(float *)(param_8 + 0xb) = afStack_118[3];
      *(ulong **)((long)param_8 + 0x5c) = puStack_108;
      *(float *)((long)param_8 + 0x4c) = afStack_118[0];
      *(float *)((long)param_8 + 100) = fStack_100;
      *param_8 = uStack_120;
      *(float *)(param_8 + 1) = afStack_118[0];
      param_8[7] = param_5;
      *(float *)(param_8 + 8) = param_4;
      *(ulong *)((long)param_8 + 0xc) = uVar26;
      *(float *)((long)param_8 + 0x14) = fVar28;
      *(float *)(param_8 + 6) = afStack_fc[0];
      *(float *)((long)param_8 + 0x34) = SQRT(afStack_fc[0] / fVar30);
    }
  }
  fVar31 = (float)param_5;
  uStack_c0 = 0;
  uStack_d8 = 0;
  auStack_e0 = (undefined1  [8])0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  afStack_fc[1] = 0.0;
  afStack_fc[2] = 0.0;
  fStack_100 = 0.0;
  afStack_fc[0] = 0.0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  afStack_118[0] = 0.0;
  afStack_118[1] = 0.0;
  uStack_120 = 0;
  puStack_108 = (ulong *)0x0;
  afStack_118[2] = 0.0;
  afStack_118[3] = 0.0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uVar26 = (ulong)(uint)*param_7;
  uVar10 = (uint)&uStack_b8;
  puVar22 = (undefined8 *)((long)param_8 + 0xc);
  FUN_1098ecb24();
  iVar9 = (int)param_6;
  param_6 = puStack_108;
  if (iVar9 != 0) {
    uVar18 = CONCAT44(afStack_fc[0],fStack_100) - (long)puStack_108 >> 2;
    puVar3 = (ulong *)param_8[3];
    lVar14 = param_8[4];
    uVar16 = lVar14 - (long)puVar3 >> 2;
    if (uVar16 < uVar18) {
LAB_1098ed470:
      lVar23 = 0;
      puVar19 = param_8 + 7;
      uVar17 = *puVar19;
      uVar24 = *(undefined4 *)(param_8 + 8);
      do {
        *(undefined8 *)(auStack_e0 + lVar23 + 4) = *(undefined8 *)((long)param_8 + lVar23 + 0x44);
        *(undefined4 *)((long)&uStack_d8 + lVar23 + 4) =
             *(undefined4 *)((long)param_8 + lVar23 + 0x4c);
        lVar23 = lVar23 + 0xc;
      } while (lVar23 != 0x24);
      param_8[3] = puStack_108;
      param_8[4] = CONCAT44(afStack_fc[0],fStack_100);
      fStack_100 = (float)lVar14;
      afStack_fc[0] = (float)((ulong)lVar14 >> 0x20);
      uVar32 = param_8[5];
      param_8[5] = CONCAT44(afStack_fc[2],afStack_fc[1]);
      afStack_fc[1] = (float)uVar32;
      afStack_fc[2] = (float)((ulong)uVar32 >> 0x20);
      uVar32 = *param_8;
      fVar28 = *(float *)(param_8 + 1);
      *param_8 = uStack_120;
      *(float *)(param_8 + 1) = afStack_118[0];
      uStack_b8 = *(undefined8 *)((long)param_8 + 0xc);
      fVar25 = *(float *)((long)param_8 + 0x14);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,fVar25);
      *(ulong *)((long)param_8 + 0xc) = CONCAT44(afStack_118[2],afStack_118[1]);
      *(float *)((long)param_8 + 0x14) = afStack_118[3];
      afStack_118[1] = (float)uStack_b8;
      afStack_118[2] = (float)((ulong)uStack_b8 >> 0x20);
      uVar15 = param_8[6];
      param_8[6] = uStack_f0;
      auStack_e0._0_4_ = *(undefined4 *)(param_8 + 8);
      uStack_e8 = *puVar19;
      *puVar19 = uVar17;
      *(undefined4 *)(param_8 + 8) = uVar24;
      uVar26 = uStack_f0;
      uStack_120 = uVar32;
      afStack_118[0] = fVar28;
      afStack_118[3] = fVar25;
      param_6 = puVar3;
      uStack_f0 = uVar15;
    }
    else if (uVar18 == uVar16) {
      uVar26 = (ulong)(uint)uStack_f0._4_4_;
      uVar15 = (ulong)(uint)*(float *)((long)param_8 + 0x34);
      if (uStack_f0._4_4_ < *(float *)((long)param_8 + 0x34)) goto LAB_1098ed470;
    }
  }
  fVar28 = (float)uVar15;
  puStack_108 = param_6;
  if (param_6 != (ulong *)0x0) {
    fStack_100 = SUB84(param_6,0);
    afStack_fc[0] = (float)((ulong)param_6 >> 0x20);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_6;
  }
LAB_1098ed5a4:
  ___stack_chk_fail();
  if (puStack_108 != (ulong *)0x0) {
    fStack_100 = SUB84(puStack_108,0);
    afStack_fc[0] = (float)((ulong)puStack_108 >> 0x20);
    __ZdlPv();
  }
  __Unwind_Resume();
  uStack_154 = uVar10;
  if ((ulong)uVar10 < *param_6) {
    puVar19 = (undefined8 *)(param_6[1] + (ulong)uVar10 * 0xc);
    uVar17 = *puVar19;
    fVar28 = (float)param_3 * ((float)uVar17 - (float)uVar26) +
             (float)(param_3 >> 0x20) * ((float)((ulong)uVar17 >> 0x20) - (float)(uVar26 >> 0x20)) +
             param_4 * (*(float *)(puVar19 + 1) - fVar28);
    fVar28 = fVar28 * fVar28;
    if (fVar28 <= fVar31) {
      param_6 = puVar22 + 3;
      FUN_109231afc(param_6,&uStack_154);
      *(float *)(puVar22 + 6) = fVar28 + *(float *)(puVar22 + 6);
    }
    return param_6;
  }
  FUN_1098c25f0();
  uVar15 = *param_6;
  *param_6 = 0;
  if (uVar15 != 0) {
    FUN_1098ed69c(param_6 + 1);
  }
  if (param_6[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_6;
LAB_1098ed5a0:
  FUN_1098c25f0();
  uVar10 = (uint)param_7;
  goto LAB_1098ed5a4;
}



/* Entry: 1098ecd88; end: 1098ed5c3;  */

ulong * FUN_1098ecd88(undefined8 param_1,ulong param_2,ulong param_3,float param_4,ulong param_5,
                     ulong *param_6,uint *param_7,undefined8 *param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  undefined4 uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar31;
  undefined8 uVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint uStack_104;
  undefined8 uStack_d0;
  float afStack_c8 [4];
  ulong *puStack_b8;
  float fStack_b0;
  float afStack_ac [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  fVar29 = (float)param_5;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = param_8[3];
  if (lVar20 != param_8[4]) {
    uVar16 = 0;
    puVar13 = (undefined8 *)*param_6;
    uVar14 = param_8[4] - lVar20 >> 2;
    fVar25 = 0.0;
    uVar23 = 0;
    do {
      puVar17 = (undefined8 *)(ulong)*(uint *)(lVar20 + uVar16 * 4);
      puVar18 = param_8;
      if (puVar13 <= puVar17) goto LAB_1098ed5a0;
      uVar15 = param_6[1];
      puVar18 = (undefined8 *)(uVar15 + (long)puVar17 * 0xc);
      uVar28 = *puVar18;
      fVar21 = (float)uVar23 + (float)uVar28;
      fVar24 = (float)(uVar23 >> 0x20) + (float)((ulong)uVar28 >> 0x20);
      uVar23 = CONCAT44(fVar24,fVar21);
      fVar26 = *(float *)(puVar18 + 1);
      param_3 = (ulong)(uint)fVar26;
      fVar25 = fVar25 + fVar26;
      uVar16 = uVar16 + 1;
    } while (uVar14 != uVar16);
    uVar16 = 0;
    fVar27 = (float)uVar14;
    param_3 = (ulong)(uint)fVar27;
    fVar21 = fVar21 / fVar27;
    fVar24 = fVar24 / fVar27;
    uVar23 = CONCAT44(fVar24,fVar21);
    fVar25 = fVar25 / fVar27;
    param_2 = (ulong)(uint)fVar25;
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar32 = 0.0;
    fVar35 = 0.0;
    fVar26 = 0.0;
    param_4 = 0.0;
    do {
      fVar29 = (float)param_5;
      puVar18 = (undefined8 *)(ulong)*(uint *)(lVar20 + uVar16 * 4);
      if (puVar13 <= puVar18) goto LAB_1098ed5a0;
      lVar19 = 0;
      puVar18 = (undefined8 *)(uVar15 + (long)puVar18 * 0xc);
      uVar28 = *puVar18;
      fVar29 = (float)uVar28 - fVar21;
      fVar31 = (float)((ulong)uVar28 >> 0x20) - fVar24;
      uStack_68 = CONCAT44(fVar31,fVar29);
      fVar36 = *(float *)(puVar18 + 1) - fVar25;
      uStack_60 = CONCAT44(uStack_60._4_4_,fVar36);
      pfVar10 = afStack_c8;
      do {
        fVar37 = *(float *)((long)&uStack_68 + lVar19);
        *(ulong *)(pfVar10 + -2) = CONCAT44(fVar31 * fVar37,fVar29 * fVar37);
        *pfVar10 = fVar36 * fVar37;
        lVar19 = lVar19 + 4;
        pfVar10 = pfVar10 + 3;
      } while (lVar19 != 0xc);
      fVar35 = fVar35 + (float)uStack_d0;
      fVar26 = fVar26 + (float)((ulong)uStack_d0 >> 0x20);
      fVar29 = param_4 + afStack_c8[0];
      fVar33 = fVar33 + afStack_c8[2];
      fVar34 = fVar34 + afStack_c8[3];
      param_5 = (ulong)(uint)fStack_b0;
      fVar32 = fVar32 + fStack_b0;
      uVar16 = uVar16 + 1;
      param_4 = fVar29;
    } while (uVar16 != uVar14);
    auStack_90._4_2_ = 0;
    uVar30 = NEON_fmax(CONCAT44(ABS(fVar26),ABS(fVar35)),(ulong)(uint)ABS(fVar29),4);
    uVar28 = NEON_fmax(CONCAT44(ABS(fVar34),ABS(fVar33)),0,4);
    uVar28 = NEON_fmax(uVar30,uVar28,4);
    fVar21 = (float)((ulong)uVar28 >> 0x20);
    if (fVar21 <= (float)uVar28) {
      fVar21 = (float)uVar28;
    }
    fVar24 = ABS(fVar32);
    if (ABS(fVar32) <= fVar21) {
      fVar24 = fVar21;
    }
    param_4 = 1.0;
    if (fVar24 != 0.0) {
      param_4 = fVar24;
    }
    fVar26 = fVar26 / param_4;
    fVar29 = fVar29 / param_4;
    afStack_ac[1] = fVar33 / param_4;
    fVar34 = fVar34 / param_4;
    afStack_ac[2] = fVar32 / param_4;
    afStack_ac[0] = fVar35 / param_4;
    afStack_c8[3] = 0.0;
    if (fVar29 * fVar29 <= 1.1754944e-38) {
      afStack_c8[2] = 1.0;
      fStack_b0 = 1.0;
    }
    else {
      fVar21 = SQRT(fVar29 * fVar29 + fVar26 * fVar26);
      fVar24 = 1.0 / fVar21;
      afStack_c8[2] = fVar26 * fVar24;
      afStack_c8[3] = fVar29 * fVar24;
      fVar29 = (afStack_ac[2] - afStack_ac[1]) * afStack_c8[3] +
               fVar34 * (afStack_c8[2] + afStack_c8[2]);
      afStack_ac[1] = afStack_ac[1] + fVar29 * afStack_c8[3];
      afStack_ac[2] = afStack_ac[2] - fVar29 * afStack_c8[3];
      fStack_b0 = -(fVar26 * fVar24);
      fVar34 = fVar34 - fVar29 * afStack_c8[2];
      fVar26 = fVar21;
    }
    uVar16 = 0;
    uVar15 = 0;
    uStack_a0 = CONCAT44(fVar34,fVar26);
    afStack_c8[0] = 0.0;
    afStack_c8[1] = 0.0;
    uStack_d0 = 0x3f800000;
    puStack_b8 = (ulong *)((ulong)(uint)afStack_c8[3] << 0x20);
    uVar14 = 2;
    while( true ) {
      lVar20 = uVar14 - uVar15;
      if (lVar20 != 0 && (long)uVar15 <= (long)uVar14) {
        pfVar10 = (float *)((long)&uStack_a0 + uVar15 * 4);
        do {
          if ((ABS(*pfVar10) < 1.1754944e-38) ||
             (fVar29 = *pfVar10 * 8388608.0, fVar29 * fVar29 <= ABS(pfVar10[-3]) + ABS(pfVar10[-2]))
             ) {
            *pfVar10 = 0.0;
          }
          pfVar10 = pfVar10 + 1;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      uVar4 = uVar14;
      pfVar10 = afStack_ac + uVar14 + 2;
      do {
        pfVar11 = pfVar10;
        uVar14 = uVar4;
        uVar4 = uVar14 - 1;
        if ((long)uVar14 < 1) {
          if (uVar16 < 0x5b) {
            uVar16 = 0;
            bVar6 = true;
            do {
              bVar7 = bVar6;
              lVar19 = 0;
              fVar21 = afStack_ac[uVar16];
              lVar20 = 10;
              fVar29 = fVar21;
              do {
                fVar24 = *(float *)((long)&uStack_d0 + lVar20 * 4 + uVar16 * 4);
                lVar5 = lVar20 + -9;
                if (fVar29 <= fVar24) {
                  fVar24 = fVar29;
                  lVar5 = lVar19;
                }
                lVar19 = lVar5;
                fVar29 = fVar24;
                uVar14 = lVar20 - 8;
                lVar20 = lVar20 + 1;
              } while ((uVar14 ^ uVar16) != 3);
              if (lVar19 != 0) {
                lVar19 = lVar19 + uVar16;
                afStack_ac[uVar16] = afStack_ac[lVar19];
                afStack_ac[lVar19] = fVar21;
                puVar13 = (undefined8 *)((long)&uStack_d0 + uVar16 * 0xc);
                puVar18 = (undefined8 *)((long)&uStack_d0 + lVar19 * 0xc);
                uVar28 = *puVar18;
                *puVar18 = *puVar13;
                *puVar13 = uVar28;
                fVar29 = afStack_c8[uVar16 * 3];
                afStack_c8[uVar16 * 3] = afStack_c8[lVar19 * 3];
                afStack_c8[lVar19 * 3] = fVar29;
              }
              uVar16 = 1;
              bVar6 = false;
            } while (bVar7);
          }
          goto LAB_1098ed398;
        }
        fVar29 = *pfVar11;
        pfVar10 = pfVar11 + -1;
      } while (fVar29 == 0.0);
      if (uVar16 == 0x5a) break;
      uVar16 = uVar16 + 1;
      bVar6 = uVar4 == 0;
      do {
        bVar7 = bVar6;
        if (bVar7) break;
        bVar6 = true;
      } while ((float)uStack_a0 != 0.0);
      uVar2 = 1;
      if (!bVar7) {
        uVar2 = 2;
      }
      fVar21 = (pfVar11[-3] - pfVar11[-2]) * 0.5;
      if (fVar21 == 0.0) {
        fVar29 = ABS(fVar29);
      }
      else {
        fVar24 = INFINITY;
        if ((ABS(fVar29) != INFINITY) && (ABS(fVar21) != INFINITY)) {
          if (NAN(fVar21) || NAN(fVar29)) {
            fVar24 = NAN;
          }
          else {
            fVar32 = ABS(fVar21);
            fVar24 = ABS(fVar29);
            fVar26 = fVar32;
            if (fVar24 <= fVar32) {
              fVar26 = fVar24;
              fVar24 = fVar32;
            }
            fVar24 = fVar24 * SQRT((fVar26 / fVar24) * (fVar26 / fVar24) + 1.0);
          }
        }
        if (fVar21 <= 0.0) {
          fVar24 = -fVar24;
        }
        if (fVar29 * fVar29 == 0.0) {
          fVar29 = fVar29 / ((fVar21 + fVar24) / fVar29);
        }
        else {
          fVar29 = (fVar29 * fVar29) / (fVar21 + fVar24);
        }
      }
      uVar15 = (ulong)(byte)~bVar7;
      fVar21 = (float)uStack_a0;
      if (!bVar7) {
        fVar21 = uStack_a0._4_4_;
      }
      if ((uVar2 <= uVar14) && (fVar21 != 0.0)) {
        lVar20 = 0x24;
        if (!bVar7) {
          lVar20 = 0x28;
        }
        fVar29 = *(float *)((long)&uStack_d0 + lVar20) - (pfVar11[-2] - fVar29);
        uVar12 = uVar15;
        do {
          if (fVar21 == 0.0) {
            fVar26 = -1.0;
            if (0.0 <= fVar29) {
              fVar26 = 1.0;
            }
            fVar24 = 0.0;
          }
          else if (fVar29 == 0.0) {
            fVar24 = 1.0;
            if (0.0 <= fVar21) {
              fVar24 = -1.0;
            }
            fVar26 = 0.0;
          }
          else if (ABS(fVar29) <= ABS(fVar21)) {
            fVar29 = fVar29 / fVar21;
            fVar26 = SQRT(fVar29 * fVar29 + 1.0);
            fVar24 = -fVar26;
            if (0.0 <= fVar21) {
              fVar24 = fVar26;
            }
            fVar24 = -1.0 / fVar24;
            fVar26 = -(fVar29 * fVar24);
          }
          else {
            fVar24 = fVar21 / fVar29;
            fVar32 = SQRT(fVar24 * fVar24 + 1.0);
            fVar26 = -fVar32;
            if (0.0 <= fVar29) {
              fVar26 = fVar32;
            }
            fVar26 = 1.0 / fVar26;
            fVar24 = -(fVar24 * fVar26);
          }
          pfVar10 = (float *)((long)&uStack_a0 + uVar12 * 4);
          fVar29 = *pfVar10;
          fVar33 = fVar26 * fVar29 + afStack_ac[uVar12] * fVar24;
          uVar1 = uVar12 + 1;
          fVar34 = fVar26 * afStack_ac[uVar1] + fVar29 * fVar24;
          fVar32 = -fVar24;
          afStack_ac[uVar12] =
               -(fVar24 * (-(fVar24 * afStack_ac[uVar1]) + fVar29 * fVar26)) +
               (-(fVar24 * fVar29) + afStack_ac[uVar12] * fVar26) * fVar26;
          afStack_ac[uVar1] = fVar26 * fVar34 + fVar33 * fVar24;
          fVar29 = -(fVar24 * fVar34) + fVar33 * fVar26;
          *pfVar10 = fVar29;
          if (uVar2 <= uVar12) {
            afStack_ac[uVar12 + 2] = fVar21 * fVar32 + afStack_ac[uVar12 + 2] * fVar26;
          }
          if ((long)uVar12 < (long)uVar4) {
            fVar33 = *(float *)((long)&uStack_a0 + uVar1 * 4);
            fVar21 = fVar33 * fVar32;
            *(float *)((long)&uStack_a0 + uVar1 * 4) = fVar26 * fVar33;
          }
          if ((fVar26 != 1.0) || (fVar24 != 0.0)) {
            lVar20 = 0;
            do {
              pfVar10 = (float *)((long)&uStack_d0 + lVar20 + uVar12 * 0xc);
              fVar33 = *pfVar10;
              *pfVar10 = pfVar10[3] * fVar32 + fVar33 * fVar26;
              pfVar10[3] = fVar26 * pfVar10[3] + fVar33 * fVar24;
              lVar20 = lVar20 + 4;
            } while (lVar20 != 0xc);
          }
        } while ((uVar1 < uVar14) && (uVar12 = 1, fVar21 != 0.0));
      }
    }
LAB_1098ed398:
    afStack_ac[0] = afStack_ac[0] * param_4;
    param_5 = CONCAT44(afStack_ac[1] * param_4,afStack_ac[0]);
    fVar29 = ABS(afStack_ac[0]);
    bVar6 = false;
    bVar7 = false;
    if (*(float *)(param_8 + 6) < afStack_ac[0]) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar29)) {
        bVar6 = fVar29 == 1.1920929e-07;
        bVar7 = 1.1920929e-07 <= fVar29;
      }
    }
    if (!bVar7 || bVar6) {
      param_4 = param_4 * afStack_ac[2];
      param_3 = (ulong)(uint)(afStack_ac[0] / fVar27);
      *(undefined8 *)((long)param_8 + 0x44) = uStack_d0;
      param_8[10] = CONCAT44(afStack_c8[2],afStack_c8[1]);
      *(float *)(param_8 + 0xb) = afStack_c8[3];
      *(ulong **)((long)param_8 + 0x5c) = puStack_b8;
      *(float *)((long)param_8 + 0x4c) = afStack_c8[0];
      *(float *)((long)param_8 + 100) = fStack_b0;
      *param_8 = uStack_d0;
      *(float *)(param_8 + 1) = afStack_c8[0];
      param_8[7] = param_5;
      *(float *)(param_8 + 8) = param_4;
      *(ulong *)((long)param_8 + 0xc) = uVar23;
      *(float *)((long)param_8 + 0x14) = fVar25;
      *(float *)(param_8 + 6) = afStack_ac[0];
      *(float *)((long)param_8 + 0x34) = SQRT(afStack_ac[0] / fVar27);
    }
  }
  fVar29 = (float)param_5;
  uStack_70 = 0;
  uStack_88 = 0;
  auStack_90 = (undefined1  [8])0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  afStack_ac[1] = 0.0;
  afStack_ac[2] = 0.0;
  fStack_b0 = 0.0;
  afStack_ac[0] = 0.0;
  uStack_98 = 0;
  uStack_a0 = 0;
  afStack_c8[0] = 0.0;
  afStack_c8[1] = 0.0;
  uStack_d0 = 0;
  puStack_b8 = (ulong *)0x0;
  afStack_c8[2] = 0.0;
  afStack_c8[3] = 0.0;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar23 = (ulong)*param_7;
  uVar9 = (uint)&uStack_68;
  puVar18 = (undefined8 *)((long)param_8 + 0xc);
  FUN_1098ecb24();
  iVar8 = (int)param_6;
  param_6 = puStack_b8;
  if (iVar8 != 0) {
    uVar14 = CONCAT44(afStack_ac[0],fStack_b0) - (long)puStack_b8 >> 2;
    puVar3 = (ulong *)param_8[3];
    lVar20 = param_8[4];
    uVar16 = lVar20 - (long)puVar3 >> 2;
    if (uVar16 < uVar14) {
LAB_1098ed470:
      lVar19 = 0;
      puVar13 = param_8 + 7;
      uVar28 = *puVar13;
      uVar22 = *(undefined4 *)(param_8 + 8);
      do {
        *(undefined8 *)(auStack_90 + lVar19 + 4) = *(undefined8 *)((long)param_8 + lVar19 + 0x44);
        *(undefined4 *)((long)&uStack_88 + lVar19 + 4) =
             *(undefined4 *)((long)param_8 + lVar19 + 0x4c);
        lVar19 = lVar19 + 0xc;
      } while (lVar19 != 0x24);
      param_8[3] = puStack_b8;
      param_8[4] = CONCAT44(afStack_ac[0],fStack_b0);
      fStack_b0 = (float)lVar20;
      afStack_ac[0] = (float)((ulong)lVar20 >> 0x20);
      uVar30 = param_8[5];
      param_8[5] = CONCAT44(afStack_ac[2],afStack_ac[1]);
      afStack_ac[1] = (float)uVar30;
      afStack_ac[2] = (float)((ulong)uVar30 >> 0x20);
      uVar30 = *param_8;
      fVar25 = *(float *)(param_8 + 1);
      *param_8 = uStack_d0;
      *(float *)(param_8 + 1) = afStack_c8[0];
      uStack_68 = *(undefined8 *)((long)param_8 + 0xc);
      fVar21 = *(float *)((long)param_8 + 0x14);
      uStack_60 = CONCAT44(uStack_60._4_4_,fVar21);
      *(ulong *)((long)param_8 + 0xc) = CONCAT44(afStack_c8[2],afStack_c8[1]);
      *(float *)((long)param_8 + 0x14) = afStack_c8[3];
      afStack_c8[1] = (float)uStack_68;
      afStack_c8[2] = (float)((ulong)uStack_68 >> 0x20);
      param_2 = param_8[6];
      param_8[6] = uStack_a0;
      auStack_90._0_4_ = *(undefined4 *)(param_8 + 8);
      uStack_98 = *puVar13;
      *puVar13 = uVar28;
      *(undefined4 *)(param_8 + 8) = uVar22;
      uVar23 = uStack_a0;
      uStack_d0 = uVar30;
      afStack_c8[0] = fVar25;
      afStack_c8[3] = fVar21;
      param_6 = puVar3;
      uStack_a0 = param_2;
    }
    else if (uVar14 == uVar16) {
      uVar23 = (ulong)(uint)uStack_a0._4_4_;
      param_2 = (ulong)(uint)*(float *)((long)param_8 + 0x34);
      if (uStack_a0._4_4_ < *(float *)((long)param_8 + 0x34)) goto LAB_1098ed470;
    }
  }
  fVar25 = (float)param_2;
  puStack_b8 = param_6;
  if (param_6 != (ulong *)0x0) {
    fStack_b0 = SUB84(param_6,0);
    afStack_ac[0] = (float)((ulong)param_6 >> 0x20);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_6;
  }
LAB_1098ed5a4:
  ___stack_chk_fail();
  if (puStack_b8 != (ulong *)0x0) {
    fStack_b0 = SUB84(puStack_b8,0);
    afStack_ac[0] = (float)((ulong)puStack_b8 >> 0x20);
    __ZdlPv();
  }
  __Unwind_Resume();
  uStack_104 = uVar9;
  if ((ulong)uVar9 < *param_6) {
    puVar13 = (undefined8 *)(param_6[1] + (ulong)uVar9 * 0xc);
    uVar28 = *puVar13;
    fVar25 = (float)param_3 * ((float)uVar28 - (float)uVar23) +
             (float)(param_3 >> 0x20) * ((float)((ulong)uVar28 >> 0x20) - (float)(uVar23 >> 0x20)) +
             param_4 * (*(float *)(puVar13 + 1) - fVar25);
    fVar25 = fVar25 * fVar25;
    if (fVar25 <= fVar29) {
      param_6 = puVar18 + 3;
      FUN_109231afc(param_6,&uStack_104);
      *(float *)(puVar18 + 6) = fVar25 + *(float *)(puVar18 + 6);
    }
    return param_6;
  }
  FUN_1098c25f0();
  uVar16 = *param_6;
  *param_6 = 0;
  if (uVar16 != 0) {
    FUN_1098ed69c(param_6 + 1);
  }
  if (param_6[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_6;
LAB_1098ed5a0:
  FUN_1098c25f0();
  uVar9 = (uint)param_7;
  goto LAB_1098ed5a4;
}



/* Entry: 1098ed5c4; end: 1098ed657;  */

ulong * FUN_1098ed5c4(undefined8 param_1,float param_2,undefined8 param_3,float param_4,
                     float param_5,ulong *param_6,uint param_7,long param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  uint uStack_34;
  
  uStack_34 = param_7;
  if ((ulong)param_7 < *param_6) {
    puVar2 = (undefined8 *)(param_6[1] + (ulong)param_7 * 0xc);
    uVar4 = *puVar2;
    fVar3 = (float)param_3 * ((float)uVar4 - (float)param_1) +
            (float)((ulong)param_3 >> 0x20) *
            ((float)((ulong)uVar4 >> 0x20) - (float)((ulong)param_1 >> 0x20)) +
            param_4 * (*(float *)(puVar2 + 1) - param_2);
    fVar3 = fVar3 * fVar3;
    if (fVar3 <= param_5) {
      param_6 = (ulong *)(param_8 + 0x18);
      FUN_109231afc(param_6,&uStack_34);
      *(float *)(param_8 + 0x30) = fVar3 + *(float *)(param_8 + 0x30);
    }
    return param_6;
  }
  FUN_1098c25f0();
  uVar1 = *param_6;
  *param_6 = 0;
  if (uVar1 != 0) {
    FUN_1098ed69c(param_6 + 1);
  }
  if (param_6[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_6;
}



/* Entry: 1098ed658; end: 1098ed69b;  */

long * FUN_1098ed658(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1098ed69c(param_1 + 1);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1098ed69c; end: 1098ed84f;  */

void FUN_1098ed69c(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if (param_2 == 0) {
    return;
  }
  plVar8 = (long *)param_1[1];
  if ((plVar8 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 == (long *)0x0))
  goto LAB_1098ed7ec;
  lVar12 = *param_1;
  if (lVar12 != 0) {
    __ZNSt3__15mutex4lockEv(lVar12);
    plVar10 = (long *)(lVar12 + 0x40);
    lVar3 = *plVar10;
    plVar4 = *(long **)(lVar12 + 0x48);
    plVar14 = *(long **)(lVar12 + 0x50);
    uVar13 = (long)plVar4 - lVar3;
    uVar11 = (long)plVar14 - lVar3;
    if (uVar13 < uVar11) {
      if (plVar14 <= plVar4) {
        uVar1 = ((long)uVar13 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_1098ec818();
LAB_1098ed820:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1098ed824);
          (*pcVar7)();
        }
        uVar2 = (long)uVar11 >> 2;
        if ((ulong)((long)uVar11 >> 2) <= uVar1) {
          uVar2 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar11) {
          uVar2 = 0x1fffffffffffffff;
        }
        plStack_68 = plVar10;
        if (uVar2 >> 0x3d != 0) {
          func_0x000104c4f740();
          goto LAB_1098ed820;
        }
        lVar9 = uVar2 << 3;
        __Znwm();
        plVar4 = (long *)(lVar9 + uVar13);
        *plVar4 = param_2;
        _memcpy(plVar4 + -((long)uVar13 >> 3),lVar3,uVar13);
        *(long **)(lVar12 + 0x40) = plVar4 + -((long)uVar13 >> 3);
        *(long **)(lVar12 + 0x48) = plVar4 + 1;
        *(ulong *)(lVar12 + 0x50) = lVar9 + uVar2 * 8;
        lStack_88 = lVar3;
        lStack_80 = lVar3;
        lStack_78 = lVar3;
        plStack_70 = plVar14;
        FUN_1098ec82c(&lStack_88);
        *(long **)(lVar12 + 0x48) = plVar4 + 1;
        __ZNSt3__15mutex6unlockEv(lVar12);
        param_2 = 0;
        goto LAB_1098ed7b8;
      }
      *plVar4 = param_2;
      param_2 = 0;
      *(long **)(lVar12 + 0x48) = plVar4 + 1;
    }
    __ZNSt3__15mutex6unlockEv(lVar12);
  }
LAB_1098ed7b8:
  plVar4 = plVar8 + 1;
  do {
    lVar12 = *plVar4;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *plVar4 = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  if (param_2 == 0) {
    return;
  }
LAB_1098ed7ec:
  FUN_1098ec7e0(param_2);
  return;
}



/* Entry: 1098ed850; end: 1098ed8c3;  */

void FUN_1098ed850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1c8d8;
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)(param_1);
  return;
}



/* Entry: 1098ed8c4; end: 1098ed903;  */

void FUN_1098ed8c4(long param_1)

{
  FUN_1098ed69c(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1098ed904; end: 1098ed93f;  */

long FUN_1098ed904(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b1c918);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1098ed940; end: 1098ed943;  */

void FUN_1098ed940(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ed944; end: 1098ede0f;  */

void FUN_1098ed944(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  undefined2 *puVar12;
  char *pcVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  undefined2 *puVar18;
  long lVar19;
  int iVar20;
  char *pcVar21;
  long lVar22;
  long lVar23;
  undefined2 *puVar24;
  long lVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  
  uVar15 = 0;
  uVar11 = 0;
  do {
    uVar11 = *(ulong *)(param_2 + uVar15) | uVar11;
    bVar9 = uVar15 < 0x2ca;
    uVar15 = uVar15 + 8;
  } while (bVar9);
  if (uVar11 != 0 || *(char *)(param_2 + 0x2d8) != '\0') {
    _memcpy(param_1,param_2,0x2d9);
    iVar14 = 1;
    lVar22 = 0x5b;
    do {
      iVar16 = 1;
      do {
        iVar20 = 1;
        puVar12 = (undefined2 *)(param_1 + -0x5b + (long)(int)lVar22);
        lVar22 = (long)(int)lVar22;
        do {
          lVar23 = lVar22;
          if (*(char *)(param_2 + lVar23) == '\x01') {
            lVar22 = 3;
            puVar18 = puVar12;
            do {
              *(undefined1 *)(puVar18 + 1) = 1;
              *puVar18 = 0x101;
              *(undefined2 *)((long)puVar18 + 9) = 0x101;
              *(undefined1 *)((long)puVar18 + 0xb) = 1;
              puVar18[9] = 0x101;
              *(undefined1 *)(puVar18 + 10) = 1;
              puVar18 = (undefined2 *)((long)puVar18 + 0x51);
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          iVar20 = iVar20 + 1;
          puVar12 = (undefined2 *)((long)puVar12 + 1);
          lVar22 = lVar23 + 1;
        } while (iVar20 != 8);
        lVar22 = lVar23 + 3;
        iVar16 = iVar16 + 1;
      } while (iVar16 != 8);
      lVar22 = lVar23 + 0x15;
      iVar14 = iVar14 + 1;
    } while (iVar14 != 8);
    puVar12 = (undefined2 *)(param_1 + 9);
    lVar22 = 1;
    do {
      lVar23 = 1;
      puVar18 = puVar12;
      do {
        if (*(char *)(param_2 + lVar23 * 9 + lVar22 * 0x51) == '\x01') {
          lVar25 = 3;
          puVar24 = puVar18;
          do {
            *(undefined2 *)((long)puVar24 + -9) = 0x101;
            *puVar24 = 0x101;
            *(undefined2 *)((long)puVar24 + 9) = 0x101;
            puVar24 = (undefined2 *)((long)puVar24 + 0x51);
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
        lVar23 = lVar23 + 1;
        puVar18 = (undefined2 *)((long)puVar18 + 9);
      } while (lVar23 != 8);
      lVar22 = lVar22 + 1;
      puVar12 = (undefined2 *)((long)puVar12 + 0x51);
    } while (lVar22 != 8);
    puVar12 = (undefined2 *)(param_1 + 0x10);
    lVar22 = 1;
    do {
      lVar23 = 1;
      puVar18 = puVar12;
      do {
        if (*(char *)(param_2 + lVar22 * 0x51 + 8 + lVar23 * 9) == '\x01') {
          lVar25 = 3;
          puVar24 = puVar18;
          do {
            *(undefined2 *)((long)puVar24 + -9) = 0x101;
            *puVar24 = 0x101;
            *(undefined2 *)((long)puVar24 + 9) = 0x101;
            puVar24 = (undefined2 *)((long)puVar24 + 0x51);
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
        lVar23 = lVar23 + 1;
        puVar18 = (undefined2 *)((long)puVar18 + 9);
      } while (lVar23 != 8);
      lVar22 = lVar22 + 1;
      puVar12 = (undefined2 *)((long)puVar12 + 0x51);
    } while (lVar22 != 8);
    pcVar13 = (char *)(param_2 + 0x52);
    puVar12 = (undefined2 *)(param_1 + 0x5a);
    lVar22 = 1;
    do {
      lVar23 = 7;
      puVar18 = puVar12;
      pcVar21 = pcVar13;
      do {
        if (*pcVar21 == '\x01') {
          *(undefined1 *)(puVar18 + -0x2c) = 1;
          puVar18[-0x2d] = 0x101;
          *(undefined2 *)((long)puVar18 + -0x51) = 0x101;
          *(undefined1 *)((long)puVar18 + -0x4f) = 1;
          *(undefined2 *)((long)puVar18 + -9) = 0x101;
          *(undefined1 *)((long)puVar18 + -7) = 1;
          *puVar18 = 0x101;
          *(undefined1 *)(puVar18 + 1) = 1;
          puVar18[0x24] = 0x101;
          *(undefined1 *)(puVar18 + 0x25) = 1;
          *(undefined2 *)((long)puVar18 + 0x51) = 0x101;
          *(undefined1 *)((long)puVar18 + 0x53) = 1;
        }
        puVar18 = (undefined2 *)((long)puVar18 + 1);
        lVar23 = lVar23 + -1;
        pcVar21 = pcVar21 + 1;
      } while (lVar23 != 0);
      lVar22 = lVar22 + 1;
      pcVar13 = pcVar13 + 0x51;
      puVar12 = (undefined2 *)((long)puVar12 + 0x51);
    } while (lVar22 != 8);
    pcVar13 = (char *)(param_2 + 0x9a);
    puVar12 = (undefined2 *)(param_1 + 0x90);
    lVar22 = 1;
    do {
      lVar23 = 7;
      puVar18 = puVar12;
      pcVar21 = pcVar13;
      do {
        if (*pcVar21 == '\x01') {
          *(undefined1 *)((long)puVar18 + -0x4f) = 1;
          *(undefined2 *)((long)puVar18 + -0x51) = 0x101;
          puVar18[-0x24] = 0x101;
          *(undefined1 *)(puVar18 + -0x23) = 1;
          *puVar18 = 0x101;
          *(undefined1 *)(puVar18 + 1) = 1;
          *(undefined2 *)((long)puVar18 + 9) = 0x101;
          *(undefined1 *)((long)puVar18 + 0xb) = 1;
          *(undefined2 *)((long)puVar18 + 0x51) = 0x101;
          *(undefined1 *)((long)puVar18 + 0x53) = 1;
          puVar18[0x2d] = 0x101;
          *(undefined1 *)(puVar18 + 0x2e) = 1;
        }
        puVar18 = (undefined2 *)((long)puVar18 + 1);
        lVar23 = lVar23 + -1;
        pcVar21 = pcVar21 + 1;
      } while (lVar23 != 0);
      lVar22 = lVar22 + 1;
      pcVar13 = pcVar13 + 0x51;
      puVar12 = (undefined2 *)((long)puVar12 + 0x51);
    } while (lVar22 != 8);
    pcVar13 = (char *)(param_2 + 10);
    puVar12 = (undefined2 *)(param_1 + 0x51);
    lVar22 = 1;
    do {
      lVar23 = 7;
      puVar18 = puVar12;
      pcVar21 = pcVar13;
      do {
        if (*pcVar21 == '\x01') {
          *(undefined1 *)((long)puVar18 + -0x4f) = 1;
          *(undefined2 *)((long)puVar18 + -0x51) = 0x101;
          puVar18[-0x24] = 0x101;
          *(undefined1 *)(puVar18 + -0x23) = 1;
          *(undefined2 *)((long)puVar18 + -0x3f) = 0x101;
          *(undefined1 *)((long)puVar18 + -0x3d) = 1;
          *puVar18 = 0x101;
          *(undefined1 *)(puVar18 + 1) = 1;
          *(undefined2 *)((long)puVar18 + 9) = 0x101;
          *(undefined1 *)((long)puVar18 + 0xb) = 1;
          puVar18[9] = 0x101;
          *(undefined1 *)(puVar18 + 10) = 1;
        }
        puVar18 = (undefined2 *)((long)puVar18 + 1);
        lVar23 = lVar23 + -1;
        pcVar21 = pcVar21 + 1;
      } while (lVar23 != 0);
      lVar22 = lVar22 + 1;
      pcVar13 = pcVar13 + 9;
      puVar12 = (undefined2 *)((long)puVar12 + 9);
    } while (lVar22 != 8);
    lVar22 = param_2 + 0x292;
    lVar23 = 1;
    lVar25 = param_1;
    do {
      lVar19 = 0;
      do {
        if (*(char *)(lVar22 + lVar19) == '\x01') {
          lVar1 = lVar25 + lVar19;
          *(undefined1 *)(lVar1 + 0x239) = 1;
          *(undefined2 *)(lVar1 + 0x237) = 0x101;
          *(undefined2 *)(lVar1 + 0x240) = 0x101;
          *(undefined1 *)(lVar1 + 0x242) = 1;
          *(undefined1 *)(lVar1 + 0x24b) = 1;
          *(undefined2 *)(lVar1 + 0x249) = 0x101;
          *(undefined2 *)(lVar1 + 0x288) = 0x101;
          *(undefined1 *)(lVar1 + 0x28a) = 1;
          *(undefined1 *)(lVar1 + 0x293) = 1;
          *(undefined2 *)(lVar1 + 0x291) = 0x101;
          *(undefined2 *)(lVar1 + 0x29a) = 0x101;
          *(undefined1 *)(lVar1 + 0x29c) = 1;
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 != 7);
      lVar23 = lVar23 + 1;
      lVar25 = lVar25 + 9;
      lVar22 = lVar22 + 9;
    } while (lVar23 != 8);
    lVar22 = 0;
    do {
      lVar23 = 0;
      iVar14 = *(int *)(&UNK_10e00b554 + lVar22);
      iVar2 = *(int *)(&UNK_10e00b558 + lVar22);
      iVar16 = *(int *)(&UNK_10e00b55c + lVar22);
      iVar3 = *(int *)(&UNK_10e00b560 + lVar22);
      iVar20 = *(int *)(&UNK_10e00b564 + lVar22);
      iVar4 = *(int *)(&UNK_10e00b568 + lVar22);
      uVar7 = (iVar14 + iVar16 * 0x51 + iVar2 * 9) - 0x5b;
      uVar8 = iVar14 - 1;
      do {
        iVar17 = (int)lVar23;
        iVar5 = iVar2 + iVar20 * iVar17;
        iVar6 = iVar16 + iVar4 * iVar17;
        if (*(char *)(param_2 + (iVar5 * 9 + iVar14 + iVar3 * iVar17 + iVar6 * 0x51)) != '\0') {
          iVar17 = -1;
          uVar10 = uVar7;
          do {
            iVar26 = -1;
            uVar27 = uVar10;
            do {
              iVar28 = 3;
              uVar30 = uVar27;
              uVar29 = uVar8;
              do {
                if (((uVar29 < 9) && ((uint)(iVar26 + iVar5) < 9)) && ((uint)(iVar17 + iVar6) < 9))
                {
                  *(undefined1 *)(param_1 + (ulong)uVar30) = 1;
                }
                uVar30 = uVar30 + 1;
                uVar29 = uVar29 + 1;
                iVar28 = iVar28 + -1;
              } while (iVar28 != 0);
              iVar26 = iVar26 + 1;
              uVar27 = uVar27 + 9;
            } while (iVar26 != 2);
            iVar17 = iVar17 + 1;
            uVar10 = uVar10 + 0x51;
          } while (iVar17 != 2);
        }
        lVar23 = lVar23 + 1;
        uVar7 = uVar7 + iVar3 + iVar4 * 0x51 + iVar20 * 9;
        uVar8 = uVar8 + iVar3;
      } while (lVar23 != 9);
      lVar22 = lVar22 + 0x18;
    } while (lVar22 != 0x120);
  }
  return;
}



/* Entry: 1098ede10; end: 1098ee3db;  */

void FUN_1098ede10(float *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  float *pfVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  int *piVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar56;
  undefined8 uStack_108;
  float fStack_100;
  undefined8 uStack_fc;
  float fStack_f4;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined8 uStack_e4;
  float fStack_dc;
  undefined8 uStack_d8;
  float fStack_d0;
  undefined8 uStack_cc;
  float fStack_c4;
  undefined8 uStack_c0;
  float fStack_b8;
  undefined8 uStack_b4;
  float fStack_ac;
  
  lVar16 = 0;
  piVar2 = (int *)*param_2;
  piVar3 = (int *)param_2[1];
  piVar26 = (int *)param_2[2];
  uVar28 = *(undefined8 *)param_1;
  fVar41 = param_1[6];
  fVar40 = param_1[7];
  uVar29 = *(undefined8 *)(param_1 + 4);
  fVar53 = param_1[10];
  fVar30 = param_1[0xb];
  uVar31 = *(undefined8 *)(param_1 + 8);
  fVar32 = param_1[0xc];
  iVar25 = (int)(fVar32 * 8000.0);
  iVar4 = piVar2[2];
  lVar27 = *(long *)(piVar2 + 4);
  iVar5 = piVar3[2];
  lVar22 = *(long *)(piVar3 + 4);
  iVar6 = piVar26[2];
  lVar23 = *(long *)(piVar26 + 4);
  uVar34 = *(undefined8 *)((long)param_3 + 0xb4);
  fVar51 = (float)*(undefined8 *)(param_1 + 2);
  fVar52 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  fVar54 = *(float *)((long)param_3 + 0xbc);
  uVar55 = param_3[0x18];
  fVar56 = *(float *)(param_3 + 0x19);
  uVar38 = *(undefined8 *)((long)param_3 + 0xcc);
  fVar39 = *(float *)((long)param_3 + 0xd4);
  uStack_108 = *param_3;
  fStack_100 = *(float *)(param_3 + 1);
  uVar42 = NEON_fmov(0x40e00000,4);
  fVar44 = (float)uVar42;
  fVar36 = (float)*(undefined8 *)((long)param_3 + 0xb4) * fVar44;
  fVar43 = (float)((ulong)uVar42 >> 0x20);
  fVar37 = (float)((ulong)*(undefined8 *)((long)param_3 + 0xb4) >> 0x20) * fVar43;
  fStack_c4 = fVar54 * 7.0;
  fVar45 = (float)param_3[0x12] * fVar44;
  fVar46 = (float)((ulong)param_3[0x12] >> 0x20) * fVar43;
  fVar47 = *(float *)(param_3 + 0x13) * 7.0;
  fVar33 = (float)uStack_108;
  fVar49 = fVar33 + fVar36;
  fVar35 = (float)((ulong)uStack_108 >> 0x20);
  fVar50 = fVar35 + fVar37;
  uStack_fc = CONCAT44(fVar50,fVar49);
  fStack_f4 = fStack_c4 + fStack_100;
  uStack_f0 = CONCAT44(fVar35 + fVar46,fVar33 + fVar45);
  fStack_e8 = fStack_100 + fVar47;
  uStack_e4 = CONCAT44(fVar50 + fVar46,fVar49 + fVar45);
  fStack_dc = fStack_f4 + fVar47;
  fVar33 = fVar33 + (float)*(undefined8 *)((long)param_3 + 0x6c) * fVar44;
  fVar35 = fVar35 + (float)((ulong)*(undefined8 *)((long)param_3 + 0x6c) >> 0x20) * fVar43;
  uStack_d8 = CONCAT44(fVar35,fVar33);
  fStack_d0 = fStack_100 + *(float *)((long)param_3 + 0x74) * 7.0;
  fVar36 = fVar36 + fVar33;
  fVar37 = fVar37 + fVar35;
  uStack_cc = CONCAT44(fVar37,fVar36);
  fStack_c4 = fStack_c4 + fStack_d0;
  uStack_c0 = CONCAT44(fVar46 + fVar35,fVar45 + fVar33);
  fStack_b8 = fVar47 + fStack_d0;
  uStack_b4 = CONCAT44(fVar46 + fVar37,fVar45 + fVar36);
  fStack_ac = fVar47 + fStack_c4;
  while( true ) {
    fVar33 = *(float *)((long)&fStack_100 + lVar16);
    if (fVar33 < 0.001) {
      return;
    }
    fVar35 = *param_1 + (fVar51 * *(float *)((long)&uStack_108 + lVar16)) / fVar33;
    if (fVar35 < 0.0) break;
    fVar33 = param_1[1] + (fVar52 * *(float *)((long)&uStack_108 + lVar16 + 4)) / fVar33;
    bVar12 = false;
    if ((0.0 <= fVar33) && (bVar12 = false, !NAN(fVar35) && !NAN((float)*piVar2 + -1.0))) {
      bVar12 = fVar35 < (float)*piVar2 + -1.0;
    }
    bVar13 = false;
    if ((bVar12) && (bVar13 = false, !NAN(fVar33) && !NAN((float)piVar2[1] + -1.0))) {
      bVar13 = fVar33 < (float)piVar2[1] + -1.0;
    }
    if (!bVar13) {
      return;
    }
    lVar16 = lVar16 + 0xc;
    if (lVar16 == 0x60) {
      iVar20 = 0;
      do {
        lVar16 = 3;
        puVar17 = (undefined4 *)((long)param_3 + 0x2c);
        do {
          *(undefined8 *)(puVar17 + -2) = *(undefined8 *)(puVar17 + -0xb);
          *puVar17 = puVar17[-9];
          lVar16 = lVar16 + -1;
          puVar17 = puVar17 + 3;
        } while (lVar16 != 0);
        iVar14 = 0;
        do {
          lVar16 = 3;
          puVar17 = (undefined4 *)((long)param_3 + 0x2c);
          do {
            *(undefined8 *)(puVar17 + 7) = *(undefined8 *)(puVar17 + -2);
            puVar17[9] = *puVar17;
            puVar17 = puVar17 + 3;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          fVar37 = fVar51 * (float)param_3[9];
          fVar44 = fVar52 * (float)((ulong)param_3[9] >> 0x20);
          fVar33 = *(float *)(param_3 + 10);
          uVar42 = *(undefined8 *)((long)param_3 + 0x54);
          fVar35 = *(float *)((long)param_3 + 0x5c);
          uVar48 = param_3[0xc];
          fVar36 = *(float *)(param_3 + 0xd);
          iVar24 = 8;
          lVar16 = param_4 + 8;
          do {
            param_4 = lVar16;
            iVar15 = (uint)*(ushort *)
                            (lVar27 + (long)((int)((float)uVar28 + 0.5 + (1.0 / fVar33) * fVar37) +
                                            iVar4 * (int)((float)((ulong)uVar28 >> 0x20) + 0.5 +
                                                         (1.0 / fVar33) * fVar44)) * 2) * 8 -
                     (int)(fVar33 * 8000.0);
            fVar43 = (float)((ulong)uVar42 >> 0x20);
            fVar45 = (float)((ulong)uVar48 >> 0x20);
            if (-iVar25 < iVar15) {
              if (iVar25 <= iVar15) {
                iVar15 = iVar25;
              }
              uVar10 = *(ushort *)(param_4 + -6);
              iVar15 = ((uint)uVar10 * (int)*(short *)(param_4 + -8) +
                       (iVar15 * (int)(((4096.0 / fVar32) / 8000.0) * 65536.0 + 0.5) >> 0x10)) *
                       *(int *)(&UNK_10e00b674 + (ulong)uVar10 * 4);
              *(short *)(param_4 + -8) = (short)((uint)iVar15 >> 0x10);
              *(undefined2 *)(param_4 + -6) = *(undefined2 *)(&UNK_10fe11686 + (ulong)uVar10 * 2);
              if (0xfffff000 < (iVar15 >> 0x10) - 0x800U) {
                iVar15 = (int)((float)uVar29 + 0.5 + (1.0 / fVar35) * (float)uVar42 * fVar41);
                if ((((-1 < iVar15) &&
                     (iVar21 = (int)((float)((ulong)uVar29 >> 0x20) + 0.5 +
                                    (1.0 / fVar35) * fVar43 * fVar40), -1 < iVar21)) &&
                    (iVar15 < *piVar3)) && (iVar21 < piVar3[1])) {
                  uVar11 = iVar15 + iVar5 * iVar21;
                  pbVar1 = (byte *)(lVar22 + (-(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 |
                                             (ulong)uVar11 << 1) + (long)(int)uVar11);
                  bVar7 = pbVar1[1];
                  bVar8 = pbVar1[2];
                  bVar9 = *(byte *)(param_4 + -1);
                  iVar15 = *(int *)(&UNK_10e00b674 + (ulong)bVar9 * 4);
                  *(char *)(param_4 + -4) =
                       (char)(((uint)*pbVar1 + (uint)bVar9 * (uint)*(byte *)(param_4 + -4)) * iVar15
                             >> 0x10);
                  *(char *)(param_4 + -3) =
                       (char)(((uint)bVar7 + (uint)bVar9 * (uint)*(byte *)(param_4 + -3)) * iVar15
                             >> 0x10);
                  *(char *)(param_4 + -2) =
                       (char)(((uint)bVar8 + (uint)bVar9 * (uint)*(byte *)(param_4 + -2)) * iVar15
                             >> 0x10);
                  *(undefined *)(param_4 + -1) = (&UNK_10f5878bf)[bVar9];
                }
                if ((*piVar26 != 0) && (piVar26[1] != 0)) {
                  iVar15 = (int)((float)uVar31 + 0.5 + (1.0 / fVar36) * (float)uVar48 * fVar53);
                  if ((-1 < iVar15) &&
                     ((iVar21 = (int)((float)((ulong)uVar31 >> 0x20) + 0.5 +
                                     (1.0 / fVar36) * fVar45 * fVar30), -1 < iVar21 &&
                      (iVar15 < *piVar26 && iVar21 < piVar26[1])))) {
                    bVar8 = *(byte *)(lVar23 + (iVar15 + iVar6 * iVar21));
                    bVar7 = 0;
                    if (bVar8 < 6) {
                      bVar7 = bVar8;
                    }
                    func_0x000109449738(param_4,bVar7);
                  }
                }
              }
            }
            fVar37 = fVar51 * (float)uVar34 + fVar37;
            fVar44 = fVar52 * (float)((ulong)uVar34 >> 0x20) + fVar44;
            fVar33 = fVar54 + fVar33;
            uVar42 = CONCAT44((float)((ulong)uVar55 >> 0x20) + fVar43,(float)uVar55 + (float)uVar42)
            ;
            fVar35 = fVar56 + fVar35;
            uVar48 = CONCAT44((float)((ulong)uVar38 >> 0x20) + fVar45,(float)uVar38 + (float)uVar48)
            ;
            fVar36 = fVar39 + fVar36;
            iVar24 = iVar24 + -1;
            lVar16 = param_4 + 0xc;
          } while (iVar24 != 0);
          param_4 = param_4 + 4;
          lVar16 = 3;
          pfVar18 = (float *)(param_3 + 0x13);
          do {
            *(ulong *)(pfVar18 + -0x1d) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + -2) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(pfVar18 + -0x1d) >> 0x20),
                          (float)*(undefined8 *)(pfVar18 + -2) +
                          (float)*(undefined8 *)(pfVar18 + -0x1d));
            pfVar18[-0x1b] = *pfVar18 + pfVar18[-0x1b];
            pfVar18 = pfVar18 + 3;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          iVar14 = iVar14 + 1;
        } while (iVar14 != 8);
        lVar16 = 3;
        puVar19 = param_3;
        do {
          *puVar19 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar19 + 0x6c) >> 0x20) +
                              (float)((ulong)*puVar19 >> 0x20),
                              (float)*(undefined8 *)((long)puVar19 + 0x6c) + (float)*puVar19);
          *(float *)(puVar19 + 1) = *(float *)((long)puVar19 + 0x74) + *(float *)(puVar19 + 1);
          puVar19 = (undefined8 *)((long)puVar19 + 0xc);
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        iVar20 = iVar20 + 1;
      } while (iVar20 != 8);
      return;
    }
  }
  return;
}



/* Entry: 1098ee3dc; end: 1098ee693;  */

long FUN_1098ee3dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,byte param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *(undefined8 *)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0x80) = param_3;
  *(byte *)(param_1 + 0xbc) = param_5 & *(byte *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x88) = param_2;
  if (*(char *)(param_1 + 0xb7) < '\0') {
    **(undefined1 **)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xb7) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar4 = puVar1;
  if (*(undefined8 **)(param_1 + 0x40) != puVar1) {
    uVar5 = *(ulong *)(param_1 + 0x50);
    plVar6 = puVar1 + uVar5 / 0x49;
    lVar3 = *plVar6;
    lVar8 = lVar3 + (uVar5 % 0x49) * 0x38;
    uVar5 = *(long *)(param_1 + 0x58) + uVar5;
    lVar7 = puVar1[uVar5 / 0x49] + (uVar5 % 0x49) * 0x38;
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    if (lVar8 != lVar7) {
      do {
        if (*(char *)(lVar8 + 0x2f) < '\0') {
          __ZdlPv(*(undefined8 *)(lVar8 + 0x18));
          lVar3 = *plVar6;
        }
        lVar8 = lVar8 + 0x38;
        if (lVar8 - lVar3 == 0xff8) {
          plVar6 = plVar6 + 1;
          lVar3 = *plVar6;
          lVar8 = lVar3;
        }
      } while (lVar8 != lVar7);
      puVar1 = *(undefined8 **)(param_1 + 0x38);
      puVar4 = *(undefined8 **)(param_1 + 0x40);
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  lVar8 = (long)puVar4 - (long)puVar1;
  while (uVar5 = lVar8 >> 3, 2 < uVar5) {
    __ZdlPv(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *(undefined8 **)(param_1 + 0x38) = puVar1;
    lVar8 = *(long *)(param_1 + 0x40) - (long)puVar1;
  }
  if (uVar5 == 1) {
    uVar2 = 0x24;
LAB_1098ee540:
    *(undefined8 *)(param_1 + 0x50) = uVar2;
  }
  else if (uVar5 == 2) {
    uVar2 = 0x49;
    goto LAB_1098ee540;
  }
  while (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    func_0x000107c2ad40(param_1);
  }
  func_0x000107c2ad44(param_1,param_4);
  lVar8 = param_1;
  FUN_1098ee694(param_1);
  FUN_1098ef3a8(param_1,auStack_68);
  if (*(char *)(param_1 + 0xbc) == '\x01') {
    if (*(char *)(param_1 + 0xb7) < '\0') {
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_1098ee5e4;
      func_0x000107c3192c(&uStack_80,*(undefined8 *)(param_1 + 0xa0));
    }
    else {
      if (*(char *)(param_1 + 0xb7) == '\0') goto LAB_1098ee5e4;
      uStack_78 = *(undefined8 *)(param_1 + 0xa8);
      uStack_80 = *(undefined8 *)(param_1 + 0xa0);
      lStack_70 = *(long *)(param_1 + 0xb0);
    }
    FUN_1098f4448(param_4,&uStack_80,2);
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
  }
LAB_1098ee5e4:
  if ((*(char *)(param_1 + 0xb9) == '\x01') && ((*(ushort *)(param_4 + 8) & 0xfe) != 6)) {
    auStack_68[0] = 0xd;
    uStack_60 = param_2;
    uStack_58 = param_3;
    func_0x000107c31940(auStack_98,&UNK_10f5878df);
    FUN_1098ef400(param_1,auStack_98,auStack_68,0);
    if (cStack_81 < '\0') {
      __ZdlPv(auStack_98[0]);
    }
    lVar8 = 0;
  }
  return lVar8;
}



/* Entry: 1098ee694; end: 1098ef3a7;  */

/* WARNING: Removing unreachable block (ram,0x0001098ee8c4) */
/* WARNING: Removing unreachable block (ram,0x0001098ef0d0) */

ulong FUN_1098ee694(ulong param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined8 *******pppppppuVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined4 auStack_120 [2];
  long lStack_118;
  long lStack_110;
  undefined8 auStack_108 [2];
  char cStack_f1;
  uint uStack_f0;
  undefined4 uStack_ec;
  ulong uStack_e8;
  undefined7 uStack_e0;
  char cStack_d9;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 ******ppppppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  int aiStack_90 [6];
  long lStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (1000 < *(ulong *)(param_1 + 0x28)) {
    func_0x000107c31940(&lStack_78,&UNK_10f587921);
    FUN_1098f2ea8();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098ef26c);
    (*pcVar4)();
  }
  FUN_1098ef3a8(param_1,auStack_120);
  if (*(char *)(param_1 + 0xbc) == '\x01') {
    cVar2 = *(char *)(param_1 + 0xb7);
    if (cVar2 < '\0') {
      if (*(long *)(param_1 + 0xa8) != 0) goto LAB_1098ee6ec;
    }
    else if (cVar2 != '\0') {
LAB_1098ee6ec:
      uVar8 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
      uVar16 = *(undefined8 *)
                (*(long *)(*(long *)(param_1 + 8) + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8);
      if (cVar2 < '\0') {
        func_0x000107c3192c(&uStack_140,*(undefined8 *)(param_1 + 0xa0),
                            *(undefined8 *)(param_1 + 0xa8));
      }
      else {
        uStack_138 = *(undefined8 *)(param_1 + 0xa8);
        uStack_140 = *(undefined8 *)(param_1 + 0xa0);
        lStack_130 = *(long *)(param_1 + 0xb0);
      }
      FUN_1098f4448(uVar16,&uStack_140,0);
      if (lStack_130 < 0) {
        __ZdlPv(uStack_140);
      }
      if (*(char *)(param_1 + 0xb7) < '\0') {
        **(undefined1 **)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xa0) = 0;
        *(undefined1 *)(param_1 + 0xb7) = 0;
      }
    }
  }
  uVar8 = param_1;
  switch(auStack_120[0]) {
  case 1:
    ppppppuStack_b0 = (undefined8 *******)0x0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_70 = uStack_70 & 0xfffffe00 | 7;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    puVar6 = (undefined8 *)0x18;
    __Znwm();
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = puVar6 + 1;
    uVar8 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8);
    lVar9 = plVar7[1];
    *(uint *)(plVar7 + 1) = uStack_70;
    lStack_78 = *plVar7;
    *plVar7 = (long)puVar6;
    uVar8 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8)
             + 0x18) = lStack_118 - *(long *)(param_1 + 0x78);
    uStack_70 = (int)lVar9;
    do {
      uVar8 = param_1;
      FUN_1098ef650(param_1,aiStack_90);
      if ((int)uVar8 == 0) {
code_r0x0001098ef048:
        func_0x000107c31940(&uStack_d8,&UNK_10f5879cf);
        FUN_1098ef400(param_1,&uStack_d8,aiStack_90,0);
        FUN_1098f0070(param_1,2);
        if (lStack_c8 < 0) {
code_r0x0001098ef174:
          __ZdlPv(uStack_d8);
        }
code_r0x0001098ef1b0:
        uVar8 = 0;
        goto code_r0x0001098ef1b4;
      }
      uVar8 = 1;
      while (((uVar8 & 1) != 0 && (aiStack_90[0] == 0xc))) {
        uVar8 = param_1;
        FUN_1098ef650(param_1,aiStack_90);
      }
      if ((uVar8 & 1) == 0) goto code_r0x0001098ef048;
      if (aiStack_90[0] == 2) {
        uVar8 = uStack_a8;
        if (-1 < (long)uStack_a0) {
          uVar8 = uStack_a0 >> 0x38;
        }
        if (uVar8 == 0) break;
      }
      if ((long)uStack_a0 < 0) {
        *(undefined1 *)ppppppuStack_b0 = 0;
        uStack_a8 = 0;
      }
      else {
        ppppppuStack_b0 = (undefined8 ******)((ulong)ppppppuStack_b0 & 0xffffffffffffff00);
        uStack_a0 = uStack_a0 & 0xffffffffffffff;
      }
      if (aiStack_90[0] == 6) {
        if (*(char *)(param_1 + 0xbb) == '\x01') {
          uStack_d0 = uStack_d0 & 0xfffffffffffffe00;
          uStack_c0 = 0;
          uStack_b8 = 0;
          lStack_c8 = 0;
          uVar8 = param_1;
          FUN_1098f00d8(param_1,aiStack_90,&uStack_d8);
          if ((uVar8 & 1) != 0) {
            puVar6 = &uStack_d8;
            FUN_1098f325c(puVar6);
            func_0x000107c31940(&uStack_f0,puVar6);
            if ((long)uStack_a0 < 0) {
              __ZdlPv(ppppppuStack_b0);
            }
            ppppppuStack_b0 = (undefined8 ******)CONCAT44(uStack_ec,uStack_f0);
            uStack_a8 = uStack_e8;
            uStack_a0 = CONCAT17(cStack_d9,uStack_e0);
            func_0x000107c2ad70(&uStack_d8);
            goto code_r0x0001098eeb6c;
          }
          FUN_1098f0070(param_1,2);
          func_0x000107c2ad70(&uStack_d8);
          goto code_r0x0001098ef1b0;
        }
        goto code_r0x0001098ef048;
      }
      if (aiStack_90[0] != 5) goto code_r0x0001098ef048;
      uVar8 = param_1;
      FUN_1098efd40(param_1,aiStack_90,&ppppppuStack_b0);
      if ((uVar8 & 1) == 0) {
        FUN_1098f0070(param_1,2);
        goto code_r0x0001098ef1b0;
      }
code_r0x0001098eeb6c:
      uVar8 = param_1;
      FUN_1098ef650(param_1,&uStack_d8);
      uVar5 = 0;
      if ((int)uStack_d8 == 0xb) {
        uVar5 = (uint)uVar8;
      }
      if ((uVar5 & 1) == 0) {
        func_0x000107c31940(&uStack_f0,&UNK_10f587981);
        FUN_1098ef400(param_1,&uStack_f0,&uStack_d8,0);
        FUN_1098f0070(param_1,2);
        if (-1 < cStack_d9) goto code_r0x0001098ef1b0;
        uStack_d8 = CONCAT44(uStack_ec,uStack_f0);
        goto code_r0x0001098ef174;
      }
      uVar8 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
      uVar16 = *(undefined8 *)
                (*(long *)(*(long *)(param_1 + 8) + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8);
      uVar8 = uStack_a8;
      pppppppuVar3 = (undefined8 *******)ppppppuStack_b0;
      if (-1 < (long)uStack_a0) {
        uVar8 = uStack_a0 >> 0x38;
        pppppppuVar3 = &ppppppuStack_b0;
      }
      func_0x000107c2ad8c(uVar16,pppppppuVar3,(undefined1 *)((long)pppppppuVar3 + uVar8));
      func_0x000107c2ad44(param_1,uVar16);
      uVar8 = param_1;
      FUN_1098ee694();
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      func_0x000107c2ad40(param_1);
      if ((uVar8 & 1) == 0) {
        FUN_1098f0070(param_1,2);
        goto code_r0x0001098ef1b0;
      }
      uVar8 = param_1;
      FUN_1098ef650(param_1,&uStack_f0);
      if ((((int)uVar8 == 0) || (0xc < uStack_f0)) ||
         ((1 << (ulong)(uStack_f0 & 0x1f) & 0x1404U) == 0)) {
        func_0x000107c31940(auStack_108,&UNK_10f5879a6);
        FUN_1098ef400(param_1,auStack_108,&uStack_f0,0);
        FUN_1098f0070(param_1,2);
        uStack_d8 = auStack_108[0];
        if (cStack_f1 < '\0') goto code_r0x0001098ef174;
        goto code_r0x0001098ef1b0;
      }
      uVar8 = 1;
      while (((uVar8 & 1) != 0 && (uStack_f0 == 0xc))) {
        uVar8 = param_1;
        FUN_1098ef650(param_1,&uStack_f0);
      }
    } while (uStack_f0 != 2);
    uVar8 = 1;
code_r0x0001098ef1b4:
    func_0x000107c2ad70(&lStack_78);
    if ((long)uStack_a0 < 0) {
      __ZdlPv(ppppppuStack_b0);
    }
    break;
  case 2:
  case 4:
  case 10:
    if (*(char *)(param_1 + 0xba) != '\x01') goto LAB_1098ee848;
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
    uStack_70 = (uint)uStack_70._2_2_ << 0x10;
    uVar8 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8);
    lVar10 = plVar7[1];
    *(uint *)(plVar7 + 1) = uStack_70;
    lStack_78 = *plVar7;
    lVar9 = *(long *)(param_1 + 0x20) + -1;
    uVar8 = lVar9 + *(long *)(param_1 + 0x28);
    lVar12 = *(long *)(param_1 + 8);
    lStack_110 = *(long *)(param_1 + 0x88);
    uVar14 = *(ulong *)(param_1 + 0x78);
    *(ulong *)(*(long *)(*(long *)(lVar12 + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8) + 0x18) =
         ~uVar14 + lStack_110;
    uVar8 = lVar9 + *(long *)(param_1 + 0x28);
    lVar9 = *(long *)(*(long *)(lVar12 + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8);
    lStack_110 = lStack_110 - uVar14;
    uStack_70 = (int)lVar10;
    goto code_r0x0001098eef94;
  case 3:
    uStack_70 = uStack_70 & 0xfffffe00 | 6;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    puVar6 = (undefined8 *)0x18;
    __Znwm();
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = puVar6 + 1;
    uVar8 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8);
    lVar10 = plVar7[1];
    *(uint *)(plVar7 + 1) = uStack_70;
    lStack_78 = *plVar7;
    *plVar7 = (long)puVar6;
    lVar9 = *(long *)(param_1 + 0x20);
    uVar8 = (*(long *)(param_1 + 0x28) + lVar9) - 1;
    lVar12 = *(long *)(param_1 + 8);
    *(long *)(*(long *)(*(long *)(lVar12 + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8) + 0x18) =
         lStack_118 - *(long *)(param_1 + 0x78);
    pbVar1 = *(byte **)(param_1 + 0x88);
    while ((pbVar1 != *(byte **)(param_1 + 0x80) &&
           (*pbVar1 < 0x21 && (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
      pbVar1 = pbVar1 + 1;
      *(byte **)(param_1 + 0x88) = pbVar1;
    }
    uStack_70 = (int)lVar10;
    if ((pbVar1 == *(byte **)(param_1 + 0x80)) || (*pbVar1 != 0x5d)) {
      iVar15 = 0;
      while( true ) {
        uVar8 = (*(long *)(param_1 + 0x28) + lVar9) - 1;
        uVar16 = *(undefined8 *)(*(long *)(lVar12 + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8);
        FUN_1098f4070(uVar16,iVar15);
        func_0x000107c2ad44(param_1,uVar16);
        uVar8 = param_1;
        FUN_1098ee694();
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
        func_0x000107c2ad40(param_1);
        if ((uVar8 & 1) == 0) break;
        uVar8 = param_1;
        FUN_1098ef650(param_1,&uStack_d8);
        iVar15 = iVar15 + 1;
        while (((uVar8 & 1) != 0 && ((int)uStack_d8 == 0xc))) {
          uVar8 = param_1;
          FUN_1098ef650(param_1,&uStack_d8);
        }
        if ((uVar8 & 1) == 0) {
code_r0x0001098ef098:
          func_0x000107c31940(aiStack_90,&UNK_10f5879f1);
          FUN_1098ef400(param_1,aiStack_90,&uStack_d8,0);
          FUN_1098f0070(param_1,4);
          goto code_r0x0001098ef0e8;
        }
        if ((int)uStack_d8 != 10) {
          if ((int)uStack_d8 != 4) goto code_r0x0001098ef098;
          goto code_r0x0001098ef090;
        }
        lVar9 = *(long *)(param_1 + 0x20);
        lVar12 = *(long *)(param_1 + 8);
      }
      FUN_1098f0070(param_1,4);
code_r0x0001098ef0e8:
      uVar8 = 0;
    }
    else {
      FUN_1098ef650(param_1,&uStack_d8);
code_r0x0001098ef090:
      uVar8 = 1;
    }
    func_0x000107c2ad70(&lStack_78);
    break;
  case 5:
    uStack_d8 = 0;
    uStack_d0 = 0;
    lStack_c8 = 0;
    FUN_1098efd40(param_1,auStack_120,&uStack_d8);
    if ((uVar8 & 1) != 0) {
      func_0x000107c2ad68(&lStack_78,&uStack_d8);
      uVar14 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
      plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar14 >> 9) * 8) +
                         (uVar14 & 0x1ff) * 8);
      uVar5 = *(uint *)(plVar7 + 1);
      *(uint *)(plVar7 + 1) = uStack_70;
      lVar9 = *plVar7;
      *plVar7 = lStack_78;
      lVar10 = *(long *)(param_1 + 0x20) + -1;
      uVar14 = lVar10 + *(long *)(param_1 + 0x28);
      lVar12 = *(long *)(param_1 + 8);
      lVar11 = *(long *)(param_1 + 0x78);
      *(long *)(*(long *)(*(long *)(lVar12 + (uVar14 >> 9) * 8) + (uVar14 & 0x1ff) * 8) + 0x18) =
           lStack_118 - lVar11;
      uVar14 = *(long *)(param_1 + 0x28) + lVar10;
      *(long *)(*(long *)(*(long *)(lVar12 + (uVar14 >> 9) * 8) + (uVar14 & 0x1ff) * 8) + 0x20) =
           lStack_110 - lVar11;
      lStack_78 = lVar9;
      uStack_70 = uVar5;
      func_0x000107c2ad70();
    }
    if (lStack_c8 < 0) {
      __ZdlPv(uStack_d8);
    }
    goto code_r0x0001098ef1fc;
  case 6:
    uStack_70 = (uint)uStack_70._2_2_ << 0x10;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    FUN_1098f00d8(param_1,auStack_120,&lStack_78);
    if ((uVar8 & 1) != 0) {
      uVar14 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
      plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar14 >> 9) * 8) +
                         (uVar14 & 0x1ff) * 8);
      lVar9 = plVar7[1];
      *(uint *)(plVar7 + 1) = uStack_70;
      lVar10 = *plVar7;
      *plVar7 = lStack_78;
      lVar12 = *(long *)(param_1 + 0x20) + -1;
      uVar14 = lVar12 + *(long *)(param_1 + 0x28);
      lVar11 = *(long *)(param_1 + 8);
      lVar13 = *(long *)(param_1 + 0x78);
      *(long *)(*(long *)(*(long *)(lVar11 + (uVar14 >> 9) * 8) + (uVar14 & 0x1ff) * 8) + 0x18) =
           lStack_118 - lVar13;
      uVar14 = *(long *)(param_1 + 0x28) + lVar12;
      lStack_78 = lVar10;
      uStack_70 = (int)lVar9;
      goto code_r0x0001098eeed0;
    }
    goto code_r0x0001098eeee8;
  case 7:
    uStack_70 = CONCAT22(uStack_70._2_2_,5);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_68 = 0;
    uVar8 = 1;
    lStack_78 = CONCAT71(lStack_78._1_7_,1);
    uVar14 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar14 >> 9) * 8) + (uVar14 & 0x1ff) * 8
                       );
    lVar9 = plVar7[1];
    *(uint *)(plVar7 + 1) = uStack_70;
    lVar10 = *plVar7;
    *plVar7 = lStack_78;
    lVar12 = *(long *)(param_1 + 0x20) + -1;
    uVar14 = lVar12 + *(long *)(param_1 + 0x28);
    lVar11 = *(long *)(param_1 + 8);
    lVar13 = *(long *)(param_1 + 0x78);
    *(long *)(*(long *)(*(long *)(lVar11 + (uVar14 >> 9) * 8) + (uVar14 & 0x1ff) * 8) + 0x18) =
         lStack_118 - lVar13;
    uVar14 = lVar12 + *(long *)(param_1 + 0x28);
    lStack_78 = lVar10;
    uStack_70 = (int)lVar9;
code_r0x0001098eeed0:
    *(long *)(*(long *)(*(long *)(lVar11 + (uVar14 >> 9) * 8) + (uVar14 & 0x1ff) * 8) + 0x20) =
         lStack_110 - lVar13;
code_r0x0001098eeee8:
    func_0x000107c2ad70(&lStack_78);
    goto code_r0x0001098ef1fc;
  case 8:
    uStack_70 = CONCAT22(uStack_70._2_2_,5);
    lStack_78 = (ulong)lStack_78._1_7_ << 8;
    uVar8 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8);
    lVar9 = plVar7[1];
    *(uint *)(plVar7 + 1) = uStack_70;
    lVar10 = *plVar7;
    *plVar7 = lStack_78;
    lStack_78 = lVar10;
    uStack_70 = (int)lVar9;
    goto code_r0x0001098eef48;
  case 9:
    uStack_70 = (uint)uStack_70._2_2_ << 0x10;
    uVar8 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8);
    lVar9 = plVar7[1];
    *(uint *)(plVar7 + 1) = uStack_70;
    lStack_78 = *plVar7;
    uStack_70 = (int)lVar9;
code_r0x0001098eef48:
    lVar9 = *(long *)(param_1 + 0x20) + -1;
    uVar8 = lVar9 + *(long *)(param_1 + 0x28);
    lVar10 = *(long *)(param_1 + 8);
    lVar12 = *(long *)(param_1 + 0x78);
    *(long *)(*(long *)(*(long *)(lVar10 + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8) + 0x18) =
         lStack_118 - lVar12;
    uVar8 = lVar9 + *(long *)(param_1 + 0x28);
    lVar9 = *(long *)(*(long *)(lVar10 + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8);
    lStack_110 = lStack_110 - lVar12;
code_r0x0001098eef94:
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    *(long *)(lVar9 + 0x20) = lStack_110;
    func_0x000107c2ad70(&lStack_78);
    uVar8 = 1;
    goto code_r0x0001098ef1fc;
  default:
LAB_1098ee848:
    lVar9 = *(long *)(param_1 + 0x20) + -1;
    uVar8 = lVar9 + *(long *)(param_1 + 0x28);
    lVar10 = *(long *)(param_1 + 8);
    lVar12 = *(long *)(param_1 + 0x78);
    *(long *)(*(long *)(*(long *)(lVar10 + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8) + 0x18) =
         lStack_118 - lVar12;
    uVar8 = lVar9 + *(long *)(param_1 + 0x28);
    *(long *)(*(long *)(*(long *)(lVar10 + (uVar8 >> 9) * 8) + (uVar8 & 0x1ff) * 8) + 0x20) =
         lStack_110 - lVar12;
    func_0x000107c31940(&lStack_78,&UNK_10f587945);
    FUN_1098ef400(param_1,&lStack_78,auStack_120,0);
    return 0;
  }
  uVar14 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + (uVar14 >> 9) * 8) + (uVar14 & 0x1ff) * 8)
           + 0x20) = *(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x78);
code_r0x0001098ef1fc:
  if (*(char *)(param_1 + 0xbc) == '\x01') {
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
    uVar14 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
    *(undefined8 *)(param_1 + 0x98) =
         *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 8) + (uVar14 >> 9) * 8) + (uVar14 & 0x1ff) * 8);
  }
  return uVar8;
}



/* Entry: 1098ef3a8; end: 1098ef3ff;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1098ef3a8(long param_1,int *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 uVar17;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *******pppppppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    do {
      lVar7 = param_1;
      FUN_1098ef650(param_1,param_2);
    } while (*param_2 == 0xc);
    return lVar7;
  }
  pbVar2 = *(byte **)(param_1 + 0x80);
  pbVar13 = *(byte **)(param_1 + 0x88);
  while ((pbVar13 != pbVar2 &&
         (*pbVar13 < 0x21 && (1L << ((ulong)*pbVar13 & 0x3f) & 0x100002600U) != 0))) {
    pbVar13 = pbVar13 + 1;
    *(byte **)(param_1 + 0x88) = pbVar13;
  }
  *(byte **)(param_2 + 2) = pbVar13;
  pbVar8 = pbVar13;
  if (pbVar13 != pbVar2) {
    pbVar8 = pbVar13 + 1;
    *(byte **)(param_1 + 0x88) = pbVar8;
    bVar3 = *pbVar13;
    uVar12 = (uint)bVar3;
    pbVar10 = pbVar8;
    if (bVar3 < 0x3a) {
      if (bVar3 < 0x2d) {
        if (uVar12 == 0) goto LAB_1098ef7dc;
        if (uVar12 == 0x22) {
          *param_2 = 5;
          do {
            while( true ) {
              pbVar10 = pbVar8;
              if (pbVar10 == pbVar2) goto LAB_1098efa24;
              pbVar8 = pbVar10 + 1;
              *(byte **)(param_1 + 0x88) = pbVar8;
              if (*pbVar10 != 0x5c) break;
              if (pbVar8 != pbVar2) {
                *(byte **)(param_1 + 0x88) = pbVar10 + 2;
                pbVar8 = pbVar10 + 2;
              }
            }
            pbVar11 = pbVar8;
          } while (*pbVar10 != 0x22);
          goto LAB_1098efbf4;
        }
        if (uVar12 == 0x2c) {
          iVar9 = 10;
          goto LAB_1098efa40;
        }
      }
      else {
        if ((uVar12 - 0x30 < 10) || (uVar12 == 0x2d)) {
          *param_2 = 6;
          do {
            pbVar13 = pbVar8;
            *(byte **)(param_1 + 0x88) = pbVar13;
            pbVar8 = pbVar13;
            if (pbVar2 <= pbVar13) goto LAB_1098efa44;
            pbVar8 = pbVar13 + 1;
            bVar3 = *pbVar13;
          } while (bVar3 - 0x30 < 10);
          if (bVar3 == 0x2e) {
            *(byte **)(param_1 + 0x88) = pbVar8;
            if (pbVar2 <= pbVar8) goto LAB_1098efa44;
            pbVar13 = pbVar13 + 2;
            bVar3 = *pbVar8;
            if (bVar3 - 0x30 < 10) {
              do {
                *(byte **)(param_1 + 0x88) = pbVar13;
                pbVar8 = pbVar13;
                if (pbVar2 <= pbVar13) goto LAB_1098efa44;
                pbVar8 = pbVar13 + 1;
                bVar3 = *pbVar13;
                pbVar13 = pbVar8;
              } while (bVar3 - 0x30 < 10);
              goto LAB_1098ef754;
            }
          }
          else {
LAB_1098ef754:
            pbVar13 = pbVar8;
            pbVar8 = pbVar8 + -1;
          }
          pbVar11 = pbVar8;
          if ((bVar3 & 0xdf) != 0x45) goto LAB_1098efbf4;
          *(byte **)(param_1 + 0x88) = pbVar13;
          pbVar8 = pbVar13;
          if (pbVar13 < pbVar2) {
            pbVar8 = pbVar13 + 1;
            bVar3 = *pbVar13;
            if ((bVar3 == 0x2d) || (pbVar10 = pbVar8, bVar3 == 0x2b)) {
              *(byte **)(param_1 + 0x88) = pbVar8;
              if (pbVar2 <= pbVar8) {
                lVar7 = 1;
                goto LAB_1098efa48;
              }
              pbVar10 = pbVar13 + 2;
              bVar3 = pbVar13[1];
              pbVar13 = pbVar8;
            }
            for (; (pbVar8 = pbVar13, bVar3 - 0x30 < 10 &&
                   (*(byte **)(param_1 + 0x88) = pbVar10, pbVar8 = pbVar10, pbVar10 < pbVar2));
                pbVar10 = pbVar10 + 1) {
              bVar3 = *pbVar10;
              pbVar13 = pbVar10;
            }
          }
          goto LAB_1098efa44;
        }
        if ((uVar12 == 0x2f) && (*param_2 = 0xc, pbVar8 != pbVar2)) {
          pbVar10 = pbVar13 + 2;
          *(byte **)(param_1 + 0x88) = pbVar10;
          bVar3 = pbVar13[1];
          if (bVar3 == 0x2a) {
            if (pbVar13 + 3 < pbVar2) {
              lVar7 = 0;
              do {
                *(byte **)(param_1 + 0x88) = pbVar13 + lVar7 + 3;
                if (pbVar13[lVar7 + 2] == 0x2a) {
                  if (pbVar13[lVar7 + 3] == 0x2f || pbVar2 <= pbVar13 + lVar7 + 4)
                  goto LAB_1098efaf8;
                }
                else if (pbVar2 <= pbVar13 + lVar7 + 4) goto LAB_1098efaf8;
                lVar7 = lVar7 + 1;
              } while( true );
            }
            lVar14 = 1;
            goto LAB_1098efb04;
          }
          if (bVar3 == 0x2f) {
            pbVar11 = pbVar2 + ~(ulong)pbVar13;
            pbVar15 = pbVar11;
            if (pbVar11 != (byte *)0x1) {
              pbVar10 = (byte *)0x2;
              do {
                pbVar16 = pbVar10;
                *(byte **)(param_1 + 0x88) = pbVar13 + (long)pbVar16 + 1;
                bVar4 = pbVar13[(long)pbVar16];
                pbVar15 = pbVar16;
                if (bVar4 == 10) break;
                if (bVar4 == 0xd) {
                  pbVar10 = pbVar13 + (long)pbVar16 + 1;
                  if ((pbVar10 != pbVar2) && (*pbVar10 == 10)) {
                    pbVar10 = pbVar13 + (long)pbVar16 + 2;
                    *(byte **)(param_1 + 0x88) = pbVar10;
                    pbVar15 = pbVar16 + 1;
                  }
                  goto LAB_1098efb6c;
                }
                pbVar15 = pbVar11;
                pbVar10 = pbVar16 + 1;
              } while (pbVar2 + -(long)pbVar13 != pbVar16 + 1);
              pbVar10 = pbVar13 + (long)pbVar16 + 1;
            }
            goto LAB_1098efb6c;
          }
        }
      }
    }
    else {
      if (bVar3 < 0x6e) {
        if (uVar12 == 0x5c || bVar3 < 0x5c) {
          if (uVar12 == 0x3a) {
            iVar9 = 0xb;
          }
          else {
            if (uVar12 != 0x5b) goto LAB_1098efa24;
            iVar9 = 3;
          }
        }
        else {
          if (uVar12 != 0x5d) {
            if ((uVar12 == 0x66) && (*param_2 = 8, 3 < (long)pbVar2 - (long)pbVar8)) {
              lVar7 = 0;
              do {
                if (lVar7 == -4) {
                  pbVar8 = pbVar13 + 5;
                  goto LAB_1098efa8c;
                }
                lVar14 = lVar7 + 4;
                pbVar2 = &UNK_10f58797b + lVar7;
                lVar7 = lVar7 + -1;
              } while (pbVar13[lVar14] == *pbVar2);
            }
            goto LAB_1098efa24;
          }
          iVar9 = 4;
        }
LAB_1098efa40:
        *param_2 = iVar9;
        goto LAB_1098efa44;
      }
      if (uVar12 == 0x7a || bVar3 < 0x7a) {
        if (uVar12 == 0x6e) {
          *param_2 = 9;
          if (2 < (long)pbVar2 - (long)pbVar8) {
            lVar7 = 0;
            do {
              if (lVar7 == -3) goto LAB_1098efa74;
              lVar14 = lVar7 + 3;
              pbVar2 = &UNK_10f58797f + lVar7;
              lVar7 = lVar7 + -1;
            } while (pbVar13[lVar14] == *pbVar2);
          }
        }
        else if ((uVar12 == 0x74) && (*param_2 = 7, 2 < (long)pbVar2 - (long)pbVar8)) {
          lVar7 = 0;
          do {
            if (lVar7 == -3) goto LAB_1098efa74;
            lVar14 = lVar7 + 3;
            pbVar2 = &UNK_10f587976 + lVar7;
            lVar7 = lVar7 + -1;
          } while (pbVar13[lVar14] == *pbVar2);
        }
      }
      else {
        if (uVar12 == 0x7d) {
          iVar9 = 2;
          goto LAB_1098efa40;
        }
        if (uVar12 == 0x7b) {
          lVar7 = 1;
          *param_2 = 1;
          goto LAB_1098efa48;
        }
      }
    }
    goto LAB_1098efa24;
  }
LAB_1098ef7dc:
  *param_2 = 0;
  goto LAB_1098efa44;
LAB_1098efaf8:
  lVar14 = lVar7 + 2;
  pbVar10 = pbVar13 + lVar7 + 3;
LAB_1098efb04:
  if (pbVar8 + lVar14 != pbVar2) {
    pbVar10 = pbVar8 + lVar14 + 1;
    *(byte **)(param_1 + 0x88) = pbVar10;
    pbVar15 = (byte *)(lVar14 + 1);
    if (pbVar8[lVar14] == 0x2f) {
LAB_1098efb6c:
      pbVar11 = pbVar10;
      if (*(char *)(param_1 + 0xbc) != '\x01') {
LAB_1098efbf4:
        pbVar8 = pbVar11;
        lVar7 = 1;
        goto LAB_1098efa48;
      }
      pbVar2 = pbVar8 + (long)pbVar15;
      pbVar10 = *(byte **)(param_1 + 0x90);
      if (pbVar10 == (byte *)0x0) {
LAB_1098efbec:
        bVar6 = true;
      }
      else {
        if (pbVar10 < pbVar13) {
          bVar6 = true;
          do {
            pbVar11 = pbVar10 + 1;
            if (*pbVar10 == 10 || *pbVar10 == 0xd) break;
            bVar6 = pbVar11 < pbVar13;
            pbVar10 = pbVar11;
          } while (pbVar11 != pbVar13);
          if (bVar6) goto LAB_1098efbec;
        }
        if ((bVar3 == 0x2a) && (-1 < (long)pbVar15)) {
          pbVar10 = pbVar15 + 1;
          bVar6 = true;
          do {
            if (pbVar8[-1] == 10 || pbVar8[-1] == 0xd) break;
            bVar6 = pbVar8 < pbVar2;
            pbVar8 = pbVar8 + 1;
            pbVar10 = pbVar10 + -1;
          } while (pbVar10 != (byte *)0x0);
          if (bVar6) goto LAB_1098efbec;
        }
        bVar6 = false;
      }
      pppppppuStack_68 = (undefined8 *******)0x0;
      uStack_60 = 0;
      uStack_58 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (&pppppppuStack_68,pbVar15 + 1);
      if (pbVar15 != (byte *)0xffffffffffffffff) {
        do {
          pbVar8 = pbVar13 + 1;
          if (*pbVar13 == 0xd) {
            pbVar10 = pbVar2;
            if ((pbVar8 != pbVar2) && (pbVar10 = pbVar13 + 2, pbVar13[1] != 10)) {
              pbVar10 = pbVar8;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (&pppppppuStack_68,10);
            pbVar13 = pbVar10;
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (&pppppppuStack_68);
            pbVar13 = pbVar8;
          }
        } while (pbVar13 != pbVar2);
      }
      if (bVar6) {
        uVar1 = uStack_60;
        pppppppuVar5 = pppppppuStack_68;
        if (-1 < (long)uStack_58) {
          uVar1 = uStack_58 >> 0x38;
          pppppppuVar5 = &pppppppuStack_68;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1 + 0xa0,pppppppuVar5,uVar1);
      }
      else {
        uVar17 = *(undefined8 *)(param_1 + 0x98);
        if ((long)uStack_58 < 0) {
          func_0x000107c3192c(&pppppppuStack_80,pppppppuStack_68,uStack_60);
        }
        else {
          uStack_78 = uStack_60;
          pppppppuStack_80 = pppppppuStack_68;
          uStack_70 = uStack_58;
        }
        FUN_1098f4448(uVar17,&pppppppuStack_80,1);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppppuStack_80);
        }
      }
      if ((long)uStack_58 < 0) {
        __ZdlPv(pppppppuStack_68);
      }
      pbVar8 = *(byte **)(param_1 + 0x88);
      goto LAB_1098efa44;
    }
  }
LAB_1098efa24:
  pbVar8 = pbVar10;
  lVar7 = 0;
  *param_2 = 0xd;
  goto LAB_1098efa48;
LAB_1098efa74:
  pbVar8 = pbVar13 + 4;
LAB_1098efa8c:
  *(byte **)(param_1 + 0x88) = pbVar8;
LAB_1098efa44:
  lVar7 = 1;
LAB_1098efa48:
  *(byte **)(param_2 + 4) = pbVar8;
  return lVar7;
}



/* Entry: 1098ef400; end: 1098ef64f;  */

void FUN_1098ef400(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  uStack_90 = 0;
  lStack_88 = 0;
  uVar10 = param_3[1];
  uVar9 = *param_3;
  uVar3 = param_3[2];
  uStack_98 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_98);
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  puVar8 = *(undefined8 **)(param_1 + 0x40);
  uVar1 = (long)puVar8 - (long)puVar7;
  lVar6 = 0;
  if (uVar1 != 0) {
    lVar6 = ((long)puVar8 - (long)puVar7 >> 3) * 0x49 + -1;
  }
  uVar4 = *(ulong *)(param_1 + 0x50);
  uStack_80 = param_4;
  if (lVar6 != *(long *)(param_1 + 0x58) + uVar4) goto LAB_1098ef544;
  lVar6 = param_1 + 0x30;
  if (uVar4 < 0x49) {
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    uVar4 = (long)puVar7 - (long)*(undefined8 **)(param_1 + 0x30);
    if (uVar1 < uVar4) {
      uVar2 = 0xff8;
      __Znwm(0xff8);
      if (puVar7 == puVar8) {
        FUN_1098f2434(lVar6,uVar2);
        puVar7 = *(undefined8 **)(param_1 + 0x38);
        goto LAB_1098ef484;
      }
      func_0x0001098f2338(lVar6);
    }
    else {
      lVar5 = (long)uVar4 >> 2;
      if (puVar7 == *(undefined8 **)(param_1 + 0x30)) {
        lVar5 = 1;
      }
      lStack_50 = lVar6;
      FUN_1098f2734();
      lStack_68 = lVar5 + uVar1;
      lStack_58 = lVar5 + param_2 * 8;
      uVar2 = 0xff8;
      lStack_70 = lVar5;
      lStack_60 = lStack_68;
      __Znwm(0xff8);
      FUN_1098f2534(&lStack_70,uVar2);
      lVar6 = *(long *)(param_1 + 0x40);
      while (lVar6 != *(long *)(param_1 + 0x38)) {
        lVar6 = lVar6 + -8;
        FUN_1098f2630(&lStack_70,lVar6);
      }
      lVar6 = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x38) = lStack_68;
      *(long *)(param_1 + 0x30) = lStack_70;
      *(long *)(param_1 + 0x48) = lStack_58;
      *(long *)(param_1 + 0x40) = lStack_60;
      if (lVar6 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    *(ulong *)(param_1 + 0x50) = uVar4 - 0x49;
LAB_1098ef484:
    uVar2 = *puVar7;
    *(undefined8 **)(param_1 + 0x38) = puVar7 + 1;
    func_0x0001098f223c(lVar6,uVar2);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  puVar8 = *(undefined8 **)(param_1 + 0x40);
LAB_1098ef544:
  if (puVar8 == puVar7) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50);
    puVar7 = (undefined8 *)(puVar7[uVar1 / 0x49] + (uVar1 % 0x49) * 0x38);
  }
  puVar7[2] = uVar3;
  puVar7[1] = uVar10;
  *puVar7 = uVar9;
  if (lStack_88 < 0) {
    func_0x000107c3192c(puVar7 + 3,uStack_98,uStack_90);
  }
  else {
    puVar7[5] = lStack_88;
    puVar7[4] = uStack_90;
    puVar7[3] = uStack_98;
  }
  puVar7[6] = uStack_80;
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  if (lStack_88 < 0) {
    __ZdlPv(uStack_98);
  }
  return;
}



/* Entry: 1098ef650; end: 1098efd3f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1098ef650(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *******pppppppuStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  pbVar2 = *(byte **)(param_1 + 0x80);
  pbVar14 = *(byte **)(param_1 + 0x88);
  while ((pbVar14 != pbVar2 &&
         (*pbVar14 < 0x21 && (1L << ((ulong)*pbVar14 & 0x3f) & 0x100002600U) != 0))) {
    pbVar14 = pbVar14 + 1;
    *(byte **)(param_1 + 0x88) = pbVar14;
  }
  *(byte **)(param_2 + 2) = pbVar14;
  pbVar8 = pbVar14;
  if (pbVar14 != pbVar2) {
    pbVar8 = pbVar14 + 1;
    *(byte **)(param_1 + 0x88) = pbVar8;
    bVar3 = *pbVar14;
    uVar12 = (uint)bVar3;
    pbVar10 = pbVar8;
    if (bVar3 < 0x3a) {
      if (bVar3 < 0x2d) {
        if (uVar12 == 0) goto LAB_1098ef7dc;
        if (uVar12 == 0x22) {
          *param_2 = 5;
          do {
            while( true ) {
              pbVar10 = pbVar8;
              if (pbVar10 == pbVar2) goto LAB_1098efa24;
              pbVar8 = pbVar10 + 1;
              *(byte **)(param_1 + 0x88) = pbVar8;
              if (*pbVar10 != 0x5c) break;
              if (pbVar8 != pbVar2) {
                *(byte **)(param_1 + 0x88) = pbVar10 + 2;
                pbVar8 = pbVar10 + 2;
              }
            }
            pbVar11 = pbVar8;
          } while (*pbVar10 != 0x22);
          goto LAB_1098efbf4;
        }
        if (uVar12 == 0x2c) {
          uVar9 = 10;
          goto LAB_1098efa40;
        }
      }
      else {
        if ((uVar12 - 0x30 < 10) || (uVar12 == 0x2d)) {
          *param_2 = 6;
          do {
            pbVar14 = pbVar8;
            *(byte **)(param_1 + 0x88) = pbVar14;
            pbVar8 = pbVar14;
            if (pbVar2 <= pbVar14) goto LAB_1098efa44;
            pbVar8 = pbVar14 + 1;
            bVar3 = *pbVar14;
          } while (bVar3 - 0x30 < 10);
          if (bVar3 == 0x2e) {
            *(byte **)(param_1 + 0x88) = pbVar8;
            if (pbVar2 <= pbVar8) goto LAB_1098efa44;
            pbVar14 = pbVar14 + 2;
            bVar3 = *pbVar8;
            if (bVar3 - 0x30 < 10) {
              do {
                *(byte **)(param_1 + 0x88) = pbVar14;
                pbVar8 = pbVar14;
                if (pbVar2 <= pbVar14) goto LAB_1098efa44;
                pbVar8 = pbVar14 + 1;
                bVar3 = *pbVar14;
                pbVar14 = pbVar8;
              } while (bVar3 - 0x30 < 10);
              goto LAB_1098ef754;
            }
          }
          else {
LAB_1098ef754:
            pbVar14 = pbVar8;
            pbVar8 = pbVar8 + -1;
          }
          pbVar11 = pbVar8;
          if ((bVar3 & 0xdf) != 0x45) goto LAB_1098efbf4;
          *(byte **)(param_1 + 0x88) = pbVar14;
          pbVar8 = pbVar14;
          if (pbVar14 < pbVar2) {
            pbVar8 = pbVar14 + 1;
            bVar3 = *pbVar14;
            if ((bVar3 == 0x2d) || (pbVar10 = pbVar8, bVar3 == 0x2b)) {
              *(byte **)(param_1 + 0x88) = pbVar8;
              if (pbVar2 <= pbVar8) {
                uVar7 = 1;
                goto LAB_1098efa48;
              }
              pbVar10 = pbVar14 + 2;
              bVar3 = pbVar14[1];
              pbVar14 = pbVar8;
            }
            for (; (pbVar8 = pbVar14, bVar3 - 0x30 < 10 &&
                   (*(byte **)(param_1 + 0x88) = pbVar10, pbVar8 = pbVar10, pbVar10 < pbVar2));
                pbVar10 = pbVar10 + 1) {
              bVar3 = *pbVar10;
              pbVar14 = pbVar10;
            }
          }
          goto LAB_1098efa44;
        }
        if ((uVar12 == 0x2f) && (*param_2 = 0xc, pbVar8 != pbVar2)) {
          pbVar10 = pbVar14 + 2;
          *(byte **)(param_1 + 0x88) = pbVar10;
          bVar3 = pbVar14[1];
          if (bVar3 == 0x2a) {
            if (pbVar14 + 3 < pbVar2) {
              lVar13 = 0;
              do {
                *(byte **)(param_1 + 0x88) = pbVar14 + lVar13 + 3;
                if (pbVar14[lVar13 + 2] == 0x2a) {
                  if (pbVar14[lVar13 + 3] == 0x2f || pbVar2 <= pbVar14 + lVar13 + 4)
                  goto LAB_1098efaf8;
                }
                else if (pbVar2 <= pbVar14 + lVar13 + 4) goto LAB_1098efaf8;
                lVar13 = lVar13 + 1;
              } while( true );
            }
            lVar15 = 1;
            goto LAB_1098efb04;
          }
          if (bVar3 == 0x2f) {
            pbVar11 = pbVar2 + ~(ulong)pbVar14;
            pbVar16 = pbVar11;
            if (pbVar11 != (byte *)0x1) {
              pbVar10 = (byte *)0x2;
              do {
                pbVar17 = pbVar10;
                *(byte **)(param_1 + 0x88) = pbVar14 + (long)pbVar17 + 1;
                bVar4 = pbVar14[(long)pbVar17];
                pbVar16 = pbVar17;
                if (bVar4 == 10) break;
                if (bVar4 == 0xd) {
                  pbVar10 = pbVar14 + (long)pbVar17 + 1;
                  if ((pbVar10 != pbVar2) && (*pbVar10 == 10)) {
                    pbVar10 = pbVar14 + (long)pbVar17 + 2;
                    *(byte **)(param_1 + 0x88) = pbVar10;
                    pbVar16 = pbVar17 + 1;
                  }
                  goto LAB_1098efb6c;
                }
                pbVar16 = pbVar11;
                pbVar10 = pbVar17 + 1;
              } while (pbVar2 + -(long)pbVar14 != pbVar17 + 1);
              pbVar10 = pbVar14 + (long)pbVar17 + 1;
            }
            goto LAB_1098efb6c;
          }
        }
      }
    }
    else {
      if (bVar3 < 0x6e) {
        if (uVar12 == 0x5c || bVar3 < 0x5c) {
          if (uVar12 == 0x3a) {
            uVar9 = 0xb;
          }
          else {
            if (uVar12 != 0x5b) goto LAB_1098efa24;
            uVar9 = 3;
          }
        }
        else {
          if (uVar12 != 0x5d) {
            if ((uVar12 == 0x66) && (*param_2 = 8, 3 < (long)pbVar2 - (long)pbVar8)) {
              lVar13 = 0;
              do {
                if (lVar13 == -4) {
                  pbVar8 = pbVar14 + 5;
                  goto LAB_1098efa8c;
                }
                lVar15 = lVar13 + 4;
                pbVar2 = &UNK_10f58797b + lVar13;
                lVar13 = lVar13 + -1;
              } while (pbVar14[lVar15] == *pbVar2);
            }
            goto LAB_1098efa24;
          }
          uVar9 = 4;
        }
LAB_1098efa40:
        *param_2 = uVar9;
        goto LAB_1098efa44;
      }
      if (uVar12 == 0x7a || bVar3 < 0x7a) {
        if (uVar12 == 0x6e) {
          *param_2 = 9;
          if (2 < (long)pbVar2 - (long)pbVar8) {
            lVar13 = 0;
            do {
              if (lVar13 == -3) goto LAB_1098efa74;
              lVar15 = lVar13 + 3;
              pbVar2 = &UNK_10f58797f + lVar13;
              lVar13 = lVar13 + -1;
            } while (pbVar14[lVar15] == *pbVar2);
          }
        }
        else if ((uVar12 == 0x74) && (*param_2 = 7, 2 < (long)pbVar2 - (long)pbVar8)) {
          lVar13 = 0;
          do {
            if (lVar13 == -3) goto LAB_1098efa74;
            lVar15 = lVar13 + 3;
            pbVar2 = &UNK_10f587976 + lVar13;
            lVar13 = lVar13 + -1;
          } while (pbVar14[lVar15] == *pbVar2);
        }
      }
      else {
        if (uVar12 == 0x7d) {
          uVar9 = 2;
          goto LAB_1098efa40;
        }
        if (uVar12 == 0x7b) {
          uVar7 = 1;
          *param_2 = 1;
          goto LAB_1098efa48;
        }
      }
    }
    goto LAB_1098efa24;
  }
LAB_1098ef7dc:
  *param_2 = 0;
  goto LAB_1098efa44;
LAB_1098efaf8:
  lVar15 = lVar13 + 2;
  pbVar10 = pbVar14 + lVar13 + 3;
LAB_1098efb04:
  if (pbVar8 + lVar15 != pbVar2) {
    pbVar10 = pbVar8 + lVar15 + 1;
    *(byte **)(param_1 + 0x88) = pbVar10;
    pbVar16 = (byte *)(lVar15 + 1);
    if (pbVar8[lVar15] == 0x2f) {
LAB_1098efb6c:
      pbVar11 = pbVar10;
      if (*(char *)(param_1 + 0xbc) != '\x01') {
LAB_1098efbf4:
        pbVar8 = pbVar11;
        uVar7 = 1;
        goto LAB_1098efa48;
      }
      pbVar2 = pbVar8 + (long)pbVar16;
      pbVar10 = *(byte **)(param_1 + 0x90);
      if (pbVar10 == (byte *)0x0) {
LAB_1098efbec:
        bVar6 = true;
      }
      else {
        if (pbVar10 < pbVar14) {
          bVar6 = true;
          do {
            pbVar11 = pbVar10 + 1;
            if (*pbVar10 == 10 || *pbVar10 == 0xd) break;
            bVar6 = pbVar11 < pbVar14;
            pbVar10 = pbVar11;
          } while (pbVar11 != pbVar14);
          if (bVar6) goto LAB_1098efbec;
        }
        if ((bVar3 == 0x2a) && (-1 < (long)pbVar16)) {
          pbVar10 = pbVar16 + 1;
          bVar6 = true;
          do {
            if (pbVar8[-1] == 10 || pbVar8[-1] == 0xd) break;
            bVar6 = pbVar8 < pbVar2;
            pbVar8 = pbVar8 + 1;
            pbVar10 = pbVar10 + -1;
          } while (pbVar10 != (byte *)0x0);
          if (bVar6) goto LAB_1098efbec;
        }
        bVar6 = false;
      }
      pppppppuStack_68 = (undefined8 *******)0x0;
      uStack_60 = 0;
      uStack_58 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (&pppppppuStack_68,pbVar16 + 1);
      if (pbVar16 != (byte *)0xffffffffffffffff) {
        do {
          pbVar8 = pbVar14 + 1;
          if (*pbVar14 == 0xd) {
            pbVar10 = pbVar2;
            if ((pbVar8 != pbVar2) && (pbVar10 = pbVar14 + 2, pbVar14[1] != 10)) {
              pbVar10 = pbVar8;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (&pppppppuStack_68,10);
            pbVar14 = pbVar10;
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (&pppppppuStack_68);
            pbVar14 = pbVar8;
          }
        } while (pbVar14 != pbVar2);
      }
      if (bVar6) {
        uVar1 = uStack_60;
        pppppppuVar5 = pppppppuStack_68;
        if (-1 < (long)uStack_58) {
          uVar1 = uStack_58 >> 0x38;
          pppppppuVar5 = &pppppppuStack_68;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1 + 0xa0,pppppppuVar5,uVar1);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x98);
        if ((long)uStack_58 < 0) {
          func_0x000107c3192c(&pppppppuStack_80,pppppppuStack_68,uStack_60);
        }
        else {
          uStack_78 = uStack_60;
          pppppppuStack_80 = pppppppuStack_68;
          uStack_70 = uStack_58;
        }
        FUN_1098f4448(uVar7,&pppppppuStack_80,1);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppppuStack_80);
        }
      }
      if ((long)uStack_58 < 0) {
        __ZdlPv(pppppppuStack_68);
      }
      pbVar8 = *(byte **)(param_1 + 0x88);
      goto LAB_1098efa44;
    }
  }
LAB_1098efa24:
  pbVar8 = pbVar10;
  uVar7 = 0;
  *param_2 = 0xd;
  goto LAB_1098efa48;
LAB_1098efa74:
  pbVar8 = pbVar14 + 4;
LAB_1098efa8c:
  *(byte **)(param_1 + 0x88) = pbVar8;
LAB_1098efa44:
  uVar7 = 1;
LAB_1098efa48:
  *(byte **)(param_2 + 4) = pbVar8;
  return uVar7;
}



/* Entry: 1098efd40; end: 1098f006f;  */

undefined8 FUN_1098efd40(undefined8 param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  uint uStack_74;
  char *pcStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  ulong uStack_60;
  byte bStack_51;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
            (param_3,(*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8)) + -2);
  pcStack_70 = (char *)(*(long *)(param_2 + 8) + 1);
  pcVar9 = (char *)(*(long *)(param_2 + 0x10) + -1);
  if (pcStack_70 != pcVar9) {
    do {
      pcVar10 = pcStack_70 + 1;
      cVar4 = *pcStack_70;
      if (cVar4 != '\\') {
        if (cVar4 == '\"') {
          return 1;
        }
        iVar8 = (int)cVar4;
        pcStack_70 = pcVar10;
        goto LAB_1098efdb8;
      }
      if (pcVar10 == pcVar9) {
        pcStack_70 = pcVar10;
        func_0x000107c31940(&uStack_68,&UNK_10f587a2c);
        FUN_1098ef400(param_1,&uStack_68,param_2,pcVar10);
        goto LAB_1098eff9c;
      }
      pcVar10 = pcStack_70 + 2;
      bVar5 = pcStack_70[1];
      pcStack_70 = pcVar10;
      if (bVar5 < 0x66) {
        if (bVar5 < 0x5c) {
          if (bVar5 == 0x22) {
            iVar8 = 0x22;
          }
          else {
            if (bVar5 != 0x2f) {
LAB_1098effcc:
              func_0x000107c31940(&uStack_68,&UNK_10f587a4c);
              FUN_1098ef400(param_1,&uStack_68,param_2,pcVar10);
LAB_1098eff9c:
              if ((char)bStack_51 < '\0') {
                __ZdlPv(CONCAT44(uStack_64,uStack_68));
              }
              return 0;
            }
            iVar8 = 0x2f;
          }
        }
        else if (bVar5 == 0x5c) {
          iVar8 = 0x5c;
        }
        else {
          if (bVar5 != 0x62) goto LAB_1098effcc;
          iVar8 = 8;
        }
LAB_1098efdb8:
        pcVar10 = pcStack_70;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_3,iVar8);
        pcStack_70 = pcVar10;
      }
      else {
        if (bVar5 < 0x72) {
          if (bVar5 == 0x66) {
            iVar8 = 0xc;
          }
          else {
            if (bVar5 != 0x6e) goto LAB_1098effcc;
            iVar8 = 10;
          }
          goto LAB_1098efdb8;
        }
        if (bVar5 == 0x72) {
          iVar8 = 0xd;
          goto LAB_1098efdb8;
        }
        if (bVar5 == 0x74) {
          iVar8 = 9;
          goto LAB_1098efdb8;
        }
        if (bVar5 != 0x75) goto LAB_1098effcc;
        uVar7 = param_1;
        FUN_1098f05f0(param_1,param_2,&pcStack_70,pcVar9,&uStack_74);
        pcVar10 = pcStack_70;
        uVar2 = uStack_74;
        if ((int)uVar7 == 0) {
          return 0;
        }
        if (uStack_74 >> 10 == 0x36) {
          if ((long)pcVar9 - (long)pcStack_70 < 6) {
            func_0x000107c31940(&uStack_68,&UNK_10f587a6a);
            FUN_1098ef400(param_1,&uStack_68,param_2,pcVar10);
            goto LAB_1098eff9c;
          }
          pcVar10 = pcStack_70 + 1;
          if ((*pcStack_70 != '\\') ||
             (pcVar10 = pcStack_70 + 2, pcVar1 = pcStack_70 + 1, pcStack_70 = pcVar10,
             *pcVar1 != 'u')) {
            func_0x000107c31940(&uStack_68,&UNK_10f587aae);
            FUN_1098ef400(param_1,&uStack_68,param_2,pcVar10);
            goto LAB_1098eff9c;
          }
          uVar7 = param_1;
          FUN_1098f05f0(param_1,param_2,&pcStack_70,pcVar9,&uStack_68);
          if ((int)uVar7 == 0) {
            return 0;
          }
          uVar2 = (uStack_68 & 0x3ff | (uVar2 & 0x3ff) << 10) + 0x10000;
        }
        FUN_1098f046c(&uStack_68,uVar2);
        uVar3 = uStack_60;
        puVar6 = (uint *)CONCAT44(uStack_64,uStack_68);
        if (-1 < (char)bStack_51) {
          uVar3 = (ulong)bStack_51;
          puVar6 = &uStack_68;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_3,puVar6,uVar3);
        if ((char)bStack_51 < '\0') {
          __ZdlPv(CONCAT44(uStack_64,uStack_68));
        }
      }
    } while (pcStack_70 != pcVar9);
  }
  return 1;
}



/* Entry: 1098f0070; end: 1098f00d7;  */

void FUN_1098f0070(ulong param_1,int param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong *puStack_70;
  int in_stack_ffffffffffffffb8;
  
  uVar13 = *(ulong *)(param_1 + 0x58);
  do {
    uVar17 = param_1;
    FUN_1098ef650(param_1,&stack0xffffffffffffffb8);
    if ((uVar17 & 1) == 0) {
      FUN_1098f0728(param_1 + 0x30,uVar13);
    }
  } while (in_stack_ffffffffffffffb8 != param_2 && in_stack_ffffffffffffffb8 != 0);
  puVar1 = (ulong *)(param_1 + 0x30);
  uVar17 = *(ulong *)(param_1 + 0x58);
  uVar2 = uVar13 - uVar17;
  if (uVar13 < uVar17 || uVar2 == 0) {
    if (uVar13 >= uVar17) {
      return;
    }
    uVar13 = *(ulong *)(param_1 + 0x50);
    lVar8 = *(long *)(param_1 + 0x38);
    lVar16 = *(long *)(param_1 + 0x40);
    plVar9 = (long *)(lVar8 + (uVar13 / 0x49) * 8);
    if (lVar16 == lVar8) {
      plStack_88 = (long *)0x0;
    }
    else {
      plStack_88 = (long *)(*plVar9 + (uVar13 % 0x49) * 0x38);
    }
    plStack_90 = plVar9;
    FUN_1098f2768(&plStack_90);
    plVar20 = (long *)(lVar8 + ((uVar13 + uVar17) / 0x49) * 8);
    if (lVar16 == lVar8) {
      lVar19 = 0;
    }
    else {
      lVar19 = *plVar20 + ((uVar13 + uVar17) % 0x49) * 0x38;
    }
    if ((long *)lVar19 == plStack_88) {
      return;
    }
    lVar11 = (long)plStack_88 - *plStack_90 >> 3;
    lVar5 = ((long)plVar20 - (long)plStack_90 >> 3) * 0x49 +
            (lVar19 - *plVar20 >> 3) * 0x6db6db6db6db6db7 + lVar11 * -0x6db6db6db6db6db7;
    if (lVar5 < 1) {
      return;
    }
    if (lVar16 == lVar8) {
      lVar12 = 0;
    }
    else {
      lVar12 = *plVar9 + (uVar13 % 0x49) * 0x38;
    }
    if (plStack_88 == (long *)lVar12) {
      lVar11 = 0;
    }
    else {
      lVar11 = ((long)plStack_90 - (long)plVar9 >> 3) * 0x49 + lVar11 * 0x6db6db6db6db6db7 +
               (lVar12 - *plVar9 >> 3) * -0x6db6db6db6db6db7;
    }
    plStack_90 = plVar9;
    plStack_88 = (long *)lVar12;
    FUN_1098f2768(&plStack_90,lVar11);
    plVar20 = plStack_90;
    plVar9 = plStack_88;
    if (plStack_88 != (long *)lVar19) {
      do {
        if (*(char *)((long)plVar9 + 0x2f) < '\0') {
          __ZdlPv(*(undefined8 *)((long)plVar9 + 0x18));
        }
        plVar9 = (long *)((long)plVar9 + 0x38);
        if ((long)plVar9 - *plVar20 == 0xff8) {
          plVar20 = plVar20 + 1;
          plVar9 = (long *)*plVar20;
        }
      } while (plVar9 != (long *)lVar19);
      lVar8 = *(long *)(param_1 + 0x38);
      lVar16 = *(long *)(param_1 + 0x40);
      uVar13 = *(ulong *)(param_1 + 0x50);
      uVar17 = *(ulong *)(param_1 + 0x58);
    }
    lVar19 = 0;
    if (lVar16 != lVar8) {
      lVar19 = (lVar16 - lVar8 >> 3) * 0x49 + -1;
    }
    lVar5 = uVar17 - lVar5;
    *(long *)(param_1 + 0x58) = lVar5;
    uVar13 = lVar19 - (lVar5 + uVar13);
    while (0x91 < uVar13) {
      __ZdlPv(*(undefined8 *)(lVar16 + -8));
      lVar16 = *(long *)(param_1 + 0x40) + -8;
      lVar19 = lVar16 - *(long *)(param_1 + 0x38);
      *(long *)(param_1 + 0x40) = lVar16;
      lVar8 = 0;
      if (lVar19 != 0) {
        lVar8 = (lVar19 >> 3) * 0x49 + -1;
      }
      uVar13 = lVar8 - (*(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50));
    }
    return;
  }
  lVar16 = *(long *)(param_1 + 0x38);
  lVar19 = *(long *)(param_1 + 0x40);
  lVar5 = lVar19 - lVar16 >> 3;
  lVar8 = 0;
  if (lVar19 != lVar16) {
    lVar8 = lVar5 * 0x49 + -1;
  }
  uVar18 = *(ulong *)(param_1 + 0x50);
  uVar10 = uVar18 + uVar17;
  uVar14 = uVar2 - (lVar8 - uVar10);
  if (uVar2 < lVar8 - uVar10 || uVar14 == 0) goto LAB_1098f0c6c;
  if (lVar19 == lVar16) {
    uVar14 = uVar14 + 1;
  }
  uVar17 = uVar14 / 0x49;
  if (uVar14 % 0x49 != 0) {
    uVar17 = uVar17 + 1;
  }
  uVar10 = uVar17;
  if (uVar18 / 0x49 <= uVar17) {
    uVar10 = uVar18 / 0x49;
  }
  if (uVar18 / 0x49 < uVar17) {
    uVar14 = uVar17 - uVar10;
    lVar8 = *(long *)(param_1 + 0x48) - *puVar1;
    if (uVar14 <= (ulong)((lVar8 >> 3) - lVar5)) {
      if (uVar14 != 0) {
        do {
          if (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x40)) goto LAB_1098f0bf8;
          uVar3 = 0xff8;
          __Znwm(0xff8);
          func_0x0001098f2338(puVar1,uVar3);
          uVar17 = uVar17 - 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        uVar18 = *(ulong *)(param_1 + 0x50);
      }
      goto LAB_1098f0c34;
    }
    plVar9 = (long *)(lVar8 >> 2);
    if (plVar9 <= (long *)(uVar14 + lVar5)) {
      plVar9 = (long *)(uVar14 + lVar5);
    }
    puStack_70 = puVar1;
    if (plVar9 == (long *)0x0) {
      uVar13 = 0;
    }
    else {
      FUN_1098f2734();
    }
    lVar8 = uVar10 * -0x49;
    plStack_88 = plVar9 + (lVar5 - uVar10);
    plStack_78 = plVar9 + uVar13;
    plStack_90 = plVar9;
    plStack_80 = plStack_88;
    do {
      plVar9 = (long *)0xff8;
      __Znwm();
      FUN_1098f2534(&plStack_90);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    if (0x48 < uVar18) {
      plVar20 = *(long **)(param_1 + 0x38);
      do {
        plVar21 = plStack_80;
        plVar15 = plStack_88;
        plVar7 = plStack_90;
        if (plStack_80 == plStack_78) {
          if (plStack_88 < plStack_90 || (long)plStack_88 - (long)plStack_90 == 0) {
            plVar6 = (long *)((long)plStack_80 - (long)plStack_90 >> 2);
            if ((long)plStack_80 - (long)plStack_90 == 0) {
              plVar6 = (long *)0x1;
            }
            plVar4 = plVar6;
            FUN_1098f2734();
            plStack_88 = plVar4 + ((ulong)plVar6 >> 2);
            lVar16 = (long)plVar21 - (long)plVar15;
            plVar21 = plStack_88;
            if (lVar16 != 0) {
              plVar21 = (long *)((long)plStack_88 + lVar16);
              plVar6 = plStack_88;
              do {
                *plVar6 = *plVar15;
                lVar16 = lVar16 + -8;
                plVar6 = plVar6 + 1;
                plVar15 = plVar15 + 1;
              } while (lVar16 != 0);
            }
            plStack_78 = plVar4 + (long)plVar9;
            plStack_90 = plVar4;
            plStack_80 = plVar21;
            if (plVar7 != (long *)0x0) {
              __ZdlPv(plVar7);
            }
          }
          else {
            lVar16 = ((long)plStack_88 - (long)plStack_90 >> 3) + 1;
            plVar7 = plStack_88 + -((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
            lVar16 = (long)plStack_80 - (long)plStack_88;
            if (lVar16 != 0) {
              _memmove(plVar7,plStack_88,lVar16);
              plVar9 = plStack_88;
            }
            plVar21 = (long *)((long)plVar7 + lVar16);
            plStack_88 = plVar7;
            plStack_80 = plVar21;
          }
        }
        *plVar21 = *plVar20;
        plStack_80 = plStack_80 + 1;
        plVar20 = (long *)(*(long *)(param_1 + 0x38) + 8);
        *(long **)(param_1 + 0x38) = plVar20;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar16 = *(long *)(param_1 + 0x40);
    while (lVar16 != *(long *)(param_1 + 0x38)) {
      lVar16 = lVar16 + -8;
      FUN_1098f2630(&plStack_90,lVar16);
    }
    uVar13 = *puVar1;
    *(long **)(param_1 + 0x38) = plStack_88;
    *puVar1 = (ulong)plStack_90;
    *(long **)(param_1 + 0x48) = plStack_78;
    *(long **)(param_1 + 0x40) = plStack_80;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + lVar8;
    if (uVar13 != 0) {
      __ZdlPv();
    }
  }
  else {
    *(ulong *)(param_1 + 0x50) = uVar18 + uVar10 * -0x49;
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar3 = **(undefined8 **)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = *(undefined8 **)(param_1 + 0x38) + 1;
      func_0x0001098f223c(puVar1,uVar3);
    }
  }
LAB_1098f0c60:
  uVar17 = *(ulong *)(param_1 + 0x58);
  lVar16 = *(long *)(param_1 + 0x38);
  lVar19 = *(long *)(param_1 + 0x40);
  uVar10 = *(long *)(param_1 + 0x50) + uVar17;
LAB_1098f0c6c:
  plVar9 = (long *)(lVar16 + (uVar10 / 0x49) * 8);
  if (lVar19 == lVar16) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar9 + (uVar10 % 0x49) * 0x38;
  }
  plStack_90 = plVar9;
  plStack_88 = (long *)lVar8;
  FUN_1098f2768(&plStack_90,uVar2);
  plVar21 = plStack_88;
  plVar20 = plStack_90;
  while( true ) {
    if ((long *)lVar8 == plVar21) {
      return;
    }
    plVar7 = plVar21;
    if (plVar9 != plVar20) {
      plVar7 = (long *)(*plVar9 + 0xff8);
    }
    lVar16 = lVar8;
    if ((long *)lVar8 != plVar7) {
      lVar16 = ((((long)plVar7 - lVar8) - 0x38U) / 0x38) * 0x38 + 0x38;
      _bzero(lVar8,lVar16);
      uVar17 = *(ulong *)(param_1 + 0x58);
      lVar16 = lVar16 + lVar8;
    }
    uVar17 = uVar17 + (lVar16 - lVar8 >> 3) * 0x6db6db6db6db6db7;
    *(ulong *)(param_1 + 0x58) = uVar17;
    if (plVar9 == plVar20) break;
    plVar9 = plVar9 + 1;
    lVar8 = *plVar9;
  }
  return;
LAB_1098f0bf8:
  do {
    uVar3 = 0xff8;
    __Znwm(0xff8);
    FUN_1098f2434(puVar1,uVar3);
    lVar8 = 0x48;
    if (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) != 8) {
      lVar8 = 0x49;
    }
    uVar18 = lVar8 + *(long *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x50) = uVar18;
    uVar14 = uVar14 - 1;
    uVar10 = uVar17;
  } while (uVar14 != 0);
LAB_1098f0c34:
  *(ulong *)(param_1 + 0x50) = uVar18 + uVar10 * -0x49;
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    uVar3 = **(undefined8 **)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = *(undefined8 **)(param_1 + 0x38) + 1;
    func_0x0001098f223c(puVar1,uVar3);
  }
  goto LAB_1098f0c60;
}



/* Entry: 1098f00d8; end: 1098f01ff;  */

/* WARNING: Removing unreachable block (ram,0x0001098f03cc) */

bool FUN_1098f00d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined **appuStack_170 [2];
  undefined **ppuStack_160;
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  char cStack_109;
  undefined **appuStack_f8 [19];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  pbVar8 = *(byte **)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  pbVar7 = pbVar8 + 1;
  uVar2 = 0x8000000000000000;
  if (*pbVar8 != 0x2d) {
    uVar2 = 0xffffffffffffffff;
    pbVar7 = pbVar8;
  }
  if (pbVar7 < pbVar3) {
    uVar6 = 0;
    do {
      pbVar8 = pbVar7 + 1;
      if ((*pbVar7 - 0x3a < 0xfffffff6) ||
         ((uVar9 = (ulong)(*pbVar7 - 0x30), uVar2 / 10 <= uVar6 &&
          (((uVar2 / 10 < uVar6 || (pbVar8 != pbVar3)) || (uVar2 % 10 < uVar9)))))) {
        uStack_48 = 0;
        FUN_1092b29f8(auStack_60,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                      *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8));
        FUN_1093f2800(appuStack_170,auStack_60,8);
        pppuVar4 = appuStack_170;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(pppuVar4,&uStack_48);
        uVar1 = *(uint *)((long)pppuVar4 + (long)((*pppuVar4)[-3] + 0x20)) & 5;
        if (uVar1 == 0) {
          uStack_1c8 = CONCAT62(uStack_1c8._2_6_,3);
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          lStack_1c0 = 0;
          uStack_1d0 = uStack_48;
          func_0x000107c2ad6c(&uStack_1d0,param_3);
          func_0x000107c2ad70(&uStack_1d0);
        }
        else {
          FUN_1092b29f8(auStack_1a8,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                        *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8));
          puVar5 = auStack_1a8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar5,0,&DAT_10f638984,1);
          uStack_188 = puVar5[1];
          uStack_190 = *puVar5;
          lStack_180 = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          puVar5 = &uStack_190;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar5,&UNK_10f587a19,0x12);
          uStack_1c8 = puVar5[1];
          uStack_1d0 = *puVar5;
          lStack_1c0 = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          FUN_1098ef400(param_1,&uStack_1d0,param_2,0);
          if (lStack_1c0 < 0) {
            __ZdlPv(uStack_1d0);
          }
          if (lStack_180 < 0) {
            __ZdlPv(uStack_190);
          }
          if (cStack_191 < '\0') {
            __ZdlPv(auStack_1a8[0]);
          }
        }
        appuStack_f8[0] = &PTR_DAT_1108df740;
        appuStack_170[0] = &PTR_DAT_1108df718;
        ppuStack_160 = &PTR_DAT_11088d7b0;
        if (cStack_109 < '\0') {
          __ZdlPv(uStack_120);
        }
        ppuStack_160 = (undefined **)
                       (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
        __ZNSt3__16localeD1Ev(auStack_158);
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_170,&PTR_PTR_1108df758);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f8);
        return uVar1 == 0;
      }
      uVar6 = uVar9 + uVar6 * 10;
      pbVar7 = pbVar8;
    } while (pbVar8 < pbVar3);
  }
  func_0x000107c2ad6c(&stack0xffffffffffffffc8,param_3);
  func_0x000107c2ad70(&stack0xffffffffffffffc8);
  return true;
}



/* Entry: 1098f0200; end: 1098f046b;  */

/* WARNING: Removing unreachable block (ram,0x0001098f03cc) */

bool FUN_1098f0200(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined **appuStack_170 [2];
  undefined **ppuStack_160;
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  char cStack_109;
  undefined **appuStack_f8 [19];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  uStack_48 = 0;
  FUN_1092b29f8(auStack_60,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8));
  FUN_1093f2800(appuStack_170,auStack_60,8);
  pppuVar2 = appuStack_170;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(pppuVar2,&uStack_48);
  uVar1 = *(uint *)((long)pppuVar2 + (long)((*pppuVar2)[-3] + 0x20)) & 5;
  if (uVar1 == 0) {
    uStack_1c8 = CONCAT62(uStack_1c8._2_6_,3);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_1c0 = 0;
    uStack_1d0 = uStack_48;
    func_0x000107c2ad6c(&uStack_1d0,param_3);
    func_0x000107c2ad70(&uStack_1d0);
  }
  else {
    FUN_1092b29f8(auStack_1a8,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                  *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8));
    puVar3 = auStack_1a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&DAT_10f638984,1);
    uStack_188 = puVar3[1];
    uStack_190 = *puVar3;
    lStack_180 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_190;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f587a19,0x12);
    uStack_1c8 = puVar3[1];
    uStack_1d0 = *puVar3;
    lStack_1c0 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_1098ef400(param_1,&uStack_1d0,param_2,0);
    if (lStack_1c0 < 0) {
      __ZdlPv(uStack_1d0);
    }
    if (lStack_180 < 0) {
      __ZdlPv(uStack_190);
    }
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
  }
  appuStack_f8[0] = &PTR_DAT_1108df740;
  appuStack_170[0] = &PTR_DAT_1108df718;
  ppuStack_160 = &PTR_DAT_11088d7b0;
  if (cStack_109 < '\0') {
    __ZdlPv(uStack_120);
  }
  ppuStack_160 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_158);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_170,&PTR_PTR_1108df758);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f8);
  return uVar1 == 0;
}



/* Entry: 1098f046c; end: 1098f05ef;  */

void FUN_1098f046c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 < 0x80) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,1,0);
  }
  else {
    bVar2 = (byte)param_2;
    if (param_2 < 0x800) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,2,0);
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      *(byte *)((long)puVar1 + 1) = bVar2 & 0x3f | 0x80;
      param_2 = param_2 >> 6 | 0xffffffc0;
    }
    else if (param_2 >> 0x10 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,3,0);
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      *(byte *)((long)puVar1 + 2) = bVar2 & 0x3f | 0x80;
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      *(byte *)((long)puVar1 + 1) = (byte)(param_2 >> 6) & 0x3f | 0x80;
      param_2 = param_2 >> 0xc | 0xffffffe0;
    }
    else {
      if (0x10 < param_2 >> 0x10) {
        return;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(param_1,4,0);
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      *(byte *)((long)puVar1 + 3) = bVar2 & 0x3f | 0x80;
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      *(byte *)((long)puVar1 + 2) = (byte)(param_2 >> 6) & 0x3f | 0x80;
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      *(byte *)((long)puVar1 + 1) = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
      param_2 = param_2 >> 0x12 | 0xfffffff0;
    }
  }
  puVar1 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
  }
  *(char *)puVar1 = (char)param_2;
  return;
}



/* Entry: 1098f05f0; end: 1098f0727;  */

undefined8
FUN_1098f05f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,int *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  if (param_4 - (long)*param_3 < 4) {
    func_0x000107c31940(auStack_48,&UNK_10f587afe);
    FUN_1098ef400(param_1,auStack_48,param_2,*param_3);
LAB_1098f0644:
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    uVar2 = 0;
  }
  else {
    iVar5 = 0;
    iVar4 = 4;
    pbVar3 = (byte *)*param_3;
    do {
      *param_3 = pbVar3 + 1;
      bVar1 = *pbVar3;
      iVar5 = iVar5 * 0x10;
      uVar6 = (uint)bVar1;
      if (bVar1 - 0x30 < 10) {
        iVar5 = uVar6 + iVar5 + -0x30;
      }
      else if (bVar1 - 0x61 < 6) {
        iVar5 = iVar5 + uVar6 + -0x57;
      }
      else {
        if (5 < uVar6 - 0x41) {
          func_0x000107c31940(auStack_48,&UNK_10f587b3b);
          FUN_1098ef400(param_1,auStack_48,param_2,*param_3);
          goto LAB_1098f0644;
        }
        iVar5 = iVar5 + uVar6 + -0x37;
      }
      iVar4 = iVar4 + -1;
      pbVar3 = pbVar3 + 1;
    } while (iVar4 != 0);
    *param_5 = iVar5;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1098f0728; end: 1098f0ddf;  */

void FUN_1098f0728(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong *puStack_70;
  
  uVar13 = param_1[5];
  uVar15 = param_2 - uVar13;
  if (param_2 < uVar13 || uVar15 == 0) {
    if (param_2 >= uVar13) {
      return;
    }
    uVar11 = param_1[4];
    uVar15 = param_1[1];
    uVar10 = param_1[2];
    plVar7 = (long *)(uVar15 + (uVar11 / 0x49) * 8);
    if (uVar10 == uVar15) {
      plStack_88 = (long *)0x0;
    }
    else {
      plStack_88 = (long *)(*plVar7 + (uVar11 % 0x49) * 0x38);
    }
    plStack_90 = plVar7;
    FUN_1098f2768(&plStack_90);
    plVar18 = (long *)(uVar15 + ((uVar11 + uVar13) / 0x49) * 8);
    if (uVar10 == uVar15) {
      lVar17 = 0;
    }
    else {
      lVar17 = *plVar18 + ((uVar11 + uVar13) % 0x49) * 0x38;
    }
    if ((long *)lVar17 == plStack_88) {
      return;
    }
    lVar4 = (long)plStack_88 - *plStack_90 >> 3;
    lVar16 = ((long)plVar18 - (long)plStack_90 >> 3) * 0x49 +
             (lVar17 - *plVar18 >> 3) * 0x6db6db6db6db6db7 + lVar4 * -0x6db6db6db6db6db7;
    if (lVar16 < 1) {
      return;
    }
    if (uVar10 == uVar15) {
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar7 + (uVar11 % 0x49) * 0x38;
    }
    if (plStack_88 == (long *)lVar9) {
      lVar4 = 0;
    }
    else {
      lVar4 = ((long)plStack_90 - (long)plVar7 >> 3) * 0x49 + lVar4 * 0x6db6db6db6db6db7 +
              (lVar9 - *plVar7 >> 3) * -0x6db6db6db6db6db7;
    }
    plStack_90 = plVar7;
    plStack_88 = (long *)lVar9;
    FUN_1098f2768(&plStack_90,lVar4);
    plVar18 = plStack_90;
    plVar7 = plStack_88;
    if (plStack_88 != (long *)lVar17) {
      do {
        if (*(char *)((long)plVar7 + 0x2f) < '\0') {
          __ZdlPv(*(undefined8 *)((long)plVar7 + 0x18));
        }
        plVar7 = (long *)((long)plVar7 + 0x38);
        if ((long)plVar7 - *plVar18 == 0xff8) {
          plVar18 = plVar18 + 1;
          plVar7 = (long *)*plVar18;
        }
      } while (plVar7 != (long *)lVar17);
      uVar15 = param_1[1];
      uVar10 = param_1[2];
      uVar11 = param_1[4];
      uVar13 = param_1[5];
    }
    lVar17 = 0;
    if (uVar10 != uVar15) {
      lVar17 = ((long)(uVar10 - uVar15) >> 3) * 0x49 + -1;
    }
    uVar13 = uVar13 - lVar16;
    param_1[5] = uVar13;
    uVar13 = lVar17 - (uVar13 + uVar11);
    while (0x91 < uVar13) {
      __ZdlPv(*(undefined8 *)(uVar10 - 8));
      uVar10 = param_1[2] - 8;
      param_1[2] = uVar10;
      lVar17 = 0;
      if (uVar10 - param_1[1] != 0) {
        lVar17 = ((long)(uVar10 - param_1[1]) >> 3) * 0x49 + -1;
      }
      uVar13 = lVar17 - (param_1[5] + param_1[4]);
    }
    return;
  }
  uVar11 = param_1[1];
  uVar10 = param_1[2];
  lVar4 = (long)(uVar10 - uVar11) >> 3;
  lVar17 = 0;
  if (uVar10 != uVar11) {
    lVar17 = lVar4 * 0x49 + -1;
  }
  uVar14 = param_1[4];
  uVar8 = uVar14 + uVar13;
  uVar1 = uVar15 - (lVar17 - uVar8);
  if (uVar15 < lVar17 - uVar8 || uVar1 == 0) goto LAB_1098f0c6c;
  if (uVar10 == uVar11) {
    uVar1 = uVar1 + 1;
  }
  uVar13 = uVar1 / 0x49;
  if (uVar1 % 0x49 != 0) {
    uVar13 = uVar13 + 1;
  }
  uVar11 = uVar13;
  if (uVar14 / 0x49 <= uVar13) {
    uVar11 = uVar14 / 0x49;
  }
  if (uVar14 / 0x49 < uVar13) {
    uVar10 = uVar13 - uVar11;
    if (uVar10 <= (ulong)(((long)(param_1[3] - *param_1) >> 3) - lVar4)) {
      if (uVar10 != 0) {
        do {
          if (param_1[3] == param_1[2]) goto LAB_1098f0bf8;
          uVar2 = 0xff8;
          __Znwm(0xff8);
          func_0x0001098f2338(param_1,uVar2);
          uVar13 = uVar13 - 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        uVar14 = param_1[4];
      }
      goto LAB_1098f0c34;
    }
    plVar7 = (long *)((long)(param_1[3] - *param_1) >> 2);
    if (plVar7 <= (long *)(uVar10 + lVar4)) {
      plVar7 = (long *)(uVar10 + lVar4);
    }
    puStack_70 = param_1;
    if (plVar7 == (long *)0x0) {
      param_2 = 0;
    }
    else {
      FUN_1098f2734();
    }
    lVar17 = uVar11 * -0x49;
    plStack_88 = plVar7 + (lVar4 - uVar11);
    plStack_78 = plVar7 + param_2;
    plStack_90 = plVar7;
    plStack_80 = plStack_88;
    do {
      plVar7 = (long *)0xff8;
      __Znwm();
      FUN_1098f2534(&plStack_90);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (0x48 < uVar14) {
      plVar18 = (long *)param_1[1];
      do {
        plVar19 = plStack_80;
        plVar12 = plStack_88;
        plVar6 = plStack_90;
        if (plStack_80 == plStack_78) {
          if (plStack_88 < plStack_90 || (long)plStack_88 - (long)plStack_90 == 0) {
            plVar5 = (long *)((long)plStack_80 - (long)plStack_90 >> 2);
            if ((long)plStack_80 - (long)plStack_90 == 0) {
              plVar5 = (long *)0x1;
            }
            plVar3 = plVar5;
            FUN_1098f2734();
            plStack_88 = plVar3 + ((ulong)plVar5 >> 2);
            lVar4 = (long)plVar19 - (long)plVar12;
            plVar19 = plStack_88;
            if (lVar4 != 0) {
              plVar19 = (long *)((long)plStack_88 + lVar4);
              plVar5 = plStack_88;
              do {
                *plVar5 = *plVar12;
                lVar4 = lVar4 + -8;
                plVar5 = plVar5 + 1;
                plVar12 = plVar12 + 1;
              } while (lVar4 != 0);
            }
            plStack_78 = plVar3 + (long)plVar7;
            plStack_90 = plVar3;
            plStack_80 = plVar19;
            if (plVar6 != (long *)0x0) {
              __ZdlPv(plVar6);
            }
          }
          else {
            lVar4 = ((long)plStack_88 - (long)plStack_90 >> 3) + 1;
            plVar6 = plStack_88 + -((ulong)(lVar4 - (lVar4 >> 0x3f)) >> 1);
            lVar4 = (long)plStack_80 - (long)plStack_88;
            if (lVar4 != 0) {
              _memmove(plVar6,plStack_88,lVar4);
              plVar7 = plStack_88;
            }
            plVar19 = (long *)((long)plVar6 + lVar4);
            plStack_88 = plVar6;
            plStack_80 = plVar19;
          }
        }
        *plVar19 = *plVar18;
        plStack_80 = plStack_80 + 1;
        plVar18 = (long *)(param_1[1] + 8);
        param_1[1] = (ulong)plVar18;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uVar13 = param_1[2];
    while (uVar13 != param_1[1]) {
      uVar13 = uVar13 - 8;
      FUN_1098f2630(&plStack_90,uVar13);
    }
    uVar13 = *param_1;
    param_1[1] = (ulong)plStack_88;
    *param_1 = (ulong)plStack_90;
    param_1[3] = (ulong)plStack_78;
    param_1[2] = (ulong)plStack_80;
    param_1[4] = param_1[4] + lVar17;
    if (uVar13 != 0) {
      __ZdlPv();
    }
  }
  else {
    param_1[4] = uVar14 + uVar11 * -0x49;
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      uVar2 = *(undefined8 *)param_1[1];
      param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
      func_0x0001098f223c(param_1,uVar2);
    }
  }
LAB_1098f0c60:
  uVar13 = param_1[5];
  uVar11 = param_1[1];
  uVar10 = param_1[2];
  uVar8 = param_1[4] + uVar13;
LAB_1098f0c6c:
  plVar7 = (long *)(uVar11 + (uVar8 / 0x49) * 8);
  if (uVar10 == uVar11) {
    lVar17 = 0;
  }
  else {
    lVar17 = *plVar7 + (uVar8 % 0x49) * 0x38;
  }
  plStack_90 = plVar7;
  plStack_88 = (long *)lVar17;
  FUN_1098f2768(&plStack_90,uVar15);
  plVar19 = plStack_88;
  plVar18 = plStack_90;
  while( true ) {
    if ((long *)lVar17 == plVar19) {
      return;
    }
    plVar6 = plVar19;
    if (plVar7 != plVar18) {
      plVar6 = (long *)(*plVar7 + 0xff8);
    }
    lVar4 = lVar17;
    if ((long *)lVar17 != plVar6) {
      lVar4 = ((((long)plVar6 - lVar17) - 0x38U) / 0x38) * 0x38 + 0x38;
      _bzero(lVar17,lVar4);
      uVar13 = param_1[5];
      lVar4 = lVar4 + lVar17;
    }
    uVar13 = uVar13 + (lVar4 - lVar17 >> 3) * 0x6db6db6db6db6db7;
    param_1[5] = uVar13;
    if (plVar7 == plVar18) break;
    plVar7 = plVar7 + 1;
    lVar17 = *plVar7;
  }
  return;
LAB_1098f0bf8:
  do {
    uVar2 = 0xff8;
    __Znwm(0xff8);
    FUN_1098f2434(param_1,uVar2);
    lVar17 = 0x48;
    if (param_1[2] - param_1[1] != 8) {
      lVar17 = 0x49;
    }
    uVar14 = lVar17 + param_1[4];
    param_1[4] = uVar14;
    uVar10 = uVar10 - 1;
    uVar11 = uVar13;
  } while (uVar10 != 0);
LAB_1098f0c34:
  param_1[4] = uVar14 + uVar11 * -0x49;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    uVar2 = *(undefined8 *)param_1[1];
    param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
    func_0x0001098f223c(param_1,uVar2);
  }
  goto LAB_1098f0c60;
}



/* Entry: 1098f0de0; end: 1098f0f0f;  */

void FUN_1098f0de0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *(long *)(param_2 + 0x38);
  if (*(long *)(param_2 + 0x40) != lVar2) {
    uVar3 = *(ulong *)(param_2 + 0x50);
    lVar4 = *(long *)(lVar2 + (uVar3 / 0x49) * 8) + (uVar3 % 0x49) * 0x38;
    uVar1 = *(long *)(param_2 + 0x58) + uVar3;
    lVar5 = *(long *)(lVar2 + (uVar1 / 0x49) * 8) + (uVar1 % 0x49) * 0x38;
    if (lVar4 != lVar5) {
      plVar6 = (long *)(lVar2 + (uVar3 / 0x49) * 8);
      do {
        uStack_60 = 0;
        uStack_58 = 0;
        lStack_50 = 0;
        lStack_70 = *(long *)(lVar4 + 8) - *(long *)(param_2 + 0x78);
        lStack_68 = *(long *)(lVar4 + 0x10) - *(long *)(param_2 + 0x78);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_60,lVar4 + 0x18);
        FUN_1098f0f10(param_1,&lStack_70);
        if (lStack_50 < 0) {
          __ZdlPv(uStack_60);
        }
        lVar4 = lVar4 + 0x38;
        if (lVar4 - *plVar6 == 0xff8) {
          plVar6 = plVar6 + 1;
          lVar4 = *plVar6;
        }
      } while (lVar4 != lVar5);
    }
  }
  return;
}



/* Entry: 1098f0f10; end: 1098f0f4b;  */

void FUN_1098f0f10(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1098f1dd4();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1;
    FUN_1098f1e38();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 1098f0f4c; end: 1098f119b;  */

void FUN_1098f0f4c(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  uStack_90 = 0;
  lStack_88 = 0;
  uVar10 = param_3[1];
  uVar9 = *param_3;
  uVar3 = param_3[2];
  uStack_98 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_98);
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  puVar8 = *(undefined8 **)(param_1 + 0x40);
  uVar1 = (long)puVar8 - (long)puVar7;
  lVar6 = 0;
  if (uVar1 != 0) {
    lVar6 = ((long)puVar8 - (long)puVar7 >> 3) * 0x49 + -1;
  }
  uVar4 = *(ulong *)(param_1 + 0x50);
  uStack_80 = param_4;
  if (lVar6 != *(long *)(param_1 + 0x58) + uVar4) goto LAB_1098f1090;
  lVar6 = param_1 + 0x30;
  if (uVar4 < 0x49) {
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    uVar4 = (long)puVar7 - (long)*(undefined8 **)(param_1 + 0x30);
    if (uVar1 < uVar4) {
      uVar2 = 0xff8;
      __Znwm(0xff8);
      if (puVar7 == puVar8) {
        FUN_1098f2a14(lVar6,uVar2);
        puVar7 = *(undefined8 **)(param_1 + 0x38);
        goto LAB_1098f0fd0;
      }
      func_0x0001098f2918(lVar6);
    }
    else {
      lVar5 = (long)uVar4 >> 2;
      if (puVar7 == *(undefined8 **)(param_1 + 0x30)) {
        lVar5 = 1;
      }
      lStack_50 = lVar6;
      FUN_1098f2d14();
      lStack_68 = lVar5 + uVar1;
      lStack_58 = lVar5 + param_2 * 8;
      uVar2 = 0xff8;
      lStack_70 = lVar5;
      lStack_60 = lStack_68;
      __Znwm(0xff8);
      FUN_1098f2b14(&lStack_70,uVar2);
      lVar6 = *(long *)(param_1 + 0x40);
      while (lVar6 != *(long *)(param_1 + 0x38)) {
        lVar6 = lVar6 + -8;
        FUN_1098f2c10(&lStack_70,lVar6);
      }
      lVar6 = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x38) = lStack_68;
      *(long *)(param_1 + 0x30) = lStack_70;
      *(long *)(param_1 + 0x48) = lStack_58;
      *(long *)(param_1 + 0x40) = lStack_60;
      if (lVar6 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    *(ulong *)(param_1 + 0x50) = uVar4 - 0x49;
LAB_1098f0fd0:
    uVar2 = *puVar7;
    *(undefined8 **)(param_1 + 0x38) = puVar7 + 1;
    FUN_1098f281c(lVar6,uVar2);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  puVar8 = *(undefined8 **)(param_1 + 0x40);
LAB_1098f1090:
  if (puVar8 == puVar7) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50);
    puVar7 = (undefined8 *)(puVar7[uVar1 / 0x49] + (uVar1 % 0x49) * 0x38);
  }
  puVar7[2] = uVar3;
  puVar7[1] = uVar10;
  *puVar7 = uVar9;
  if (lStack_88 < 0) {
    func_0x000107c3192c(puVar7 + 3,uStack_98,uStack_90);
  }
  else {
    puVar7[5] = lStack_88;
    puVar7[4] = uStack_90;
    puVar7[3] = uStack_98;
  }
  puVar7[6] = uStack_80;
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  if (lStack_88 < 0) {
    __ZdlPv(uStack_98);
  }
  return;
}



/* Entry: 1098f119c; end: 1098f11f7;  */

bool FUN_1098f119c(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar2 = *(char **)(param_1 + 0x80);
  pcVar4 = *(char **)(param_1 + 0x88);
  if (pcVar4 == pcVar2) {
    return false;
  }
  do {
    pcVar1 = pcVar4 + 1;
    *(char **)(param_1 + 0x88) = pcVar1;
    cVar3 = *pcVar4;
    if (cVar3 == '\\') {
      if (pcVar1 != pcVar2) {
        *(char **)(param_1 + 0x88) = pcVar4 + 2;
        pcVar1 = pcVar4 + 2;
      }
    }
    else if (cVar3 == '\'') break;
    pcVar4 = pcVar1;
  } while (pcVar4 != pcVar2);
  return cVar3 == '\'';
}



/* Entry: 1098f11f8; end: 1098f125f;  */

void FUN_1098f11f8(ulong param_1,int param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong *puStack_70;
  int in_stack_ffffffffffffffb8;
  
  uVar13 = *(ulong *)(param_1 + 0x58);
  do {
    uVar17 = param_1;
    func_0x000107c2ad1c(param_1,&stack0xffffffffffffffb8);
    if ((uVar17 & 1) == 0) {
      FUN_1098f1604(param_1 + 0x30,uVar13);
    }
  } while (in_stack_ffffffffffffffb8 != param_2 && in_stack_ffffffffffffffb8 != 0);
  puVar1 = (ulong *)(param_1 + 0x30);
  uVar17 = *(ulong *)(param_1 + 0x58);
  uVar2 = uVar13 - uVar17;
  if (uVar13 < uVar17 || uVar2 == 0) {
    if (uVar13 >= uVar17) {
      return;
    }
    uVar13 = *(ulong *)(param_1 + 0x50);
    lVar8 = *(long *)(param_1 + 0x38);
    lVar16 = *(long *)(param_1 + 0x40);
    plVar9 = (long *)(lVar8 + (uVar13 / 0x49) * 8);
    if (lVar16 == lVar8) {
      plStack_88 = (long *)0x0;
    }
    else {
      plStack_88 = (long *)(*plVar9 + (uVar13 % 0x49) * 0x38);
    }
    plStack_90 = plVar9;
    FUN_1098f2d48(&plStack_90);
    plVar20 = (long *)(lVar8 + ((uVar13 + uVar17) / 0x49) * 8);
    if (lVar16 == lVar8) {
      lVar19 = 0;
    }
    else {
      lVar19 = *plVar20 + ((uVar13 + uVar17) % 0x49) * 0x38;
    }
    if ((long *)lVar19 == plStack_88) {
      return;
    }
    lVar11 = (long)plStack_88 - *plStack_90 >> 3;
    lVar5 = ((long)plVar20 - (long)plStack_90 >> 3) * 0x49 +
            (lVar19 - *plVar20 >> 3) * 0x6db6db6db6db6db7 + lVar11 * -0x6db6db6db6db6db7;
    if (lVar5 < 1) {
      return;
    }
    if (lVar16 == lVar8) {
      lVar12 = 0;
    }
    else {
      lVar12 = *plVar9 + (uVar13 % 0x49) * 0x38;
    }
    if (plStack_88 == (long *)lVar12) {
      lVar11 = 0;
    }
    else {
      lVar11 = ((long)plStack_90 - (long)plVar9 >> 3) * 0x49 + lVar11 * 0x6db6db6db6db6db7 +
               (lVar12 - *plVar9 >> 3) * -0x6db6db6db6db6db7;
    }
    plStack_90 = plVar9;
    plStack_88 = (long *)lVar12;
    FUN_1098f2d48(&plStack_90,lVar11);
    plVar20 = plStack_90;
    plVar9 = plStack_88;
    if (plStack_88 != (long *)lVar19) {
      do {
        if (*(char *)((long)plVar9 + 0x2f) < '\0') {
          __ZdlPv(*(undefined8 *)((long)plVar9 + 0x18));
        }
        plVar9 = (long *)((long)plVar9 + 0x38);
        if ((long)plVar9 - *plVar20 == 0xff8) {
          plVar20 = plVar20 + 1;
          plVar9 = (long *)*plVar20;
        }
      } while (plVar9 != (long *)lVar19);
      lVar8 = *(long *)(param_1 + 0x38);
      lVar16 = *(long *)(param_1 + 0x40);
      uVar13 = *(ulong *)(param_1 + 0x50);
      uVar17 = *(ulong *)(param_1 + 0x58);
    }
    lVar19 = 0;
    if (lVar16 != lVar8) {
      lVar19 = (lVar16 - lVar8 >> 3) * 0x49 + -1;
    }
    lVar5 = uVar17 - lVar5;
    *(long *)(param_1 + 0x58) = lVar5;
    uVar13 = lVar19 - (lVar5 + uVar13);
    while (0x91 < uVar13) {
      __ZdlPv(*(undefined8 *)(lVar16 + -8));
      lVar16 = *(long *)(param_1 + 0x40) + -8;
      lVar19 = lVar16 - *(long *)(param_1 + 0x38);
      *(long *)(param_1 + 0x40) = lVar16;
      lVar8 = 0;
      if (lVar19 != 0) {
        lVar8 = (lVar19 >> 3) * 0x49 + -1;
      }
      uVar13 = lVar8 - (*(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50));
    }
    return;
  }
  lVar16 = *(long *)(param_1 + 0x38);
  lVar19 = *(long *)(param_1 + 0x40);
  lVar5 = lVar19 - lVar16 >> 3;
  lVar8 = 0;
  if (lVar19 != lVar16) {
    lVar8 = lVar5 * 0x49 + -1;
  }
  uVar18 = *(ulong *)(param_1 + 0x50);
  uVar10 = uVar18 + uVar17;
  uVar14 = uVar2 - (lVar8 - uVar10);
  if (uVar2 < lVar8 - uVar10 || uVar14 == 0) goto LAB_1098f1b48;
  if (lVar19 == lVar16) {
    uVar14 = uVar14 + 1;
  }
  uVar17 = uVar14 / 0x49;
  if (uVar14 % 0x49 != 0) {
    uVar17 = uVar17 + 1;
  }
  uVar10 = uVar17;
  if (uVar18 / 0x49 <= uVar17) {
    uVar10 = uVar18 / 0x49;
  }
  if (uVar18 / 0x49 < uVar17) {
    uVar14 = uVar17 - uVar10;
    lVar8 = *(long *)(param_1 + 0x48) - *puVar1;
    if (uVar14 <= (ulong)((lVar8 >> 3) - lVar5)) {
      if (uVar14 != 0) {
        do {
          if (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x40)) goto LAB_1098f1ad4;
          uVar3 = 0xff8;
          __Znwm(0xff8);
          func_0x0001098f2918(puVar1,uVar3);
          uVar17 = uVar17 - 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        uVar18 = *(ulong *)(param_1 + 0x50);
      }
      goto LAB_1098f1b10;
    }
    plVar9 = (long *)(lVar8 >> 2);
    if (plVar9 <= (long *)(uVar14 + lVar5)) {
      plVar9 = (long *)(uVar14 + lVar5);
    }
    puStack_70 = puVar1;
    if (plVar9 == (long *)0x0) {
      uVar13 = 0;
    }
    else {
      FUN_1098f2d14();
    }
    lVar8 = uVar10 * -0x49;
    plStack_88 = plVar9 + (lVar5 - uVar10);
    plStack_78 = plVar9 + uVar13;
    plStack_90 = plVar9;
    plStack_80 = plStack_88;
    do {
      plVar9 = (long *)0xff8;
      __Znwm();
      FUN_1098f2b14(&plStack_90);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    if (0x48 < uVar18) {
      plVar20 = *(long **)(param_1 + 0x38);
      do {
        plVar21 = plStack_80;
        plVar15 = plStack_88;
        plVar7 = plStack_90;
        if (plStack_80 == plStack_78) {
          if (plStack_88 < plStack_90 || (long)plStack_88 - (long)plStack_90 == 0) {
            plVar6 = (long *)((long)plStack_80 - (long)plStack_90 >> 2);
            if ((long)plStack_80 - (long)plStack_90 == 0) {
              plVar6 = (long *)0x1;
            }
            plVar4 = plVar6;
            FUN_1098f2d14();
            plStack_88 = plVar4 + ((ulong)plVar6 >> 2);
            lVar16 = (long)plVar21 - (long)plVar15;
            plVar21 = plStack_88;
            if (lVar16 != 0) {
              plVar21 = (long *)((long)plStack_88 + lVar16);
              plVar6 = plStack_88;
              do {
                *plVar6 = *plVar15;
                lVar16 = lVar16 + -8;
                plVar6 = plVar6 + 1;
                plVar15 = plVar15 + 1;
              } while (lVar16 != 0);
            }
            plStack_78 = plVar4 + (long)plVar9;
            plStack_90 = plVar4;
            plStack_80 = plVar21;
            if (plVar7 != (long *)0x0) {
              __ZdlPv(plVar7);
            }
          }
          else {
            lVar16 = ((long)plStack_88 - (long)plStack_90 >> 3) + 1;
            plVar7 = plStack_88 + -((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
            lVar16 = (long)plStack_80 - (long)plStack_88;
            if (lVar16 != 0) {
              _memmove(plVar7,plStack_88,lVar16);
              plVar9 = plStack_88;
            }
            plVar21 = (long *)((long)plVar7 + lVar16);
            plStack_88 = plVar7;
            plStack_80 = plVar21;
          }
        }
        *plVar21 = *plVar20;
        plStack_80 = plStack_80 + 1;
        plVar20 = (long *)(*(long *)(param_1 + 0x38) + 8);
        *(long **)(param_1 + 0x38) = plVar20;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar16 = *(long *)(param_1 + 0x40);
    while (lVar16 != *(long *)(param_1 + 0x38)) {
      lVar16 = lVar16 + -8;
      FUN_1098f2c10(&plStack_90,lVar16);
    }
    uVar13 = *puVar1;
    *(long **)(param_1 + 0x38) = plStack_88;
    *puVar1 = (ulong)plStack_90;
    *(long **)(param_1 + 0x48) = plStack_78;
    *(long **)(param_1 + 0x40) = plStack_80;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + lVar8;
    if (uVar13 != 0) {
      __ZdlPv();
    }
  }
  else {
    *(ulong *)(param_1 + 0x50) = uVar18 + uVar10 * -0x49;
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar3 = **(undefined8 **)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = *(undefined8 **)(param_1 + 0x38) + 1;
      func_0x0001098f281c(puVar1,uVar3);
    }
  }
LAB_1098f1b3c:
  uVar17 = *(ulong *)(param_1 + 0x58);
  lVar16 = *(long *)(param_1 + 0x38);
  lVar19 = *(long *)(param_1 + 0x40);
  uVar10 = *(long *)(param_1 + 0x50) + uVar17;
LAB_1098f1b48:
  plVar9 = (long *)(lVar16 + (uVar10 / 0x49) * 8);
  if (lVar19 == lVar16) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar9 + (uVar10 % 0x49) * 0x38;
  }
  plStack_90 = plVar9;
  plStack_88 = (long *)lVar8;
  FUN_1098f2d48(&plStack_90,uVar2);
  plVar21 = plStack_88;
  plVar20 = plStack_90;
  while( true ) {
    if ((long *)lVar8 == plVar21) {
      return;
    }
    plVar7 = plVar21;
    if (plVar9 != plVar20) {
      plVar7 = (long *)(*plVar9 + 0xff8);
    }
    lVar16 = lVar8;
    if ((long *)lVar8 != plVar7) {
      lVar16 = ((((long)plVar7 - lVar8) - 0x38U) / 0x38) * 0x38 + 0x38;
      _bzero(lVar8,lVar16);
      uVar17 = *(ulong *)(param_1 + 0x58);
      lVar16 = lVar16 + lVar8;
    }
    uVar17 = uVar17 + (lVar16 - lVar8 >> 3) * 0x6db6db6db6db6db7;
    *(ulong *)(param_1 + 0x58) = uVar17;
    if (plVar9 == plVar20) break;
    plVar9 = plVar9 + 1;
    lVar8 = *plVar9;
  }
  return;
LAB_1098f1ad4:
  do {
    uVar3 = 0xff8;
    __Znwm(0xff8);
    FUN_1098f2a14(puVar1,uVar3);
    lVar8 = 0x48;
    if (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) != 8) {
      lVar8 = 0x49;
    }
    uVar18 = lVar8 + *(long *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x50) = uVar18;
    uVar14 = uVar14 - 1;
    uVar10 = uVar17;
  } while (uVar14 != 0);
LAB_1098f1b10:
  *(ulong *)(param_1 + 0x50) = uVar18 + uVar10 * -0x49;
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    uVar3 = **(undefined8 **)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = *(undefined8 **)(param_1 + 0x38) + 1;
    func_0x0001098f281c(puVar1,uVar3);
  }
  goto LAB_1098f1b3c;
}



/* Entry: 1098f1260; end: 1098f14cb;  */

/* WARNING: Removing unreachable block (ram,0x0001098f142c) */

bool FUN_1098f1260(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined **appuStack_170 [2];
  undefined **ppuStack_160;
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  char cStack_109;
  undefined **appuStack_f8 [19];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  uStack_48 = 0;
  FUN_1092b29f8(auStack_60,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8));
  FUN_1093f2800(appuStack_170,auStack_60,8);
  pppuVar2 = appuStack_170;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERd(pppuVar2,&uStack_48);
  uVar1 = *(uint *)((long)pppuVar2 + (long)((*pppuVar2)[-3] + 0x20)) & 5;
  if (uVar1 == 0) {
    uStack_1c8 = CONCAT62(uStack_1c8._2_6_,3);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_1c0 = 0;
    uStack_1d0 = uStack_48;
    func_0x000107c2ad6c(&uStack_1d0,param_3);
    func_0x000107c2ad70(&uStack_1d0);
  }
  else {
    FUN_1092b29f8(auStack_1a8,*(long *)(param_2 + 8),*(long *)(param_2 + 0x10),
                  *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8));
    puVar3 = auStack_1a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&DAT_10f638984,1);
    uStack_188 = puVar3[1];
    uStack_190 = *puVar3;
    lStack_180 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_190;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f587a19,0x12);
    uStack_1c8 = puVar3[1];
    uStack_1d0 = *puVar3;
    lStack_1c0 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_1098f0f4c(param_1,&uStack_1d0,param_2,0);
    if (lStack_1c0 < 0) {
      __ZdlPv(uStack_1d0);
    }
    if (lStack_180 < 0) {
      __ZdlPv(uStack_190);
    }
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
  }
  appuStack_f8[0] = &PTR_DAT_1108df740;
  appuStack_170[0] = &PTR_DAT_1108df718;
  ppuStack_160 = &PTR_DAT_11088d7b0;
  if (cStack_109 < '\0') {
    __ZdlPv(uStack_120);
  }
  ppuStack_160 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_158);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_170,&PTR_PTR_1108df758);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f8);
  return uVar1 == 0;
}



/* Entry: 1098f14cc; end: 1098f1603;  */

undefined8
FUN_1098f14cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,int *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  if (param_4 - (long)*param_3 < 4) {
    func_0x000107c31940(auStack_48,&UNK_10f587afe);
    FUN_1098f0f4c(param_1,auStack_48,param_2,*param_3);
LAB_1098f1520:
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    uVar2 = 0;
  }
  else {
    iVar5 = 0;
    iVar4 = 4;
    pbVar3 = (byte *)*param_3;
    do {
      *param_3 = pbVar3 + 1;
      bVar1 = *pbVar3;
      iVar5 = iVar5 * 0x10;
      uVar6 = (uint)bVar1;
      if (bVar1 - 0x30 < 10) {
        iVar5 = uVar6 + iVar5 + -0x30;
      }
      else if (bVar1 - 0x61 < 6) {
        iVar5 = iVar5 + uVar6 + -0x57;
      }
      else {
        if (5 < uVar6 - 0x41) {
          func_0x000107c31940(auStack_48,&UNK_10f587b3b);
          FUN_1098f0f4c(param_1,auStack_48,param_2,*param_3);
          goto LAB_1098f1520;
        }
        iVar5 = iVar5 + uVar6 + -0x37;
      }
      iVar4 = iVar4 + -1;
      pbVar3 = pbVar3 + 1;
    } while (iVar4 != 0);
    *param_5 = iVar5;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1098f1604; end: 1098f1cbb;  */

void FUN_1098f1604(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong *puStack_70;
  
  uVar13 = param_1[5];
  uVar15 = param_2 - uVar13;
  if (param_2 < uVar13 || uVar15 == 0) {
    if (param_2 >= uVar13) {
      return;
    }
    uVar11 = param_1[4];
    uVar15 = param_1[1];
    uVar10 = param_1[2];
    plVar7 = (long *)(uVar15 + (uVar11 / 0x49) * 8);
    if (uVar10 == uVar15) {
      plStack_88 = (long *)0x0;
    }
    else {
      plStack_88 = (long *)(*plVar7 + (uVar11 % 0x49) * 0x38);
    }
    plStack_90 = plVar7;
    FUN_1098f2d48(&plStack_90);
    plVar18 = (long *)(uVar15 + ((uVar11 + uVar13) / 0x49) * 8);
    if (uVar10 == uVar15) {
      lVar17 = 0;
    }
    else {
      lVar17 = *plVar18 + ((uVar11 + uVar13) % 0x49) * 0x38;
    }
    if ((long *)lVar17 == plStack_88) {
      return;
    }
    lVar4 = (long)plStack_88 - *plStack_90 >> 3;
    lVar16 = ((long)plVar18 - (long)plStack_90 >> 3) * 0x49 +
             (lVar17 - *plVar18 >> 3) * 0x6db6db6db6db6db7 + lVar4 * -0x6db6db6db6db6db7;
    if (lVar16 < 1) {
      return;
    }
    if (uVar10 == uVar15) {
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar7 + (uVar11 % 0x49) * 0x38;
    }
    if (plStack_88 == (long *)lVar9) {
      lVar4 = 0;
    }
    else {
      lVar4 = ((long)plStack_90 - (long)plVar7 >> 3) * 0x49 + lVar4 * 0x6db6db6db6db6db7 +
              (lVar9 - *plVar7 >> 3) * -0x6db6db6db6db6db7;
    }
    plStack_90 = plVar7;
    plStack_88 = (long *)lVar9;
    FUN_1098f2d48(&plStack_90,lVar4);
    plVar18 = plStack_90;
    plVar7 = plStack_88;
    if (plStack_88 != (long *)lVar17) {
      do {
        if (*(char *)((long)plVar7 + 0x2f) < '\0') {
          __ZdlPv(*(undefined8 *)((long)plVar7 + 0x18));
        }
        plVar7 = (long *)((long)plVar7 + 0x38);
        if ((long)plVar7 - *plVar18 == 0xff8) {
          plVar18 = plVar18 + 1;
          plVar7 = (long *)*plVar18;
        }
      } while (plVar7 != (long *)lVar17);
      uVar15 = param_1[1];
      uVar10 = param_1[2];
      uVar11 = param_1[4];
      uVar13 = param_1[5];
    }
    lVar17 = 0;
    if (uVar10 != uVar15) {
      lVar17 = ((long)(uVar10 - uVar15) >> 3) * 0x49 + -1;
    }
    uVar13 = uVar13 - lVar16;
    param_1[5] = uVar13;
    uVar13 = lVar17 - (uVar13 + uVar11);
    while (0x91 < uVar13) {
      __ZdlPv(*(undefined8 *)(uVar10 - 8));
      uVar10 = param_1[2] - 8;
      param_1[2] = uVar10;
      lVar17 = 0;
      if (uVar10 - param_1[1] != 0) {
        lVar17 = ((long)(uVar10 - param_1[1]) >> 3) * 0x49 + -1;
      }
      uVar13 = lVar17 - (param_1[5] + param_1[4]);
    }
    return;
  }
  uVar11 = param_1[1];
  uVar10 = param_1[2];
  lVar4 = (long)(uVar10 - uVar11) >> 3;
  lVar17 = 0;
  if (uVar10 != uVar11) {
    lVar17 = lVar4 * 0x49 + -1;
  }
  uVar14 = param_1[4];
  uVar8 = uVar14 + uVar13;
  uVar1 = uVar15 - (lVar17 - uVar8);
  if (uVar15 < lVar17 - uVar8 || uVar1 == 0) goto LAB_1098f1b48;
  if (uVar10 == uVar11) {
    uVar1 = uVar1 + 1;
  }
  uVar13 = uVar1 / 0x49;
  if (uVar1 % 0x49 != 0) {
    uVar13 = uVar13 + 1;
  }
  uVar11 = uVar13;
  if (uVar14 / 0x49 <= uVar13) {
    uVar11 = uVar14 / 0x49;
  }
  if (uVar14 / 0x49 < uVar13) {
    uVar10 = uVar13 - uVar11;
    if (uVar10 <= (ulong)(((long)(param_1[3] - *param_1) >> 3) - lVar4)) {
      if (uVar10 != 0) {
        do {
          if (param_1[3] == param_1[2]) goto LAB_1098f1ad4;
          uVar2 = 0xff8;
          __Znwm(0xff8);
          func_0x0001098f2918(param_1,uVar2);
          uVar13 = uVar13 - 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        uVar14 = param_1[4];
      }
      goto LAB_1098f1b10;
    }
    plVar7 = (long *)((long)(param_1[3] - *param_1) >> 2);
    if (plVar7 <= (long *)(uVar10 + lVar4)) {
      plVar7 = (long *)(uVar10 + lVar4);
    }
    puStack_70 = param_1;
    if (plVar7 == (long *)0x0) {
      param_2 = 0;
    }
    else {
      FUN_1098f2d14();
    }
    lVar17 = uVar11 * -0x49;
    plStack_88 = plVar7 + (lVar4 - uVar11);
    plStack_78 = plVar7 + param_2;
    plStack_90 = plVar7;
    plStack_80 = plStack_88;
    do {
      plVar7 = (long *)0xff8;
      __Znwm();
      FUN_1098f2b14(&plStack_90);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (0x48 < uVar14) {
      plVar18 = (long *)param_1[1];
      do {
        plVar19 = plStack_80;
        plVar12 = plStack_88;
        plVar6 = plStack_90;
        if (plStack_80 == plStack_78) {
          if (plStack_88 < plStack_90 || (long)plStack_88 - (long)plStack_90 == 0) {
            plVar5 = (long *)((long)plStack_80 - (long)plStack_90 >> 2);
            if ((long)plStack_80 - (long)plStack_90 == 0) {
              plVar5 = (long *)0x1;
            }
            plVar3 = plVar5;
            FUN_1098f2d14();
            plStack_88 = plVar3 + ((ulong)plVar5 >> 2);
            lVar4 = (long)plVar19 - (long)plVar12;
            plVar19 = plStack_88;
            if (lVar4 != 0) {
              plVar19 = (long *)((long)plStack_88 + lVar4);
              plVar5 = plStack_88;
              do {
                *plVar5 = *plVar12;
                lVar4 = lVar4 + -8;
                plVar5 = plVar5 + 1;
                plVar12 = plVar12 + 1;
              } while (lVar4 != 0);
            }
            plStack_78 = plVar3 + (long)plVar7;
            plStack_90 = plVar3;
            plStack_80 = plVar19;
            if (plVar6 != (long *)0x0) {
              __ZdlPv(plVar6);
            }
          }
          else {
            lVar4 = ((long)plStack_88 - (long)plStack_90 >> 3) + 1;
            plVar6 = plStack_88 + -((ulong)(lVar4 - (lVar4 >> 0x3f)) >> 1);
            lVar4 = (long)plStack_80 - (long)plStack_88;
            if (lVar4 != 0) {
              _memmove(plVar6,plStack_88,lVar4);
              plVar7 = plStack_88;
            }
            plVar19 = (long *)((long)plVar6 + lVar4);
            plStack_88 = plVar6;
            plStack_80 = plVar19;
          }
        }
        *plVar19 = *plVar18;
        plStack_80 = plStack_80 + 1;
        plVar18 = (long *)(param_1[1] + 8);
        param_1[1] = (ulong)plVar18;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uVar13 = param_1[2];
    while (uVar13 != param_1[1]) {
      uVar13 = uVar13 - 8;
      FUN_1098f2c10(&plStack_90,uVar13);
    }
    uVar13 = *param_1;
    param_1[1] = (ulong)plStack_88;
    *param_1 = (ulong)plStack_90;
    param_1[3] = (ulong)plStack_78;
    param_1[2] = (ulong)plStack_80;
    param_1[4] = param_1[4] + lVar17;
    if (uVar13 != 0) {
      __ZdlPv();
    }
  }
  else {
    param_1[4] = uVar14 + uVar11 * -0x49;
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      uVar2 = *(undefined8 *)param_1[1];
      param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
      func_0x0001098f281c(param_1,uVar2);
    }
  }
LAB_1098f1b3c:
  uVar13 = param_1[5];
  uVar11 = param_1[1];
  uVar10 = param_1[2];
  uVar8 = param_1[4] + uVar13;
LAB_1098f1b48:
  plVar7 = (long *)(uVar11 + (uVar8 / 0x49) * 8);
  if (uVar10 == uVar11) {
    lVar17 = 0;
  }
  else {
    lVar17 = *plVar7 + (uVar8 % 0x49) * 0x38;
  }
  plStack_90 = plVar7;
  plStack_88 = (long *)lVar17;
  FUN_1098f2d48(&plStack_90,uVar15);
  plVar19 = plStack_88;
  plVar18 = plStack_90;
  while( true ) {
    if ((long *)lVar17 == plVar19) {
      return;
    }
    plVar6 = plVar19;
    if (plVar7 != plVar18) {
      plVar6 = (long *)(*plVar7 + 0xff8);
    }
    lVar4 = lVar17;
    if ((long *)lVar17 != plVar6) {
      lVar4 = ((((long)plVar6 - lVar17) - 0x38U) / 0x38) * 0x38 + 0x38;
      _bzero(lVar17,lVar4);
      uVar13 = param_1[5];
      lVar4 = lVar4 + lVar17;
    }
    uVar13 = uVar13 + (lVar4 - lVar17 >> 3) * 0x6db6db6db6db6db7;
    param_1[5] = uVar13;
    if (plVar7 == plVar18) break;
    plVar7 = plVar7 + 1;
    lVar17 = *plVar7;
  }
  return;
LAB_1098f1ad4:
  do {
    uVar2 = 0xff8;
    __Znwm(0xff8);
    FUN_1098f2a14(param_1,uVar2);
    lVar17 = 0x48;
    if (param_1[2] - param_1[1] != 8) {
      lVar17 = 0x49;
    }
    uVar14 = lVar17 + param_1[4];
    param_1[4] = uVar14;
    uVar10 = uVar10 - 1;
    uVar11 = uVar13;
  } while (uVar10 != 0);
LAB_1098f1b10:
  param_1[4] = uVar14 + uVar11 * -0x49;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    uVar2 = *(undefined8 *)param_1[1];
    param_1[1] = (ulong)((undefined8 *)param_1[1] + 1);
    func_0x0001098f281c(param_1,uVar2);
  }
  goto LAB_1098f1b3c;
}



/* Entry: 1098f1cbc; end: 1098f1dd3;  */

void FUN_1098f1cbc(undefined8 *param_1,long param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auStack_5b [51];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = *(char **)(param_2 + 0x78);
  if (pcVar2 < param_3) {
    do {
      if (pcVar2 == *(char **)(param_2 + 0x80)) break;
      pcVar3 = pcVar2 + 1;
      pcVar1 = pcVar3;
      if (((*pcVar2 != '\n') && (*pcVar2 == '\r')) && (pcVar1 = pcVar2 + 2, pcVar2[1] != '\n')) {
        pcVar1 = pcVar3;
      }
      pcVar2 = pcVar1;
    } while (pcVar2 < param_3);
  }
  _snprintf(auStack_5b,0x33,&UNK_10f587b7e);
  func_0x000107c31940(param_1,auStack_5b);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    *param_1 = &PTR_DAT_110b1c938;
    func_0x000107c2ad70(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1098f1dd4; end: 1098f1e37;  */

void FUN_1098f1dd4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(puVar1 + 2,param_2[2],param_2[3]);
  }
  else {
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    puVar1[4] = param_2[4];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1 + 5;
  return;
}



/* Entry: 1098f1e38; end: 1098f1fe3;  */

/* WARNING: Removing unreachable block (ram,0x0001098f2024) */

long * FUN_1098f1e38(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  puVar8 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar11 = (long)puVar9 - (long)puVar8;
  uVar4 = (lVar11 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar4) {
    FUN_1098f1fe4();
LAB_1098f1fcc:
    func_0x000104c4f740();
    FUN_1098f1ff8(&puStack_78);
    __Unwind_Resume(param_1);
    plVar3 = (long *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    lVar11 = plVar3[2];
    while (lVar11 != plVar3[1]) {
      lVar11 = lVar11 + -0x28;
      plVar3[2] = lVar11;
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    return plVar3;
  }
  lVar6 = param_1[2] - (long)puVar8 >> 3;
  uVar7 = lVar6 * -0x6666666666666666;
  if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
    uVar7 = uVar4;
  }
  if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
    uVar7 = 0x666666666666666;
  }
  plStack_58 = param_1;
  if (uVar7 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (0x666666666666666 < uVar7) goto LAB_1098f1fcc;
    puVar2 = (undefined8 *)(uVar7 * 0x28);
    __Znwm();
  }
  puVar1 = (undefined8 *)((long)puVar2 + lVar11);
  puVar10 = puVar2 + uVar7 * 5;
  uVar12 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar12;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  puStack_68 = puVar1;
  puStack_60 = puVar10;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(puVar1 + 2,param_2[2],param_2[3]);
    puVar8 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)param_1[1];
    lVar11 = (long)puVar9 - (long)puVar8;
  }
  else {
    uVar12 = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar12;
    puVar1[4] = param_2[4];
  }
  puVar2 = puVar8;
  puVar5 = (undefined8 *)((long)puVar1 - lVar11);
  if (puVar8 != puVar9) {
    do {
      uVar12 = *puVar2;
      puVar5[1] = puVar2[1];
      *puVar5 = uVar12;
      uVar13 = puVar2[3];
      uVar12 = puVar2[2];
      puVar5[4] = puVar2[4];
      puVar5[3] = uVar13;
      puVar5[2] = uVar12;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 5;
      puVar5 = puVar5 + 5;
    } while (puVar2 != puVar9);
    do {
      if (*(char *)((long)puVar8 + 0x27) < '\0') {
        __ZdlPv(puVar8[2]);
      }
      puVar8 = puVar8 + 5;
    } while (puVar8 != puVar9);
    puVar8 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar1 - lVar11;
  param_1[1] = (long)(puVar1 + 5);
  puStack_60 = (undefined8 *)param_1[2];
  param_1[2] = (long)puVar10;
  puStack_78 = puVar8;
  puStack_70 = puVar8;
  puStack_68 = puVar8;
  FUN_1098f1ff8(&puStack_78);
  return puVar1 + 5;
}



/* Entry: 1098f1fe4; end: 1098f1ff7;  */

/* WARNING: Removing unreachable block (ram,0x0001098f2024) */

long * FUN_1098f1fe4(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x28;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 1098f1ff8; end: 1098f2097;  */

/* WARNING: Removing unreachable block (ram,0x0001098f2024) */

long * FUN_1098f1ff8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x28;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098f2098; end: 1098f20e3;  */

/* WARNING: Removing unreachable block (ram,0x0001098f20c0) */

void FUN_1098f2098(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 1098f20e4; end: 1098f213f;  */

undefined8 * FUN_1098f20e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1c988;
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    __ZdlPv(param_1[0xe]);
  }
  func_0x000107c2ad34(param_1 + 8);
  func_0x000107c2ad38(param_1 + 2);
  return param_1;
}



/* Entry: 1098f2140; end: 1098f2433;  */

void FUN_1098f2140(ulong *param_1,undefined8 param_2)

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
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      func_0x000107c2ad4c();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
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
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1098f2434; end: 1098f2533;  */

void FUN_1098f2434(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_1098f2734();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
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



/* Entry: 1098f2534; end: 1098f262f;  */

void FUN_1098f2534(ulong *param_1,undefined8 param_2)

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
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_1098f2734();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
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
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1098f2630; end: 1098f2733;  */

void FUN_1098f2630(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_1098f2734();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
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



/* Entry: 1098f2734; end: 1098f2767;  */

void FUN_1098f2734(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  if (param_2 != 0) {
    plVar1 = (long *)*param_1;
    uVar3 = param_2 + (param_1[1] - *plVar1 >> 3) * 0x6db6db6db6db6db7;
    if ((long)uVar3 < 1) {
      uVar4 = (0x48 - uVar3) / 0x49;
      *param_1 = (long)(plVar1 + -uVar4);
      lVar2 = plVar1[-uVar4] + (uVar4 * 0x49 - (0x48 - uVar3)) * 0x38 + 0xfc0;
    }
    else {
      *param_1 = (long)(plVar1 + uVar3 / 0x49);
      lVar2 = plVar1[uVar3 / 0x49] + (uVar3 % 0x49) * 0x38;
    }
    param_1[1] = lVar2;
  }
  return;
}



/* Entry: 1098f2768; end: 1098f281b;  */

void FUN_1098f2768(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    plVar1 = (long *)*param_1;
    uVar3 = param_2 + (param_1[1] - *plVar1 >> 3) * 0x6db6db6db6db6db7;
    if ((long)uVar3 < 1) {
      uVar4 = (0x48 - uVar3) / 0x49;
      *param_1 = (long)(plVar1 + -uVar4);
      lVar2 = plVar1[-uVar4] + (uVar4 * 0x49 - (0x48 - uVar3)) * 0x38 + 0xfc0;
    }
    else {
      *param_1 = (long)(plVar1 + uVar3 / 0x49);
      lVar2 = plVar1[uVar3 / 0x49] + (uVar3 % 0x49) * 0x38;
    }
    param_1[1] = lVar2;
  }
  return;
}



/* Entry: 1098f281c; end: 1098f2a13;  */

void FUN_1098f281c(ulong *param_1,undefined8 param_2)

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
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_1098f2d14();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
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
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1098f2a14; end: 1098f2b13;  */

void FUN_1098f2a14(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_1098f2d14();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
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



/* Entry: 1098f2b14; end: 1098f2c0f;  */

void FUN_1098f2b14(ulong *param_1,undefined8 param_2)

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
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_1098f2d14();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
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
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1098f2c10; end: 1098f2d13;  */

void FUN_1098f2c10(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar2 = param_1[2];
    uVar1 = param_1[3];
    if (uVar2 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar2) >> 3) + 1) / 2;
      puVar6 = puVar8 + lVar9;
      if (uVar2 - (long)puVar8 != 0) {
        _memmove(puVar6,puVar8,uVar2 - (long)puVar8);
        uVar2 = param_1[2];
      }
      param_1[1] = (long)puVar6;
      param_1[2] = uVar2 + lVar9 * 8;
      puVar8 = puVar6;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      FUN_1098f2d14();
      puVar6 = (undefined8 *)(lVar9 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar4 = puVar6;
      if (lVar7 != 0) {
        puVar4 = (undefined8 *)((long)puVar6 + lVar7);
        puVar3 = (undefined8 *)param_1[1];
        puVar5 = puVar6;
        do {
          *puVar5 = *puVar3;
          lVar7 = lVar7 + -8;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar9;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar4;
      param_1[3] = lVar9 + (long)puVar8 * 8;
      puVar8 = puVar6;
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



/* Entry: 1098f2d14; end: 1098f2d47;  */

void FUN_1098f2d14(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  if (param_2 != 0) {
    plVar1 = (long *)*param_1;
    uVar3 = param_2 + (param_1[1] - *plVar1 >> 3) * 0x6db6db6db6db6db7;
    if ((long)uVar3 < 1) {
      uVar4 = (0x48 - uVar3) / 0x49;
      *param_1 = (long)(plVar1 + -uVar4);
      lVar2 = plVar1[-uVar4] + (uVar4 * 0x49 - (0x48 - uVar3)) * 0x38 + 0xfc0;
    }
    else {
      *param_1 = (long)(plVar1 + uVar3 / 0x49);
      lVar2 = plVar1[uVar3 / 0x49] + (uVar3 % 0x49) * 0x38;
    }
    param_1[1] = lVar2;
  }
  return;
}



/* Entry: 1098f2d48; end: 1098f2ea7;  */

void FUN_1098f2d48(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    plVar1 = (long *)*param_1;
    uVar3 = param_2 + (param_1[1] - *plVar1 >> 3) * 0x6db6db6db6db6db7;
    if ((long)uVar3 < 1) {
      uVar4 = (0x48 - uVar3) / 0x49;
      *param_1 = (long)(plVar1 + -uVar4);
      lVar2 = plVar1[-uVar4] + (uVar4 * 0x49 - (0x48 - uVar3)) * 0x38 + 0xfc0;
    }
    else {
      *param_1 = (long)(plVar1 + uVar3 / 0x49);
      lVar2 = plVar1[uVar3 / 0x49] + (uVar3 % 0x49) * 0x38;
    }
    param_1[1] = lVar2;
  }
  return;
}



/* Entry: 1098f2ea8; end: 1098f2ef7;  */

void FUN_1098f2ea8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  ___cxa_allocate_exception();
  FUN_1098f2fd8();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110b1ca58,0x1098f3050);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  *puVar2 = &PTR_FUN_110b1c9d8;
  if (*(char *)((long)puVar2 + 0x1f) < '\0') {
    __ZdlPv(puVar2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(puVar2);
  return;
}



/* Entry: 1098f2ef8; end: 1098f2f33;  */

void FUN_1098f2ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1c9d8;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1098f2f34; end: 1098f2f37;  */

void FUN_1098f2f34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1c9d8;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1098f2f38; end: 1098f2f4b;  */

void FUN_1098f2f38(void)

{
  FUN_1098f2ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098f2f4c; end: 1098f2f67;  */

undefined8 * FUN_1098f2f4c(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return (undefined8 *)(param_1 + 8);
  }
  return *(undefined8 **)(param_1 + 8);
}



/* Entry: 1098f2f68; end: 1098f2fd7;  */

undefined8 * FUN_1098f2f68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
  }
  param_1[2] = uStack_38;
  param_1[1] = uStack_40;
  param_1[3] = uStack_30;
  *param_1 = &PTR_DAT_110b1ca00;
  return param_1;
}



/* Entry: 1098f2fd8; end: 1098f2fdb;  */

undefined8 * FUN_1098f2fd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
  }
  param_1[2] = uStack_38;
  param_1[1] = uStack_40;
  param_1[3] = uStack_30;
  *param_1 = &PTR_DAT_110b1ca00;
  return param_1;
}



/* Entry: 1098f2fdc; end: 1098f304b;  */

undefined8 * FUN_1098f2fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
  }
  param_1[2] = uStack_38;
  param_1[1] = uStack_40;
  param_1[3] = uStack_30;
  *param_1 = &PTR_FUN_110b1ca28;
  return param_1;
}



/* Entry: 1098f304c; end: 1098f3053;  */

undefined8 * FUN_1098f304c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
  }
  param_1[2] = uStack_38;
  param_1[1] = uStack_40;
  param_1[3] = uStack_30;
  *param_1 = &PTR_FUN_110b1ca28;
  return param_1;
}



/* Entry: 1098f3054; end: 1098f30a3;  */

void FUN_1098f3054(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  ___cxa_allocate_exception();
  FUN_1098f304c();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110b1ca70,FUN_1098f30a4);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  *puVar2 = &PTR_FUN_110b1c9d8;
  if (*(char *)((long)puVar2 + 0x1f) < '\0') {
    __ZdlPv(puVar2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(puVar2);
  return;
}



/* Entry: 1098f30a4; end: 1098f30a7;  */

void FUN_1098f30a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1c9d8;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1098f30a8; end: 1098f315f;  */

undefined8 * FUN_1098f30a8(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | (ushort)param_2 & 0xff;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 < 4) {
    if ((param_2 - 1U < 2) || (param_2 == 3)) {
      *param_1 = 0;
    }
  }
  else if (param_2 - 6U < 2) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = puVar1 + 1;
    *param_1 = puVar1;
  }
  else if (param_2 == 4) {
    *param_1 = &UNK_10e00b816;
  }
  else if (param_2 == 5) {
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}



/* Entry: 1098f3160; end: 1098f325b;  */

long * FUN_1098f3160(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [263];
  undefined1 uStack_31;
  
  param_1[2] = 0;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfe00 | 0x104;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 != 0) {
    lVar2 = param_2;
    _strlen(param_2);
    func_0x000107c34efc(param_2,lVar2);
    *param_1 = param_2;
    return param_1;
  }
  FUN_10926db08(auStack_140);
  FUN_1092b4db8(auStack_140,&UNK_10f587cab,0x26);
  FUN_10926dc5c(auStack_158,auStack_138,&uStack_31);
  FUN_1098f3054(auStack_158);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098f320c);
  (*pcVar1)();
}



/* Entry: 1098f325c; end: 1098f330f;  */

long FUN_1098f325c(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [263];
  undefined1 uStack_21;
  
  if ((*(ushort *)(param_1 + 1) & 0xff) == 4) {
    lVar1 = 0;
    if (*param_1 != 0) {
      lVar1 = *param_1 + ((ulong)(*(ushort *)(param_1 + 1) >> 6) & 4);
    }
    return lVar1;
  }
  FUN_10926db08(auStack_130);
  FUN_1092b4db8(auStack_130,&UNK_10f587cd2,0x31);
  FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
  FUN_1098f3054(auStack_148);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1098f32e0);
  (*pcVar2)();
}



/* Entry: 1098f3310; end: 1098f3383;  */

undefined8 FUN_1098f3310(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  
  if ((*(ushort *)(param_1 + 1) & 0xff) == 4) {
    puVar3 = (uint *)*param_1;
    if (puVar3 == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      if ((*(ushort *)(param_1 + 1) >> 8 & 1) == 0) {
        puVar1 = puVar3;
        _strlen();
        puVar4 = puVar3;
      }
      else {
        puVar4 = puVar3 + 1;
        puVar1 = (uint *)(ulong)*puVar3;
      }
      *param_2 = puVar4;
      *param_3 = (long)puVar4 + ((ulong)puVar1 & 0xffffffff);
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 1098f3384; end: 1098f3607;  */

/* WARNING: Possible PIC construction at 0x0001098f3410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001098f4a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098f4a68) */
/* WARNING: Removing unreachable block (ram,0x0001098f4a8c) */
/* WARNING: Removing unreachable block (ram,0x0001098f4a80) */
/* WARNING: Removing unreachable block (ram,0x0001098f3414) */
/* WARNING: Removing unreachable block (ram,0x0001098f342c) */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */
/* WARNING: Removing unreachable block (ram,0x0001098f4b40) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c38) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c48) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c4c) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c58) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c68) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c70) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c94) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c80) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c8c) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c98) */
/* WARNING: Removing unreachable block (ram,0x0001098f4ca8) */
/* WARNING: Type propagation algorithm not settling */

uint * FUN_1098f3384(uint *param_1,double *param_2)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  double dVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  uint *unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_160 [31];
  undefined1 uStack_141;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [15];
  undefined1 auStack_129 [137];
  uint *puStack_a0;
  uint *puStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long alStack_80 [3];
  long lStack_68;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar13 = &stack0xfffffffffffffff0;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(ushort *)(param_2 + 1);
  uVar1 = uVar3 & 0xff;
  if (2 < uVar1) {
    if (uVar1 == 3) {
      dVar8 = *param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        if ((ulong)ABS(dVar8) < 0x7ff0000000000000) {
          puVar10 = (undefined8 *)0x28;
          __Znwm();
          *(undefined8 **)param_1 = puVar10;
          param_1[4] = 0x28;
          param_1[5] = 0x80000000;
          param_1[2] = 0x24;
          param_1[3] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          *(undefined8 *)((long)puVar10 + 0x1d) = 0;
          while( true ) {
            uVar14 = *(ulong *)(param_1 + 2);
            puVar12 = *(uint **)param_1;
            if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
              uVar14 = (ulong)*(byte *)((long)param_1 + 0x17);
              puVar12 = param_1;
            }
            puStack_50 = (undefined1 *)0x11;
            puStack_48 = (undefined *)dVar8;
            _snprintf(puVar12,uVar14,&DAT_10f5882e8);
            iVar6 = (int)puVar12;
            uVar14 = *(ulong *)(param_1 + 2);
            if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
              uVar14 = (ulong)*(byte *)((long)param_1 + 0x17);
            }
            if ((ulong)(long)iVar6 < uVar14) break;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (param_1,(long)iVar6 + 1,0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                    (param_1,(long)iVar6,0);
          bVar19 = *(byte *)((long)param_1 + 0x17);
          uVar17 = (ulong)bVar19;
          puVar9 = *(uint **)param_1;
          uVar18 = *(ulong *)(param_1 + 2);
          uVar14 = uVar18;
          puVar12 = puVar9;
          if (-1 < (char)bVar19) {
            uVar14 = uVar17;
            puVar12 = param_1;
          }
          puVar11 = puVar12;
          if (uVar14 != 0) {
            puVar11 = (uint *)((long)puVar12 + uVar14);
            do {
              if ((char)*puVar12 == ',') {
                *(undefined1 *)puVar12 = 0x2e;
              }
              puVar12 = (uint *)((long)puVar12 + 1);
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
            bVar19 = *(byte *)((long)param_1 + 0x17);
            uVar17 = (ulong)bVar19;
            puVar9 = *(uint **)param_1;
            uVar18 = *(ulong *)(param_1 + 2);
          }
          lVar16 = (long)puVar9 + uVar18;
          if (-1 < (char)bVar19) {
            puVar9 = param_1;
            lVar16 = (long)param_1 + uVar17;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
                    (param_1,(long)puVar11 - (long)puVar9,lVar16 - (long)puVar11);
          puVar12 = param_1;
          __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x2e,0);
          if ((puVar12 == (uint *)0xffffffffffffffff) &&
             (puVar12 = param_1,
             __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm
                       (param_1,0x65,0), puVar12 == (uint *)0xffffffffffffffff)) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1,&DAT_10f36c659,2);
            puVar12 = param_1;
          }
          return puVar12;
        }
        lVar16 = 2;
        if (dVar8 < 0.0) {
          lVar16 = 1;
        }
        lVar2 = 0;
        if (!NAN(dVar8)) {
          lVar2 = lVar16;
        }
        puVar12 = (uint *)(&PTR_s_null_110b1cb40)[lVar2];
        goto code_r0x00010002d4d8;
      }
    }
    else if (uVar1 == 4) {
      puVar12 = (uint *)*param_2;
      if (puVar12 == (uint *)0x0) goto LAB_1098f34dc;
      if ((uVar3 >> 8 & 1) == 0) {
        puVar9 = puVar12;
        _strlen();
        puVar11 = puVar12;
      }
      else {
        puVar11 = puVar12 + 1;
        puVar9 = (uint *)(ulong)*puVar12;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        uVar14 = (ulong)puVar9 & 0xffffffff;
        if (0x7ffffffffffffff7 < uVar14) {
          func_0x000104c4f6b8();
          puVar7 = (uint *)alStack_80;
          puStack_48 = &UNK_104c54d28;
          lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar12 = param_1;
          puVar9 = puVar11;
          puStack_50 = &stack0xfffffffffffffff0;
          if (puVar11 != param_1) {
            puVar12 = *(uint **)(param_1 + 6);
            puVar15 = *(uint **)(puVar11 + 6);
            unaff_x19 = puVar11;
            unaff_x20 = param_1;
            if (puVar12 == param_1) {
              if (puVar15 == puVar11) {
                (**(code **)(*(long *)puVar12 + 0x18))(puVar12,alStack_80);
                (**(code **)(**(long **)(param_1 + 6) + 0x20))();
                param_1[6] = 0;
                param_1[7] = 0;
                (**(code **)(**(long **)(puVar11 + 6) + 0x18))(*(long **)(puVar11 + 6),param_1);
                (**(code **)(**(long **)(puVar11 + 6) + 0x20))();
                puVar11[6] = 0;
                puVar11[7] = 0;
                *(uint **)(param_1 + 6) = param_1;
                (**(code **)(alStack_80[0] + 0x18))(alStack_80);
                (**(code **)(alStack_80[0] + 0x20))();
              }
              else {
                (**(code **)(*(long *)puVar12 + 0x18))();
                puVar7 = *(uint **)(param_1 + 6);
                (**(code **)(*(long *)puVar7 + 0x20))();
                *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar11 + 6);
              }
              *(uint **)(puVar11 + 6) = puVar11;
              puVar12 = puVar7;
            }
            else if (puVar15 == puVar11) {
              puVar9 = param_1;
              (**(code **)(*(long *)puVar15 + 0x18))(puVar15);
              puVar12 = *(uint **)(puVar11 + 6);
              (**(code **)(*(long *)puVar12 + 0x20))();
              *(undefined8 *)(puVar11 + 6) = *(undefined8 *)(param_1 + 6);
              *(uint **)(param_1 + 6) = param_1;
            }
            else {
              *(uint **)(param_1 + 6) = puVar15;
              *(uint **)(puVar11 + 6) = puVar12;
            }
          }
          iVar6 = (int)puVar9;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
            return puVar12;
          }
          ___stack_chk_fail();
          if (iVar6 == 0) {
            __Unwind_Resume();
          }
          func_0x000104bd46a0();
          puStack_88 = &DAT_104c54e94;
          *(undefined ***)puVar12 = &PTR_DAT_1107ec7d0;
          puStack_a0 = unaff_x20;
          puStack_98 = unaff_x19;
          ppuStack_90 = &puStack_50;
          func_0x000104c00298(puVar12 + 0x20);
          func_0x000100601aa4(puVar12 + 10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(puVar12);
          return puVar12;
        }
        if (uVar14 < 0x17) {
          *(char *)((long)param_1 + 0x17) = (char)puVar9;
          puVar9 = param_1;
          if (uVar14 == 0) goto code_r0x000104c54d08;
        }
        else {
          puVar12 = (uint *)0x19;
          if ((uVar14 | 7) != 0x17) {
            puVar12 = (uint *)((uVar14 | 7) + 1);
          }
          puVar9 = puVar12;
          __Znwm();
          *(ulong *)(param_1 + 2) = uVar14;
          *(ulong *)(param_1 + 4) = (ulong)puVar12 | 0x8000000000000000;
          *(uint **)param_1 = puVar9;
        }
        _memmove(puVar9,puVar11,uVar14);
code_r0x000104c54d08:
        *(undefined1 *)((long)puVar9 + uVar14) = 0;
        return param_1;
      }
    }
    else {
      if (uVar1 != 5) goto LAB_1098f3594;
      puVar12 = (uint *)&UNK_10f587d04;
      if (*(char *)param_2 == '\0') {
        puVar12 = (uint *)&UNK_10f587d09;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) goto code_r0x00010002d4d8;
    }
LAB_1098f3590:
    ___stack_chk_fail();
LAB_1098f3594:
    FUN_10926db08(auStack_140);
    FUN_1092b4db8(auStack_140,&UNK_10f587d0f,0x21);
    FUN_10926dc5c(auStack_160,auStack_138,&uStack_141);
    FUN_1098f3054(auStack_160);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1098f35d0);
    (*pcVar4)();
  }
  if ((uVar3 & 0xff) == 0) {
LAB_1098f34dc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) goto LAB_1098f3590;
    puVar12 = (uint *)&UNK_10f587c97;
  }
  else if (uVar1 == 1) {
    dVar8 = *param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) goto LAB_1098f3590;
    unaff_x29 = &stack0xfffffffffffffff0;
    if (dVar8 == -0.0) {
      puVar13 = &stack0xffffffffffffffe8;
      uVar14 = 0x8000000000000000;
      do {
        puVar13[-2] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
        puVar13 = puVar13 + -1;
        bVar5 = 9 < uVar14;
        uVar14 = uVar14 / 10;
      } while (bVar5);
LAB_1098f4a5c:
      puVar12 = (uint *)(puVar13 + -2);
      *(byte *)puVar12 = 0x2d;
    }
    else {
      if ((long)dVar8 < 0) {
        puVar13 = &stack0xffffffffffffffe8;
        uVar14 = -(long)dVar8;
        do {
          puVar13[-2] = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
          puVar13 = puVar13 + -1;
          bVar5 = 9 < uVar14;
          uVar14 = uVar14 / 10;
        } while (bVar5);
        goto LAB_1098f4a5c;
      }
      puVar12 = (uint *)&stack0xffffffffffffffe7;
      do {
        puVar12 = (uint *)((long)puVar12 + -1);
        *(byte *)puVar12 = SUB81(dVar8,0) + (char)((ulong)dVar8 / 10) * -10 | 0x30;
        bVar5 = 9 < (ulong)dVar8;
        dVar8 = (double)((ulong)dVar8 / 10);
      } while (bVar5);
    }
    unaff_x30 = (undefined *)0x1098f4a68;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
  }
  else {
    if (uVar1 != 2) goto LAB_1098f3594;
    puVar12 = (uint *)((long)auStack_129 + 1);
    auStack_129[1] = 0;
    dVar8 = *param_2;
    do {
      puVar12 = (uint *)((long)puVar12 + -1);
      *(byte *)puVar12 = SUB81(dVar8,0) + (char)((ulong)dVar8 / 10) * -10 | 0x30;
      bVar5 = 9 < (ulong)dVar8;
      dVar8 = (double)((ulong)dVar8 / 10);
    } while (bVar5);
    unaff_x30 = (undefined *)0x1098f3414;
    register0x00000008 = (BADSPACEBASE *)auStack_160;
    unaff_x19 = param_1;
    unaff_x29 = puVar13;
  }
code_r0x00010002d4d8:
  while( true ) {
    puVar11 = puVar12;
    puVar9 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(uint **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    puVar12 = puVar11;
    func_0x000107c613d0();
    if (puVar12 < (uint *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(uint **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x58) = puVar9;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10002d57c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar12;
    }
    puVar12 = (uint *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar12 == 0) {
      return puVar12;
    }
    unaff_x30 = &UNK_10002d5bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = (uint *)0x1132dfae8;
    puVar12 = (uint *)&UNK_10f5738ce;
    unaff_x19 = puVar9;
    unaff_x21 = puVar11;
  }
  if (puVar12 < (uint *)0x17) {
    *(char *)((long)puVar9 + 0x17) = (char)puVar12;
    puVar15 = puVar9;
    if (puVar12 == (uint *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar7 = (uint *)0x19;
    if (((ulong)puVar12 | 7) != 0x17) {
      puVar7 = (uint *)(((ulong)puVar12 | 7) + 1);
    }
    puVar15 = puVar7;
    func_0x000107c60e20();
    *(uint **)(puVar9 + 2) = puVar12;
    *(ulong *)(puVar9 + 4) = (ulong)puVar7 | 0x8000000000000000;
    *(uint **)puVar9 = puVar15;
  }
  func_0x000107c610b8(puVar15,puVar11,puVar12);
code_r0x00010002d55c:
  *(byte *)((long)puVar15 + (long)puVar12) = 0;
  return puVar9;
}



/* Entry: 1098f3608; end: 1098f37ef;  */

uint FUN_1098f3608(double *param_1)

{
  byte bVar1;
  code *pcVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [263];
  undefined1 uStack_21;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return 0;
    }
    if (bVar1 == 1) {
      pdVar3 = param_1;
      FUN_1098f37f0();
      if (((ulong)pdVar3 & 1) != 0) goto LAB_1098f36a8;
      FUN_10926db08(auStack_130);
      FUN_1092b4db8(auStack_130,&UNK_10f587d31,0x1b);
      FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
      FUN_1098f3054(auStack_148);
      goto LAB_1098f3798;
    }
  }
  else {
    if (bVar1 == 2) {
      pdVar3 = param_1;
      FUN_1098f37f0();
      if (((ulong)pdVar3 & 1) != 0) {
LAB_1098f36a8:
        return *(uint *)param_1;
      }
      FUN_10926db08(auStack_130);
      FUN_1092b4db8(auStack_130,&UNK_10f587d4d,0x1c);
      FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
      FUN_1098f3054(auStack_148);
      goto LAB_1098f3798;
    }
    if (bVar1 == 3) {
      dVar4 = *param_1;
      if ((-2147483648.0 <= dVar4) && (dVar4 <= 2147483647.0)) {
        return (int)dVar4;
      }
      FUN_10926db08(auStack_130);
      FUN_1092b4db8(auStack_130,&UNK_10f587d6a,0x17);
      FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
      FUN_1098f3054(auStack_148);
      goto LAB_1098f3798;
    }
    if (bVar1 == 5) {
      return (uint)*(byte *)param_1;
    }
  }
  FUN_10926db08(auStack_130);
  FUN_1092b4db8(auStack_130,&UNK_10f587d82,0x20);
  FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
  FUN_1098f3054(auStack_148);
LAB_1098f3798:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1098f379c);
  (*pcVar2)();
}


