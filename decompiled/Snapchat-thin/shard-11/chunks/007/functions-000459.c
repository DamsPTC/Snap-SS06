/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10883eccc; end: 10883ed3f;  */

undefined1 * FUN_10883eccc(long *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [64];
  char cStack_28;
  
  if ((*(byte *)(param_2 + 0x103) & 1) != 0) {
    return (undefined1 *)0x0;
  }
  (**(code **)(*param_1 + 0x18))(auStack_68);
  lVar1 = param_1[1];
  func_0x000107c287d8(lVar1);
  if (cStack_28 == '\x01') {
    puVar2 = auStack_68;
    func_0x00010883eb38(puVar2,lVar1,0xa4cb800);
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}



/* Entry: 10883ed40; end: 10883ed43;  */

undefined8 * FUN_10883ed40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7a0a0;
  func_0x000100864b68(param_1 + 0xf);
  func_0x000107c29c4c(param_1 + 0xd);
  func_0x000107c2916c(param_1 + 0xb);
  func_0x000107c29c50(param_1 + 9);
  func_0x000107c29764(param_1 + 7);
  func_0x000107c288a4(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 10883ed44; end: 10883ed57;  */

void FUN_10883ed44(void)

{
  FUN_10883ed58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883ed58; end: 10883edc7;  */

undefined8 * FUN_10883ed58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7a0a0;
  func_0x000100864b68(param_1 + 0xf);
  func_0x000107c29c4c(param_1 + 0xd);
  func_0x000107c2916c(param_1 + 0xb);
  func_0x000107c29c50(param_1 + 9);
  func_0x000107c29764(param_1 + 7);
  func_0x000107c288a4(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 10883edc8; end: 10883edff;  */

void FUN_10883edc8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110a7a100;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10883ee00; end: 10883ef1f;  */

void FUN_10883ee00(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  int extraout_w10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uStack_40 = 0x478;
    uStack_38 = 0;
    (**(code **)(*plVar1 + 0x10))(auStack_30,plVar1,&uStack_40);
    uStack_50 = 0x47f;
    uStack_48 = 0;
    (**(code **)(*(long *)*param_2 + 0x10))(&uStack_40,(long *)*param_2,&uStack_50);
    FUN_108884fb0(param_1,auStack_30,&uStack_40);
    param_2 = (long *)*param_2;
    uStack_50 = 0xffffffffffffffff;
    uStack_48 = 0;
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    if (param_1[1] != 0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*param_2 + 0x18))();
    func_0x000107c29764(&uStack_60);
    func_0x000107c29764(&uStack_40);
    func_0x000107c29764(auStack_30);
  }
  return;
}



/* Entry: 10883ef20; end: 10883f153;  */

/* WARNING: Possible PIC construction at 0x00010883f0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010883f148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010883f14c) */

long * FUN_10883ef20(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                    undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010873a5b4(auStack_90);
    FUN_10883f154(&uStack_130);
    func_0x00010883f194(&uStack_e0);
    func_0x0001086e53d4(&uStack_d0);
    func_0x00010873a20c(&uStack_c0);
    func_0x000107c290c0(&uStack_b0);
  }
  else {
    uVar1 = *param_2;
    lVar6 = param_2[1];
    uStack_a0 = uVar1;
    lStack_98 = lVar6;
    if (lVar6 != 0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10 != 0);
    }
    uVar2 = *param_3;
    lVar7 = param_3[1];
    uStack_b0 = uVar2;
    lStack_a8 = lVar7;
    if (lVar7 != 0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10_00 != 0);
    }
    uVar3 = *param_4;
    lVar8 = param_4[1];
    uStack_c0 = uVar3;
    lStack_b8 = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10_01 != 0);
    }
    uVar4 = *param_5;
    lVar9 = param_5[1];
    uStack_d0 = uVar4;
    lStack_c8 = lVar9;
    if (lVar9 != 0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10_02 != 0);
    }
    uVar5 = *param_6;
    plVar10 = (long *)param_6[1];
    uStack_e0 = uVar5;
    plStack_d8 = plVar10;
    if (plVar10 != (long *)0x0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10_03 != 0);
    }
    lVar12 = *param_1;
    uStack_130 = uVar1;
    lStack_128 = lVar6;
    if (lVar6 != 0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10_04 != 0);
    }
    uStack_120 = uVar2;
    lStack_118 = lVar7;
    if (lVar7 != 0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10_05 != 0);
    }
    uStack_110 = uVar3;
    lStack_108 = lVar8;
    if (lVar8 != 0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10_06 != 0);
    }
    uStack_100 = uVar4;
    lStack_f8 = lVar9;
    if (lVar9 != 0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10_07 != 0);
    }
    uStack_f0 = uVar5;
    plStack_e8 = plVar10;
    if (plVar10 != (long *)0x0) {
      do {
        func_0x00010883f7e0();
      } while (extraout_w10_08 != 0);
    }
    puStack_78 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x58;
    __Znwm();
    *puVar11 = &PTR_SUB_110a7a140;
    puVar11[1] = uVar1;
    uStack_130 = 0;
    lStack_128 = 0;
    puVar11[2] = lVar6;
    puVar11[3] = uVar2;
    uStack_120 = 0;
    lStack_118 = 0;
    puVar11[4] = lVar7;
    puVar11[5] = uVar3;
    uStack_110 = 0;
    lStack_108 = 0;
    puVar11[6] = lVar8;
    puVar11[7] = uVar4;
    uStack_100 = 0;
    lStack_f8 = 0;
    puVar11[8] = lVar9;
    puVar11[9] = uVar5;
    puVar11[10] = plVar10;
    uStack_f0 = 0;
    plStack_e8 = (long *)0x0;
    puStack_78 = puVar11;
    FUN_1088819f0(lVar12,auStack_90);
    func_0x00010873a5b4(auStack_90);
    FUN_10883f154(&uStack_130);
    func_0x00010883f194(&uStack_e0);
    func_0x0001086e53d4(&uStack_d0);
    func_0x00010873a20c(&uStack_c0);
    func_0x000107c290c0(&uStack_b0);
    param_1 = plVar10;
  }
  puVar11 = &uStack_a0;
  func_0x0001000dfb88();
  if (puVar11 != (undefined8 *)0x0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 10883f154; end: 10883f1e7;  */

undefined8 FUN_10883f154(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010883f194(param_1 + 0x40);
  func_0x0001086e53d4(param_1 + 0x30);
  func_0x00010873a20c(param_1 + 0x20);
  func_0x000107c290c0(param_1 + 0x10);
  func_0x0001000dfb88();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 10883f1e8; end: 10883f1fb;  */

void FUN_10883f1e8(void)

{
  func_0x00010883f1bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883f1fc; end: 10883f223;  */

void FUN_10883f1fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_SUB_110a7a140;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010883f7e0();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010883f7e0();
    } while (extraout_w10_00 != 0);
  }
  lVar3 = puVar2[5];
  uVar4 = puVar2[4];
  puVar1[6] = puVar2[5];
  puVar1[5] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010883f7e0();
    } while (extraout_w10_01 != 0);
  }
  lVar3 = puVar2[7];
  uVar4 = puVar2[6];
  puVar1[8] = puVar2[7];
  puVar1[7] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010883f7e0();
    } while (extraout_w10_02 != 0);
  }
  lVar3 = puVar2[9];
  uVar4 = puVar2[8];
  puVar1[10] = puVar2[9];
  puVar1[9] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010883f7e0();
    } while (extraout_w10_03 != 0);
  }
  return;
}



/* Entry: 10883f224; end: 10883f24f;  */

void FUN_10883f224(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_110a7a140;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010883f7e0();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010883f7e0();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = puVar1[5];
  uVar3 = puVar1[4];
  param_2[6] = puVar1[5];
  param_2[5] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010883f7e0();
    } while (extraout_w10_01 != 0);
  }
  lVar2 = puVar1[7];
  uVar3 = puVar1[6];
  param_2[8] = puVar1[7];
  param_2[7] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010883f7e0();
    } while (extraout_w10_02 != 0);
  }
  lVar2 = puVar1[9];
  uVar3 = puVar1[8];
  param_2[10] = puVar1[9];
  param_2[9] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010883f7e0();
    } while (extraout_w10_03 != 0);
  }
  return;
}



/* Entry: 10883f250; end: 10883f6d7;  */

