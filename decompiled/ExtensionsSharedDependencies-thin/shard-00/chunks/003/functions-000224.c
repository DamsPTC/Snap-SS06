/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004c7bb0; end: 004c7be7;  */

void FUN_004c7bb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x007799f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_00999f38)();
  return;
}



/* Entry: 004c7be8; end: 004c7c97;  */

void FUN_004c7be8(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar5;
  
  while( true ) {
    puVar4 = param_1;
    puVar2 = param_3;
    param_3 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    puVar3 = puVar2;
    FUN_004c76ac();
    *(undefined1 **)((long)register0x00000008 + -0x48) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x40) = puVar3;
    puVar1 = puVar2;
    FUN_004c76ac();
    *(undefined1 **)((long)register0x00000008 + -0x58) = puVar1;
    *(undefined1 **)((long)register0x00000008 + -0x50) = puVar3;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x48);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x58);
    FUN_00523d20();
    *(undefined1 **)((long)register0x00000008 + -0x38) = puVar1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = puVar3;
    FUN_004baa7c((undefined1 *)((long)register0x00000008 + -0x70),
                 (undefined1 *)((long)register0x00000008 + -0x38),
                 (undefined1 *)((long)register0x00000008 + -0x28));
    uVar5 = *(undefined8 *)((long)register0x00000008 + -0x70);
    puVar4[1] = *(undefined8 *)((long)register0x00000008 + -0x68);
    *puVar4 = uVar5;
    puVar4[2] = *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    FUN_0040d974();
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    unaff_x30 = FUN_004c7c98;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    param_2 = param_3;
    param_1 = extraout_x8;
    unaff_x19 = puVar4;
    unaff_x20 = puVar2;
  }
  return;
}



/* Entry: 004c7c98; end: 004c7c9f;  */

void FUN_004c7c98(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *extraout_x8;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar5;
  
  while( true ) {
    puVar4 = param_1;
    puVar2 = param_2;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    puVar1 = puVar2;
    puVar3 = puVar2;
    FUN_004c76ac();
    *(undefined1 **)((long)register0x00000008 + -0x48) = puVar1;
    *(undefined1 **)((long)register0x00000008 + -0x40) = puVar3;
    puVar1 = puVar2;
    FUN_004c76ac();
    *(undefined1 **)((long)register0x00000008 + -0x58) = puVar1;
    *(undefined1 **)((long)register0x00000008 + -0x50) = puVar3;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x48);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x58);
    FUN_00523d20();
    *(undefined1 **)((long)register0x00000008 + -0x38) = puVar1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = puVar3;
    FUN_004baa7c((undefined1 *)((long)register0x00000008 + -0x70),
                 (undefined1 *)((long)register0x00000008 + -0x38),
                 (undefined1 *)((long)register0x00000008 + -0x28));
    uVar5 = *(undefined8 *)((long)register0x00000008 + -0x70);
    puVar4[1] = *(undefined8 *)((long)register0x00000008 + -0x68);
    *puVar4 = uVar5;
    puVar4[2] = *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    FUN_0040d974();
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x28))
    break;
    ___stack_chk_fail();
    unaff_x30 = FUN_004c7c98;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    param_1 = extraout_x8;
    unaff_x19 = puVar4;
    unaff_x20 = puVar2;
  }
  return;
}



/* Entry: 004c7ca0; end: 004c7d1b;  */

void FUN_004c7ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  auStack_50[0] = 0;
  uStack_28 = 0;
  auStack_70[0] = 0;
  uStack_58 = 0;
  FUN_00462e1c(auStack_90);
  func_0x004cd360();
  func_0x004cd1dc(param_1,param_2,param_3,auStack_50,param_5,auStack_70,auStack_90);
  func_0x004cd328();
  func_0x004cd2dc();
  func_0x004cd2d4();
  FUN_00459de4(auStack_50);
  return;
}



/* Entry: 004c7d1c; end: 004c7d3b;  */

undefined4 FUN_004c7d1c(uint param_1)

{
  if (param_1 < 0x11) {
    return *(undefined4 *)(&UNK_0080a9e8 + (ulong)param_1 * 4);
  }
  return 7;
}



/* Entry: 004c7d3c; end: 004c7da7;  */

bool FUN_004c7d3c(int param_1,int *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [24];
  
  if (param_1 == 3 && *param_2 == 8) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_2 + 2)
    ;
    puVar2 = auStack_38;
    FUN_004c7da8(puVar2,"Received message larger than max",0);
    bVar1 = puVar2 != (undefined1 *)0xffffffffffffffff;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 004c7da8; end: 004c7dfb;  */

ulong FUN_004c7da8(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar3 = param_1;
  if ((long)uVar4 < 0) {
    puVar3 = (undefined8 *)*param_1;
    uVar4 = param_1[1];
  }
  lVar1 = param_2;
  _strlen();
  if (uVar4 < param_3) {
    param_3 = 0xffffffffffffffff;
  }
  else if (lVar1 != 0) {
    lVar2 = (long)puVar3 + param_3;
    FUN_004c97b8(lVar2,(long)puVar3 + uVar4,param_2,param_2 + lVar1);
    param_3 = lVar2 - (long)puVar3;
    if (lVar2 == (long)puVar3 + uVar4) {
      param_3 = 0xffffffffffffffff;
    }
  }
  return param_3;
}



/* Entry: 004c7dfc; end: 004c7ec7;  */

void FUN_004c7dfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x0063e6bc();
  FUN_00425cb4(&uStack_88,"DeltaSync response exceeded the client maximum inbound message size");
  uVar1 = 3;
  FUN_006acd74(&uStack_a0);
  FUN_006ad008();
  uStack_38 = uStack_90;
  auStack_70[0] = 0xe;
  uStack_68 = 8;
  uStack_58 = uStack_80;
  uStack_60 = uStack_88;
  uStack_50 = uStack_78;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_40 = uStack_98;
  uStack_48 = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_28 = 1;
  uStack_30 = uVar1;
  FUN_0063e7a8(param_1,auStack_70);
  FUN_004c9848(auStack_70);
  func_0x004cd2e4();
  func_0x004cd2cc();
  return;
}



/* Entry: 004c7ec8; end: 004c82e7;  */

ulong * FUN_004c7ec8(ulong *param_1,long *param_2,ulong *param_3,ulong *param_4,undefined8 *param_5,
                    ulong *param_6,undefined8 *param_7,undefined8 *param_8,ulong *param_9)

