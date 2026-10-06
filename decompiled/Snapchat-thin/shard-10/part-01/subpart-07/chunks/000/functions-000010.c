/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107850f20; end: 107850f33;  */

void FUN_107850f20(void)

{
  func_0x000107851170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078511d8; end: 10785129f;  */

long FUN_1078511d8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078513e4; end: 1078513f7;  */

undefined ** FUN_1078513e4(void)

{
  return &PTR_DAT_1109e27f0;
}



/* Entry: 107851724; end: 107851767;  */

long * FUN_107851724(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001078512f4(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 107851a1c; end: 107851a2f;  */

void FUN_107851a1c(void)

{
  func_0x000107851200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107851b9c; end: 107851b9f;  */

void FUN_107851b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e29a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107851f88; end: 107851fd7;  */

undefined8 * FUN_107851f88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e29f8;
  (**(code **)(*(long *)param_1[0x1e] + 0x18))((long *)param_1[0x1e],*(undefined4 *)(param_1 + 1));
  func_0x0001078536e4(param_1 + 0x1f);
  func_0x0001074f8ec0(param_1 + 2);
  return param_1;
}



/* Entry: 107853198; end: 1078531ab;  */

void FUN_107853198(undefined8 param_1,long param_2,long param_3)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  if (*(char *)(param_2 + 0x38) == '\0') {
    param_2 = param_3;
  }
  func_0x0001000d03a8(param_1,param_2);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1078533ac; end: 1078533cf;  */

void FUN_1078533ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e2aa0;
  return;
}



/* Entry: 107853680; end: 1078536c7;  */

undefined8 * FUN_107853680(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_107854460();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2fe00(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 107853fac; end: 107853fd7;  */

void FUN_107853fac(undefined8 param_1,undefined8 param_2)

{
  func_0x0001078545d8(param_2,param_1,&PTR_DAT_1109e2b80);
  func_0x00010785458c();
  return;
}



/* Entry: 1078541e8; end: 107854213;  */

undefined8 * FUN_1078541e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2ba0;
  func_0x000107852fec(param_1 + 1);
  return param_1;
}



/* Entry: 107854460; end: 10785464b;  */

void FUN_107854460(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 107854858; end: 107854c7f;  */

void FUN_107854858(long param_1,undefined4 param_2,long param_3,long *param_4)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long lVar4;
  undefined1 auStack_220 [56];
  undefined1 auStack_1e8 [64];
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [56];
  undefined1 auStack_f8 [56];
  byte bStack_c0;
  undefined1 auStack_b8 [8];
  long alStack_b0 [6];
  byte bStack_80;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  switch(param_2) {
  case 4:
    lVar4 = *param_4;
    func_0x0001078696e8(auStack_170);
    func_0x000107262e9c(auStack_f8,lVar4 + 8);
    func_0x0001077765a4(auStack_b8,lVar4 + 0x20,auStack_1e8);
    func_0x000107869848(auStack_170,auStack_f8,auStack_b8);
    func_0x00010726af18(alStack_b0);
    func_0x000104c2f714(auStack_f8);
    func_0x00010731f9c8(param_1 + 8,auStack_170);
    func_0x00010726b264(auStack_170);
    goto code_r0x000107854b18;
  case 5:
    func_0x000107262e9c(auStack_b8,*param_4 + 8);
    func_0x00010724b810(param_1 + 0x28,auStack_b8);
    func_0x000104c2f714(auStack_b8);
code_r0x000107854b18:
    uVar3 = 5;
    break;
  case 6:
    if (*(char *)(param_3 + 0x10) == '\x01') {
      lVar4 = *param_4;
      func_0x000107854cbc();
      func_0x000107854cc4();
      func_0x000107263b58(auStack_f8,extraout_x8 + 0x128);
      if (bStack_c0 != 1) {
code_r0x000107854b20:
        func_0x00010724b3d8();
        goto LAB_107854b24;
      }
      func_0x0001078696e8(auStack_130);
      func_0x000107262e9c(auStack_170,lVar4 + 8);
      func_0x0001077765a4(auStack_b8,lVar4 + 0x20,auStack_1e8);
      func_0x000107869848(auStack_130,auStack_170,auStack_b8);
      plVar2 = alStack_b0;
      func_0x00010726af18();
      func_0x000107854cd0();
      func_0x000107854cbc();
      lVar4 = *(long *)(*plVar2 + 0x30);
      func_0x000107854cbc();
      func_0x000107854cc4();
      func_0x000104c2fe00(auStack_170,extraout_x8_00 + 0x98);
      func_0x0001072627ac(auStack_b8,auStack_170);
      if ((bStack_c0 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_107854b70;
      }
      func_0x000104c2fe00(auStack_1e8,auStack_f8);
      func_0x0001075200b0(param_1 + 0x48,lVar4 + 0x60,auStack_b8,auStack_1e8,auStack_130);
      func_0x000104c2f714(auStack_1e8);
      func_0x00010724b3d8(auStack_b8);
      func_0x000107854cd0();
      func_0x00010726b264(auStack_130);
      lVar4 = -0xe8;
code_r0x000107854ae8:
      func_0x00010724b3d8(&stack0xfffffffffffffff0 + lVar4);
    }
code_r0x000107854aec:
    uVar3 = 1;
    break;
  case 7:
    if (*(char *)(param_3 + 0x10) != '\x01') goto code_r0x000107854aec;
    lVar4 = *param_4;
    func_0x000107854cbc();
    func_0x000107854cc4();
    func_0x000107263b58(auStack_b8,extraout_x8_01 + 0x128);
    if (bStack_80 != 1) goto code_r0x000107854b20;
    func_0x000107854cbc();
    func_0x000107854cbc();
    func_0x000107854cc4();
    func_0x000104c2fe00(auStack_130,extraout_x8_02 + 0x98);
    func_0x0001072627ac(auStack_f8,auStack_130);
    if ((bStack_80 & 1) != 0) {
      func_0x000104c2fe00(auStack_1a8,auStack_b8);
      func_0x0001072627ac(auStack_170,auStack_1a8);
      func_0x000107262e9c(auStack_220,lVar4 + 8);
      func_0x0001072627ac(auStack_1e8,auStack_220);
      if (*(long *)(param_1 + 0x80) == 0) {
        func_0x000104bfeb48();
        goto LAB_107854b70;
      }
      func_0x000107854cc4();
      (*extraout_x8_03)();
      func_0x00010724b3d8(auStack_1e8);
      func_0x000104c2f714(auStack_220);
      func_0x00010724b3d8(auStack_170);
      func_0x000104c2f714(auStack_1a8);
      func_0x00010724b3d8(auStack_f8);
      func_0x000104c2f714(auStack_130);
      lVar4 = -0xa8;
      goto code_r0x000107854ae8;
    }
    goto code_r0x000107854b5c;
  default:
LAB_107854b24:
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail(uVar3);
code_r0x000107854b5c:
  func_0x000104bdc2c8();
LAB_107854b70:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107854b74);
  (*pcVar1)();
}



/* Entry: 107854fd8; end: 107854feb;  */

void FUN_107854fd8(void)

{
  func_0x00010785506c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078550a8; end: 10785514b;  */

void FUN_1078550a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x000107855dd0();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  lVar1 = param_3[1];
  uVar2 = *param_3;
  *(undefined8 *)(param_1 + 0xf8) = param_3[1];
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107855db8();
    } while (extraout_w10 != 0);
  }
  *(undefined **)(unaff_x19 + 0x100) = &UNK_10e52b660;
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined8 *)(unaff_x19 + 0x110) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = 0;
  func_0x00010726ed14(unaff_x19 + 0x120);
  *(long *)(unaff_x19 + 0x130) = unaff_x19;
  return;
}



/* Entry: 1078556b0; end: 1078556c3;  */

void FUN_1078556b0(void)

{
  func_0x000107855684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107855d3c; end: 107855d6b;  */

long FUN_107855d3c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x0001072aca78(param_2 + 0x38);
  func_0x000104c2f714(param_2);
  return param_2;
}



/* Entry: 107856510; end: 107856523;  */

void FUN_107856510(void)

{
  func_0x000107856500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107856630; end: 107856737;  */

void FUN_107856630(long param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  long lVar5;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 *puStack_40;
  long lStack_38;
  
  func_0x0001078567e4(auStack_80,param_1 + 8);
  iVar3 = (int)param_1 + 8;
  func_0x000107856870();
  if (iVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    puVar1 = *(undefined8 **)(param_2 + 0x40);
    lStack_38 = *(long *)(param_2 + 0x48);
    puStack_40 = puVar1;
    if (lStack_38 != 0) {
      do {
        func_0x000107856b60();
      } while (extraout_w10 != 0);
    }
    puVar4 = puVar1 + 3;
    func_0x0001072e787c(puVar4);
    if ((*(byte *)(puVar1 + 2) & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107856708);
      (*pcVar2)();
    }
    uStack_58 = puVar1[1];
    uStack_60 = *puVar1;
    if (puVar1[1] != 0) {
      do {
        func_0x000107856b60();
      } while (extraout_w10_00 != 0);
    }
    uStack_50 = 1;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x00010726acf0(&uStack_70);
    func_0x000107854174(lVar5 + 0x88,puVar4,&uStack_60,&uStack_70);
    func_0x000107856b80();
    func_0x000107856b88();
    func_0x00010785646c(&puStack_40);
  }
  func_0x000107856b78();
  return;
}



/* Entry: 107856944; end: 107856957;  */

void FUN_107856944(void)

{
  func_0x000107856918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107856b58; end: 107856bbf;  */

void FUN_107856b58(void)

{
  return;
}



/* Entry: 107856fc8; end: 107857007;  */

void FUN_107856fc8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001078570c4(&uStack_11,param_1);
  return;
}



/* Entry: 1078571a8; end: 1078571ab;  */

void FUN_1078571a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3030;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107857454; end: 107857497;  */

void FUN_107857454(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107858f58(&uStack_40);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uStack_38;
  *(undefined8 *)(param_1 + 0xa0) = uStack_40;
  *(undefined8 *)(param_1 + 0xb8) = uStack_28;
  *(undefined8 *)(param_1 + 0xb0) = uStack_30;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  func_0x0001074f55d0(&uStack_40);
  return;
}



/* Entry: 107857e7c; end: 10785815b;  */

void FUN_107857e7c(long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined2 *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  undefined2 *puVar12;
  long lVar13;
  long lVar14;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [56];
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = param_1;
  lVar7 = param_4;
  func_0x0001078599bc();
  lStack_120 = 0;
  lStack_118 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  puStack_158 = &uStack_100;
  puStack_148 = &uStack_138;
  plStack_140 = &lStack_120;
  plStack_178 = param_3;
  lStack_170 = lVar11;
  lStack_168 = lVar7;
  uStack_160 = param_5;
  uStack_150 = param_7;
  uStack_100 = param_6;
  uStack_68 = extraout_x8;
  if (*(char *)(param_8 + 0x50) == '\x01') {
    puVar1 = *(undefined2 **)(param_8 + 0x40);
    for (puVar12 = *(undefined2 **)(param_8 + 0x38); puVar12 != puVar1; puVar12 = puVar12 + 1) {
      func_0x000107858954(&plStack_178,*puVar12);
    }
  }
  else {
    lVar7 = *param_3;
    lVar9 = param_3[1];
    for (lVar11 = 0; lVar9 - lVar7 >> 3 != lVar11; lVar11 = lVar11 + 1) {
      func_0x000107858954(&plStack_178,lVar11);
    }
  }
  uVar5 = 1;
  if (lStack_120 == lStack_118) {
LAB_1078580bc:
    func_0x00010785962c(&uStack_138);
    func_0x00010730b05c(&lStack_120);
    func_0x00010785997c(uStack_68);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f8,param_4);
    func_0x0001072ab9cc(auStack_e0,param_4 + 0x18);
    func_0x000107277f30(auStack_c8,param_4 + 0x30);
    func_0x000104c2fe00(auStack_b8,param_2);
    lStack_78 = lStack_118;
    lStack_80 = lStack_120;
    uStack_70 = uStack_110;
    lStack_118 = 0;
    uStack_110 = 0;
    lStack_120 = 0;
    uVar6 = *(ulong *)(param_1 + 0xe0);
    uVar10 = *(ulong *)(param_1 + 0xe8);
    uVar5 = uVar6 == uVar10;
    if (uVar6 < uVar10) {
      func_0x0001078595ac(uVar6,auStack_f8);
      lVar11 = uVar6 + 0x90;
LAB_1078580b0:
      *(long *)(param_1 + 0xe0) = lVar11;
      func_0x000107859604(auStack_f8);
      goto LAB_1078580bc;
    }
    lVar11 = uVar6 - *(long *)(param_1 + 0xd8);
    uVar6 = lVar11 / 0x90 + 1;
    if (uVar6 < 0x1c71c71c71c71c8) {
      uVar3 = (long)(uVar10 - *(long *)(param_1 + 0xd8)) / 0x90;
      uVar10 = uVar3 * 2;
      if (uVar10 < uVar6 || uVar10 - uVar6 == 0) {
        uVar10 = uVar6;
      }
      if (0xe38e38e38e38e2 < uVar3) {
        uVar10 = 0x1c71c71c71c71c7;
      }
      if (uVar10 == 0) {
        lVar7 = 0;
      }
      else {
        if (0x1c71c71c71c71c7 < uVar10) {
          func_0x000104bd35f4();
          goto LAB_107858108;
        }
        lVar7 = uVar10 * 0x90;
        __Znwm();
      }
      lVar11 = lVar7 + lVar11;
      func_0x0001078595ac(lVar11,auStack_f8);
      lVar13 = *(long *)(param_1 + 0xd8);
      lVar2 = *(long *)(param_1 + 0xe0);
      lVar14 = lVar11 + ((lVar2 - lVar13) / -0x90) * 0x90;
      lVar8 = lVar14;
      for (lVar9 = lVar13; lVar9 != lVar2; lVar9 = lVar9 + 0x90) {
        func_0x0001078595ac(lVar8,lVar9);
        lVar8 = lVar8 + 0x90;
      }
      for (; uVar5 = lVar13 == lVar2, !(bool)uVar5; lVar13 = lVar13 + 0x90) {
        func_0x000107859604(lVar13);
      }
      lVar11 = lVar11 + 0x90;
      lVar9 = *(long *)(param_1 + 0xd8);
      *(long *)(param_1 + 0xd8) = lVar14;
      *(long *)(param_1 + 0xe0) = lVar11;
      *(ulong *)(param_1 + 0xe8) = lVar7 + uVar10 * 0x90;
      if (lVar9 != 0) {
        __ZdlPv();
      }
      goto LAB_1078580b0;
    }
  }
  func_0x0001078595f8();
LAB_107858108:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10785810c);
  (*pcVar4)();
}



