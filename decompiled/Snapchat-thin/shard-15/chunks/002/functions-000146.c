/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b91e8d4; end: 10b91eb87;  */

code ** FUN_10b91e8d4(long *param_1,long *param_2,undefined8 *param_3,long *param_4,
                     undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  code **ppcVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long *plVar8;
  undefined8 uVar9;
  long lStack_110;
  undefined1 uStack_101;
  code *pcStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [56];
  code *pcStack_a8;
  undefined8 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined8 uStack_68;
  
  func_0x00010b920908();
  puVar3 = (undefined8 *)0x20;
  uStack_68 = extraout_x8;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110d765f0;
  plVar4 = (long *)0xa8;
  __Znwm();
  plVar8 = plVar4 + 3;
  *plVar8 = 0x32aaaba7;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0x3cb0b1bb;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  *(undefined8 *)((long)plVar4 + 0x84) = 0;
  *(undefined8 *)((long)plVar4 + 0x7c) = 0;
  *plVar4 = (long)&PTR_DAT_110d76640;
  pcStack_100 = (code *)(puVar3 + 3);
  *(long **)pcStack_100 = plVar4;
  puStack_f8 = puVar3;
  func_0x00010b8fd0f0();
  FUN_10b9a8ad8(&uStack_101);
  uVar9 = *param_3;
  lStack_110 = param_2[3];
  if ((lStack_110 != 0) && (*(long *)(lStack_110 + 0x10) != 0)) {
    do {
      func_0x00010b9208f8();
      lStack_110 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  do {
    func_0x00010b920988();
  } while (extraout_w10 != 0);
  plStack_e8 = param_2;
  FUN_10b91eb88(auStack_e0,param_5,param_6);
  puStack_a0 = puStack_f8;
  pcStack_a8 = pcStack_100;
  if (puStack_f8 != (undefined8 *)0x0) {
    do {
      func_0x00010b920930();
    } while (extraout_w10_00 != 0);
  }
  pcStack_98 = FUN_10b91f624;
  ppuStack_90 = &PTR_FUN_110d76498;
  plVar5 = (long *)0x50;
  __Znwm();
  *plVar5 = (long)plStack_e8;
  plStack_e8 = (long *)0x0;
  FUN_10b91fac4(plVar5 + 1,auStack_e0);
  plVar5[9] = (long)puStack_a0;
  plVar5[8] = (long)pcStack_a8;
  pcStack_a8 = (code *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  plStack_88 = plVar5;
  func_0x0001080d3888(uVar9,&lStack_110,&pcStack_98);
  (*(code *)*ppuStack_90)(&ppuStack_90);
  FUN_10b91eb94(&plStack_e8);
  func_0x00010b920ac8();
  plVar5 = plVar4;
  FUN_10b920060(plVar4,param_4);
  if ((int)plVar5 == 0) {
    auStack_e0[0] = 1;
    plStack_f0 = plVar4;
    plStack_e8 = plVar8;
    __ZNSt3__15mutex4lockEv(plVar8);
    __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(plVar4,&plStack_e8);
    param_4 = plVar4 + 2;
    lVar7 = *param_4;
    pcStack_98 = (code *)0x0;
    __ZNSt13exception_ptrD1Ev(&pcStack_98);
    if (lVar7 != 0) goto LAB_10b91eb74;
    *param_1 = plVar4[0x12];
    lVar7 = plVar4[0x13];
    param_1[2] = plVar4[0x14];
    param_1[1] = lVar7;
    plVar4[0x12] = 0;
    func_0x0001090eb46c(&plStack_e8);
    func_0x00010b920858(&plStack_f0);
    plVar4 = (long *)0x0;
  }
  else {
    FUN_10b99f5f8(&plStack_e8,&UNK_10f7cdbde);
    *param_1 = 2;
    param_1[1] = (long)plStack_e8;
    plStack_e8 = (long *)0x0;
    func_0x000104bda960(0);
  }
  FUN_10b9a8b40(&uStack_101);
  if (plVar4 != (long *)0x0) {
    plVar8 = plVar4 + 1;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  ppcVar6 = &pcStack_100;
  FUN_10b920830(ppcVar6);
  func_0x00010b9208e4(uStack_68);
  if ((bool)in_ZR) {
    return ppcVar6;
  }
  ___stack_chk_fail();
LAB_10b91eb74:
  __ZNSt13exception_ptrC1ERKS_(&pcStack_98,param_4);
  ppcVar6 = &pcStack_98;
  __ZSt17rethrow_exceptionSt13exception_ptr();
  *ppcVar6 = (code *)(ppcVar6 + 3);
  ppcVar6[2] = (code *)0x2;
  ppcVar6[1] = (code *)0x0;
  FUN_10b91f390();
  return ppcVar6;
}



/* Entry: 10b91eb88; end: 10b91eb93;  */

long * FUN_10b91eb88(long *param_1,long param_2,long param_3)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 2;
  param_1[1] = 0;
  FUN_10b91f390(param_1,param_2,param_2 + param_3 * 0x10,0);
  return param_1;
}



/* Entry: 10b91eb94; end: 10b91ebbf;  */

undefined8 * FUN_10b91eb94(undefined8 *param_1)

{
  FUN_10b920830(param_1 + 8);
  func_0x00010b8df154(param_1 + 1);
  func_0x00010b902ba0(*param_1);
  return param_1;
}



/* Entry: 10b91ebc0; end: 10b91ef87;  */

/* WARNING: Possible PIC construction at 0x00010b91ef48: Changing call to branch */

code ** FUN_10b91ebc0(code **param_1,code *param_2,long **param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  code *pcVar5;
  long *plVar6;
  long **pplVar7;
  code **ppcVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  long lVar9;
  code *apcStack_e0 [2];
  long lStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  long *aplStack_b0 [6];
  int iStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long **pplStack_68;
  undefined8 uStack_48;
  
  func_0x00010b920908();
  uStack_48 = extraout_x8;
  func_0x00010b920abc();
  if (apcStack_e0[0] == (code *)0x0) {
LAB_10b91ef54:
    func_0x00010b920a8c();
  }
  else {
    in_ZR = param_2[0x82] == (code)0x1;
    if ((bool)in_ZR) {
      func_0x00010b920b30();
      if (!(bool)in_ZR) {
        iVar4 = (int)*(long *)(param_2 + 0x18);
        func_0x00010b8c1f54();
        if (iVar4 != 0) goto LAB_10b91ef54;
        goto LAB_10b91ec50;
      }
      func_0x00010b8c2f90(&pcStack_c0,param_2 + 0x70);
      if ((pcStack_c0 != (code *)0x0) &&
         (pcVar5 = pcStack_c0, func_0x00010b8c1f54(), (int)pcVar5 == 0)) {
        func_0x00010b8c2ec8(&pcStack_c0);
        goto LAB_10b91ec50;
      }
      func_0x00010b920a8c();
      func_0x00010b8c2ec8(&pcStack_c0);
    }
    else {
LAB_10b91ec50:
      bVar1 = *(byte *)param_3;
      pcVar5 = apcStack_e0[0];
      (**(code **)(*(long *)apcStack_e0[0] + 0x28))();
      if (((ulong)pcVar5 & 1) == 0) {
        if ((bVar1 >> 1 & 1) == 0) {
          in_ZR = 0;
          if (((bVar1 & 9) != 0) || (in_ZR = param_2[0x80] == (code)0x1, (bool)in_ZR))
          goto LAB_10b91ec84;
          if ((bVar1 >> 2 & 1) == 0) {
            lVar9 = *(long *)(param_2 + 0x18);
            if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
              do {
                func_0x00010b9208f8();
                lVar9 = extraout_x8_03;
              } while (extraout_w11_02 != 0);
            }
            do {
              func_0x00010b920988();
            } while (extraout_w10_02 != 0);
            func_0x00010b920a1c();
            pcStack_78 = FUN_10b920480;
            ppuStack_70 = &PTR_DAT_110d765a0;
            __Znwm(0x40);
            func_0x00010b9209fc();
            pplStack_68 = param_3;
            func_0x00010b9209f0();
            func_0x00010b920940(ppuStack_70);
            func_0x00010b91efa4(&pcStack_c0);
            func_0x000105276914(lVar9);
            goto LAB_10b91ef54;
          }
        }
        else if ((bVar1 >> 2 & 1) == 0) {
          if ((apcStack_e0[0] != (code *)0x0) && (*(long *)(apcStack_e0[0] + 0x10) != 0)) {
            do {
              func_0x00010b920930();
            } while (extraout_w10 != 0);
          }
          func_0x000104bf2d3c(&bStack_c8);
          lStack_d0 = *(long *)(param_2 + 0x18);
          if ((lStack_d0 != 0) && (*(long *)(lStack_d0 + 0x10) != 0)) {
            do {
              func_0x00010b9208f8();
              lStack_d0 = extraout_x8_01;
            } while (extraout_w11_00 != 0);
          }
          do {
            func_0x00010b920988();
          } while (extraout_w10_00 != 0);
          ppuStack_b8 = (undefined **)CONCAT71(uStack_c7,bStack_c8);
          pcStack_c0 = param_2;
          if ((ppuStack_b8 != (undefined **)0x0) && (ppuStack_b8[2] != (undefined *)0x0)) {
            do {
              func_0x00010b9208f8();
              ppuStack_b8 = (undefined **)extraout_x8_02;
            } while (extraout_w11_01 != 0);
          }
          pplVar7 = aplStack_b0;
          FUN_10b91eb88(pplVar7,param_3[1],param_3[2]);
          pcStack_78 = FUN_10b920520;
          ppuStack_70 = &PTR_FUN_110d765c0;
          func_0x00010b920a64();
          pplVar7[1] = (long *)ppuStack_b8;
          *pplVar7 = (long *)pcStack_c0;
          pcStack_c0 = (code *)0x0;
          ppuStack_b8 = (undefined **)0x0;
          FUN_10b91fac4(pplVar7 + 2,aplStack_b0);
          pplStack_68 = pplVar7;
          func_0x00010b9209f0();
          func_0x00010b920940(ppuStack_70);
          func_0x00010b91efc0(&pcStack_c0);
          func_0x000105276914(lStack_d0);
          pcVar5 = (code *)CONCAT71(uStack_c7,bStack_c8);
          if ((pcVar5 != (code *)0x0) && (*(long *)(pcVar5 + 0x10) != 0)) {
            do {
              func_0x00010b920930();
            } while (extraout_w10_01 != 0);
          }
          pcStack_c0 = pcVar5;
          func_0x00010b9a8f78(param_1,&pcStack_c0);
          func_0x000104bddf04(pcVar5);
          func_0x000104bf3588(CONCAT71(uStack_c7,bStack_c8));
          goto LAB_10b91ed0c;
        }
        pcVar5 = param_2 + 0x58;
        do {
          iVar4 = *(int *)pcVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar5,0x10);
          if (bVar3) {
            *(int *)pcVar5 = iVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((*(long *)(param_2 + 0x18) != 0) && (*(long *)(*(long *)(param_2 + 0x18) + 0x10) != 0))
        {
          do {
            func_0x00010b9208f8();
          } while (extraout_w11_03 != 0);
        }
        do {
          func_0x00010b920988();
        } while (extraout_w10_03 != 0);
        func_0x00010b920a1c();
        pcStack_78 = FUN_10b9203c4;
        ppuStack_70 = &PTR_DAT_110d76580;
        iStack_80 = iVar4 + 1;
        func_0x00010b920a64();
        func_0x00010b9209fc();
        *(int *)(param_3 + 8) = iStack_80;
        pplStack_68 = param_3;
        func_0x00010b9209f0();
        func_0x00010b920940(ppuStack_70);
        goto FUN_10b91ef88;
      }
LAB_10b91ec84:
      if (*(long *)(param_2 + 0x68) != 0) {
        func_0x00010b94be7c();
      }
      if ((apcStack_e0[0] != (code *)0x0) && (*(long *)(apcStack_e0[0] + 0x10) != 0)) {
        do {
          func_0x00010b9208f8();
          apcStack_e0[0] = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      bStack_c8 = bVar1;
      pcStack_78 = apcStack_e0[0];
      func_0x00010b920a8c();
      lVar9 = *(long *)(param_2 + 0x18);
      pcStack_c0 = FUN_10b91fc24;
      ppuStack_b8 = &PTR_DAT_110d76560;
      plVar6 = (long *)0x28;
      __Znwm();
      *plVar6 = (long)param_2;
      plVar6[1] = (long)&bStack_c8;
      plVar6[2] = (long)param_3;
      plVar6[3] = (long)&pcStack_78;
      plVar6[4] = (long)param_1;
      aplStack_b0[0] = plVar6;
      (**(code **)(lVar9 + 0x30))(&pcStack_c0);
      func_0x00010b920940(ppuStack_b8);
      apcStack_e0[0] = pcStack_78;
LAB_10b91ed0c:
      FUN_10b8e2c20(apcStack_e0[0]);
    }
  }
  ppcVar8 = apcStack_e0;
  func_0x00010b8e0a68(ppcVar8);
  func_0x00010b9208e4(uStack_48);
  if ((bool)in_ZR) {
    return ppcVar8;
  }
  ___stack_chk_fail();
FUN_10b91ef88:
  func_0x00010b920aec();
  func_0x00010b902ba0(*param_1);
  return param_1;
}



/* Entry: 10b91ef88; end: 10b91efeb;  */

void FUN_10b91ef88(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010b920aec();
  func_0x00010b902ba0(*unaff_x19);
  return;
}



/* Entry: 10b91efec; end: 10b91effb;  */

undefined1  [16] FUN_10b91efec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f7cdbf2;
  return auVar1;
}



/* Entry: 10b91effc; end: 10b91f0d7;  */

void FUN_10b91effc(undefined8 param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lVar2;
  undefined8 uStack_60;
  undefined2 uStack_58;
  long alStack_50 [2];
  
  func_0x00010b920abc();
  if (alStack_50[0] == 0) {
    uStack_58 = 1;
    uStack_60 = 0;
    func_0x000104bf351c(param_1,&uStack_60);
    func_0x00010b9209c0();
    goto LAB_10b91f0c8;
  }
  lVar1 = *(long *)(param_2 + 0x68);
  lVar2 = alStack_50[0];
  if (lVar1 == 0) {
LAB_10b91f0a8:
    if (*(long *)(lVar2 + 0x10) != 0) {
      do {
        func_0x00010b920930();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x00010b94be7c();
    if ((int)lVar1 != 0) {
      func_0x00010b94bca0(*(undefined8 *)(param_2 + 0x68));
      if ((alStack_50[0] != 0) && (*(long *)(alStack_50[0] + 0x10) != 0)) {
        do {
          func_0x00010b920930();
        } while (extraout_w10 != 0);
      }
      func_0x00010b9209a0();
      FUN_10b8e2c20(alStack_50[0]);
      func_0x00010b94bcc8(*(undefined8 *)(param_2 + 0x68));
      goto LAB_10b91f0c8;
    }
    lVar2 = alStack_50[0];
    if (alStack_50[0] != 0) goto LAB_10b91f0a8;
  }
  func_0x00010b9209a0();
  FUN_10b8e2c20(lVar2);
LAB_10b91f0c8:
  func_0x00010b8e0a68(alStack_50);
  return;
}



/* Entry: 10b91f0d8; end: 10b91f10b;  */

void FUN_10b91f0d8(undefined8 *param_1)

{
  FUN_10b91e5a8();
  *param_1 = &PTR_FUN_110d76400;
  param_1[2] = &PTR_FUN_110d76468;
  return;
}



/* Entry: 10b91f10c; end: 10b91f32f;  */

undefined8 *
FUN_10b91f10c(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,long param_5,
             long param_6,int param_7)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  long alStack_160 [6];
  undefined1 auStack_130 [4];
  int iStack_12c;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 **ppuStack_a0;
  undefined1 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  lVar5 = param_6;
  iStack_12c = param_7;
  uStack_128 = param_4;
  func_0x00010b920908();
  lVar6 = lVar5 << 5;
  uStack_70 = extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = auStack_130 + lVar5 * -0x20;
  puVar3 = puVar7;
  lVar1 = lVar5;
  while (lVar1 != 0) {
    func_0x0001080e0180(puVar3);
    puVar3 = puVar3 + 0x20;
    lVar6 = lVar6 + -0x20;
    lVar1 = lVar6;
  }
  lVar6 = 0;
  puVar3 = puVar7;
  do {
    uVar2 = param_6 == lVar6;
    if ((bool)uVar2) {
      ppuStack_a0 = (undefined8 **)*param_3;
      uStack_88 = param_3[1];
      puStack_98 = puVar7;
      lStack_90 = param_6;
      func_0x0001080e01a8(&lStack_80);
      (**(code **)(*(long *)*param_3 + 0x110))(&uStack_c0,(long *)*param_3,uStack_128,&ppuStack_a0);
      if (((*(byte *)(param_3[1] + 8) & 1) == 0) || (iStack_12c != 0)) {
        *(undefined2 *)(param_1 + 1) = 1;
        *param_1 = 0;
      }
      else {
        uStack_f0 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        puStack_120 = &uStack_f0;
        lStack_118 = 0;
        uStack_110 = 3;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        lStack_e8 = param_2 + 0x38;
        FUN_10b9018fc(param_1,*param_3,auStack_b8,&puStack_120);
      }
      puVar4 = &uStack_c0;
      func_0x0001080e0bc0();
      goto joined_r0x00010b91f2e0;
    }
    puStack_120 = (undefined8 *)0x0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    puStack_98 = (undefined1 *)0x0;
    lStack_90 = CONCAT71(lStack_90._1_7_,4);
    uStack_88 = 0;
    uStack_78 = 0;
    lStack_118 = param_2 + 0x38;
    ppuStack_a0 = &puStack_120;
    lStack_80 = lVar6;
    FUN_10b900bd0(&uStack_f0,*param_3,param_5,&ppuStack_a0,param_3[1]);
    func_0x0001080df8d0(puVar3,&uStack_f0);
    puVar4 = &uStack_f0;
    func_0x0001080e0bc0();
    lVar6 = lVar6 + 1;
    param_5 = param_5 + 0x10;
    puVar3 = puVar3 + 0x20;
  } while ((*(byte *)(param_3[1] + 8) & 1) != 0);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
joined_r0x00010b91f2e0:
  if (param_6 != 0) {
    lVar6 = param_6 * -0x20;
    puVar4 = (undefined8 *)(puVar7 + param_6 * 0x20 + -0x20);
    do {
      func_0x0001080e0bc0();
      puVar4 = puVar4 + -4;
      lVar6 = lVar6 + 0x20;
      param_1 = (undefined8 *)0x0;
    } while (lVar6 != 0);
  }
  func_0x00010b9208e4(uStack_70);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    alStack_160[lVar5 * -4] = (long)&puStack_120;
    alStack_160[lVar5 * -4 + 1] = (long)param_3;
    alStack_160[lVar5 * -4 + 2] = (long)param_1;
    alStack_160[lVar5 * -4 + 3] = param_6;
    alStack_160[lVar5 * -4 + 4] = (long)&stack0xfffffffffffffff0;
    alStack_160[lVar5 * -4 + 5] = (long)FUN_10b91f330;
    *puVar4 = &PTR_FUN_110d76370;
    puVar4[2] = &PTR_DAT_110d763d8;
    func_0x00010b8c2eec(puVar4 + 0xe);
    func_0x000107c278f4(puVar4 + 0xc);
    FUN_10b8e0f58(puVar4 + 2);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10b91f330; end: 10b91f333;  */

undefined8 * FUN_10b91f330(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76370;
  param_1[2] = &PTR_DAT_110d763d8;
  func_0x00010b8c2eec(param_1 + 0xe);
  func_0x000107c278f4(param_1 + 0xc);
  FUN_10b8e0f58(param_1 + 2);
  return param_1;
}



/* Entry: 10b91f334; end: 10b91f347;  */

void FUN_10b91f334(void)

{
  func_0x00010b91e644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b91f348; end: 10b91f357;  */

undefined8 * FUN_10b91f348(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110d76370;
  *param_1 = &PTR_DAT_110d763d8;
  func_0x00010b8c2eec(param_1 + 0xc);
  func_0x000107c278f4(param_1 + 10);
  FUN_10b8e0f58(param_1);
  return param_1 + -2;
}



/* Entry: 10b91f358; end: 10b91f38f;  */

long * FUN_10b91f358(long *param_1)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 2;
  param_1[1] = 0;
  FUN_10b91f390();
  return param_1;
}



/* Entry: 10b91f390; end: 10b91f447;  */

void FUN_10b91f390(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = param_3 - param_2 >> 4;
  if ((ulong)param_1[2] < uVar2) {
    plVar1 = param_1;
    func_0x00010b8df508(param_1,uVar2);
    plVar3 = (long *)*param_1;
    if (plVar3 != (long *)0x0) {
      func_0x00010b920ad8();
      if (param_1 + 3 != plVar3) {
        __ZdlPv(plVar3);
      }
    }
    param_1[1] = 0;
    param_1[2] = uVar2;
    *param_1 = (long)plVar1;
    FUN_10b91f520(param_1,param_2,param_3,*param_1 + param_1[1] * 0x10);
    func_0x00010b920b44();
    return;
  }
  FUN_10b91f498(param_1,param_2,uVar2,*param_1,param_1[1]);
  param_1[1] = uVar2;
  return;
}



/* Entry: 10b91f448; end: 10b91f497;  */

void FUN_10b91f448(undefined8 *param_1)

{
  func_0x00010b8df17c(param_1,*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}



/* Entry: 10b91f498; end: 10b91f51f;  */

void FUN_10b91f498(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined8 uStack_38;
  
  lVar1 = param_5 - param_3;
  uStack_38 = param_4;
  if (param_3 <= param_5) {
    FUN_10b91f5e0(param_2,param_3,param_4);
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      FUN_10b9a8d98(param_2);
      param_2 = param_2 + 0x10;
    }
    return;
  }
  FUN_10b91f558(param_2,param_5,&uStack_38);
  FUN_10b91f5a8(param_1,param_2,param_3 - param_5,uStack_38);
  return;
}



/* Entry: 10b91f520; end: 10b91f557;  */

void FUN_10b91f520(void)

{
  undefined8 in_x3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b9209e4(in_x3);
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x10) {
    FUN_10b9a8f04();
  }
  return;
}



/* Entry: 10b91f558; end: 10b91f5a7;  */

long FUN_10b91f558(long param_1,long param_2,long *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_10b9a9084(*param_3,param_1);
    param_1 = param_1 + 0x10;
    *param_3 = *param_3 + 0x10;
  }
  return param_1;
}



/* Entry: 10b91f5a8; end: 10b91f5df;  */

void FUN_10b91f5a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long unaff_x19;
  
  func_0x00010b9209e4(param_4);
  while (param_3 != 0) {
    FUN_10b9a8f04();
    unaff_x19 = unaff_x19 + -1;
    param_3 = unaff_x19;
  }
  return;
}



/* Entry: 10b91f5e0; end: 10b91f623;  */

long FUN_10b91f5e0(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b9209e4();
  while (param_2 != 0) {
    FUN_10b9a9084(unaff_x19,param_1);
    param_1 = param_1 + 0x10;
    unaff_x19 = unaff_x19 + 0x10;
    unaff_x20 = unaff_x20 + -1;
    param_2 = unaff_x20;
  }
  return unaff_x19;
}



/* Entry: 10b91f624; end: 10b91f6fb;  */

void FUN_10b91f624(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 ***pppuVar1;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_60 [16];
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b920908(param_1,param_2,param_1);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  uStack_28 = extraout_x8;
  func_0x00010b920a4c();
  func_0x00010b920b58();
  func_0x00010b920a44(auStack_60,*puVar2);
  puVar2 = (undefined8 *)puVar2[8];
  pppuVar1 = (undefined8 ***)&puStack_40;
  func_0x000104bf351c(pppuVar1,auStack_60);
  pppuVar3 = (undefined8 ***)*puVar2;
  if (pppuVar3 != (undefined8 ***)0x0) {
    ppuStack_50 = pppuVar3 + 3;
    uStack_48 = 1;
    __ZNSt3__15mutex4lockEv();
    pppuVar1 = pppuVar3;
    func_0x00010b8fab48();
    if ((int)pppuVar1 == 0) {
      pppuVar3[0x12] = (undefined8 **)puStack_40;
      pppuVar3[0x14] = (undefined8 **)puStack_30;
      pppuVar3[0x13] = (undefined8 **)puStack_38;
      puStack_40 = (undefined8 **)0x0;
      *(uint *)(pppuVar3 + 0x11) = *(uint *)(pppuVar3 + 0x11) | 5;
      __ZNSt3__118condition_variable10notify_allEv(pppuVar3 + 0xb);
      pppuVar1 = &ppuStack_50;
      func_0x0001090eb46c();
      func_0x00010b920ad0();
      func_0x00010b9209c0();
      *unaff_x19 = *unaff_x19 + -1;
      func_0x00010b9208e4(uStack_28);
      if ((bool)in_ZR) {
        return;
      }
      goto LAB_10b91f6f8;
    }
  }
  _abort();
LAB_10b91f6f8:
  ___stack_chk_fail();
  if (pppuVar1[1] != (undefined8 **)0x0) {
    FUN_10b91eb94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b91f6fc; end: 10b91f71b;  */

void FUN_10b91f6fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b91eb94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b91f71c; end: 10b91f71f;  */

void FUN_10b91f71c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b91f720; end: 10b91f787;  */

void FUN_10b91f720(undefined8 *param_1)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  
  func_0x00010b920b6c();
  *param_1 = &PTR_FUN_110d76498;
  __Znwm(0x50);
  func_0x00010b920b78();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b920aac();
    } while (extraout_w11 != 0);
  }
  func_0x00010b920978();
  lVar1 = *(long *)(unaff_x21 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x21 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b920930();
    } while (extraout_w10 != 0);
  }
  *(long *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 10b91f788; end: 10b91f7e3;  */

long * FUN_10b91f788(long *param_1,long *param_2)

{
  long lStack_30;
  long lStack_28;
  
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 2;
  param_1[1] = 0;
  lStack_28 = *param_2;
  lStack_30 = lStack_28 + param_2[1] * 0x10;
  FUN_10b91f7e4(param_1,&lStack_28,&lStack_30,0);
  return param_1;
}



/* Entry: 10b91f7e4; end: 10b91f8af;  */

void FUN_10b91f7e4(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *param_2;
  uVar2 = *param_3 - lStack_48 >> 4;
  if ((ulong)param_1[2] < uVar2) {
    puVar1 = param_1;
    func_0x00010b8df508(param_1,uVar2);
    puVar3 = (undefined8 *)*param_1;
    if (puVar3 != (undefined8 *)0x0) {
      func_0x00010b920ad8();
      if (param_1 + 3 != puVar3) {
        __ZdlPv(puVar3);
      }
    }
    param_1[1] = 0;
    param_1[2] = uVar2;
    *param_1 = puVar1;
    lStack_48 = *param_2;
    lStack_50 = *param_3;
    FUN_10b91f8b0(param_1,&lStack_48,&lStack_50);
  }
  else {
    FUN_10b91f8f4(param_1,&lStack_48,uVar2,*param_1,param_1[1]);
    param_1[1] = uVar2;
  }
  return;
}



/* Entry: 10b91f8b0; end: 10b91f8f3;  */

void FUN_10b91f8b0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  uStack_30 = *param_3;
  FUN_10b91f994(param_1,&uStack_28,&uStack_30,*param_1 + param_1[1] * 0x10);
  func_0x00010b920b44();
  return;
}



/* Entry: 10b91f8f4; end: 10b91f993;  */

void FUN_10b91f8f4(undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_4;
  if (param_5 < param_3) {
    uStack_58 = *param_2;
    FUN_10b91f9d8(&uStack_50,&uStack_58,param_5,&uStack_48);
    *param_2 = uStack_50;
    FUN_10b91fa38(param_1,&uStack_50,param_3 - param_5,uStack_48);
  }
  else {
    uStack_50 = *param_2;
    puVar1 = &uStack_50;
    FUN_10b91fa78(puVar1,param_3,param_4);
    func_0x00010b8df17c(param_1,puVar1,param_5 - param_3);
  }
  return;
}



/* Entry: 10b91f994; end: 10b91f9d7;  */

void FUN_10b91f994(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x00010b9209e4(param_4);
  lVar1 = *param_2;
  while (lVar1 != *unaff_x19) {
    FUN_10b9a8f04();
    lVar1 = *unaff_x20 + 0x10;
    *unaff_x20 = lVar1;
  }
  return;
}



/* Entry: 10b91f9d8; end: 10b91fa37;  */

void FUN_10b91f9d8(long *param_1,long *param_2,long param_3,long *param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10b9a9084(*param_4,*param_2);
    *param_2 = *param_2 + 0x10;
    *param_4 = *param_4 + 0x10;
  }
  *param_1 = *param_2;
  return;
}



/* Entry: 10b91fa38; end: 10b91fa77;  */

void FUN_10b91fa38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010b9209e4(param_4);
  while (param_3 != 0) {
    FUN_10b9a8f04();
    *unaff_x20 = *unaff_x20 + 0x10;
    unaff_x19 = unaff_x19 + -1;
    param_3 = unaff_x19;
  }
  return;
}



