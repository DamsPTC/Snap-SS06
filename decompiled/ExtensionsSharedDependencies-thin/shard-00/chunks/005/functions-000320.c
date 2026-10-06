/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0063f0dc; end: 0063f15b;  */

undefined8 *
FUN_0063f0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  
  puVar1 = auStack_50;
  func_0x0063f2d0();
  FUN_005c29ac(auStack_50,1);
  FUN_0063f15c(puStack_40,param_2,param_3,param_4);
  func_0x0063f2e8();
  func_0x005c2a34();
  func_0x0063f2b8();
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  func_0x005c2a34();
  func_0x0063f338();
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00a04850;
  puVar1[1] = 0;
  FUN_0063f198(puVar1 + 3);
  return puVar1;
}



/* Entry: 0063f15c; end: 0063f197;  */

undefined8 * FUN_0063f15c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a04850;
  param_1[1] = 0;
  FUN_0063f198(param_1 + 3);
  return param_1;
}



/* Entry: 0063f198; end: 0063f207;  */

undefined8
FUN_0063f198(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  FUN_00425cb4(auStack_48);
  FUN_0064c268(param_1,auStack_48,*param_3,param_4,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return param_1;
}



/* Entry: 0063f208; end: 0063f2a7;  */

void FUN_0063f208(void)

{
  long *unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = 0;
  uStack_28 = 0;
  func_0x0063f340();
  func_0x0063f398();
  func_0x0063b6c4(auStack_40);
  func_0x0063f310();
  __ZNSt3__15mutex4lockEv(lStack_30 + 0x38);
  if ((*(byte *)(lStack_30 + 1) & 1) == 0) {
    *(undefined1 *)(lStack_30 + 1) = 1;
  }
  func_0x0063f320();
  if (unaff_x19 == (long *)0x0) {
    func_0x0063f368();
  }
  else {
    func_0x0063f38c(*(undefined8 *)(*unaff_x19 + 0x10));
    func_0x0063f2a8();
  }
  func_0x0063f330();
  return;
}



/* Entry: 0063f2a8; end: 0063f3d3;  */

void FUN_0063f2a8(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0063f2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 8))();
  return;
}



/* Entry: 0063f3d4; end: 0063f493;  */

void FUN_0063f3d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  int extraout_w10;
  long lStack_60;
  long lStack_58;
  long *aplStack_50 [2];
  long lStack_40;
  long lStack_38;
  undefined4 uStack_24;
  
  uStack_24 = param_5;
  FUN_0063f494(&lStack_40);
  FUN_0063f4c4(aplStack_50,param_2);
  lStack_58 = lStack_38;
  lStack_60 = lStack_40;
  if (lStack_38 != 0) {
    do {
      func_0x0063fadc();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*aplStack_50[0] + 0x10))();
  func_0x0063fa4c(&lStack_60);
  lVar1 = 0;
  if (lStack_40 != 0) {
    lVar1 = lStack_40 + 0x40;
  }
  *param_1 = lVar1;
  param_1[1] = lStack_38;
  lStack_40 = 0;
  lStack_38 = 0;
  FUN_0063f0b4(aplStack_50);
  func_0x0063fa24(&lStack_40);
  return;
}



/* Entry: 0063f494; end: 0063f4c3;  */

void FUN_0063f494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_0063f890(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 0063f4c4; end: 0063f527;  */

void FUN_0063f4c4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (___dynamic_cast(lVar1,&PTR_DAT_00a0c118,&PTR_DAT_00a0c128,0x40), lVar1 == 0))
  {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar2 = param_2[1];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x0063fadc();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 0063f528; end: 0063f6bb;  */

undefined8 *
FUN_0063f528(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  segment_command *psVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  uStack_64 = 0;
  puVar1 = param_1;
  FUN_0064ba00();
  FUN_0063e994(&uStack_60,&UNK_0090fa41,&uStack_64,puVar1);
  *param_1 = &PTR_DAT_00a0cb68;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[7] = lStack_58;
  param_1[6] = uStack_60;
  if (lStack_58 != 0) {
    do {
      func_0x0063fadc();
    } while (extraout_w10 != 0);
  }
  func_0x0045a078(&uStack_60);
  *param_1 = &PTR_FUN_00a0c170;
  param_1[8] = &PTR_DAT_00a0c1b8;
  plVar2 = (long *)*param_2;
  param_1[9] = plVar2;
  lVar4 = param_2[1];
  param_1[10] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0063fadc();
    } while (extraout_w10_00 != 0);
    plVar2 = (long *)param_1[9];
  }
  (**(code **)(*plVar2 + 0x18))(&uStack_60);
  psVar3 = &segment_command_00000020;
  __Znwm();
  psVar3->segname[0] = '\0';
  psVar3->segname[1] = '\0';
  psVar3->segname[2] = '\0';
  psVar3->segname[3] = '\0';
  psVar3->segname[4] = '\0';
  psVar3->segname[5] = '\0';
  psVar3->segname[6] = '\0';
  psVar3->segname[7] = '\0';
  psVar3->segname[8] = '\0';
  psVar3->segname[9] = '\0';
  psVar3->segname[10] = '\0';
  psVar3->segname[0xb] = '\0';
  psVar3->segname[0xc] = '\0';
  psVar3->segname[0xd] = '\0';
  psVar3->segname[0xe] = '\0';
  psVar3->segname[0xf] = '\0';
  *(undefined ***)psVar3 = &PTR_FUN_00a0c288;
  psVar3->vmaddr = (qword)&PTR_DAT_00a0c2d8;
  FUN_0063e1c0(param_3,&uStack_60);
  FUN_0064bf98(param_4);
  uRam0000000000b24bb0 = param_5;
  param_1[0xb] = &psVar3->vmaddr;
  param_1[0xc] = psVar3;
  FUN_0063b20c(&uStack_60);
  return param_1;
}



/* Entry: 0063f6bc; end: 0063f727;  */

void FUN_0063f6bc(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_00a0c170;
  param_1[8] = &PTR_DAT_00a0c1b8;
  FUN_00649f80(auStack_30);
  FUN_0063bd90(auStack_30);
  func_0x0063b6c4(auStack_30);
  FUN_0063cce8(param_1 + 0xb);
  FUN_0063b7cc(param_1 + 9);
  FUN_00649f38(param_1);
  return;
}



/* Entry: 0063f728; end: 0063f733;  */

void FUN_0063f728(undefined8 *param_1)

{
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_00a0c170;
  param_1[8] = &PTR_DAT_00a0c1b8;
  FUN_00649f80(auStack_30);
  FUN_0063bd90(auStack_30);
  func_0x0063b6c4(auStack_30);
  FUN_0063cce8(param_1 + 0xb);
  FUN_0063b7cc(param_1 + 9);
  FUN_00649f38(param_1);
  return;
}



/* Entry: 0063f734; end: 0063f747;  */

void FUN_0063f734(void)

