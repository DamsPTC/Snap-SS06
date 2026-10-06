/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b16619c; end: 10b1661df;  */

void FUN_10b16619c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b17491c();
  if (param_3 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b165e08(param_1 + 8);
  func_0x00010b17552c();
  return;
}



/* Entry: 10b1661e0; end: 10b1662fb;  */

void FUN_10b1661e0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long alStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b174dc8(param_1);
  FUN_10b163c54();
  func_0x00010b17522c();
  FUN_10b163c80();
  func_0x00010b176c28();
  func_0x00010b175690();
  lVar2 = lStack_30;
  __ZNSt3__15mutex4lockEv(lStack_30 + 0x2c8);
  if (*(char *)(lVar2 + 0x290) == '\x01') {
    uVar1 = *(uint *)(param_2 + 0x288);
    if (*(int *)(lVar2 + 0x288) != -1 || uVar1 != 0xffffffff) {
      if (uVar1 == 0xffffffff) {
        FUN_10b163d6c(lVar2);
      }
      else {
        alStack_40[0] = lVar2;
        (*(code *)(&PTR_FUN_110cbfae8)[uVar1])(alStack_40,lVar2,param_2);
      }
    }
  }
  else {
    func_0x00010b1764c8();
    FUN_10b163d00();
    *(undefined1 *)(lVar2 + 0x290) = 1;
  }
  lVar3 = *(long *)(lVar2 + 0x310);
  *(undefined8 *)(lVar2 + 0x310) = 0;
  __ZNSt3__15mutex6unlockEv(lVar2 + 0x2c8);
  if (lVar3 == 0) {
    __ZNSt3__118condition_variable10notify_allEv(lVar2 + 0x298);
  }
  else {
    func_0x00010b1755e8();
    func_0x00010b1761b8();
    func_0x00010b174a6c();
  }
  func_0x00010b175d90();
  return;
}



/* Entry: 10b1662fc; end: 10b1663b7;  */

long FUN_10b1662fc(long *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x288) != 0) {
    lVar1 = lVar2;
    FUN_10b163d6c(lVar2);
    func_0x00010b1751c8();
    FUN_10b163dcc();
    *(undefined4 *)(lVar2 + 0x288) = 0;
    return lVar1;
  }
  func_0x00010b177960();
  func_0x00010b175110();
  func_0x00010b141ad4();
  FUN_10b1151e4(unaff_x20 + 0x10,unaff_x19 + 0x10);
  return unaff_x20;
}



/* Entry: 10b1663b8; end: 10b1664c3;  */

long * FUN_10b1663b8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long unaff_x20;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < (undefined8 *)param_1[2]) {
    uVar13 = *param_2;
    puVar12 = puVar5 + 2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar13;
    *param_2 = 0;
    param_2[1] = 0;
    plVar6 = param_1;
  }
  else {
    lVar11 = (long)puVar5 - *param_1;
    uVar1 = (lVar11 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10b1664c4();
LAB_10b1664c0:
      func_0x000104bd35f4();
      func_0x00010b17748c();
      func_0x00010b176bec();
      if (unaff_x20 != 0) {
        lVar11 = param_1[1];
        while (lVar11 != unaff_x20) {
          lVar11 = lVar11 + -0x10;
          func_0x0001052a55c0();
        }
        param_1[1] = unaff_x20;
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    uVar7 = param_1[2] - *param_1;
    uVar9 = (long)uVar7 >> 3;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar9 >> 0x3c != 0) goto LAB_10b1664c0;
      lVar4 = uVar9 << 4;
      __Znwm();
    }
    puVar12 = (undefined8 *)(lVar4 + lVar11);
    uVar13 = *param_2;
    puVar12[1] = param_2[1];
    *puVar12 = uVar13;
    *param_2 = 0;
    param_2[1] = 0;
    puVar5 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)((long)puVar12 + ((long)puVar5 - (long)puVar3));
    puVar8 = puVar2;
    for (puVar10 = puVar5; puVar10 != puVar3; puVar10 = puVar10 + 2) {
      uVar13 = *puVar10;
      puVar8[1] = puVar10[1];
      *puVar8 = uVar13;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar8 = puVar8 + 2;
    }
    for (; puVar5 != puVar3; puVar5 = puVar5 + 2) {
      func_0x0001052a55c0();
    }
    puVar12 = puVar12 + 2;
    plVar6 = (long *)*param_1;
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar12;
    param_1[2] = lVar4 + uVar9 * 0x10;
    if (plVar6 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar12;
  return plVar6;
}