/* Entry: 10b91fa78; end: 10b91fac3;  */

long FUN_10b91fa78(long *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b9209e4();
  while (param_2 != 0) {
    FUN_10b9a9084(unaff_x19,*param_1);
    *param_1 = *param_1 + 0x10;
    unaff_x19 = unaff_x19 + 0x10;
    unaff_x20 = unaff_x20 + -1;
    param_2 = unaff_x20;
  }
  return unaff_x19;
}



/* Entry: 10b91fac4; end: 10b91fbff;  */

undefined8 * FUN_10b91fac4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar1 = param_1 + 3;
  *param_1 = puVar1;
  param_1[2] = 2;
  param_1[1] = 0;
  puVar4 = (undefined8 *)*param_2;
  if (param_2 + 3 == puVar4) {
    uVar5 = param_2[1];
    if (uVar5 < 3) {
      uVar2 = uVar5;
      if (uVar5 == 0) {
        func_0x00010b8df17c(param_1,puVar1,0);
      }
      else {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          func_0x00010b9a8fa8(puVar1,puVar4);
          puVar4 = puVar4 + 2;
          puVar1 = puVar1 + 2;
        }
      }
    }
    else {
      puVar3 = param_1;
      func_0x00010b8df508(param_1,uVar5);
      puVar7 = (undefined8 *)*param_1;
      if ((puVar7 != (undefined8 *)0x0) && (func_0x00010b920ad8(), puVar1 != puVar7)) {
        __ZdlPv(puVar7);
      }
      param_1[1] = 0;
      param_1[2] = uVar5;
      *param_1 = puVar3;
      for (lVar6 = 0; -lVar6 != uVar5 * 0x10; lVar6 = lVar6 + -0x10) {
        func_0x00010b9a8fa8(puVar3,puVar4);
        puVar4 = puVar4 + 2;
        puVar3 = puVar3 + 2;
      }
      uVar5 = param_1[1] + (-lVar6 >> 4);
    }
    param_1[1] = uVar5;
    FUN_10b91f448(param_2);
  }
  else {
    *param_1 = puVar4;
    uVar8 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}