/* Entry: 107858fac; end: 107858fcb;  */

void FUN_107858fac(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000107858fcc();
  }
  return;
}



/* Entry: 107859508; end: 107859513;  */

void FUN_107859508(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107859998();
  func_0x000107859a74();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001072a6994(param_1 + 3,param_2 + 3);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  return;
}



/* Entry: 1078597d4; end: 1078597eb;  */

void FUN_1078597d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10785997c; end: 107859b2f;  */

void FUN_10785997c(void)

{
  return;
}



/* Entry: 107859f64; end: 107859fbb;  */

void FUN_107859f64(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107859f98();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  return;
}



/* Entry: 10785a244; end: 10785a2ab;  */

/* WARNING: Possible PIC construction at 0x00010785a2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010785a2ec) */
/* WARNING: Removing unreachable block (ram,0x00010785a30c) */
/* WARNING: Removing unreachable block (ram,0x00010785a2fc) */
/* WARNING: Removing unreachable block (ram,0x00010785a314) */
/* WARNING: Removing unreachable block (ram,0x00010785a318) */
/* WARNING: Removing unreachable block (ram,0x00010785a320) */
/* WARNING: Removing unreachable block (ram,0x00010785a338) */
/* WARNING: Removing unreachable block (ram,0x00010785a330) */
/* WARNING: Removing unreachable block (ram,0x00010785a304) */
/* WARNING: Removing unreachable block (ram,0x00010785a33c) */
/* WARNING: Removing unreachable block (ram,0x00010785a360) */
/* WARNING: Removing unreachable block (ram,0x00010785a374) */
/* WARNING: Removing unreachable block (ram,0x00010785a348) */

char * FUN_10785a244(char *param_1)

{
  undefined1 in_ZR;
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined8 extraout_x8;
  char acStack_a0 [32];
  
  func_0x00010785a7a0();
  func_0x00010785a7cc();
  func_0x00010785a3c0();
  pcVar1 = param_1;
  func_0x00010785a7c4();
  func_0x00010785a78c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010785a7b0();
  func_0x00010785a7bc();
  pcVar2 = acStack_a0;
  pcVar4 = acStack_a0;
  func_0x00010785a7a0();
  func_0x00010688d7f0();
  func_0x00010785a824();
  while ((pcVar2 != pcVar1 &&
         (puVar3 = pcVar4, func_0x00010688d198(pcVar4,(long)*pcVar2), ((ulong)puVar3 & 1) == 0))) {
    pcVar2 = pcVar2 + 1;
  }
  return pcVar2;
}



/* Entry: 10785a51c; end: 10785a55f;  */

void FUN_10785a51c(ulong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if ((((ulong)puVar1 & 1) == 0) && ((code *)*puVar1 != (code *)0x0)) {
      (*(code *)*puVar1)(param_1 + 1,param_1 + 1,2);
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 10785a938; end: 10785a9d3;  */

undefined8 * FUN_10785a938(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000113822d40 & 1) == 0) {
    iVar1 = 0x13822d40;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x68;
      __Znwm();
      *puVar2 = 0x32aaaba7;
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[8] = 0;
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[0xb] = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0x3f800000;
      puRam0000000113822d38 = puVar2;
      ___cxa_guard_release(0x113822d40);
    }
  }
  return puRam0000000113822d38;
}



/* Entry: 10785aed0; end: 10785afe3;  */

void FUN_10785aed0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_50 [24];
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  FUN_10785a938();
  __ZNSt3__15mutex4lockEv();
  func_0x00010785afe4(&lStack_38,*(undefined8 *)(param_1 + 0x58));
  plVar4 = (long *)(param_1 + 0x50);
  while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
    func_0x00010785b058(auStack_50,plVar4[2] + 0x78);
    func_0x00010785b6a4(&lStack_38,auStack_50);
    func_0x00010725b1d4(auStack_50);
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  lVar1 = lStack_30;
  for (lVar3 = lStack_38; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    func_0x00010785b0b8(auStack_50,lVar3);
    lVar2 = lVar3;
    func_0x00010785b138();
    if ((int)lVar2 != 0) {
      func_0x00010785bdac(lVar3);
      func_0x00010785a9ec();
    }
    func_0x000107270b00(auStack_50);
  }
  func_0x00010785b7e8(&lStack_38);
  return;
}



/* Entry: 10785b2d4; end: 10785b313;  */

ulong FUN_10785b2d4(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3c == 0) {
    uVar1 = param_1[2] - *param_1 >> 3;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0xfffffffffffffff;
    }
    return uVar1;
  }
  func_0x00010785b34c();
  func_0x00010785c08c();
  uVar1 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(uVar1);
  func_0x00010785c020();
  return uVar1;
}



/* Entry: 10785b47c; end: 10785b487;  */

void FUN_10785b47c(long *param_1,long param_2)

{
  func_0x00010785c0e8();
  func_0x00010785c08c();
  func_0x00010785b568(param_1 + 2,*param_1,param_1[1],
                      *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x00010785c020();
  return;
}



/* Entry: 10785b704; end: 10785b797;  */

long FUN_10785b704(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010785c0f4();
  func_0x00010785b798();
  func_0x00010785b4cc(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x18,unaff_x19 + 2);
  uVar2 = *unaff_x20;
  puStack_48[1] = unaff_x20[1];
  *puStack_48 = uVar2;
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  puStack_48[2] = unaff_x20[2];
  puStack_48 = puStack_48 + 3;
  func_0x00010785c0d4();
  lVar1 = unaff_x19[1];
  func_0x00010785c0a0();
  return lVar1;
}



/* Entry: 10785b90c; end: 10785bcbb;  */

undefined1  [16] FUN_10785b90c(long *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x25;
  undefined1 auVar15 [16];
  
  uVar3 = *param_2;
  func_0x00010785bcbc();
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar14 <= uVar3) {
        uVar7 = 0;
        if (uVar14 != 0) {
          uVar7 = uVar3 / uVar14;
        }
        unaff_x25 = uVar3 - uVar7 * uVar14;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10785b9d0;
          uVar7 = plVar12[1];
          if (uVar7 != uVar3) break;
          if (plVar12[2] == *param_2) {
            uVar4 = 0;
            goto LAB_10785bc88;
          }
        }
        if ((uVar14 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar14 <= uVar7) {
          uVar6 = 0;
          if (uVar14 != 0) {
            uVar6 = uVar7 / uVar14;
          }
          uVar7 = uVar7 - uVar6 * uVar14;
        }
      } while (uVar7 == unaff_x25);
    }
  }
LAB_10785b9d0:
  lVar13 = *param_3;
  plVar1 = param_1 + 2;
  plVar12 = (long *)0x18;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar3;
  plVar12[2] = lVar13;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_10785bc10;
  uVar5 = 1;
  if (2 < uVar14) {
    uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar5 = uVar5 | uVar14 << 1;
  uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar14 = param_1[1];
  }
  if (uVar14 < uVar5) {
LAB_10785ba7c:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10785bcb0);
      (*pcVar2)();
    }
    lVar13 = uVar5 << 3;
    __Znwm(lVar13);
    func_0x00010785bce4(param_1,lVar13);
    param_1[1] = uVar5;
    lVar13 = *param_1;
    for (uVar14 = 0; uVar5 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar13 + uVar14 * 8) = 0;
    }
    plVar8 = (long *)*plVar1;
    uVar14 = uVar5;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar6 = uVar5 - 1;
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar10 / uVar5;
      }
      uVar11 = uVar10;
      if (uVar5 <= uVar10) {
        uVar11 = uVar10 - uVar7 * uVar5;
      }
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      *(long **)(lVar13 + uVar11 * 8) = plVar1;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        if ((uVar5 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar5 <= uVar7) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar7 / uVar5;
          }
          uVar7 = uVar7 - uVar10 * uVar5;
        }
        if (uVar7 != uVar11) {
          if (*(long *)(lVar13 + uVar7 * 8) == 0) {
            *(long **)(lVar13 + uVar7 * 8) = plVar9;
            uVar11 = uVar7;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar13 + uVar7 * 8);
            **(long **)(lVar13 + uVar7 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar5 < uVar14) {
    uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar7) {
      uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (uVar5 < uVar14) {
      if (uVar5 != 0) goto LAB_10785ba7c;
      func_0x00010785bce4(param_1,0);
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x25 = uVar14 - 1 & uVar3;
  }
  else {
    unaff_x25 = uVar3;
    if (uVar14 <= uVar3) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar3 / uVar14;
      }
      unaff_x25 = uVar3 - uVar5 * uVar14;
    }
  }