/* Entry: 10b1664c4; end: 10b1664cf;  */

void FUN_10b1664c4(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b17748c();
  func_0x00010b176bec();
  if (unaff_x20 != 0) {
    lVar1 = unaff_x19[1];
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -0x10;
      func_0x0001052a55c0();
    }
    unaff_x19[1] = unaff_x20;
    __ZdlPv(*unaff_x19);
  }
  return;
}



/* Entry: 10b1664d0; end: 10b166513;  */

void FUN_10b1664d0(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b176bec();
  if (unaff_x20 != 0) {
    lVar1 = unaff_x19[1];
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -0x10;
      func_0x0001052a55c0();
    }
    unaff_x19[1] = unaff_x20;
    __ZdlPv(*unaff_x19);
  }
  return;
}



/* Entry: 10b166514; end: 10b166557;  */

void FUN_10b166514(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    return;
  }
  func_0x00010b177184();
  func_0x00010b176afc();
  func_0x00010b176bb4();
  func_0x00010552fc08();
  func_0x00010b1762c0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b166550);
  (*pcVar1)();
}



/* Entry: 10b166558; end: 10b16657b;  */

void FUN_10b166558(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b16657c; end: 10b1665bb;  */

void FUN_10b16657c(long param_1)

{
  func_0x00010b166598();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10b1665bc; end: 10b1665fb;  */

undefined8 FUN_10b1665bc(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b176d08(&UNK_110cc0b90);
  func_0x00010b166614();
  func_0x00010b176db8();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10b1665fc; end: 10b1665ff;  */

long FUN_10b1665fc(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cc0ba0);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b166830();
    func_0x00010b175208();
  }
  FUN_10b164e6c(param_1 + 0x18);
  func_0x00010b177504();
  return param_1;
}



/* Entry: 10b166600; end: 10b16662f;  */

void FUN_10b166600(void)

{
  FUN_10b1667d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166630; end: 10b166633;  */

long FUN_10b166630(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cc0ba0);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b166830();
    func_0x00010b175208();
  }
  FUN_10b164e6c(param_1 + 0x18);
  func_0x00010b177504();
  return param_1;
}



/* Entry: 10b166634; end: 10b166647;  */

void FUN_10b166634(void)

{
  FUN_10b1667d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166648; end: 10b1666d3;  */

void FUN_10b166648(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 uStack_30;
  
  func_0x000107c350b4();
  func_0x000107c350e4();
  FUN_10b1666d4();
  func_0x00010b177b98(uStack_30);
  *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x18) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x20) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x28) = 0;
  func_0x00010b175e3c();
  *(undefined8 *)(extraout_x8_01 + 0x30) = extraout_x9;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  *(undefined8 *)(extraout_x8_01 + 0x40) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x38) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x50) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x48) = 0;
  func_0x00010b175ef8();
  *(undefined8 *)(extraout_x8_02 + 0x58) = 0;
  *(undefined8 *)(extraout_x8_02 + 0x60) = extraout_x9_00;
  *(ulong *)(extraout_x8_02 + 0x70) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x68) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_02 + 0x80) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x78) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_02 + 0x90) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x88) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(ulong *)(extraout_x8_02 + 0xa0) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(ulong *)(extraout_x8_02 + 0x98) =
       CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,
                                                  CONCAT11(uVar2,uVar1)))))));
  *(undefined8 *)(extraout_x8_02 + 0xa8) = 0;
  func_0x000107c350b8();
  FUN_10b1667c8();
  func_0x000107c350b0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010b175f04();
  FUN_10b1666f4();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b1666d4; end: 10b1666f3;  */

void FUN_10b1666d4(void)

{
  func_0x00010b175f04();
  FUN_10b1666f4();
  func_0x00010b175eec();
  return;
}



/* Entry: 10b1666f4; end: 10b16671f;  */

void FUN_10b1666f4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc0bc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b166720; end: 10b166723;  */