{
  FUN_0063f6bc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063f748; end: 0063f74f;  */

void FUN_0063f748(long param_1)

{
  FUN_0063f6bc(param_1 + -0x40);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063f750; end: 0063f7e3;  */

void FUN_0063f750(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_0063eb8c(auStack_58);
  FUN_0063eac0(param_1,auStack_58);
  uStack_28 = *(undefined8 *)(param_2 + 0x60);
  uStack_30 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  FUN_0063cce8(&uStack_30);
  uStack_28 = *(undefined8 *)(param_2 + 0x50);
  uStack_30 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  FUN_0063b7cc();
  func_0x0063eb0c(auStack_58,&uStack_30);
  FUN_0063edd4(auStack_58);
  return;
}



/* Entry: 0063f7e4; end: 0063f88f;  */

void FUN_0063f7e4(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x60);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0063fadc(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 0063f890; end: 0063f957;  */

undefined1 *
FUN_0063f890(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [16];
  long lStack_50;
  long lStack_48;
  
  puVar2 = auStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0063f958(auStack_60,1);
  FUN_0063f99c(lStack_50,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0063fa14();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0063fa14(auStack_60);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_0063f980();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 0063f958; end: 0063f97f;  */

long FUN_0063f958(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0063f980();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0063f980; end: 0063f99b;  */

undefined8 * FUN_0063f980(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x39 == 0) {
    puVar1 = (undefined8 *)(param_2 << 7);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a0c238;
  func_0x0063f9fc(param_1 + 3);
  return param_1;
}



/* Entry: 0063f99c; end: 0063f9db;  */

undefined8 * FUN_0063f99c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_00a0c238;
  func_0x0063f9fc(param_1 + 3);
  return param_1;
}



/* Entry: 0063f9dc; end: 0063f9df;  */

void FUN_0063f9dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c238;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0063f9e0; end: 0063f9f3;  */

void FUN_0063f9e0(void)

{
  func_0x0063fa04();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063f9f4; end: 0063fa23;  */

void FUN_0063f9f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0063fad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0063fa24; end: 0063fa73;  */

long FUN_0063fa24(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0063fa74; end: 0063fa77;  */

void FUN_0063fa74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c288;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0063fa78; end: 0063fa8b;  */

void FUN_0063fa78(void)

{
  func_0x0063faac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0063fa8c; end: 0063faf3;  */

void FUN_0063fa8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0063fad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0063faf4; end: 0064012b;  */

undefined8 * FUN_0063faf4(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined4 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  bool bVar4;
  code *****pppppcVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_181 [9];
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  int iStack_14c;
  long alStack_148 [3];
  char *pcStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_110;
  undefined *puStack_108;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  int *piStack_b8;
  long *plStack_b0;
  code ****ppppcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_68;
  
  puVar8 = param_1;
  func_0x00641204();
  uStack_68 = extraout_x8;
  FUN_00643040();
  *puVar8 = &PTR_FUN_00a0c330;
  *(undefined4 *)(puVar8 + 0x13) = param_4;
  __ZNSt3__115recursive_mutexC1Ev(puVar8 + 0x14);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x1c,param_2);
  puVar8 = param_1 + 0x1f;
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    if (param_1[0x1d] == 0) goto LAB_0063fb9c;
LAB_0063fb68:
    puVar9 = param_1 + 0x1c;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm
              (puVar9,0x2f,0xffffffffffffffff);
    FUN_00479db4(puVar8,param_1 + 0x1c,(long)puVar9 + 1,0xffffffffffffffff);
  }
  else {
    if (*(char *)((long)param_1 + 0xf7) != '\0') goto LAB_0063fb68;
LAB_0063fb9c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar8,param_1 + 0x1c);
  }
  param_1[0x22] = FUN_00640c40;
  param_1[0x23] = &PTR_FUN_009e3508;
  param_1[0x28] = 0;
  uVar17 = param_3[1];
  uVar10 = *param_3;
  uVar19 = param_3[3];
  uVar18 = param_3[2];
  param_1[0x2d] = param_3[4];
  param_1[0x2a] = uVar17;
  param_1[0x29] = uVar10;
  param_1[0x2c] = uVar19;
  param_1[0x2b] = uVar18;
  FUN_0064012c(param_1 + 0x2e,param_1 + 0x1c);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  param_1[0x33] = 0;
  if ((*(char *)((long)param_1 + 0x15e) == '\x01') && ((*(byte *)((long)param_1 + 0x149) & 1) == 0))
  {
    __ZNSt3__115recursive_mutex4lockEv(param_1 + 0x14);
    iVar7 = (int)param_1 + 0xe0;
    FUN_00640b74();
    func_0x0064111c();
    if (iVar7 == 0) {
      bVar4 = true;
    }
    else {
      func_0x00640194(param_1 + 0x1c);
      bVar4 = true;
      *(undefined1 *)((long)param_1 + 0x1a1) = 1;
    }
  }
  else {
    bVar4 = false;
  }
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  puVar9 = param_1;
  FUN_006402bc(param_1,plVar1,param_3);
  param_1[0x31] = puVar9;
  FUN_00640530(param_1);
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    puStack_110 = (undefined8 *)((ulong)puStack_110 & 0xffffffffffffff00);
    ppppcStack_98 = (code ****)FUN_00641048;
    ppuStack_90 = &PTR_FUN_00a0c5c8;
    uStack_88 = &puStack_110;
    puVar13 = &UNK_0090fcc8;
    puVar9 = param_1;
    func_0x00641214(param_1,&UNK_0090fcc8,0x12);
    func_0x006411a4();
    uVar15 = 0;
    if ((char)puStack_110 == '\0') {
      uVar15 = 0xb;
    }
    uVar16 = (uint)puVar9;
    if ((uVar16 != 0) || (uVar16 = uVar15, ((ulong)puStack_110 & 1) == 0)) {
      if ((bVar4) && ((uVar16 & 0xff) == 0x1a || (uVar16 & 0xff) == 0xb)) {
        func_0x0064055c(param_1);
        *(undefined1 *)((long)param_1 + 0x1a1) = 1;
      }
      else {
        uVar10 = param_1[0x31];
        param_1[0x31] = 0;
        _sqlite3_close_v2(uVar10);
        puVar9 = param_1 + 0x1c;
        FUN_00457d70();
        puStack_110 = puVar9;
        puStack_108 = puVar13;
        func_0x00461914(&UNK_0090fa53);
        FUN_00721c60(&ppppcStack_98);
        FUN_00641f40(0,uVar16,&ppppcStack_98);
        func_0x0064121c();
      }
    }
  }
  FUN_006415b0(param_2);
  ppppcStack_98 = (code ****)0x0;
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = (undefined8 **)0x0;
  if (*(char *)((long)param_3 + 2) == '\x01') {
    func_0x006411c4();
  }
  if (*(char *)((long)param_3 + 3) == '\x01') {
    func_0x006411c4();
  }
  if (*(char *)((long)param_3 + 0x25) == '\x01') {
    uVar15 = 3;
    if (*(int *)((long)param_1 + 0x14c) != 0) {
      uVar15 = *(int *)((long)param_1 + 0x14c) - 2;
    }
    if (uVar15 < 5) {
      uStack_128 = *(undefined8 *)(&UNK_00822078 + (ulong)uVar15 * 8);
      pcStack_130 = (&PTR_DAT_00a0c5e0)[uVar15];
    }
    else {
      pcStack_130 = "DELETE";
      uStack_128 = 6;
    }
    func_0x00461914(&UNK_0090fd13);
    FUN_00721c60(&puStack_110);
    func_0x00641110();
    func_0x00641158();
  }
  if (*(char *)(param_3 + 1) == '\x01') {
    func_0x006411c4();
  }
  if (0 < *(int *)(param_3 + 4)) {
    __ZNSt3__19to_stringEi(alStack_148);
    func_0x0064122c(&UNK_0090faca);
    func_0x00641178();
    func_0x00641110();
    func_0x00641158();
    func_0x00641224();
    func_0x006410f8();
  }
  if ((*(char *)((long)param_3 + 0x25) == '\x01') && (0 < *(int *)((long)param_3 + 0x1c))) {
    __ZNSt3__19to_stringEi(alStack_148);
    func_0x0064122c(&UNK_0090fadf);
    func_0x00641178();
    func_0x00641110();
    func_0x00641158();
    func_0x00641224();
    func_0x006410f8();
  }
  iStack_14c = 0;
  alStack_148[0] = -1;
  pcStack_c8 = FUN_00640e90;
  ppuStack_c0 = &PTR_FUN_00a0c5b0;
  piStack_b8 = &iStack_14c;
  plStack_b0 = alStack_148;
  func_0x00641214(param_1,&UNK_0090faf1,0x79);
  func_0x0064112c(ppuStack_c0);
  if (((*(byte *)((long)param_3 + 1) & 1) == 0) && ((*(byte *)((long)param_3 + 0x25) & 1) != 0)) {
    if (*(char *)((long)param_3 + 9) == '\x01') {
      if ((iStack_14c == 1) || (iStack_14c == 0)) {
LAB_0063ff2c:
        func_0x006411c4();
      }
      else if (0 < (int)*(uint *)((long)param_3 + 0xc)) {
        uStack_128 = 0;
        pcStack_130 = (char *)(ulong)*(uint *)((long)param_3 + 0xc);
        func_0x00461914(&UNK_0090fbb3);
        FUN_00721c60(&puStack_110);
        func_0x00641110();
        func_0x00641158();
      }
    }
    else if (iStack_14c != 0) goto LAB_0063ff2c;
  }
  if (-1 < alStack_148[0]) {
    FUN_006428a8();
    lVar14 = (long)*(char *)((long)param_1 + 0x10f);
    puVar9 = puVar8;
    if (lVar14 < 0) {
      lVar14 = param_1[0x20];
      puVar9 = (undefined8 *)param_1[0x1f];
    }
    (**(code **)(lRam0000000000b6c688 + 0x10))
              (0xb6c688,*(undefined4 *)(param_1 + 0x13),puVar9,lVar14,alStack_148[0]);
  }
  uVar6 = uStack_88._7_1_ == 0;
  ppuVar2 = ppuStack_90;
  pppppcVar5 = (code *****)ppppcStack_98;
  if (-1 < (long)uStack_88) {
    ppuVar2 = (undefined **)(ulong)uStack_88._7_1_;
    pppppcVar5 = &ppppcStack_98;
  }
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  pcStack_f8 = FUN_00427770;
  ppuStack_f0 = &PTR_FUN_009e3508;
  puVar9 = param_1;
  func_0x00641214(param_1,pppppcVar5,ppuVar2);
  func_0x0064112c(ppuStack_f0);
  func_0x0064121c();
  func_0x00641144(uStack_68);
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_110);
  func_0x0064121c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2e);
  func_0x006411b4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x14);
  FUN_006430f8(param_1);
  puVar11 = puVar9;
  __Unwind_Resume();
  pcStack_158 = FUN_0064012c;
  puVar12 = puVar11;
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    if (puVar11[1] == 0) goto LAB_00640168;
  }
  else if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_00640168;
  puStack_170 = puVar8;
  puStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  func_0x0064118c();
  if (((ulong)puVar12 & 1) == 0) {
    puVar13 = &UNK_0090fd0a;
    uVar3 = puVar11[1];
    puVar8 = (undefined8 *)*puVar11;
    if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
      uVar3 = (ulong)*(byte *)((long)puVar11 + 0x17);
      puVar8 = puVar11;
    }
    auStack_181._1_8_ = &pcStack_f8;
    puStack_178 = puVar9;
    _strlen(&UNK_0090fd0a);
    puVar9 = (undefined8 *)auStack_181;
    FUN_00475178(extraout_x8_00,puVar9,puVar8,uVar3,&UNK_0090fd0a,puVar13);
    return puVar9;
  }
LAB_00640168:
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  return puVar12;
}



/* Entry: 0064012c; end: 006402bb;  */

void FUN_0064012c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 uStack_31;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] == 0) goto LAB_00640168;
    puVar4 = (undefined8 *)*param_2;
  }
  else {
    puVar4 = param_2;
    if (*(char *)((long)param_2 + 0x17) == '\0') goto LAB_00640168;
  }
  puVar2 = param_2;
  func_0x0064118c(param_2,param_3,puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = &UNK_0090fd0a;
    uVar1 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    _strlen(&UNK_0090fd0a);
    FUN_00475178(param_1,&uStack_31,puVar4,uVar1,&UNK_0090fd0a,puVar3);
    return;
  }