LAB_10785bc10:
  lVar13 = *param_1;
  plVar8 = *(long **)(lVar13 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar13 + unaff_x25 * 8) = plVar1;
    if (*plVar12 != 0) {
      uVar3 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar3 = uVar3 & uVar14 - 1;
      }
      else if (uVar14 <= uVar3) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar3 / uVar14;
        }
        uVar3 = uVar3 - uVar5 * uVar14;
      }
      *(long **)(lVar13 + uVar3 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010785c0e0();
  uVar4 = 1;
LAB_10785bc88:
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 10785beec; end: 10785bef7;  */

undefined ** FUN_10785beec(void)

{
  return &PTR_DAT_1109e3160;
}



/* Entry: 10785c710; end: 10785c7cb;  */

void FUN_10785c710(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010785c7cc();
  if ((int)uVar1 != 0) {
    uStack_130 = *param_2;
    uStack_128 = param_2[1];
    uStack_120 = param_2[2];
    uStack_110 = param_2[3];
    uStack_118 = 0x3ff0000000000000;
    uStack_f8 = 0x3ff0000000000000;
    uStack_e8 = param_2[4];
    uStack_a0 = param_2[5];
    uStack_d8 = 0x3ff0000000000000;
    uStack_b8 = 0x3ff0000000000000;
    uStack_98 = 0x3ff0000000000000;
    uStack_78 = 0x3ff0000000000000;
    uStack_58 = 0x3ff0000000000000;
    uStack_38 = 0x3ff0000000000000;
    uStack_108 = uStack_128;
    uStack_100 = uStack_120;
    uStack_f0 = uStack_110;
    uStack_e0 = uStack_120;
    uStack_d0 = uStack_130;
    uStack_c8 = uStack_e8;
    uStack_c0 = uStack_120;
    uStack_b0 = uStack_130;
    uStack_a8 = uStack_128;
    uStack_90 = uStack_110;
    uStack_88 = uStack_128;
    uStack_80 = uStack_a0;
    uStack_70 = uStack_110;
    uStack_68 = uStack_e8;
    uStack_60 = uStack_a0;
    uStack_50 = uStack_130;
    uStack_48 = uStack_e8;
    uStack_40 = uStack_a0;
    func_0x00010785c650(param_1,&uStack_130,8,param_2);
  }
  return;
}



/* Entry: 10785cae4; end: 10785cb23;  */

void FUN_10785cae4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = uRam00000001131adb40;
  uVar2 = uRam00000001131adb38;
  uVar1 = uRam00000001131adb28;
  param_1[1] = uRam00000001131adb30;
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = 0x3ff0000000000000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0x3ff0000000000000;
  return;
}



/* Entry: 10785ce48; end: 10785ce77;  */

void FUN_10785ce48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_a0 [96];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010785ce78();
  *param_5 = param_1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  param_5[3] = param_4;
  func_0x000107878b80(auStack_a0,param_5);
  uStack_38 = param_5[0x11];
  uStack_40 = param_5[0x10];
  uStack_30 = param_5[0x12];
  _memcpy(param_5 + 4,auStack_a0,0x80);
  return;
}



/* Entry: 10785d0ec; end: 10785d207;  */

void FUN_10785d0ec(undefined8 *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (((ulong)param_2[3] & 1) != 0) {
    func_0x0001074174bc();
    dVar4 = param_2[1];
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= dVar4) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar4)) {
        bVar1 = dVar4 < 1.0;
        bVar2 = dVar4 == 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      dVar5 = param_2[2];
      dVar6 = *param_2;
      dVar4 = 3.141592653589793 - dVar4 * 6.283185307179586;
      _exp(dVar4);
      _atan();
      func_0x00010785d34c();
      func_0x00010785d334(dVar4 * 57.29577951308232,dVar6 * 360.0 + -180.0);
      dVar4 = (double)NEON_fminnm(uStack_50,0x40554345b1a549d7);
      if (dVar4 <= -85.0511287798066) {
        dVar4 = -85.0511287798066;
      }
      func_0x00010785d32c(dVar4,0x3f91df46a2529d39);
      param_1[1] = uStack_48;
      *param_1 = uStack_50;
      param_1[2] = dVar5 * 512.0 * dVar4 * 6.283185307179586 * 6378137.0 * 0.001953125;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10785d538; end: 10785d5a7;  */

void FUN_10785d538(undefined8 *param_1)

{
  long *plVar1;
  
  func_0x00010785dc78();
  func_0x00010785dc48();
  func_0x00010785dcec();
  func_0x00010785dc70();
  func_0x00010785dce4();
  plVar1 = (long *)*param_1;
  func_0x00010785dc48();
  func_0x00010785dd18(*(undefined8 *)(*plVar1 + 0x48));
  func_0x00010785dc70();
  func_0x00010785dd7c();
  return;
}



/* Entry: 10785d888; end: 10785d8cb;  */

long * FUN_10785d888(void)

{
  long *in_x3;
  long *unaff_x20;
  ulong unaff_x21;
  
  func_0x00010785dc34();
  func_0x00010785dcbc(*(undefined8 *)(*unaff_x20 + 0x28));
  func_0x00010785dc60();
  if ((unaff_x21 & 1) == 0) {
    unaff_x20 = in_x3;
  }
  return unaff_x20;
}



/* Entry: 10785db38; end: 10785dc33;  */

void FUN_10785db38(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  *param_1 = 0;
  lVar3 = *param_2;
  *param_2 = 0;
  func_0x000100133ac4(param_1,lVar3);
  func_0x000100133ac4(param_2,lVar6);
  lVar3 = param_1[2];
  lVar6 = param_1[1];
  lVar5 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar5;
  param_2[1] = lVar6;
  param_2[2] = lVar3;
  lVar6 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = lVar6;
  lVar3 = param_1[4];
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(int *)(param_2 + 4) = (int)lVar3;
  if (param_1[3] != 0) {
    uVar1 = param_1[1];
    uVar4 = *(ulong *)(param_1[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar4 = uVar1 - 1 & uVar4;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
  }
  if (lVar6 != 0) {
    uVar1 = param_2[1];
    uVar4 = *(ulong *)(param_2[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar4 = uVar1 - 1 & uVar4;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
    *(long **)(*param_2 + uVar4 * 8) = param_2 + 2;
  }
  return;
}



/* Entry: 10785e40c; end: 10785e437;  */

void FUN_10785e40c(undefined8 param_1,long param_2)

{
  func_0x000104c318bc();
  *(undefined4 *)(param_2 + 0x38) = 3;
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 10785e7f0; end: 10785e877;  */

void FUN_10785e7f0(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 in_register_00005008;
  undefined1 auStack_40 [16];
  
  func_0x000107869104();
  func_0x00010785e878();
  func_0x000107868fd8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  func_0x000107869448();
  func_0x000107868ff0();
  if ((unaff_x20 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    func_0x00010786921c();
    unaff_x19[1] = in_register_00005008;
    *unaff_x19 = param_1;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107868df0();
      } while (extraout_w10_00 != 0);
    }
  }
  func_0x000107289dd4(auStack_40);
  return;
}



/* Entry: 10785eb50; end: 10785ebf7;  */

void FUN_10785eb50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  
  func_0x000107868d20();
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010786909c(uVar1);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x30) == 5)) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    func_0x0001078684ec();
    func_0x000107289da8(*puVar2,param_3);
    func_0x0001078691fc();
  }
  return;
}



/* Entry: 10785f024; end: 10785f14f;  */

void FUN_10785f024(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  
  func_0x000107868d20();
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x000107868f98(uVar1);
  if ((param_2 == 0) || (*(int *)(param_2 + 0x30) != 0xb)) {
    uVar3 = 0;
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined8 *)(param_2 + 0x20);
    func_0x0001078686c4();
    func_0x00010785f084(param_1,*puVar2);
    uVar3 = 1;
  }
  param_1[0x42] = uVar3;
  return;
}



/* Entry: 107864dd4; end: 107864ebb;  */

void FUN_107864dd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_50 [16];
  
  uVar1 = param_4;
  uStack_80 = param_4;
  _strlen();
  uStack_78 = uVar1;
  uStack_70 = param_5;
  _strlen();
  uStack_68 = param_5;
  func_0x00010785e7b8(auStack_50,&uStack_80,param_6);
  uVar3 = *(ulong *)(param_2 + 0xbd0);
  uStack_80 = param_4;
  _strlen();
  uStack_78 = param_4;
  func_0x00010786921c();
  uStack_70 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  uStack_60 = 0;
  func_0x0001078690b4();
  func_0x000107868ff0();
  if ((uVar3 & 1) == 0) {
    func_0x0001078690c0();
    lVar2 = extraout_x8_01;
  }
  else {
    func_0x00010786921c();
    lVar2 = extraout_x8_00;
  }
  uStack_80 = param_1;
  if (lVar2 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001078690a8();
  func_0x0001078692c0();
  func_0x000107869150();
  return;
}



/* Entry: 1078656b8; end: 1078656ef;  */

void FUN_1078656b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 8;
  __Znwm();
  func_0x0001078695dc();
  *param_1 = uVar1;
  return;
}



/* Entry: 107865e14; end: 107865ffb;  */