void FUN_10b166720(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc0bc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b166724; end: 10b166737;  */

void FUN_10b166724(void)

{
  func_0x00010b166744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166738; end: 10b16674f;  */

void FUN_10b166738(long param_1)

{
  func_0x00010b166784(param_1 + 0xa8);
  func_0x00010b177254();
  func_0x00010b177230();
  func_0x00010b1771b4();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x0001052ac684();
  }
  return;
}



/* Entry: 10b166750; end: 10b1667a7;  */

void FUN_10b166750(long param_1)

{
  func_0x00010b166784(param_1 + 0x90);
  func_0x00010b177254();
  func_0x00010b177230();
  func_0x00010b1771b4();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001052ac684();
  }
  return;
}



/* Entry: 10b1667a8; end: 10b1667c7;  */

void FUN_10b1667a8(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001052ac684();
  }
  return;
}



/* Entry: 10b1667c8; end: 10b1667d7;  */

void FUN_10b1667c8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1667d8; end: 10b16682f;  */

long FUN_10b1667d8(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cc0ba0);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b166830();
    func_0x00010b175208();
  }
  FUN_10b164e6c(param_1 + 0x18);
  func_0x00010b177504();
  return param_1;
}



/* Entry: 10b166830; end: 10b16686f;  */

void FUN_10b166830(void)

{
  func_0x00010b174ac4();
  func_0x00010b1752d0();
  func_0x000107c350d8();
  FUN_10b166870();
  func_0x00010b174f2c();
  func_0x00010b175d54();
  return;
}



/* Entry: 10b166870; end: 10b16688b;  */

void FUN_10b166870(void)

{
  func_0x00010b176ac4();
  FUN_10b16688c();
  return;
}



/* Entry: 10b16688c; end: 10b16690f;  */

void FUN_10b16688c(void)

{
  long unaff_x19;
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  FUN_10b164d3c();
  func_0x00010b17522c();
  FUN_10b164d6c();
  func_0x00010b175544();
  func_0x00010b1753c0();
  func_0x00010b1754fc();
  func_0x00010b1750c8();
  FUN_10b166910();
  func_0x00010b174894();
  if (unaff_x19 == 0) {
    func_0x00010b174cb4();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b1753d0();
  return;
}



/* Entry: 10b166910; end: 10b166913;  */

void FUN_10b166910(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x88,*param_1);
  return;
}



/* Entry: 10b166914; end: 10b166937;  */

void FUN_10b166914(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010b177ee8();
  FUN_10b166938();
  func_0x00010b174b2c(&PTR_FUN_110cc0ba0);
  if (extraout_x8 != 0) {
    func_0x00010b174ac4();
    func_0x000107c350d8();
    FUN_10b166830();
    func_0x00010b175208();
  }
  FUN_10b164e6c(unaff_x19 + 0x18);
  func_0x00010b177504();
  return;
}



/* Entry: 10b166938; end: 10b16697f;  */

void FUN_10b166938(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010b166958();
  }
  return;
}



/* Entry: 10b166980; end: 10b1669f7;  */

undefined8 * FUN_10b166980(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  int extraout_w9_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 in_register_00005008;
  
  *param_2 = &PTR_FUN_110cbfb50;
  puVar1 = param_2;
  func_0x00010b177714();
  puVar1[2] = 0;
  func_0x00010b176f48(&PTR_FUN_110cbfb70);
  func_0x00010b17511c();
  func_0x00010b175c54();
  puVar1[0x11] = CONCAT44(extraout_var,extraout_w9);
  puVar1[0x13] = in_register_00005008;
  puVar1[0x12] = param_1;
  puVar1[0x15] = in_register_00005008;
  puVar1[0x14] = param_1;
  func_0x00010b175ef8();
  puVar1[0x16] = 0;
  puVar1[0x17] = CONCAT44(extraout_var_00,extraout_w9_00);
  puVar1[0x19] = in_register_00005008;
  puVar1[0x18] = param_1;
  puVar1[0x1b] = in_register_00005008;
  puVar1[0x1a] = param_1;
  puVar1[0x1d] = in_register_00005008;
  puVar1[0x1c] = param_1;
  puVar1[0x1f] = in_register_00005008;
  puVar1[0x1e] = param_1;
  puVar1[0x20] = 0;
  func_0x00010b175a34();
  do {
    func_0x00010b175a24();
  } while (extraout_w9_01 != 0);
  *param_2 = &PTR_FUN_110cbfb08;
  return param_2;
}



/* Entry: 10b1669f8; end: 10b1669fb;  */

long FUN_10b1669f8(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfb50);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b166b10();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052adbac(param_1 + 0x18);
  func_0x0001052adbac();
  return param_1;
}