void FUN_10883f250(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined ***pppuVar5;
  long lVar6;
  long *plStack_c60;
  long lStack_c58;
  undefined8 *apuStack_c50 [2];
  long *aplStack_c40 [2];
  long *aplStack_c30 [2];
  long alStack_c20 [2];
  undefined **ppuStack_c10;
  undefined **ppuStack_c08;
  undefined8 uStack_c00;
  byte bStack_838;
  undefined **ppuStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined4 uStack_810;
  byte bStack_458;
  undefined1 auStack_450 [464];
  byte bStack_280;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000107c29b54(alStack_c20,param_1 + 8);
  func_0x000107c29138(aplStack_c30,param_1 + 0x18);
  FUN_108739bec(aplStack_c40,param_1 + 0x28);
  FUN_1086e54d0(apuStack_c50,param_1 + 0x38);
  plStack_c60 = (long *)0x0;
  lStack_c58 = 0;
  lVar2 = *(long *)(param_1 + 0x50);
  if ((lVar2 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_c58 = lVar2, lVar2 != 0)) {
    plStack_c60 = *(long **)(param_1 + 0x48);
  }
  if ((((alStack_c20[0] != 0) && (aplStack_c30[0] != (long *)0x0)) &&
      (aplStack_c40[0] != (long *)0x0)) &&
     (((apuStack_c50[0] != (undefined8 *)0x0 && (plStack_c60 != (long *)0x0)) &&
      ((plVar4 = aplStack_c40[0], (param_2[0x20] & 1U) != 0 ||
       (((param_3[0x20] & 1U) == 0 ||
        (pcVar3 = param_3, func_0x00010873a0a8(), plVar4 = aplStack_c40[0], *pcVar3 != '\0'))))))))
  {
    lStack_68 = 0;
    lStack_60 = 0;
    uStack_58 = 0;
    (**(code **)(*plVar4 + 0x10))();
    for (lVar2 = 0; lVar1 = lStack_60, lVar6 = lStack_68, lVar2 != 2; lVar2 = lVar2 + 1) {
      FUN_108867634(auStack_450,alStack_c20[0],(&UNK_10df614cd)[lVar2],0,0,0,0,plVar4,0);
      func_0x000107c288b4(&ppuStack_830,auStack_450);
      _bzero(&ppuStack_c10,0x3e0);
      while ((((bStack_458 & 1) != 0 || ((bStack_838 & 1) != 0)) && (ppuStack_830 != ppuStack_c10)))
      {
        pppuVar5 = &ppuStack_830;
        func_0x000107c288b8(pppuVar5);
        func_0x000107c28840(&lStack_68,pppuVar5);
        func_0x000107c28920(&ppuStack_830);
      }
      func_0x000107c288cc(&ppuStack_c08);
      func_0x000107c288cc(&uStack_828);
      func_0x000107c288ec(auStack_450);
    }
    for (; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
      FUN_1086a1148(auStack_450,alStack_c20[0],lVar6,2);
      if ((bStack_280 & 1) != 0) {
        uStack_828 = 0;
        ppuStack_830 = (undefined **)0x0;
        uStack_820 = 0;
        ppuStack_c10 = (undefined **)0x0;
        ppuStack_c08 = (undefined **)0x0;
        uStack_c00 = 0;
        (**(code **)*apuStack_c50[0])
                  (apuStack_c50[0],lVar6,auStack_450,1,&ppuStack_830,&ppuStack_c10);
        func_0x000104be1274(&ppuStack_c10);
        func_0x00010867b9fc(&ppuStack_830);
      }
      func_0x000107c288c8(auStack_450);
    }
    if (lStack_68 != lStack_60) {
      (**(code **)(*aplStack_c30[0] + 200))(aplStack_c30[0],&lStack_68);
    }
    plVar4 = plStack_c60;
    uStack_820 = 0;
    uStack_818 = 0;
    uStack_828 = 0;
    ppuStack_830 = &PTR_FUN_110a609a8;
    uStack_810 = 0x177;
    if (param_3[0x20] == '\x01') {
      func_0x00010873a0a8();
      lVar2 = 0x1de;
      if (*param_3 == '\0') {
        lVar2 = 0x1df;
      }
    }
    else {
      lVar2 = 0x1dd;
    }
    func_0x000107c278b8(auStack_450,PTR_DAT_113268e58);
    pppuVar5 = &ppuStack_830;
    func_0x000107c28824(pppuVar5,auStack_450,(&PTR_s_success_113269028)[lVar2]);
    func_0x00010883f7fc();
    if (param_2[0x20] == '\x01') {
      func_0x00010873a0a8();
      lVar2 = 0x1e1;
      if (*param_2 == '\0') {
        lVar2 = 0x1e2;
      }
    }
    else {
      lVar2 = 0x1e0;
    }
    func_0x000107c278b8(auStack_450,PTR_DAT_113268e60);
    func_0x000107c28824(pppuVar5,auStack_450,(&PTR_s_success_113269028)[lVar2]);
    func_0x00010883f7fc();
    func_0x000107c2884c(auStack_450,pppuVar5);
    (**(code **)(*plVar4 + 0x50))(plVar4,auStack_450);
    func_0x000107c2882c(auStack_450);
    func_0x000107c2882c(&ppuStack_830);
    func_0x000107c27a04(&lStack_68);
  }
  func_0x000107c288a4(&plStack_c60);
  func_0x000107c28ab8(apuStack_c50);
  func_0x000107c28800(aplStack_c40);
  func_0x000107c28ab4(aplStack_c30);
  func_0x000107c28808(alStack_c20);
  return;
}



/* Entry: 10883f6d8; end: 10883f70f;  */

long FUN_10883f6d8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a7a1a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10883f710; end: 10883f8eb;  */

undefined ** FUN_10883f710(void)

{
  return &PTR_DAT_110a7a1a0;
}



/* Entry: 10883f8ec; end: 10883f9bf;  */

void FUN_10883f8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = param_5;
  func_0x000107c28e64(param_5);
  ppuVar1 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_5 + 0x78) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_5 + 0x78);
  }
  ppuVar2 = &PTR_PTR_113280bc8;
  if ((undefined **)ppuVar1[0xd] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar1[0xd];
  }
  FUN_10883f9c0(param_1,param_2,param_3,param_4,param_6,param_7,param_8,lVar3,
                *(int *)((long)ppuVar2 + 0x1c) == 5);
  return;
}



/* Entry: 10883f9c0; end: 10883fbef;  */

void FUN_10883f9c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,int param_6,int *param_7,int param_8,undefined4 param_9,
                  undefined4 param_10,long param_11)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined4 uStack_b0;
  byte bStack_ac;
  long alStack_a8 [5];
  undefined1 auStack_80 [24];
  char cStack_68;
  
  if ((char)param_9 == '\0') {
    return;
  }
  if (param_8 == 0 && param_9._1_1_ == '\0') {
    return;
  }
  func_0x000107c29e2c(auStack_80,param_5 + 0x50);
  if (cStack_68 != '\x01') goto LAB_10883fba4;
  ppuVar3 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_5 + 0x80) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_5 + 0x80);
  }
  if ((param_6 != 0) && (*(int *)(ppuVar3 + 0x1c) != 0)) {
    if ((*(byte *)(param_4 + 5) & 1) == 0) goto LAB_10883fba4;
    ppuVar3 = ppuVar3 + 0x1b;
    FUN_108667ea0(ppuVar3,param_3,param_4,5);
    if (((ulong)ppuVar3 & 1) != 0) goto LAB_10883fba4;
  }
  plVar6 = (long *)*param_1;
  alStack_a8[2] = 0;
  alStack_a8[3] = 0;
  alStack_a8[4] = 0;
  alStack_a8[1] = 5;
  plVar4 = alStack_a8;
  alStack_a8[0] = param_4;
  FUN_108668260(plVar4);
  bStack_ac = 0;
  uVar5 = 0;
  if ((char)param_7[1] == '\x01') {
    if (*param_7 - 0x2100f5U < 10) {
      uVar5 = *(undefined8 *)(&UNK_10df61620 + (ulong)(*param_7 - 0x2100f5U) * 8);
      bStack_ac = 1;
    }
    else {
      bStack_ac = 1;
      uVar5 = 10;
    }
  }
  bStack_ac = (byte)((ulong)uVar5 >> 0x20) | bStack_ac;
  uStack_b0 = (undefined4)uVar5;
  ppuVar3 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_5 + 0x80) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_5 + 0x80);
  }
  ppuVar1 = &PTR_PTR_11326cb58;
  if (*(undefined ***)(param_5 + 0x68) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_5 + 0x68);
  }
  puVar7 = ppuVar3[0x26];
  ppuVar3 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_5 + 0x78) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_5 + 0x78);
  }
  uVar2 = *(undefined4 *)(ppuVar3 + 0x15);
  if (*(char *)(param_5 + 0x28) == '\x01') {
    FUN_10883fbf0(param_2,param_3,*(undefined8 *)(param_5 + 0x20));
  }
  (**(code **)(*plVar6 + 0x20))
            (plVar6,auStack_80,alStack_a8 + 2,plVar4,param_6 == 0,&uStack_b0,
             (long)((double)param_11 / 1000.0),puVar7,ppuVar1,uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_a8 + 2);
LAB_10883fba4:
  func_0x000107c279a4(auStack_80);
  return;
}



/* Entry: 10883fbf0; end: 10883fc33;  */

long FUN_10883fbf0(long param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  param_1 = param_1 + 0x18;
  puVar1 = &uStack_24;
  FUN_1086a3d00(param_1,puVar1,param_2);
  param_3 = param_3 - param_1;
  if (((ulong)puVar1 & 1) == 0) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 10883fc34; end: 10883fcdf;  */

undefined8 *
FUN_10883fc34(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110a7a1c0;
  param_1[1] = param_2;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[5] = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_1 + 6,param_4 + 1);
  FUN_108848684(param_1 + 0xb);
  return param_1;
}



/* Entry: 10883fce0; end: 10883fce7;  */

/* WARNING: Removing unreachable block (ram,0x00010883fd0c) */