void FUN_107865e14(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lStack_48;
  undefined1 uStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  lStack_48 = param_1 + 8;
  uStack_40 = 1;
  func_0x000107279a5c();
  uVar7 = *(ulong *)(param_1 + 0xb8);
  if ((uVar7 != 0) && (lVar4 = *(long *)(param_1 + 200), lVar4 != 0)) {
    uVar5 = (ulong)param_2;
    uVar9 = uVar7 - 1;
    uVar6 = (uint)uVar7;
    if ((uVar7 & uVar9) == 0) {
      uVar11 = (ulong)(uVar6 - 1 & param_2);
    }
    else {
      uVar11 = uVar5;
      if (uVar7 <= uVar5) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = param_2 / uVar6;
        }
        uVar11 = (ulong)(param_2 - uVar1 * uVar6);
      }
    }
    lVar10 = *(long *)(param_1 + 0xb0);
    plVar8 = *(long **)(lVar10 + uVar11 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_107865fec;
          uVar13 = plVar8[1];
          if (uVar13 != uVar5) break;
          if (*(uint *)(plVar8 + 2) == param_2) {
            lVar12 = *plVar8;
            if ((uVar7 & uVar9) == 0) {
              uVar5 = uVar9 & uVar5;
            }
            else if (uVar7 <= uVar5) {
              uVar11 = 0;
              if (uVar7 != 0) {
                uVar11 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar11 * uVar7;
            }
            plVar3 = *(long **)(lVar10 + uVar5 * 8);
            do {
              plVar14 = plVar3;
              plVar3 = (long *)*plVar14;
            } while ((long *)*plVar14 != plVar8);
            plStack_30 = (long *)(param_1 + 0xc0);
            if (plVar14 == plStack_30) {
LAB_107865f4c:
              if (lVar12 == 0) {
LAB_107865f80:
                *(undefined8 *)(lVar10 + uVar5 * 8) = 0;
                lVar12 = *plVar8;
                goto LAB_107865f88;
              }
              uVar11 = *(ulong *)(lVar12 + 8);
              if ((uVar7 & uVar9) == 0) {
                uVar13 = uVar11 & uVar9;
              }
              else {
                uVar13 = uVar11;
                if (uVar7 <= uVar11) {
                  uVar13 = 0;
                  if (uVar7 != 0) {
                    uVar13 = uVar11 / uVar7;
                  }
                  uVar13 = uVar11 - uVar13 * uVar7;
                }
              }
              if (uVar13 != uVar5) goto LAB_107865f80;
LAB_107865f90:
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar9 = 0;
                if (uVar7 != 0) {
                  uVar9 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar9 * uVar7;
              }
              if (uVar11 != uVar5) {
                *(long **)(lVar10 + uVar11 * 8) = plVar14;
                lVar12 = *plVar8;
              }
            }
            else {
              uVar11 = plVar14[1];
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar13 = 0;
                if (uVar7 != 0) {
                  uVar13 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar13 * uVar7;
              }
              if (uVar11 != uVar5) goto LAB_107865f4c;
LAB_107865f88:
              if (lVar12 != 0) {
                uVar11 = *(ulong *)(lVar12 + 8);
                goto LAB_107865f90;
              }
            }
            *plVar14 = lVar12;
            *plVar8 = 0;
            *(long *)(param_1 + 200) = lVar4 + -1;
            uStack_28 = 1;
            uStack_27 = 0;
            uStack_23 = 0;
            plStack_38 = plVar8;
            func_0x000107868ce8(&plStack_38);
            goto LAB_107865fec;
          }
        }
        if ((uVar7 & uVar9) == 0) {
          uVar13 = uVar13 & uVar9;
        }
        else if (uVar7 <= uVar13) {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = uVar13 / uVar7;
          }
          uVar13 = uVar13 - uVar2 * uVar7;
        }
      } while (uVar13 == uVar11);
    }
  }
LAB_107865fec:
  func_0x000107279ee0(&lStack_48);
  return;
}



/* Entry: 1078668e8; end: 1078669af;  */

/* WARNING: Possible PIC construction at 0x000107867008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x00010786700c) */
/* WARNING: Removing unreachable block (ram,0x00010786704c) */
/* WARNING: Removing unreachable block (ram,0x000107867060) */
/* WARNING: Removing unreachable block (ram,0x00010786706c) */
/* WARNING: Removing unreachable block (ram,0x00010786707c) */
/* WARNING: Removing unreachable block (ram,0x0001078670a8) */
/* WARNING: Removing unreachable block (ram,0x0001078670ac) */
/* WARNING: Removing unreachable block (ram,0x0001078670b4) */
/* WARNING: Removing unreachable block (ram,0x000107867038) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined1 * FUN_1078668e8(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 in_ZR;
  undefined4 uVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_b18 [24];
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 ***pppuStack_af0;
  undefined *puStack_ae8;
  long lStack_ae0;
  long lStack_ad8;
  undefined1 auStack_ad0 [24];
  undefined1 auStack_ab8 [72];
  undefined4 uStack_a70;
  undefined1 auStack_a68 [72];
  long lStack_a20;
  long lStack_a18;
  undefined8 uStack_a10;
  undefined1 *puStack_a08;
  undefined8 ***pppuStack_a00;
  undefined *puStack_9f8;
  long lStack_9f0;
  long lStack_9e8;
  long alStack_9da [8];
  undefined1 auStack_998 [72];
  undefined4 uStack_950;
  long lStack_900;
  long lStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 ***pppuStack_8e0;
  undefined *puStack_8d8;
  undefined1 auStack_8c8 [16];
  undefined8 uStack_8b8;
  undefined4 uStack_870;
  long lStack_820;
  long lStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 ***pppuStack_800;
  undefined *puStack_7f8;
  undefined1 auStack_7e8 [16];
  undefined4 uStack_7d8;
  undefined4 uStack_790;
  long lStack_740;
  long lStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 ***pppuStack_720;
  code *pcStack_718;
  undefined1 auStack_708 [16];
  long lStack_6f8;
  undefined4 uStack_6b0;
  long lStack_660;
  long lStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 ***pppuStack_640;
  undefined *puStack_638;
  undefined1 auStack_628 [16];
  long lStack_618;
  undefined4 uStack_5d0;
  long lStack_580;
  ulong uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 ***pppuStack_560;
  undefined *puStack_558;
  undefined1 auStack_548 [16];
  undefined4 uStack_538;
  undefined4 uStack_4f0;
  long lStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 ***pppuStack_480;
  undefined *puStack_478;
  undefined1 auStack_468 [16];
  undefined4 uStack_458;
  undefined4 uStack_410;
  long lStack_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined *puStack_398;
  undefined1 auStack_388 [16];
  ushort uStack_378;
  undefined4 uStack_330;
  long lStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 ***pppuStack_2c0;
  undefined *puStack_2b8;
  undefined1 auStack_2a8 [16];
  ushort uStack_298;
  undefined4 uStack_250;
  long lStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1c8 [16];
  undefined1 uStack_1b8;
  undefined4 uStack_170;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_e8 [16];
  byte bStack_d8;
  undefined4 uStack_90;
  
  func_0x000107868e88();
  func_0x0001078693dc(*param_2);
  plVar7 = extraout_x8_00;
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
      plVar7 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  lVar11 = *plVar7;
  uVar1 = *(undefined8 *)(unaff_x21 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x21 + 0xb8);
  func_0x0001078692b0();
  bVar3 = *(byte *)(unaff_x21 + 0xa8);
  uVar8 = (ulong)bVar3;
  func_0x00010786933c();
  uStack_90 = 1;
  bStack_d8 = bVar3;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(lVar11 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar6 = auStack_e8;
  func_0x000107867420(puVar6);
  func_0x000107868d90(extraout_x8);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x000107868f1c();
  func_0x0001078690e4();
  puVar6 = auStack_e8;
  func_0x000107867420();
  func_0x00010786906c();
  puStack_f8 = &DAT_1078669b0;
  lStack_120 = lVar11;
  uStack_118 = uVar8;
  uStack_110 = uVar2;
  uStack_108 = uVar1;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x000107868d78();
  func_0x000107869368();
  uStack_1b8 = SUB81(puVar6,0);
  if (extraout_x9_00 != 0) {
    do {
      func_0x000107868ef4();
      uStack_1b8 = SUB81(puVar6,0);
    } while (extraout_w11_00 != 0);
  }
  func_0x0001078693e8();
  func_0x00010740f2f8();
  uStack_170 = 2;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(uVar8 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar6 = auStack_1c8;
  func_0x00010740f32c(puVar6);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    func_0x00010740f32c(auStack_1c8);
    func_0x00010786906c();
    puStack_1d8 = &DAT_107866a44;
    lStack_200 = lVar11;
    uStack_1f8 = uVar8;
    uStack_1f0 = uVar2;
    uStack_1e8 = uVar1;
    ppuStack_1e0 = &puStack_100;
    func_0x000107868d78();
    func_0x0001078693dc();
    if (extraout_x9_01 != 0) {
      do {
        func_0x000107868ef4();
      } while (extraout_w11_01 != 0);
    }
    func_0x000107868fa4();
    func_0x0001078692b0();
    uVar4 = *(ushort *)(uVar8 + 0xa8);
    func_0x00010786933c();
    uStack_250 = 3;
    uStack_298 = uVar4;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(lVar11 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar6 = auStack_2a8;
    func_0x000107867444(puVar6);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868f1c();
      func_0x0001078690e4();
      func_0x000107867444(auStack_2a8);
      func_0x00010786906c();
      puStack_2b8 = &DAT_107866ae0;
      lStack_2e0 = lVar11;
      uStack_2d8 = (ulong)uVar4;
      uStack_2d0 = uVar2;
      uStack_2c8 = uVar1;
      pppuStack_2c0 = &ppuStack_1e0;
      func_0x000107868d78();
      func_0x0001078693dc();
      if (extraout_x9_02 != 0) {
        do {
          func_0x000107868ef4();
        } while (extraout_w11_02 != 0);
      }
      func_0x000107868fa4();
      func_0x0001078692b0();
      uVar4 = *(ushort *)((ulong)uVar4 + 0xa8);
      uVar8 = (ulong)uVar4;
      func_0x00010786933c();
      uStack_330 = 4;
      uStack_378 = uVar4;
      func_0x000107868f10();
      func_0x000107868e1c(*(undefined8 *)(lVar11 + 0x18));
      func_0x0001078690ec();
      func_0x0001078690e4();
      puVar6 = auStack_388;
      func_0x000107867468(puVar6);
      func_0x000107868d60();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107868f1c();
        func_0x0001078690e4();
        puVar6 = auStack_388;
        func_0x000107867468();
        func_0x00010786906c();
        puStack_398 = &DAT_107866b7c;
        lStack_3c0 = lVar11;
        uStack_3b8 = uVar8;
        uStack_3b0 = uVar2;
        uStack_3a8 = uVar1;
        pppuStack_3a0 = &pppuStack_2c0;
        func_0x000107868d78();
        func_0x000107869368();
        uVar5 = SUB84(puVar6,0);
        if (extraout_x9_03 != 0) {
          do {
            func_0x000107868ef4();
            uVar5 = SUB84(puVar6,0);
          } while (extraout_w11_03 != 0);
        }
        func_0x0001078693e8();
        func_0x0001072adc24();
        uStack_410 = 5;
        uStack_458 = uVar5;
        func_0x000107868f10();
        func_0x000107868e1c(*(undefined8 *)(uVar8 + 0x18));
        func_0x0001078690ec();
        func_0x0001078690e4();
        puVar6 = auStack_468;
        func_0x000107289dd4(puVar6);
        func_0x000107868d60();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107868f1c();
          func_0x0001078690e4();
          puVar6 = auStack_468;
          func_0x000107289dd4();
          func_0x00010786906c();
          puStack_478 = &DAT_107866c10;
          lStack_4a0 = lVar11;
          uStack_498 = uVar8;
          uStack_490 = uVar2;
          uStack_488 = uVar1;
          pppuStack_480 = &pppuStack_3a0;
          func_0x000107868d78();
          func_0x000107869368();
          uVar5 = SUB84(puVar6,0);
          if (extraout_x9_04 != 0) {
            do {
              func_0x000107868ef4();
              uVar5 = SUB84(puVar6,0);
            } while (extraout_w11_04 != 0);
          }
          func_0x0001078693e8();
          func_0x0001072cd320();
          uStack_4f0 = 6;
          uStack_538 = uVar5;
          func_0x000107868f10();
          func_0x000107868e1c(*(undefined8 *)(uVar8 + 0x18));
          func_0x0001078690ec();
          func_0x0001078690e4();
          puVar6 = auStack_548;
          func_0x000107289cc8(puVar6);
          func_0x000107868d60();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000107868f1c();
            func_0x0001078690e4();
            func_0x000107289cc8(auStack_548);
            func_0x00010786906c();
            puStack_558 = &DAT_107866ca4;
            lStack_580 = lVar11;
            uStack_578 = uVar8;
            uStack_570 = uVar2;
            uStack_568 = uVar1;
            pppuStack_560 = &pppuStack_480;
            func_0x000107868d78();
            func_0x0001078693dc();
            if (extraout_x9_05 != 0) {
              do {
                func_0x000107868ef4();
              } while (extraout_w11_05 != 0);
            }
            func_0x000107868fa4();
            func_0x0001078692b0();
            lVar9 = *(long *)(uVar8 + 0xa8);
            func_0x00010786933c();
            uStack_5d0 = 7;
            lStack_618 = lVar9;
            func_0x000107868f10();
            func_0x000107868e1c(*(undefined8 *)(lVar11 + 0x18));
            func_0x0001078690ec();
            func_0x0001078690e4();
            puVar6 = auStack_628;
            func_0x00010786748c(puVar6);
            func_0x000107868d60();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000107868f1c();
              func_0x0001078690e4();
              func_0x00010786748c(auStack_628);
              func_0x00010786906c();
              puStack_638 = &DAT_107866d40;
              lStack_660 = lVar11;
              lStack_658 = lVar9;
              uStack_650 = uVar2;
              uStack_648 = uVar1;
              pppuStack_640 = &pppuStack_560;
              func_0x000107868d78();
              func_0x0001078693dc();
              if (extraout_x9_06 != 0) {
                do {
                  func_0x000107868ef4();
                } while (extraout_w11_06 != 0);
              }
              func_0x000107868fa4();
              func_0x0001078692b0();
              lVar9 = *(long *)(lVar9 + 0xa8);
              func_0x00010786933c();
              uStack_6b0 = 8;
              lStack_6f8 = lVar9;
              func_0x000107868f10();
              func_0x000107868e1c(*(undefined8 *)(lVar11 + 0x18));
              func_0x0001078690ec();
              func_0x0001078690e4();
              puVar6 = auStack_708;
              func_0x0001078674b0(puVar6);
              func_0x000107868d60();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x000107868f1c();
                func_0x0001078690e4();
                func_0x0001078674b0(auStack_708);
                func_0x00010786906c();
                pcStack_718 = FUN_107866ddc;
                lStack_740 = lVar11;
                lStack_738 = lVar9;
                uStack_730 = uVar2;
                uStack_728 = uVar1;
                pppuStack_720 = &pppuStack_640;
                func_0x000107868d78();
                func_0x000107869368();
                if (extraout_x9_07 != 0) {
                  do {
                    func_0x000107868ef4();
                  } while (extraout_w11_07 != 0);
                }
                func_0x0001078693e8();
                func_0x00010750833c();
                uStack_7d8 = (undefined4)param_1;
                uStack_790 = 9;
                func_0x000107868f10();
                func_0x000107868e1c(*(undefined8 *)(lVar9 + 0x18));
                func_0x0001078690ec();
                func_0x0001078690e4();
                puVar6 = auStack_7e8;
                func_0x000107289e5c(puVar6);
                func_0x000107868d60();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x000107868f1c();
                  func_0x0001078690e4();
                  func_0x000107289e5c(auStack_7e8);
                  func_0x00010786906c();
                  puStack_7f8 = &DAT_107866e70;
                  lStack_820 = lVar11;
                  lStack_818 = lVar9;
                  uStack_810 = uVar2;
                  uStack_808 = uVar1;
                  pppuStack_800 = &pppuStack_720;
                  func_0x000107868d78();
                  func_0x000107869368();
                  if (extraout_x9_08 != 0) {
                    do {
                      func_0x000107868ef4();
                    } while (extraout_w11_08 != 0);
                  }
                  func_0x0001078693e8();
                  func_0x00010740f294();
                  uStack_870 = 10;
                  uStack_8b8 = param_1;
                  func_0x000107868f10();
                  func_0x000107868e1c(*(undefined8 *)(lVar9 + 0x18));
                  func_0x0001078690ec();
                  func_0x0001078690e4();
                  puVar6 = auStack_8c8;
                  func_0x00010740f2d0(puVar6);
                  func_0x000107868d60();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x000107868f1c();
                    func_0x0001078690e4();
                    func_0x00010740f2d0(auStack_8c8);
                    func_0x00010786906c();
                    puStack_8d8 = &DAT_107866f04;
                    lStack_900 = lVar11;
                    lStack_8f8 = lVar9;
                    uStack_8f0 = uVar2;
                    uStack_8e8 = uVar1;
                    pppuStack_8e0 = &pppuStack_800;
                    func_0x000107868d78();
                    lVar9 = *param_3;
                    lStack_9e8 = param_3[1];
                    plVar7 = extraout_x8_02;
                    lStack_9f0 = lVar9;
                    if (lStack_9e8 != 0) {
                      do {
                        func_0x000107868ef4();
                        plVar7 = extraout_x8_03;
                      } while (extraout_w11_09 != 0);
                    }
                    lVar10 = *plVar7;
                    uVar1 = *(undefined8 *)(lVar9 + 0xf8);
                    func_0x00010785f084(alStack_9da);
                    plVar7 = alStack_9da;
                    func_0x0001078692c8(auStack_998);
                    uStack_950 = 0xb;
                    func_0x00010786954c();
                    puVar6 = *(undefined1 **)(lVar10 + 0x18);
                    func_0x000107868ecc();
                    func_0x000107869290();
                    func_0x0001078693cc();
                    func_0x000107869424();
                    func_0x000107868d60();
                    if ((bool)in_ZR) {
                      return puVar6;
                    }
                    ___stack_chk_fail();
                    func_0x000107869290();
                    func_0x0001078693cc();
                    func_0x000107869424();
                    func_0x00010786906c();
                    puStack_9f8 = &DAT_107866fac;
                    lStack_a20 = lVar11;
                    lStack_a18 = lVar10;
                    uStack_a10 = uVar1;
                    puStack_a08 = puVar6;
                    pppuStack_a00 = &pppuStack_8e0;
                    func_0x000107868d78();
                    lVar11 = *plVar7;
                    lStack_ad8 = plVar7[1];
                    lStack_ae0 = lVar11;
                    if (lStack_ad8 != 0) {
                      do {
                        func_0x000107868ef4();
                      } while (extraout_w11_10 != 0);
                    }
                    uVar1 = *(undefined8 *)(lVar11 + 0xc0);
                    uVar2 = *(undefined8 *)(lVar11 + 200);
                    func_0x000107328418(auStack_ad0);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                              (auStack_ab8,auStack_ad0);
                    uStack_a70 = 0xc;
                    puVar6 = auStack_a68;
                    puStack_ae8 = &UNK_10786700c;
                    uStack_b00 = uVar2;
                    uStack_af8 = uVar1;
                    pppuStack_af0 = &pppuStack_a00;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                              (auStack_b18);
                    func_0x000107268798(puVar6,auStack_b18);
                    func_0x0001078693fc();
                    return puVar6;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return puVar6;
}



/* Entry: 107866ddc; end: 107866e6f;  */