/* Entry: 10b1669fc; end: 10b166a0f;  */

void FUN_10b1669fc(void)

{
  FUN_10b166aac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166a10; end: 10b166a13;  */

long FUN_10b166a10(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfb50);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b166b10();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052adbac(param_1 + 0x18);
  func_0x0001052adbac();
  return param_1;
}



/* Entry: 10b166a14; end: 10b166a27;  */

void FUN_10b166a14(void)

{
  FUN_10b166aac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166a28; end: 10b166a2b;  */

void FUN_10b166a28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbfb70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b166a2c; end: 10b166a3f;  */

void FUN_10b166a2c(void)

{
  FUN_10b166a9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166a40; end: 10b166a9b;  */

void FUN_10b166a40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (lVar1 != 0) {
    func_0x00010b174910();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xf8);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb8);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (*(char *)(param_1 + 0x78) == '\x01') {
      func_0x0001052ade68();
    }
    return;
  }
  return;
}



/* Entry: 10b166a9c; end: 10b166aab;  */

void FUN_10b166a9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166aac; end: 10b166b0f;  */

long FUN_10b166aac(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfb50);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b166b10();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052adbac(param_1 + 0x18);
  func_0x0001052adbac();
  return param_1;
}



/* Entry: 10b166b10; end: 10b166bab;  */

void FUN_10b166b10(void)

{
  long lVar1;
  undefined8 uStack_30;
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  func_0x0001052ad910();
  func_0x00010b17522c();
  func_0x0001052ad944();
  func_0x00010b176c18();
  func_0x00010b175868();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0xa0);
  func_0x00010b175514(uStack_30 + 0xe0);
  lVar1 = *(long *)(uStack_30 + 0xe8);
  *(undefined8 *)(uStack_30 + 0xe8) = 0;
  __ZNSt3__15mutex6unlockEv(uStack_30 + 0xa0);
  if (lVar1 == 0) {
    func_0x00010b17773c();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b176c80();
  return;
}



/* Entry: 10b166bac; end: 10b166c8b;  */

void FUN_10b166bac(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b17515c();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b163ec0(unaff_x19 + 0x10,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x298) = *(undefined8 *)(unaff_x20 + 0x298);
  lVar1 = *(long *)(unaff_x20 + 0x2a0);
  *(long *)(unaff_x19 + 0x2a0) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b1765d8();
  FUN_10b1241a0(unaff_x19 + 0x2c0,unaff_x20 + 0x2c0);
  func_0x00010b1765ac();
  func_0x000107c279a0(unaff_x19 + 0x2f8,unaff_x20 + 0x2f8);
  *(undefined1 *)(unaff_x19 + 0x318) = *(undefined1 *)(unaff_x20 + 0x318);
  lVar1 = *(long *)(unaff_x20 + 0x328);
  uVar2 = *(undefined8 *)(unaff_x20 + 800);
  *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(unaff_x20 + 0x328);
  *(undefined8 *)(unaff_x19 + 800) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 10b166c8c; end: 10b166ce3;  */

void FUN_10b166c8c(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b166ce4; end: 10b166d0b;  */

void FUN_10b166ce4(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x0001052ade48();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b166d0c; end: 10b166d0f;  */

long FUN_10b166d0c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfc08);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b166e10();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052ae2f8(param_1 + 0x18);
  func_0x0001052ae2f8();
  return param_1;
}



/* Entry: 10b166d10; end: 10b166d23;  */

void FUN_10b166d10(void)

{
  FUN_10b166dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166d24; end: 10b166d27;  */

long FUN_10b166d24(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfc08);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b166e10();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052ae2f8(param_1 + 0x18);
  func_0x0001052ae2f8();
  return param_1;
}



/* Entry: 10b166d28; end: 10b166d3b;  */

void FUN_10b166d28(void)

{
  FUN_10b166dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166d3c; end: 10b166d3f;  */

void FUN_10b166d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbfc28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b166d40; end: 10b166d53;  */

void FUN_10b166d40(void)

{
  FUN_10b166d9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166d54; end: 10b166d9b;  */

long FUN_10b166d54(long param_1)

{
  long unaff_x19;
  
  func_0x00010b176d88();
  if (param_1 != 0) {
    func_0x00010b174910();
  }
  func_0x00010b177274();
  func_0x00010b1775f8();
  func_0x00010b1772ec();
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      func_0x0001000df548();
    }
    return unaff_x19 + 0x18;
  }
  return param_1;
}



/* Entry: 10b166d9c; end: 10b166dab;  */

void FUN_10b166d9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b166dac; end: 10b166e0f;  */

long FUN_10b166dac(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfc08);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b166e10();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052ae2f8(param_1 + 0x18);
  func_0x0001052ae2f8();
  return param_1;
}



