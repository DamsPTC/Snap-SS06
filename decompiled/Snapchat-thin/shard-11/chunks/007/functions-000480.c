/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108882908; end: 10888292f;  */

long * FUN_108882908(long *param_1)

{
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108882930; end: 1088829e7;  */

bool FUN_108882930(long *param_1)

{
  long lVar1;
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  func_0x000108882998(&lStack_38);
  lVar1 = *param_1 + param_1[1] * 0x28;
  if (lStack_38 != lVar1) {
    lStack_40 = lStack_38;
    FUN_1088829e8(auStack_48,param_1,&lStack_40);
  }
  return lStack_38 != lVar1;
}



/* Entry: 1088829e8; end: 108882a3b;  */

void FUN_1088829e8(void)

{
  func_0x000108882bc8();
  FUN_108882a8c();
  return;
}



/* Entry: 108882a3c; end: 108882a8b;  */

void FUN_108882a3c(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = (uint *)*param_3;
  uVar1 = *param_5;
  uVar4 = (*param_4 - (long)puVar2) / 0x28;
  while (uVar3 = uVar4, uVar3 != 0) {
    uVar4 = uVar3 >> 1;
    if (puVar2[uVar4 * 10] < uVar1) {
      puVar2 = puVar2 + uVar4 * 10 + 10;
      *param_3 = (long)puVar2;
      uVar4 = uVar3 + ~uVar4;
    }
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 108882a8c; end: 108882b27;  */

void FUN_108882a8c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_3;
  lVar2 = *param_2 + param_2[1] * 0x28;
  func_0x000108882ae4(lVar1 + 0x28,lVar2,lVar1);
  func_0x00010873a5b4(lVar2 + -0x20);
  param_2[1] = param_2[1] + -1;
  *param_1 = lVar1;
  return;
}



/* Entry: 108882b28; end: 108882b4b;  */

void FUN_108882b28(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x70) = 0;
  return;
}



/* Entry: 108882b4c; end: 108882b6b;  */

void FUN_108882b4c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 uStack_31;
  long *plStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108882b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  pcStack_18 = FUN_108882b6c;
  if (*(uint *)(plVar1 + 3) != 0xffffffff) {
    plStack_30 = plVar1;
    uStack_28 = param_2;
    puStack_20 = &stack0xfffffffffffffff0;
    (*(code *)(&PTR_FUN_110a69ed8)[*(uint *)(plVar1 + 3)])(&uStack_31,plVar1);
  }
  *(undefined4 *)(plVar1 + 3) = 0xffffffff;
  return;
}



/* Entry: 108882b6c; end: 108882c1b;  */

void FUN_108882b6c(long param_1,undefined8 param_2)

{
  undefined1 uStack_21;
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    lStack_20 = param_1;
    uStack_18 = param_2;
    (*(code *)(&PTR_FUN_110a69ed8)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 108882c1c; end: 108882faf;  */

void FUN_108882c1c(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined1 *extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long *plVar5;
  undefined8 *puVar6;
  long extraout_x9;
  undefined *puVar7;
  long unaff_x20;
  undefined *unaff_x21;
  undefined *puVar8;
  undefined *unaff_x24;
  undefined1 auStack_120 [32];
  byte bStack_100;
  undefined1 auStack_d8 [24];
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  byte bStack_a8;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  
  func_0x00010888381c();
  param_1 = param_1 + 0x18;
  FUN_108883520();
  if (param_1 == 0) {
    func_0x000108884a00(auStack_a0);
    func_0x000107c29f50(auStack_120,*(undefined8 *)(unaff_x20 + 8),auStack_a0);
    func_0x000107c29dc0(auStack_d8,auStack_120);
    func_0x000107c29dc4(auStack_120);
    if ((bStack_a8 & 1) == 0) {
      *extraout_x8 = 0;
      extraout_x8[0x20] = 0;
    }
    else {
      uVar2 = bStack_a9 == 0;
      if (-1 < (char)bStack_a9) {
        uStack_b8 = (ulong)bStack_a9;
        pppuStack_c0 = &pppuStack_c0;
      }
      func_0x000107c31544(&uStack_68,pppuStack_c0,uStack_b8);
      ppuStack_88 = &PTR_DAT_110d19fd8;
      lStack_80 = 0;
      uStack_70 = 0;
      pppuVar3 = &ppuStack_88;
      func_0x000107c3034c(pppuVar3,uStack_68,iStack_60 - (int)uStack_68);
      if (((ulong)pppuVar3 & 1) == 0) {
        auStack_120[0] = 0;
        bStack_100 = 0;
      }
      else {
        FUN_108884ac8(auStack_120,&ppuStack_88);
      }
      func_0x00010b5caf5c(&ppuStack_88);
      func_0x000107c27914(&uStack_68);
      if ((bStack_100 & 1) == 0) {
        FUN_10885eb28(*(undefined8 *)(unaff_x20 + 8),auStack_a0);
        *extraout_x8 = 0;
        extraout_x8[0x20] = 0;
      }
      else {
        puVar8 = *(undefined **)(unaff_x20 + 0x20);
        if (puVar8 != (undefined *)0x0) {
          func_0x000108883828();
          if ((bool)uVar2) {
            unaff_x24 = (undefined *)(extraout_x8_00 & (ulong)unaff_x21);
          }
          else {
            unaff_x24 = unaff_x21;
            if (puVar8 <= unaff_x21) {
              uVar1 = 0;
              if (puVar8 != (undefined *)0x0) {
                uVar1 = (ulong)unaff_x21 / (ulong)puVar8;
              }
              unaff_x24 = unaff_x21 + -(uVar1 * (long)puVar8);
            }
          }
          plVar5 = *(long **)(*(long *)(unaff_x20 + 0x18) + (long)unaff_x24 * 8);
          if (plVar5 != (long *)0x0) {
            do {
              while( true ) {
                plVar5 = (long *)*plVar5;
                if (plVar5 == (long *)0x0) goto LAB_108882dc4;
                puVar7 = (undefined *)plVar5[1];
                if (puVar7 != unaff_x21) break;
                if ((undefined *)plVar5[2] == unaff_x21) goto LAB_108882ec8;
              }
              if (((ulong)puVar8 & extraout_x8_00) == 0) {
                puVar7 = (undefined *)((ulong)puVar7 & extraout_x8_00);
              }
              else if (puVar8 <= puVar7) {
                uVar1 = 0;
                if (puVar8 != (undefined *)0x0) {
                  uVar1 = (ulong)puVar7 / (ulong)puVar8;
                }
                puVar7 = puVar7 + -(uVar1 * (long)puVar8);
              }
            } while (puVar7 == unaff_x24);
          }
        }
LAB_108882dc4:
        ppuVar4 = (undefined **)0x38;
        __Znwm();
        lStack_80 = unaff_x20 + 0x28;
        uStack_78 = 0;
        *ppuVar4 = (undefined *)0x0;
        ppuVar4[1] = unaff_x21;
        ppuVar4[2] = unaff_x21;
        ppuStack_88 = ppuVar4;
        FUN_108881e0c(ppuVar4 + 3,auStack_120);
        uStack_78 = CONCAT71(uStack_78._1_7_,1);
        if ((puVar8 == (undefined *)0x0) ||
           (*(float *)(unaff_x20 + 0x38) * (float)puVar8 < (float)(*(long *)(unaff_x20 + 0x30) + 1))
           ) {
          func_0x000108883804();
          uVar2 = puVar8 == (undefined *)0x3;
          func_0x0001088837ec();
          FUN_1088835b8(unaff_x20 + 0x18);
          puVar8 = *(undefined **)(unaff_x20 + 0x20);
          func_0x000108883828();
          if ((bool)uVar2) {
            unaff_x24 = (undefined *)(extraout_x8_01 & (ulong)unaff_x21);
          }
          else {
            unaff_x24 = unaff_x21;
            if (puVar8 <= unaff_x21) {
              uVar1 = 0;
              if (puVar8 != (undefined *)0x0) {
                uVar1 = (ulong)unaff_x21 / (ulong)puVar8;
              }
              unaff_x24 = unaff_x21 + -(uVar1 * (long)puVar8);
            }
          }
        }
        puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x18) + (long)unaff_x24 * 8);
        if (puVar6 == (undefined8 *)0x0) {
          func_0x0001088837d4();
          if (extraout_x9 != 0) {
            puVar7 = *(undefined **)(extraout_x9 + 8);
            if (((ulong)puVar8 & (ulong)(puVar8 + -1)) == 0) {
              puVar7 = (undefined *)((ulong)puVar7 & (ulong)(puVar8 + -1));
            }
            else if (puVar8 <= puVar7) {
              uVar1 = 0;
              if (puVar8 != (undefined *)0x0) {
                uVar1 = (ulong)puVar7 / (ulong)puVar8;
              }
              puVar7 = puVar7 + -(uVar1 * (long)puVar8);
            }
            *(undefined ***)(extraout_x8_02 + (long)puVar7 * 8) = ppuVar4;
          }
        }
        else {
          *ppuVar4 = (undefined *)*puVar6;
          *puVar6 = ppuVar4;
        }
        ppuStack_88 = (undefined **)0x0;
        *(long *)(unaff_x20 + 0x30) = *(long *)(unaff_x20 + 0x30) + 1;
        FUN_108883778(&ppuStack_88);
LAB_108882ec8:
        FUN_108881da0(extraout_x8,auStack_120);
      }
      func_0x000108739e00(auStack_120);
    }
    func_0x000107c28a64(auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  }
  else {
    FUN_1088822ec(extraout_x8,param_1 + 0x18);
  }
  return;
}



/* Entry: 108882fb0; end: 1088832eb;  */

void FUN_108882fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long *plVar4;
  undefined8 *puVar5;
  long extraout_x9;
  ulong uVar6;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  byte bStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = 0;
  uVar7 = param_3;
  func_0x000108883834();
  FUN_108884a48(&puStack_d0,uVar7);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000107c30364(&puStack_d0,&uStack_68);
  if ((uVar8 & 1) == 0) {
    auStack_a0[0] = 0;
    bStack_88 = 0;
  }
  else {
    func_0x00010bcd5ad0(auStack_80,&uStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a0,auStack_80);
    bStack_88 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  }
  func_0x0001088837cc();
  func_0x00010b5caf5c(&puStack_d0);
  if ((bStack_88 & 1) != 0) {
    func_0x000108884a00(&uStack_68);
    uVar7 = *(undefined8 *)(unaff_x19 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_d0,&uStack_68)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8,auStack_a0);
    FUN_10885ea84(uVar7,&puStack_d0);
    func_0x000107c28a68(&puStack_d0);
    uVar8 = *(ulong *)(unaff_x19 + 0x20);
    if (uVar8 != 0) {
      func_0x000108883828();
      if ((bool)in_ZR) {
        unaff_x24 = extraout_x8 & unaff_x20;
      }
      else {
        unaff_x24 = unaff_x20;
        if (uVar8 <= unaff_x20) {
          uVar6 = 0;
          if (uVar8 != 0) {
            uVar6 = unaff_x20 / uVar8;
          }
          unaff_x24 = unaff_x20 - uVar6 * uVar8;
        }
      }
      plVar4 = *(long **)(*(long *)(unaff_x19 + 0x18) + unaff_x24 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          while( true ) {
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) goto LAB_108883108;
            uVar6 = plVar4[1];
            if (uVar6 != unaff_x20) break;
            if (plVar4[2] == unaff_x20) {
              FUN_108881ffc(plVar4 + 3,param_3);
              goto LAB_10888321c;
            }
          }
          if ((uVar8 & extraout_x8) == 0) {
            uVar6 = uVar6 & extraout_x8;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            uVar6 = uVar6 - uVar1 * uVar8;
          }
        } while (uVar6 == unaff_x24);
      }
    }