void FUN_10883fce0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -1;
  *(long *)(param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    return;
  }
  (**(code **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x24) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010883fd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010883fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 10883fce8; end: 10883fd77;  */

void FUN_10883fce8(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -1;
  *(long *)(param_1 + 8) = lVar1;
  if (param_2 >> 0x20 != 0) {
    *(int *)(param_1 + 0x20) = (int)param_2;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  if (lVar1 != 0) {
    return;
  }
  (**(code **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x24) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010883fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
              (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010883fd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 10883fd78; end: 10883fd87;  */

void FUN_10883fd78(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -1;
  *(long *)(param_1 + 8) = lVar1;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x24) = 1;
  if (lVar1 != 0) {
    return;
  }
  (**(code **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x24) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010883fd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010883fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 10883fd88; end: 10883fd9b;  */

void FUN_10883fd88(void)

{
  FUN_10883fd9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10883fd9c; end: 10883fdeb;  */

undefined8 * FUN_10883fd9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a7a1c0;
  func_0x000107c27914(param_1 + 0xb);
  (**(code **)param_1[6])();
  func_0x000104be3970(param_1 + 2);
  return param_1;
}



/* Entry: 10883fdec; end: 10883fe57;  */

long * FUN_10883fdec(long *param_1,long *param_2)

{
  undefined *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = &UNK_10f4bd279;
    func_0x000107c33ef8();
    func_0x000108840150();
    func_0x000108840104();
    func_0x000107c33ef0();
    if ((((ulong)puVar1 & 1) != 0) && (0 < (long)param_1)) {
      return param_1;
    }
  }
  FUN_10883fe58(param_2);
  return param_2;
}



/* Entry: 10883fe58; end: 10883fe6b;  */

undefined1  [16] FUN_10883fe58(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auVar1 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  byte bStack_40;
  undefined1 uStack_31;
  
  func_0x000100574c28(param_1,0x1d,900000,1);
  if ((bStack_40 & 1) == 0) {
    unaff_x21 = unaff_x20 & 0xffffffffffffff00;
  }
  else {
    func_0x000107c29338(&uStack_31,auStack_58,auStack_60);
    func_0x000107c32908();
    if (!(bool)in_ZR) {
      unaff_x20 = 1;
      unaff_x19 = extraout_x8;
    }
  }
  func_0x000100574ca0();
  auVar1._8_8_ = unaff_x20 & 0xff | unaff_x21;
  auVar1._0_8_ = unaff_x19;
  return auVar1;
}



/* Entry: 10883fe6c; end: 10883fed7;  */

long FUN_10883fe6c(long param_1)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  
  func_0x000108840148();
  if (*unaff_x20 == 0) {
    lVar2 = 30000;
  }
  else {
    puVar1 = &UNK_10f4bd29d;
    lVar2 = param_1;
    func_0x000107c33ef8();
    func_0x000108840150();
    func_0x000108840104();
    if (((ulong)puVar1 & 1) == 0) {
      lVar2 = 30000;
    }
    func_0x000107c33ef0();
  }
  if (lVar2 <= param_1) {
    param_1 = lVar2;
  }
  return param_1;
}



/* Entry: 10883fed8; end: 10883ff4b;  */

long FUN_10883fed8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x20;
  
  func_0x000108840148();
  if (*unaff_x20 != 0) {
    puVar1 = &UNK_10f4bd2c7;
    lVar2 = param_1;
    func_0x000107c33ef8();
    func_0x000108840150();
    func_0x000108840104();
    func_0x000107c33ef0();
    if (((ulong)puVar1 & 1) != 0) {
      if (lVar2 < 0x1389) {
        lVar2 = 5000;
      }
      goto LAB_10883ff34;
    }
  }
  lVar2 = 20000;
LAB_10883ff34:
  if (lVar2 <= param_1) {
    param_1 = lVar2;
  }
  return param_1;
}



/* Entry: 10883ff4c; end: 10883ffaf;  */

void FUN_10883ff4c(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    param_1 = (undefined8 *)0x3;
  }
  else {
    uVar1 = 0;
    func_0x000107c33ef8();
    func_0x00010884012c(*(undefined8 *)(*plVar2 + 0x18));
    if ((uVar1 & 1) == 0) {
      param_1 = (undefined8 *)0x3;
    }
    func_0x000107c33ef0();
  }
  if ((long)param_1 < 2) {
    param_1 = (undefined8 *)0x1;
  }
  func_0x000108840138(param_1);
  return;
}



/* Entry: 10883ffb0; end: 108840023;  */

long FUN_10883ffb0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x20;
  
  func_0x000108840148();
  if (*unaff_x20 != 0) {
    uVar1 = 0;
    lVar2 = param_1;
    func_0x000107c33ef8();
    func_0x000108840150();
    func_0x000108840104();
    func_0x000107c33ef0();
    if ((uVar1 & 1) != 0) {
      if (lVar2 < 0x3e9) {
        lVar2 = 1000;
      }
      goto LAB_10884000c;
    }
  }
  lVar2 = 10000;
LAB_10884000c:
  if (lVar2 <= param_1) {
    param_1 = lVar2;
  }
  return param_1;
}



/* Entry: 108840024; end: 10884007f;  */

void FUN_108840024(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    param_1 = (undefined8 *)0x1;
  }
  else {
    uVar1 = 0;
    func_0x000107c33ef8();
    func_0x00010884012c(*(undefined8 *)(*plVar2 + 0x18));
    if ((uVar1 & 1) == 0) {
      param_1 = (undefined8 *)0x1;
    }
    func_0x000107c33ef0();
  }
  func_0x000108840138((ulong)param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU));
  return;
}



/* Entry: 108840080; end: 1088400e3;  */

void FUN_108840080(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    param_1 = (undefined8 *)0x3;
  }
  else {
    puVar1 = &UNK_10f4bd349;
    func_0x000107c33ef8();
    func_0x00010884012c(*(undefined8 *)(*plVar2 + 0x18));
    if (((ulong)puVar1 & 1) == 0) {
      param_1 = (undefined8 *)0x3;
    }
    func_0x000107c33ef0();
  }
  if ((long)param_1 < 2) {
    param_1 = (undefined8 *)0x1;
  }
  func_0x000108840138(param_1);
  return;
}



/* Entry: 1088400e4; end: 10884015b;  */

undefined8 FUN_1088400e4(undefined8 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000020;
  func_0x00010054e364();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10884015c; end: 10884020f;  */

void FUN_10884015c(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_2 + 0x28);
  if ((uVar3 == 0) || (func_0x000107c28e10(uVar3,param_3), (int)uVar3 == 0)) {
    if (*(long *)(param_2 + 8) != 0) {
      func_0x000107c33f1c();
      func_0x000107c33efc();
      func_0x000107c33f0c();
      func_0x000107c33f08();
      func_0x000107c33f20();
      func_0x000107c33f04();
      return;
    }
  }
  else {
    func_0x000108840284();
    if ((uVar3 & 1) != 0) {
      lVar4 = param_2;
      FUN_108692404(param_2,param_3);
      iVar2 = *(int *)(lVar4 + 0x1c);
      FUN_108692404(param_2,param_3);
      if (iVar2 != 5) {
        *param_1 = 0;
        param_1[0x18] = 0;
        return;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x1c) != 5) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c60c94(param_1,puVar1);
      param_1[0x18] = 1;
      return;
    }
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 108840210; end: 108840213;  */

undefined8 * FUN_108840210(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7a208;
  func_0x000107c27d08(param_1 + 7);
  func_0x000107c28e1c(param_1 + 5);
  func_0x000107c29bb4(param_1 + 3);
  func_0x000107c27d08(param_1 + 1);
  return param_1;
}



/* Entry: 108840214; end: 108840227;  */

void FUN_108840214(void)

{
  FUN_108840228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108840228; end: 108840277;  */

undefined8 * FUN_108840228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7a208;
  func_0x000107c27d08(param_1 + 7);
  func_0x000107c28e1c(param_1 + 5);
  func_0x000107c29bb4(param_1 + 3);
  func_0x000107c27d08(param_1 + 1);
  return param_1;
}



/* Entry: 108840278; end: 1088402b3;  */

void FUN_108840278(void)

{
  func_0x000100100fec(&stack0x00000068);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000038);
  return;
}



/* Entry: 1088402b4; end: 1088402db;  */

long FUN_1088402b4(long param_1)