/* WARNING: Possible PIC construction at 0x000107867008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x00010786700c) */
/* WARNING: Removing unreachable block (ram,0x00010786704c) */
/* WARNING: Removing unreachable block (ram,0x000107867060) */
/* WARNING: Removing unreachable block (ram,0x00010786706c) */
/* WARNING: Removing unreachable block (ram,0x00010786707c) */
/* WARNING: Removing unreachable block (ram,0x0001078670a8) */
/* WARNING: Removing unreachable block (ram,0x0001078670ac) */
/* WARNING: Removing unreachable block (ram,0x0001078670b4) */
/* WARNING: Removing unreachable block (ram,0x000107867038) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined1 * FUN_107866ddc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_408 [24];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 ***pppuStack_3e0;
  undefined *puStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [72];
  undefined4 uStack_360;
  undefined1 auStack_358 [72];
  undefined1 ***pppuStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long alStack_2ca [8];
  undefined1 auStack_288 [72];
  undefined4 uStack_240;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined4 uStack_160;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  undefined4 uStack_80;
  
  func_0x000107868d78();
  func_0x000107869368();
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11 != 0);
  }
  func_0x0001078693e8();
  func_0x00010750833c();
  uStack_c8 = (undefined4)param_1;
  uStack_80 = 9;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(unaff_x21 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar3 = auStack_d8;
  func_0x000107289e5c(puVar3);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    func_0x000107289e5c(auStack_d8);
    func_0x00010786906c();
    puStack_e8 = &DAT_107866e70;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x000107868d78();
    func_0x000107869368();
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107868ef4();
      } while (extraout_w11_00 != 0);
    }
    func_0x0001078693e8();
    func_0x00010740f294();
    uStack_160 = 10;
    uStack_1a8 = param_1;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(unaff_x21 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar3 = auStack_1b8;
    func_0x00010740f2d0(puVar3);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868f1c();
      func_0x0001078690e4();
      func_0x00010740f2d0(auStack_1b8);
      func_0x00010786906c();
      puStack_1c8 = &DAT_107866f04;
      ppuStack_1d0 = &puStack_f0;
      func_0x000107868d78();
      uStack_2e0 = *param_3;
      lStack_2d8 = param_3[1];
      plVar4 = extraout_x8;
      if (lStack_2d8 != 0) {
        do {
          func_0x000107868ef4();
          plVar4 = extraout_x8_00;
        } while (extraout_w11_01 != 0);
      }
      lVar5 = *plVar4;
      func_0x00010785f084(alStack_2ca);
      plVar4 = alStack_2ca;
      func_0x0001078692c8(auStack_288);
      uStack_240 = 0xb;
      func_0x00010786954c();
      puVar3 = *(undefined1 **)(lVar5 + 0x18);
      func_0x000107868ecc();
      func_0x000107869290();
      func_0x0001078693cc();
      func_0x000107869424();
      func_0x000107868d60();
      if ((bool)in_ZR) {
        return puVar3;
      }
      ___stack_chk_fail();
      func_0x000107869290();
      func_0x0001078693cc();
      func_0x000107869424();
      func_0x00010786906c();
      puStack_2e8 = &DAT_107866fac;
      pppuStack_2f0 = &ppuStack_1d0;
      func_0x000107868d78();
      lVar5 = *plVar4;
      lStack_3c8 = plVar4[1];
      lStack_3d0 = lVar5;
      if (lStack_3c8 != 0) {
        do {
          func_0x000107868ef4();
        } while (extraout_w11_02 != 0);
      }
      uVar1 = *(undefined8 *)(lVar5 + 0xc0);
      uVar2 = *(undefined8 *)(lVar5 + 200);
      func_0x000107328418(auStack_3c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_3a8,auStack_3c0);
      uStack_360 = 0xc;
      puVar3 = auStack_358;
      puStack_3d8 = &UNK_10786700c;
      uStack_3f0 = uVar2;
      uStack_3e8 = uVar1;
      pppuStack_3e0 = &pppuStack_2f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_408);
      func_0x000107268798(puVar3,auStack_408);
      func_0x0001078693fc();
      return puVar3;
    }
  }
  return puVar3;
}



/* Entry: 107867540; end: 10786759b;  */