LAB_108883108:
    puVar3 = (undefined8 *)0x38;
    __Znwm();
    lStack_c8 = unaff_x19 + 0x28;
    uStack_c0 = 0;
    *puVar3 = 0;
    puVar3[1] = unaff_x20;
    puVar3[2] = unaff_x20;
    puStack_d0 = puVar3;
    FUN_108881e0c(puVar3 + 3,param_3);
    uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
    if ((uVar8 == 0) ||
       (*(float *)(unaff_x19 + 0x38) * (float)uVar8 < (float)(*(long *)(unaff_x19 + 0x30) + 1))) {
      func_0x000108883804();
      uVar2 = uVar8 == 3;
      func_0x0001088837ec();
      FUN_1088835b8(unaff_x19 + 0x18);
      uVar8 = *(ulong *)(unaff_x19 + 0x20);
      func_0x000108883828();
      if ((bool)uVar2) {
        unaff_x24 = extraout_x8_00 & unaff_x20;
      }
      else {
        unaff_x24 = unaff_x20;
        if (uVar8 <= unaff_x20) {
          uVar6 = 0;
          if (uVar8 != 0) {
            uVar6 = unaff_x20 / uVar8;
          }
          unaff_x24 = unaff_x20 - uVar6 * uVar8;
        }
      }
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x18) + unaff_x24 * 8);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0001088837d4();
      if (extraout_x9 != 0) {
        uVar6 = *(ulong *)(extraout_x9 + 8);
        if ((uVar8 & uVar8 - 1) == 0) {
          uVar6 = uVar6 & uVar8 - 1;
        }
        else if (uVar8 <= uVar6) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar6 / uVar8;
          }
          uVar6 = uVar6 - uVar1 * uVar8;
        }
        *(undefined8 **)(extraout_x8_01 + uVar6 * 8) = puVar3;
      }
    }
    else {
      *puVar3 = *puVar5;
      *puVar5 = puVar3;
    }
    puStack_d0 = (undefined8 *)0x0;
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x19 + 0x30) + 1;
    FUN_108883778(&puStack_d0);
LAB_10888321c:
    func_0x0001088837cc();
  }
  func_0x000107c279a4(auStack_a0);
  return;
}



/* Entry: 1088832ec; end: 108883497;  */

void FUN_1088832ec(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x19;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  func_0x000108883834();
  plVar2 = (long *)(param_1 + 0x18);
  FUN_108883520();
  if (plVar2 == (long *)0x0) goto LAB_10888342c;
  uVar5 = *(ulong *)(unaff_x19 + 0x20);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *(long *)(unaff_x19 + 0x18);
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  plStack_30 = (long *)(unaff_x19 + 0x28);
  if (plVar6 == plStack_30) {
LAB_108883388:
    if (lVar3 == 0) {
LAB_1088833bc:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1088833c4;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_1088833bc;
LAB_1088833cc:
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar4) {
      *(long **)(lVar8 + uVar9 * 8) = plVar6;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_108883388;
LAB_1088833c4:
    if (lVar3 != 0) {
      uVar9 = *(ulong *)(lVar3 + 8);
      goto LAB_1088833cc;
    }
  }
  *plVar6 = lVar3;
  *plVar2 = 0;
  *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x19 + 0x30) + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_38 = plVar2;
  FUN_108883778(&plStack_38);
LAB_10888342c:
  func_0x000108884a00(&plStack_38);
  FUN_10885eb28(*(undefined8 *)(unaff_x19 + 8),&plStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_38);
  return;
}



/* Entry: 108883498; end: 10888349b;  */