LAB_00640168:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 006402bc; end: 0064052f;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_006402bc(long param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined *puStack_68;
  long alStack_60 [3];
  undefined1 uStack_48;
  
  alStack_60[1] = 0;
  lVar3 = param_1;
  FUN_00716c1c();
  uStack_48 = 1;
  alStack_60[0] = 0;
  alStack_60[2] = lVar3;
  FUN_00641d18();
  uVar6 = 0x10000;
  if (param_3[0x19] == '\0') {
    uVar6 = 0x8000;
  }
  uVar7 = 6;
  if (*param_3 == '\0') {
    uVar7 = 2;
  }
  if (param_3[1] != '\0') {
    uVar7 = 1;
  }
  uVar7 = uVar7 | uVar6 | (uint)(byte)param_3[0x1a] << 0x11;
  uVar2 = param_3[0x14] == '\x01';
  if ((bool)uVar2) {
    uVar7 = uVar7 | 0x400000;
    func_0x006411f4();
    FUN_006497f4(param_2,uVar2);
  }
  uVar4 = param_2;
  _sqlite3_open_v2(param_2,alStack_60,uVar7,0);
  lVar3 = alStack_60[0];
  lStack_70 = alStack_60[0];
  puStack_68 = PTR__sqlite3_close_v2_0099a9b8;
  if ((int)uVar4 != 0) {
    FUN_00425cb4(auStack_a0,&UNK_0090fbf3);
    func_0x006411cc();
    func_0x00641100();
    func_0x00641160();
    func_0x006411e4();
  }
  if (lVar3 == 0) {
    FUN_00425cb4(auStack_a0,&UNK_0090fc0f);
    func_0x006411cc();
    FUN_00641f40(0,1,auStack_88);
    func_0x00641160();
    func_0x006411e4();
  }
  lVar8 = lVar3;
  _sqlite3_extended_result_codes(lVar3,1);
  if ((int)lVar8 != 0) {
    FUN_00425cb4(auStack_88,&UNK_0090fc35);
    func_0x00641100();
    func_0x00641160();
  }
  if ((0 < *(int *)(param_3 + 0x10)) && (lVar8 = lVar3, _sqlite3_busy_timeout(), (int)lVar8 != 0)) {
    FUN_00425cb4(auStack_88,&UNK_0090fc5c);
    func_0x00641100();
    func_0x00641160();
  }
  uVar2 = param_3[0x14] == '\x01';
  if ((bool)uVar2) {
    func_0x006411f4();
    FUN_00649988(param_2);
    func_0x006411f4();
    FUN_00649bb8(param_2,uVar2);
  }
  FUN_006428a8();
  lVar8 = (long)*(char *)(param_1 + 0x10f);
  if (lVar8 < 0) {
    lVar9 = *(long *)(param_1 + 0xf8);
    lVar8 = *(long *)(param_1 + 0x100);
  }
  else {
    lVar9 = param_1 + 0xf8;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  plVar5 = alStack_60 + 1;
  FUN_006407a0(plVar5);
  (**(code **)(lRam0000000000b6c688 + 0x20))(0xb6c688,uVar1,lVar9,lVar8,plVar5);
  lStack_70 = 0;
  FUN_00640f30(&lStack_70);
  return lVar3;
}



/* Entry: 00640530; end: 006405bb;  */

void FUN_00640530(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0xe0;
  FUN_006407d0(lVar1,param_1 + 400,param_1 + 0x198);
  *(char *)(param_1 + 0x1a0) = (char)lVar1;
  return;
}



/* Entry: 006405bc; end: 0064072b;  */

ulong FUN_006405bc(undefined8 param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  code *pcVar1;
  char *pcVar2;
  ulong uVar3;
  long unaff_x19;
  ulong uVar4;
  int iVar5;
  undefined1 auStack_b0 [24];
  char *pcStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  
  func_0x00641138();
  FUN_00640844();
  uVar4 = 0;
  lStack_90 = 0x1e;
  for (iVar5 = -5; iVar5 != 0; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(unaff_x19 + 0x188);
    pcVar1 = (code *)0x0;
    if (*(char *)(*(long *)(param_5 + 8) + 8) == '\0') {
      pcVar1 = FUN_00640ffc;
    }
    _sqlite3_exec(uVar4,param_2,pcVar1,param_5,&pcStack_98);
    if ((int)uVar4 != 5) break;
    func_0x00640f88(&lStack_90);
    lStack_90 = lStack_90 << 1;
    uVar4 = 5;
  }
  pcVar2 = pcStack_98;
  if ((int)uVar4 == 0) {
    FUN_006437c4();
  }
  else {
    uVar3 = *(ulong *)(unaff_x19 + 0x188);
    _sqlite3_extended_errcode();
    pcStack_60 = "unknown";
    if (pcVar2 != (char *)0x0) {
      pcStack_60 = pcVar2;
    }
    uStack_80 = uVar4 & 0xffffffff;
    uStack_78 = 0;
    uStack_70 = uVar3 & 0xffffffff;
    uStack_68 = 0;
    uStack_58 = 0;
    lStack_90 = param_2;
    uStack_88 = param_3;
    func_0x00461914(&UNK_0090fc77);
    FUN_00721c60(auStack_b0);
    _sqlite3_free(pcStack_98);
    if (param_4 != 0) {
      FUN_00641f40();
    }
    func_0x006411e4();
  }
  func_0x0064111c();
  return uVar4;
}



/* Entry: 0064072c; end: 00640787;  */

undefined8 * FUN_0064072c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c330;
  _sqlite3_close(param_1[0x31]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2e);
  func_0x006411b4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1f);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x14);
  *param_1 = &PTR_FUN_00a0c750;
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x00459128(param_1 + 8);
  FUN_006439c0(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 00640788; end: 0064078b;  */

undefined8 * FUN_00640788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0c330;
  _sqlite3_close(param_1[0x31]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2e);
  func_0x006411b4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1f);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1c);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x14);
  *param_1 = &PTR_FUN_00a0c750;
  __ZNSt3__15mutexD1Ev(param_1 + 0xb);
  func_0x00459128(param_1 + 8);
  FUN_006439c0(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 0064078c; end: 0064079f;  */

void FUN_0064078c(void)

{
  FUN_0064072c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006407a0; end: 006407cf;  */

long FUN_006407a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((char)param_1[2] == '\x01') {
    FUN_00640f64();
    lVar1 = (long)param_1 + lVar1;
  }
  return lVar1;
}



/* Entry: 006407d0; end: 00640843;  */

bool FUN_006407d0(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  int aiStack_c0 [2];
  undefined8 uStack_b8;
  
  _bzero(aiStack_c0,0x90);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  _stat(plVar1,aiStack_c0);
  if ((int)plVar1 == 0) {
    *param_2 = (long)aiStack_c0[0];
    *param_3 = uStack_b8;
  }
  return (int)plVar1 == 0;
}



/* Entry: 00640844; end: 006408c7;  */

void FUN_00640844(undefined8 param_1,int param_2)

{
  long unaff_x19;
  
  func_0x00641138();
  if ((*(int *)(unaff_x19 + 0x144) != 0) && (param_2 == *(int *)(unaff_x19 + 0x140))) {
    *(undefined4 *)(unaff_x19 + 0x144) = 0;
    func_0x00641170();
    FUN_00641f40();
    func_0x006410f8();
  }
  func_0x0064111c();
  return;
}



/* Entry: 006408c8; end: 00640947;  */

void FUN_006408c8(long param_1,undefined8 param_2)

{
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 0xa0);
  func_0x00640900(param_1 + 0x110,param_2);
                    /* WARNING: Could not recover jumptable at 0x00779d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_00998b28)(param_1 + 0xa0);
  return;
}



/* Entry: 00640948; end: 00640a27;  */

long * FUN_00640948(long param_1,undefined *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 extraout_x8;
  long *plVar3;
  long alStack_280 [2];
  undefined1 auStack_270 [16];
  int aiStack_260 [138];
  undefined8 uStack_38;
  
  plVar2 = alStack_280;
  func_0x00641204();
  uStack_38 = extraout_x8;
  __ZNSt3__115recursive_mutex4lockEv();
  if (*(char *)(param_1 + 0x187) < '\0') {
    if (*(long *)(param_1 + 0x178) == 0) goto LAB_006409dc;
  }
  else if (*(char *)(param_1 + 0x187) == '\0') {
LAB_006409dc:
    plVar3 = (long *)((long)&MACH_HEADER.magic + 1);
    goto LAB_006409e0;
  }
  param_2 = (undefined *)(param_1 + 0x170);
  param_3 = 0x10;
  FUN_00640a28(alStack_280,param_2,0x10);
  iVar1 = *(int *)((long)aiStack_260 + *(long *)(alStack_280[0] + -0x18));
  in_ZR = iVar1 == 0;
  plVar3 = (long *)(ulong)(byte)in_ZR;
  if (iVar1 == 0) {
    param_2 = &UNK_0090fcdb;
    FUN_00461ffc(auStack_270,&UNK_0090fcdb);
    FUN_00640b04(alStack_280);
  }
  func_0x00640b44();
LAB_006409e0:
  func_0x0064111c();
  func_0x00641144(uStack_38);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00640b44();
  func_0x0064111c();
  func_0x0064119c();
  plVar2[0x3c] = 0;
  *plVar2 = (long)&PTR_SUB_00a0c3d0;
  plVar2[0x36] = (long)&PTR_DAT_00a0c420;
  plVar2[2] = (long)&PTR_FUN_00a0c3f8;
  func_0x00462084();
  *plVar2 = (long)&PTR_SUB_00a0c3d0;
  plVar2[0x36] = (long)&PTR_DAT_00a0c420;
  plVar2[2] = (long)&PTR_FUN_00a0c3f8;
  FUN_005823dc(plVar2 + 3);
  plVar3 = plVar2 + 3;
  func_0x006410c0(plVar3,param_2,param_3);
  if (plVar3 == (long *)0x0) {
    func_0x00462960((long)plVar2 + *(long *)(*plVar2 + -0x18),4);
  }
  return plVar2;
}



/* Entry: 00640a28; end: 00640b03;  */

long * FUN_00640a28(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  param_1[0x3c] = 0;
  *param_1 = (long)&PTR_SUB_00a0c3d0;
  param_1[0x36] = (long)&PTR_DAT_00a0c420;
  param_1[2] = (long)&PTR_FUN_00a0c3f8;
  func_0x00462084(param_1,&PTR_PTR_00a0c438,param_1 + 3);
  *param_1 = (long)&PTR_SUB_00a0c3d0;
  param_1[0x36] = (long)&PTR_DAT_00a0c420;
  param_1[2] = (long)&PTR_FUN_00a0c3f8;
  FUN_005823dc(param_1 + 3);
  plVar1 = param_1 + 3;
  func_0x006410c0(plVar1,param_2,param_3);
  if (plVar1 == (long *)0x0) {
    func_0x00462960((long)param_1 + *(long *)(*param_1 + -0x18),4);
  }
  return param_1;
}



/* Entry: 00640b04; end: 00640b73;  */

void FUN_00640b04(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = param_1 + 3;
  FUN_00640ce0();
  if (plVar2 != (long *)0x0) {
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00779fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18ios_base5clearEj_00998c98)(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}



/* Entry: 00640b74; end: 00640c23;  */

ulong FUN_00640b74(long *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  undefined1 auStack_288 [8];
  ulong uStack_280;
  byte bStack_271;
  long alStack_270 [4];
  int aiStack_250 [138];
  undefined8 uStack_28;
  
  func_0x00641204();
  uStack_28 = extraout_x8;
  FUN_0064012c(auStack_288);
  uVar2 = bStack_271 == 0;
  if (-1 < (char)bStack_271) {
    uStack_280 = (ulong)bStack_271;
  }
  if (uStack_280 == 0) {
    uVar4 = 0;
  }
  else {
    puVar3 = auStack_288;
    FUN_00640a28(alStack_270,puVar3,0x18);
    param_2 = (int)puVar3;
    uVar2 = *(int *)((long)aiStack_250 + *(long *)(alStack_270[0] + -0x18)) == 0;
    uVar4 = (ulong)(byte)uVar2;
    param_1 = alStack_270;
    func_0x00640b44();
  }
  func_0x006410f8();
  func_0x00641144(uStack_28);
  if ((bool)uVar2) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x006410f8();
  func_0x00641168();
  pcVar1 = FUN_00640ddc;
  uVar4 = param_1[0x31];
  if (param_2 == 0) {
    pcVar1 = (code *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_update_hook_0099aa58)(uVar4,pcVar1,param_1);
  return uVar4;
}



/* Entry: 00640c24; end: 00640c3f;  */

void FUN_00640c24(long param_1,int param_2)

{
  code *pcVar1;
  
  pcVar1 = FUN_00640ddc;
  if (param_2 == 0) {
    pcVar1 = (code *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_update_hook_0099aa58)(*(undefined8 *)(param_1 + 0x188),pcVar1,param_1);
  return;
}



/* Entry: 00640c40; end: 00640c4f;  */

void FUN_00640c40(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_2;
  func_0x00427780();
  lVar2 = *plVar1;
  *param_2 = lVar2;
  *(long *)((long)param_2 + *(long *)(lVar2 + -0x18)) = plVar1[8];
  param_2[2] = plVar1[9];
  FUN_00583300(param_2 + 3);
                    /* WARNING: Could not recover jumptable at 0x00779d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev_00998af0)(param_2,plVar1 + 1);
  return;
}



/* Entry: 00640c50; end: 00640c9b;  */

void FUN_00640c50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  FUN_00583300(param_1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00779d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev_00998af0)(param_1,param_2 + 1)
  ;
  return;
}



/* Entry: 00640c9c; end: 00640cb3;  */

long FUN_00640c9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + -0x10;
  lVar1 = param_1;
  FUN_00640c50(param_1,&PTR_PTR_00a0c430);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(lVar1 + 0x1b0);
  return param_1;
}



/* Entry: 00640cb4; end: 00640cc7;  */

void FUN_00640cb4(void)

{
  func_0x00640b44();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00640cc8; end: 00640cdf;  */

void FUN_00640cc8(long param_1)

{
  func_0x00640b44(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00640ce0; end: 00640d8b;  */

long * FUN_00640ce0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1[0xf];
  if (lVar2 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    puStack_38 = PTR__fclose_0099a218;
    plVar1 = param_1;
    lStack_40 = lVar2;
    (**(code **)(*param_1 + 0x30))();
    lStack_40 = 0;
    _fclose();
    param_1[0xf] = 0;
    (**(code **)(*param_1 + 0x18))(param_1,0,0);
    if ((int)lVar2 != 0 || (int)plVar1 != 0) {
      param_1 = (long *)0x0;
    }
    FUN_00640d8c(&lStack_40);
  }
  return param_1;
}



/* Entry: 00640d8c; end: 00640daf;  */

undefined8 FUN_00640d8c(undefined8 param_1)

{
  FUN_00640db0(param_1,0);
  return param_1;
}



/* Entry: 00640db0; end: 00640ddb;  */

void FUN_00640db0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  return;
}



/* Entry: 00640ddc; end: 00640e23;  */

void FUN_00640ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [24];
  
  func_0x00641170(param_1,param_4);
  FUN_00643790(param_1,auStack_38);
  func_0x006410f8();
  return;
}



/* Entry: 00640e24; end: 00640e8f;  */

void FUN_00640e24(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uStack_31;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  uVar3 = param_3;
  _strlen(param_3);
  FUN_00475178(param_1,&uStack_31,puVar2,uVar1,param_3,uVar3);
  return;
}



/* Entry: 00640e90; end: 00640f13;  */

undefined8 FUN_00640e90(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x00641170(param_1,*param_2);
  puVar1 = auStack_38;
  __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(puVar1,0,10);
  **(undefined4 **)(param_4 + 0x10) = (int)puVar1;
  func_0x006410f8();
  func_0x00641170();
  puVar1 = auStack_38;
  __ZNSt3__15stollERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(puVar1,0,10);
  **(long **)(param_4 + 0x18) = (long)puVar1;
  func_0x006410f8();
  return 0;
}



/* Entry: 00640f14; end: 00640f2f;  */

void FUN_00640f14(void)

{
  return;
}



/* Entry: 00640f30; end: 00640f63;  */

long * FUN_00640f30(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  return param_1;
}



/* Entry: 00640f64; end: 00640ffb;  */

long FUN_00640f64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00716c1c();
  return lVar1 - *(long *)(param_1 + 8);
}



/* Entry: 00640ffc; end: 00641047;  */

void FUN_00640ffc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00641014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_2,param_3,param_4,param_1);
  return;
}