/* Entry: 10b166e10; end: 10b166ea7;  */

void FUN_10b166e10(void)

{
  long unaff_x19;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  func_0x0001052adeb0();
  func_0x00010b17522c();
  func_0x0001052adee4();
  func_0x0001052ae2f8(auStack_40);
  func_0x0001052ae2f8(auStack_50);
  func_0x00010b1754fc();
  func_0x00010b175514(alStack_30[0] + 0x88);
  func_0x00010b174894();
  if (unaff_x19 == 0) {
    func_0x00010b174cb4();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x0001052ae2f8(alStack_30);
  return;
}



/* Entry: 10b166ea8; end: 10b166edb;  */

long FUN_10b166ea8(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x20;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_10b166edc(param_1 + 0x28);
  }
  func_0x00010b174b2c(&PTR_FUN_110cbfc08);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b166e10();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052ae2f8(param_1 + 0x18);
  func_0x0001052ae2f8(unaff_x20);
  return param_1;
}



/* Entry: 10b166edc; end: 10b166f03;  */

void FUN_10b166edc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001052aad48();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b166f04; end: 10b166f27;  */

long FUN_10b166f04(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1770a4();
  FUN_10b163678();
  func_0x00010b1755f4();
  func_0x00010529fde0();
  lVar1 = unaff_x19;
  func_0x0001005f1e70();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b166f28; end: 10b166f93;  */

void FUN_10b166f28(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  func_0x00010b177298(param_1,&UNK_10f730b83);
  func_0x00010b17750c(auStack_48);
  func_0x00010b175a14();
  func_0x00010b1772f4();
  func_0x0001052b4284(auStack_48);
  return;
}



/* Entry: 10b166f94; end: 10b166fbb;  */

void FUN_10b166f94(void)

{
  func_0x00010b175e54(&PTR_FUN_110cbfc68);
  FUN_10b1778b8();
  return;
}



/* Entry: 10b166fbc; end: 10b166fcb;  */

long FUN_10b166fbc(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1770a4(param_1 + 8);
  FUN_10b163678();
  func_0x00010b1755f4();
  func_0x00010529fde0();
  lVar1 = unaff_x19;
  func_0x0001005f1e70();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b166fcc; end: 10b166fef;  */

long FUN_10b166fcc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b177ee8();
  FUN_10b166054();
  func_0x00010b1755f4();
  func_0x00010529fde0();
  lVar1 = unaff_x19;
  func_0x00010b1750d4();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b166ff0; end: 10b1670e3;  */

void FUN_10b166ff0(long param_1)

{
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2b8 [152];
  char cStack_220;
  
  FUN_10b15e694(auStack_2b8,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58),param_1 + 0x20);
  if (cStack_220 == '\x01') {
    FUN_10b163dcc(&uStack_560,auStack_2b8);
    uStack_2d8 = 0;
    func_0x00010b1773b8();
  }
  else {
    func_0x00010b1773b8();
    func_0x000107c278b8(auStack_2b8,&UNK_10f730b91);
    func_0x00010b17750c(&uStack_2d0);
    uStack_558 = uStack_2c8;
    uStack_560 = uStack_2d0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 1;
    func_0x0001052b4284(&uStack_2d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2b8);
  }
  func_0x00010b176674();
  FUN_10b1661e0();
  FUN_10b163d6c(&uStack_560);
  return;
}



/* Entry: 10b1670e4; end: 10b16713b;  */

long FUN_10b1670e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010b175e54(&PTR_FUN_110cbfc80);
  lVar2 = *(long *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  func_0x00010b16714c(param_1 + 0x30,param_2 + 0x28);
  return param_1;
}



/* Entry: 10b16713c; end: 10b167167;  */

long FUN_10b16713c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b177ee8(param_1 + 8);
  FUN_10b166054();
  func_0x00010b1755f4();
  func_0x00010529fde0();
  lVar1 = unaff_x19;
  func_0x00010b1750d4();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b167168; end: 10b1671c7;  */

undefined4 FUN_10b167168(ulong param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  FUN_10b15821c();
  if (param_1 >> 0x20 == 0) {
    return 1;
  }
  uVar2 = param_1 & 0xffffffff | 0x100000000;
  FUN_10b15820c();
  uVar3 = 0;
  if ((int)uVar2 == 2) {
    uVar3 = (undefined4)(uVar2 >> 0x20);
  }
  uVar1 = 1;
  if (uVar2 >> 0x20 == 0 || (int)uVar2 != 1) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 10b1671c8; end: 10b16720b;  */

void FUN_10b1671c8(long param_1)

{
  if (*(uint *)(param_1 + 0x278) != 0xffffffff) {
    func_0x00010b175c88((&PTR_FUN_110cbfc98)[*(uint *)(param_1 + 0x278)]);
  }
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  return;
}



/* Entry: 10b16720c; end: 10b16721f;  */

void FUN_10b16720c(undefined8 param_1,long param_2)

{
  func_0x000107c350ac();
  if (param_2 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b167220; end: 10b167263;  */

void FUN_10b167220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  
  func_0x00010b175d10();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b17493c();
    } while (extraout_w10 != 0);
  }
  FUN_10b121c1c(unaff_x19 + 0x10,param_3);
  return;
}



/* Entry: 10b167264; end: 10b167267;  */

long FUN_10b167264(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfd08);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b167398();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  FUN_10b167314(param_1 + 0x18);
  func_0x00010b1761c0();
  return param_1;
}