{
  long lStack_28;
  
  func_0x00010867bb84(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1088402dc; end: 108840333;  */

long * FUN_1088402dc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_1088402b4(lVar1);
    func_0x000108841214();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108840334; end: 10884048b;  */

undefined8 * FUN_108840334(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auStack_158 [24];
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  if (*(char *)(param_1 + 7) == '\x01') {
    func_0x00010089b2d0(param_1 + 5);
    puVar8 = param_1 + 5;
    FUN_108680148();
  }
  if (param_1[10] != 0) {
    lVar13 = *(long *)(param_1[8] + 0x48);
    lVar1 = param_1[2];
    puVar8 = (undefined8 *)param_1[3];
    uVar9 = *puVar8;
    uVar10 = param_1[1];
    if (lVar1 != 0) {
      plVar14 = (long *)(lVar1 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar8 = (undefined8 *)param_1[3];
    }
    param_3 = (long *)puVar8[4];
    uStack_c8 = uVar10;
    lStack_c0 = lVar1;
    (**(code **)(*param_3 + 0x10))();
    lVar13 = lVar13 - (long)param_3;
    __ZNSt3__16chrono12steady_clock3nowEv();
    pcStack_a8 = FUN_1088407d8;
    ppuStack_a0 = &PTR_FUN_110a7a2e8;
    param_3 = param_3 + lVar13 * 0x1e848;
    uStack_c8 = 0;
    lStack_c0 = 0;
    uStack_98 = uVar10;
    lStack_90 = lVar1;
    func_0x00010bcce9b8(auStack_b8,uVar9,&pcStack_a8);
    func_0x00010884121c();
    FUN_10868009c(param_1 + 5,auStack_b8);
    func_0x000107c27f44(auStack_b8);
    puVar8 = &uStack_c8;
    func_0x000107c29c5c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x000107c27f44(auStack_b8);
  puVar8 = &uStack_c8;
  func_0x000107c29c5c();
  func_0x000108841234();
  lVar1 = *param_3;
  lVar13 = param_3[1];
  func_0x000107c27994(auStack_158);
  if (puVar8[10] == 0) {
    lVar11 = 0x7fffffffffffffff;
  }
  else {
    lVar11 = *(long *)(puVar8[8] + 0x48);
  }
  plVar15 = puVar8 + 9;
  lStack_140 = lVar1;
  lStack_138 = lVar13;
  plVar14 = plVar15;
  plVar12 = plVar15;
  plVar4 = (long *)*plVar15;
  lStack_130 = param_4;
joined_r0x0001088404e8:
  do {
    if (plVar4 == (long *)0x0) {
LAB_108840544:
      puVar7 = (undefined8 *)0x50;
      __Znwm();
      uStack_118 = 0;
      puStack_128 = puVar7;
      plStack_120 = plVar15;
      FUN_108840628(puVar7 + 4,auStack_158);
      uStack_118 = CONCAT71(uStack_118._1_7_,1);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = plVar12;
      *plVar14 = (long)puVar7;
      if (*(long *)puVar8[8] != 0) {
        puVar8[8] = *(long *)puVar8[8];
      }
      func_0x000107c27be4(puVar8[9],puVar7);
      puVar8[10] = puVar8[10] + 1;
      puStack_128 = (undefined8 *)0x0;
      func_0x0001088411b8(&puStack_128);
      if (lStack_130 < lVar11) {
        FUN_108840334(puVar8);
      }
      puVar8 = (undefined8 *)0x1;
LAB_1088405c4:
      func_0x000107c27914(auStack_158);
      return puVar8;
    }
    puVar5 = auStack_158;
    FUN_108841128(puVar5,plVar4 + 4);
    plVar12 = plVar4;
    if ((int)puVar5 != 0) {
      plVar14 = plVar4;
      plVar4 = (long *)*plVar4;
      goto joined_r0x0001088404e8;
    }
    plVar6 = plVar4 + 4;
    FUN_108841128(plVar6,auStack_158);
    if ((int)plVar6 == 0) {
      if (*plVar14 != 0) {
        puVar8 = (undefined8 *)0x0;
        goto LAB_1088405c4;
      }
      goto LAB_108840544;
    }
    plVar14 = plVar4 + 1;
    plVar4 = (long *)*plVar14;
  } while( true );
}



/* Entry: 10884048c; end: 10884060f;  */

undefined8 FUN_10884048c(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  uVar6 = *param_3;
  uVar1 = param_3[1];
  func_0x000107c27994(auStack_88);
  if (*(long *)(param_1 + 0x50) == 0) {
    lVar7 = 0x7fffffffffffffff;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x48);
  }
  plVar10 = (long *)(param_1 + 0x48);
  uStack_70 = uVar6;
  uStack_68 = uVar1;
  plVar9 = plVar10;
  plVar8 = plVar10;
  plVar2 = (long *)*plVar10;
  lStack_60 = param_4;
joined_r0x0001088404e8:
  do {
    if (plVar2 == (long *)0x0) {
LAB_108840544:
      puVar5 = (undefined8 *)0x50;
      __Znwm();
      uStack_48 = 0;
      puStack_58 = puVar5;
      plStack_50 = plVar10;
      FUN_108840628(puVar5 + 4,auStack_88);
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = plVar8;
      *plVar9 = (long)puVar5;
      if (**(long **)(param_1 + 0x40) != 0) {
        *(long *)(param_1 + 0x40) = **(long **)(param_1 + 0x40);
      }
      func_0x000107c27be4(*(undefined8 *)(param_1 + 0x48),puVar5);
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      puStack_58 = (undefined8 *)0x0;
      func_0x0001088411b8(&puStack_58);
      if (lStack_60 < lVar7) {
        FUN_108840334(param_1);
      }
      uVar6 = 1;
LAB_1088405c4:
      func_0x000107c27914(auStack_88);
      return uVar6;
    }
    puVar3 = auStack_88;
    FUN_108841128(puVar3,plVar2 + 4);
    plVar8 = plVar2;
    if ((int)puVar3 != 0) {
      plVar9 = plVar2;
      plVar2 = (long *)*plVar2;
      goto joined_r0x0001088404e8;
    }
    plVar4 = plVar2 + 4;
    FUN_108841128(plVar4,auStack_88);
    if ((int)plVar4 == 0) {
      if (*plVar9 != 0) {
        uVar6 = 0;
        goto LAB_1088405c4;
      }
      goto LAB_108840544;
    }
    plVar9 = plVar2 + 1;
    plVar2 = (long *)*plVar9;
  } while( true );
}



/* Entry: 108840610; end: 108840613;  */

undefined8 * FUN_108840610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7a270;
  func_0x000108840740(param_1[9]);
  func_0x000107c28ae0(param_1 + 5);
  func_0x000107c29c58(param_1 + 3);
  func_0x000107c29c5c(param_1 + 1);
  return param_1;
}



/* Entry: 108840614; end: 108840627;  */

void FUN_108840614(void)

{
  func_0x0001088406f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108840628; end: 108840653;  */

void FUN_108840628(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c27994();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 108840654; end: 108840667;  */

long * FUN_108840654(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = plVar1[1];
  while (lVar2 != plVar1[2]) {
    plVar1[2] = plVar1[2] + -0x30;
    func_0x000107c27914();
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 108840668; end: 1088407bf;  */

long * FUN_108840668(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x30;
    func_0x000107c27914();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1088407c0; end: 1088407d7;  */

void FUN_1088407c0(long *param_1,long param_2)

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



/* Entry: 1088407d8; end: 108841103;  */

void FUN_1088407d8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined8 uStack_2a8;
  byte bStack_100;
  long *plStack_f0;
  long **pplStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  long lStack_c0;
  char cStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  long *plStack_80;
  ulong uStack_78;
  float fStack_70;
  
  lStack_340 = 0;
  lStack_338 = 0;
  lVar4 = *(long *)(param_1 + 0x18);
  if (((lVar4 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_338 = lVar4, lVar4 != 0))
     && (lVar4 = *(long *)(param_1 + 0x10), lStack_340 = lVar4, lVar4 != 0)) {
    puStack_330 = (undefined8 *)0x0;
    puStack_328 = (undefined8 *)0x0;
    puStack_320 = (undefined8 *)0x0;
    puVar14 = *(undefined8 **)(lVar4 + 0x40);
    puVar16 = (undefined8 *)(lVar4 + 0x48);
    if (puVar14 != puVar16) {
      plVar5 = *(long **)(*(long *)(lVar4 + 0x18) + 0x20);
      (**(code **)(*plVar5 + 0x10))();
      while ((puVar9 = puStack_328, puVar14 != puVar16 && ((long)puVar14[9] <= (long)plVar5))) {
        if (puStack_328 < puStack_320) {
          func_0x00010884123c();
          puVar9 = puVar9 + 6;
        }
        else {
          lVar15 = (long)puStack_328 - (long)puStack_330;
          uVar17 = lVar15 / 0x30 + 1;
          if (0x555555555555555 < uVar17) {
            FUN_108840654();
            goto LAB_108840ff0;
          }
          uVar1 = ((long)puStack_320 - (long)puStack_330) / 0x30;
          uVar11 = uVar1 * 2;
          if (uVar11 < uVar17 || uVar11 - uVar17 == 0) {
            uVar11 = uVar17;
          }
          if (0x2aaaaaaaaaaaaa9 < uVar1) {
            uVar11 = 0x555555555555555;
          }
          ppuStack_2b0 = &puStack_320;
          if (uVar11 == 0) {
            puVar6 = (undefined8 *)0x0;
          }
          else {
            if (0x555555555555555 < uVar11) {
              func_0x000104bd35f4();
              goto LAB_108840ff0;
            }
            puVar6 = (undefined8 *)(uVar11 * 0x30);
            __Znwm();
          }
          lVar15 = (long)puVar6 + lVar15;
          puStack_2d0 = puVar6;
          puStack_2c8 = (undefined8 *)lVar15;
          puStack_2c0 = (undefined8 *)lVar15;
          puStack_2b8 = puVar6 + uVar11 * 6;
          func_0x00010884123c();
          puVar8 = puStack_328;
          puVar19 = (undefined8 *)
                    (lVar15 + (((long)puStack_328 - (long)puStack_330) / -0x30) * 0x30);
          puVar10 = puVar19;
          for (puVar9 = puStack_330; puVar7 = puStack_330, puVar9 != puStack_328;
              puVar9 = puVar9 + 6) {
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            uVar20 = *puVar9;
            puVar10[1] = puVar9[1];
            *puVar10 = uVar20;
            puVar10[2] = puVar9[2];
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
            uVar21 = puVar9[4];
            uVar20 = puVar9[3];
            puVar10[5] = puVar9[5];
            puVar10[4] = uVar21;
            puVar10[3] = uVar20;
            puVar10 = puVar10 + 6;
          }
          for (; puVar7 != puVar8; puVar7 = puVar7 + 6) {
            func_0x000107c27914();
          }
          puVar9 = (undefined8 *)(lVar15 + 0x30);
          puStack_2c0 = puStack_330;
          puStack_2b8 = puStack_320;
          puStack_2d0 = puStack_330;
          puStack_2c8 = puStack_330;
          puStack_330 = puVar19;
          puStack_328 = puVar9;
          puStack_320 = puVar6 + uVar11 * 6;
          FUN_108840668(&puStack_2d0);
        }
        puVar6 = puVar14;
        puStack_328 = puVar9;
        func_0x000107c27be0();
        if (*(undefined8 **)(lVar4 + 0x40) == puVar14) {
          *(undefined8 **)(lVar4 + 0x40) = puVar6;
        }
        *(long *)(lVar4 + 0x50) = *(long *)(lVar4 + 0x50) + -1;
        func_0x00010530d618(*(undefined8 *)(lVar4 + 0x48),puVar14);
        func_0x000107c27914(puVar14 + 4);
        func_0x000108841214();
        puVar14 = puVar6;
      }
      puStack_88 = (undefined8 *)0x0;
      lStack_90 = 0;
      uStack_78 = 0;
      plStack_80 = (long *)0x0;
      fStack_70 = 1.0;
      for (puVar14 = puStack_330; puVar14 != puVar9; puVar14 = puVar14 + 6) {
        puStack_2b8 = (undefined8 *)0x0;
        puStack_2c0 = (undefined8 *)0x0;
        uStack_2a8 = 0;
        puStack_2c8 = (undefined8 *)0x0;
        puStack_2d0 = (undefined8 *)0x0;
        ppuStack_2b0 = (undefined8 **)0x3f800000;
        puVar10 = puVar14;
        FUN_108848654();
        puVar6 = puStack_88;
        if (puStack_88 != (undefined8 *)0x0) {
          uVar17 = (long)puStack_88 - 1;
          uVar18 = (uint)puStack_88;
          if (((ulong)puStack_88 & uVar17) == 0) {
            puVar16 = (undefined8 *)((ulong)(uVar18 - 1) & (ulong)puVar10);
          }
          else {
            puVar16 = puVar10;
            if (puStack_88 <= puVar10) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = (uint)puVar10 / uVar18;
              }
              puVar16 = (undefined8 *)(ulong)((uint)puVar10 - uVar2 * uVar18);
            }
          }
          plVar5 = *(long **)(lStack_90 + (long)puVar16 * 8);
          if (plVar5 != (long *)0x0) {
            do {
              while( true ) {
                plVar5 = (long *)*plVar5;
                if (plVar5 == (long *)0x0) goto LAB_108840ac0;
                puVar8 = (undefined8 *)plVar5[1];
                if (puVar8 != puVar10) break;
                plVar13 = plVar5 + 2;
                func_0x000107c28078(plVar13,puVar14);
                if (((ulong)plVar13 & 1) != 0) goto LAB_108840d7c;
              }
              if (((ulong)puVar6 & uVar17) == 0) {
                puVar8 = (undefined8 *)((ulong)puVar8 & uVar17);
              }
              else if (puVar6 <= puVar8) {
                uVar11 = 0;
                if (puVar6 != (undefined8 *)0x0) {
                  uVar11 = (ulong)puVar8 / (ulong)puVar6;
                }
                puVar8 = (undefined8 *)((long)puVar8 - uVar11 * (long)puVar6);
              }
            } while (puVar8 == puVar16);
          }
        }
LAB_108840ac0:
        plVar5 = (long *)0x58;
        __Znwm();
        uStack_e0 = 0;
        *plVar5 = 0;
        plVar5[1] = (long)puVar10;
        plStack_f0 = plVar5;
        pplStack_e8 = &plStack_80;
        func_0x000107c27994(plVar5 + 2,puVar14);
        FUN_1086af1f8(plVar5 + 5,&puStack_2d0);
        *(undefined1 *)(plVar5 + 10) = (undefined1)uStack_2a8;
        uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
        if ((puVar6 == (undefined8 *)0x0) || (fStack_70 * (float)puVar6 < (float)(uStack_78 + 1))) {
          uVar17 = 1;
          if ((undefined8 *)0x2 < puVar6) {
            uVar17 = (ulong)(((ulong)puVar6 & (long)puVar6 - 1U) != 0);
          }
          puVar16 = (undefined8 *)(uVar17 | (long)puVar6 << 1);
          puVar6 = (undefined8 *)(long)((float)(uStack_78 + 1) / fStack_70);
          if (puVar16 <= puVar6) {
            puVar16 = puVar6;
          }
          if ((long)puVar16 - 1U == 0) {
            puVar16 = (undefined8 *)0x2;
          }
          else if (((ulong)puVar16 & (long)puVar16 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          puVar6 = puStack_88;
          if (puStack_88 < puVar16) {
LAB_108840b78:
            if ((ulong)puVar16 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_108840ff0;
            }
            lVar15 = (long)puVar16 << 3;
            __Znwm(lVar15);
            FUN_1088407c0(&lStack_90,lVar15);
            for (puVar6 = (undefined8 *)0x0; puVar16 != puVar6;
                puVar6 = (undefined8 *)((long)puVar6 + 1)) {
              *(undefined8 *)(lStack_90 + (long)puVar6 * 8) = 0;
            }
            puStack_88 = puVar16;
            if (plStack_80 != (long *)0x0) {
              puVar6 = (undefined8 *)plStack_80[1];
              uVar11 = (long)puVar16 - 1;
              uVar17 = 0;
              if (puVar16 != (undefined8 *)0x0) {
                uVar17 = (ulong)puVar6 / (ulong)puVar16;
              }
              puVar8 = puVar6;
              if (puVar16 <= puVar6) {
                puVar8 = (undefined8 *)((long)puVar6 - uVar17 * (long)puVar16);
              }
              if (((ulong)puVar16 & uVar11) == 0) {
                puVar8 = (undefined8 *)((ulong)puVar6 & uVar11);
              }
              *(long ***)(lStack_90 + (long)puVar8 * 8) = &plStack_80;
              plVar13 = plStack_80;
              while (plVar12 = plVar13, plVar13 = (long *)*plVar12, plVar13 != (long *)0x0) {
                puVar6 = (undefined8 *)plVar13[1];
                if (((ulong)puVar16 & uVar11) == 0) {
                  puVar6 = (undefined8 *)((ulong)puVar6 & uVar11);
                }
                else if (puVar16 <= puVar6) {
                  uVar17 = 0;
                  if (puVar16 != (undefined8 *)0x0) {
                    uVar17 = (ulong)puVar6 / (ulong)puVar16;
                  }
                  puVar6 = (undefined8 *)((long)puVar6 - uVar17 * (long)puVar16);
                }
                if (puVar6 != puVar8) {
                  if (*(long *)(lStack_90 + (long)puVar6 * 8) == 0) {
                    *(long **)(lStack_90 + (long)puVar6 * 8) = plVar12;
                    puVar8 = puVar6;
                  }
                  else {
                    *plVar12 = *plVar13;
                    *plVar13 = **(long **)(lStack_90 + (long)puVar6 * 8);
                    **(undefined8 **)(lStack_90 + (long)puVar6 * 8) = plVar13;
                    plVar13 = plVar12;
                  }
                }
              }
            }
          }
          else if (puVar16 < puStack_88) {
            puVar8 = (undefined8 *)(long)((float)uStack_78 / fStack_70);
            if ((puStack_88 < (undefined8 *)0x3) ||
               (((ulong)puStack_88 & (long)puStack_88 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((undefined8 *)0x1 < puVar8) {
              puVar8 = (undefined8 *)(1L << (-LZCOUNT((long)puVar8 + -1) & 0x3fU));
            }
            if (puVar16 <= puVar8) {
              puVar16 = puVar8;
            }
            if (puVar16 < puVar6) {
              if (puVar16 != (undefined8 *)0x0) goto LAB_108840b78;
              FUN_1088407c0(&lStack_90,0);
              puStack_88 = (undefined8 *)0x0;
            }
          }
          puVar6 = puStack_88;
          if (((ulong)puStack_88 & (long)puStack_88 - 1U) == 0) {
            puVar16 = (undefined8 *)((ulong)((int)puStack_88 - 1) & (ulong)puVar10);
          }
          else {
            puVar16 = puVar10;
            if (puStack_88 <= puVar10) {
              uVar17 = 0;
              if (puStack_88 != (undefined8 *)0x0) {
                uVar17 = (ulong)puVar10 / (ulong)puStack_88;
              }
              puVar16 = (undefined8 *)((long)puVar10 - uVar17 * (long)puStack_88);
            }
          }
        }
        plVar13 = *(long **)(lStack_90 + (long)puVar16 * 8);
        if (plVar13 == (long *)0x0) {
          *plVar5 = (long)plStack_80;
          *(long ***)(lStack_90 + (long)puVar16 * 8) = &plStack_80;
          plStack_80 = plVar5;
          if (*plVar5 != 0) {
            puVar10 = *(undefined8 **)(*plVar5 + 8);
            if (((ulong)puVar6 & (long)puVar6 - 1U) == 0) {
              puVar10 = (undefined8 *)((ulong)puVar10 & (long)puVar6 - 1U);
            }
            else if (puVar6 <= puVar10) {
              uVar17 = 0;
              if (puVar6 != (undefined8 *)0x0) {
                uVar17 = (ulong)puVar10 / (ulong)puVar6;
              }
              puVar10 = (undefined8 *)((long)puVar10 - uVar17 * (long)puVar6);
            }
            *(long **)(lStack_90 + (long)puVar10 * 8) = plVar5;
          }
        }
        else {
          *plVar5 = *plVar13;
          *plVar13 = (long)plVar5;
        }
        plStack_f0 = (long *)0x0;
        uStack_78 = uStack_78 + 1;
        func_0x000108840780(&plStack_f0);
LAB_108840d7c:
        func_0x00010867bb84(&puStack_2d0);
        if (*(char *)(puVar14 + 4) == '\x01') {
          puVar6 = puVar14 + 3;
          func_0x0001072833b8(puVar6);
          FUN_10867b1ac(plVar5 + 5,puVar6);
        }
        else {
          *(undefined1 *)(plVar5 + 10) = 1;
        }
      }
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 0;
      func_0x000107c27ab0(&lStack_a8,uStack_78);
      for (plVar5 = plStack_80; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        func_0x000107c27994(&plStack_f0,plVar5 + 2);
        FUN_108767914(auStack_d8,plVar5 + 5);
        cStack_b0 = (char)plVar5[10];
        func_0x000107c29f64(&puStack_2d0,*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x10),&plStack_f0
                            ,2);
        if (bStack_100 == 1) {
          func_0x000107c28840(&lStack_a8,&plStack_f0);
          if (lStack_c0 == 0) {
            if ((bStack_100 & 1) == 0) {
              func_0x000104bdc2c8();
LAB_108840ff0:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x108840ff4);
              (*pcVar3)();
            }
            lStack_2e8 = 0;
            lStack_2e0 = 0;
            uStack_2d8 = 0;
            func_0x000108841248(*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x40));
            func_0x000108841200();
            func_0x00010884122c();
          }
          else {
            FUN_108861b60(&lStack_2e8,*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x10),&plStack_f0,
                          auStack_d8,1);
            if (lStack_2e8 == lStack_2e0) {
              if (cStack_b0 == '\x01') {
                if ((bStack_100 & 1) == 0) goto LAB_108840fd4;
                puVar16 = *(undefined8 **)(*(long *)(lVar4 + 0x18) + 0x40);
                uStack_300 = 0;
                uStack_2f8 = 0;
                uStack_2f0 = 0;
                uStack_318 = 0;
                uStack_310 = 0;
                uStack_308 = 0;
                (**(code **)*puVar16)(puVar16,&plStack_f0,&puStack_2d0,1,&uStack_300,&uStack_318);
                func_0x000104be1274(&uStack_318);
                func_0x00010867b9fc(&uStack_300);
              }
            }
            else {
              if (bStack_100 != 1) {
LAB_108840fd4:
                func_0x000104bdc2c8();
                goto LAB_108840ff0;
              }
              func_0x000108841248(*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x40));
              func_0x000108841200();
              func_0x00010884122c();
              plVar13 = *(long **)(*(long *)(lVar4 + 0x18) + 0x30);
              FUN_10869ad4c(&uStack_300,uStack_c8,0);
              (**(code **)(*plVar13 + 0x170))(plVar13,&plStack_f0,&uStack_300,0);
              func_0x000107c27ae4(&uStack_300);
            }
          }
          func_0x00010867b9fc(&lStack_2e8);
        }
        func_0x000107c288c8(&puStack_2d0);
        FUN_1088402b4(&plStack_f0);
      }
      if (lStack_a8 != lStack_a0) {
        plVar5 = *(long **)(*(long *)(lVar4 + 0x18) + 0x30);
        (**(code **)(*plVar5 + 200))(plVar5,&lStack_a8);
      }
      func_0x000107c27a04(&lStack_a8);
      FUN_1088402dc(&lStack_90);
      FUN_108840334(lVar4);
    }
    func_0x0001088406b0(&puStack_330);
  }
  func_0x000107c29c60(&lStack_340);
  return;
}



/* Entry: 108841104; end: 108841127;  */

void FUN_108841104(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001000dfb88();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108841128; end: 1088411f7;  */

bool FUN_108841128(ulong param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x28) != *(long *)(param_2 + 0x28)) {
    return *(long *)(param_1 + 0x28) < *(long *)(param_2 + 0x28);
  }
  uVar3 = param_1;
  func_0x000107c28078();
  if ((uVar3 & 1) == 0) {
    FUN_108664d0c(param_1,param_2);
    bVar2 = (char)param_1 < '\0';
    bVar1 = false;
  }
  else {
    if (*(char *)(param_2 + 0x20) != '\x01') {
      return false;
    }
    if (*(char *)(param_1 + 0x20) != '\x01') {
      return true;
    }
    bVar1 = SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_2 + 0x18));
    bVar2 = *(long *)(param_1 + 0x18) - *(long *)(param_2 + 0x18) < 0;
  }
  return bVar2 != bVar1;
}



/* Entry: 1088411f8; end: 1088412f7;  */

void FUN_1088411f8(void)

{
  return;
}



/* Entry: 1088412f8; end: 10884132f;  */

undefined4 FUN_1088412f8(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_108841330();
  uVar1 = 0;
  if (*(char *)(param_2 + 0x18) == *(char *)(param_1 + 0x22)) {
    uVar1 = (undefined4)lVar2;
  }
  return uVar1;
}



/* Entry: 108841330; end: 108841373;  */

bool FUN_108841330(long param_1,short *param_2)

{
  if (*param_2 != *(short *)(param_1 + 0x20)) {
    return false;
  }
  param_2 = param_2 + 4;
  _memcmp(param_2,param_1 + 0x10,0x10);
  return (int)param_2 == 0;
}



/* Entry: 108841374; end: 1088413eb;  */

void FUN_108841374(undefined8 *param_1,undefined1 *param_2)

{
  *param_1 = &PTR_DAT_110a817c0;
  param_1[1] = 0;
  param_1[3] = 0;
  func_0x0001088414e8();
  param_1[2] = *(undefined8 *)(param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 4) = *param_2;
  *(undefined1 *)((long)param_1 + 0x21) = param_2[1];
  *(undefined1 *)((long)param_1 + 0x22) = param_2[0x18];
  return;
}



/* Entry: 1088413ec; end: 1088414af;  */

void FUN_1088413ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a817c0;
  param_1[1] = 0;
  param_1[3] = 0;
  func_0x0001088414e8();
  param_1[2] = 0x28de80;
  param_1[3] = 0x15180;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)((long)param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  return;
}