undefined8 * FUN_108883498(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a7fd68;
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_108739ed8(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 10888349c; end: 1088834af;  */

void FUN_10888349c(void)

{
  FUN_1088834b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088834b0; end: 10888351f;  */

undefined8 * FUN_1088834b0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110a7fd68;
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_108739ed8(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[3];
  param_1[3] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c28808(param_1 + 1);
  return param_1;
}



/* Entry: 108883520; end: 1088835b7;  */

long FUN_108883520(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != param_2) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 1088835b8; end: 10888375f;  */

void FUN_1088835b8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_108883760(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_108883760(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108883760; end: 108883777;  */

void FUN_108883760(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108883778; end: 1088837bf;  */

long * FUN_108883778(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_108739ed8(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1088837c0; end: 108883897;  */

void FUN_1088837c0(void)

{
  return;
}



/* Entry: 108883898; end: 108883c03;  */

void FUN_108883898(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined ****ppppuVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined ******ppppppuVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  int extraout_w10;
  int extraout_w10_00;
  undefined *****pppppuVar11;
  long *unaff_x19;
  long unaff_x20;
  undefined *****pppppuVar12;
  undefined *****unaff_x22;
  undefined ******unaff_x23;
  undefined *****pppppuVar13;
  undefined *****unaff_x24;
  undefined *****unaff_x25;
  undefined *****unaff_x26;
  float fVar14;
  long lVar15;
  float fVar16;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined ****ppppuStack_110;
  undefined ****ppppuStack_108;
  undefined ****ppppuStack_100;
  undefined *****pppppuStack_f8;
  undefined ****ppppuStack_f0;
  long *plStack_e8;
  undefined1 auStack_b0 [16];
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined8 uStack_68;
  
  plVar9 = param_2;
  func_0x00010888487c();
  ppppppuVar5 = (undefined ******)*plVar9;
  param_1 = param_1 + 0x60;
  FUN_108884154();
  if (param_1 == 0) {
    FUN_10873a488(auStack_b0,1);
    ppppuStack_a0[2] = (undefined ***)0x0;
    *ppppuStack_a0 = (undefined ***)&PTR_FUN_110a6a050;
    ppppuStack_a0[1] = (undefined ***)0x0;
    unaff_x23 = &pppppuStack_98;
    pppppuStack_98 = (undefined *****)FUN_1088841ec;
    FUN_108881990(ppppuStack_a0 + 3,&pppppuStack_98);
    func_0x0001088848a4();
    ppppuVar3 = ppppuStack_a0;
    ppppuStack_a0 = (undefined ****)0x0;
    unaff_x22 = (undefined *****)(ppppuVar3 + 3);
    *unaff_x19 = (long)unaff_x22;
    unaff_x19[1] = (long)ppppuVar3;
    FUN_10873a61c(auStack_b0);
    unaff_x25 = (undefined *****)*param_2;
    unaff_x24 = *(undefined ******)(unaff_x20 + 0x68);
    if (unaff_x24 != (undefined *****)0x0) {
      uVar7 = (long)unaff_x24 - 1;
      if (((ulong)unaff_x24 & uVar7) == 0) {
        unaff_x26 = (undefined *****)(uVar7 & (ulong)unaff_x25);
      }
      else {
        unaff_x26 = unaff_x25;
        if (unaff_x24 <= unaff_x25) {
          uVar2 = 0;
          if (unaff_x24 != (undefined *****)0x0) {
            uVar2 = (ulong)unaff_x25 / (ulong)unaff_x24;
          }
          unaff_x26 = (undefined *****)((long)unaff_x25 - uVar2 * (long)unaff_x24);
        }
      }
      plVar9 = *(long **)(*(long *)(unaff_x20 + 0x60) + (long)unaff_x26 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_108883a04;
            pppppuVar12 = (undefined *****)plVar9[1];
            if (pppppuVar12 != unaff_x25) break;
            if ((undefined *****)plVar9[2] == unaff_x25) {
              in_ZR = 1;
              goto LAB_108883b34;
            }
          }
          if (((ulong)unaff_x24 & uVar7) == 0) {
            pppppuVar12 = (undefined *****)((ulong)pppppuVar12 & uVar7);
          }
          else if (unaff_x24 <= pppppuVar12) {
            uVar2 = 0;
            if (unaff_x24 != (undefined *****)0x0) {
              uVar2 = (ulong)pppppuVar12 / (ulong)unaff_x24;
            }
            pppppuVar12 = (undefined *****)((long)pppppuVar12 - uVar2 * (long)unaff_x24);
          }
        } while (pppppuVar12 == unaff_x26);
      }
    }
LAB_108883a04:
    unaff_x23 = (undefined ******)0x28;
    __Znwm();
    puVar1 = (undefined8 *)(unaff_x20 + 0x70);
    *unaff_x23 = (undefined *****)0x0;
    unaff_x23[1] = unaff_x25;
    unaff_x23[2] = unaff_x25;
    unaff_x23[3] = unaff_x22;
    unaff_x23[4] = (undefined *****)ppppuVar3;
    pppppuStack_98 = (undefined *****)unaff_x23;
    if ((undefined *****)ppppuVar3 != (undefined *****)0x0) {
      do {
        func_0x000108884850();
      } while (extraout_w10_00 != 0);
    }
    fVar14 = (float)(*(long *)(unaff_x20 + 0x78) + 1);
    if ((unaff_x24 == (undefined *****)0x0) ||
       (fVar16 = *(float *)(unaff_x20 + 0x80) * (float)unaff_x24, in_ZR = fVar16 == fVar14,
       fVar16 < fVar14)) {
      func_0x0001088848dc((long)unaff_x24 << 1);
      FUN_108884388(unaff_x20 + 0x60);
      unaff_x24 = *(undefined ******)(unaff_x20 + 0x68);
      if (((ulong)unaff_x24 & (long)unaff_x24 - 1U) == 0) {
        in_ZR = true;
        unaff_x26 = (undefined *****)((long)unaff_x24 - 1U & (ulong)unaff_x25);
      }
      else {
        in_ZR = unaff_x25 == unaff_x24;
        unaff_x26 = unaff_x25;
        if (unaff_x24 <= unaff_x25) {
          uVar7 = 0;
          if (unaff_x24 != (undefined *****)0x0) {
            uVar7 = (ulong)unaff_x25 / (ulong)unaff_x24;
          }
          unaff_x26 = (undefined *****)((long)unaff_x25 - uVar7 * (long)unaff_x24);
        }
      }
    }
    lVar6 = *(long *)(unaff_x20 + 0x60);
    puVar8 = *(undefined8 **)(lVar6 + (long)unaff_x26 * 8);
    if (puVar8 == (undefined8 *)0x0) {
      *unaff_x23 = (undefined *****)*puVar1;
      *puVar1 = unaff_x23;
      *(undefined8 **)(lVar6 + (long)unaff_x26 * 8) = puVar1;
      if (*unaff_x23 != (undefined *****)0x0) {
        pppppuVar12 = (undefined *****)(*unaff_x23)[1];
        if (((ulong)unaff_x24 & (long)unaff_x24 - 1U) == 0) {
          pppppuVar12 = (undefined *****)((ulong)pppppuVar12 & (long)unaff_x24 - 1U);
          in_ZR = true;
        }
        else {
          in_ZR = pppppuVar12 == unaff_x24;
          if (unaff_x24 <= pppppuVar12) {
            uVar7 = 0;
            if (unaff_x24 != (undefined *****)0x0) {
              uVar7 = (ulong)pppppuVar12 / (ulong)unaff_x24;
            }
            pppppuVar12 = (undefined *****)((long)pppppuVar12 - uVar7 * (long)unaff_x24);
          }
        }
        *(undefined *******)(lVar6 + (long)pppppuVar12 * 8) = unaff_x23;
      }
    }
    else {
      *unaff_x23 = (undefined *****)*puVar8;
      *puVar8 = unaff_x23;
    }
    pppppuStack_98 = (undefined *****)0x0;
    *(long *)(unaff_x20 + 0x78) = *(long *)(unaff_x20 + 0x78) + 1;
    FUN_108884548(&pppppuStack_98);
    unaff_x25 = (undefined *****)*param_2;
LAB_108883b34:
    pppppuStack_98 = (undefined *****)&PTR_FUN_110a7feb8;
    ppppppuVar5 = &pppppuStack_98;
    FUN_1088819f0(unaff_x22);
    func_0x00010873a5b4(&pppppuStack_98);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x20);
    lVar15 = *(long *)(param_1 + 0x18);
    unaff_x19[1] = *(long *)(param_1 + 0x20);
    *unaff_x19 = lVar15;
    if (lVar6 != 0) {
      do {
        func_0x000108884850();
      } while (extraout_w10 != 0);
    }
  }
  while( true ) {
    func_0x000108884860(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108884898();
    FUN_108884548(&pppppuStack_98);
    func_0x000107c29764();
    in_ZR = (int)param_2 == 1;
    if (!(bool)in_ZR) break;
    ___cxa_begin_catch();
    ___cxa_end_catch();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  __Unwind_Resume();
  pppppuVar12 = *ppppppuVar5;
  lVar6 = unaff_x20 + 0x60;
  ppppuStack_110 = (undefined ****)unaff_x26;
  ppppuStack_108 = (undefined ****)unaff_x25;
  ppppuStack_100 = (undefined ****)unaff_x24;
  pppppuStack_f8 = (undefined *****)unaff_x23;
  ppppuStack_f0 = (undefined ****)unaff_x22;
  plStack_e8 = param_2;
  FUN_108884154(lVar6,pppppuVar12);
  if (lVar6 == 0) {
    pppppuVar13 = *(undefined ******)(unaff_x20 + 0x68);
    if (pppppuVar13 != (undefined *****)0x0) {
      uVar7 = (long)pppppuVar13 - 1;
      if (((ulong)pppppuVar13 & uVar7) == 0) {
        unaff_x24 = (undefined *****)(uVar7 & (ulong)pppppuVar12);
      }
      else {
        unaff_x24 = pppppuVar12;
        if (pppppuVar13 <= pppppuVar12) {
          uVar2 = 0;
          if (pppppuVar13 != (undefined *****)0x0) {
            uVar2 = (ulong)pppppuVar12 / (ulong)pppppuVar13;
          }
          unaff_x24 = (undefined *****)((long)pppppuVar12 - uVar2 * (long)pppppuVar13);
        }
      }
      plVar9 = *(long **)(*(long *)(unaff_x20 + 0x60) + (long)unaff_x24 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_108883cc8;
            pppppuVar11 = (undefined *****)plVar9[1];
            if (pppppuVar11 != pppppuVar12) break;
            if ((undefined *****)plVar9[2] == pppppuVar12) {
              return;
            }
          }
          if (((ulong)pppppuVar13 & uVar7) == 0) {
            pppppuVar11 = (undefined *****)((ulong)pppppuVar11 & uVar7);
          }
          else if (pppppuVar13 <= pppppuVar11) {
            uVar2 = 0;
            if (pppppuVar13 != (undefined *****)0x0) {
              uVar2 = (ulong)pppppuVar11 / (ulong)pppppuVar13;
            }
            pppppuVar11 = (undefined *****)((long)pppppuVar11 - uVar2 * (long)pppppuVar13);
          }
        } while (pppppuVar11 == unaff_x24);
      }
    }
LAB_108883cc8:
    plVar4 = (long *)0x28;
    __Znwm();
    plVar9 = (long *)(unaff_x20 + 0x70);
    uStack_118 = 1;
    *plVar4 = 0;
    plVar4[1] = (long)pppppuVar12;
    plVar4[2] = (long)pppppuVar12;
    lVar6 = *param_3;
    plVar4[4] = param_3[1];
    plVar4[3] = lVar6;
    *param_3 = 0;
    param_3[1] = 0;
    plStack_120 = plVar9;
    if ((pppppuVar13 == (undefined *****)0x0) ||
       (*(float *)(unaff_x20 + 0x80) * (float)pppppuVar13 < (float)(*(long *)(unaff_x20 + 0x78) + 1)
       )) {
      plStack_128 = plVar4;
      func_0x0001088848dc((long)pppppuVar13 << 1);
      FUN_108884388(unaff_x20 + 0x60);
      pppppuVar13 = *(undefined ******)(unaff_x20 + 0x68);
      if (((ulong)pppppuVar13 & (long)pppppuVar13 - 1U) == 0) {
        unaff_x24 = (undefined *****)((long)pppppuVar13 - 1U & (ulong)pppppuVar12);
      }
      else {
        unaff_x24 = pppppuVar12;
        if (pppppuVar13 <= pppppuVar12) {
          uVar7 = 0;
          if (pppppuVar13 != (undefined *****)0x0) {
            uVar7 = (ulong)pppppuVar12 / (ulong)pppppuVar13;
          }
          unaff_x24 = (undefined *****)((long)pppppuVar12 - uVar7 * (long)pppppuVar13);
        }
      }
    }
    lVar6 = *(long *)(unaff_x20 + 0x60);
    plVar10 = *(long **)(lVar6 + (long)unaff_x24 * 8);
    if (plVar10 == (long *)0x0) {
      *plVar4 = *plVar9;
      *plVar9 = (long)plVar4;
      *(long **)(lVar6 + (long)unaff_x24 * 8) = plVar9;
      if (*plVar4 != 0) {
        pppppuVar12 = *(undefined ******)(*plVar4 + 8);
        if (((ulong)pppppuVar13 & (long)pppppuVar13 - 1U) == 0) {
          pppppuVar12 = (undefined *****)((ulong)pppppuVar12 & (long)pppppuVar13 - 1U);
        }
        else if (pppppuVar13 <= pppppuVar12) {
          uVar7 = 0;
          if (pppppuVar13 != (undefined *****)0x0) {
            uVar7 = (ulong)pppppuVar12 / (ulong)pppppuVar13;
          }
          pppppuVar12 = (undefined *****)((long)pppppuVar12 - uVar7 * (long)pppppuVar13);
        }
        *(long **)(lVar6 + (long)pppppuVar12 * 8) = plVar4;
      }
    }
    else {
      *plVar4 = *plVar10;
      *plVar10 = (long)plVar4;
    }
    plStack_128 = (long *)0x0;
    *(long *)(unaff_x20 + 0x78) = *(long *)(unaff_x20 + 0x78) + 1;
    FUN_108884548(&plStack_128);
  }
  return;
}



/* Entry: 108883c04; end: 108883e4b;  */

void FUN_108883c04(long param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  uVar8 = *param_2;
  lVar4 = param_1 + 0x60;
  FUN_108884154(lVar4,uVar8);
  if (lVar4 == 0) {
    uVar9 = *(ulong *)(param_1 + 0x68);
    if (uVar9 != 0) {
      uVar3 = uVar9 - 1;
      if ((uVar9 & uVar3) == 0) {
        unaff_x24 = uVar3 & uVar8;
      }
      else {
        unaff_x24 = uVar8;
        if (uVar9 <= uVar8) {
          uVar7 = 0;
          if (uVar9 != 0) {
            uVar7 = uVar8 / uVar9;
          }
          unaff_x24 = uVar8 - uVar7 * uVar9;
        }
      }
      plVar5 = *(long **)(*(long *)(param_1 + 0x60) + unaff_x24 * 8);
      if (plVar5 != (long *)0x0) {
        do {
          while( true ) {
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) goto LAB_108883cc8;
            uVar7 = plVar5[1];
            if (uVar7 != uVar8) break;
            if (plVar5[2] == uVar8) {
              return;
            }
          }
          if ((uVar9 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
        } while (uVar7 == unaff_x24);
      }
    }
LAB_108883cc8:
    plVar2 = (long *)0x28;
    __Znwm();
    plVar5 = (long *)(param_1 + 0x70);
    uStack_58 = 1;
    *plVar2 = 0;
    plVar2[1] = uVar8;
    plVar2[2] = uVar8;
    lVar4 = *param_3;
    plVar2[4] = param_3[1];
    plVar2[3] = lVar4;
    *param_3 = 0;
    param_3[1] = 0;
    plStack_60 = plVar5;
    if ((uVar9 == 0) ||
       (*(float *)(param_1 + 0x80) * (float)uVar9 < (float)(*(long *)(param_1 + 0x78) + 1))) {
      plStack_68 = plVar2;
      func_0x0001088848dc(uVar9 << 1);
      FUN_108884388(param_1 + 0x60);
      uVar9 = *(ulong *)(param_1 + 0x68);
      if ((uVar9 & uVar9 - 1) == 0) {
        unaff_x24 = uVar9 - 1 & uVar8;
      }
      else {
        unaff_x24 = uVar8;
        if (uVar9 <= uVar8) {
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar3 = uVar8 / uVar9;
          }
          unaff_x24 = uVar8 - uVar3 * uVar9;
        }
      }
    }
    lVar4 = *(long *)(param_1 + 0x60);
    plVar6 = *(long **)(lVar4 + unaff_x24 * 8);
    if (plVar6 == (long *)0x0) {
      *plVar2 = *plVar5;
      *plVar5 = (long)plVar2;
      *(long **)(lVar4 + unaff_x24 * 8) = plVar5;
      if (*plVar2 != 0) {
        uVar8 = *(ulong *)(*plVar2 + 8);
        if ((uVar9 & uVar9 - 1) == 0) {
          uVar8 = uVar8 & uVar9 - 1;
        }
        else if (uVar9 <= uVar8) {
          uVar3 = 0;
          if (uVar9 != 0) {
            uVar3 = uVar8 / uVar9;
          }
          uVar8 = uVar8 - uVar3 * uVar9;
        }
        *(long **)(lVar4 + uVar8 * 8) = plVar2;
      }
    }
    else {
      *plVar2 = *plVar6;
      *plVar6 = (long)plVar2;
    }
    plStack_68 = (long *)0x0;
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
    FUN_108884548(&plStack_68);
  }
  return;
}



/* Entry: 108883e4c; end: 108883ff3;  */

undefined8 * FUN_108883e4c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [88];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  uStack_108 = *param_2;
  uStack_100 = *(undefined4 *)(param_2 + 1);
  puVar1 = auStack_f8;
  FUN_108884050(puVar1,param_3);
  uStack_98 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = *(undefined8 *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x18) != 0) {
    do {
      func_0x000108884850();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  lVar5 = puVar4[2];
  __ZNSt3__15mutex4lockEv(lVar5 + 8);
  lVar6 = *(long *)(lVar5 + 0x70);
  pcStack_90 = FUN_108884660;
  ppuStack_88 = &PTR_FUN_110a7ff28;
  puVar2 = (undefined8 *)0x78;
  __Znwm();
  puVar2[1] = CONCAT44(uStack_fc,uStack_100);
  *puVar2 = uStack_108;
  FUN_108884050(puVar2 + 2,auStack_f8);
  puVar2[0xe] = uStack_98;
  puVar2[0xd] = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_80 = puVar2;
  puStack_60 = puVar1;
  func_0x000107c28154(lVar5 + 0x48,&pcStack_90);
  func_0x0001088848b4();
  __ZNSt3__15mutex6unlockEv(lVar5 + 8);
  if (lVar6 == 0) {
    plVar3 = (long *)*puVar4;
    ppuStack_88 = (undefined **)puVar4[3];
    pcStack_90 = (code *)puVar4[2];
    if (puVar4[3] != 0) {
      do {
        func_0x000108884850();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    func_0x000107c27e74(&pcStack_90);
  }
  puVar4 = &uStack_108;
  FUN_108883ff4();
  func_0x000108884860(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_90);
    puVar4 = &uStack_108;
    FUN_108883ff4(puVar4);
    func_0x0001088848d4();
    FUN_108821938(puVar4 + 0xd);
    func_0x0001086513dc(puVar4 + 2);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 108883ff4; end: 10888401f;  */

long FUN_108883ff4(long param_1)

{
  FUN_108821938(param_1 + 0x68);
  func_0x0001086513dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 108884020; end: 10888402b;  */

undefined8 * FUN_108884020(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [88];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  uStack_108 = *param_2;
  uStack_100 = *(undefined4 *)(param_2 + 1);
  puVar1 = auStack_f8;
  FUN_108884050(puVar1,param_3);
  uStack_98 = *(undefined8 *)(param_1 + 0x10);
  uStack_a0 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000108884850();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  lVar5 = puVar4[2];
  __ZNSt3__15mutex4lockEv(lVar5 + 8);
  lVar6 = *(long *)(lVar5 + 0x70);
  pcStack_90 = FUN_108884660;
  ppuStack_88 = &PTR_FUN_110a7ff28;
  puVar2 = (undefined8 *)0x78;
  __Znwm();
  puVar2[1] = CONCAT44(uStack_fc,uStack_100);
  *puVar2 = uStack_108;
  FUN_108884050(puVar2 + 2,auStack_f8);
  puVar2[0xe] = uStack_98;
  puVar2[0xd] = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_80 = puVar2;
  puStack_60 = puVar1;
  func_0x000107c28154(lVar5 + 0x48,&pcStack_90);
  func_0x0001088848b4();
  __ZNSt3__15mutex6unlockEv(lVar5 + 8);
  if (lVar6 == 0) {
    plVar3 = (long *)*puVar4;
    ppuStack_88 = (undefined **)puVar4[3];
    pcStack_90 = (code *)puVar4[2];
    if (puVar4[3] != 0) {
      do {
        func_0x000108884850();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    func_0x000107c27e74(&pcStack_90);
  }
  puVar4 = &uStack_108;
  FUN_108883ff4();
  func_0x000108884860(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_90);
    puVar4 = &uStack_108;
    FUN_108883ff4(puVar4);
    func_0x0001088848d4();
    FUN_108821938(puVar4 + 0xd);
    func_0x0001086513dc(puVar4 + 2);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10888402c; end: 10888403f;  */

void FUN_10888402c(void)

{
  FUN_1088840c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108884040; end: 10888404f;  */

undefined8 * FUN_108884040(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  param_1[-1] = &PTR_DAT_110a7fdc8;
  *param_1 = &PTR_FUN_110a7fe00;
  plVar2 = (long *)param_1[0xd];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x000107c29764(lVar1);
    func_0x0001088848f4();
  }
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c2814c(param_1 + 9);
  func_0x000107c2814c(param_1 + 7);
  FUN_108821908(param_1 + 5);
  func_0x000107c28704(param_1 + 3);
  FUN_108821938(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 108884050; end: 1088840c3;  */

undefined8 * FUN_108884050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar3 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar3;
    param_1[1] = uVar2;
    *param_1 = uVar1;
    func_0x000107c279a0(param_1 + 4,param_2 + 4);
    uVar1 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return param_1;
}



/* Entry: 1088840c4; end: 108884153;  */

undefined8 * FUN_1088840c4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_DAT_110a7fdc8;
  param_1[1] = &PTR_FUN_110a7fe00;
  plVar2 = (long *)param_1[0xe];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x000107c29764(lVar1);
    func_0x0001088848f4();
  }
  lVar1 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c2814c(param_1 + 10);
  func_0x000107c2814c(param_1 + 8);
  FUN_108821908(param_1 + 6);
  func_0x000107c28704(param_1 + 4);
  FUN_108821938(param_1 + 2);
  return param_1;
}



/* Entry: 108884154; end: 1088841eb;  */

long FUN_108884154(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != param_2) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 1088841ec; end: 108884363;  */

void FUN_1088841ec(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  undefined8 *unaff_x22;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x00010888487c();
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar2 + 0x20) != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x50);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_b8 = *(undefined4 *)(unaff_x20 + 0x20);
    uStack_a8 = *(undefined8 *)(lVar2 + 0x18);
    uStack_b0 = *(undefined8 *)(lVar2 + 0x10);
    if (*(long *)(lVar2 + 0x18) != 0) {
      do {
        func_0x000108884850();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    lVar4 = puVar3[2];
    __ZNSt3__15mutex4lockEv(lVar4 + 8);
    lVar5 = *(long *)(lVar4 + 0x70);
    pcStack_a0 = FUN_108884790;
    ppuStack_98 = &PTR_FUN_110a7ff40;
    uStack_88 = CONCAT44(uStack_b4,uStack_b8);
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    lStack_70 = param_1;
    func_0x000107c28154(lVar4 + 0x48,&pcStack_a0);
    func_0x0001088848c4();
    __ZNSt3__15mutex6unlockEv(lVar4 + 8);
    if (lVar5 == 0) {
      plVar1 = (long *)*puVar3;
      ppuStack_98 = (undefined **)puVar3[3];
      pcStack_a0 = (code *)puVar3[2];
      if (puVar3[3] != 0) {
        do {
          func_0x000108884850();
        } while (extraout_w10_00 != 0);
      }
      (**(code **)(*plVar1 + 0x10))();
      func_0x000107c27e74(&pcStack_a0);
    }
    FUN_108821938(&uStack_b0);
    unaff_x22 = &uStack_c0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(lVar2 + 0x30) + 0x10);
  func_0x000108884860(uStack_68,*(long **)(lVar2 + 0x30),*(undefined8 *)(unaff_x20 + 0x18));
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_a0);
    FUN_108821938((undefined1 *)((long)unaff_x22 + 0x10));
    func_0x0001088848d4();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108884328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108884364; end: 108884387;  */

void FUN_108884364(void)

{
  return;
}



/* Entry: 108884388; end: 10888452f;  */

void FUN_108884388(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 - 1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_108884530(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_108884530(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + (long)plVar6 * 8);
            **(long **)(lVar2 + (long)plVar6 * 8) = (long)plVar3;
            plVar3 = plVar5;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108884530; end: 108884547;  */

void FUN_108884530(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108884548; end: 108884587;  */

long * FUN_108884548(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c29764(lVar1 + 0x18);
    }
    func_0x0001088848f4();
  }
  return param_1;
}



/* Entry: 108884588; end: 10888458f;  */

void FUN_108884588(void)

{
  return;
}



/* Entry: 108884590; end: 1088845c3;  */

void FUN_108884590(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110a7feb8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1088845c4; end: 10888461b;  */

void FUN_1088845c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110a7feb8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10888461c; end: 108884653;  */

long FUN_10888461c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a7ff18);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108884654; end: 10888465f;  */

undefined ** FUN_108884654(void)

{
  return &PTR_DAT_110a7ff18;
}



/* Entry: 108884660; end: 108884717;  */

void FUN_108884660(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long alStack_58 [2];
  undefined1 auStack_48 [40];
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  FUN_108884718(alStack_58,puVar3 + 0xd);
  if (alStack_58[0] != 0) {
    lVar1 = alStack_58[0] + 0x60;
    FUN_108884154(lVar1,*puVar3);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      FUN_108884908(auStack_48,*(undefined4 *)(puVar3 + 1),puVar3 + 2);
      FUN_108881c74(uVar2,auStack_48);
      func_0x000108739e00(auStack_48);
    }
  }
  func_0x00010882195c(alStack_58);
  return;
}



/* Entry: 108884718; end: 108884757;  */

void FUN_108884718(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 108884758; end: 108884777;  */

void FUN_108884758(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108883ff4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108884778; end: 10888478f;  */

void FUN_108884778(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108884790; end: 108884823;  */

void FUN_108884790(long param_1)

{
  long *plVar1;
  int extraout_w10;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  FUN_108884718(&lStack_30,param_1 + 0x20);
  if (lStack_30 != 0) {
    plVar1 = *(long **)(lStack_30 + 0x20);
    lStack_40 = lStack_30 + 8;
    lStack_38 = lStack_28;
    if (lStack_28 != 0) {
      do {
        func_0x000108884850();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x10))();
    FUN_1086514f8(&lStack_40);
  }
  func_0x00010882195c(&lStack_30);
  return;
}



/* Entry: 108884824; end: 108884907;  */

void FUN_108884824(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x000107c3398c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 108884908; end: 108884a47;  */

void FUN_108884908(undefined1 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined8 auStack_40 [3];
  undefined4 uStack_28;
  
  if ((param_3[0x50] & 1) != 0) {
    switch(param_2) {
    case 0:
      if (param_3[1] == '\x01') {
        auStack_40[0] = CONCAT71(auStack_40[0]._1_7_,*param_3);
        uStack_28 = 0;
code_r0x0001088849d8:
        FUN_108739e30(param_1,auStack_40);
        FUN_108739ed8(auStack_40);
        return;
      }
      break;
    case 1:
      if (param_3[8] == '\x01') {
        auStack_40[0] = CONCAT44(auStack_40[0]._4_4_,*(undefined4 *)(param_3 + 4));
        uStack_28 = 1;
        goto code_r0x0001088849d8;
      }
      break;
    case 2:
      if (param_3[0x18] == '\x01') {
        auStack_40[0] = *(undefined8 *)(param_3 + 0x10);
        uStack_28 = 2;
        goto code_r0x0001088849d8;
      }
      break;
    case 3:
      if (param_3[0x38] == '\x01') {
        FUN_108885020(auStack_40,param_3 + 0x20);
        goto code_r0x0001088849d8;
      }
      break;
    case 4:
      if (param_3[0x48] == '\x01') {
        auStack_40[0] = *(undefined8 *)(param_3 + 0x40);
        uStack_28 = 4;
        goto code_r0x0001088849d8;
      }
    }
  }
  *param_1 = 0;
  param_1[0x20] = 0;
  return;
}



/* Entry: 108884a48; end: 108884ac7;  */

void FUN_108884a48(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puStack_30;
  undefined1 *puStack_28;
  
  *param_1 = &PTR_DAT_110d19fd8;
  param_1[1] = 0;
  param_1[3] = 0;
  puStack_30 = param_1;
  func_0x00010888503c();
  uVar1 = (ulong)*(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x18) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  puStack_28 = (undefined1 *)&puStack_30;
  (*(code *)(&PTR_FUN_110a7ff58)[uVar1])(&puStack_28,param_2);
  return;
}



/* Entry: 108884ac8; end: 108884b57;  */

void FUN_108884ac8(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_2 + 0x1c)) {
  default:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 3) = 0;
    goto code_r0x000108884b50;
  case 2:
    FUN_108885020(param_1,*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  case 3:
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 3) = 1;
    goto code_r0x000108884b50;
  case 4:
    *param_1 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = 2;
    break;
  case 5:
    *param_1 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = 4;
  }
  *(undefined4 *)(param_1 + 3) = uVar1;
code_r0x000108884b50:
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Entry: 108884b58; end: 108884e57;  */

long * FUN_108884b58(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar9;
  long lVar10;
  code *pcStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 auStack_1a8 [80];
  undefined1 auStack_158 [80];
  undefined1 auStack_108 [16];
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 auStack_d8 [8];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_1b8 = *param_2;
  lStack_1b0 = param_2[1];
  if (lStack_1b0 != 0) {
    plVar7 = (long *)(lStack_1b0 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_1c8 = *param_3;
  lStack_1c0 = param_3[1];
  if (lStack_1c0 != 0) {
    plVar7 = (long *)(lStack_1c0 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lStack_1b0 != 0) {
    plVar7 = (long *)(lStack_1b0 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_98 = lStack_1b8;
  lStack_90 = lStack_1b0;
  uStack_88 = uStack_1c8;
  lStack_80 = lStack_1c0;
  if (lStack_1c0 != 0) {
    do {
      func_0x000108885734();
    } while (extraout_w10 != 0);
  }
  FUN_1088851c4(auStack_78,param_4);
  FUN_10873a488(auStack_108,1);
  puVar4 = puStack_f8;
  puStack_f8[2] = 0;
  *puStack_f8 = &PTR_FUN_110a6a050;
  puStack_f8[1] = 0;
  pcStack_e8 = FUN_108885220;
  ppuStack_e0 = &PTR_FUN_110a7ff80;
  uVar5 = 0x40;
  __Znwm();
  FUN_108884e58();
  auStack_d8[0] = uVar5;
  FUN_108881990(puVar4 + 3,&pcStack_e8);
  func_0x000108885790();
  puVar4 = puStack_f8;
  puStack_f8 = (undefined8 *)0x0;
  pcVar1 = (code *)(puVar4 + 3);
  *param_1 = (long)pcVar1;
  param_1[1] = (long)puVar4;
  FUN_10873a61c(auStack_108);
  puStack_1d0 = puVar4;
  pcStack_1d8 = pcVar1;
  if (puVar4 != (undefined8 *)0x0) {
    do {
      func_0x000108885734();
    } while (extraout_w10_00 != 0);
    do {
      func_0x000108885734();
    } while (extraout_w10_01 != 0);
  }
  ppuStack_e0 = (undefined **)puVar4;
  pcStack_e8 = pcVar1;
  FUN_108884e58(auStack_d8,&lStack_98);
  lVar9 = *param_2;
  puVar6 = auStack_158;
  FUN_108884f10(puVar6,&pcStack_e8);
  puStack_f0 = (undefined1 *)0x0;
  func_0x000108885760();
  func_0x0001088857a8();
  FUN_108885404();
  puStack_f0 = puVar6;
  FUN_1088819f0(lVar9,auStack_108);
  func_0x000108885778();
  FUN_108884f58(auStack_158);
  uVar5 = *param_3;
  puVar6 = auStack_1a8;
  FUN_108884f10(puVar6,&pcStack_e8);
  puStack_f0 = (undefined1 *)0x0;
  func_0x000108885760();
  func_0x0001088857c8();
  FUN_108885404();
  puVar8 = auStack_108;
  puStack_f0 = puVar6;
  FUN_1088819f0(uVar5);
  func_0x000108885778();
  FUN_108884f58(auStack_1a8);
  FUN_108884f58(&pcStack_e8);
  FUN_1087398dc(&pcStack_1d8);
  func_0x000108884f80(&lStack_98);
  FUN_1087398dc(&uStack_1c8);
  plVar7 = &lStack_1b8;
  FUN_1087398dc();
  func_0x0001088857b8(uStack_58);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    func_0x000108885778();
    FUN_108884f58(auStack_1a8);
    FUN_108884f58(&pcStack_e8);
    FUN_1087398dc(&pcStack_1d8);
    func_0x000107c29764(param_1);
    func_0x000108884f80(&lStack_98);
    FUN_1087398dc(&uStack_1c8);
    FUN_1087398dc(&lStack_1b8);
    func_0x000108885758();
    func_0x000108885828();
    if (extraout_x8_00 != 0) {
      do {
        func_0x000108885734();
      } while (extraout_w10_02 != 0);
    }
    lVar9 = *(long *)(puVar8 + 0x18);
    lVar10 = *(long *)(puVar8 + 0x10);
    param_1[3] = *(long *)(puVar8 + 0x18);
    param_1[2] = lVar10;
    if (lVar9 != 0) {
      do {
        func_0x000108885734();
      } while (extraout_w10_03 != 0);
    }
    plVar7 = *(long **)(puVar8 + 0x38);
    if (plVar7 != (long *)0x0) {
      if (plVar7 == (long *)(puVar8 + 0x20)) {
        param_1[7] = (long)(param_1 + 4);
        (**(code **)(**(long **)(puVar8 + 0x38) + 0x18))(*(long **)(puVar8 + 0x38),param_1 + 4);
        return param_1;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    param_1[7] = (long)plVar7;
    return param_1;
  }
  return plVar7;
}



/* Entry: 108884e58; end: 108884f0f;  */

void FUN_108884e58(undefined8 param_1,long param_2)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 uVar3;
  
  func_0x000108885828();
  if (extraout_x8 != 0) {
    do {
      func_0x000108885734();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000108885734();
    } while (extraout_w10_00 != 0);
  }
  plVar1 = *(long **)(param_2 + 0x38);
  if (plVar1 != (long *)0x0) {
    if (plVar1 == (long *)(param_2 + 0x20)) {
      *(long *)(unaff_x19 + 0x38) = unaff_x19 + 0x20;
      (**(code **)(**(long **)(param_2 + 0x38) + 0x18))(*(long **)(param_2 + 0x38),unaff_x19 + 0x20)
      ;
      return;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(long **)(unaff_x19 + 0x38) = plVar1;
  return;
}



/* Entry: 108884f10; end: 108884f57;  */

void FUN_108884f10(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  
  func_0x000108885828();
  if (extraout_x8 != 0) {
    do {
      func_0x000108885734();
    } while (extraout_w10 != 0);
  }
  FUN_108884e58(unaff_x19 + 0x10,param_2 + 0x10);
  return;
}



/* Entry: 108884f58; end: 108884faf;  */

undefined8 FUN_108884f58(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000108884f80(param_1 + 0x10);
  func_0x000107c332a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 108884fb0; end: 10888501f;  */

void FUN_108884fb0(void)

{
  undefined ***pppuVar1;
  long extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  func_0x0001088857b8();
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_110a800a8;
  uStack_28 = extraout_x9;
  FUN_108884b58();
  FUN_108739fa4(appuStack_48);
  func_0x0001088857b8(uStack_28);
  if (extraout_x9_00 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  pppuVar1 = appuStack_48;
  FUN_108739fa4();
  func_0x000108885780();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(pppuVar1 + 3) = 3;
  return;
}



/* Entry: 108885020; end: 108885057;  */

void FUN_108885020(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(param_1 + 0x18) = 3;
  return;
}



/* Entry: 108885058; end: 108885163;  */

void FUN_108885058(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  
  func_0x00010888581c();
  uVar1 = *param_2;
  if (*(int *)(unaff_x19 + 0x1c) != 1) {
    func_0x000108885788();
    *(undefined4 *)(unaff_x19 + 0x1c) = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar1;
  return;
}



/* Entry: 108885164; end: 1088851a7;  */

void FUN_108885164(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010888581c();
  uVar1 = *param_2;
  if (*(int *)(unaff_x19 + 0x1c) != 5) {
    func_0x000108885788();
    *(undefined4 *)(unaff_x19 + 0x1c) = 5;
  }
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  return;
}



/* Entry: 1088851a8; end: 1088851c3;  */

void FUN_1088851a8(long param_1)

{
  FUN_108885020();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1088851c4; end: 10888521f;  */

long FUN_1088851c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 108885220; end: 10888522b;  */

void FUN_108885220(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  long alStack_40 [2];
  long alStack_30 [2];
  
  lVar3 = *(long *)(param_2 + 0x10);
  FUN_108739dc4(alStack_30,lVar3);
  FUN_108739dc4(alStack_40,lVar3 + 0x10);
  if ((alStack_30[0] == 0) || (alStack_40[0] == 0)) {
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    FUN_108881a90(auStack_68);
    FUN_108881a90(auStack_90,alStack_40[0]);
    plVar2 = *(long **)(lVar3 + 0x38);
    if (plVar2 == (long *)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1088852d0);
      (*pcVar1)();
    }
    (**(code **)(*plVar2 + 0x30))(param_1,plVar2,auStack_68,auStack_90);
    func_0x0001088857a0();
    func_0x000108885768();
  }
  func_0x000107c29764(alStack_40);
  func_0x000108885770();
  return;
}



/* Entry: 10888522c; end: 1088852fb;  */

void FUN_10888522c(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  long alStack_40 [2];
  long alStack_30 [2];
  
  FUN_108739dc4(alStack_30,param_2);
  FUN_108739dc4(alStack_40,param_2 + 0x10);
  if ((alStack_30[0] == 0) || (alStack_40[0] == 0)) {
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    FUN_108881a90(auStack_68);
    FUN_108881a90(auStack_90,alStack_40[0]);
    plVar2 = *(long **)(param_2 + 0x38);
    if (plVar2 == (long *)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1088852d0);
      (*pcVar1)();
    }
    (**(code **)(*plVar2 + 0x30))(param_1,plVar2,auStack_68,auStack_90);
    func_0x0001088857a0();
    func_0x000108885768();
  }
  func_0x000107c29764(alStack_40);
  func_0x000108885770();
  return;
}



/* Entry: 1088852fc; end: 10888531b;  */

void FUN_1088852fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108884f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10888531c; end: 108885333;  */

void FUN_10888531c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108885334; end: 108885357;  */

undefined8 FUN_108885334(undefined8 param_1)

{
  func_0x0001088857a8();
  FUN_108884f58();
  return param_1;
}



/* Entry: 108885358; end: 10888536b;  */

void FUN_108885358(void)

{
  FUN_108885334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10888536c; end: 10888539f;  */

undefined8 FUN_10888536c(undefined8 param_1)

{
  func_0x000108885760();
  func_0x000108885450();
  return param_1;
}



/* Entry: 1088853a0; end: 1088853cb;  */

undefined8 FUN_1088853a0(long param_1,undefined8 param_2)

{
  func_0x0001088857a8(param_2,param_1 + 8);
  FUN_108884f10();
  return param_2;
}



/* Entry: 1088853cc; end: 1088853f7;  */

void FUN_1088853cc(undefined8 param_1,undefined8 param_2)

{
  func_0x000108885800(param_2,param_1,&PTR_DAT_110a80008);
  func_0x0001088857d8();
  return;
}



/* Entry: 1088853f8; end: 108885403;  */

undefined ** FUN_1088853f8(void)

{
  return &PTR_DAT_110a80008;
}



/* Entry: 108885404; end: 108885473;  */

undefined8 * FUN_108885404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_1088851c4(param_1 + 6,param_2 + 6);
  return param_1;
}



/* Entry: 108885474; end: 1088854e7;  */

void FUN_108885474(long param_1)

{
  undefined1 auStack_58 [40];
  long alStack_30 [2];
  
  FUN_108739dc4(alStack_30);
  if (alStack_30[0] != 0) {
    FUN_10888522c(auStack_58,param_1 + 0x10);
    FUN_108881c74(alStack_30[0],auStack_58);
    func_0x000108739e00(auStack_58);
  }
  func_0x000108885770();
  return;
}



/* Entry: 1088854e8; end: 10888550b;  */

undefined8 FUN_1088854e8(undefined8 param_1)

{
  func_0x0001088857c8();
  FUN_108884f58();
  return param_1;
}



/* Entry: 10888550c; end: 10888551f;  */

void FUN_10888550c(void)

{
  FUN_1088854e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108885520; end: 108885553;  */

undefined8 FUN_108885520(undefined8 param_1)

{
  func_0x000108885760();
  FUN_1088855b8();
  return param_1;
}



/* Entry: 108885554; end: 10888557f;  */

undefined8 FUN_108885554(long param_1,undefined8 param_2)

{
  func_0x0001088857c8(param_2,param_1 + 8);
  FUN_108884f10();
  return param_2;
}



/* Entry: 108885580; end: 1088855ab;  */

void FUN_108885580(undefined8 param_1,undefined8 param_2)

{
  func_0x000108885800(param_2,param_1,&PTR_DAT_110a80088);
  func_0x0001088857d8();
  return;
}



/* Entry: 1088855ac; end: 1088855b7;  */

undefined ** FUN_1088855ac(void)

{
  return &PTR_DAT_110a80088;
}



/* Entry: 1088855b8; end: 1088855db;  */

undefined8 FUN_1088855b8(undefined8 param_1)

{
  func_0x0001088857c8();
  FUN_108884f10();
  return param_1;
}



/* Entry: 1088855dc; end: 1088855e3;  */

void FUN_1088855dc(void)

{
  return;
}



/* Entry: 1088855e4; end: 108885607;  */

void FUN_1088855e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a800a8;
  return;
}



/* Entry: 108885608; end: 108885627;  */

void FUN_108885608(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a800a8;
  return;
}



/* Entry: 108885628; end: 1088856fb;  */

void FUN_108885628(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte abStack_90 [24];
  int iStack_78;
  char cStack_70;
  byte abStack_68 [24];
  int iStack_50;
  char cStack_48;
  byte abStack_40 [24];
  undefined4 uStack_28;
  
  pbVar2 = abStack_90;
  FUN_108881da0(abStack_68);
  FUN_108881da0(abStack_90,param_4);
  if (cStack_48 == '\x01') {
    if (iStack_50 == 0) {
      pbVar1 = abStack_68;
      func_0x00010873a0a8();
      bVar4 = *pbVar1;
      goto LAB_10888567c;
    }
LAB_108885690:
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    bVar4 = 0;
LAB_10888567c:
    if (cStack_70 == '\x01') {
      if (iStack_78 != 0) goto LAB_108885690;
      func_0x00010873a0a8();
      bVar3 = *pbVar2;
    }
    else {
      bVar3 = 0;
    }
    abStack_40[0] = (bVar4 | bVar3) & 1;
    uStack_28 = 0;
    FUN_108739e30(param_1,abStack_40);
    FUN_108739ed8(abStack_40);
  }
  func_0x0001088857a0();
  func_0x000108885768();
  return;
}



/* Entry: 1088856fc; end: 108885727;  */

void FUN_1088856fc(undefined8 param_1,undefined8 param_2)

{
  func_0x000108885800(param_2,param_1,&PTR_DAT_110a80108);
  func_0x0001088857d8();
  return;
}



/* Entry: 108885728; end: 10888583b;  */

undefined ** FUN_108885728(void)

{
  return &PTR_DAT_110a80108;
}



/* Entry: 10888583c; end: 108885873;  */

long FUN_10888583c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1087265c4();
  }
  else {
    FUN_108684a58();
  }
  return param_1;
}



/* Entry: 108885874; end: 108885887;  */

undefined8 FUN_108885874(undefined8 param_1)

{
  return param_1;
}



/* Entry: 108885888; end: 108885a43;  */

void FUN_108885888(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [40];
  undefined1 *puStack_118;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [80];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_2;
  uStack_38 = param_1;
  FUN_108885a44(auStack_b8,0x23a);
  FUN_108681bac(auStack_90,param_2 + 0x1a0,auStack_b8,1,1);
  FUN_108657130(auStack_b8);
  lVar1 = param_2 + 0x1a0;
  FUN_108885a70(lVar1);
  FUN_108681d54(auStack_e0,lVar1,0x23b);
  func_0x000108885a88(param_2 + 0x180);
  FUN_108863b54(auStack_110);
  puStack_118 = auStack_110;
  func_0x000107c29010(auStack_140,puStack_118);
  FUN_108885aa0(auStack_168,puStack_118);
  while( true ) {
    puVar2 = auStack_140;
    FUN_108885ae4(puVar2,auStack_168);
    if (((ulong)puVar2 & 1) == 0) break;
    puVar2 = auStack_140;
    FUN_1086afc30();
    FUN_1088b012c(param_2 + 8,puVar2);
    FUN_108681d9c(auStack_e0,1);
    func_0x000108885b18(auStack_140);
  }
  func_0x000108885b4c(auStack_168);
  func_0x000108885b4c(auStack_140);
  func_0x00010bcd3464(param_1);
  func_0x000108885b80(auStack_110);
  FUN_108681d9c(auStack_e0);
  FUN_108681bac(auStack_90);
  return;
}



/* Entry: 108885a44; end: 108885a6f;  */

void FUN_108885a44(undefined8 param_1,undefined4 param_2)

{
  FUN_10888d9f4(param_1,param_2);
  return;
}



/* Entry: 108885a70; end: 108885a9f;  */

undefined8 FUN_108885a70(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 108885aa0; end: 108885ae3;  */

void FUN_108885aa0(undefined8 param_1)

{
  _memset(param_1,0,0x28);
  FUN_108894cb0(param_1);
  return;
}



/* Entry: 108885ae4; end: 108885b17;  */

uint FUN_108885ae4(undefined8 param_1,undefined8 param_2)

{
  func_0x000108894f78(param_1,param_2);
  return ((uint)param_1 ^ 1) & 1;
}



/* Entry: 108885b18; end: 108885bb3;  */

undefined8 FUN_108885b18(undefined8 param_1)

{
  func_0x000107c29018(param_1);
  return param_1;
}



/* Entry: 108885bb4; end: 108885bcf;  */

void FUN_108885bb4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [40];
  undefined1 *puStack_118;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [80];
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = param_2 + -8;
  uStack_38 = param_1;
  FUN_108885a44(auStack_b8,0x23a);
  FUN_108681bac(auStack_90,param_2 + 0x198,auStack_b8,1,1);
  FUN_108657130(auStack_b8);
  lVar1 = param_2 + 0x198;
  FUN_108885a70(lVar1);
  FUN_108681d54(auStack_e0,lVar1,0x23b);
  func_0x000108885a88(param_2 + 0x178);
  FUN_108863b54(auStack_110);
  puStack_118 = auStack_110;
  func_0x000107c29010(auStack_140,puStack_118);
  FUN_108885aa0(auStack_168,puStack_118);
  while( true ) {
    puVar2 = auStack_140;
    FUN_108885ae4(puVar2,auStack_168);
    if (((ulong)puVar2 & 1) == 0) break;
    puVar2 = auStack_140;
    FUN_1086afc30();
    FUN_1088b012c(param_2,puVar2);
    FUN_108681d9c(auStack_e0,1);
    func_0x000108885b18(auStack_140);
  }
  func_0x000108885b4c(auStack_168);
  func_0x000108885b4c(auStack_140);
  func_0x00010bcd3464(param_1);
  func_0x000108885b80(auStack_110);
  FUN_108681d9c(auStack_e0);
  FUN_108681bac(auStack_90);
  return;
}



/* Entry: 108885bd0; end: 108885c23;  */

void FUN_108885bd0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_1088b012c(param_1 + 8,param_2);
  plVar1 = (long *)(param_1 + 0x1a0);
  FUN_108885c24();
  (**(code **)(*plVar1 + 0x48))();
  return;
}



/* Entry: 108885c24; end: 108885c3b;  */

undefined8 FUN_108885c24(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 108885c3c; end: 108885f3f;  */

void FUN_108885c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar5 = (undefined8 *)0xb8;
  __Znwm();
  *puVar5 = FUN_1088a5d20;
  puVar5[1] = FUN_1088a5fa4;
  uVar9 = (long)puVar5 + 0xb1;
  puVar7 = puVar5 + 0xe;
  puVar1 = puVar5 + 0x13;
  puVar2 = puVar5 + 0x14;
  uVar3 = (long)puVar5 + 0xb2;
  puVar4 = puVar5 + 2;
  puVar5[0x15] = param_2;
  func_0x000107c2a184(puVar4);
  func_0x000107c287c4(param_1,puVar4);
  func_0x000107c2a188(puVar4);
  uVar6 = uVar9;
  func_0x000107c2a18c();
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x16) = 0;
    func_0x000107c2a194();
    ppuVar8 = &puStack_80;
    puStack_80 = puVar5;
    func_0x000107c2a198(ppuVar8);
    FUN_108885f40(uVar9,ppuVar8);
  }
  else {
    func_0x000107c2a19c(uVar9);
    lVar10 = puVar5[0x15];
    FUN_108885a44(puVar7,0x23f);
    FUN_108681bac(puVar5 + 4,lVar10 + 0x1a0,puVar7,1,1);
    lVar10 = puVar5[0x15];
    FUN_108657130(puVar7);
    FUN_1088b0f60(puVar2,lVar10 + 8);
    func_0x000107c2a1a0(puVar1,puVar2);
    puVar7 = puVar1;
    func_0x000107c2a1a4();
    if (((ulong)puVar7 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x16) = 1;
      puVar7 = puVar5;
      func_0x000107c2a194();
      ppuVar8 = &puStack_78;
      puStack_78 = puVar7;
      func_0x000107c2a198(ppuVar8);
      puVar7 = puVar1;
      func_0x000107c28830(puVar1,ppuVar8);
      if (((ulong)puVar7 & 1) != 0) {
        return;
      }
    }
    func_0x000107c28834(puVar1);
    FUN_108885f54(puVar1);
    func_0x000107c2a1ac(puVar2);
    FUN_108681bac(puVar5 + 4);
    func_0x000107c287c8(puVar4);
    FUN_108885f88(puVar4);
    uVar9 = uVar3;
    func_0x000107c2a18c();
    if ((uVar9 & 1) == 0) {
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 0x16) = 2;
      func_0x000107c2a194();
      ppuVar8 = apuStack_70;
      apuStack_70[0] = puVar5;
      func_0x000107c2a198(ppuVar8);
      FUN_108885f40(uVar3,ppuVar8);
    }
    else {
      func_0x000107c2a19c(uVar3);
      FUN_108885f98(puVar4);
      __ZdlPv(puVar5);
    }
  }
  return;
}



/* Entry: 108885f40; end: 108885f53;  */

void FUN_108885f40(void)

{
  return;
}



/* Entry: 108885f54; end: 108885f87;  */

undefined8 FUN_108885f54(undefined8 param_1)

{
  FUN_10888e2f8(param_1);
  return param_1;
}



/* Entry: 108885f88; end: 108885f97;  */

void FUN_108885f88(void)

{
  return;
}



/* Entry: 108885f98; end: 108885fcb;  */

undefined8 FUN_108885f98(undefined8 param_1)

{
  FUN_10888e3b4(param_1);
  return param_1;
}



/* Entry: 108885fcc; end: 10888600b;  */

void FUN_108885fcc(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x1a0);
  FUN_108885c24();
  (**(code **)(*plVar1 + 0x48))();
  return;
}