/* Entry: 10b91fc00; end: 10b91fc23;  */

undefined8 * FUN_10b91fc00(undefined8 *param_1)

{
  func_0x00010b902ba0(*param_1);
  return param_1;
}



/* Entry: 10b91fc24; end: 10b91fee7;  */

undefined8 * FUN_10b91fc24(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lVar8;
  long lVar9;
  long *plVar10;
  long alStack_b0 [3];
  long lStack_98;
  undefined8 uStack_90;
  byte bStack_81;
  long lStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_48;
  
  func_0x00010b920908();
  plVar10 = *(long **)(param_1 + 0x10);
  lVar8 = *plVar10;
  uVar5 = *(char *)(lVar8 + 0x80) == '\x01';
  uStack_48 = extraout_x8;
  if ((bool)uVar5) {
    puVar6 = *(undefined8 **)(lVar8 + 0x68);
    if (puVar6 != (undefined8 *)0x0) {
      func_0x00010b94be7c();
    }
  }
  else {
    puVar6 = (undefined8 *)0x0;
  }
  bStack_81 = *(byte *)plVar10[1] >> 3 & 1;
  if ((int)puVar6 == 0) {
    func_0x00010b920a9c();
    alStack_b0[0] = extraout_x8_02;
    if ((extraout_x8_02 != 0) && (*(long *)(extraout_x8_02 + 0x10) != 0)) {
      do {
        func_0x00010b9208f8();
        alStack_b0[0] = extraout_x8_03;
      } while (extraout_w11_00 != 0);
    }
    func_0x00010b9209c8(plVar10[4]);
    func_0x00010b920a7c();
    func_0x00010b920ac8();
  }
  else {
    lVar7 = *(long *)(lVar8 + 0x68);
    func_0x00010b94bca0();
    if ((*(byte *)plVar10[1] >> 2 & 1) == 0) {
      if ((*(byte *)plVar10[1] >> 4 & 1) == 0) {
        func_0x00010b920a9c();
        alStack_b0[0] = extraout_x8_00;
        if ((extraout_x8_00 != 0) && (*(long *)(extraout_x8_00 + 0x10) != 0)) {
          do {
            func_0x00010b9208f8();
            alStack_b0[0] = extraout_x8_01;
          } while (extraout_w11 != 0);
        }
        func_0x00010b9209c8(plVar10[4]);
        func_0x00010b920a7c();
        func_0x00010b920ac8();
      }
      else {
        lVar9 = plVar10[3];
        __ZNSt3__16chrono12steady_clock3nowEv();
        alStack_b0[0] = lVar7 + 250000000;
        FUN_10b91e8d4(&lStack_80,lVar8,lVar9,alStack_b0,*(undefined8 *)(plVar10[2] + 8),
                      *(undefined8 *)(plVar10[2] + 0x10));
        uVar5 = lStack_80 == 1;
        if ((bool)uVar5) {
          FUN_10b9a9084(plVar10[4],&ppuStack_78);
        }
        func_0x000104bda914(&lStack_80);
      }
    }
    else {
      piVar1 = (int *)(lVar8 + 0x58);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_10b91eb88(&lStack_80,*(undefined8 *)(plVar10[2] + 8),*(undefined8 *)(plVar10[2] + 0x10));
      puVar6 = (undefined8 *)0x58;
      __Znwm();
      plVar10 = puVar6 + 1;
      *plVar10 = 1;
      *puVar6 = &PTR_FUN_110d764c8;
      __ZNSt3__17promiseIvEC1Ev(puVar6 + 2);
      *(int *)(puVar6 + 3) = iVar2 + 1;
      FUN_10b91fac4(puVar6 + 4,&lStack_80);
      func_0x00010b8df154(&lStack_80);
      __ZNSt3__17promiseIvE10get_futureEv(&uStack_90,puVar6 + 2);
      func_0x00010b920a9c();
      lStack_98 = extraout_x8_04;
      if ((extraout_x8_04 != 0) && (*(long *)(extraout_x8_04 + 0x10) != 0)) {
        do {
          func_0x00010b9208f8();
          lStack_98 = extraout_x8_05;
        } while (extraout_w11_01 != 0);
      }
      do {
        func_0x00010b920988();
      } while (extraout_w10 != 0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lStack_80 = 0x10b91ff60;
      ppuStack_78 = &PTR_FUN_110d76500;
      alStack_b0[0] = 0;
      alStack_b0[1] = 0;
      lStack_70 = lVar8;
      puStack_68 = puVar6;
      func_0x0001080d3888();
      (*(code *)*ppuStack_78)(&ppuStack_78);
      FUN_10b91fee8(alStack_b0);
      func_0x000105276914();
      __ZNSt3__16chrono12steady_clock3nowEv();
      lStack_80 = lStack_98 + 100000000;
      FUN_10b920060(uStack_90,&lStack_80);
      __ZNSt3__16futureIvED1Ev(&uStack_90);
      func_0x00010b92023c(puVar6);
    }
    puVar6 = *(undefined8 **)(lVar8 + 0x68);
    func_0x00010b94bcc8();
  }
  func_0x00010b9208e4(uStack_48);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x00010b92023c(puVar6[1]);
    func_0x00010b902ba0(*puVar6);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 10b91fee8; end: 10b91ff0b;  */

undefined8 * FUN_10b91fee8(undefined8 *param_1)

{
  func_0x00010b92023c(param_1[1]);
  func_0x00010b902ba0(*param_1);
  return param_1;
}



/* Entry: 10b91ff0c; end: 10b91ff0f;  */

undefined8 * FUN_10b91ff0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d764c8;
  func_0x00010b8df154(param_1 + 4);
  __ZNSt3__17promiseIvED1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 10b91ff10; end: 10b91ff23;  */

void FUN_10b91ff10(void)

{
  FUN_10b91ff24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b91ff24; end: 10b91ffeb;  */

undefined8 * FUN_10b91ff24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d764c8;
  func_0x00010b8df154(param_1 + 4);
  __ZNSt3__17promiseIvED1Ev(param_1 + 2);
  return param_1;
}



/* Entry: 10b91ffec; end: 10b92005f;  */

undefined8 * FUN_10b91ffec(long param_1)

{
  func_0x00010b92023c(*(undefined8 *)(param_1 + 0x10));
  func_0x00010b902ba0(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10b920060; end: 10b9200eb;  */

uint FUN_10b920060(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lStack_30;
  undefined1 uStack_28;
  
  lVar1 = param_1 + 0x18;
  uStack_28 = 1;
  lStack_30 = lVar1;
  __ZNSt3__15mutex4lockEv();
  uVar2 = *(uint *)(param_1 + 0x88);
  if ((uVar2 >> 3 & 1) == 0) {
    while ((uVar2 >> 2 & 1) == 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (*param_2 <= lVar1) {
        uVar2 = *(uint *)(param_1 + 0x88);
        break;
      }
      lVar1 = param_1 + 0x58;
      FUN_10b9200ec(lVar1,&lStack_30,param_2);
      uVar2 = *(uint *)(param_1 + 0x88);
    }
    uVar2 = (uVar2 >> 2 ^ 0xffffffff) & 1;
  }
  else {
    uVar2 = 2;
  }
  func_0x0001090eb46c(&lStack_30);
  return uVar2;
}



/* Entry: 10b9200ec; end: 10b9201e3;  */

bool FUN_10b9200ec(long param_1)

{
  bool bVar1;
  long *unaff_x19;
  long unaff_x21;
  
  func_0x00010b92094c();
  if (param_1 < *unaff_x19) {
    func_0x00010b920138();
    __ZNSt3__16chrono12steady_clock3nowEv();
    bVar1 = *unaff_x19 <= unaff_x21;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b9201e4; end: 10b920267;  */

long FUN_10b9201e4(ulong param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    if ((long)param_1 < 1) {
      if (param_1 < 0xffdf3b645a1cac09) {
        return -0x8000000000000000;
      }
    }
    else if (0x20c49ba5e353f7 < param_1) {
      return 0x7fffffffffffffff;
    }
    lVar1 = param_1 * 1000;
  }
  return lVar1;
}



/* Entry: 10b920268; end: 10b9202d7;  */

void FUN_10b920268(undefined8 param_1,long param_2)

{
  long *unaff_x19;
  undefined1 auStack_30 [16];
  
  func_0x00010b920a4c(param_1,*(undefined8 *)(param_2 + 0x10),param_1);
  func_0x00010b920b58();
  func_0x00010b920a44(auStack_30);
  FUN_10b9a9020(*(undefined8 *)(param_2 + 0x18),auStack_30);
  func_0x00010b9209c0();
  *unaff_x19 = *unaff_x19 + -1;
  return;
}



/* Entry: 10b9202d8; end: 10b9202f3;  */

void FUN_10b9202d8(void)

{
  return;
}



/* Entry: 10b9202f4; end: 10b92034f;  */

void FUN_10b9202f4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  lVar1 = *(long *)(param_2 + 0x20);
  if (**(char **)(param_2 + 0x28) == '\x01') {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  else {
    uVar2 = 0;
  }
  func_0x00010b920a44(auStack_30,*(undefined8 *)(param_2 + 0x10),param_1,*(undefined8 *)(lVar1 + 8),
                      *(undefined8 *)(lVar1 + 0x10),uVar2);
  FUN_10b9a9020(*(undefined8 *)(param_2 + 0x18),auStack_30);
  func_0x00010b9209c0();
  return;
}



/* Entry: 10b920350; end: 10b92037f;  */

void FUN_10b920350(void)

{
  return;
}



/* Entry: 10b920380; end: 10b9203c3;  */

void FUN_10b920380(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_DAT_110d76560;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  uVar2 = puVar3[4];
  uVar6 = *puVar3;
  uVar5 = puVar3[3];
  uVar4 = puVar3[2];
  puVar1[1] = puVar3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[4] = uVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b9203c4; end: 10b92042b;  */

void FUN_10b9203c4(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x10);
  if (*(int *)(*plVar1 + 0x58) == (int)plVar1[8]) {
    func_0x00010b92095c(param_1,*plVar1,param_1,plVar1[1],plVar1[2]);
    func_0x00010b9209c0();
  }
  return;
}



/* Entry: 10b92042c; end: 10b92042f;  */

void FUN_10b92042c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b920430; end: 10b92047f;  */

void FUN_10b920430(undefined8 *param_1)

{
  long extraout_x8;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b920b6c();
  *param_1 = &PTR_DAT_110d76580;
  func_0x00010b920a64();
  func_0x00010b920b78();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b920aac();
    } while (extraout_w11 != 0);
  }
  func_0x00010b920978();
  *(undefined4 *)(unaff_x20 + 0x40) = *(undefined4 *)(unaff_x21 + 0x40);
  *(long *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 10b920480; end: 10b9204cf;  */

void FUN_10b920480(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  func_0x00010b92095c(param_1,*puVar1,param_1,puVar1[1],puVar1[2]);
  func_0x00010b9209c0();
  return;
}



/* Entry: 10b9204d0; end: 10b9204d3;  */

void FUN_10b9204d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b9204d4; end: 10b92051f;  */

void FUN_10b9204d4(undefined8 *param_1)

{
  long extraout_x8;
  int extraout_w11;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b920b6c();
  *param_1 = &PTR_DAT_110d765a0;
  __Znwm(0x40);
  func_0x00010b920b78();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b920aac();
    } while (extraout_w11 != 0);
  }
  func_0x00010b920978();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 10b920520; end: 10b92068b;  */

/* WARNING: Possible PIC construction at 0x00010b9205dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b9205e0) */
/* WARNING: Removing unreachable block (ram,0x00010b9205fc) */
/* WARNING: Removing unreachable block (ram,0x00010b9205ec) */
/* WARNING: Removing unreachable block (ram,0x00010b920610) */

void FUN_10b920520(long param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *plVar3;
  long lStack_58;
  long lStack_50;
  char cStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_28;
  
  func_0x00010b920908();
  plVar3 = *(long **)(param_2 + 0x10);
  uStack_28 = extraout_x8;
  func_0x00010b920a44(&lStack_50,*plVar3,param_1,plVar3[2],plVar3[3],0);
  if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) == 0) {
    FUN_10b9a0084(&lStack_58);
LAB_10b9205b4:
    uStack_40 = 2;
    lStack_38 = lStack_58;
    lStack_58 = 0;
    func_0x00010b920ae0();
    func_0x00010b920ad0();
    func_0x00010b920b10();
    plVar2 = &lStack_50;
    FUN_10b9a8d98();
    func_0x00010b9208e4(uStack_28);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    plVar3 = extraout_x8_00;
  }
  else {
    if (cStack_48 == '\x01') {
      in_ZR = *(char *)(*plVar3 + 0x82) == '\x01';
      if ((((bool)in_ZR) && (lVar1 = *(long *)(*plVar3 + 0x18), lVar1 != 0)) &&
         (func_0x00010b8c1f54(), (int)lVar1 != 0)) {
        FUN_10b99f5f8(&lStack_58,&UNK_10f7cdbfd);
        goto LAB_10b9205b4;
      }
    }
    plVar3 = &lStack_58;
    plVar2 = &lStack_50;
  }
  if (*(char *)((long)plVar2 + 9) == '\x01') {
    lVar1 = *plVar2;
    if (lVar1 != 0) {
      ___dynamic_cast(lVar1,&PTR_DAT_1107e3600,&PTR_DAT_110d7e928,0);
    }
    func_0x0001052b2560();
  }
  else {
    lVar1 = 0;
  }
  *plVar3 = lVar1;
  return;
}



/* Entry: 10b92068c; end: 10b9206ab;  */

void FUN_10b92068c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b91efc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9206ac; end: 10b9206af;  */

void FUN_10b9206ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b9206b0; end: 10b920723;  */

void FUN_10b9206b0(undefined8 *param_1)

{
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar1;
  long lVar2;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  func_0x00010b920b6c();
  *param_1 = &PTR_FUN_110d765c0;
  func_0x00010b920a64();
  func_0x00010b920b78();
  uVar1 = 0;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b920aac();
      uVar1 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  *unaff_x20 = uVar1;
  lVar2 = *(long *)(unaff_x21 + 8);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x00010b9208f8();
      lVar2 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  unaff_x20[1] = lVar2;
  FUN_10b91f788(unaff_x20 + 2,unaff_x21 + 0x10);
  *(undefined8 **)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 10b920724; end: 10b920727;  */

void FUN_10b920724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d765f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b920728; end: 10b92073b;  */

void FUN_10b920728(void)

{
  FUN_10b920820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b92073c; end: 10b9207cb;  */

void FUN_10b92073c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_40 [32];
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (uVar4 != 0) {
    func_0x00010b8fab48();
    plVar5 = *(long **)(param_1 + 0x18);
    if (((uVar4 & 1) == 0) && (0 < plVar5[1])) {
      __ZNSt3__115future_categoryEv();
      __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_40,4,plVar5);
      _abort();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
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
                    /* WARNING: Could not recover jumptable at 0x00010b9207b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10b9207cc; end: 10b9207d3;  */

void FUN_10b9207cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9207d4; end: 10b9207e7;  */

void FUN_10b9207d4(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9207e8; end: 10b92081f;  */

void FUN_10b9207e8(long *param_1)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    func_0x000104bda914(param_1 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b92081c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10b920820; end: 10b92082f;  */

void FUN_10b920820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d765f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b920830; end: 10b92087b;  */

long FUN_10b920830(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b92087c; end: 10b920b83;  */

void FUN_10b92087c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9208b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10b920b84; end: 10b920c8b;  */

undefined8 * FUN_10b920b84(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d7ec10;
  param_1[1] = 0;
  FUN_10b8e0de0(param_1 + 3);
  *param_1 = &PTR_DAT_110d766c0;
  param_1[3] = &PTR_DAT_110d76700;
  return param_1;
}



/* Entry: 10b920c8c; end: 10b920d7b;  */

long * FUN_10b920c8c(long *param_1,long *param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long *extraout_x8_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  plVar1 = &lStack_80;
  func_0x00010b921b10();
  lStack_80 = 0;
  uStack_38 = extraout_x8;
  if (*param_1 != 0) {
    do {
      func_0x00010b921b94();
      lStack_80 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_78 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010b921b3c();
      lStack_78 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  uStack_70 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b921b3c();
      uStack_70 = extraout_x8_02;
    } while (extraout_w11_01 != 0);
  }
  pcStack_68 = FUN_10b9215dc;
  ppuStack_60 = &PTR_FUN_110d76750;
  func_0x00010b921c3c();
  lVar2 = 0;
  if (lStack_80 != 0) {
    do {
      func_0x00010b921b94();
      lVar2 = extraout_x8_03;
    } while (extraout_w11_02 != 0);
  }
  *param_1 = lVar2;
  if (lStack_78 != 0) {
    do {
      func_0x00010b921b3c();
    } while (extraout_w11_03 != 0);
  }
  func_0x00010b921c74();
  lVar2 = 0;
  if (extraout_x8_04 != 0) {
    do {
      func_0x00010b921b3c();
      lVar2 = extraout_x8_05;
    } while (extraout_w11_04 != 0);
  }
  param_1[2] = lVar2;
  func_0x00010b921b4c();
  lVar2 = 0;
  FUN_10b920d7c();
  func_0x00010b921bdc();
  FUN_10b920d94();
  func_0x00010b921b60(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (*plVar1 == 0) {
      *extraout_x8_06 = (long)FUN_10b9215cc;
      extraout_x8_06[1] = (long)&PTR_DAT_110a21c28;
      func_0x00010b9214bc(extraout_x8_06 + 6);
      extraout_x8_06[9] = 0;
    }
    else {
      *extraout_x8_06 = *param_2;
      (**(code **)(param_2[1] + 0x10))(extraout_x8_06 + 1);
      func_0x00010b9214bc(extraout_x8_06 + 6);
      extraout_x8_06[9] = lVar2;
    }
    return extraout_x8_06;
  }
  return plVar1;
}



/* Entry: 10b920d7c; end: 10b920d93;  */

undefined8 * FUN_10b920d7c(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  if (*param_2 == 0) {
    *param_1 = FUN_10b9215cc;
    param_1[1] = &PTR_DAT_110a21c28;
    func_0x00010b9214bc(param_1 + 6);
    param_1[9] = 0;
  }
  else {
    *param_1 = *param_3;
    (**(code **)(param_3[1] + 0x10))(param_1 + 1);
    func_0x00010b9214bc(param_1 + 6);
    param_1[9] = param_4;
  }
  return param_1;
}



/* Entry: 10b920d94; end: 10b920db3;  */

undefined8 FUN_10b920d94(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b921c18();
  func_0x00010b921c8c();
  func_0x00010007e5d0();
  func_0x000104bd474c();
  return unaff_x19;
}



/* Entry: 10b920db4; end: 10b920e67;  */

undefined8 * FUN_10b920db4(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000048;
  
  func_0x00010b921cb0();
  func_0x00010b921b10();
  func_0x00010b921c68();
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b921c5c();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
      unaff_x22 = in_stack_00000008;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b921b84(FUN_10b921680);
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
      unaff_x21 = in_stack_00000010;
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b921c44();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
    } while (extraout_w10_02 != 0);
  }
  *(long *)(param_1 + 8) = unaff_x21;
  func_0x00010b921b4c();
  FUN_10b920d7c();
  func_0x00010b921b74();
  puVar1 = &stack0x00000008;
  FUN_10b920e68(puVar1);
  func_0x00010b921b60(in_stack_00000048);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b921bc4();
    func_0x00010007e5d0();
    func_0x000104bd474c();
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 10b920e68; end: 10b920e83;  */

undefined8 FUN_10b920e68(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b921bc4();
  func_0x00010007e5d0();
  func_0x000104bd474c();
  return unaff_x19;
}



/* Entry: 10b920e84; end: 10b920f37;  */

undefined8 * FUN_10b920e84(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000048;
  
  func_0x00010b921cb0();
  func_0x00010b921b10();
  func_0x00010b921c68();
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b921c5c();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
      unaff_x22 = in_stack_00000008;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b921b84(FUN_10b921708);
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
      unaff_x21 = in_stack_00000010;
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b921c44();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
    } while (extraout_w10_02 != 0);
  }
  *(long *)(param_1 + 8) = unaff_x21;
  func_0x00010b921b4c();
  FUN_10b920d7c();
  func_0x00010b921b74();
  puVar1 = &stack0x00000008;
  FUN_10b920f38(puVar1);
  func_0x00010b921b60(in_stack_00000048);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b921bc4();
    func_0x00010007e5d0();
    func_0x000104bd474c();
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 10b920f38; end: 10b920f53;  */

undefined8 FUN_10b920f38(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b921bc4();
  func_0x00010007e5d0();
  func_0x000104bd474c();
  return unaff_x19;
}



/* Entry: 10b920f54; end: 10b921007;  */

undefined8 * FUN_10b920f54(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000048;
  
  func_0x00010b921cb0();
  func_0x00010b921b10();
  func_0x00010b921c68();
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b921c5c();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
      unaff_x22 = in_stack_00000008;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b921b84(FUN_10b921790);
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
      unaff_x21 = in_stack_00000010;
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b921c44();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
    } while (extraout_w10_02 != 0);
  }
  *(long *)(param_1 + 8) = unaff_x21;
  func_0x00010b921b4c();
  FUN_10b920d7c();
  func_0x00010b921b74();
  puVar1 = &stack0x00000008;
  FUN_10b921008(puVar1);
  func_0x00010b921b60(in_stack_00000048);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b921bc4();
    func_0x00010007e5d0();
    func_0x000104bd474c();
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 10b921008; end: 10b921023;  */

undefined8 FUN_10b921008(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b921bc4();
  func_0x00010007e5d0();
  func_0x000104bd474c();
  return unaff_x19;
}



/* Entry: 10b921024; end: 10b921113;  */

long * FUN_10b921024(long *param_1,long *param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  undefined1 *unaff_x19;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  plVar1 = &lStack_80;
  func_0x00010b921b10();
  lStack_80 = 0;
  uStack_38 = extraout_x8;
  if (*param_1 != 0) {
    do {
      func_0x00010b921b94();
      lStack_80 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_78 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010b921b3c();
      lStack_78 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  uStack_70 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b921b3c();
      uStack_70 = extraout_x8_02;
    } while (extraout_w11_01 != 0);
  }
  pcStack_68 = FUN_10b921818;
  ppuStack_60 = &PTR_FUN_110d767d0;
  func_0x00010b921c3c();
  lVar2 = 0;
  if (lStack_80 != 0) {
    do {
      func_0x00010b921b94();
      lVar2 = extraout_x8_03;
    } while (extraout_w11_02 != 0);
  }
  *param_1 = lVar2;
  if (lStack_78 != 0) {
    do {
      func_0x00010b921b3c();
    } while (extraout_w11_03 != 0);
  }
  func_0x00010b921c74();
  lVar2 = 0;
  if (extraout_x8_04 != 0) {
    do {
      func_0x00010b921b3c();
      lVar2 = extraout_x8_05;
    } while (extraout_w11_04 != 0);
  }
  param_1[2] = lVar2;
  func_0x00010b921b4c();
  FUN_10b920d7c();
  func_0x00010b921bdc();
  FUN_10b921114(&lStack_80);
  func_0x00010b921b60(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b921c18();
    func_0x00010b921c8c();
    func_0x00010007e5d0();
    func_0x000104bd474c();
    return (long *)unaff_x19;
  }
  return plVar1;
}



/* Entry: 10b921114; end: 10b921133;  */

undefined8 FUN_10b921114(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b921c18();
  func_0x00010b921c8c();
  func_0x00010007e5d0();
  func_0x000104bd474c();
  return unaff_x19;
}



/* Entry: 10b921134; end: 10b921223;  */

long * FUN_10b921134(long *param_1,long *param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  undefined1 *unaff_x19;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  plVar1 = &lStack_80;
  func_0x00010b921b10();
  lStack_80 = 0;
  uStack_38 = extraout_x8;
  if (*param_1 != 0) {
    do {
      func_0x00010b921b94();
      lStack_80 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_78 = 0;
  if (*param_2 != 0) {
    do {
      func_0x00010b921b3c();
      lStack_78 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  uStack_70 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b921b3c();
      uStack_70 = extraout_x8_02;
    } while (extraout_w11_01 != 0);
  }
  pcStack_68 = FUN_10b9218bc;
  ppuStack_60 = &PTR_FUN_110d767f0;
  func_0x00010b921c3c();
  lVar2 = 0;
  if (lStack_80 != 0) {
    do {
      func_0x00010b921b94();
      lVar2 = extraout_x8_03;
    } while (extraout_w11_02 != 0);
  }
  *param_1 = lVar2;
  if (lStack_78 != 0) {
    do {
      func_0x00010b921b3c();
    } while (extraout_w11_03 != 0);
  }
  func_0x00010b921c74();
  lVar2 = 0;
  if (extraout_x8_04 != 0) {
    do {
      func_0x00010b921b3c();
      lVar2 = extraout_x8_05;
    } while (extraout_w11_04 != 0);
  }
  param_1[2] = lVar2;
  func_0x00010b921b4c();
  FUN_10b920d7c();
  func_0x00010b921bdc();
  FUN_10b921224(&lStack_80);
  func_0x00010b921b60(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b921c18();
    func_0x00010b921c8c();
    func_0x00010007e5d0();
    func_0x000104bd474c();
    return (long *)unaff_x19;
  }
  return plVar1;
}



/* Entry: 10b921224; end: 10b921243;  */

undefined8 FUN_10b921224(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b921c18();
  func_0x00010b921c8c();
  func_0x00010007e5d0();
  func_0x000104bd474c();
  return unaff_x19;
}



/* Entry: 10b921244; end: 10b9212f7;  */

undefined8 * FUN_10b921244(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000048;
  
  func_0x00010b921cb0();
  func_0x00010b921b10();
  func_0x00010b921c68();
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b921c5c();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
      unaff_x22 = in_stack_00000008;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b921b84(FUN_10b921960);
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
      unaff_x21 = in_stack_00000010;
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b921c44();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
    } while (extraout_w10_02 != 0);
  }
  *(long *)(param_1 + 8) = unaff_x21;
  func_0x00010b921b4c();
  FUN_10b920d7c();
  func_0x00010b921b74();
  puVar1 = &stack0x00000008;
  FUN_10b9212f8(puVar1);
  func_0x00010b921b60(in_stack_00000048);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b921bc4();
    func_0x00010007e5d0();
    func_0x000104bd474c();
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 10b9212f8; end: 10b921313;  */

undefined8 FUN_10b9212f8(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b921bc4();
  func_0x00010007e5d0();
  func_0x000104bd474c();
  return unaff_x19;
}



/* Entry: 10b921314; end: 10b9213cb;  */

undefined8 * FUN_10b921314(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000048;
  
  func_0x00010b921cb0();
  func_0x00010b921b10();
  func_0x00010b921c68();
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b921c5c();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
      unaff_x22 = in_stack_00000008;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b921b84(FUN_10b9219e8);
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
      unaff_x21 = in_stack_00000010;
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b921c44();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
    } while (extraout_w10_02 != 0);
  }
  *(long *)(param_1 + 8) = unaff_x21;
  func_0x00010b921b4c();
  FUN_10b920d7c();
  func_0x00010b921b74();
  puVar1 = &stack0x00000008;
  FUN_10b9213cc(puVar1);
  func_0x00010b921b60(in_stack_00000048);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b921bc4();
    func_0x00010007e5d0();
    func_0x000104bd474c();
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 10b9213cc; end: 10b9213e7;  */

undefined8 FUN_10b9213cc(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b921bc4();
  func_0x00010007e5d0();
  func_0x000104bd474c();
  return unaff_x19;
}



/* Entry: 10b9213e8; end: 10b92149f;  */

undefined8 * FUN_10b9213e8(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000048;
  
  func_0x00010b921cb0();
  func_0x00010b921b10();
  func_0x00010b921c68();
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b921c5c();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
      unaff_x22 = in_stack_00000008;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b921b84(FUN_10b921a70);
  if (unaff_x22 != 0) {
    do {
      func_0x00010b921bb4();
      unaff_x21 = in_stack_00000010;
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b921c44();
  if (unaff_x21 != 0) {
    do {
      func_0x00010b921ba4();
    } while (extraout_w10_02 != 0);
  }
  *(long *)(param_1 + 8) = unaff_x21;
  func_0x00010b921b4c();
  FUN_10b920d7c();
  func_0x00010b921b74();
  puVar1 = &stack0x00000008;
  FUN_10b9214a0(puVar1);
  func_0x00010b921b60(in_stack_00000048);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b921bc4();
    func_0x00010007e5d0();
    func_0x000104bd474c();
    return unaff_x19;
  }
  return puVar1;
}



/* Entry: 10b9214a0; end: 10b9215cb;  */

undefined8 FUN_10b9214a0(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b921bc4();
  func_0x00010007e5d0();
  func_0x000104bd474c();
  return unaff_x19;
}



/* Entry: 10b9215cc; end: 10b9215db;  */

void FUN_10b9215cc(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  
  func_0x000105277f8c(param_2);
  func_0x00010b921c94();
                    /* WARNING: Could not recover jumptable at 0x00010b9215ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0xf0))();
  return;
}



/* Entry: 10b9215dc; end: 10b9215ef;  */

void FUN_10b9215dc(void)

{
  long extraout_x8;
  
  func_0x00010b921c94();
                    /* WARNING: Could not recover jumptable at 0x00010b9215ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0xf0))();
  return;
}



/* Entry: 10b9215f0; end: 10b92160f;  */

void FUN_10b9215f0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b920d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b921610; end: 10b921613;  */

void FUN_10b921610(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b921614; end: 10b92167f;  */

void FUN_10b921614(long param_1)

{
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010b921c0c();
  func_0x00010b921c30(&PTR_FUN_110d76750);
  if (*unaff_x20 != 0) {
    do {
      func_0x00010b921b94();
    } while (extraout_w11 != 0);
  }
  func_0x00010b921c24();
  uVar1 = 0;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b921b3c();
      uVar1 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = 0;
  if (unaff_x20[2] != 0) {
    do {
      func_0x00010b921b3c();
      uVar1 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b921680; end: 10b921693;  */

void FUN_10b921680(void)

{
  long extraout_x8;
  
  func_0x00010b921cc4();
                    /* WARNING: Could not recover jumptable at 0x00010b921690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x30))();
  return;
}



/* Entry: 10b921694; end: 10b9216b3;  */

void FUN_10b921694(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b920e68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9216b4; end: 10b9216b7;  */

void FUN_10b9216b4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b9216b8; end: 10b921707;  */

void FUN_10b9216b8(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  
  func_0x00010b921c0c();
  func_0x00010b921bd0(&PTR_FUN_110d76770);
  if (*unaff_x20 != 0) {
    do {
      func_0x00010b921b94();
    } while (extraout_w11 != 0);
  }
  func_0x00010b921c24();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b921b3c();
    } while (extraout_w11_00 != 0);
  }
  func_0x00010b921c50();
  return;
}



/* Entry: 10b921708; end: 10b92171b;  */

void FUN_10b921708(void)

{
  long extraout_x8;
  
  func_0x00010b921cc4();
                    /* WARNING: Could not recover jumptable at 0x00010b921718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x38))();
  return;
}



/* Entry: 10b92171c; end: 10b92173b;  */

void FUN_10b92171c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b920f38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92173c; end: 10b92173f;  */

void FUN_10b92173c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b921740; end: 10b92178f;  */

void FUN_10b921740(void)

{
  long extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  
  func_0x00010b921c0c();
  func_0x00010b921bd0(&PTR_FUN_110d76790);
  if (*unaff_x20 != 0) {
    do {
      func_0x00010b921b94();
    } while (extraout_w11 != 0);
  }
  func_0x00010b921c24();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b921b3c();
    } while (extraout_w11_00 != 0);
  }
  func_0x00010b921c50();
  return;
}