/* Entry: 00641048; end: 006410a7;  */

undefined8 FUN_00641048(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  if ((int)param_1 == 1) {
    func_0x00641170(param_1,*param_2);
    puVar1 = auStack_38;
    FUN_004636dc(puVar1,&UNK_0090fd4b);
    func_0x006410f8();
    if ((int)puVar1 != 0) {
      **(undefined1 **)(param_4 + 0x10) = 1;
    }
  }
  return 0;
}



/* Entry: 006410a8; end: 00641237;  */

void FUN_006410a8(void)

{
  return;
}



/* Entry: 00641238; end: 00641283;  */

void FUN_00641238(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  FUN_0046691c(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 00641284; end: 006412cb;  */

undefined8 * FUN_00641284(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x006414a8();
  FUN_006412cc(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 006412cc; end: 0064130f;  */

undefined1 * FUN_006412cc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_00641310();
  return param_1;
}



/* Entry: 00641310; end: 00641323;  */

void FUN_00641310(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_00641340();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 00641324; end: 0064133f;  */

void FUN_00641324(long param_1)

{
  FUN_00641340();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 00641340; end: 00641367;  */

undefined8 * FUN_00641340(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_00641368(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 00641368; end: 0064139f;  */

undefined8 FUN_00641368(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x18))();
  return param_1;
}



/* Entry: 006413a0; end: 006413eb;  */

long * FUN_006413a0(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    do {
      while (plVar2 = plVar1, (int)plVar2[4] <= *param_3) {
        plVar1 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          plVar3 = plVar2 + 1;
          goto LAB_006413e0;
        }
      }
      plVar3 = plVar2;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
LAB_006413e0:
  *param_2 = (long)plVar2;
  return plVar3;
}



/* Entry: 006413ec; end: 0064140f;  */

undefined8 FUN_006413ec(undefined8 param_1)

{
  FUN_00641410(param_1,0);
  return param_1;
}



/* Entry: 00641410; end: 00641427;  */

void FUN_00641410(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_00456130(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(lVar1);
  return;
}



/* Entry: 00641428; end: 0064146b;  */

void FUN_00641428(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_00456130(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 0064146c; end: 006414b3;  */

void FUN_0064146c(void)

{
  return;
}



/* Entry: 006414b4; end: 00641523;  */

void FUN_006414b4(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  func_0x006416e0();
  func_0x006416cc();
  lVar4 = unaff_x19 + 0x40;
  FUN_006415f0(lVar4,param_1);
  if (lVar4 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x30);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    unaff_x20[1] = *(undefined8 *)(lVar4 + 0x30);
    *unaff_x20 = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 00641524; end: 006415af;  */

undefined8 FUN_00641524(void)

{
  int iVar1;
  
  if ((bRam0000000000b24ba8 & 1) == 0) {
    iVar1 = 0xb24ba8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000b24b18 = 0x32aaaba7;
      uRam0000000000b24b28 = 0;
      uRam0000000000b24b20 = 0;
      uRam0000000000b24b38 = 0;
      uRam0000000000b24b30 = 0;
      uRam0000000000b24b48 = 0;
      uRam0000000000b24b40 = 0;
      uRam0000000000b24b58 = 0;
      uRam0000000000b24b50 = 0;
      uRam0000000000b24b68 = 0;
      uRam0000000000b24b60 = 0;
      uRam0000000000b24b70 = 0;
      uRam0000000000b24b78 = 0x3f800000;
      uRam0000000000b24b88 = 0;
      uRam0000000000b24b80 = 0;
      uRam0000000000b24b98 = 0;
      uRam0000000000b24b90 = 0;
      uRam0000000000b24ba0 = 0x3f800000;
      ___cxa_guard_release(0xb24ba8);
    }
  }
  return 0xb24b18;
}



/* Entry: 006415b0; end: 006415ef;  */

void FUN_006415b0(undefined8 param_1)

{
  long unaff_x19;
  
  FUN_00641524();
  func_0x006416cc();
  FUN_00464068(unaff_x19 + 0x68,param_1);
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 006415f0; end: 006416c3;  */

long FUN_006415f0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_004597c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_00459c38(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 006416c4; end: 006416ef;  */

void FUN_006416c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 006416f0; end: 0064177b;  */

void FUN_006416f0(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (param_1,param_2 * 2 + -1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (param_1,&UNK_0090fd4e);
    while (param_2 = param_2 + -1, param_2 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_0090fd50);
    }
  }
  return;
}



/* Entry: 0064177c; end: 00641c47;  */

void FUN_0064177c(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  long unaff_x19;
  int iVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  byte *pbVar17;
  undefined *puVar18;
  undefined *puStack_328;
  undefined8 ****ppppuStack_320;
  char *pcStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  char *pcStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined **ppuStack_2c8;
  undefined ***pppuStack_2c0;
  undefined8 **appuStack_2a0 [3];
  undefined **ppuStack_288;
  undefined1 *puStack_280;
  undefined8 uStack_278;
  ulong uStack_270;
  undefined1 auStack_268 [504];
  undefined8 uStack_70;
  
  uVar3 = param_2;
  uVar12 = param_5;
  func_0x00642894();
  *param_1 = &PTR_FUN_00a0c618;
  *(int *)(param_1 + 1) = (int)uVar3;
  puVar15 = param_1 + 2;
  param_1[3] = 0;
  *puVar15 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  uStack_70 = extraout_x8;
  if (uVar12 == 0) {
    *(undefined1 *)(unaff_x19 + 0x48) = 0;
    *(undefined1 *)(unaff_x19 + 0x40) = 0;
    *(undefined1 *)(unaff_x19 + 0x44) = 0;
    *(undefined1 *)(unaff_x19 + 0x50) = 0;
  }
  else {
    iVar13 = 5;
    if (*(int *)(param_5 + 0x14c) != 0) {
      iVar13 = *(int *)(param_5 + 0x14c);
    }
    *(undefined1 *)(unaff_x19 + 0x48) = 0;
    *(undefined1 *)(unaff_x19 + 0x44) = 1;
    *(int *)(unaff_x19 + 0x40) = iVar13;
    pbVar17 = (byte *)(unaff_x19 + 0x50);
    *pbVar17 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppuStack_288,param_5 + 0xf8);
    FUN_004575b8(unaff_x19 + 0x28,&ppuStack_288);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_288);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppppuStack_320,param_5 + 0xe0);
    if (-1 < uStack_310._7_1_) {
      ppppuStack_320 = &ppppuStack_320;
    }
    _statvfs(ppppuStack_320,&ppuStack_288);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_320);
    if ((int)ppppuStack_320 == 0) {
      if ((*pbVar17 & 1) == 0) {
        *pbVar17 = 1;
      }
      *(ulong *)(unaff_x19 + 0x48) = (long)puStack_280 * (uStack_270 & 0xffffffff);
    }
  }
  puStack_280 = auStack_268;
  ppuStack_288 = &PTR_FUN_00a0c670;
  uStack_270 = 500;
  uStack_278 = 0;
  if (param_5 == 0) {
    pcVar10 = "unknown";
    FUN_00425cb4(appuStack_2a0);
  }
  else {
    pcVar10 = (char *)(param_5 + 0xf8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(appuStack_2a0);
  }
  uVar3 = param_2;
  _sqlite3_errstr();
  if (param_5 == 0) {
    pcVar4 = "N/A";
  }
  else {
    pcVar4 = *(char **)(param_5 + 0x188);
    _sqlite3_errmsg();
  }
  uVar1 = *(uint *)(unaff_x19 + 8);
  ppppuVar5 = (undefined8 ****)appuStack_2a0;
  FUN_00457d70();
  uStack_308 = 0;
  uStack_2f8 = 0;
  uStack_2e8 = 0;
  ppppuStack_320 = ppppuVar5;
  pcStack_318 = pcVar10;
  uStack_310 = uVar3;
  pcStack_300 = pcVar4;
  uStack_2f0 = (ulong)uVar1;
  uStack_2e0 = param_3;
  uStack_2d8 = param_4;
  func_0x00461914(&UNK_0090fd53);
  func_0x006427dc();
  func_0x00642804();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_2a0);
  uVar2 = *(char *)(unaff_x19 + 0x50) == '\x01';
  if ((bool)uVar2) {
    ppppuStack_320 = *(undefined8 *****)(unaff_x19 + 0x48);
    pcStack_318 = (char *)0x0;
    func_0x00461914(&UNK_0090fdaa);
    func_0x006427dc();
    func_0x00642804();
  }
  if (param_5 != 0) {
    iVar13 = (int)param_2;
    uVar2 = iVar13 == 0x13 || iVar13 == 0xb;
    if (iVar13 == 0x13 || iVar13 == 0xb) {
      ppppuStack_320 = (undefined8 ****)0x0;
      pcStack_318 = (char *)0x0;
      func_0x00461914(&UNK_0090fdbb);
      func_0x0064280c();
      func_0x006427c0();
      pcStack_2d0 = FUN_00642100;
      ppuStack_2c8 = &PTR_FUN_00a0c6a0;
      pppuStack_2c0 = &ppuStack_288;
      FUN_006405bc(param_5,&UNK_0090fdcd,0x16,0,&pcStack_2d0);
      func_0x0064282c();
      uVar2 = 0;
      if ((iVar13 == 0xb) && (uVar2 = *(char *)(param_5 + 0x16e) == '\x01', (bool)uVar2)) {
        ppppuStack_320 = (undefined8 ****)0x0;
        pcStack_318 = (char *)0x0;
        func_0x00461914(&UNK_0090fde4);
        func_0x0064280c();
        func_0x006427c0();
        FUN_00640948();
        if ((param_5 & 1) == 0) {
          ppppuStack_320 = (undefined8 ****)0x0;
          pcStack_318 = (char *)0x0;
          func_0x00461914(&UNK_0090fe01);
          func_0x0064280c();
          func_0x006427c0();
        }
        else {
          ppppuStack_320 = (undefined8 ****)0x0;
          pcStack_318 = (char *)0x0;
          func_0x00461914(&UNK_0090fe28);
          func_0x0064280c();
          func_0x006427c0();
        }
      }
    }
  }
  FUN_00641c48();
  func_0x00642878();
  if (lRam0000000000b63c50 == 0) {
    ppppuStack_320 = (undefined8 ****)0x0;
    pcStack_318 = (char *)0x0;
    func_0x00461914(&UNK_0090fe75);
    func_0x0064280c();
    func_0x006427c0();
LAB_00641ad0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
              (&ppppuStack_320,puStack_280,uStack_278);
    FUN_004575b8(puVar15,&ppppuStack_320);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_320);
    func_0x006427f8();
    pppuVar7 = &ppuStack_288;
    func_0x006420e4(pppuVar7);
    func_0x00642818(uStack_70);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x0064282c();
    func_0x006420e4(&ppuStack_288);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x28);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar15);
    __ZNSt9exceptionD2Ev();
    __Unwind_Resume(pppuVar7);
    if ((bRam0000000000b63be0 & 1) == 0) {
      iVar13 = 0xb63be0;
      ___cxa_guard_acquire();
      if (iVar13 != 0) {
        uRam0000000000b63be8 = 0x32aaaba7;
        uRam0000000000b63bf8 = 0;
        uRam0000000000b63bf0 = 0;
        uRam0000000000b63c08 = 0;
        uRam0000000000b63c00 = 0;
        uRam0000000000b63c18 = 0;
        uRam0000000000b63c10 = 0;
        uRam0000000000b63c28 = 0;
        uRam0000000000b63c20 = 0;
        lRam0000000000b63c38 = 0;
        lRam0000000000b63c30 = 0;
        uRam0000000000b63c48 = 0;
        uRam0000000000b63c40 = 0;
        lRam0000000000b63c50 = 0;
                    /* WARNING: Could not recover jumptable at 0x0077a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_00998e68)(0xb63be0);
        return;
      }
    }
    return;
  }
  ppppuStack_320 = (undefined8 ****)0x0;
  pcStack_318 = (char *)0x0;
  puVar6 = &UNK_0090fe46;
  func_0x00461914();
  func_0x0064280c();
  func_0x006427c0();
  plVar16 = (long *)(lRam0000000000b63c30 + (uRam0000000000b63c48 / 0x66) * 8);
  if (lRam0000000000b63c38 == lRam0000000000b63c30) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)(*plVar16 + (uRam0000000000b63c48 % 0x66) * 0x28);
  }
  FUN_00641cb4();
  do {
    puVar18 = puVar14 + -0xff0;
    do {
      uVar2 = 1;
      if (puVar14 == puVar6) goto LAB_00641ad0;
      puVar8 = puVar14;
      __ZNSt3__16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE
                ();
      ppuVar9 = &puStack_328;
      puStack_328 = puVar8;
      _localtime(ppuVar9);
      uVar11 = 0x14;
      _strftime(appuStack_2a0,0x14,&UNK_0090fe53,ppuVar9);
      pcVar10 = puVar14 + 0x10;
      uVar1 = *(uint *)(puVar14 + 8);
      FUN_00457d70();
      pcStack_318 = (char *)0x0;
      uStack_308 = 0;
      ppppuStack_320 = (undefined8 ****)appuStack_2a0;
      uStack_310 = (ulong)uVar1;
      pcStack_300 = pcVar10;
      uStack_2f8 = uVar11;
      func_0x00461914(&UNK_0090fe65);
      func_0x006427dc();
      func_0x00642804();
      puVar18 = puVar18 + 0x28;
      puVar14 = puVar14 + 0x28;
    } while ((undefined *)*plVar16 != puVar18);
    plVar16 = plVar16 + 1;
    puVar14 = (undefined *)*plVar16;
  } while( true );
}



/* Entry: 00641c48; end: 00641cb3;  */

void FUN_00641c48(void)

{
  int iVar1;
  
  if ((bRam0000000000b63be0 & 1) == 0) {
    iVar1 = 0xb63be0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000b63be8 = 0x32aaaba7;
      uRam0000000000b63bf8 = 0;
      uRam0000000000b63bf0 = 0;
      uRam0000000000b63c08 = 0;
      uRam0000000000b63c00 = 0;
      uRam0000000000b63c18 = 0;
      uRam0000000000b63c10 = 0;
      uRam0000000000b63c28 = 0;
      uRam0000000000b63c20 = 0;
      uRam0000000000b63c38 = 0;
      uRam0000000000b63c30 = 0;
      uRam0000000000b63c48 = 0;
      uRam0000000000b63c40 = 0;
      uRam0000000000b63c50 = 0;
                    /* WARNING: Could not recover jumptable at 0x0077a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_00998e68)(0xb63be0);
      return;
    }
  }
  return;
}



/* Entry: 00641cb4; end: 00641d17;  */

long FUN_00641cb4(void)

{
  if (lRam0000000000b63c38 == lRam0000000000b63c30) {
    return 0;
  }
  return *(long *)(lRam0000000000b63c30 +
                  ((ulong)(lRam0000000000b63c48 + lRam0000000000b63c50) / 0x66) * 8) +
         ((ulong)(lRam0000000000b63c48 + lRam0000000000b63c50) % 0x66) * 0x28;
}



/* Entry: 00641d18; end: 00641d6b;  */

void FUN_00641d18(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam0000000000b6c648 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0xb6c648,&ppuStack_20,FUN_00642170);
  }
  return;
}



/* Entry: 00641d6c; end: 00641e1f;  */

long FUN_00641d6c(long param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uStack_68;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  func_0x00642894();
  uStack_38 = extraout_x8;
  if (param_2 == 0) {
    FUN_00641e20();
    func_0x00642818(uStack_38);
    if ((bool)in_ZR) {
      pcRam0000000000b6c650 = (code *)*unaff_x19;
      func_0x0045e3a0(0xb6c658,unaff_x19 + 1);
      return 0xb6c650;
    }
  }
  else {
    uStack_68 = *unaff_x19;
    (**(code **)(unaff_x19[1] + 0x10))(auStack_60,unaff_x19 + 1);
    FUN_006408c8(param_2,&uStack_68);
    func_0x0064283c();
    func_0x00642818(uStack_38);
    param_1 = param_2;
    if ((bool)in_ZR) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  func_0x0064283c();
  func_0x0064288c();
  if ((bRam0000000000b6c680 & 1) == 0) {
    param_1 = 0xb6c680;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      pcRam0000000000b6c650 = FUN_00642024;
      ppuRam0000000000b6c658 = &PTR_DAT_00a0c648;
      lVar1 = 0xb6c680;
                    /* WARNING: Could not recover jumptable at 0x0077a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_00998e68)(0xb6c680);
      return lVar1;
    }
  }
  return param_1;
}



/* Entry: 00641e20; end: 00641e77;  */

void FUN_00641e20(void)

{
  int iVar1;
  
  if ((bRam0000000000b6c680 & 1) == 0) {
    iVar1 = 0xb6c680;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pcRam0000000000b6c650 = FUN_00642024;
      ppuRam0000000000b6c658 = &PTR_DAT_00a0c648;
                    /* WARNING: Could not recover jumptable at 0x0077a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_00998e68)(0xb6c680);
      return;
    }
  }
  return;
}



/* Entry: 00641e78; end: 00641f3f;  */

void FUN_00641e78(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_006428a8();
    uVar1 = *(undefined4 *)(param_1 + 0x13);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&ppuStack_48,param_1 + 0x1f);
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
      ppuStack_48 = &ppuStack_48;
    }
    (**(code **)(lRam0000000000b6c688 + 0x48))
              (0xb6c688,uVar1,ppuStack_48,uStack_40,*(undefined1 *)(param_2 + 8));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_48);
    func_0x00640928();
    if ((*(byte *)(param_1[1] + 8) & 1) == 0) goto LAB_00641f10;
  }
  FUN_00641e20();
  param_1 = (undefined8 *)0xb6c650;
LAB_00641f10:
  (*(code *)*param_1)(param_2);
  return;
}



/* Entry: 00641f40; end: 0064200f;  */

void FUN_00641f40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  dword *pdVar4;
  undefined1 auStack_78 [8];
  dword dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  FUN_0064177c(auStack_78,param_2,puVar2,uVar1,param_1);
  if ((int)param_2 != 0xd) {
    FUN_00641e78(param_1,auStack_78);
  }
  pdVar4 = &segment_command_00000020.maxprot;
  ___cxa_allocate_exception();
  *(undefined ***)pdVar4 = &PTR_FUN_00a0c618;
  pdVar4[2] = dStack_70;
  *(undefined8 *)(pdVar4 + 6) = uStack_60;
  *(undefined8 *)(pdVar4 + 4) = uStack_68;
  *(undefined8 *)(pdVar4 + 8) = uStack_58;
  uStack_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(pdVar4 + 0xc) = uStack_48;
  *(undefined8 *)(pdVar4 + 10) = uStack_50;
  *(undefined8 *)(pdVar4 + 0xe) = uStack_40;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  *(undefined1 *)(pdVar4 + 0x14) = uStack_28;
  *(undefined8 *)(pdVar4 + 0x12) = uStack_30;
  *(undefined8 *)(pdVar4 + 0x10) = uStack_38;
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x642000);
  (*pcVar3)();
}



/* Entry: 00642010; end: 00642023;  */

void FUN_00642010(void)

{
  FUN_004bd0dc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00642024; end: 0064203b;  */

void FUN_00642024(void)

{
  return;
}



/* Entry: 0064203c; end: 006420bb;  */

void FUN_0064203c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18) + (*(ulong *)(param_1 + 0x18) >> 1);
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = param_2;
  __Znwm();
  FUN_006420bc(lVar2,lVar2 + *(long *)(param_1 + 0x10),uVar1);
  *(ulong *)(param_1 + 8) = uVar1;
  *(ulong *)(param_1 + 0x18) = param_2;
  if (lVar2 != param_1 + 0x20) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar2);
    return;
  }
  return;
}



/* Entry: 006420bc; end: 006420ff;  */

undefined1  [16] FUN_006420bc(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *puVar1 = *param_1;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 00642100; end: 00642157;  */

undefined8 FUN_00642100(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  uStack_30 = *param_2;
  uStack_28 = 0;
  func_0x00461914(&UNK_0090fe8a);
  func_0x0064280c();
  func_0x00642804(uVar1,param_3,param_4,0xc,&uStack_30);
  return 0;
}



/* Entry: 00642158; end: 0064216f;  */

void FUN_00642158(void)

{
  return;
}



/* Entry: 00642170; end: 0064219b;  */

void FUN_00642170(void)

{
  _sqlite3_config(0x10);
  return;
}



/* Entry: 0064219c; end: 006425ef;  */

void FUN_0064219c(undefined8 param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  dword *pdVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long alStack_d0 [3];
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  FUN_00641c48();
  func_0x00642878();
  __ZNSt3__16chrono12system_clock3nowEv();
  pdVar9 = (dword *)&uStack_e8;
  FUN_00425cb4();
  plVar10 = plRam0000000000b63c40;
  plVar13 = plRam0000000000b63c38;
  plVar6 = plRam0000000000b63c30;
  plVar7 = plRam0000000000b63c28;
  uVar2 = (long)plRam0000000000b63c38 - (long)plRam0000000000b63c30;
  lVar8 = 0;
  if (uVar2 != 0) {
    lVar8 = ((long)plRam0000000000b63c38 - (long)plRam0000000000b63c30 >> 3) * 0x66 + -1;
  }
  if (lVar8 != uRam0000000000b63c50 + uRam0000000000b63c48) goto LAB_00642414;
  if (uRam0000000000b63c48 < 0x66) {
    if ((ulong)((long)plRam0000000000b63c40 - (long)plRam0000000000b63c28) <= uVar2) {
      plVar7 = (long *)((long)plRam0000000000b63c40 - (long)plRam0000000000b63c28 >> 2);
      if (plRam0000000000b63c40 == plRam0000000000b63c28) {
        plVar7 = (long *)((long)&MACH_HEADER.magic + 1);
      }
      uStack_98 = 0xb63c40;
      FUN_00642718();
      plVar10 = (long *)((long)plVar7 + uVar2);
      plVar12 = plVar7 + param_3;
      lVar5 = 0xff0;
      lVar8 = param_3;
      plStack_b8 = plVar7;
      plStack_b0 = plVar10;
      plStack_a8 = plVar10;
      plStack_a0 = plVar12;
      __Znwm();
      alStack_d0[1] = 0xb63c50;
      alStack_d0[2] = 0x66;
      plVar11 = plVar10;
      if (uVar2 == param_3 * 8) {
        if (plVar13 == plVar6) {
          alStack_d0[0] = lVar5;
          func_0x00642868();
          plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
          FUN_00642718();
          plStack_78 = plVar6 + lVar8;
          plStack_90 = plVar6;
          plStack_88 = plVar6;
          plStack_80 = plVar6;
          FUN_006426f0(&plStack_90,plVar10,plVar10);
          plVar1 = plStack_78;
          plVar11 = plStack_80;
          plVar13 = plStack_88;
          plVar6 = plStack_90;
          plStack_b8 = plStack_90;
          plStack_b0 = plStack_88;
          plStack_a0 = plStack_78;
          plStack_90 = plVar7;
          plStack_88 = plVar10;
          plStack_80 = plVar10;
          plStack_78 = plVar12;
          func_0x00642884();
          plVar7 = plVar6;
          plVar10 = plVar13;
          plVar12 = plVar1;
        }
        else {
          plVar10 = plVar10 + (((long)plVar10 - (long)plVar7 >> 3) + 1) / -2;
          plVar11 = plVar10;
          plStack_b0 = plVar10;
        }
      }
      plVar6 = plVar11 + 1;
      *plVar11 = lVar5;
      alStack_d0[0] = 0;
      plVar13 = plRam0000000000b63c38;
      plStack_a8 = plVar6;
      while (plVar13 != plRam0000000000b63c30) {
        plVar11 = plVar10;
        if (plVar10 == plVar7) {
          if (plVar6 < plVar12) {
            lVar8 = (long)plVar6 - (long)plVar7;
            plVar1 = plVar6 + (((long)plVar12 - (long)plVar6 >> 3) + 1) / 2;
            plVar11 = (long *)((long)plVar1 - ((long)plVar6 - (long)plVar7));
            plVar6 = plVar1;
            if (lVar8 != 0) {
              _memmove(plVar11,plVar10,lVar8);
            }
          }
          else {
            lVar8 = (long)plVar12 - (long)plVar7 >> 2;
            if ((long)plVar12 - (long)plVar7 == 0) {
              lVar8 = 1;
            }
            func_0x00642868();
            FUN_00642718(lVar8);
            func_0x0064284c(lVar8 << 1);
            FUN_006426f0(&plStack_90,plVar7,plVar6);
            plVar4 = plStack_78;
            plVar3 = plStack_80;
            plVar11 = plStack_88;
            plVar1 = plStack_90;
            plStack_90 = plVar7;
            plStack_88 = plVar10;
            plStack_80 = plVar6;
            plStack_78 = plVar12;
            func_0x00642884();
            plVar7 = plVar1;
            plVar6 = plVar3;
            plVar12 = plVar4;
          }
        }
        plVar13 = plVar13 + -1;
        plVar10 = plVar11 + -1;
        *plVar10 = *plVar13;
      }
      plStack_b8 = plRam0000000000b63c28;
      plStack_b0 = plRam0000000000b63c30;
      plStack_a0 = plRam0000000000b63c40;
      plStack_a8 = plRam0000000000b63c38;
      plRam0000000000b63c28 = plVar7;
      plRam0000000000b63c30 = plVar10;
      plRam0000000000b63c38 = plVar6;
      plRam0000000000b63c40 = plVar12;
      func_0x0064274c(alStack_d0);
      pdVar9 = (dword *)&plStack_b8;
      func_0x0064277c();
      goto LAB_00642414;
    }
    pdVar9 = &section_00000fa8.reserved2;
    __Znwm();
    if (plVar10 != plVar13) {
      plRam0000000000b63c38 = plVar13 + 1;
      *plVar13 = (long)pdVar9;
      goto LAB_00642414;
    }
    if (plVar6 == plVar7) {
      lVar8 = (long)plVar10 - (long)plVar6 >> 2;
      if (plVar13 == plVar6) {
        lVar8 = 1;
      }
      func_0x00642868();
      FUN_00642718(lVar8);
      func_0x0064284c(lVar8 << 1);
      FUN_006426f0(&plStack_90,plRam0000000000b63c30,plRam0000000000b63c38);
      plVar10 = plRam0000000000b63c40;
      plVar13 = plRam0000000000b63c38;
      plVar6 = plRam0000000000b63c30;
      plVar7 = plRam0000000000b63c28;
      plRam0000000000b63c30 = plStack_88;
      plRam0000000000b63c28 = plStack_90;
      plRam0000000000b63c40 = plStack_78;
      plRam0000000000b63c38 = plStack_80;
      plStack_88 = plVar6;
      plStack_90 = plVar7;
      plStack_78 = plVar10;
      plStack_80 = plVar13;
      func_0x00642884();
      plVar6 = plRam0000000000b63c30;
    }
    plVar6[-1] = (long)pdVar9;
  }
  else {
    plVar6 = plRam0000000000b63c30 + 1;
    pdVar9 = (dword *)*plRam0000000000b63c30;
    uRam0000000000b63c48 = uRam0000000000b63c48 - 0x66;
  }
  plRam0000000000b63c30 = plVar6;
  FUN_006425f0();
LAB_00642414:
  FUN_00641cb4();
  pdVar9[2] = param_2;
  *(undefined8 *)pdVar9 = param_1;
  *(undefined8 *)(pdVar9 + 6) = uStack_e0;
  *(undefined8 *)(pdVar9 + 4) = uStack_e8;
  *(undefined8 *)(pdVar9 + 8) = uStack_d8;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  uRam0000000000b63c50 = uRam0000000000b63c50 + 1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
  if (0x80 < uRam0000000000b63c50) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              (plRam0000000000b63c30[uRam0000000000b63c48 / 0x66] +
               (uRam0000000000b63c48 % 0x66) * 0x28 + 0x10);
    uRam0000000000b63c48 = uRam0000000000b63c48 + 1;
    uRam0000000000b63c50 = uRam0000000000b63c50 - 1;
    if (0xcb < uRam0000000000b63c48) {
      __ZdlPv(*plRam0000000000b63c30);
      plRam0000000000b63c30 = plRam0000000000b63c30 + 1;
      uRam0000000000b63c48 = uRam0000000000b63c48 - 0x66;
    }
  }
  func_0x006427f8();
  return;
}



/* Entry: 006425f0; end: 006426ef;  */

void FUN_006425f0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  if (puRam0000000000b63c38 == puRam0000000000b63c40) {
    if (puRam0000000000b63c30 < puRam0000000000b63c28 ||
        (long)puRam0000000000b63c30 - (long)puRam0000000000b63c28 == 0) {
      puVar6 = (undefined8 *)((long)puRam0000000000b63c38 - (long)puRam0000000000b63c28 >> 2);
      if ((long)puRam0000000000b63c38 - (long)puRam0000000000b63c28 == 0) {
        puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      uStack_50 = 0xb63c40;
      puVar4 = puVar6;
      puVar5 = puRam0000000000b63c30;
      FUN_00642718();
      puStack_68 = puVar4 + ((ulong)puVar6 >> 2);
      puStack_58 = puVar4 + (long)puVar5;
      puStack_70 = puVar4;
      puStack_60 = puStack_68;
      FUN_006426f0(&puStack_70,puRam0000000000b63c30,puRam0000000000b63c38);
      puVar3 = puRam0000000000b63c40;
      puVar5 = puRam0000000000b63c38;
      puVar4 = puRam0000000000b63c30;
      puVar6 = puRam0000000000b63c28;
      puRam0000000000b63c30 = puStack_68;
      puRam0000000000b63c28 = puStack_70;
      puRam0000000000b63c40 = puStack_58;
      puRam0000000000b63c38 = puStack_60;
      puStack_68 = puVar4;
      puStack_70 = puVar6;
      puStack_58 = puVar3;
      puStack_60 = puVar5;
      func_0x0064277c(&puStack_70);
    }
    else {
      lVar1 = (((long)puRam0000000000b63c30 - (long)puRam0000000000b63c28 >> 3) + 1) / -2;
      puVar6 = puRam0000000000b63c30 + lVar1;
      lVar2 = (long)puRam0000000000b63c38 - (long)puRam0000000000b63c30;
      if (lVar2 != 0) {
        _memmove(puVar6,puRam0000000000b63c30,lVar2);
      }
      puRam0000000000b63c38 = (undefined8 *)((long)puVar6 + lVar2);
      puRam0000000000b63c30 = puRam0000000000b63c30 + lVar1;
    }
  }
  *puRam0000000000b63c38 = param_1;
  puRam0000000000b63c38 = puRam0000000000b63c38 + 1;
  return;
}



/* Entry: 006426f0; end: 00642717;  */

void FUN_006426f0(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 00642718; end: 006427bf;  */

undefined1  [16] FUN_00642718(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  FUN_0040cee8();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 006427c0; end: 006428a7;  */

/* WARNING: Removing unreachable block (ram,0x007224fc) */
/* WARNING: Removing unreachable block (ram,0x00722504) */
/* WARNING: Removing unreachable block (ram,0x0072250c) */
/* WARNING: Removing unreachable block (ram,0x00722528) */
/* WARNING: Removing unreachable block (ram,0x0072254c) */
/* WARNING: Removing unreachable block (ram,0x007225d4) */
/* WARNING: Removing unreachable block (ram,0x00722574) */
/* WARNING: Removing unreachable block (ram,0x0072255c) */
/* WARNING: Removing unreachable block (ram,0x007225f0) */
/* WARNING: Removing unreachable block (ram,0x00722580) */
/* WARNING: Removing unreachable block (ram,0x00722604) */
/* WARNING: Removing unreachable block (ram,0x007225ac) */
/* WARNING: Removing unreachable block (ram,0x007225e0) */
/* WARNING: Removing unreachable block (ram,0x007225c8) */
/* WARNING: Removing unreachable block (ram,0x00722568) */
/* WARNING: Removing unreachable block (ram,0x007225a0) */
/* WARNING: Removing unreachable block (ram,0x00722594) */
/* WARNING: Removing unreachable block (ram,0x007225bc) */
/* WARNING: Removing unreachable block (ram,0x00722540) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_006427c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  code *pcVar9;
  int extraout_w8;
  uint uVar10;
  uint uVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  uint uVar13;
  int extraout_w9;
  uint uVar14;
  char *unaff_x20;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  char *pcStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_88 [8];
  
  lVar15 = param_5;
  func_0x00729efc(&stack0x000000a8,param_4);
  func_0x00729854();
  if (lVar15 == 2) {
    pcVar7 = unaff_x20;
    FUN_00722310();
    uVar19 = (uint)param_1;
    if ((int)pcVar7 == 0) goto LAB_007223e0;
  }
  else {
LAB_007223e0:
    pcVar7 = unaff_x20 + param_5;
    if (param_5 < 0x20) {
LAB_007223fc:
      do {
        uVar19 = (uint)param_1;
        pcVar8 = unaff_x20;
        do {
          unaff_x20 = pcVar8;
          uVar4 = unaff_x20 == pcVar7;
          if ((bool)uVar4) {
            func_0x0072a31c(auStack_88);
            goto LAB_007224d8;
          }
          if (*unaff_x20 == '}') {
            bVar5 = unaff_x20 + 1 == pcVar7;
            if (bVar5) goto LAB_00722618;
            func_0x0072a104();
            uVar19 = (uint)param_1;
            if (!bVar5) goto LAB_00722618;
            func_0x00729fb4();
            unaff_x20 = unaff_x20 + 2;
            goto LAB_007223fc;
          }
          pcVar8 = unaff_x20 + 1;
        } while (*unaff_x20 != '{');
        func_0x00729fb4();
        FUN_007257c0(unaff_x20,pcVar7,auStack_88);
      } while( true );
    }
    puStack_90 = auStack_88;
    while( true ) {
      uVar19 = (uint)param_1;
      uVar4 = 1;
      if (unaff_x20 == pcVar7) break;
      uVar4 = *unaff_x20 == '{';
      pcStack_98 = unaff_x20;
      if (!(bool)uVar4) {
        pcVar8 = unaff_x20 + 1;
        FUN_007244a8(pcVar8,pcVar7,0x7b,&pcStack_98);
        uVar19 = (uint)param_1;
        if ((int)pcVar8 == 0) {
          FUN_007271d4(&puStack_90,unaff_x20,pcVar7);
          break;
        }
      }
      FUN_007271d4(&puStack_90,unaff_x20,pcStack_98);
      FUN_007257c0(pcStack_98,pcVar7,auStack_88);
      unaff_x20 = pcStack_98;
    }
LAB_007224d8:
    func_0x0072975c(extraout_x8);
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
LAB_00722618:
    func_0x0072a1f4();
  }
  func_0x007299d8();
  pcVar9 = FUN_00722620;
  func_0x0072a4fc();
  uVar10 = uVar19 & 0x7fffff;
  if ((uVar19 & 0x7f800000) == 0) {
    if (uVar10 == 0) {
      uVar19 = 0;
      uVar12 = 0;
      goto LAB_0072293c;
    }
    uVar11 = 0xffffff6b;
LAB_00722660:
    uVar19 = (int)(uVar11 * 0x134413) >> 0x16;
    lVar15 = ((long)((ulong)(uVar11 * 0x134413) << 0x20) >> 0x36) + -1;
    uVar17 = *(ulong *)(&UNK_0083c780 + (ulong)(0x20 - uVar19) * 8);
    uVar14 = uVar11 + ((int)(uVar19 * -0x1a934f + 0x1a934f) >> 0x13);
    uVar2 = uVar10 * 2;
    uVar6 = uVar10 << 1 | 1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17;
    uVar13 = SUB164(ZEXT416(uVar6 << (ulong)(uVar14 & 0x1f)) * auVar3,8);
    uVar16 = uVar13 / 100;
    uVar13 = uVar13 % 100;
    uVar18 = (uint)(uVar17 >> ((ulong)~uVar14 & 0x3f));
    if (uVar18 > uVar13 || uVar13 == uVar18) {
      if (uVar18 <= uVar13) {
        if ((((uVar10 & 1) == 0) &&
            (uVar12 = (ulong)(uVar2 - 1), func_0x0072a180(), (uVar12 & 1) != 0)) ||
           ((uVar17 * (uVar2 - 1) >> ((ulong)-uVar14 & 0x3f) & 1) != 0)) goto LAB_00722824;
      }
      else {
        if ((((uVar10 & 1) == 0) || (uVar13 != 0)) || (func_0x0072a180(), uVar6 == 0)) {
LAB_00722824:
          uVar10 = 0;
          uVar11 = (uVar16 & 0xaaaaaaaa | 0x80) >> 1 | (uVar16 & 0x55555555) << 1;
          uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
          while ((uVar14 = uVar11 & 6, (int)uVar10 < (int)(uVar11 - 1) &&
                 (uVar14 = uVar10, uVar16 * -0x3d70a3d7 < 0xa3d70a4))) {
            uVar10 = uVar10 + 2;
            uVar16 = uVar16 * -0x3d70a3d7;
          }
          uVar10 = uVar14;
          uVar6 = uVar16;
          if (uVar16 * -0x33333333 < 0x33333334) {
            uVar10 = uVar14 + 1;
            uVar6 = uVar16 * -0x33333333;
          }
          if (uVar14 < uVar11) {
            uVar16 = uVar6;
            uVar14 = uVar10;
          }
          goto LAB_00722934;
        }
        uVar16 = uVar16 - 1;
        uVar13 = 100;
      }
    }
    uVar10 = (uVar13 - (uVar18 >> 1)) + 5;
    if ((uVar10 & 1) == 0) {
      uVar6 = (uVar10 >> 1) * 0xcccd;
      uVar10 = uVar16 * 10 + (uVar6 >> 0x12);
      uVar12 = (ulong)uVar10;
      if ((uVar6 >> 2 & 0x3fff) < 0xccd) {
        if ((uVar17 * uVar2 >> ((ulong)-uVar14 & 0x3f) & 1) == 0) {
          uVar12 = (ulong)(uVar10 - 1);
        }
        else if ((int)uVar11 < 0x28) {
          if ((int)uVar11 < 7) {
            if (((int)uVar11 < -2) &&
               (uVar14 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1,
               uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2,
               uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4,
               uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8,
               (int)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10) <= (int)((int)lVar15 - uVar11)))
            goto LAB_0072293c;
          }
          else {
            lVar15 = lVar15 * 8;
            if (*(uint *)(&UNK_0083c5ac + lVar15) < *(int *)(&UNK_0083c5a8 + lVar15) * uVar2)
            goto LAB_0072293c;
          }
          uVar12 = (ulong)(uVar10 & 0xfffffffe);
        }
      }
    }
    else {
      uVar12 = (ulong)(uVar16 * 10 + (uVar10 * 0xcccd >> 0x13));
    }
  }
  else {
    uVar11 = ((uVar19 & 0x7f800000) >> 0x17) - 0x96;
    if (uVar10 != 0) {
      uVar10 = uVar10 | 0x800000;
      goto LAB_00722660;
    }
    func_0x0072a358();
    uVar19 = (int)(extraout_w9 + uVar11 * extraout_w8) >> 0x16;
    iVar1 = uVar11 + ((int)(uVar19 * -0x1a934f) >> 0x13);
    uVar12 = *(ulong *)(&UNK_0083c780 + (ulong)(0x1f - uVar19) * 8);
    uVar17 = (ulong)(0x28 - iVar1);
    uVar10 = (uint)(uVar12 - (uVar12 >> 0x19) >> (uVar17 & 0x3f));
    if ((uVar11 & 0xfffffffe) != 2) {
      uVar10 = uVar10 + 1;
    }
    uVar16 = (uint)(uVar12 + (uVar12 >> 0x18) >> (uVar17 & 0x3f)) / 10;
    if (uVar16 * 10 < uVar10) {
      uVar14 = (int)(uVar12 >> ((ulong)(0x27 - iVar1) & 0x3f)) + 1U >> 1;
      if (uVar11 == 0xffffffdd) {
        uVar12 = (ulong)(uVar14 & 0x7ffffffe);
      }
      else {
        if (uVar14 < uVar10) {
          uVar14 = uVar14 + 1;
        }
        uVar12 = (ulong)uVar14;
      }
      goto LAB_0072293c;
    }
    uVar10 = 0;
    uVar11 = (uVar16 & 0xaaaaaaaa | 0x80) >> 1 | (uVar16 & 0x55555555) << 1;
    uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
    while ((uVar14 = uVar11 & 6, (int)uVar10 < (int)(uVar11 - 1) &&
           (uVar14 = uVar10, uVar16 * -0x3d70a3d7 < 0xa3d70a4))) {
      uVar10 = uVar10 + 2;
      uVar16 = uVar16 * -0x3d70a3d7;
    }
    uVar10 = uVar14;
    uVar6 = uVar16;
    if (uVar16 * -0x33333333 < 0x33333334) {
      uVar10 = uVar14 + 1;
      uVar6 = uVar16 * -0x33333333;
    }
    if (uVar14 < uVar11) {
      uVar16 = uVar6;
      uVar14 = uVar10;
    }
LAB_00722934:
    uVar12 = (ulong)(uVar16 >> (ulong)(uVar14 & 0x1f));
    uVar19 = uVar19 + 1 + uVar14;
  }
LAB_0072293c:
  func_0x00729fe8(uVar12 | (ulong)uVar19 << 0x20,pcVar9);
  return;
}



/* Entry: 006428a8; end: 006428fb;  */

void FUN_006428a8(void)

{
  int iVar1;
  
  if ((bRam0000000000b6c6a0 & 1) == 0) {
    iVar1 = 0xb6c6a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000000b6c690 = 0;
      uRam0000000000b6c698 = 0;
      ppuRam0000000000b6c688 = &PTR_FUN_00a0c6c8;
                    /* WARNING: Could not recover jumptable at 0x0077a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_00998e68)(0xb6c6a0);
      return;
    }
  }
  return;
}



/* Entry: 006428fc; end: 0064293b;  */

void FUN_006428fc(void)

{
  return;
}