/* Entry: 10b167268; end: 10b16727b;  */

void FUN_10b167268(void)

{
  FUN_10b167338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16727c; end: 10b16727f;  */

long FUN_10b16727c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfd08);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b167398();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  FUN_10b167314(param_1 + 0x18);
  func_0x00010b1761c0();
  return param_1;
}



/* Entry: 10b167280; end: 10b167293;  */

void FUN_10b167280(void)

{
  FUN_10b167338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b167294; end: 10b167297;  */

void FUN_10b167294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbfd28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b167298; end: 10b1672ab;  */

void FUN_10b167298(void)

{
  FUN_10b167304();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1672ac; end: 10b167303;  */

void FUN_10b1672ac(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (lVar1 != 0) {
    func_0x00010b174910();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xc0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x80);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x50);
  func_0x00010b175904();
  if ((bool)in_ZR) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x000107c60ca0();
    }
    return;
  }
  return;
}



/* Entry: 10b167304; end: 10b167313;  */

void FUN_10b167304(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b167314; end: 10b167337;  */

void FUN_10b167314(long param_1)

{
  func_0x00010b1750d4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b167338; end: 10b167397;  */

long FUN_10b167338(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfd08);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b167398();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  FUN_10b167314(param_1 + 0x18);
  func_0x00010b1761c0();
  return param_1;
}



/* Entry: 10b167398; end: 10b16741f;  */

void FUN_10b167398(void)

{
  long lVar1;
  undefined8 uStack_30;
  
  func_0x00010b174a94();
  func_0x00010b174dc8();
  FUN_10b167420();
  func_0x00010b17522c();
  FUN_10b16744c();
  func_0x00010b1762f4();
  func_0x00010b175d4c();
  func_0x00010b177758();
  func_0x00010b175514(uStack_30 + 0xa8);
  lVar1 = *(long *)(uStack_30 + 0xb0);
  func_0x00010b1759bc();
  if (lVar1 == 0) {
    func_0x00010b1772b0();
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b176c78();
  return;
}



/* Entry: 10b167420; end: 10b16744b;  */

void FUN_10b167420(void)

{
  func_0x00010b174884();
  func_0x00010b1752bc();
  func_0x00010b17480c();
  func_0x00010b174da8();
  return;
}



/* Entry: 10b16744c; end: 10b1674a3;  */

void FUN_10b16744c(void)

{
  func_0x00010b1747a8();
  FUN_10b167314();
  return;
}



/* Entry: 10b1674a4; end: 10b1674cb;  */

void FUN_10b1674a4(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c279a4();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 10b1674cc; end: 10b1675ab;  */

void FUN_10b1674cc(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar3;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b17515c();
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 8) == uVar3;
  if (*(ulong *)(param_1 + 8) < uVar3) {
    func_0x00010b177b30();
    lVar4 = extraout_x8;
    if ((bool)uVar1) {
      func_0x00010b177d54();
      func_0x00010b177c14();
      func_0x00010b175444();
      *(undefined1 *)(extraout_x8_00 + 0x18) = 1;
      lVar4 = extraout_x8_00;
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    lVar4 = lVar4 + 0x30;
  }
  else {
    plVar2 = unaff_x19;
    FUN_10b1675ac();
    FUN_10b1676e4(auStack_58,plVar2,(unaff_x19[1] - *unaff_x19) / 0x30,(ulong *)(param_1 + 0x10));
    func_0x00010b177b30(lStack_48);
    lStack_48 = extraout_x8_01;
    if ((bool)uVar1) {
      func_0x00010b177d54();
      func_0x00010b177c14();
      func_0x00010b175444();
      *(undefined1 *)(extraout_x8_02 + 0x18) = 1;
      lStack_48 = extraout_x8_02;
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(lStack_48 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(lStack_48 + 0x20) = uVar5;
    lStack_48 = lStack_48 + 0x30;
    func_0x000107c350d8();
    FUN_10b1675fc();
    lVar4 = unaff_x19[1];
    FUN_10b167750(auStack_58);
  }
  unaff_x19[1] = lVar4;
  return;
}



/* Entry: 10b1675ac; end: 10b1675fb;  */

undefined8 * FUN_10b1675ac(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
    uVar2 = (param_1[2] - *param_1) / 0x30;
    puVar6 = (undefined8 *)(uVar2 * 2);
    if (puVar6 < param_2 || (long)puVar6 - (long)param_2 == 0) {
      puVar6 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar2) {
      puVar6 = (undefined8 *)0x555555555555555;
    }
    return puVar6;
  }
  FUN_10b1676d8();
  func_0x00010b175110();
  puVar3 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar7 = param_2[1] + (((long)puVar1 - (long)puVar3) / -0x30) * 0x30;
  puVar4 = (undefined1 *)(lVar7 + 0x18);
  for (puVar6 = puVar3; puVar6 != puVar1; puVar6 = puVar6 + 6) {
    puVar4[-0x18] = 0;
    *puVar4 = 0;
    if (*(char *)(puVar6 + 3) == '\x01') {
      uVar9 = puVar6[1];
      uVar8 = *puVar6;
      *(undefined8 *)(puVar4 + -8) = puVar6[2];
      *(undefined8 *)(puVar4 + -0x10) = uVar9;
      *(undefined8 *)(puVar4 + -0x18) = uVar8;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      *puVar4 = 1;
    }
    uVar8 = puVar6[4];
    *(undefined8 *)(puVar4 + 0x10) = puVar6[5];
    *(undefined8 *)(puVar4 + 8) = uVar8;
    puVar4 = puVar4 + 0x30;
  }
  for (; puVar3 != puVar1; puVar3 = puVar3 + 6) {
    func_0x000107c279a4();
  }
  unaff_x19[1] = lVar7;
  lVar5 = *unaff_x20;
  *unaff_x20 = lVar7;
  unaff_x20[1] = lVar5;
  unaff_x19[1] = lVar5;
  lVar7 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar7;
  lVar7 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar7;
  *unaff_x19 = unaff_x19[1];
  return puVar3;
}



/* Entry: 10b1675fc; end: 10b1676d7;  */

void FUN_10b1675fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010b175110();
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar6 = *(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar2) / -0x30) * 0x30;
  puVar3 = (undefined1 *)(lVar6 + 0x18);
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 6) {
    puVar3[-0x18] = 0;
    *puVar3 = 0;
    if (*(char *)(puVar5 + 3) == '\x01') {
      uVar8 = puVar5[1];
      uVar7 = *puVar5;
      *(undefined8 *)(puVar3 + -8) = puVar5[2];
      *(undefined8 *)(puVar3 + -0x10) = uVar8;
      *(undefined8 *)(puVar3 + -0x18) = uVar7;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      *puVar3 = 1;
    }
    uVar7 = puVar5[4];
    *(undefined8 *)(puVar3 + 0x10) = puVar5[5];
    *(undefined8 *)(puVar3 + 8) = uVar7;
    puVar3 = puVar3 + 0x30;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    func_0x000107c279a4();
  }
  unaff_x19[1] = lVar6;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar6;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = lVar4;
  lVar6 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar6;
  lVar6 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar6;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b1676d8; end: 10b1676e3;  */

void FUN_10b1676d8(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b17748c();
  func_0x00010b17515c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x555555555555555 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010b177edc();
      while (unaff_x20 != unaff_x19[2]) {
        unaff_x19[2] = unaff_x19[2] - 0x30;
        func_0x000107c279a4();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar1 = unaff_x20 * 0x30;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x30;
  return;
}



/* Entry: 10b1676e4; end: 10b16774f;  */

void FUN_10b1676e4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010b17515c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x555555555555555 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010b177edc();
      while (unaff_x20 != unaff_x19[2]) {
        unaff_x19[2] = unaff_x19[2] - 0x30;
        func_0x000107c279a4();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar1 = unaff_x20 * 0x30;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x30;
  return;
}



/* Entry: 10b167750; end: 10b1678e3;  */

void FUN_10b167750(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010b177edc();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -0x30;
    func_0x000107c279a4();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1678e4; end: 10b1678e7;  */

long FUN_10b1678e4(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfdc0);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b1679f4();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052a9c3c(param_1 + 0x18);
  func_0x00010b1761b0();
  return param_1;
}



/* Entry: 10b1678e8; end: 10b1678fb;  */

void FUN_10b1678e8(void)

{
  FUN_10b167994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1678fc; end: 10b1678ff;  */

long FUN_10b1678fc(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfdc0);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b1679f4();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052a9c3c(param_1 + 0x18);
  func_0x00010b1761b0();
  return param_1;
}



/* Entry: 10b167900; end: 10b167913;  */

void FUN_10b167900(void)

{
  FUN_10b167994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b167914; end: 10b167917;  */

void FUN_10b167914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbfde0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b167918; end: 10b16792b;  */

void FUN_10b167918(void)

{
  FUN_10b167984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b16792c; end: 10b167983;  */

long FUN_10b16792c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    func_0x00010b174910();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  lVar1 = param_1 + 0x38;
  __ZNSt3__118condition_variableD1Ev(lVar1);
  func_0x00010b177038();
  if ((bool)in_ZR) {
    lStack_28 = param_1 + 0x18;
    func_0x0001052a9e14(&lStack_28);
    return param_1 + 0x18;
  }
  return lVar1;
}



/* Entry: 10b167984; end: 10b167993;  */

void FUN_10b167984(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b167994; end: 10b1679f3;  */

long FUN_10b167994(long param_1)

{
  long extraout_x8;
  
  func_0x00010b174b2c(&PTR_FUN_110cbfdc0);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b1679f4();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052a9c3c(param_1 + 0x18);
  func_0x00010b1761b0();
  return param_1;
}



/* Entry: 10b1679f4; end: 10b167a97;  */

void FUN_10b1679f4(void)

{
  long lVar1;
  undefined8 uStack_30;
  
  func_0x00010b174c44();
  func_0x00010b174c54();
  func_0x0001052a9b74();
  func_0x00010b17522c();
  func_0x0001052a9bc8();
  func_0x00010b176304();
  func_0x00010b1762ec();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0x50);
  func_0x00010b175514(uStack_30 + 0x90);
  lVar1 = *(long *)(uStack_30 + 0x98);
  *(undefined8 *)(uStack_30 + 0x98) = 0;
  __ZNSt3__15mutex6unlockEv(uStack_30 + 0x50);
  if (lVar1 == 0) {
    __ZNSt3__118condition_variable10notify_allEv(uStack_30 + 0x20);
  }
  else {
    func_0x00010b174f84();
    func_0x00010b174a10();
    func_0x00010b1747fc();
  }
  func_0x00010b17631c();
  return;
}



/* Entry: 10b167a98; end: 10b167acb;  */

long FUN_10b167a98(long param_1)

{
  long extraout_x8;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_10b167acc(param_1 + 0x28);
  }
  func_0x00010b174b2c(&PTR_FUN_110cbfdc0);
  if (extraout_x8 != 0) {
    func_0x00010b17478c();
    func_0x00010b1755dc();
    FUN_10b1679f4();
    func_0x00010b175060();
    func_0x00010b1750ac();
    func_0x00010b175208();
  }
  func_0x0001052a9c3c(param_1 + 0x18);
  func_0x00010b1761b0();
  return param_1;
}



/* Entry: 10b167acc; end: 10b167af3;  */

void FUN_10b167acc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001052a9de8();
  }
  else {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}