/* Entry: 1088414b0; end: 10884153f;  */

void FUN_1088414b0(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  func_0x0001088413f8(auStack_40);
  FUN_108841374(param_1,auStack_40);
  return;
}



/* Entry: 108841540; end: 10884154b;  */

void FUN_108841540(undefined8 *param_1)

{
  undefined8 *in_x9;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *in_x9;
  uVar3 = in_x9[3];
  uVar2 = in_x9[2];
  param_1[1] = in_x9[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 10884154c; end: 1088415d3;  */

void FUN_10884154c(long param_1)

{
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)(param_1 + 0x10);
  if (lStack_28 == *(long *)(param_1 + 0x18)) {
    lStack_28 = lStack_28 + 0x40;
    *(long *)(param_1 + 0x18) = lStack_28;
    uStack_30 = *(undefined8 *)(param_1 + 8);
    FUN_108867fa0(*(undefined8 *)(param_1 + 0x28),&uStack_30);
    lStack_28 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lStack_28 + 1;
  return;
}



/* Entry: 1088415d4; end: 1088415df;  */

undefined8 FUN_1088415d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1088415e0; end: 1088415f3;  */

void FUN_1088415e0(void)

{
  FUN_1088415f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088415f4; end: 10884161f;  */

undefined8 * FUN_1088415f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a7a310;
  func_0x000107c28808(param_1 + 5);
  return param_1;
}



/* Entry: 108841620; end: 108841627;  */

void FUN_108841620(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108841628; end: 108841653;  */

undefined8 FUN_108841628(undefined8 *param_1)

{
  FUN_10885ea84(*param_1);
  return 1;
}



/* Entry: 108841654; end: 1088416db;  */

undefined1  [16] FUN_108841654(void)

{
  long unaff_x19;
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 uStack_38;
  
  func_0x000107c33f40();
  if (uStack_38 != '\x01') {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = unaff_x19 + 0x18;
    __ZNSt3__16stoullERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(uVar1,0,10);
    uVar2 = uVar1 & 0xffffffffffffff00;
    uVar1 = uVar1 & 0xff;
  }
  func_0x000107c33f38();
  auVar3._0_8_ = uVar2 | uVar1;
  auVar3[8] = uStack_38 == '\x01';
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 1088416dc; end: 108841773;  */

long FUN_1088416dc(long param_1,long param_2)

{
  func_0x000107c27b9c();
  func_0x000107c27b9c(param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



/* Entry: 108841774; end: 10884177b;  */

void FUN_108841774(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10884177c; end: 1088417e3;  */

long FUN_10884177c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b596c54(param_1);
    }
    else {
      func_0x00010b596c1c(param_1);
    }
  }
  return param_1;
}



/* Entry: 1088417e4; end: 1088417ff;  */

undefined8 * FUN_1088417e4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_DAT_110d11970;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  if (param_1 != param_2) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = param_2[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      func_0x00010b596c54(param_1);
    }
    else {
      func_0x00010b596c1c(param_1);
    }
  }
  return param_1;
}



/* Entry: 108841800; end: 10884181b;  */

void FUN_108841800(long param_1)

{
  FUN_1088417e4();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 10884181c; end: 10884183b;  */

long FUN_10884181c(void)

{
  long unaff_x29;
  
  func_0x00010b597528();
  func_0x00010b5969d8(unaff_x29 + -0x48);
  return unaff_x29 + -0x48;
}



/* Entry: 10884183c; end: 1088418bf;  */

void FUN_10884183c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    ppuStack_50 = &PTR_DAT_110cfba88;
    uStack_48 = 0;
    uStack_38 = 0;
    FUN_108692404(param_1,lVar2);
    func_0x00010b51e194();
    func_0x000107c30570(&ppuStack_50);
  }
  return;
}



/* Entry: 1088418c0; end: 10884194f;  */

void FUN_1088418c0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = param_1 + 2;
  *puVar2 = 0;
  *param_1 = &PTR_DAT_110cf7b68;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  plVar3 = (long *)(param_2 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    puVar1 = puVar2;
    FUN_108841a84(puVar2);
    func_0x000108841ad0();
    FUN_108841b78();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x000108841ad0(puVar1);
    FUN_108841950();
    func_0x00010b51e194();
  }
  return;
}