{
  qword *pqVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  qword *pqVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  dword **ppdVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w11;
  int extraout_w11_00;
  dword *pdVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined1 auStack_440 [24];
  undefined1 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined1 auStack_3f0 [48];
  undefined1 auStack_3c0 [176];
  ulong auStack_310 [22];
  undefined1 uStack_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  ulong *puStack_220;
  dword *pdStack_218;
  qword *pqStack_210;
  undefined8 *puStack_208;
  qword *pqStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  ulong *puStack_1d8;
  ulong *puStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  undefined8 *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 uStack_188;
  undefined1 uStack_f7;
  dword *pdStack_e0;
  qword *pqStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  dword *pdStack_98;
  qword *pqStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  puStack_1b0 = param_1 + 1;
  *puStack_1b0 = 0;
  param_1[2] = 0;
  *param_1 = (ulong)&PTR_DAT_009ee8d8;
  puStack_1b8 = param_1 + 3;
  *puStack_1b8 = 0;
  param_1[4] = 0;
  uVar13 = param_3[1];
  uVar15 = *param_3;
  puStack_1c0 = param_1 + 5;
  param_1[6] = param_3[1];
  *puStack_1c0 = uVar15;
  puStack_1a8 = param_5;
  if (uVar13 != 0) {
    do {
      func_0x004cd28c();
    } while (extraout_w10 != 0);
  }
  uVar13 = param_6[1];
  uVar15 = *param_6;
  puStack_1c8 = param_1 + 7;
  param_1[8] = param_6[1];
  *puStack_1c8 = uVar15;
  if (uVar13 != 0) {
    do {
      func_0x004cd28c();
    } while (extraout_w10_00 != 0);
  }
  puStack_1d0 = param_1 + 9;
  *puStack_1d0 = 0;
  param_1[10] = 0;
  uVar13 = param_4[1];
  uVar15 = *param_4;
  puVar9 = param_1 + 0xb;
  param_1[0xc] = param_4[1];
  *puVar9 = uVar15;
  if (uVar13 != 0) {
    do {
      func_0x004cd28c();
    } while (extraout_w10_01 != 0);
  }
  uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
  uStack_188 = 0;
  FUN_004c35cc(param_1 + 0xd,param_4,0x6f,&uStack_1a0);
  func_0x004cd320();
  uVar13 = param_9[1];
  uVar15 = *param_9;
  param_1[0x12] = param_9[1];
  param_1[0x11] = uVar15;
  if (uVar13 != 0) {
    do {
      func_0x004cd28c();
    } while (extraout_w10_02 != 0);
  }
  puStack_1d8 = param_1 + 0xd;
  FUN_006ad024(auStack_b8,"messaging::MessagingServiceImpl::Create");
  pqVar4 = &section_00000068.addr;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_009eea08;
  pdVar16 = (dword *)(pqVar4 + 3);
  *(undefined ***)pdVar16 = &PTR_DAT_009eea58;
  uVar13 = *param_4;
  if ((uVar13 == 0) || (func_0x004cd314(), uVar13 == 0)) {
    FUN_00425cb4(pqVar4 + 4,"");
  }
  else {
    uVar13 = *param_4;
    func_0x004cd314(uVar13);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (pqVar4 + 4,uVar13 + 0x18);
  }
  pqVar4[8] = 0;
  *(undefined1 *)(pqVar4 + 9) = 0;
  *(undefined1 *)(pqVar4 + 0xc) = 0;
  lVar14 = param_7[1];
  uVar17 = *param_7;
  pqVar4[0xe] = param_7[1];
  pqVar4[0xd] = uVar17;
  if (lVar14 != 0) {
    do {
      func_0x004cd28c();
    } while (extraout_w10_03 != 0);
  }
  lVar14 = param_8[1];
  uVar17 = *param_8;
  pqVar4[0x10] = param_8[1];
  pqVar4[0xf] = uVar17;
  if (lVar14 != 0) {
    do {
      func_0x004cd28c();
    } while (extraout_w10_04 != 0);
  }
  pqVar4[7] = 900000;
  pdStack_e0 = pdVar16;
  pqStack_d8 = pqVar4;
  FUN_005b90a8(&uStack_1a0,*param_2 + 0x80);
  FUN_0046708c(&uStack_88,1);
  puStack_78[1] = 0;
  puStack_78[2] = 0;
  *puStack_78 = &PTR_FUN_009e6310;
  pdStack_e0 = (dword *)0x0;
  pqStack_d8 = (qword *)0x0;
  lStack_a0 = *param_2;
  *param_2 = 0;
  ppdVar12 = &pdStack_98;
  puVar11 = puStack_1a8;
  pdStack_98 = pdVar16;
  pqStack_90 = pqVar4;
  FUN_0046717c(puStack_78 + 3,param_3,puStack_1a8,ppdVar12,&lStack_a0,1,uStack_f7,0);
  func_0x00465c64(&lStack_a0);
  FUN_00466354(&pdStack_98);
  puVar8 = puStack_78;
  puStack_78 = (undefined8 *)0x0;
  FUN_00467070(&uStack_d0,puVar8 + 3);
  FUN_0046c854(&uStack_88);
  func_0x00465c30(&uStack_1a0);
  FUN_004c9bb4(&pdStack_e0);
  pcVar5 = segment_command_00000020.segname + 8;
  __Znwm();
  *(qword *)(pcVar5 + 8) = 0;
  *(qword *)(pcVar5 + 0x10) = 0;
  *(undefined ***)pcVar5 = &PTR_FUN_009eeaa0;
  pqVar1 = (qword *)(pcVar5 + 0x18);
  uStack_198 = uStack_c8;
  uStack_1a0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar10 = &uStack_1a0;
  FUN_00512ba0(pqVar1);
  func_0x00465de0(&uStack_1a0);
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_198 = param_1[4];
  uStack_1a0 = param_1[3];
  param_1[3] = (ulong)pqVar1;
  param_1[4] = (ulong)pcVar5;
  func_0x004c98e0(&uStack_1a0);
  func_0x004c98e0(&uStack_88);
  func_0x00465de0(&uStack_d0);
  puVar6 = auStack_b8;
  FUN_006ad0cc();
  func_0x004cd34c(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00465de0(&uStack_d0);
    FUN_006ad0cc(auStack_b8);
    FUN_004c47b8(param_1 + 0x11);
    FUN_00457530(puStack_1d8);
    FUN_004c45a4(puVar9);
    func_0x004c47dc(puStack_1d0);
    func_0x004c4824(puStack_1c8);
    func_0x0045a078(puStack_1c0);
    func_0x004c98e0(puStack_1b8);
    puVar7 = puStack_1b0;
    FUN_004c4854();
    func_0x004cd1f8();
    pcStack_1e8 = FUN_004c82e8;
    uStack_228 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
    auStack_310[0]._0_1_ = 0;
    uStack_260 = 0;
    uVar3 = (char)puVar7[0x10] == '\x01';
    puStack_220 = puVar9;
    pdStack_218 = pdVar16;
    pqStack_210 = pqVar4;
    puStack_208 = param_7;
    pqStack_200 = pqVar1;
    puStack_1f8 = puVar6;
    puStack_1f0 = &stack0xfffffffffffffff0;
    if ((bool)uVar3) {
      FUN_00425cb4(auStack_258,"x-merlin-tweaks-bin");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_240,puVar7 + 0xd);
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_400 = 0x3f800000;
      func_0x00459518(&uStack_420,auStack_258);
      FUN_00465ac8(auStack_3f0,&uStack_420);
      auStack_440[0] = 0;
      uStack_428 = 0;
      func_0x004cd374();
      func_0x004cd1dc(auStack_3c0);
      FUN_004c8520(auStack_310,auStack_3c0);
      FUN_00463c7c(auStack_3c0);
      func_0x004cd2dc();
      func_0x004cd2d4();
      FUN_00457530(auStack_440);
      FUN_00459de4(auStack_3f0);
      func_0x00459d84(&uStack_420);
      func_0x00459d5c(auStack_258);
    }
    puVar8 = (undefined8 *)puVar7[0x11];
    FUN_004c85f0(puVar8,0,auStack_310,ppdVar12);
    uVar13 = puVar7[3];
    lVar14 = puVar11[1];
    uVar19 = puVar11[1];
    uVar17 = *puVar11;
    func_0x004cd250();
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = &PTR_DAT_009eeaf0;
    puStack_490 = puVar8 + 3;
    *puStack_490 = &PTR_DAT_009eeb40;
    puVar8[5] = uVar19;
    puVar8[4] = uVar17;
    if (lVar14 != 0) {
      do {
        func_0x004cd110();
        puStack_490 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *(undefined4 *)(puVar8 + 6) = 0;
    *(undefined1 *)(puVar8 + 7) = 0;
    *(undefined1 *)(puVar8 + 10) = 0;
    uVar15 = puVar7[8];
    uVar18 = puVar7[7];
    puVar8[0xc] = puVar7[8];
    puVar8[0xb] = uVar18;
    if (uVar15 != 0) {
      do {
        func_0x004cd110();
        puStack_490 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    puStack_488 = puVar8;
    FUN_00512bd4(uVar13,puVar10,auStack_310,&puStack_490);
    FUN_004ca36c(&puStack_490);
    puVar9 = auStack_310;
    FUN_00463c5c();
    func_0x004cd34c(uStack_228);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      FUN_00463c7c(auStack_3c0);
      func_0x004cd2dc();
      func_0x004cd2d4();
      FUN_00457530(auStack_440);
      FUN_00459de4(auStack_3f0);
      func_0x00459d84(&uStack_420);
      func_0x00459d5c(auStack_258);
      puVar9 = auStack_310;
      FUN_00463c5c();
      func_0x004cd1f8();
      if ((char)puVar9[0x16] == '\x01') {
        uVar13 = *puVar10;
        *(char *)(puVar9 + 1) = (char)puVar10[1];
        *puVar9 = uVar13;
        cVar2 = (char)puVar9[7];
        if (cVar2 == (char)puVar10[7]) {
          if (cVar2 != '\0') {
            func_0x004680ac(puVar9 + 2,puVar10 + 2);
          }
        }
        else if (cVar2 == '\0') {
          FUN_00463b94(puVar9 + 2,puVar10 + 2);
        }
        else {
          func_0x00459d84(puVar9 + 2);
          *(undefined1 *)(puVar9 + 7) = 0;
        }
        *(short *)(puVar9 + 8) = (short)puVar10[8];
        FUN_004575fc(puVar9 + 9,puVar10 + 9);
        FUN_004575fc(puVar9 + 0xd,puVar10 + 0xd);
        uVar3 = *(undefined1 *)((long)puVar10 + 0x8c);
        *(int *)(puVar9 + 0x11) = (int)puVar10[0x11];
        *(undefined1 *)((long)puVar9 + 0x8c) = uVar3;
        FUN_004575fc(puVar9 + 0x12,puVar10 + 0x12);
      }
      else {
        FUN_00463a54(puVar9,puVar10);
      }
      return puVar9;
    }
    return puVar9;
  }
  return param_1;
}



/* Entry: 004c82e8; end: 004c851f;  */

undefined8 * FUN_004c82e8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 auStack_260 [24];
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined1 auStack_210 [48];
  undefined1 auStack_1e0 [176];
  undefined8 auStack_130 [22];
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  auStack_130[0]._0_1_ = 0;
  uStack_80 = 0;
  uVar2 = *(char *)(param_1 + 0x80) == '\x01';
  if ((bool)uVar2) {
    FUN_00425cb4(auStack_78,"x-merlin-tweaks-bin");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_60,param_1 + 0x68);
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_220 = 0x3f800000;
    func_0x00459518(&uStack_240,auStack_78);
    FUN_00465ac8(auStack_210,&uStack_240);
    auStack_260[0] = 0;
    uStack_248 = 0;
    func_0x004cd374();
    func_0x004cd1dc(auStack_1e0);
    FUN_004c8520(auStack_130,auStack_1e0);
    FUN_00463c7c(auStack_1e0);
    func_0x004cd2dc();
    func_0x004cd2d4();
    FUN_00457530(auStack_260);
    FUN_00459de4(auStack_210);
    func_0x00459d84(&uStack_240);
    func_0x00459d5c(auStack_78);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x88);
  FUN_004c85f0(puVar3,0,auStack_130,param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = param_3[1];
  uVar7 = param_3[1];
  uVar6 = *param_3;
  func_0x004cd250();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_009eeaf0;
  puStack_2b0 = puVar3 + 3;
  *puStack_2b0 = &PTR_DAT_009eeb40;
  puVar3[5] = uVar7;
  puVar3[4] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x004cd110();
      puStack_2b0 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined4 *)(puVar3 + 6) = 0;
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined1 *)(puVar3 + 10) = 0;
  lVar5 = *(long *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puVar3[0xc] = *(undefined8 *)(param_1 + 0x40);
  puVar3[0xb] = uVar6;
  if (lVar5 != 0) {
    do {
      func_0x004cd110();
      puStack_2b0 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puStack_2a8 = puVar3;
  FUN_00512bd4(uVar4,param_2,auStack_130,&puStack_2b0);
  FUN_004ca36c(&puStack_2b0);
  puVar3 = auStack_130;
  FUN_00463c5c();
  func_0x004cd34c(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    FUN_00463c7c(auStack_1e0);
    func_0x004cd2dc();
    func_0x004cd2d4();
    FUN_00457530(auStack_260);
    FUN_00459de4(auStack_210);
    func_0x00459d84(&uStack_240);
    func_0x00459d5c(auStack_78);
    puVar3 = auStack_130;
    FUN_00463c5c();
    func_0x004cd1f8();
    if (*(char *)(puVar3 + 0x16) == '\x01') {
      uVar4 = *param_2;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_2 + 1);
      *puVar3 = uVar4;
      cVar1 = *(char *)(puVar3 + 7);
      if (cVar1 == *(char *)(param_2 + 7)) {
        if (cVar1 != '\0') {
          func_0x004680ac(puVar3 + 2,param_2 + 2);
        }
      }
      else if (cVar1 == '\0') {
        FUN_00463b94(puVar3 + 2,param_2 + 2);
      }
      else {
        func_0x00459d84(puVar3 + 2);
        *(undefined1 *)(puVar3 + 7) = 0;
      }
      *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(param_2 + 8);
      FUN_004575fc(puVar3 + 9,param_2 + 9);
      FUN_004575fc(puVar3 + 0xd,param_2 + 0xd);
      uVar2 = *(undefined1 *)((long)param_2 + 0x8c);
      *(undefined4 *)(puVar3 + 0x11) = *(undefined4 *)(param_2 + 0x11);
      *(undefined1 *)((long)puVar3 + 0x8c) = uVar2;
      FUN_004575fc(puVar3 + 0x12,param_2 + 0x12);
    }
    else {
      FUN_00463a54(puVar3,param_2);
    }
    return puVar3;
  }
  return puVar3;
}



/* Entry: 004c8520; end: 004c85ef;  */

undefined8 * FUN_004c8520(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x16) == '\x01') {
    uVar3 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    *param_1 = uVar3;
    cVar1 = *(char *)(param_1 + 7);
    if (cVar1 == *(char *)(param_2 + 7)) {
      if (cVar1 != '\0') {
        func_0x004680ac(param_1 + 2,param_2 + 2);
      }
    }
    else if (cVar1 == '\0') {
      FUN_00463b94(param_1 + 2,param_2 + 2);
    }
    else {
      func_0x00459d84(param_1 + 2);
      *(undefined1 *)(param_1 + 7) = 0;
    }
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
    FUN_004575fc(param_1 + 9,param_2 + 9);
    FUN_004575fc(param_1 + 0xd,param_2 + 0xd);
    uVar2 = *(undefined1 *)((long)param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    *(undefined1 *)((long)param_1 + 0x8c) = uVar2;
    FUN_004575fc(param_1 + 0x12,param_2 + 0x12);
  }
  else {
    FUN_00463a54(param_1,param_2);
  }
  return param_1;
}