void FUN_107867540(void)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  
  func_0x000107869450();
  if (unaff_x20 != (long *)0x0) {
    plVar1 = (long *)unaff_x20[2];
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      func_0x000107865ffc(plVar1 + 4);
      __ZdlPv(plVar1);
      plVar1 = (long *)lVar2;
    }
    lVar2 = *unaff_x20;
    *unaff_x20 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    func_0x000107869334();
  }
  return;
}



/* Entry: 107867694; end: 1078676f3;  */

/* WARNING: Possible PIC construction at 0x0001078676b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078676b4) */
/* WARNING: Removing unreachable block (ram,0x0001078676dc) */
/* WARNING: Removing unreachable block (ram,0x0001078676f0) */
/* WARNING: Removing unreachable block (ram,0x0001078676d4) */
/* WARNING: Removing unreachable block (ram,0x000107868f6c) */

void FUN_107867694(void)

{
  func_0x000107868e58();
  func_0x0001078694bc();
  func_0x0001078694e0();
  func_0x000107867714();
  func_0x000107869480();
  return;
}



/* Entry: 1078677ac; end: 1078677d3;  */

void FUN_1078677ac(long param_1)

{
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001078692a4();
  *(undefined1 *)(param_1 + 0xa8) = *unaff_x19;
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[3];
  uVar2 = unaff_x20[2];
  *(undefined8 *)(param_1 + 0xb8) = unaff_x20[1];
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 200) = uVar3;
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  return;
}



/* Entry: 107867ce0; end: 107867cff;  */

void FUN_107867ce0(void)

{
  func_0x0001078694e0();
  func_0x000107867d00();
  func_0x000107869480();
  return;
}



/* Entry: 107867db4; end: 107867dcf;  */

void FUN_107867db4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e34d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107867ee0; end: 107867ee7;  */

void FUN_107867ee0(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 107868024; end: 107868037;  */

void FUN_107868024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078680d4; end: 107868133;  */

/* WARNING: Possible PIC construction at 0x0001078680f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078680f4) */
/* WARNING: Removing unreachable block (ram,0x00010786811c) */
/* WARNING: Removing unreachable block (ram,0x000107868130) */
/* WARNING: Removing unreachable block (ram,0x000107868114) */
/* WARNING: Removing unreachable block (ram,0x000107868f6c) */

void FUN_1078680d4(void)

{
  func_0x000107868e58();
  func_0x0001078694bc();
  func_0x0001078694e0();
  func_0x000107868154();
  func_0x000107869480();
  return;
}



/* Entry: 107868224; end: 10786823f;  */

void FUN_107868224(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e36b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107868358; end: 10786837f;  */

void FUN_107868358(long param_1)

{
  func_0x000104c3323c(param_1 + 0xc0);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 107868658; end: 1078686fb;  */

void FUN_107868658(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x10) == 5) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x10) == 6) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x10) == 10) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x10) == 0xb) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x10) == 0xd) {
    return;
  }
  func_0x00010563ab98();
  func_0x000107297b6c();
  return;
}



/* Entry: 1078688d0; end: 1078688db;  */

undefined ** FUN_1078688d0(void)

{
  return &PTR_DAT_1109e37c0;
}



/* Entry: 10786963c; end: 107869663;  */

undefined8 FUN_10786963c(undefined8 param_1)

{
  func_0x000107869664(param_1,0);
  return param_1;
}



/* Entry: 1078697d4; end: 10786981b;  */

void FUN_1078697d4(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010786d890();
  func_0x00010726acf0();
  func_0x000107278fec(auStack_30);
  func_0x00010786dbb0();
  func_0x00010726d358();
  func_0x00010726b264(auStack_30);
  func_0x00010786970c();
  func_0x00010786da84();
  return;
}



/* Entry: 107869c4c; end: 107869c67;  */

void FUN_107869c4c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010786aacc();
  param_1[2] = 0;
  return;
}



/* Entry: 107869fd8; end: 10786a073;  */

void FUN_107869fd8(long param_1)

{
  undefined8 unaff_x21;
  undefined1 uStack_48;
  
  func_0x00010786d8f4();
  func_0x000107869fd0();
  if (param_1 != 0) {
    func_0x000107869d14();
    func_0x00010786dc98();
    func_0x00010786dac4();
    func_0x00010786d954();
    if (uStack_48 == 1) {
      func_0x00010786dc98(unaff_x21);
      func_0x000107869bd0();
    }
    func_0x00010786dc98(unaff_x21);
    func_0x00010786dac4();
    func_0x00010786d954();
    if ((uStack_48 & 1) == 0) {
      func_0x00010786dd44();
      func_0x000107869f68();
    }
  }
  return;
}



/* Entry: 10786a318; end: 10786a33f;  */

undefined8 * FUN_10786a318(long param_1)

{
  undefined8 *puVar1;
  
  func_0x00010786bdc4();
  if (param_1 != 0) {
    return (undefined8 *)(param_1 + 0x48);
  }
  puVar1 = (undefined8 *)&UNK_10f639994;
  func_0x000104c03f28();
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x00010786ad08();
  func_0x00010786970c();
  func_0x00010786da84();
  return puVar1;
}



/* Entry: 10786a604; end: 10786a647;  */

void FUN_10786a604(long param_1)

{
  func_0x00010786a978();
  if (param_1 != 0) {
    func_0x00010786a954();
  }
  return;
}



/* Entry: 10786a8ec; end: 10786a953;  */