/* Entry: 108841950; end: 10884195f;  */

void FUN_108841950(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107c29de8();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 108841960; end: 108841a83;  */

undefined1  [16] FUN_108841960(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  FUN_108841bc8();
  bVar1 = *(int *)(param_1 + 0x1c) == 2;
  func_0x000108841be0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (!bVar1 || *(int *)(param_1 + 0x1c) != 2) {
    uVar2 = 0;
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = uVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 108841a84; end: 108841a8f;  */

void FUN_108841a84(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_108841a90);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_108841a90);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 108841a90; end: 108841b77;  */

void FUN_108841a90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x000108841bd4();
  }
  *puVar1 = &PTR_DAT_110cf7b18;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 108841b78; end: 108841b8f;  */

ulong * FUN_108841b78(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_1 + 8);
  if ((uStack_28 & 1) != 0) {
    uStack_28 = *(ulong *)(uStack_28 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 0x18);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uStack_28 == 0) {
      puVar2 = puVar1;
      func_0x000100063c9c();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      func_0x00010006903c();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 108841b90; end: 108841bc7;  */

void FUN_108841b90(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107c29de8();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 108841bc8; end: 108841c2f;  */

long FUN_108841bc8(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108692438(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 108841c30; end: 108841d3f;  */

void FUN_108841c30(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [256];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c31930(&uStack_48,(param_2[1] - *param_2) / 0x18);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x000107c29e04(auStack_150,lVar2);
    func_0x000107c27940(&uStack_48,auStack_150);
    func_0x0001088437f4();
  }
  func_0x000107c281b0(uStack_48,uStack_40);
  func_0x0001054901a8(auStack_150);
  FUN_108841d40(uStack_48,uStack_40,auStack_150,&UNK_10f4bd801);
  func_0x000105491b64(param_1,auStack_148);
  func_0x00010791316c(param_1);
  func_0x000105490284(auStack_150);
  func_0x000107c278a8(&uStack_48);
  return;
}



/* Entry: 108841d40; end: 108841d63;  */

undefined1  [16] FUN_108841d40(void)

{
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  FUN_108842b50(auStack_28);
  return auStack_20;
}



/* Entry: 108841d64; end: 108841daf;  */

void FUN_108841d64(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 - 1U < 0x1e) {
    puVar1 = (&PTR_DAT_110a7a680)[param_2 - 1U];
  }
  else {
    puVar1 = &UNK_10f4bd40c;
  }
  func_0x00010002b82c(param_1,puVar1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 108841db0; end: 108841e43;  */

void FUN_108841db0(undefined8 param_1,long param_2)

{
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 auStack_d0 [176];
  
  uStack_d1 = *(undefined1 *)(param_2 + 0x158);
  uStack_d2 = *(undefined1 *)(param_2 + 0x68);
  FUN_108842c2c(auStack_d0,param_2 + 0x18,param_2,param_2 + 0x20,param_2 + 0x88,param_2 + 0x160,
                param_2 + 0x170,param_2 + 0x350,param_2 + 0x378,param_2 + 0x4f9,&uStack_d1,
                &uStack_d2);
  func_0x000107c2793c(&UNK_10f4bdbf2);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 108841e44; end: 108841fa7;  */

void FUN_108841e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined ***pppuVar1;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x1be;
  func_0x000107c278b8(auStack_98,&UNK_10f4bdac3);
  pppuVar1 = &ppuStack_80;
  func_0x000107c28824(pppuVar1,auStack_98,param_2);
  func_0x000107c278b8(auStack_b0,&UNK_10f4bdad6);
  func_0x000107c28824(pppuVar1,auStack_b0,param_3);
  func_0x000107c278b8(auStack_c8,&UNK_10f4bdae5);
  func_0x000107c2881c(pppuVar1,auStack_c8,*(undefined1 *)(param_4 + 8));
  func_0x000107c2884c(auStack_58,pppuVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x000107c2882c(&ppuStack_80);
  func_0x000107c2884c(auStack_f0,auStack_58);
  func_0x0001088439a4();
  func_0x000108843924();
  func_0x00010884391c();
  func_0x000107c2882c(auStack_58);
  return;
}



/* Entry: 108841fa8; end: 1088420ab;  */

void FUN_108841fa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x1bf;
  func_0x00010884394c(param_1,&UNK_10f4bdac3);
  pppuVar1 = &ppuStack_80;
  func_0x000107c28824(pppuVar1,auStack_98,param_2);
  func_0x000108843930();
  func_0x000107c2881c(pppuVar1,auStack_b0,*(undefined1 *)(param_3 + 8));
  func_0x000107c2884c(auStack_58,pppuVar1);
  func_0x00010884381c();
  func_0x000108843848();
  func_0x000107c2882c(&ppuStack_80);
  func_0x000107c2884c(auStack_d8,auStack_58);
  func_0x0001088439a4();
  func_0x00010884383c();
  func_0x000107c2882c(auStack_d8);
  func_0x000107c2882c(auStack_58);
  return;
}



/* Entry: 1088420ac; end: 1088421bb;  */

void FUN_1088420ac(undefined8 *param_1,int param_2,int param_3)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a6f328;
  uStack_78 = 0;
  uStack_60 = 3;
  func_0x00010884394c(param_1,&UNK_10f4bdaf0);
  pppuVar1 = &ppuStack_80;
  FUN_108791610(pppuVar1,auStack_98,(&PTR_DAT_110a7a360)[param_2]);
  func_0x000108843930();
  FUN_108791610(pppuVar1,auStack_b0,(&PTR_DAT_110a7a360)[param_3]);
  FUN_108791a34(auStack_58,pppuVar1);
  func_0x00010884381c();
  func_0x000108843848();
  FUN_108788618(&ppuStack_80);
  plVar2 = (long *)*param_1;
  FUN_108791a34(auStack_d8,auStack_58);
  func_0x00010884383c(*(undefined8 *)(*plVar2 + 0x60));
  FUN_108788618(auStack_d8);
  FUN_108788618(auStack_58);
  return;
}



/* Entry: 1088421bc; end: 108842443;  */

void FUN_1088421bc(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_f0 [40];
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  
  puVar5 = auStack_f0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  ppuStack_c8 = &PTR_FUN_110a609a8;
  uStack_c0 = 0;
  uStack_a8 = 0x16c;
  uVar3 = 0x1400bb;
  if (*(int *)(param_1 + 0x30) != 2) {
    uVar3 = 0x1400ba;
  }
  uVar1 = 0x1400b9;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = uVar3;
  }
  lVar8 = param_1;
  func_0x0001088438f4(param_1,uVar1);
  FUN_108659af8();
  func_0x000107c2884c(auStack_a0,lVar8);
  func_0x0001088438fc();
  func_0x000107c2884c(auStack_f0,auStack_a0);
  func_0x0001088439a4();
  func_0x000108843924();
  func_0x00010884391c();
  lVar8 = 0;
  plVar9 = (long *)(param_1 + 0xa0);
  plVar7 = plVar9;
  while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
    lVar4 = 0;
    if (*(int *)(plVar7 + 2) != 2) {
      lVar4 = plVar7[3];
    }
    lVar8 = lVar4 + lVar8;
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  ppuStack_c8 = &PTR_FUN_110a609a8;
  uStack_c0 = 0;
  func_0x0001088438c4(0x16d);
  func_0x0001088438f4();
  FUN_108659af8();
  puVar6 = auStack_a0;
  func_0x000107c28af0(puVar6,puVar5);
  func_0x0001088438fc();
  ppuStack_c8 = (undefined **)(lVar8 * 1000000);
  func_0x000108843894(*(undefined8 *)(*param_2 + 0x18));
  while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_c8 = &PTR_FUN_110a609a8;
    func_0x0001088438c4(0x16e);
    func_0x0001088438f4();
    lVar4 = plVar9[2];
    func_0x000107c278b8(auStack_78,PTR_DAT_113268c60);
    lVar8 = 0xbe;
    if ((int)lVar4 == 2) {
      lVar8 = 0xbf;
    }
    lVar2 = 0xbd;
    if ((int)lVar4 != 0) {
      lVar2 = lVar8;
    }
    func_0x000107c28824(puVar6,auStack_78,(&PTR_s_success_113269028)[lVar2]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
    uVar3 = 0x30011;
    if (*(int *)(param_1 + 0xb8) != 0) {
      uVar3 = 0x30012;
    }
    FUN_108659af8(puVar6,uVar3);
    puVar5 = auStack_a0;
    func_0x000107c28af0(puVar5,puVar6);
    func_0x0001088438fc();
    ppuStack_c8 = (undefined **)(plVar9[3] * 1000000);
    func_0x000108843894(*(undefined8 *)(*param_2 + 0x18));
    puVar6 = puVar5;
  }
  func_0x000107c2882c(auStack_a0);
  return;
}



/* Entry: 108842444; end: 108842467;  */

undefined8 FUN_108842444(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107c29e78();
  if (param_2 - 1U < 0x1e) {
    puVar1 = (&PTR_DAT_110a7a680)[param_2 - 1U];
  }
  else {
    puVar1 = &UNK_10f4bd40c;
  }
  func_0x00010002b82c(param_1,puVar1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar1);
  return unaff_x20;
}



/* Entry: 108842468; end: 1088425e3;  */

void FUN_108842468(long param_1,undefined8 param_2,uint param_3)

{
  undefined ***pppuVar1;
  long extraout_x8;
  undefined1 auStack_118 [40];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [40];
  
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110a609a8;
  uStack_88 = 0;
  uStack_70 = 0x179;
  func_0x000107c278b8(auStack_a8,&UNK_10f4bdaf8);
  FUN_108842444(auStack_c0,param_1);
  pppuVar1 = &ppuStack_90;
  func_0x000107c28820(pppuVar1,auStack_a8,auStack_c0);
  func_0x00010884394c();
  func_0x00010884397c(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c28818(pppuVar1,auStack_d8,*(undefined1 *)(extraout_x8 + 0x140));
  func_0x000107c2884c(auStack_68,pppuVar1);
  func_0x000108843848();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x000107c2882c(&ppuStack_90);
  if ((param_3 >> 8 & 1) != 0) {
    func_0x000108843930();
    func_0x000107c28818(auStack_68,auStack_f0,param_3 & 1);
    func_0x00010884381c();
  }
  func_0x000107c2884c(auStack_118,auStack_68);
  func_0x0001088439a4();
  func_0x00010884383c();
  func_0x000107c2882c(auStack_118);
  func_0x000107c2882c(auStack_68);
  return;
}



/* Entry: 1088425e4; end: 10884262b;  */

bool FUN_1088425e4(long param_1,long param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_1 + 0x30) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x30);
  }
  return 0 < (long)ppuVar1[0x24] && (param_2 - (long)ppuVar1[0x24]) + 0x758f0dfbfU < 0xeb1e1bf7f;
}



/* Entry: 10884262c; end: 10884269b;  */

undefined4 FUN_10884262c(void)

{
  undefined4 uVar1;
  undefined1 auStack_40 [16];
  long lStack_30;
  int iStack_24;
  
  func_0x00010884385c();
  func_0x000107c30344(auStack_40);
  if ((iStack_24 == 8) && (*(int *)(lStack_30 + 0x1c) == 5)) {
    uVar1 = *(undefined4 *)(*(long *)(lStack_30 + 0x10) + 0x20);
  }
  else {
    uVar1 = 0;
  }
  func_0x0001088438a4();
  return uVar1;
}



/* Entry: 10884269c; end: 1088427b3;  */

void FUN_10884269c(long param_1,int param_2)

{
  long lVar1;
  undefined ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [24];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uVar3 = 1;
  if (param_2 == 0) {
    uVar3 = 2;
  }
  lVar1 = param_1;
  FUN_108653db8();
  *(undefined4 *)(lVar1 + 0xa8) = 6;
  ppuStack_50 = &PTR_FUN_110a82378;
  uStack_48 = 0;
  uStack_38 = 0;
  func_0x000108842e98(&ppuStack_50);
  FUN_1088427b4();
  func_0x0001088bf408();
  pppuVar2 = &ppuStack_50;
  func_0x000108842e98();
  *(undefined4 *)(pppuVar2 + 4) = uVar3;
  ppuStack_70 = &PTR_DAT_110a825f8;
  uStack_68 = 0;
  uStack_58 = 0;
  FUN_1086ab7f8(&ppuStack_70);
  func_0x0001088c0550();
  func_0x00010b4d1804(auStack_88,&ppuStack_70);
  FUN_108653db8(param_1);
  FUN_10879d9ac();
  func_0x000107c27b9c();
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_1086a2754(param_1);
  FUN_108788cb4(param_1 + 0xc0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  FUN_1088bf4ec(&ppuStack_70);
  FUN_1088c027c(&ppuStack_50);
  return;
}



/* Entry: 1088427b4; end: 108842827;  */

void FUN_1088427b4(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 108842828; end: 10884295b;  */

undefined8
FUN_108842828(undefined8 param_1,undefined8 param_2,long param_3,ulong *param_4,undefined8 *param_5,
             long param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long extraout_x8;
  
  ppuVar1 = &PTR_PTR_113280c30;
  if (*(undefined ***)(param_3 + 0x28) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_3 + 0x28);
  }
  ppuVar2 = &PTR_PTR_113280bc8;
  if ((undefined **)ppuVar1[0xd] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar1[0xd];
  }
  iVar3 = *(int *)((long)ppuVar2 + 0x1c);
  plVar4 = (long *)*param_4;
  (**(code **)(*plVar4 + 0x18))(plVar4,param_3,param_7);
  uVar5 = 0;
  switch((ulong)plVar4 & 0xffffffff) {
  case 0:
  case 1:
    break;
  case 2:
    if ((iVar3 == 5) &&
       (func_0x00010884397c(*(undefined8 *)(param_3 + 0x30),0), *(int *)(extraout_x8 + 0xe0) != 0))
    {
      uVar5 = 0;
      *(undefined1 *)(param_6 + 0x19) = 1;
    }
    else {
      uVar5 = 0;
    }
    break;
  case 3:
  case 4:
    if (iVar3 == 3) {
      (**(code **)(*(long *)*param_5 + 0x20))((long *)*param_5,param_1,param_2,(int)plVar4 == 4);
    }
    else if (iVar3 == 5 && (int)plVar4 == 3) {
      *(undefined1 *)(param_6 + 0x18) = 1;
    }
  default:
    uVar5 = 2;
    break;
  case 5:
    uVar5 = 1;
    if (iVar3 == 5) {
      *(undefined1 *)(param_6 + 0x18) = 1;
    }
  }
  return uVar5;
}



/* Entry: 10884295c; end: 1088429ef;  */

undefined4 FUN_10884295c(int param_1)

{
  if (param_1 - 0x120093U < 0x22) {
    return *(undefined4 *)(&UNK_10df6193c + (ulong)(param_1 - 0x120093U) * 4);
  }
  return 0x2e0129;
}



/* Entry: 1088429f0; end: 108842a4b;  */

void FUN_1088429f0(undefined8 param_1,long param_2)

{
  undefined1 auStack_70 [80];
  
  FUN_108843114(auStack_70,param_2,param_2 + 8,param_2 + 0x28,param_2 + 0x60,param_2 + 0x68);
  func_0x000107c2793c(&UNK_10f4bdb77);
  func_0x000107c3173c(param_1);
  return;
}



/* Entry: 108842a4c; end: 108842a8f;  */

void FUN_108842a4c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c29ee0(auStack_38);
  func_0x000107c29e04(param_1,auStack_38);
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 108842a90; end: 108842b0f;  */

void FUN_108842a90(undefined8 *param_1)

{
  FUN_108842b10();
  *param_1 = &PTR_SUB_110a81f68;
  param_1[1] = 0;
  param_1[2] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_108842f70(param_1);
  func_0x000107c27b9c();
  func_0x0001088437f4();
  return;
}



/* Entry: 108842b10; end: 108842b4f;  */

long FUN_108842b10(long *param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  char **ppcVar12;
  char *pcVar13;
  char *pcVar14;
  char cVar15;
  uint uVar16;
  long lVar17;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  char *pcStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  char *pcStack_80;
  long lStack_78;
  long *plStack_70;
  
  uVar3 = *(ulong *)(param_2 + 8);
  pcVar14 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    uVar3 = (ulong)(byte)param_2[0x17];
    pcVar14 = param_2;
  }
  pcVar1 = pcVar14 + uVar3;
  ppcVar12 = &pcStack_80;
  plVar9 = param_1;
  pcVar13 = pcVar1;
  func_0x000108843990();
  pcStack_80 = pcVar14;
  FUN_10884348c();
  iVar7 = (int)plVar9;
  if (iVar7 == 0x7b) {
    func_0x000108843790();
  }
  lVar17 = 0;
  bVar4 = 0;
  plVar11 = plVar9;
  do {
    uVar16 = (uint)lVar17;
    cVar15 = (char)plVar11;
    if (uVar16 == 4) {
      if (((uint)plVar11 & 0xff) == 0x2d) {
LAB_1088433ec:
        cVar15 = (char)plVar9;
        func_0x000108843790();
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
    }
    else {
      bVar6 = (uVar16 & 0x7ffffffd) != 8;
      bVar2 = (uVar16 != 6 && bVar6) & bVar4;
      if ((uVar16 == 6 || !bVar6) && (!(bool)(bVar4 ^ 1))) {
        if (((uint)plVar11 & 0xff) == 0x2d) goto LAB_1088433ec;
        goto LAB_108843480;
      }
    }
    bVar4 = bVar2;
    plVar10 = param_1;
    func_0x000107c29dfc(param_1,(int)cVar15);
    plVar11 = plVar10;
    func_0x000108843790();
    plVar9 = param_1;
    ppcVar12 = (char **)plVar11;
    func_0x000107c29dfc();
    *(byte *)((long)&lStack_78 + lVar17) = (byte)plVar9 | (byte)((int)plVar10 << 4);
    lVar17 = lVar17 + 1;
    if (lVar17 != 0) {
      iVar8 = (int)plVar9;
      if (lVar17 == 0x10) {
        if (((iVar7 == 0x7b) && (func_0x000108843790(), iVar8 != 0x7d)) ||
           (bVar6 = pcStack_80 == pcVar1, !bVar6)) {
LAB_108843480:
          FUN_1088434b4(param_1);
        }
        else {
          func_0x0001088438dc(lStack_78);
          ppcVar12 = (char **)plStack_70;
          if (bVar6) {
            return lStack_78;
          }
        }
        ___stack_chk_fail();
        pcVar14 = *ppcVar12;
        if (pcVar14 == pcVar13) {
          pcStack_88 = FUN_10884348c;
          puStack_90 = &stack0xfffffffffffffff0;
          FUN_1088434b4();
          pcStack_98 = FUN_1088434b4;
          pcStack_b0 = pcVar1;
          plStack_a8 = param_1;
          puStack_a0 = (undefined1 *)&puStack_90;
          __ZNSt13runtime_errorC1EPKc(auStack_c0,&UNK_10f4bde09);
          puStack_d8 = &UNK_10f4bde1d;
          puStack_d0 = &UNK_10f4bde79;
          uStack_c8 = 0xc0;
          FUN_108843514(auStack_c0,&puStack_d8);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x108843504);
          (*pcVar5)();
        }
        *ppcVar12 = pcVar14 + 1;
        return (long)*pcVar14;
      }
      func_0x000108843790();
      plVar11 = plVar9;
    }
  } while( true );
}



/* Entry: 108842b50; end: 108842b97;  */

void FUN_108842b50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uStack_39;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_108842b98(&uStack_38,&uStack_39,param_2,param_3,param_4,param_5);
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  param_1[1] = uStack_30;
  return;
}