/* Entry: 004c85f0; end: 004c86db;  */

void FUN_004c85f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_110 [40];
  undefined1 uStack_e8;
  undefined1 auStack_e0 [176];
  
  FUN_004c8e58();
  if (*(char *)(param_4 + 6) == '\x01') {
    if ((*(byte *)(param_3 + 0x16) & 1) == 0) {
      auStack_110[0] = 0;
      uStack_e8 = 0;
      func_0x004cd374();
      func_0x004cd360();
      func_0x004cd1dc(auStack_e0);
      FUN_004c8520(param_3,auStack_e0);
      FUN_00463c7c(auStack_e0);
      func_0x004cd328();
      func_0x004cd2dc();
      func_0x004cd2d4();
      FUN_00459de4(auStack_110);
    }
    if (*(char *)(param_4 + 1) == '\x01') {
      uVar1 = *param_4;
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_4 + 1);
      *param_3 = uVar1;
    }
    if (*(char *)(param_4 + 5) == '\x01') {
      FUN_00463600(param_3 + 0x12,param_4 + 2);
    }
  }
  return;
}



/* Entry: 004c86dc; end: 004c8783;  */

void FUN_004c86dc(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd388();
  func_0x004cd0d4();
  FUN_004c85f0();
  func_0x004cd1c8();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009eebc0;
  func_0x004cd090();
  if (unaff_x23 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00512ce0();
  FUN_004ca590(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c8784; end: 004c882b;  */

void FUN_004c8784(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd388();
  func_0x004cd0d4();
  FUN_004c85f0();
  func_0x004cd1c8();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009eec90;
  func_0x004cd090();
  if (unaff_x23 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513110();
  FUN_004ca7b4(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c882c; end: 004c88d3;  */

void FUN_004c882c(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd388();
  func_0x004cd0d4();
  FUN_004c85f0();
  func_0x004cd1c8();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009eed60;
  func_0x004cd090();
  if (unaff_x23 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00512dec();
  FUN_004ca9d4(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c88d4; end: 004c897b;  */

void FUN_004c88d4(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd388();
  func_0x004cd0d4();
  FUN_004c85f0();
  func_0x004cd1c8();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009eee30;
  func_0x004cd090();
  if (unaff_x23 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00512ef8();
  FUN_004cabf8(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c897c; end: 004c8a23;  */

void FUN_004c897c(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd388();
  func_0x004cd0d4();
  FUN_004c85f0();
  func_0x004cd1c8();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009eef00;
  func_0x004cd090();
  if (unaff_x23 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513004();
  FUN_004cae1c(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c8a24; end: 004c8acb;  */

void FUN_004c8a24(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd388();
  func_0x004cd0d4();
  FUN_004c85f0();
  func_0x004cd1c8();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009eefd0;
  func_0x004cd090();
  if (unaff_x23 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_0051321c();
  FUN_004cb040(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c8acc; end: 004c8be7;  */

void FUN_004c8acc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_268 [8];
  undefined8 *puStack_260;
  undefined1 auStack_258 [176];
  undefined8 auStack_1a8 [23];
  undefined1 auStack_f0 [176];
  
  FUN_004c7ca0(auStack_f0,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_004c7ca0(auStack_258,param_3);
  puVar1 = auStack_1a8;
  FUN_00465bcc(puVar1,auStack_258);
  lVar3 = *(long *)(param_4 + 8);
  func_0x004cd250();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_009ef0a0;
  func_0x004cd090();
  if (lVar3 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  puStack_260 = puVar1;
  FUN_00513328(uVar2,param_2,auStack_1a8,auStack_268);
  FUN_004cb264(auStack_268);
  FUN_00463c5c(auStack_1a8);
  FUN_00463c7c(auStack_258);
  FUN_00463c7c(auStack_f0);
  return;
}



/* Entry: 004c8be8; end: 004c8c7f;  */

void FUN_004c8be8(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef170;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513434();
  FUN_004cb488(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c8c80; end: 004c8d17;  */

void FUN_004c8c80(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef240;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513540();
  FUN_004cb6ac(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c8d18; end: 004c8daf;  */

void FUN_004c8d18(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef310;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_0051364c();
  FUN_004cb8d0(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c8db0; end: 004c8e57;  */

void FUN_004c8db0(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd388();
  func_0x004cd0d4();
  FUN_004c8e58();
  func_0x004cd1c8();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef3e0;
  func_0x004cd090();
  if (unaff_x23 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513864();
  FUN_004cbaf4(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c8e58; end: 004c91e3;  */

void FUN_004c8e58(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  qword *pqVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x9;
  qword *pqVar6;
  ulong uVar7;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar8;
  ulong unaff_x22;
  ulong uVar9;
  long *plVar10;
  float fVar11;
  long lStack_1c0;
  long lStack_1b8;
  qword *pqStack_1b0;
  qword qStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_178;
  undefined1 auStack_170 [24];
  undefined1 uStack_158;
  undefined1 auStack_150 [24];
  undefined1 uStack_138;
  undefined1 auStack_130 [40];
  undefined1 uStack_108;
  qword *pqStack_100;
  qword *pqStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  
  if ((param_1 != (undefined8 *)0x0) && ((**(code **)*param_1)(), ((ulong)param_1 >> 0x20 & 1) != 0)
     ) {
    if ((*(byte *)(param_3 + 0xb0) & 1) == 0) {
      auStack_130[0] = 0;
      uStack_108 = 0;
      auStack_150[0] = 0;
      uStack_138 = 0;
      auStack_170[0] = 0;
      uStack_158 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      func_0x004cd1dc(&pqStack_100);
      FUN_004c8520(param_3,&pqStack_100);
      FUN_00463c7c(&pqStack_100);
      func_0x004cd320();
      FUN_00457530(auStack_170);
      FUN_00457530(auStack_150);
      FUN_00459de4(auStack_130);
    }
    if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
      pqStack_f8 = (qword *)0x0;
      pqStack_100 = (qword *)0x0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_e0 = 0x3f800000;
      FUN_0047a280(param_3 + 0x10,&pqStack_100);
      func_0x00459d84(&pqStack_100);
      if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
        FUN_00460da4();
        FUN_00459cdc(&pqStack_100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1c0);
        pqVar2 = &qStack_1a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x004cd1f8();
        pcVar3 = FUN_004c91e4;
        func_0x004cd338();
        puStack_c0 = &stack0xfffffffffffffff0;
        pcStack_b8 = pcVar3;
        func_0x004ccfd0();
        func_0x004cd250();
        pqVar2[1] = 0;
        pqVar2[2] = 0;
        *pqVar2 = (qword)&PTR_FUN_009ef4b0;
        func_0x004cd090();
        if (unaff_x22 != 0) {
          do {
            func_0x004cd110();
          } while (extraout_w11 != 0);
        }
        func_0x004ccff4();
        if (extraout_x9 != 0) {
          do {
            func_0x004cd110();
          } while (extraout_w11_00 != 0);
        }
        pqStack_1b0 = pqVar2;
        func_0x004cd0a4();
        FUN_00513758();
        FUN_004cbd18(&lStack_1b8);
        func_0x004cd218();
        return;
      }
    }
    FUN_00425cb4(&qStack_1a8,"x-snap-mcs-debug-force-failure-type-code");
    __ZNSt3__19to_stringEy(&lStack_1c0,(long)(int)param_1);
    uVar7 = param_3 + 0x28;
    FUN_004597c4(uVar7,&qStack_1a8);
    uVar8 = *(ulong *)(param_3 + 0x18);
    if (uVar8 != 0) {
      uVar9 = uVar8 - 1;
      if ((uVar8 & uVar9) == 0) {
        unaff_x22 = uVar9 & uVar7;
      }
      else {
        unaff_x22 = uVar7;
        if (uVar8 <= uVar7) {
          uVar4 = 0;
          if (uVar8 != 0) {
            uVar4 = uVar7 / uVar8;
          }
          unaff_x22 = uVar7 - uVar4 * uVar8;
        }
      }
      plVar10 = *(long **)(*(long *)(param_3 + 0x10) + unaff_x22 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_004c8ff4;
            uVar4 = plVar10[1];
            if (uVar4 != uVar7) break;
            uVar4 = (ulong)(plVar10 + 2);
            FUN_00459c38(uVar4,&qStack_1a8);
            if ((uVar4 & 1) != 0) goto LAB_004c9148;
          }
          if ((uVar8 & uVar9) == 0) {
            uVar4 = uVar4 & uVar9;
          }
          else if (uVar8 <= uVar4) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar4 / uVar8;
            }
            uVar4 = uVar4 - uVar1 * uVar8;
          }
        } while (uVar4 == unaff_x22);
      }
    }
LAB_004c8ff4:
    pqVar6 = &segment_command_00000020.vmsize;
    __Znwm();
    pqVar2 = (qword *)(param_3 + 0x20);
    uStack_f0 = 1;
    *pqVar6 = 0;
    pqVar6[1] = uVar7;
    pqVar6[3] = uStack_1a0;
    pqVar6[2] = qStack_1a8;
    pqVar6[4] = uStack_198;
    qStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    pqVar6[6] = lStack_1b8;
    pqVar6[5] = lStack_1c0;
    pqVar6[7] = (qword)pqStack_1b0;
    lStack_1b8 = 0;
    pqStack_1b0 = (qword *)0x0;
    lStack_1c0 = 0;
    fVar11 = (float)(*(long *)(param_3 + 0x28) + 1);
    pqStack_100 = pqVar6;
    pqStack_f8 = pqVar2;
    if ((uVar8 == 0) || (*(float *)(param_3 + 0x30) * (float)uVar8 < fVar11)) {
      uVar9 = 1;
      if (2 < uVar8) {
        uVar9 = (ulong)((uVar8 & uVar8 - 1) != 0);
      }
      uVar9 = uVar9 | uVar8 << 1;
      uVar8 = (ulong)(fVar11 / *(float *)(param_3 + 0x30));
      if (uVar9 <= uVar8) {
        uVar9 = uVar8;
      }
      FUN_00459320(param_3 + 0x10,uVar9);
      uVar8 = *(ulong *)(param_3 + 0x18);
      if ((uVar8 & uVar8 - 1) == 0) {
        unaff_x22 = uVar8 - 1 & uVar7;
      }
      else {
        unaff_x22 = uVar7;
        if (uVar8 <= uVar7) {
          uVar9 = 0;
          if (uVar8 != 0) {
            uVar9 = uVar7 / uVar8;
          }
          unaff_x22 = uVar7 - uVar9 * uVar8;
        }
      }
    }
    lVar5 = *(long *)(param_3 + 0x10);
    pqVar6 = *(qword **)(lVar5 + unaff_x22 * 8);
    if (pqVar6 == (qword *)0x0) {
      *pqStack_100 = *pqVar2;
      *pqVar2 = (qword)pqStack_100;
      *(qword **)(lVar5 + unaff_x22 * 8) = pqVar2;
      if (*pqStack_100 != 0) {
        uVar7 = *(ulong *)(*pqStack_100 + 8);
        if ((uVar8 & uVar8 - 1) == 0) {
          uVar7 = uVar7 & uVar8 - 1;
        }
        else if (uVar8 <= uVar7) {
          uVar9 = 0;
          if (uVar8 != 0) {
            uVar9 = uVar7 / uVar8;
          }
          uVar7 = uVar7 - uVar9 * uVar8;
        }
        *(qword **)(lVar5 + uVar7 * 8) = pqStack_100;
      }
    }
    else {
      *pqStack_100 = *pqVar6;
      *pqVar6 = (qword)pqStack_100;
    }
    pqStack_100 = (qword *)0x0;
    *(long *)(param_3 + 0x28) = *(long *)(param_3 + 0x28) + 1;
    FUN_00459cdc(&pqStack_100);
LAB_004c9148:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_1c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&qStack_1a8);
  }
  return;
}



/* Entry: 004c91e4; end: 004c927b;  */

void FUN_004c91e4(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef4b0;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513758();
  FUN_004cbd18(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c927c; end: 004c9313;  */

void FUN_004c927c(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef580;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513970();
  FUN_004cbf3c(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c9314; end: 004c93ab;  */

void FUN_004c9314(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef650;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513a7c();
  FUN_004cc160(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c93ac; end: 004c9443;  */

void FUN_004c93ac(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef720;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513c94();
  FUN_004cc384(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c9444; end: 004c94db;  */

void FUN_004c9444(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef7f0;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513da0();
  FUN_004cc5a8(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c94dc; end: 004c9573;  */

void FUN_004c94dc(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef8c0;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513eac();
  FUN_004cc7cc(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c9574; end: 004c960b;  */

void FUN_004c9574(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009ef990;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513b88();
  FUN_004cc9f0(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c960c; end: 004c96a3;  */

void FUN_004c960c(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009efa60;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_00513fb8();
  FUN_004ccc14(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c96a4; end: 004c973b;  */

void FUN_004c96a4(undefined8 *param_1)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  func_0x004cd338();
  func_0x004ccfd0();
  func_0x004cd250();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009efb30;
  func_0x004cd090();
  if (unaff_x22 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11 != 0);
  }
  func_0x004ccff4();
  if (extraout_x9 != 0) {
    do {
      func_0x004cd110();
    } while (extraout_w11_00 != 0);
  }
  in_stack_00000020 = param_1;
  func_0x004cd0a4();
  FUN_005140c4();
  FUN_004cce38(&stack0x00000018);
  func_0x004cd218();
  return;
}



/* Entry: 004c973c; end: 004c974f;  */

bool FUN_004c973c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x20);
  bVar1 = false;
  if (lVar2 != 0) {
    FUN_004083ec(lVar2,0);
    bVar1 = (int)lVar2 - 1U < 2;
  }
  return bVar1;
}



/* Entry: 004c9750; end: 004c9763;  */

void FUN_004c9750(void)

{
  func_0x004c9874();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c9764; end: 004c97b7;  */

ulong FUN_004c9764(long param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  
  if (param_2 < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (param_5 != 0) {
    lVar1 = param_1 + param_4;
    FUN_004c97b8(lVar1,param_1 + param_2,param_3,param_3 + param_5);
    param_4 = lVar1 - param_1;
    if (lVar1 == param_1 + param_2) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}



/* Entry: 004c97b8; end: 004c9847;  */

long FUN_004c97b8(long param_1,long param_2,char *param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  param_4 = param_4 - (long)param_3;
  lVar3 = param_1;
  if ((param_4 != 0) && (lVar3 = param_2, param_4 <= param_2 - param_1)) {
    cVar1 = *param_3;
    while (((lVar3 = param_2, param_4 <= param_2 - param_1 &&
            (FUN_004c6fa8(param_1,(long)cVar1,((param_2 - param_1) - param_4) + 1), param_1 != 0))
           && (lVar2 = param_1, _memcmp(), lVar3 = param_1, (int)lVar2 != 0))) {
      param_1 = param_1 + 1;
    }
  }
  return lVar3;
}



/* Entry: 004c9848; end: 004c9903;  */

long FUN_004c9848(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 004c9904; end: 004c9907;  */

void FUN_004c9904(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eea08;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c9908; end: 004c991b;  */

void FUN_004c9908(void)

{
  FUN_004c9ba8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c991c; end: 004c9927;  */

void FUN_004c991c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c9928; end: 004c993b;  */

void FUN_004c9928(void)

{
  FUN_004c9b38();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c993c; end: 004c9b37;  */

void FUN_004c993c(long param_1)

{
  long *plVar1;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_58;
  long alStack_40 [2];
  
  if (*(char *)(param_1 + 0x1f) < '\0') {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_004c9990;
  }
  else if (*(char *)(param_1 + 0x1f) == '\0') goto LAB_004c9990;
  FUN_00425cb4(&uStack_70,"x-snap-route-tag");
  func_0x004cd330();
  func_0x004cd30c();
LAB_004c9990:
  (**(code **)(**(long **)(param_1 + 0x50) + 0x38))(alStack_40);
  if ((alStack_40[0] != 0) && (*(long *)(alStack_40[0] + 0x18) != 0)) {
    FUN_004c6598(&uStack_70);
    FUN_00425cb4(auStack_88,"x-snap-config-override-bin");
    FUN_0054a274(auStack_a0,&uStack_70);
    func_0x004cd330();
    func_0x004cd2e4();
    func_0x004cd2cc();
    FUN_00516d40(&uStack_70);
  }
  plVar1 = *(long **)(param_1 + 0x60);
  (**(code **)(*plVar1 + 0x20))();
  if (*(long *)(param_1 + 0x20) * 1000000 <= (long)plVar1 - *(long *)(param_1 + 0x28)) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x30))(&uStack_70);
    if (cStack_58 == '\x01') {
      func_0x0047bc34(auStack_88,uStack_70,uStack_68);
      FUN_00473a54(param_1 + 0x30,auStack_88);
      func_0x004cd2cc();
    }
    else {
      FUN_00457664(param_1 + 0x30);
    }
    *(long **)(param_1 + 0x28) = plVar1;
    FUN_004bb774(&uStack_70);
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_00425cb4(&uStack_70,"mcs-cof-ids-bin");
    func_0x004cd330();
    func_0x004cd30c();
  }
  func_0x004c9b84(alStack_40);
  return;
}



/* Entry: 004c9b38; end: 004c9ba7;  */

undefined8 * FUN_004c9b38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009eea58;
  func_0x004c47dc(param_1 + 0xc);
  func_0x004c4800(param_1 + 10);
  FUN_00457530(param_1 + 6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 004c9ba8; end: 004c9bb3;  */

void FUN_004c9ba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eea08;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c9bb4; end: 004c9bd7;  */

void FUN_004c9bb4(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c9bd8; end: 004c9bdb;  */

void FUN_004c9bd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eeaa0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c9bdc; end: 004c9bef;  */

void FUN_004c9bdc(void)

{
  func_0x004c9bfc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c9bf0; end: 004c9c0b;  */

void FUN_004c9bf0(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c9c0c; end: 004c9c1f;  */

void FUN_004c9c0c(void)

{
  FUN_004ca360();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c9c20; end: 004c9c2b;  */

void FUN_004c9c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c9c2c; end: 004c9c3f;  */

void FUN_004c9c2c(void)

{
  func_0x004c9dc4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c9c40; end: 004c9c4f;  */

void FUN_004c9c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004c9c50; end: 004c9da7;  */

void FUN_004c9c50(undefined8 param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined4 uVar4;
  int unaff_w21;
  int *unaff_x22;
  ulong unaff_x23;
  long unaff_x26;
  int in_stack_000000a8;
  byte in_stack_00000108;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  iVar3 = (int)param_1;
  func_0x004cd270();
  func_0x004ccfa0();
  if (iVar3 != 0) {
    FUN_004c7dfc();
  }
  func_0x004cd1a8();
  if ((bool)in_ZR) {
    func_0x004ccf0c();
    func_0x004cd29c();
    if ((bool)in_ZR) {
      func_0x004cd144();
      func_0x004cd138();
      func_0x004cd12c();
      func_0x004cd198();
    }
    else {
      func_0x004ccef0();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x004cd22c();
  }
  FUN_004cce90();
  func_0x004cd1b8();
  if ((bool)in_ZR) {
    func_0x004cd104();
    func_0x004ccf44();
    if (unaff_x23 != 0) {
      func_0x004ccec8();
      func_0x004cd080();
      func_0x004cd024();
      func_0x004cd258();
      func_0x004cd174();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x004ccf80();
        do {
          if (unaff_x26 == 0) goto LAB_004c9d20;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4c9d78);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004c9d20:
      func_0x004cd208();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x004cd2a8();
  }
  func_0x004cd15c();
  func_0x004cd2c0();
  func_0x004cd010();
  func_0x004cd210();
  func_0x004cd200();
  return;
}



/* Entry: 004c9da8; end: 004c9df7;  */

void FUN_004c9da8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004c9df8; end: 004c9e17;  */

void FUN_004c9df8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_004c9e18();
  }
  return;
}



/* Entry: 004c9e18; end: 004c9e6f;  */

void FUN_004c9e18(void)

{
  func_0x004cd220();
  func_0x004c9e38();
  return;
}



/* Entry: 004c9e70; end: 004c9fef;  */

long * FUN_004c9e70(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((char)param_1[3] == '\x01') {
    if (param_1 != param_2) {
      plVar4 = (long *)*param_2;
      if (param_1[2] != 0) {
        lStack_48 = *param_1;
        plVar2 = param_1 + 1;
        *param_1 = (long)plVar2;
        *(undefined8 *)(*plVar2 + 0x10) = 0;
        *plVar2 = 0;
        param_1[2] = 0;
        lVar3 = *(long *)(lStack_48 + 8);
        if (lVar3 != 0) {
          lStack_48 = lVar3;
        }
        plStack_50 = param_1;
        FUN_004c9ff0(&plStack_50);
        while (lVar3 = lStack_40, lStack_40 != 0 && plVar4 != param_2 + 1) {
          lVar1 = plVar4[5];
          *(long *)(lStack_40 + 0x20) = plVar4[4];
          *(long *)(lStack_40 + 0x28) = lVar1;
          lVar1 = plVar4[7];
          *(long *)(lStack_40 + 0x30) = plVar4[6];
          *(long *)(lStack_40 + 0x38) = lVar1;
          plVar2 = param_1;
          func_0x00469504(param_1,&uStack_38);
          FUN_00469574(param_1,uStack_38,plVar2,lVar3);
          FUN_004c9ff0(&plStack_50);
          FUN_004668e4();
        }
        FUN_004ca1b8(&plStack_50);
      }
      while (plVar4 != param_2 + 1) {
        FUN_004ca040(param_1,param_1 + 1,plVar4 + 4);
        FUN_004668e4();
      }
    }
  }
  else {
    plVar2 = param_1 + 1;
    *plVar2 = 0;
    param_1[2] = 0;
    *param_1 = (long)plVar2;
    plVar4 = (long *)*param_2;
    while (plVar4 != param_2 + 1) {
      FUN_004ca040(param_1,plVar2,plVar4 + 4);
      FUN_004668e4();
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 004c9ff0; end: 004ca03f;  */

void FUN_004c9ff0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[2];
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      if (puVar3 == puVar2) {
        *puVar1 = 0;
        goto LAB_004ca030;
      }
      puVar1[1] = 0;
      while (puVar2 != (undefined8 *)0x0) {
        do {
          puVar1 = puVar2;
          puVar2 = (undefined8 *)*puVar1;
        } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
LAB_004ca030:
        puVar2 = (undefined8 *)puVar1[1];
      }
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 004ca040; end: 004ca1b7;  */

void FUN_004ca040(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1 + 1;
  lVar1 = 0x40;
  __Znwm();
  uVar3 = *param_3;
  uVar7 = param_3[1];
  *(undefined8 *)(lVar1 + 0x30) = param_3[2];
  *(undefined8 *)(lVar1 + 0x28) = uVar7;
  *(undefined8 *)(lVar1 + 0x38) = param_3[3];
  puVar6 = (undefined8 *)(lVar1 + 0x20);
  *puVar6 = uVar3;
  uStack_48 = 1;
  lStack_58 = lVar1;
  plStack_50 = plVar2;
  if (param_2 != plVar2) {
    plVar4 = param_1 + 2;
    FUN_00464134(plVar4,param_2 + 4,puVar6);
    if (((ulong)plVar4 & 1) != 0) {
      plVar4 = (long *)*plVar2;
      param_2 = plVar2;
      while (plStack_60 = param_2, plVar4 != (long *)0x0) {
        while( true ) {
          plVar5 = plVar4;
          plVar2 = param_1 + 2;
          FUN_00464134(plVar2,plVar5 + 4,puVar6);
          if ((int)plVar2 == 0) break;
          plVar4 = (long *)plVar5[1];
          if ((long *)plVar5[1] == (long *)0x0) {
            param_2 = plVar5 + 1;
            plStack_60 = plVar5;
            goto LAB_004ca16c;
          }
        }
        param_2 = plVar5;
        plVar4 = (long *)*plVar5;
      }
      goto LAB_004ca16c;
    }
  }
  plVar2 = param_2;
  if (param_2 != (long *)*param_1) {
    FUN_00466844();
    plVar4 = param_1 + 2;
    FUN_00464134(plVar4,puVar6,plVar2 + 4);
    if (((ulong)plVar4 & 1) != 0) {
      param_2 = param_1;
      func_0x00469504(param_1,&plStack_60,puVar6);
      goto LAB_004ca16c;
    }
  }
  plStack_60 = param_2;
  if (*param_2 != 0) {
    param_2 = plVar2 + 1;
    plStack_60 = plVar2;
  }
LAB_004ca16c:
  FUN_00469574(param_1,plStack_60,param_2,lStack_58);
  lStack_58 = 0;
  func_0x004695a4(&lStack_58);
  return;
}



/* Entry: 004ca1b8; end: 004ca1fb;  */

long FUN_004ca1b8(long param_1)

{
  long lVar1;
  
  func_0x004c9e38(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    while (lVar1 = *(long *)(lVar1 + 0x10), lVar1 != 0) {
      *(long *)(param_1 + 8) = lVar1;
    }
    func_0x004c9e38();
  }
  return param_1;
}



/* Entry: 004ca1fc; end: 004ca25b;  */

void FUN_004ca1fc(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_004ca26c();
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = &PTR_FUN_009f06f0;
    param_1[3] = &DAT_00b69408;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    FUN_004ca26c();
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



/* Entry: 004ca25c; end: 004ca26b;  */

/* WARNING: Removing unreachable block (ram,0x00532b88) */

bool FUN_004ca25c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(ulong *)*param_1 & 0xfffffffffffffffc);
  uVar2 = (ulong)*(char *)((long)puVar3 + 0x17);
  if ((long)uVar2 < 0) {
    uVar2 = puVar3[1];
    puVar3 = (undefined8 *)*puVar3;
  }
  if ((0x20 < uVar2) && (*(char *)((long)puVar3 + (uVar2 - 0x21)) == '/')) {
    if (uVar2 < 0x20) {
      return false;
    }
    lVar1 = (long)puVar3 + (uVar2 - 0x20);
    _memcmp(lVar1,"snapchat.messaging.FailureReason",0x20);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 004ca26c; end: 004ca2cf;  */

long FUN_004ca26c(long param_1,long param_2)

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
      FUN_004d5b34(param_1);
    }
    else {
      FUN_004d5afc(param_1);
    }
  }
  return param_1;
}



/* Entry: 004ca2d0; end: 004ca2e3;  */

void FUN_004ca2d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00532b20(param_1,"snapchat.messaging.FailureReason",0x20);
  if ((int)param_1 != 0) {
    FUN_00549e34(param_2,&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 004ca2e4; end: 004ca33f;  */

undefined1 * FUN_004ca2e4(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_004d5304(param_1,0,param_2);
    param_1[0x40] = 1;
  }
  return param_1;
}



/* Entry: 004ca340; end: 004ca35f;  */

void FUN_004ca340(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_004d53c0();
  }
  return;
}



/* Entry: 004ca360; end: 004ca36b;  */

void FUN_004ca360(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009eeaf0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004ca36c; end: 004ca38f;  */

void FUN_004ca36c(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004ca390; end: 004ca393;  */

void FUN_004ca390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eebc0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004ca394; end: 004ca3a7;  */

void FUN_004ca394(void)

{
  FUN_004ca584();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ca3a8; end: 004ca3b3;  */

void FUN_004ca3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004ca3b4; end: 004ca3c7;  */

void FUN_004ca3b4(void)

{
  func_0x004ca54c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ca3c8; end: 004ca3d7;  */

void FUN_004ca3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004ca3d8; end: 004ca52f;  */

void FUN_004ca3d8(undefined8 param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined4 uVar4;
  int unaff_w21;
  int *unaff_x22;
  ulong unaff_x23;
  long unaff_x26;
  int in_stack_000000a8;
  byte in_stack_00000108;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  iVar3 = (int)param_1;
  func_0x004cd270();
  func_0x004ccfa0();
  if (iVar3 != 0) {
    FUN_004c7dfc();
  }
  func_0x004cd1a8();
  if ((bool)in_ZR) {
    func_0x004ccf0c();
    func_0x004cd29c();
    if ((bool)in_ZR) {
      func_0x004cd144();
      func_0x004cd138();
      func_0x004cd12c();
      func_0x004cd198();
    }
    else {
      func_0x004ccef0();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x004cd22c();
  }
  FUN_004cce90();
  func_0x004cd1b8();
  if ((bool)in_ZR) {
    func_0x004cd104();
    func_0x004ccf44();
    if (unaff_x23 != 0) {
      func_0x004ccec8();
      func_0x004cd080();
      func_0x004cd024();
      func_0x004cd258();
      func_0x004cd174();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x004ccf80();
        do {
          if (unaff_x26 == 0) goto LAB_004ca4a8;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4ca500);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004ca4a8:
      func_0x004cd208();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x004cd2a8();
  }
  func_0x004cd15c();
  func_0x004cd2c0();
  func_0x004cd010();
  func_0x004cd210();
  func_0x004cd200();
  return;
}



/* Entry: 004ca530; end: 004ca583;  */

void FUN_004ca530(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004ca584; end: 004ca58f;  */

void FUN_004ca584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eebc0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004ca590; end: 004ca5b3;  */

void FUN_004ca590(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004ca5b4; end: 004ca5b7;  */

void FUN_004ca5b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eec90;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004ca5b8; end: 004ca5cb;  */

void FUN_004ca5b8(void)

{
  FUN_004ca7a8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ca5cc; end: 004ca5d7;  */

void FUN_004ca5cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004ca5d8; end: 004ca5eb;  */

void FUN_004ca5d8(void)

{
  func_0x004ca770();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ca5ec; end: 004ca5fb;  */

void FUN_004ca5ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004ca5fc; end: 004ca753;  */

void FUN_004ca5fc(undefined8 param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined4 uVar4;
  int unaff_w21;
  int *unaff_x22;
  ulong unaff_x23;
  long unaff_x26;
  int in_stack_000000a8;
  byte in_stack_00000108;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  iVar3 = (int)param_1;
  func_0x004cd270();
  func_0x004ccfa0();
  if (iVar3 != 0) {
    FUN_004c7dfc();
  }
  func_0x004cd1a8();
  if ((bool)in_ZR) {
    func_0x004ccf0c();
    func_0x004cd29c();
    if ((bool)in_ZR) {
      func_0x004cd144();
      func_0x004cd138();
      func_0x004cd12c();
      func_0x004cd198();
    }
    else {
      func_0x004ccef0();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x004cd22c();
  }
  FUN_004cce90();
  func_0x004cd1b8();
  if ((bool)in_ZR) {
    func_0x004cd104();
    func_0x004ccf44();
    if (unaff_x23 != 0) {
      func_0x004ccec8();
      func_0x004cd080();
      func_0x004cd024();
      func_0x004cd258();
      func_0x004cd174();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x004ccf80();
        do {
          if (unaff_x26 == 0) goto LAB_004ca6cc;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4ca724);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004ca6cc:
      func_0x004cd208();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x004cd2a8();
  }
  func_0x004cd15c();
  func_0x004cd2c0();
  func_0x004cd010();
  func_0x004cd210();
  func_0x004cd200();
  return;
}



/* Entry: 004ca754; end: 004ca7a7;  */

void FUN_004ca754(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004ca7a8; end: 004ca7b3;  */

void FUN_004ca7a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eec90;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004ca7b4; end: 004ca7d7;  */

void FUN_004ca7b4(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004ca7d8; end: 004ca7db;  */

void FUN_004ca7d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eed60;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004ca7dc; end: 004ca7ef;  */

void FUN_004ca7dc(void)

{
  FUN_004ca9c8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ca7f0; end: 004ca7fb;  */

void FUN_004ca7f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004ca7fc; end: 004ca80f;  */

void FUN_004ca7fc(void)

{
  func_0x004ca994();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ca810; end: 004ca81f;  */

void FUN_004ca810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004ca820; end: 004ca977;  */

void FUN_004ca820(undefined8 param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined4 uVar4;
  int unaff_w21;
  int *unaff_x22;
  ulong unaff_x23;
  long unaff_x26;
  int in_stack_000000a8;
  byte in_stack_00000108;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  iVar3 = (int)param_1;
  func_0x004cd270();
  func_0x004ccfa0();
  if (iVar3 != 0) {
    FUN_004c7dfc();
  }
  func_0x004cd1a8();
  if ((bool)in_ZR) {
    func_0x004ccf0c();
    func_0x004cd29c();
    if ((bool)in_ZR) {
      func_0x004cd144();
      func_0x004cd138();
      func_0x004cd12c();
      func_0x004cd198();
    }
    else {
      func_0x004ccef0();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x004cd22c();
  }
  FUN_004cce90();
  func_0x004cd1b8();
  if ((bool)in_ZR) {
    func_0x004cd104();
    func_0x004ccf44();
    if (unaff_x23 != 0) {
      func_0x004ccec8();
      func_0x004cd080();
      func_0x004cd024();
      func_0x004cd258();
      func_0x004cd174();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x004ccf80();
        do {
          if (unaff_x26 == 0) goto LAB_004ca8f0;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4ca948);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004ca8f0:
      func_0x004cd208();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x004cd2a8();
  }
  func_0x004cd15c();
  func_0x004cd2c0();
  func_0x004cd010();
  func_0x004cd210();
  func_0x004cd200();
  return;
}



/* Entry: 004ca978; end: 004ca9c7;  */

void FUN_004ca978(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004ca9c8; end: 004ca9d3;  */

void FUN_004ca9c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eed60;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004ca9d4; end: 004ca9f7;  */

void FUN_004ca9d4(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004ca9f8; end: 004ca9fb;  */

void FUN_004ca9f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eee30;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004ca9fc; end: 004caa0f;  */

void FUN_004ca9fc(void)

{
  FUN_004cabec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004caa10; end: 004caa1b;  */

void FUN_004caa10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004caa1c; end: 004caa2f;  */

void FUN_004caa1c(void)

{
  func_0x004cabb4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}