bool FUN_10786a8ec(long param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  
  func_0x00010786a8e4();
  bVar1 = false;
  if (param_1 != 0) {
    plVar3 = (long *)(param_2 + 0x38);
    if (*(long *)(*plVar3 + 0x18) != 0) {
      func_0x00010786a954();
      if (plVar3 == (long *)0x0) {
        return false;
      }
      if (*(long *)(*(long *)(param_3 + 0x38) + 0x18) != 0) {
        lVar2 = *(long *)(param_3 + 0x38);
        func_0x0001072a0454(lVar2,param_4);
        return lVar2 != 0;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10786aa5c; end: 10786aa73;  */

void FUN_10786aa5c(long param_1)

{
  long *plVar1;
  long unaff_x19;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010786dd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x00010786ddcc();
  func_0x00010786dcf4();
  plVar1[9] = *(long *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 10786ac1c; end: 10786ac4b;  */

void FUN_10786ac1c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109e37e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10786ad28; end: 10786adab;  */

void FUN_10786ad28(void)

{
  int iVar1;
  long extraout_x8;
  int extraout_w10;
  
  if ((bRam00000001131adae0 & 1) == 0) {
    iVar1 = 0x131adae0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010786adac(0x1131adad0);
      ___cxa_guard_release(0x1131adae0);
    }
  }
  func_0x00010786dce4();
  if (extraout_x8 != 0) {
    do {
      func_0x00010786da24();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10786aea0; end: 10786aeef;  */

undefined8 * FUN_10786aea0(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010786b1d8(lVar2);
      }
      lVar2 = lVar2 + 0x48;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010786ddc0();
  }
  return param_1;
}



/* Entry: 10786b068; end: 10786b06b;  */

void FUN_10786b068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3880;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10786b1bc; end: 10786b243;  */

void FUN_10786b1bc(void)

{
  func_0x00010786ddcc();
  func_0x00010786dcf4();
  return;
}



/* Entry: 10786b3dc; end: 10786b48f;  */

long FUN_10786b3dc(void)

{
  int iVar1;
  ulong extraout_x8;
  long *unaff_x19;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x26;
  ulong unaff_x27;
  ulong uVar2;
  
  func_0x00010786d74c();
  while( true ) {
    func_0x00010786d7f4();
    while (unaff_x27 != 0) {
      uVar2 = (unaff_x27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x27 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = unaff_x26 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & unaff_x22;
      iVar1 = (int)&stack0xffffffffffffff70;
      func_0x00010726d570(&stack0xffffffffffffff70,unaff_x24 + uVar2 * 0x50);
      if (iVar1 != 0) {
        return *unaff_x19 + uVar2;
      }
      func_0x00010786de98();
    }
    func_0x00010786d85c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010786de8c();
  }
  return 0;
}



/* Entry: 10786b5b8; end: 10786b5fb;  */

void FUN_10786b5b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  func_0x0001073e0398();
  if (1 < (long)puVar1) {
    func_0x00010786b5fc(auStack_30,*param_1);
    func_0x00010786dbb0();
    func_0x00010750fc94();
    func_0x0001073e03d4(auStack_30);
  }
  return;
}



/* Entry: 10786badc; end: 10786baf3;  */

void FUN_10786badc(long *param_1,long param_2)

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



/* Entry: 10786be84; end: 10786befb;  */

long FUN_10786be84(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010786dd98(uVar1);
  return param_1;
}



/* Entry: 10786c2bc; end: 10786c2c3;  */

void FUN_10786c2bc(void)

{
  return;
}



/* Entry: 10786c3d4; end: 10786c3e7;  */

undefined ** FUN_10786c3d4(void)

{
  return &PTR_DAT_1109e3a40;
}



/* Entry: 10786c57c; end: 10786c5a3;  */

void FUN_10786c57c(undefined8 param_1)

{
  func_0x00010786db18();
  func_0x00010786d924(param_1,&PTR_DAT_1109e3b50);
  func_0x00010786d80c();
  return;
}



/* Entry: 10786c82c; end: 10786c853;  */

void FUN_10786c82c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010786daac();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109e3b70;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10786c940; end: 10786c983;  */

void FUN_10786c940(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  func_0x00010745f900();
  if (1 < (long)puVar1) {
    func_0x00010786c984(auStack_30,*param_1);
    func_0x00010786dbb0();
    func_0x00010749e85c();
    func_0x00010745f93c(auStack_30);
  }
  return;
}



/* Entry: 10786cc3c; end: 10786cc5f;  */

long FUN_10786cc3c(long param_1)

{
  func_0x000104c318bc();
  func_0x00010786ded8();
  func_0x00010786b120(param_1 + 0x38);
  func_0x00010786dcb8();
  return param_1;
}



/* Entry: 10786ce88; end: 10786cebf;  */

void FUN_10786ce88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != param_2) {
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    func_0x00010786cec0(param_1,&uStack_20);
    func_0x00010786ddf4();
  }
  return;
}



/* Entry: 10786cfd0; end: 10786d02f;  */

/* WARNING: Possible PIC construction at 0x00010786cff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786cffc) */
/* WARNING: Removing unreachable block (ram,0x00010786d018) */
/* WARNING: Removing unreachable block (ram,0x00010786d02c) */
/* WARNING: Removing unreachable block (ram,0x00010786d010) */
/* WARNING: Removing unreachable block (ram,0x00010786d7d0) */

undefined8 * FUN_10786cfd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  
  func_0x00010786d71c();
  func_0x00010786dbbc();
  func_0x00010786b028();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1109e3880;
  func_0x00010786d068(puStack_30 + 3,param_2);
  return puStack_30;
}



/* Entry: 10786d280; end: 10786d2bb;  */

void FUN_10786d280(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010786de40();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10786d4a4; end: 10786d4bf;  */

void FUN_10786d4a4(void)

{
  func_0x00010786d840();
  func_0x00010786d4c0();
  return;
}



/* Entry: 10786d6e8; end: 10786df03;  */

void FUN_10786d6e8(void)

{
  return;
}



/* Entry: 10786e7b8; end: 10786e7d7;  */

long * FUN_10786e7b8(long param_1)

{
  long *plVar1;
  long in_stack_00000000;
  long in_stack_00000008;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010786e7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  in_stack_00000000 = in_stack_00000000 + 1;
  in_stack_00000008 = in_stack_00000008 + 0x78;
  func_0x000104c2ddb8();
  return &stack0x00000000;
}



/* Entry: 10786eb68; end: 10786eb97;  */

bool FUN_10786eb68(double *param_1,double *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double unaff_d8;
  undefined1 auStack_50 [16];
  
  if ((*param_1 <= *param_2) && (dVar4 = param_1[2], *param_2 <= dVar4)) {
    dVar3 = param_2[1];
    if (param_1[1] <= dVar3) {
      if (dVar3 <= param_1[3] || param_3 == 0) {
        return dVar3 <= param_1[3];
      }
    }
    else if (param_3 == 0) {
      return false;
    }
    func_0x000107259180(param_1);
    func_0x00010786ed68();
    func_0x00010786ed54(0,auStack_50);
    func_0x000107259180(auStack_50);
    func_0x00010786ec7c();
    if ((int)param_1 == 0) {
      bVar1 = unaff_d8 <= dVar3 && dVar3 <= dVar4;
    }
    else {
      bVar1 = false;
      bVar2 = true;
      if (-180.0 <= dVar3) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar3) && !NAN(dVar4)) {
          bVar1 = dVar3 == dVar4;
          bVar2 = dVar4 <= dVar3;
        }
      }
      if (!bVar2 || bVar1) {
        bVar1 = true;
      }
      else {
        bVar1 = dVar3 <= 180.0 && unaff_d8 <= dVar3;
      }
    }
    return bVar1;
  }
  return false;
}



/* Entry: 10786ef04; end: 10786f597;  */

void FUN_10786ef04(undefined8 param_1,undefined8 param_2,undefined4 *param_3,uint *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long extraout_x8_00;
  undefined8 uVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uStack_c8;
  ulong auStack_c0 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  
  puVar7 = param_3;
  func_0x0001078712ac();
  uStack_58 = extraout_x8;
  if (*(short *)((long)param_4 + 0x16) == 3) {
    puVar13 = (undefined4 *)(*(long *)(param_4 + 2) + (ulong)*param_4 * 0x30);
    func_0x00010787137c();
    if (puVar13 == puVar7) {
      func_0x000107871318();
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_10786f410;
    }
    puVar3 = puVar7 + 6;
    func_0x00010787138c();
    if ((int)puVar7 != 0) {
      func_0x00010787137c();
      if (puVar13 == puVar7) {
        func_0x000107871318();
        __ZNSt13runtime_errorC1EPKc();
      }
      else {
        uVar5 = *(short *)((long)puVar7 + 0x2e) == 4;
        if ((bool)uVar5) {
          uStack_c8 = 0;
          auStack_c0[0] = 0;
          if (puVar7[6] == 0) {
            uVar9 = 0;
          }
          else {
            func_0x000107870cac(&uStack_b0,puVar7[6],0,auStack_c0);
            func_0x0001078714fc();
            func_0x000107870cf4(&uStack_b0);
            uVar9 = (ulong)(uint)puVar7[6];
          }
          lVar11 = *(long *)(puVar7 + 8);
          lVar12 = uVar9 * 0x18;
          lVar2 = uVar9 * 3;
          while (lVar2 != 0) {
            FUN_10786ef04(&uStack_80,lVar11);
            uVar5 = uStack_c8 == auStack_c0[0];
            if (uStack_c8 < auStack_c0[0]) {
              func_0x00010726928c(uStack_c8,&uStack_80);
              uStack_c8 = uStack_c8 + 0x20;
            }
            else {
              uVar9 = ((long)uStack_c8 >> 5) + 1;
              if (uVar9 >> 0x3b != 0) {
                func_0x000107269a58();
                goto LAB_10786f484;
              }
              uVar1 = (long)auStack_c0[0] >> 4;
              if ((ulong)((long)auStack_c0[0] >> 4) <= uVar9) {
                uVar1 = uVar9;
              }
              uVar5 = auStack_c0[0] == 0x7fffffffffffffe0;
              if (0x7fffffffffffffdf < auStack_c0[0]) {
                uVar1 = 0x7ffffffffffffff;
              }
              func_0x000107870cac(&uStack_b0,uVar1,(long)uStack_c8 >> 5,auStack_c0);
              func_0x00010726928c(lStack_a0,&uStack_80);
              lStack_a0 = lStack_a0 + 0x20;
              func_0x0001078714fc();
              func_0x000107870cf4(&uStack_b0);
            }
            func_0x000104c3365c(&uStack_80);
            lVar11 = lVar11 + 0x18;
            lVar12 = lVar12 + -0x18;
            lVar2 = lVar12;
          }
          *param_3 = 0;
          *(ulong *)(param_3 + 4) = uStack_c8;
          *(undefined8 *)(param_3 + 2) = 0;
          *(ulong *)(param_3 + 6) = auStack_c0[0];
          func_0x0001078714a8();
          func_0x000104c31e7c();
          goto LAB_10786f1a4;
        }
        func_0x000107871318();
        __ZNSt13runtime_errorC1EPKc();
      }
      goto LAB_10786f410;
    }
    func_0x00010787137c();
    if (puVar13 == puVar7) {
      func_0x000107871318();
      func_0x000107871508();
      func_0x00010787153c();
      func_0x0001078714f0();
      func_0x000107871258();
      goto LAB_10786f484;
    }
    uVar5 = *(short *)((long)puVar7 + 0x2e) == 4;
    if (!(bool)uVar5) {
      func_0x000107871318();
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_10786f410;
    }
    puVar13 = puVar7;
    func_0x00010787138c();
    iVar6 = (int)puVar13;
    if (iVar6 != 0) {
      func_0x00010786ee68(puVar7 + 6);
      *param_3 = 6;
      *(undefined8 *)(param_3 + 2) = param_1;
      *(undefined8 *)(param_3 + 4) = param_2;
LAB_10786f1a4:
      func_0x000107871270(uStack_58);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      goto LAB_10786f364;
    }
    func_0x00010787138c();
    if (iVar6 == 0) {
      func_0x00010787138c();
      if (iVar6 != 0) {
        func_0x00010786ee24(puVar7[6]);
        func_0x00010786f614(&uStack_b0,puVar7 + 6);
        uVar10 = 5;
        goto LAB_10786f19c;
      }
      func_0x00010787138c();
      if (iVar6 == 0) {
        func_0x00010787138c();
        if (iVar6 == 0) {
          func_0x00010787138c();
          if (iVar6 == 0) {
            func_0x000107871318();
            func_0x000107871508();
            func_0x00010787153c();
            func_0x0001078714f0();
            func_0x000107871258();
            goto LAB_10786f484;
          }
          func_0x0001078714c8();
          for (lVar11 = extraout_x8_02 << 3; lVar11 != 0; lVar11 = lVar11 + -0x18) {
            func_0x00010786ed74(puVar3);
            puVar3 = puVar3 + 6;
          }
          func_0x000107871548();
          if (!(bool)uVar5) {
            func_0x000107871318();
            func_0x0001078712e0();
            func_0x000107871258();
            goto LAB_10786f484;
          }
          if (puVar7[6] == 0) {
            uVar8 = 0;
          }
          else {
            func_0x000104c325c0(&uStack_b0,puVar7[6],0,auStack_70);
            func_0x000107871574();
            func_0x000104c32590();
            func_0x000104c32718(&uStack_b0);
            uVar8 = puVar7[6];
          }
          uVar10 = *(undefined8 *)(puVar7 + 8);
          func_0x00010787158c(uVar8);
          while (puVar3 != (undefined4 *)0x0) {
            func_0x00010786f6b8(&uStack_b0,uVar10);
            func_0x000107871574();
            func_0x000104c324d4();
            func_0x000104c31ca8(&uStack_b0);
            func_0x0001078714d8();
          }
          func_0x0001078713e0(1);
          func_0x000104c31df0();
        }
        else {
          func_0x00010786ed74(puVar7 + 6);
          func_0x00010786f6b8(&uStack_b0,puVar7 + 6);
          func_0x0001078713bc(4);
          func_0x000104c31ca8();
        }
      }
      else {
        func_0x0001078714c8();
        for (lVar11 = extraout_x8_01 << 3; lVar11 != 0; lVar11 = lVar11 + -0x18) {
          func_0x00010786ee24(*puVar3);
          puVar3 = puVar3 + 6;
        }
        func_0x000107871548();
        if (!(bool)uVar5) {
          func_0x000107871318();
          func_0x0001078712e0();
          func_0x000107871258();
          goto LAB_10786f484;
        }
        if (puVar7[6] == 0) {
          uVar8 = 0;
        }
        else {
          func_0x000104c32068(&uStack_b0,puVar7[6],0,auStack_70);
          func_0x000107871574();
          func_0x000104c32038();
          func_0x000104c321bc(&uStack_b0);
          uVar8 = puVar7[6];
        }
        uVar10 = *(undefined8 *)(puVar7 + 8);
        func_0x00010787158c(uVar8);
        while (puVar3 != (undefined4 *)0x0) {
          func_0x00010786f614(&uStack_b0,uVar10);
          func_0x000107871574();
          func_0x000104c31f7c();
          func_0x000107871434();
          func_0x0001078714d8();
        }
        func_0x0001078713e0(2);
        func_0x000104c31d58();
      }
      goto LAB_10786f1a4;
    }
    uStack_b0 = 0;
    uStack_a8 = 0;
    lStack_a0 = 0;
    uVar5 = *(short *)((long)puVar7 + 0x2e) == 4;
    if ((bool)uVar5) {
      func_0x00010740ed44(&uStack_b0,puVar7[6]);
      func_0x0001078714c8();
      for (lVar11 = extraout_x8_00 << 3; lVar11 != 0; lVar11 = lVar11 + -0x18) {
        func_0x00010786ee68(puVar3);
        uStack_80 = param_1;
        uStack_78 = param_2;
        func_0x000104c31a04(&uStack_b0,&uStack_80);
        puVar3 = puVar3 + 6;
      }
      uVar10 = 3;
LAB_10786f19c:
      func_0x0001078713bc(uVar10);
      func_0x000104c31c5c();
      goto LAB_10786f1a4;
    }
  }
  else {
    if (*(short *)((long)param_4 + 0x16) == 0) {
      *param_3 = 7;
      uVar5 = 0;
      goto LAB_10786f1a4;
    }
LAB_10786f364:
    func_0x000107871318();
    __ZNSt13runtime_errorC1EPKc();
LAB_10786f410:
    func_0x000107871258();
  }
  func_0x000107871318();
  func_0x0001078712e0();
  func_0x000107871258();
LAB_10786f484:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10786f488);
  (*pcVar4)();
}



/* Entry: 107870020; end: 107870167;  */

/* WARNING: Possible PIC construction at 0x000107870290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078705ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078706c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787058c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078706cc) */
/* WARNING: Removing unreachable block (ram,0x0001078706e4) */
/* WARNING: Removing unreachable block (ram,0x0001078706f4) */
/* WARNING: Removing unreachable block (ram,0x000107870708) */
/* WARNING: Removing unreachable block (ram,0x0001078706dc) */
/* WARNING: Removing unreachable block (ram,0x000107870684) */
/* WARNING: Removing unreachable block (ram,0x0001078705b0) */
/* WARNING: Removing unreachable block (ram,0x000107870434) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x000107870294) */
/* WARNING: Removing unreachable block (ram,0x0001078702b8) */
/* WARNING: Removing unreachable block (ram,0x0001078702a4) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */
/* WARNING: Removing unreachable block (ram,0x0001078702c4) */
/* WARNING: Removing unreachable block (ram,0x000107870300) */
/* WARNING: Removing unreachable block (ram,0x0001078702f4) */

int * FUN_107870020(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar4;
  undefined1 uVar5;
  int *piVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  int *extraout_x8;
  int *piVar14;
  undefined8 extraout_x8_00;
  int *piVar15;
  undefined8 *puVar16;
  int *extraout_x8_01;
  int *unaff_x21;
  int *unaff_x22;
  code *pcVar17;
  undefined *puVar18;
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [256];
  int aiStack_a0 [22];
  uint uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puVar3;
  
  puVar2 = auStack_1d0;
  puVar7 = &stack0xfffffffffffffff0;
  func_0x000107871298();
  piVar12 = (int *)0x400;
  func_0x000107326d6c(aiStack_a0,0,0x400,0);
  uVar5 = *(char *)((long)param_2 + 0x17) == '\0';
  piVar11 = *(int **)param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    piVar11 = param_2;
  }
  func_0x0001075222a8();
  if (uStack_48 != 0) {
    func_0x000105680760(auStack_1b8);
    puVar7 = auStack_1a8;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(puVar7,uStack_40);
    func_0x00010549023c();
    uVar8 = (ulong)uStack_48;
    func_0x00010774f238(uVar8);
    func_0x00010549023c(puVar7,uVar8);
    func_0x000107871318();
    func_0x000105491b64(auStack_1d0,auStack_1a0);
    func_0x000107871568();
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
    func_0x000107871284();
    func_0x0001078713b4();
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x107870114);
    (*pcVar17)();
  }
  func_0x00010786fe30(param_1,aiStack_a0);
  piVar6 = aiStack_a0;
  func_0x000107326ea8();
  func_0x000107871270(uStack_38);
  if ((bool)uVar5) {
    return piVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d0);
  if ((int)unaff_x21 != 0) {
    ___cxa_free_exception(param_1);
  }
  func_0x000105673d7c(auStack_1b8);
  piVar9 = aiStack_a0;
  func_0x000107326ea8();
  pcVar17 = (code *)&LAB_107870168;
  func_0x000107871338();
  piVar14 = extraout_x8;
code_r0x000107870168:
  do {
    *(int **)(puVar2 + -0x30) = unaff_x22;
    *(int **)(puVar2 + -0x28) = unaff_x21;
    *(int **)(puVar2 + -0x20) = piVar6;
    *(int **)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar7;
    *(code **)(puVar2 + -8) = pcVar17;
    func_0x000107871298();
    iVar1 = *piVar9;
    piVar14[2] = 0;
    piVar14[3] = 0;
    piVar14[4] = 0;
    piVar14[5] = 0;
    piVar14[0] = 0;
    piVar14[1] = 0;
    uVar5 = iVar1 == 7;
    piVar6 = piVar9;
    if (!(bool)uVar5) {
      piVar12 = piVar9;
      func_0x000107871364();
      *(undefined4 *)(puVar2 + -0x48) = 4;
      func_0x000107870ecc();
      *(int **)(puVar2 + -0x60) = piVar12;
      _strlen();
      *(int *)(puVar2 + -0x58) = (int)piVar12;
      piVar12 = (int *)(puVar2 + -0x60);
      func_0x0001078713a8();
      uVar5 = *piVar9 == 0;
      puVar18 = &UNK_10f4303a6;
      if (!(bool)uVar5) {
        puVar18 = &UNK_10f43041c;
      }
      *(int **)(puVar2 + -0x68) = piVar11;
      *(undefined **)(puVar2 + -0x60) = puVar18;
      uVar13 = 10;
      if (!(bool)uVar5) {
        uVar13 = 0xb;
      }
      *(undefined4 *)(puVar2 + -0x58) = uVar13;
      piVar11 = (int *)(puVar2 + -0x68);
      func_0x000107870f70(puVar2 + -0x50);
      func_0x0001078712cc();
      func_0x000107871354();
      unaff_x21 = piVar9;
    }
    func_0x000107871270(*(undefined8 *)(puVar2 + -0x38));
    if ((bool)uVar5) {
      return piVar6;
    }
    ___stack_chk_fail();
    piVar10 = piVar6;
    func_0x000107871354();
    func_0x000107871384();
    func_0x000107871338();
    *(int **)(puVar2 + -0x90) = piVar6;
    *(int **)(puVar2 + -0x88) = piVar14;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x78) = &UNK_107870244;
    puVar7 = puVar2 + -0x80;
    func_0x0001078712ac();
    *(undefined8 *)(puVar2 + -0x98) = extraout_x8_00;
    iVar1 = piVar12[2];
    *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)piVar12;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    *(undefined2 *)(puVar2 + -0x9a) = 0x405;
    *(undefined8 *)(puVar2 + -0xb0) = 0;
    *(int *)(puVar2 + -0xb0) = iVar1;
    *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)piVar11;
    *(int *)(puVar2 + -0xb8) = piVar11[2];
    piVar12 = (int *)(puVar2 + -0xb0);
    puVar18 = &UNK_107870294;
    puVar4 = puVar2 + -0xc0;
    param_1 = piVar14;
    while( true ) {
      puVar3 = puVar4 + -0x40;
      puVar2 = puVar4 + -0x40;
      piVar11 = (int *)(puVar4 + -0x40);
      *(int **)(puVar4 + -0x20) = piVar6;
      *(int **)(puVar4 + -0x18) = param_1;
      *(undefined1 **)(puVar4 + -0x10) = puVar7;
      *(undefined **)(puVar4 + -8) = puVar18;
      puVar7 = puVar4 + -0x10;
      func_0x0001078712ac();
      func_0x000107871404();
      func_0x000107870de8();
      func_0x0001078712ec();
      func_0x000107871270(*(undefined8 *)(puVar4 + -0x28));
      if ((bool)uVar5) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x0001078712ec();
      pcVar17 = FUN_10787075c;
      func_0x00010787135c();
      piVar9 = piVar10 + 2;
      piVar14 = extraout_x8_01;
      if (*piVar10 == 2) goto code_r0x000107870168;
      piVar15 = extraout_x8_01;
      if (*piVar10 == 1) goto code_r0x00010787030c;
      puVar3 = puVar4 + -0xb0;
      *(int **)(puVar4 + -0x70) = unaff_x22;
      *(int **)(puVar4 + -0x68) = unaff_x21;
      *(int **)(puVar4 + -0x60) = piVar6;
      *(int **)(puVar4 + -0x58) = param_1;
      *(undefined1 **)(puVar4 + -0x50) = puVar7;
      *(code **)(puVar4 + -0x48) = FUN_10787075c;
      puVar7 = puVar4 + -0x50;
      func_0x000107871298();
      extraout_x8_01[2] = 0;
      extraout_x8_01[3] = 0;
      extraout_x8_01[4] = 0;
      extraout_x8_01[5] = 0;
      extraout_x8_01[0] = 0;
      extraout_x8_01[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar4 + -0x88) = 4;
      *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305cd;
      *(undefined4 *)(puVar4 + -0xa0) = 0x11;
      func_0x0001078713a8();
      *(undefined8 *)(puVar4 + -0x88) = 0;
      *(undefined8 *)(puVar4 + -0x80) = 0;
      *(undefined8 *)(puVar4 + -0x90) = 0;
      *(undefined2 *)(puVar4 + -0x7a) = 4;
      puVar16 = *(undefined8 **)piVar9;
      piVar9 = (int *)*puVar16;
      unaff_x22 = (int *)puVar16[1];
      uVar5 = piVar9 == unaff_x22;
      param_1 = extraout_x8_01;
      unaff_x21 = piVar9;
      if (!(bool)uVar5) break;
      *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305df;
      *(undefined4 *)(puVar4 + -0xa0) = 8;
      piVar12 = (int *)(puVar4 + -0x90);
      puVar18 = &UNK_1078706cc;
      puVar4 = puVar4 + -0xb0;
      piVar10 = extraout_x8_01;
      piVar6 = piVar11;
    }
    piVar15 = (int *)(puVar4 + -0xa8);
    pcVar17 = (code *)&UNK_107870684;
    piVar6 = piVar11;
code_r0x00010787030c:
    puVar2 = puVar3 + -0x70;
    *(int **)(puVar3 + -0x30) = unaff_x22;
    *(int **)(puVar3 + -0x28) = unaff_x21;
    *(int **)(puVar3 + -0x20) = piVar6;
    *(int **)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar7;
    *(code **)(puVar3 + -8) = pcVar17;
    puVar7 = puVar3 + -0x10;
    func_0x000107871298();
    piVar15[2] = 0;
    piVar15[3] = 0;
    piVar15[4] = 0;
    piVar15[5] = 0;
    piVar15[0] = 0;
    piVar15[1] = 0;
    func_0x000107871364();
    *(undefined4 *)(puVar3 + -0x48) = 4;
    *(undefined **)(puVar3 + -0x60) = &DAT_10f35070a;
    *(undefined4 *)(puVar3 + -0x58) = 7;
    piVar12 = (int *)(puVar3 + -0x60);
    func_0x0001078713a8();
    iVar1 = piVar9[0xc];
    if (iVar1 != 4) {
      *(int **)(puVar3 + -0x68) = piVar11;
      *(char **)(puVar3 + -0x60) = "id";
      *(undefined4 *)(puVar3 + -0x58) = 2;
      if (iVar1 == 3) {
        func_0x000107871308();
        func_0x0001078707c8();
      }
      else if (iVar1 == 2) {
        func_0x000107871308();
        func_0x0001078707ec();
      }
      else if (iVar1 == 1) {
        func_0x000107871308(*(undefined8 *)(piVar9 + 0xe));
        func_0x000107870810();
      }
      else {
        piVar12 = piVar9 + 0xe;
        func_0x000107870840(puVar3 + -0x50,puVar3 + -0x68);
      }
      func_0x0001078712cc();
      func_0x000107871354();
    }
    *(undefined **)(puVar3 + -0x60) = &DAT_10f3005c3;
    *(undefined4 *)(puVar3 + -0x58) = 8;
    piVar14 = (int *)(puVar3 + -0x50);
    pcVar17 = (code *)&UNK_107870408;
    param_1 = piVar15;
    piVar6 = piVar11;
    unaff_x21 = piVar9;
  } while( true );
}


