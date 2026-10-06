/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10527de68; end: 10527de7b;  */

void FUN_10527de68(void)

{
  FUN_10527e1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10527de7c; end: 10527e0b7;  */

undefined8 * FUN_10527de7c(undefined8 *param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 auStack_128 [2];
  undefined2 uStack_120;
  long lStack_118;
  undefined1 auStack_110 [16];
  undefined8 auStack_100 [3];
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  int aiStack_a0 [2];
  undefined2 uStack_98;
  undefined8 auStack_90 [2];
  undefined8 auStack_80 [2];
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x000100469560();
  uStack_48 = extraout_x8;
  if (param_1[1] == 0) goto LAB_10527e03c;
  func_0x00010527e4b0();
  auStack_80[0] = 0;
  auStack_70[0] = 0;
  uStack_98 = 7;
  aiStack_a0[0] = CONCAT31(aiStack_a0[0]._1_3_,(char)param_2);
  func_0x00010527e4dc(auStack_90);
  func_0x00010527e4a0();
  if ((char)param_3[2] == '\x01') {
    func_0x00010527d8c0(&plStack_a8);
    plVar2 = plStack_a8;
    unaff_x22 = (long *)*param_3;
    if (unaff_x22 == (long *)0x0) {
      unaff_x22 = (long *)0x0;
LAB_10527df2c:
      plVar3 = (long *)0x0;
    }
    else {
      (**(code **)(*unaff_x22 + 0x10))();
      plVar3 = (long *)*param_3;
      if (plVar3 == (long *)0x0) goto LAB_10527df2c;
      (**(code **)(*plVar3 + 0x18))();
    }
    func_0x00010527e6bc(plVar3,plVar2 + 2);
    aiStack_a0[0] = 3;
    FUN_10527d8ec(auStack_b0,aiStack_a0,&plStack_a8);
    func_0x00010b9a8f90(aiStack_a0,auStack_b0);
    func_0x00010527e4dc(auStack_80);
    func_0x00010527e4a0();
    func_0x000104bdb38c(auStack_b0);
    FUN_10527d94c(&plStack_a8);
  }
  in_ZR = (char)param_4[4] == '\x01';
  if (((bool)in_ZR) && (func_0x00010527e46c(), (int)*param_4 != 0)) {
    func_0x000104bd4df4(&plStack_a8);
    func_0x00010527e46c();
    func_0x00010527e3b4();
    func_0x00010b9a8dd4(aiStack_a0);
    param_3 = plStack_a8;
    func_0x00010527e570();
    func_0x00010527e590(param_3 + 2);
    func_0x00010527e4dc();
    func_0x00010527e498();
    func_0x00010527e4a0();
    func_0x00010527e46c();
    aiStack_a0[0] = (int)*param_4;
    uStack_98 = 4;
    func_0x00010527e560();
    func_0x00010527e590(plStack_a8 + 2);
    func_0x00010527e4dc();
    func_0x00010527e498();
    func_0x00010527e4a0();
    func_0x00010b9a8f54(aiStack_a0,&plStack_a8);
    func_0x00010527e4dc(auStack_70);
    func_0x00010527e4a0();
    func_0x000104bd4e40(&plStack_a8);
    param_4 = plStack_a8;
  }
  param_2 = auStack_90;
  func_0x00010b9ac0a8(auStack_60,*(undefined8 *)(unaff_x19 + 8),param_2,3);
  func_0x000104bda914(auStack_60);
  param_1 = auStack_90;
  func_0x00010527e1fc();
  unaff_x20 = param_4;
  unaff_x21 = param_3;
LAB_10527e03c:
  func_0x000100469710(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010527e498();
  func_0x00010527e4a0();
  func_0x000104bd4e40(&plStack_a8);
  puVar4 = auStack_90;
  func_0x00010527e1fc();
  func_0x00010527e434();
  pcStack_b8 = FUN_10527e0b8;
  plStack_e0 = unaff_x22;
  plStack_d8 = unaff_x21;
  plStack_d0 = unaff_x20;
  puStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000100469560();
  uStack_e8 = extraout_x8_00;
  if (puVar4[2] != 0) {
    func_0x00010527e4b0();
    func_0x00010527e7a0();
    func_0x00010527e3b4();
    func_0x00010b9a8dd4(auStack_128);
    lVar1 = lStack_118;
    func_0x00010527e570();
    func_0x00010527e590(lVar1 + 0x10);
    func_0x00010527e78c();
    func_0x00010527e498();
    func_0x00010527e658();
    auStack_128[0] = *(undefined4 *)param_2;
    uStack_120 = 4;
    func_0x00010527e560();
    func_0x00010527e590(lStack_118 + 0x10);
    func_0x00010527e78c();
    func_0x00010527e498();
    func_0x00010527e658();
    func_0x00010b9a8f54(auStack_128,&lStack_118);
    func_0x00010527e78c(auStack_110);
    func_0x00010527e658();
    func_0x00010b9ac0a8(auStack_100,param_1[2],auStack_110,1);
    puVar4 = auStack_100;
    func_0x000104bda914();
    func_0x00010527e4a8();
    func_0x00010527e5a0();
  }
  func_0x000100469710(uStack_e8);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010527e498();
  func_0x00010527e658();
  func_0x00010527e4a8();
  func_0x00010527e5a0();
  func_0x00010527e434();
  *puVar4 = &PTR_DAT_110873be0;
  func_0x000104bda388(puVar4 + 2);
  func_0x000104bda388(puVar4 + 1);
  return puVar4;
}



/* Entry: 10527e0b8; end: 10527e1bf;  */

undefined8 * FUN_10527e0b8(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined4 auStack_78 [2];
  undefined2 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [16];
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100469560();
  uStack_38 = extraout_x8;
  if (param_1[2] != 0) {
    func_0x00010527e4b0();
    func_0x00010527e7a0();
    func_0x00010527e3b4();
    func_0x00010b9a8dd4(auStack_78);
    lVar1 = lStack_68;
    func_0x00010527e570();
    func_0x00010527e590(lVar1 + 0x10);
    func_0x00010527e78c();
    func_0x00010527e498();
    func_0x00010527e658();
    auStack_78[0] = *param_2;
    uStack_70 = 4;
    func_0x00010527e560();
    func_0x00010527e590(lStack_68 + 0x10);
    func_0x00010527e78c();
    func_0x00010527e498();
    func_0x00010527e658();
    func_0x00010b9a8f54(auStack_78,&lStack_68);
    func_0x00010527e78c(auStack_60);
    func_0x00010527e658();
    func_0x00010b9ac0a8(auStack_50,*(undefined8 *)(unaff_x19 + 0x10),auStack_60,1);
    param_1 = auStack_50;
    func_0x000104bda914();
    func_0x00010527e4a8();
    func_0x00010527e5a0();
  }
  func_0x000100469710(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010527e498();
  func_0x00010527e658();
  func_0x00010527e4a8();
  func_0x00010527e5a0();
  func_0x00010527e434();
  *param_1 = &PTR_DAT_110873be0;
  func_0x000104bda388(param_1 + 2);
  func_0x000104bda388(param_1 + 1);
  return param_1;
}



/* Entry: 10527e1c0; end: 10527e22f;  */

undefined8 * FUN_10527e1c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110873be0;
  func_0x000104bda388(param_1 + 2);
  func_0x000104bda388(param_1 + 1);
  return param_1;
}



/* Entry: 10527e230; end: 10527e23b;  */

void FUN_10527e230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110873b90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10527e23c; end: 10527e283;  */

void FUN_10527e23c(long param_1)

{
  func_0x00010046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10527e284; end: 10527e803;  */

void FUN_10527e284(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010046e218();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10527e804; end: 10527e923;  */

undefined1 * FUN_10527e804(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10527e924();
  func_0x0001003b2110(auStack_68,0x113818130);
  auStack_58[0] = *param_2;
  uStack_50 = 4;
  if (*(char *)(param_2 + 2) == '\x01') {
    uStack_48 = CONCAT44(uStack_48._4_4_,param_2[1]);
    uStack_40 = 4;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 1;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_10527ea54(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_10527e924;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818138 & 1) == 0) {
    puVar3 = (undefined1 *)0x113818138;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_ActivityData");
      pcVar4 = "activeRecentlyCount";
      func_0x0001003a83dc(auStack_d8,"activeRecentlyCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "activeNowCount";
      func_0x0001003a83dc(auStack_e0,"activeNowCount");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818128,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar3 = (undefined1 *)0x113818138;
      ___cxa_guard_release(0x113818138);
    }
  }
  FUN_10527ea54(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818128;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 10527e924; end: 10527ea53;  */

undefined8 FUN_10527e924(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818138 & 1) == 0) {
    param_1 = 0x113818138;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_ActivityData");
      pcVar1 = "activeRecentlyCount";
      func_0x0001003a83dc(auStack_68,"activeRecentlyCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "activeNowCount";
      func_0x0001003a83dc(auStack_70,"activeNowCount");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818128,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818138;
      ___cxa_guard_release(0x113818138);
    }
  }
  FUN_10527ea54(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818128;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10527ea54; end: 10527ea67;  */

void FUN_10527ea54(void)

{
  return;
}



/* Entry: 10527ea68; end: 10527eb87;  */

long * FUN_10527ea68(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined4 auStack_138 [2];
  undefined2 uStack_130;
  long lStack_128;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10527eb88();
  func_0x0001003b2110(&lStack_68,0x113818148);
  FUN_10527ecb8(auStack_58,param_2);
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    uStack_48 = CONCAT44(uStack_48._4_4_,*(undefined4 *)(param_2 + 0x18));
    uStack_40 = 4;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 1;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(&lStack_60,&lStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_68);
  plVar4 = &lStack_60;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_60;
  func_0x000104bdbf78();
  func_0x00010527edc8(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_68;
  func_0x0001003b1f60();
  func_0x00010527edc0();
  pcStack_78 = FUN_10527eb88;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  plStack_88 = plVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818150 & 1) == 0) {
    plVar4 = (long *)0x113818150;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_AnonymousPollVoteMetadata");
      pcVar5 = "voteIndexCounts";
      func_0x0001003a83dc(auStack_d8,"voteIndexCounts");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "userVoteIndices";
      func_0x0001003a83dc(auStack_e0,"userVoteIndices");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818140,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      plVar4 = (long *)0x113818150;
      ___cxa_guard_release();
    }
  }
  func_0x00010527edc8(uStack_98);
  if ((bool)uVar1) {
    return (long *)0x113818140;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_128,plVar4[1] - *plVar4 >> 2);
  lVar8 = 0x18;
  for (uVar9 = 0; uVar9 < (ulong)(plVar4[1] - *plVar4 >> 2); uVar9 = uVar9 + 1) {
    auStack_138[0] = *(undefined4 *)(*plVar4 + uVar9 * 4);
    uStack_130 = 4;
    func_0x00010b9a9020(lStack_128 + lVar8,auStack_138);
    func_0x00010b9a8d98(auStack_138);
    lVar8 = lVar8 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_128);
  plVar4 = &lStack_128;
  func_0x000104bddf38(plVar4);
  return plVar4;
}



/* Entry: 10527eb88; end: 10527ecb7;  */

long * FUN_10527eb88(long *param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  long lVar5;
  undefined4 auStack_c8 [2];
  undefined2 uStack_c0;
  long lStack_b8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818150 & 1) == 0) {
    param_1 = (long *)0x113818150;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_AnonymousPollVoteMetadata");
      pcVar1 = "voteIndexCounts";
      func_0x0001003a83dc(auStack_68,"voteIndexCounts");
      FUN_10527ed64();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "userVoteIndices";
      func_0x0001003a83dc(auStack_70,"userVoteIndices");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818140,auStack_60,0,auStack_58,2);
      lVar5 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar5);
        param_2 = (int)uVar3;
        lVar5 = lVar5 + -0x18;
        in_ZR = lVar5 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = (long *)0x113818150;
      ___cxa_guard_release();
    }
  }
  func_0x00010527edc8(uStack_28);
  if ((bool)in_ZR) {
    return (long *)0x113818140;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_b8,param_1[1] - *param_1 >> 2);
  lVar5 = 0x18;
  for (uVar4 = 0; uVar4 < (ulong)(param_1[1] - *param_1 >> 2); uVar4 = uVar4 + 1) {
    auStack_c8[0] = *(undefined4 *)(*param_1 + uVar4 * 4);
    uStack_c0 = 4;
    func_0x00010b9a9020(lStack_b8 + lVar5,auStack_c8);
    func_0x00010b9a8d98(auStack_c8);
    lVar5 = lVar5 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_b8);
  plVar2 = &lStack_b8;
  func_0x000104bddf38(plVar2);
  return plVar2;
}



/* Entry: 10527ecb8; end: 10527ed63;  */

void FUN_10527ecb8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  long lStack_48;
  
  func_0x00010b9abe10(&lStack_48,param_2[1] - *param_2 >> 2);
  lVar2 = 0x18;
  for (uVar1 = 0; uVar1 < (ulong)(param_2[1] - *param_2 >> 2); uVar1 = uVar1 + 1) {
    auStack_58[0] = *(undefined4 *)(*param_2 + uVar1 * 4);
    uStack_50 = 4;
    func_0x00010b9a9020(lStack_48 + lVar2,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    lVar2 = lVar2 + 0x10;
  }
  func_0x00010b9a8f84(param_1,&lStack_48);
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 10527ed64; end: 10527edbf;  */

undefined8 FUN_10527ed64(void)

{
  int iVar1;
  
  if ((bRam00000001130cb8d0 & 1) == 0) {
    iVar1 = 0x130cb8d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000104bef760();
      func_0x00010b990868(0x1130cb8c0);
      ___cxa_guard_release(0x1130cb8d0);
    }
  }
  return 0x1130cb8c0;
}



/* Entry: 10527edc0; end: 10527eddb;  */

void FUN_10527edc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10527eddc; end: 10527ee63;  */

void FUN_10527eddc(char *param_1)

{
  char cVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  cVar1 = (char)lStack_28 + '\x18';
  func_0x00010b9a9608();
  FUN_10527ee64(&uStack_40,lStack_28 + 0x28);
  *param_1 = cVar1;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0x18) = uStack_30;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x000104be14c8(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 10527ee64; end: 10527ef0b;  */

void FUN_10527ee64(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lStack_40;
  undefined4 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((char)param_2[1] == '\t') && (lVar5 = *param_2, lVar5 != 0)) {
    plVar3 = *(long **)(lVar5 + 0x10);
    FUN_10527f25c(param_1);
    uVar6 = 0;
    lVar4 = lVar5 + 0x18;
    while( true ) {
      uVar2 = SUB84(plVar3,0);
      if (*(ulong *)(lVar5 + 0x10) <= uVar6) break;
      lVar1 = lVar4;
      FUN_10529da18();
      plVar3 = &lStack_40;
      lStack_40 = lVar1;
      uStack_38 = uVar2;
      FUN_10527f438(param_1);
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x10;
    }
  }
  return;
}



/* Entry: 10527ef0c; end: 10527f01b;  */

long * FUN_10527ef0c(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_128 [16];
  long lStack_118;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10527f01c();
  func_0x0001003b2110(&lStack_68,0x113818160);
  auStack_58[0] = *param_2;
  uStack_50 = 7;
  FUN_10527f14c(auStack_48,param_2 + 8);
  func_0x000104bdb9bc(&lStack_60,&lStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(&lStack_68);
  plVar4 = &lStack_60;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_60;
  func_0x000104bdbf78();
  func_0x00010527f56c(uStack_38);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  plVar4 = &lStack_68;
  func_0x0001003b1f60();
  func_0x00010527f548();
  pcStack_78 = FUN_10527f01c;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  plStack_88 = plVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818168 & 1) == 0) {
    plVar4 = (long *)0x113818168;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_AudioNoteMetadata");
      pcVar5 = "allowsTranscription";
      func_0x0001003a83dc(auStack_d8,"allowsTranscription");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "transcriptions";
      func_0x0001003a83dc(auStack_e0,"transcriptions");
      FUN_10527f200();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818158,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      plVar4 = (long *)0x113818168;
      ___cxa_guard_release();
    }
  }
  func_0x00010527f56c(uStack_98);
  if ((bool)uVar1) {
    return (long *)0x113818158;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_118,plVar4[1] - *plVar4 >> 4);
  lVar8 = 0x18;
  for (uVar9 = 0; uVar9 < (ulong)(plVar4[1] - *plVar4 >> 4); uVar9 = uVar9 + 1) {
    FUN_10529da70(auStack_128,*plVar4 + lVar8 + -0x18);
    func_0x00010b9a9020(lStack_118 + lVar8,auStack_128);
    func_0x00010b9a8d98(auStack_128);
    lVar8 = lVar8 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_118);
  plVar4 = &lStack_118;
  func_0x000104bddf38(plVar4);
  return plVar4;
}



/* Entry: 10527f01c; end: 10527f14b;  */

long * FUN_10527f01c(long *param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818168 & 1) == 0) {
    param_1 = (long *)0x113818168;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_AudioNoteMetadata");
      pcVar1 = "allowsTranscription";
      func_0x0001003a83dc(auStack_68,"allowsTranscription");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "transcriptions";
      func_0x0001003a83dc(auStack_70,"transcriptions");
      FUN_10527f200();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818158,auStack_60,0,auStack_58,2);
      lVar5 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar5);
        param_2 = (int)uVar3;
        lVar5 = lVar5 + -0x18;
        in_ZR = lVar5 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = (long *)0x113818168;
      ___cxa_guard_release();
    }
  }
  func_0x00010527f56c(uStack_28);
  if ((bool)in_ZR) {
    return (long *)0x113818158;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010b9abe10(&lStack_a8,param_1[1] - *param_1 >> 4);
  lVar5 = 0x18;
  for (uVar4 = 0; uVar4 < (ulong)(param_1[1] - *param_1 >> 4); uVar4 = uVar4 + 1) {
    FUN_10529da70(auStack_b8,*param_1 + lVar5 + -0x18);
    func_0x00010b9a9020(lStack_a8 + lVar5,auStack_b8);
    func_0x00010b9a8d98(auStack_b8);
    lVar5 = lVar5 + 0x10;
  }
  func_0x00010b9a8f84(extraout_x8,&lStack_a8);
  plVar2 = &lStack_a8;
  func_0x000104bddf38(plVar2);
  return plVar2;
}



/* Entry: 10527f14c; end: 10527f1ff;  */

void FUN_10527f14c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010b9abe10(&lStack_38,param_2[1] - *param_2 >> 4);
  lVar2 = 0x18;
  for (uVar1 = 0; uVar1 < (ulong)(param_2[1] - *param_2 >> 4); uVar1 = uVar1 + 1) {
    FUN_10529da70(auStack_48,*param_2 + lVar2 + -0x18);
    func_0x00010b9a9020(lStack_38 + lVar2,auStack_48);
    func_0x00010b9a8d98(auStack_48);
    lVar2 = lVar2 + 0x10;
  }
  func_0x00010b9a8f84(param_1,&lStack_38);
  func_0x000104bddf38(&lStack_38);
  return;
}



/* Entry: 10527f200; end: 10527f25b;  */

undefined8 FUN_10527f200(void)

{
  int iVar1;
  
  if ((bRam00000001130cb8e8 & 1) == 0) {
    iVar1 = 0x130cb8e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529db74();
      func_0x00010b990868(0x1130cb8d8);
      ___cxa_guard_release(0x1130cb8e8);
    }
  }
  return 0x1130cb8d8;
}



/* Entry: 10527f25c; end: 10527f2cb;  */

void FUN_10527f25c(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10527f2cc();
      func_0x00010527f550();
      func_0x00010527f548();
      pcVar1 = "vector";
      func_0x000104bd47e8();
      lVar2 = param_2[1] - (*(long *)((long)pcVar1 + 8) - *(long *)pcVar1);
      _memcpy(lVar2);
      param_2[1] = lVar2;
      lVar2 = *(long *)pcVar1;
      *(long *)((long)pcVar1 + 8) = lVar2;
      *(undefined8 *)pcVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 8);
      *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
      param_2[2] = lVar2;
      lVar2 = *(long *)((long)pcVar1 + 0x10);
      *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_10527f360(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x00010527f560();
    func_0x00010527f550();
  }
  return;
}



/* Entry: 10527f2cc; end: 10527f2df;  */

void FUN_10527f2cc(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  func_0x000104bd47e8();
  lVar2 = param_2[1] - (*(long *)((long)pcVar1 + 8) - *(long *)pcVar1);
  _memcpy(lVar2);
  param_2[1] = lVar2;
  lVar2 = *(long *)pcVar1;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(undefined8 *)pcVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 8);
  *(undefined8 *)((long)pcVar1 + 8) = param_2[2];
  param_2[2] = lVar2;
  lVar2 = *(long *)((long)pcVar1 + 0x10);
  *(undefined8 *)((long)pcVar1 + 0x10) = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10527f2e0; end: 10527f35f;  */

void FUN_10527f2e0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10527f360; end: 10527f3cb;  */

long * FUN_10527f360(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010527f3a8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10527f3cc; end: 10527f3e7;  */

long * FUN_10527f3cc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10527f414();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10527f3e8; end: 10527f413;  */

long * FUN_10527f3e8(long *param_1)

{
  FUN_10527f414();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10527f414; end: 10527f437;  */

void FUN_10527f414(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10527f438; end: 10527f47b;  */

undefined8 * FUN_10527f438(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_10527f47c();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10527f47c; end: 10527f507;  */

long FUN_10527f47c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10527f508(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_10527f360(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  puStack_38 = puStack_38 + 2;
  func_0x00010527f560();
  lVar2 = param_1[1];
  func_0x00010527f550();
  return lVar2;
}



/* Entry: 10527f508; end: 10527f547;  */

ulong FUN_10527f508(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  
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
  FUN_10527f2cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return unaff_x19;
}



/* Entry: 10527f548; end: 10527f57f;  */

void FUN_10527f548(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10527f580; end: 10527f5c3;  */

long FUN_10527f580(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  lVar1 = lStack_28 + 0x18;
  func_0x00010b9a9608(lVar1);
  func_0x000104bdbf78(&lStack_28);
  return lVar1;
}



/* Entry: 10527f5c4; end: 10527f68b;  */

undefined1 * FUN_10527f5c4(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10527f68c();
  func_0x0001003b2110(auStack_48,0x113818178);
  auStack_38[0] = *param_2;
  uStack_30 = 7;
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_10527f770(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_10527f68c;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818180 & 1) == 0) {
    puVar1 = (undefined1 *)0x113818180;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_BotConversationMetadata");
      pcVar2 = "isCurrentlyReceivingStreamingResponse";
      func_0x0001003a83dc(auStack_90,"isCurrentlyReceivingStreamingResponse");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x113818170,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x113818180;
      ___cxa_guard_release(0x113818180);
    }
  }
  FUN_10527f770(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818170;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 10527f68c; end: 10527f76f;  */

undefined8 FUN_10527f68c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818180 & 1) == 0) {
    param_1 = 0x113818180;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_BotConversationMetadata");
      pcVar1 = "isCurrentlyReceivingStreamingResponse";
      func_0x0001003a83dc(auStack_40,"isCurrentlyReceivingStreamingResponse");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818170,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818180;
      ___cxa_guard_release(0x113818180);
    }
  }
  FUN_10527f770(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818170;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10527f770; end: 10527f783;  */

void FUN_10527f770(void)

{
  return;
}



/* Entry: 10527f784; end: 10527f88b;  */

undefined1 * FUN_10527f784(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10527f88c();
  func_0x0001003b2110(auStack_68,0x113818190);
  FUN_10529dd1c(auStack_58,param_2);
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_10527f9bc(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_10527f88c;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818198 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818198;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_BotMentionResponseMetadata");
      pcVar5 = "requesterUserId";
      func_0x0001003a83dc(auStack_d8,"requesterUserId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "requesterServerMessageId";
      func_0x0001003a83dc(auStack_e0,"requesterServerMessageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818188,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x113818198;
      ___cxa_guard_release(0x113818198);
    }
  }
  FUN_10527f9bc(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818188;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 10527f88c; end: 10527f9bb;  */

undefined8 FUN_10527f88c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818198 & 1) == 0) {
    param_1 = 0x113818198;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_BotMentionResponseMetadata");
      pcVar1 = "requesterUserId";
      func_0x0001003a83dc(auStack_68,"requesterUserId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "requesterServerMessageId";
      func_0x0001003a83dc(auStack_70,"requesterServerMessageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818188,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818198;
      ___cxa_guard_release(0x113818198);
    }
  }
  FUN_10527f9bc(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818188;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10527f9bc; end: 10527f9cf;  */

void FUN_10527f9bc(void)

{
  return;
}



/* Entry: 10527f9d0; end: 10527fa67;  */

void FUN_10527f9d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  FUN_10529dcb8(&uStack_40,lStack_28 + 0x18);
  lVar2 = lStack_28 + 0x28;
  func_0x00010b9a9588();
  lVar3 = lStack_28 + 0x38;
  func_0x00010b9a9588();
  uVar1 = uStack_30;
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  param_1[2] = uVar1;
  param_1[3] = lVar2;
  param_1[4] = lVar3;
  func_0x000100100fec(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 10527fa68; end: 10527fb77;  */

undefined1 * FUN_10527fa68(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10527fb78();
  func_0x0001003b2110(auStack_78,0x1138181a8);
  FUN_10529dd1c(auStack_68,param_2);
  uStack_50 = 5;
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  uStack_48 = *(undefined8 *)(param_2 + 0x20);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar4 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_70;
  func_0x000104bdbf78();
  FUN_10527fcd8(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x30;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_88 = FUN_10527fb78;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar8;
  puStack_98 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam00000001138181b0 & 1) == 0) {
    puVar4 = (undefined1 *)0x1138181b0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_BundleMetadata");
      pcVar5 = "bundleId";
      func_0x0001003a83dc(auStack_100,"bundleId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar5);
      pcVar5 = "currentMessageIndex";
      func_0x0001003a83dc(auStack_108,"currentMessageIndex");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar5);
      pcVar5 = "bundleSize";
      func_0x0001003a83dc(auStack_110,"bundleSize");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138181a0,auStack_f8,0,auStack_f0,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      puVar4 = (undefined1 *)0x1138181b0;
      ___cxa_guard_release(0x1138181b0);
    }
  }
  FUN_10527fcd8(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138181a0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 10527fb78; end: 10527fcd7;  */

undefined8 FUN_10527fb78(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138181b0 & 1) == 0) {
    param_1 = 0x1138181b0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_BundleMetadata");
      pcVar1 = "bundleId";
      func_0x0001003a83dc(auStack_80,"bundleId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar1);
      pcVar1 = "currentMessageIndex";
      func_0x0001003a83dc(auStack_88,"currentMessageIndex");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar1);
      pcVar1 = "bundleSize";
      func_0x0001003a83dc(auStack_90,"bundleSize");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138181a0,auStack_78,0,auStack_70,3);
      lVar3 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = 0x1138181b0;
      ___cxa_guard_release(0x1138181b0);
    }
  }
  FUN_10527fcd8(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138181a0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10527fcd8; end: 10527fceb;  */

void FUN_10527fcd8(void)

{
  return;
}



/* Entry: 10527fcec; end: 10527fdef;  */

undefined1 * FUN_10527fcec(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined1 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10527fdf0();
  func_0x0001003b2110(auStack_68,0x1138181c0);
  auStack_58[0] = *param_2;
  uStack_50 = 4;
  uStack_48 = *(undefined1 *)(param_2 + 1);
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar6 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_60;
  func_0x000104bdbf78();
  FUN_10527ff78(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  __Unwind_Resume(puVar3);
  pcStack_78 = FUN_10527fdf0;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_58;
  puStack_88 = puVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138181c8 & 1) == 0) {
    iVar2 = 0x138181c8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_CallItem");
      pcVar4 = "state";
      func_0x0001003a83dc(auStack_d8,"state");
      FUN_10527ff20();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "isVideo";
      func_0x0001003a83dc(auStack_e0,"isVideo");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138181b8,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      ___cxa_guard_release(0x1138181c8);
    }
  }
  FUN_10527ff78(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138181b8;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cb900 & 1) == 0) {
    iVar5 = 0x130cb900;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010b990e20(0x1130cb8f0);
      ___cxa_guard_release(0x1130cb900);
    }
  }
  return (undefined1 *)0x1130cb8f0;
}



/* Entry: 10527fdf0; end: 10527ff1f;  */

undefined8 FUN_10527fdf0(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138181c8 & 1) == 0) {
    iVar1 = 0x138181c8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_CallItem");
      pcVar2 = "state";
      func_0x0001003a83dc(auStack_68,"state");
      FUN_10527ff20();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "isVideo";
      func_0x0001003a83dc(auStack_70,"isVideo");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x1138181b8,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      ___cxa_guard_release(0x1138181c8);
    }
  }
  FUN_10527ff78(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138181b8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cb900 & 1) == 0) {
    iVar1 = 0x130cb900;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cb8f0);
      ___cxa_guard_release(0x1130cb900);
    }
  }
  return 0x1130cb8f0;
}



/* Entry: 10527ff20; end: 10527ff77;  */

undefined8 FUN_10527ff20(void)

{
  int iVar1;
  
  if ((bRam00000001130cb900 & 1) == 0) {
    iVar1 = 0x130cb900;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cb8f0);
      ___cxa_guard_release(0x1130cb900);
    }
  }
  return 0x1130cb8f0;
}



/* Entry: 10527ff78; end: 10527ff8b;  */

void FUN_10527ff78(void)

{
  return;
}



/* Entry: 10527ff8c; end: 10528014b;  */

void FUN_10527ff8c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1138181d0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1138181d0) = 1;
  if ((bVar1 & 1) != 0) goto LAB_10527ffe4;
  if ((bRam0000000113818200 & 1) == 0) goto LAB_105280000;
  while( true ) {
    func_0x000108b80888(0x1138181f0);
LAB_10527ffe4:
    func_0x00010528034c();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_105280000:
    iVar2 = 0x13818200;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052801e8();
      func_0x0001003a83dc(&uStack_70,"onSuccess");
      func_0x0001003b166c(auStack_90);
      func_0x000104bdbd48(auStack_80,auStack_90,0,0);
      uStack_58 = uStack_70;
      uStack_70 = 0;
      func_0x0001003aef98(auStack_50,auStack_80);
      pcVar3 = "onError";
      func_0x0001003a83dc(&uStack_98,"onError");
      func_0x0001003b166c(auStack_b8);
      func_0x000104bf213c();
      func_0x0001003adcc0(auStack_68,pcVar3);
      func_0x000104bdbd48(auStack_a8,auStack_b8,auStack_68,1);
      uStack_40 = uStack_98;
      uStack_98 = 0;
      func_0x0001003aef98(auStack_38,auStack_a8);
      func_0x000104bdbd44(0x1138181f0,0x113818208,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000105280344(auStack_a8);
      func_0x000105280344(auStack_68);
      func_0x000105280344(auStack_b8);
      func_0x0001003a8c94(&uStack_98);
      func_0x000105280344(auStack_80);
      func_0x000105280344(auStack_90);
      func_0x0001003a8c94(&uStack_70);
      ___cxa_guard_release(0x113818200);
    }
  }
  return;
}



/* Entry: 10528014c; end: 1052801e7;  */

undefined8 FUN_10528014c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam00000001138181e8 & 1) == 0) {
    iVar4 = 0x138181e8;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052801e8();
      lStack_20 = lRam0000000113818208;
      if (lRam0000000113818208 != 0) {
        piVar1 = (int *)(lRam0000000113818208 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x1138181d8,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x1138181e8);
    }
  }
  return 0x1138181d8;
}



/* Entry: 1052801e8; end: 105280273;  */

void FUN_1052801e8(void)

{
  int iVar1;
  
  if ((bRam0000000113818210 & 1) == 0) {
    iVar1 = 0x13818210;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818208,"_djinni_interface_Callback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818210);
      return;
    }
  }
  return;
}



/* Entry: 105280274; end: 1052802f7;  */

undefined4 * FUN_105280274(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 4;
  auStack_38[0] = param_2;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  func_0x00010b9a8d98(auStack_48);
  puVar1 = auStack_38;
  func_0x00010b9a8d98();
  func_0x00010528034c();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  __Unwind_Resume(puVar1);
  func_0x000105280364();
  return puVar1;
}



/* Entry: 1052802f8; end: 105280337;  */

void FUN_1052802f8(void)

{
  func_0x000105280364();
  return;
}



/* Entry: 105280338; end: 10528036f;  */

undefined8 * FUN_105280338(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 105280370; end: 10528047f;  */

void FUN_105280370(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x00010b9a97d0(&lStack_38);
  func_0x000108b8099c(auStack_50,lStack_38 + 0x18);
  lVar1 = lStack_38 + 0x28;
  func_0x00010b9a9518(lVar1);
  uVar2 = lStack_38 + 0x38;
  func_0x000104bedf88(uVar2);
  func_0x000104bf1090(auStack_70,lStack_38 + 0x48);
  func_0x000104bf102c(auStack_90,lStack_38 + 0x58);
  lVar3 = lStack_38 + 0x68;
  func_0x00010b9a9518(lVar3);
  lVar4 = lStack_38 + 0x78;
  func_0x00010b9a9608(lVar4);
  func_0x0001006720bc(param_1,auStack_50,lVar1,uVar2 & 0xffffffffff,auStack_70,auStack_90,lVar3,
                      lVar4);
  func_0x0001001148fc(auStack_90);
  func_0x0001005fce88(auStack_70);
  func_0x000100100fec(auStack_50);
  func_0x000104bdbf78(&lStack_38);
  return;
}



/* Entry: 105280480; end: 1052805fb;  */

undefined1 * FUN_105280480(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  undefined8 uStack_248;
  undefined1 ***pppuStack_240;
  code *pcStack_238;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [32];
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  
  func_0x00010528096c();
  FUN_1052805fc();
  func_0x0001003b2110(auStack_b8,0x113818220);
  func_0x000108b80a1c(auStack_a8,param_2);
  uStack_98 = *(undefined4 *)(param_2 + 0x18);
  uStack_90 = 4;
  if (*(char *)(param_2 + 0x20) == '\x01') {
    uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(param_2 + 0x1c));
    uStack_80 = 4;
  }
  else {
    uStack_88 = 0;
    uStack_80 = 1;
  }
  uStack_7f = 0;
  FUN_10528080c(auStack_78,param_2 + 0x28);
  func_0x000105280820(auStack_68,param_2 + 0x48);
  uStack_58 = *(undefined4 *)(param_2 + 0x68);
  uStack_50 = 4;
  auStack_48[0] = *(undefined1 *)(param_2 + 0x6c);
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_b0,auStack_b8,auStack_a8,7);
  lVar8 = 0x60;
  do {
    func_0x00010b9a8d98(auStack_a8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_b8);
  puVar4 = auStack_b0;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_b0;
  func_0x000104bdbf78();
  func_0x000105280954();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x70;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_b8);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1052805fc;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010528096c();
  uVar7 = 0;
  if ((bRam0000000113818228 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818228;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_1a8,"_djinni_record_CampaignMetadata");
      pcVar5 = "adResponseBytes";
      func_0x0001003a83dc(auStack_1b0,"adResponseBytes");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_1a0,auStack_1b0,pcVar5);
      pcVar5 = "responseInteractionSetting";
      func_0x0001003a83dc(auStack_1b8,"responseInteractionSetting");
      FUN_105280834();
      func_0x0001003b1b50(auStack_188,auStack_1b8,pcVar5);
      pcVar5 = "feedInsertionIndex";
      func_0x0001003a83dc(auStack_1c0,"feedInsertionIndex");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_170,auStack_1c0,pcVar5);
      pcVar5 = "adSyncAttemptId";
      func_0x0001003a83dc(auStack_1c8,"adSyncAttemptId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_158,auStack_1c8,pcVar5);
      pcVar5 = "chatHeadline";
      func_0x0001003a83dc(auStack_1d0,"chatHeadline");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_140,auStack_1d0,pcVar5);
      pcVar5 = "campaignDisplayMode";
      func_0x0001003a83dc(auStack_1d8,"campaignDisplayMode");
      FUN_10528088c();
      func_0x0001003b1b50(auStack_128,auStack_1d8,pcVar5);
      pcVar5 = "isNoFillAd";
      func_0x0001003a83dc(auStack_1e0,"isNoFillAd");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_110,auStack_1e0,pcVar5);
      puVar2 = auStack_1a0;
      uVar7 = 0;
      func_0x000104bdbd44(0x113818218,auStack_1a8,0,auStack_1a0,7);
      lVar8 = 0x90;
      do {
        func_0x0001003b1c5c(puVar2 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1e0);
      func_0x0001003a8c94(auStack_1d8);
      func_0x0001003a8c94(auStack_1d0);
      func_0x0001003a8c94(auStack_1c8);
      func_0x0001003a8c94(auStack_1c0);
      func_0x0001003a8c94(auStack_1b8);
      func_0x0001003a8c94(auStack_1b0);
      func_0x0001003a8c94(auStack_1a8);
      puVar4 = (undefined1 *)0x113818228;
      ___cxa_guard_release();
      uVar7 = 0xffffffffffffffe8;
    }
  }
  func_0x000105280954();
  if ((bool)uVar1) {
    return (undefined1 *)0x113818218;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar1 = puVar4[0x18] == '\x01';
  if (!(bool)uVar1) {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_1e8 = FUN_10528080c;
  uStack_208 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_200 = uVar7;
  puStack_1f8 = puVar2;
  ppuStack_1f0 = &puStack_d0;
  FUN_10529dde0();
  func_0x0001003b2110(auStack_228,0x113818cc0);
  func_0x000108b80a1c(auStack_218,puVar4);
  func_0x000104bdb9bc(auStack_220,auStack_228,auStack_218,1);
  func_0x00010b9a8d98(auStack_218);
  func_0x0001003b1f60(auStack_228);
  iVar6 = (int)auStack_220;
  func_0x00010b9a8f60(extraout_x8);
  puVar4 = auStack_220;
  func_0x000104bdbf78(puVar4);
  FUN_10529dec4(uStack_208);
  if ((bool)uVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_218);
  func_0x0001003b1f60(auStack_228);
  __Unwind_Resume(puVar4);
  pcStack_238 = FUN_10529dde0;
  uStack_248 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_240 = &ppuStack_1f0;
  if ((bRam0000000113818cc8 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818cc8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_268,"_djinni_record_UUID");
      pcVar5 = "id";
      func_0x0001003a83dc(auStack_270,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_260,auStack_270,pcVar5);
      iVar6 = 0;
      func_0x000104bdbd44(0x113818cb8,auStack_268,0,auStack_260,1);
      func_0x0001003b1c5c(auStack_260);
      func_0x0001003a8c94(auStack_270);
      func_0x0001003a8c94(auStack_268);
      puVar4 = (undefined1 *)0x113818cc8;
      ___cxa_guard_release(0x113818cc8);
    }
  }
  FUN_10529dec4(uStack_248);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818cb8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 1052805fc; end: 10528080b;  */

undefined1 * FUN_1052805fc(undefined1 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x00010528096c();
  if ((bRam0000000113818228 & 1) == 0) {
    param_1 = (undefined1 *)0x113818228;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_e8,"_djinni_record_CampaignMetadata");
      pcVar2 = "adResponseBytes";
      func_0x0001003a83dc(auStack_f0,"adResponseBytes");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_e0,auStack_f0,pcVar2);
      pcVar2 = "responseInteractionSetting";
      func_0x0001003a83dc(auStack_f8,"responseInteractionSetting");
      FUN_105280834();
      func_0x0001003b1b50(auStack_c8,auStack_f8,pcVar2);
      pcVar2 = "feedInsertionIndex";
      func_0x0001003a83dc(auStack_100,"feedInsertionIndex");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_b0,auStack_100,pcVar2);
      pcVar2 = "adSyncAttemptId";
      func_0x0001003a83dc(auStack_108,"adSyncAttemptId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_98,auStack_108,pcVar2);
      pcVar2 = "chatHeadline";
      func_0x0001003a83dc(auStack_110,"chatHeadline");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_80,auStack_110,pcVar2);
      pcVar2 = "campaignDisplayMode";
      func_0x0001003a83dc(auStack_118,"campaignDisplayMode");
      FUN_10528088c();
      func_0x0001003b1b50(auStack_68,auStack_118,pcVar2);
      pcVar2 = "isNoFillAd";
      func_0x0001003a83dc(auStack_120,"isNoFillAd");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_50,auStack_120,pcVar2);
      unaff_x19 = auStack_e0;
      uVar5 = 0;
      func_0x000104bdbd44(0x113818218,auStack_e8,0,auStack_e0,7);
      lVar6 = 0x90;
      do {
        func_0x0001003b1c5c(unaff_x19 + lVar6);
        param_2 = (int)uVar5;
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_120);
      func_0x0001003a8c94(auStack_118);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      param_1 = (undefined1 *)0x113818228;
      ___cxa_guard_release();
      unaff_x20 = 0xffffffffffffffe8;
    }
  }
  func_0x000105280954();
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818218;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar1 = param_1[0x18] == '\x01';
  if (!(bool)uVar1) {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_128 = FUN_10528080c;
  uStack_148 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_140 = unaff_x20;
  puStack_138 = unaff_x19;
  puStack_130 = &stack0xfffffffffffffff0;
  FUN_10529dde0();
  func_0x0001003b2110(auStack_168,0x113818cc0);
  func_0x000108b80a1c(auStack_158,param_1);
  func_0x000104bdb9bc(auStack_160,auStack_168,auStack_158,1);
  func_0x00010b9a8d98(auStack_158);
  func_0x0001003b1f60(auStack_168);
  iVar4 = (int)auStack_160;
  func_0x00010b9a8f60(extraout_x8);
  puVar3 = auStack_160;
  func_0x000104bdbf78(puVar3);
  FUN_10529dec4(uStack_148);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_158);
  func_0x0001003b1f60(auStack_168);
  __Unwind_Resume(puVar3);
  pcStack_178 = FUN_10529dde0;
  uStack_188 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_180 = &puStack_130;
  if ((bRam0000000113818cc8 & 1) == 0) {
    puVar3 = (undefined1 *)0x113818cc8;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_1a8,"_djinni_record_UUID");
      pcVar2 = "id";
      func_0x0001003a83dc(auStack_1b0,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_1a0,auStack_1b0,pcVar2);
      iVar4 = 0;
      func_0x000104bdbd44(0x113818cb8,auStack_1a8,0,auStack_1a0,1);
      func_0x0001003b1c5c(auStack_1a0);
      func_0x0001003a8c94(auStack_1b0);
      func_0x0001003a8c94(auStack_1a8);
      puVar3 = (undefined1 *)0x113818cc8;
      ___cxa_guard_release(0x113818cc8);
    }
  }
  FUN_10529dec4(uStack_188);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818cb8;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 10528080c; end: 105280833;  */

undefined1 * FUN_10528080c(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uVar1 = param_2[0x18] == '\x01';
  if (!(bool)uVar1) {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529dde0();
  func_0x0001003b2110(auStack_48,0x113818cc0);
  func_0x000108b80a1c(auStack_38,param_2);
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar4 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_40;
  func_0x000104bdbf78(puVar2);
  FUN_10529dec4(uStack_28);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar2);
  pcStack_58 = FUN_10529dde0;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818cc8 & 1) == 0) {
    puVar2 = (undefined1 *)0x113818cc8;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_UUID");
      pcVar3 = "id";
      func_0x0001003a83dc(auStack_90,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar3);
      iVar4 = 0;
      func_0x000104bdbd44(0x113818cb8,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar2 = (undefined1 *)0x113818cc8;
      ___cxa_guard_release(0x113818cc8);
    }
  }
  FUN_10529dec4(uStack_68);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818cb8;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar2;
}



/* Entry: 105280834; end: 10528088b;  */

undefined8 FUN_105280834(void)

{
  int iVar1;
  
  if ((bRam00000001130cb918 & 1) == 0) {
    iVar1 = 0x130cb918;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cb908);
      ___cxa_guard_release(0x1130cb918);
    }
  }
  return 0x1130cb908;
}



/* Entry: 10528088c; end: 1052808e3;  */

undefined8 FUN_10528088c(void)

{
  int iVar1;
  
  if ((bRam00000001130cb930 & 1) == 0) {
    iVar1 = 0x130cb930;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cb920);
      ___cxa_guard_release(0x1130cb930);
    }
  }
  return 0x1130cb920;
}



/* Entry: 1052808e4; end: 105280943;  */

void FUN_1052808e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppuStack_38,param_2);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    ppuStack_38 = &ppuStack_38;
  }
  func_0x00010b9a8dd4(param_1,ppuStack_38,uStack_30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_38);
  return;
}



/* Entry: 105280944; end: 10528097f;  */

void FUN_105280944(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 105280980; end: 105280ac3;  */

undefined1 * FUN_105280980(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined4 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined4 auStack_68 [2];
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105280ac4();
  func_0x0001003b2110(auStack_78,0x113818238);
  auStack_68[0] = *param_2;
  uStack_60 = 4;
  if (*(char *)(param_2 + 2) == '\x01') {
    uStack_58 = CONCAT44(uStack_58._4_4_,param_2[1]);
    uStack_50 = 4;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 1;
  }
  uStack_4f = 0;
  uStack_48 = *(undefined8 *)(param_2 + 4);
  uStack_40 = 5;
  if (*(char *)(param_2 + 6) == '\0') {
    uStack_40 = 1;
    uStack_48 = 0;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98((long)auStack_68 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar6 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_70;
  func_0x000104bdbf78();
  FUN_105280c7c(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98((long)auStack_68 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  __Unwind_Resume(puVar3);
  pcStack_88 = FUN_105280ac4;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = auStack_68;
  puStack_98 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818240 & 1) == 0) {
    iVar2 = 0x13818240;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_ChatItem");
      pcVar4 = "state";
      func_0x0001003a83dc(auStack_100,"state");
      FUN_105280c24();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar4);
      pcVar4 = "quotedMessageType";
      func_0x0001003a83dc(auStack_108,"quotedMessageType");
      func_0x000104bef704();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar4);
      pcVar4 = "unreadChatCount";
      func_0x0001003a83dc(auStack_110,"unreadChatCount");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818230,auStack_f8,0,auStack_f0,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      ___cxa_guard_release(0x113818240);
    }
  }
  FUN_105280c7c(uStack_a8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    if ((bRam00000001130cb948 & 1) == 0) {
      iVar5 = 0x130cb948;
      ___cxa_guard_acquire();
      if (iVar5 != 0) {
        func_0x00010b990e20(0x1130cb938);
        ___cxa_guard_release(0x1130cb948);
      }
    }
    return (undefined1 *)0x1130cb938;
  }
  return (undefined1 *)0x113818230;
}



/* Entry: 105280ac4; end: 105280c23;  */

undefined8 FUN_105280ac4(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818240 & 1) == 0) {
    iVar1 = 0x13818240;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_ChatItem");
      pcVar2 = "state";
      func_0x0001003a83dc(auStack_80,"state");
      FUN_105280c24();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar2);
      pcVar2 = "quotedMessageType";
      func_0x0001003a83dc(auStack_88,"quotedMessageType");
      func_0x000104bef704();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar2);
      pcVar2 = "unreadChatCount";
      func_0x0001003a83dc(auStack_90,"unreadChatCount");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818230,auStack_78,0,auStack_70,3);
      lVar4 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      ___cxa_guard_release(0x113818240);
    }
  }
  FUN_105280c7c(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818230;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cb948 & 1) == 0) {
    iVar1 = 0x130cb948;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cb938);
      ___cxa_guard_release(0x1130cb948);
    }
  }
  return 0x1130cb938;
}



/* Entry: 105280c24; end: 105280c7b;  */

undefined8 FUN_105280c24(void)

{
  int iVar1;
  
  if ((bRam00000001130cb948 & 1) == 0) {
    iVar1 = 0x130cb948;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cb938);
      ___cxa_guard_release(0x1130cb948);
    }
  }
  return 0x1130cb938;
}



/* Entry: 105280c7c; end: 105280c8f;  */

void FUN_105280c7c(void)

{
  return;
}



/* Entry: 105280c90; end: 105280ccf;  */

void FUN_105280c90(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 *unaff_x19;
  undefined1 auStack_40 [32];
  
  func_0x000105281240();
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x000108b8099c(auStack_40);
    func_0x000105281220();
  }
  else {
    *unaff_x19 = 0;
  }
  unaff_x19[0x18] = (bool)in_CY && !(bool)in_ZR;
  return;
}



/* Entry: 105280cd0; end: 105280e57;  */

long * FUN_105280cd0(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined4 uStack_254;
  undefined1 auStack_250 [8];
  long lStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  long alStack_1d8 [3];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [8];
  long lStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 uStack_68;
  undefined2 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105280e58();
  func_0x0001003b2110(auStack_d8,0x113818250);
  FUN_1052810a4(auStack_c8,param_2);
  func_0x0001052810b8(auStack_b8,param_2 + 0x20);
  func_0x000105280820(auStack_a8,param_2 + 0x40);
  func_0x0001052810cc(auStack_98,param_2 + 0x60);
  uStack_88 = *(undefined8 *)(param_2 + 0x98);
  uStack_80 = 5;
  FUN_10529dd1c(auStack_78,param_2 + 0xa0);
  uStack_68 = *(undefined1 *)(param_2 + 0xb8);
  uStack_60 = 7;
  FUN_105281270(auStack_58,param_2 + 0xbc);
  func_0x000104bdb9bc(&lStack_d0,auStack_d8,auStack_c8,8);
  lVar8 = 0x70;
  do {
    func_0x00010b9a8d98(auStack_c8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_d8);
  plVar4 = &lStack_d0;
  func_0x00010b9a8f60(param_1);
  plVar2 = &lStack_d0;
  func_0x000104bdbf78();
  func_0x00010528125c(uStack_48);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_58;
  lVar8 = -0x80;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)plVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_d8);
  plVar4 = plVar2;
  __Unwind_Resume();
  pcStack_e8 = FUN_105280e58;
  uStack_118 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0;
  puStack_f0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818258 & 1) == 0) {
    plVar4 = (long *)0x113818258;
    ___cxa_guard_acquire();
    if ((int)plVar4 != 0) {
      func_0x0001003a83dc(auStack_1e0,"_djinni_record_ChatWallpaper");
      pcVar5 = "contentObject";
      func_0x0001003a83dc(auStack_1e8,"contentObject");
      FUN_1052810e0();
      func_0x0001003b1b50(alStack_1d8,auStack_1e8,pcVar5);
      pcVar5 = "localMediaReference";
      func_0x0001003a83dc(auStack_1f0,"localMediaReference");
      FUN_10528113c();
      func_0x0001003b1b50(auStack_1c0,auStack_1f0,pcVar5);
      pcVar5 = "mediaReferenceId";
      func_0x0001003a83dc(auStack_1f8,"mediaReferenceId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_1a8,auStack_1f8,pcVar5);
      pcVar5 = "encryptionInfo";
      func_0x0001003a83dc(auStack_200,"encryptionInfo");
      FUN_105281198();
      func_0x0001003b1b50(auStack_190,auStack_200,pcVar5);
      pcVar5 = "lastUpdatedTimestampMs";
      func_0x0001003a83dc(auStack_208,"lastUpdatedTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_178,auStack_208,pcVar5);
      pcVar5 = "initiatingUserId";
      func_0x0001003a83dc(auStack_210,"initiatingUserId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_160,auStack_210,pcVar5);
      pcVar5 = "isInAppReportable";
      func_0x0001003a83dc(auStack_218,"isInAppReportable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_148,auStack_218,pcVar5);
      pcVar5 = "blizzardMetadata";
      func_0x0001003a83dc(auStack_220,"blizzardMetadata");
      FUN_105281338();
      func_0x0001003b1b50(auStack_130,auStack_220,pcVar5);
      plVar2 = alStack_1d8;
      uVar7 = 0;
      func_0x000104bdbd44(0x113818248,auStack_1e0,0,alStack_1d8,8);
      lVar8 = 0xa8;
      do {
        func_0x0001003b1c5c((long)plVar2 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_220);
      func_0x0001003a8c94(auStack_218);
      func_0x0001003a8c94(auStack_210);
      func_0x0001003a8c94(auStack_208);
      func_0x0001003a8c94(auStack_200);
      func_0x0001003a8c94(auStack_1f8);
      func_0x0001003a8c94(auStack_1f0);
      func_0x0001003a8c94(auStack_1e8);
      func_0x0001003a8c94(auStack_1e0);
      plVar4 = (long *)0x113818258;
      ___cxa_guard_release();
      uVar7 = 0xffffffffffffffe8;
    }
  }
  func_0x00010528125c(uStack_118);
  if ((bool)uVar1) {
    return (long *)0x113818248;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((char)plVar4[3] == '\x01') {
    pcStack_228 = FUN_1052810a4;
    uStack_240 = uVar7;
    plStack_238 = plVar2;
    ppuStack_230 = &puStack_f0;
    func_0x00010527d8c0(&lStack_248);
    func_0x000106e55508(lStack_248 + 0x10,*plVar4,plVar4[1]);
    uStack_254 = 3;
    FUN_10527d8ec(auStack_250,&uStack_254,&lStack_248);
    func_0x00010b9a8f90(extraout_x8,auStack_250);
    func_0x000104bdb38c(auStack_250);
    plVar4 = &lStack_248;
    FUN_10527d94c(plVar4);
    return plVar4;
  }
  *(undefined2 *)(extraout_x8 + 1) = 1;
  *extraout_x8 = 0;
  return plVar4;
}



/* Entry: 105280e58; end: 1052810a3;  */

long * FUN_105280e58(long *param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  long lVar4;
  undefined4 uStack_174;
  undefined1 auStack_170 [8];
  long lStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818258 & 1) == 0) {
    param_1 = (long *)0x113818258;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_100,"_djinni_record_ChatWallpaper");
      pcVar1 = "contentObject";
      func_0x0001003a83dc(auStack_108,"contentObject");
      FUN_1052810e0();
      func_0x0001003b1b50(auStack_f8,auStack_108,pcVar1);
      pcVar1 = "localMediaReference";
      func_0x0001003a83dc(auStack_110,"localMediaReference");
      FUN_10528113c();
      func_0x0001003b1b50(auStack_e0,auStack_110,pcVar1);
      pcVar1 = "mediaReferenceId";
      func_0x0001003a83dc(auStack_118,"mediaReferenceId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_c8,auStack_118,pcVar1);
      pcVar1 = "encryptionInfo";
      func_0x0001003a83dc(auStack_120,"encryptionInfo");
      FUN_105281198();
      func_0x0001003b1b50(auStack_b0,auStack_120,pcVar1);
      pcVar1 = "lastUpdatedTimestampMs";
      func_0x0001003a83dc(auStack_128,"lastUpdatedTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_98,auStack_128,pcVar1);
      pcVar1 = "initiatingUserId";
      func_0x0001003a83dc(auStack_130,"initiatingUserId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_80,auStack_130,pcVar1);
      pcVar1 = "isInAppReportable";
      func_0x0001003a83dc(auStack_138,"isInAppReportable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_68,auStack_138,pcVar1);
      pcVar1 = "blizzardMetadata";
      func_0x0001003a83dc(auStack_140,"blizzardMetadata");
      FUN_105281338();
      func_0x0001003b1b50(auStack_50,auStack_140,pcVar1);
      unaff_x19 = auStack_f8;
      uVar3 = 0;
      func_0x000104bdbd44(0x113818248,auStack_100,0,auStack_f8,8);
      lVar4 = 0xa8;
      do {
        func_0x0001003b1c5c(unaff_x19 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      func_0x0001003a8c94(auStack_118);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      param_1 = (long *)0x113818258;
      ___cxa_guard_release();
      unaff_x20 = 0xffffffffffffffe8;
    }
  }
  func_0x00010528125c(uStack_38);
  if ((bool)in_ZR) {
    return (long *)0x113818248;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((char)param_1[3] == '\x01') {
    pcStack_148 = FUN_1052810a4;
    uStack_160 = unaff_x20;
    puStack_158 = unaff_x19;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x00010527d8c0(&lStack_168);
    func_0x000106e55508(lStack_168 + 0x10,*param_1,param_1[1]);
    uStack_174 = 3;
    FUN_10527d8ec(auStack_170,&uStack_174,&lStack_168);
    func_0x00010b9a8f90(extraout_x8,auStack_170);
    func_0x000104bdb38c(auStack_170);
    plVar2 = &lStack_168;
    FUN_10527d94c(plVar2);
    return plVar2;
  }
  *(undefined2 *)(extraout_x8 + 1) = 1;
  *extraout_x8 = 0;
  return param_1;
}



/* Entry: 1052810a4; end: 1052810df;  */

void FUN_1052810a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    func_0x00010527d8c0(&lStack_28);
    func_0x000106e55508(lStack_28 + 0x10,*param_2,param_2[1]);
    uStack_34 = 3;
    FUN_10527d8ec(auStack_30,&uStack_34,&lStack_28);
    func_0x00010b9a8f90(param_1,auStack_30);
    func_0x000104bdb38c(auStack_30);
    FUN_10527d94c(&lStack_28);
    return;
  }
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1052810e0; end: 10528113b;  */

undefined8 FUN_1052810e0(void)

{
  int iVar1;
  
  if ((bRam00000001130cb960 & 1) == 0) {
    iVar1 = 0x130cb960;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000108b80a94();
      func_0x00010b990784(0x1130cb950);
      ___cxa_guard_release(0x1130cb960);
    }
  }
  return 0x1130cb950;
}



/* Entry: 10528113c; end: 105281197;  */

undefined8 FUN_10528113c(void)

{
  int iVar1;
  
  if ((bRam00000001130cb978 & 1) == 0) {
    iVar1 = 0x130cb978;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528c00c();
      func_0x00010b990784(0x1130cb968);
      ___cxa_guard_release(0x1130cb978);
    }
  }
  return 0x1130cb968;
}



/* Entry: 105281198; end: 1052811f3;  */

undefined8 FUN_105281198(void)

{
  int iVar1;
  
  if ((bRam00000001130cb990 & 1) == 0) {
    iVar1 = 0x130cb990;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528e0f8();
      func_0x00010b990784(0x1130cb980);
      ___cxa_guard_release(0x1130cb990);
    }
  }
  return 0x1130cb980;
}



/* Entry: 1052811f4; end: 10528120f;  */

void FUN_1052811f4(long param_1)

{
  func_0x000104bfaed0();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 105281210; end: 10528126f;  */

void FUN_105281210(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 105281270; end: 105281337;  */

undefined1 * FUN_105281270(undefined8 param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105281338();
  func_0x0001003b2110(auStack_48,0x113818268);
  auStack_38[0] = *param_2;
  uStack_30 = 4;
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_10528141c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_105281338;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818270 & 1) == 0) {
    puVar1 = (undefined1 *)0x113818270;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_ChatWallpaperBlizzardMetadata");
      pcVar2 = "wallpaperSource";
      func_0x0001003a83dc(auStack_90,"wallpaperSource");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x113818260,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x113818270;
      ___cxa_guard_release(0x113818270);
    }
  }
  FUN_10528141c(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818260;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 105281338; end: 10528141b;  */

undefined8 FUN_105281338(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818270 & 1) == 0) {
    param_1 = 0x113818270;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_ChatWallpaperBlizzardMetadata");
      pcVar1 = "wallpaperSource";
      func_0x0001003a83dc(auStack_40,"wallpaperSource");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818260,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818270;
      ___cxa_guard_release(0x113818270);
    }
  }
  FUN_10528141c(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818260;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10528141c; end: 10528142f;  */

void FUN_10528141c(void)

{
  return;
}



/* Entry: 105281430; end: 105281577;  */

undefined1 * FUN_105281430(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined2 uStack_90;
  undefined1 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_68;
  undefined2 uStack_60;
  undefined1 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105281578();
  func_0x0001003b2110(auStack_a8,0x113818280);
  auStack_98[0] = *param_2;
  uStack_90 = 7;
  uStack_88 = param_2[1];
  uStack_80 = 7;
  uStack_78 = param_2[2];
  uStack_70 = 7;
  uStack_68 = param_2[3];
  uStack_60 = 7;
  uStack_58 = param_2[4];
  uStack_50 = 7;
  uStack_48 = *(undefined8 *)(param_2 + 8);
  uStack_40 = 5;
  if (param_2[0x10] == '\0') {
    uStack_40 = 1;
    uStack_48 = 0;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_a0,auStack_a8,auStack_98,6);
  lVar7 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_98 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_a8);
  puVar3 = auStack_a0;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_a0;
  func_0x000104bdbf78();
  FUN_105281760(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_98 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_a8);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_b8 = FUN_105281578;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = auStack_98;
  puStack_c8 = puVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818288 & 1) == 0) {
    puVar3 = (undefined1 *)0x113818288;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_170,"_djinni_record_ComboSnapItem");
      pcVar4 = "hasNewChat";
      func_0x0001003a83dc(auStack_178,"hasNewChat");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_168,auStack_178,pcVar4);
      pcVar4 = "hasNewReaction";
      func_0x0001003a83dc(auStack_180,"hasNewReaction");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_150,auStack_180,pcVar4);
      pcVar4 = "showSnapIconFirst";
      func_0x0001003a83dc(auStack_188,"showSnapIconFirst");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_138,auStack_188,pcVar4);
      pcVar4 = "hasMultipleNewSnaps";
      func_0x0001003a83dc(auStack_190,"hasMultipleNewSnaps");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_120,auStack_190,pcVar4);
      pcVar4 = "hasMultipleNewChats";
      func_0x0001003a83dc(auStack_198,"hasMultipleNewChats");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_108,auStack_198,pcVar4);
      pcVar4 = "unreadChatCount";
      func_0x0001003a83dc(auStack_1a0,"unreadChatCount");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_f0,auStack_1a0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818278,auStack_170,0,auStack_168,6);
      lVar7 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_168 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1a0);
      func_0x0001003a8c94(auStack_198);
      func_0x0001003a8c94(auStack_190);
      func_0x0001003a8c94(auStack_188);
      func_0x0001003a8c94(auStack_180);
      func_0x0001003a8c94(auStack_178);
      func_0x0001003a8c94(auStack_170);
      puVar3 = (undefined1 *)0x113818288;
      ___cxa_guard_release(0x113818288);
    }
  }
  FUN_105281760(uStack_d8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    return puVar3;
  }
  return (undefined1 *)0x113818278;
}



/* Entry: 105281578; end: 10528175f;  */

undefined8 FUN_105281578(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818288 & 1) == 0) {
    param_1 = 0x113818288;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_c0,"_djinni_record_ComboSnapItem");
      pcVar1 = "hasNewChat";
      func_0x0001003a83dc(auStack_c8,"hasNewChat");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_b8,auStack_c8,pcVar1);
      pcVar1 = "hasNewReaction";
      func_0x0001003a83dc(auStack_d0,"hasNewReaction");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_a0,auStack_d0,pcVar1);
      pcVar1 = "showSnapIconFirst";
      func_0x0001003a83dc(auStack_d8,"showSnapIconFirst");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_88,auStack_d8,pcVar1);
      pcVar1 = "hasMultipleNewSnaps";
      func_0x0001003a83dc(auStack_e0,"hasMultipleNewSnaps");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_70,auStack_e0,pcVar1);
      pcVar1 = "hasMultipleNewChats";
      func_0x0001003a83dc(auStack_e8,"hasMultipleNewChats");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_58,auStack_e8,pcVar1);
      pcVar1 = "unreadChatCount";
      func_0x0001003a83dc(auStack_f0,"unreadChatCount");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_40,auStack_f0,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818278,auStack_c0,0,auStack_b8,6);
      lVar3 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_b8 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      param_1 = 0x113818288;
      ___cxa_guard_release(0x113818288);
    }
  }
  FUN_105281760(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818278;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105281760; end: 105281773;  */

void FUN_105281760(void)

{
  return;
}



/* Entry: 105281774; end: 1052817bf;  */

void FUN_105281774(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 *unaff_x19;
  undefined1 auStack_f8 [216];
  
  func_0x000105282e10();
  if ((bool)in_CY && !(bool)in_ZR) {
    FUN_105283a98(auStack_f8);
    func_0x0001006b5b8c();
    func_0x000105282d68();
    func_0x00010066dfa0(auStack_f8);
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[0xd8] = 0;
  }
  return;
}



/* Entry: 1052817c0; end: 105281d4f;  */

undefined1 * FUN_1052817c0(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  long unaff_x22;
  long lVar6;
  ulong uVar7;
  ulong unaff_x23;
  long unaff_x24;
  long lVar8;
  undefined1 auStack_8a0 [8];
  undefined1 auStack_898 [8];
  undefined1 auStack_890 [8];
  undefined1 auStack_888 [8];
  undefined1 auStack_880 [8];
  undefined1 auStack_878 [8];
  undefined1 auStack_870 [8];
  undefined1 auStack_868 [8];
  undefined1 auStack_860 [8];
  undefined1 auStack_858 [8];
  undefined1 auStack_850 [8];
  undefined1 auStack_848 [8];
  undefined1 auStack_840 [8];
  undefined1 auStack_838 [8];
  undefined1 auStack_830 [8];
  undefined1 auStack_828 [8];
  undefined1 auStack_820 [8];
  undefined1 auStack_818 [8];
  undefined1 auStack_810 [8];
  undefined1 auStack_808 [8];
  undefined1 auStack_800 [8];
  undefined1 auStack_7f8 [8];
  undefined1 auStack_7f0 [8];
  undefined1 auStack_7e8 [8];
  undefined1 auStack_7e0 [8];
  undefined1 auStack_7d8 [8];
  undefined1 auStack_7d0 [8];
  undefined1 auStack_7c8 [8];
  undefined1 auStack_7c0 [8];
  undefined1 auStack_7b8 [8];
  undefined1 auStack_7b0 [8];
  undefined1 auStack_7a8 [8];
  undefined1 auStack_7a0 [8];
  undefined1 auStack_798 [8];
  undefined1 auStack_790 [8];
  undefined1 auStack_788 [8];
  undefined1 auStack_780 [8];
  undefined1 auStack_778 [8];
  undefined1 auStack_770 [8];
  undefined1 auStack_768 [8];
  undefined1 auStack_760 [8];
  undefined1 auStack_758 [8];
  undefined1 auStack_750 [8];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [24];
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [24];
  undefined1 auStack_6d0 [24];
  undefined1 auStack_6b8 [24];
  undefined1 auStack_6a0 [24];
  undefined1 auStack_688 [24];
  undefined1 auStack_670 [24];
  undefined1 auStack_658 [24];
  undefined1 auStack_640 [24];
  undefined1 auStack_628 [24];
  undefined1 auStack_610 [24];
  undefined1 auStack_5f8 [24];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined1 auStack_5b0 [24];
  undefined1 auStack_598 [24];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [8];
  undefined4 auStack_310 [2];
  undefined2 uStack_308;
  long lStack_300;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [32];
  undefined1 auStack_2c8 [16];
  undefined4 uStack_2b8;
  undefined2 uStack_2b0;
  undefined1 auStack_2a8 [16];
  undefined4 uStack_298;
  undefined2 uStack_290;
  undefined1 auStack_288 [48];
  undefined8 uStack_258;
  undefined2 uStack_250;
  undefined4 uStack_248;
  undefined2 uStack_240;
  undefined8 uStack_228;
  undefined2 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined1 uStack_20f;
  undefined1 uStack_208;
  undefined2 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 uStack_1ef;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
  undefined4 uStack_1c8;
  undefined2 uStack_1c0;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined4 uStack_188;
  undefined2 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_158;
  undefined2 uStack_150;
  undefined4 uStack_148;
  undefined2 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 uStack_128;
  undefined2 uStack_120;
  undefined1 uStack_118;
  undefined2 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 auStack_a8 [16];
  undefined1 uStack_98;
  undefined2 uStack_90;
  undefined1 uStack_88;
  undefined2 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined1 auStack_68 [8];
  undefined2 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105281d50();
  func_0x0001003b2110(auStack_320,0x1136b9798);
  FUN_10529dd1c(auStack_2f8,param_1);
  func_0x000105280820(auStack_2e8,param_1 + 0x18);
  func_0x000105282e40(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 5);
  func_0x000105282e20();
  for (; unaff_x23 < (ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 5);
      unaff_x23 = unaff_x23 + 1) {
    FUN_105295cb0(auStack_310,*(long *)(param_1 + 0x38) + unaff_x22);
    func_0x000105282e38(lStack_300 + unaff_x24);
    func_0x000105282e30();
    unaff_x24 = unaff_x24 + 0x10;
    unaff_x22 = unaff_x22 + 0x20;
  }
  func_0x000105282df4();
  func_0x000105282e08();
  FUN_1052837a4(auStack_2c8,param_1 + 0x50);
  uStack_2b8 = *(undefined4 *)(param_1 + 0x70);
  uStack_2b0 = 4;
  FUN_105284f10(auStack_2a8,param_1 + 0x78);
  uStack_298 = *(undefined4 *)(param_1 + 0x88);
  uStack_290 = 4;
  FUN_105284f10(auStack_288,param_1 + 0x90);
  func_0x000105282e48(param_1 + 0xa0);
  puVar4 = auStack_2f8;
  func_0x000105282e48(param_1 + 0xb8);
  uStack_258 = *(undefined8 *)(param_1 + 0xd0);
  lVar6 = 5;
  uStack_250 = 5;
  uStack_248 = *(undefined4 *)(param_1 + 0xd8);
  uStack_240 = 4;
  func_0x000105282e48(param_1 + 0xe0);
  uStack_220 = 5;
  uStack_228 = *(undefined8 *)(param_1 + 0xf8);
  uStack_218 = *(undefined8 *)(param_1 + 0x100);
  uStack_1e0 = 5;
  uStack_210 = uStack_1e0;
  if (*(char *)(param_1 + 0x108) == '\0') {
    uStack_210 = 1;
    uStack_218 = 0;
  }
  uStack_20f = 0;
  uStack_208 = *(undefined1 *)(param_1 + 0x110);
  uStack_200 = 7;
  uStack_1f8 = *(undefined8 *)(param_1 + 0x118);
  uStack_1f0 = uStack_1e0;
  if (*(char *)(param_1 + 0x120) == '\0') {
    uStack_1f0 = 1;
    uStack_1f8 = 0;
  }
  uStack_1ef = 0;
  uStack_1e8 = *(undefined8 *)(param_1 + 0x128);
  if (*(char *)(param_1 + 0x130) == '\0') {
    uStack_1e0 = 1;
    uStack_1e8 = 0;
  }
  uStack_1df = 0;
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    FUN_105280cd0(&uStack_1d8,param_1 + 0x138);
  }
  else {
    uStack_1d0 = 1;
    uStack_1d8 = 0;
  }
  uStack_1c8 = *(undefined4 *)(param_1 + 0x200);
  uStack_1c0 = 4;
  func_0x000105282e40((*(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x208)) / 0x18);
  func_0x000105282e20();
  lVar8 = 0x18;
  while( true ) {
    puVar1 = (undefined1 *)0x0;
    if (unaff_x24 != 0) {
      puVar1 = (undefined1 *)((*(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x208)) / unaff_x24)
      ;
    }
    if (puVar1 <= puVar4) break;
    FUN_10528bd20(auStack_310,*(long *)(param_1 + 0x208) + lVar6);
    func_0x000105282e38(lStack_300 + lVar8);
    func_0x000105282e30();
    puVar4 = puVar4 + 1;
    lVar8 = lVar8 + 0x10;
    lVar6 = lVar6 + 0x18;
  }
  func_0x000105282df4();
  func_0x000105282e08();
  FUN_1052828f4(auStack_1a8,param_1 + 0x220);
  if (*(char *)(param_1 + 0x26c) == '\x01') {
    uStack_198 = CONCAT44(uStack_198._4_4_,*(undefined4 *)(param_1 + 0x268));
    uStack_190 = 4;
  }
  else {
    uStack_198 = 0;
    uStack_190 = 1;
  }
  uStack_18f = 0;
  uStack_188 = *(undefined4 *)(param_1 + 0x270);
  uStack_180 = 4;
  uStack_178 = *(undefined8 *)(param_1 + 0x278);
  uStack_160 = 5;
  uStack_170 = uStack_160;
  if (*(char *)(param_1 + 0x280) == '\0') {
    uStack_170 = 1;
    uStack_178 = 0;
  }
  uStack_16f = 0;
  uStack_168 = *(undefined8 *)(param_1 + 0x288);
  if (*(char *)(param_1 + 0x290) == '\0') {
    uStack_160 = 1;
    uStack_168 = 0;
  }
  uStack_15f = 0;
  uStack_158 = *(undefined1 *)(param_1 + 0x298);
  uStack_150 = 7;
  uStack_148 = *(undefined4 *)(param_1 + 0x29c);
  uStack_140 = 4;
  func_0x00010528080c(auStack_138,param_1 + 0x2a0);
  uStack_128 = *(undefined1 *)(param_1 + 0x2c0);
  uStack_120 = 7;
  uStack_118 = *(undefined1 *)(param_1 + 0x2c1);
  uStack_110 = 7;
  FUN_10528358c(auStack_108,param_1 + 0x2c4);
  uStack_f8 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_f0 = 5;
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    uStack_f0 = 1;
    uStack_f8 = 0;
  }
  uStack_ef = 0;
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    func_0x000105282e40(*(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 2);
    lVar6 = 0x18;
    for (uVar7 = 0; uVar7 < (ulong)(*(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 2);
        uVar7 = uVar7 + 1) {
      auStack_310[0] = *(undefined4 *)(*(long *)(param_1 + 0x2d8) + uVar7 * 4);
      uStack_308 = 4;
      func_0x000105282e38(lStack_300 + lVar6);
      func_0x000105282e30();
      lVar6 = lVar6 + 0x10;
    }
    func_0x000105282df4();
    func_0x000105282e08();
  }
  else {
    uStack_e0 = 1;
    uStack_e8 = 0;
  }
  func_0x000105282908(auStack_d8,param_1 + 0x2f8);
  func_0x00010528291c(auStack_c8,param_1 + 0x3d8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x3f8);
  uStack_b0 = 5;
  if (*(char *)(param_1 + 0x400) == '\0') {
    uStack_b0 = 1;
    uStack_b8 = 0;
  }
  uStack_af = 0;
  func_0x000105282930(auStack_a8,param_1 + 0x408);
  uStack_98 = *(undefined1 *)(param_1 + 0x418);
  uStack_90 = 7;
  uStack_88 = *(undefined1 *)(param_1 + 0x419);
  uStack_80 = 7;
  uStack_78 = *(undefined4 *)(param_1 + 0x41c);
  uStack_70 = 4;
  auStack_68[0] = *(undefined1 *)(param_1 + 0x420);
  uStack_60 = 7;
  func_0x000104bdb9bc(auStack_318,auStack_320,auStack_2f8,0x2a);
  lVar6 = 0x290;
  do {
    func_0x00010b9a8d98(auStack_2f8 + lVar6);
    lVar6 = lVar6 + -0x10;
    uVar2 = lVar6 == -0x10;
  } while (!(bool)uVar2);
  func_0x0001003b1f60(auStack_320);
  func_0x0001006b5b8c();
  func_0x00010b9a8f60();
  puVar4 = auStack_318;
  func_0x000104bdbf78();
  func_0x000105282e50(uStack_58);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar4 = auStack_68;
    lVar6 = -0x2a0;
    do {
      func_0x00010b9a8d98(puVar4);
      puVar4 = puVar4 + -0x10;
      lVar6 = lVar6 + 0x10;
      uVar2 = lVar6 == 0;
    } while (!(bool)uVar2);
    func_0x0001003b1f60(auStack_320);
    func_0x000105282dec();
    uStack_358 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((bRam00000001136b9740 & 1) == 0) {
      iVar3 = 0x136b9740;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        func_0x0001003a83dc(auStack_750,"_djinni_record_Conversation");
        pcVar5 = "conversationId";
        func_0x0001003a83dc(auStack_758,"conversationId");
        FUN_10529dde0();
        func_0x0001003b1b50(auStack_748,auStack_758,pcVar5);
        pcVar5 = "title";
        func_0x0001003a83dc(auStack_760,"title");
        func_0x000104bf1120();
        func_0x0001003b1b50(auStack_730,auStack_760,pcVar5);
        func_0x0001003a83dc(auStack_768,"participants");
        if ((bRam00000001136b9748 & 1) == 0) goto LAB_105282628;
        goto LAB_105281e38;
      }
    }
    while (func_0x000105282e50(uStack_358), !(bool)uVar2) {
      ___stack_chk_fail();
LAB_105282628:
      iVar3 = 0x136b9748;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        FUN_105295dc0();
        func_0x00010b990868(0x1136b97a0);
        ___cxa_guard_release(0x1136b9748);
      }
LAB_105281e38:
      func_0x0001003b1b50(auStack_718,auStack_768,0x1136b97a0);
      pcVar5 = "retentionPolicy";
      func_0x0001003a83dc(auStack_770,"retentionPolicy");
      FUN_1052838c8();
      func_0x0001003b1b50(auStack_700,auStack_770,pcVar5);
      pcVar5 = "conversationType";
      func_0x0001003a83dc(auStack_778,"conversationType");
      func_0x000104bef548();
      func_0x0001003b1b50(auStack_6e8,auStack_778,pcVar5);
      pcVar5 = "chatNotificationPreference";
      func_0x0001003a83dc(auStack_780,"chatNotificationPreference");
      FUN_105285014();
      func_0x0001003b1b50(auStack_6d0,auStack_780,pcVar5);
      pcVar5 = "gameNotificationPreference";
      func_0x0001003a83dc(auStack_788,"gameNotificationPreference");
      func_0x000104bef6ac();
      func_0x0001003b1b50(auStack_6b8,auStack_788,pcVar5);
      pcVar5 = "callingNotificationPreference";
      func_0x0001003a83dc(auStack_790,"callingNotificationPreference");
      FUN_105285014();
      func_0x0001003b1b50(auStack_6a0,auStack_790,pcVar5);
      pcVar5 = "blockedParticipantExceptions";
      func_0x0001003a83dc(auStack_798,"blockedParticipantExceptions");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_688,auStack_798,pcVar5);
      pcVar5 = "nonFriendUserParticipantExceptions";
      func_0x0001003a83dc(auStack_7a0,"nonFriendUserParticipantExceptions");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_670,auStack_7a0,pcVar5);
      pcVar5 = "joinedTimestampMs";
      func_0x0001003a83dc(auStack_7a8,"joinedTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_658,auStack_7a8,pcVar5);
      pcVar5 = "sourcePage";
      func_0x0001003a83dc(auStack_7b0,"sourcePage");
      func_0x000104bef5a0();
      func_0x0001003b1b50(auStack_640,auStack_7b0,pcVar5);
      pcVar5 = "lastSenderUserIds";
      func_0x0001003a83dc(auStack_7b8,"lastSenderUserIds");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_628,auStack_7b8,pcVar5);
      pcVar5 = "latestReceivedReactionSeenId";
      func_0x0001003a83dc(auStack_7c0,"latestReceivedReactionSeenId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_610,auStack_7c0,pcVar5);
      pcVar5 = "createdTimestampMs";
      func_0x0001003a83dc(auStack_7c8,"createdTimestampMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_5f8,auStack_7c8,pcVar5);
      pcVar5 = "isFriendLinkPending";
      func_0x0001003a83dc(auStack_7d0,"isFriendLinkPending");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_5e0,auStack_7d0,pcVar5);
      pcVar5 = "pinnedTimestampMs";
      func_0x0001003a83dc(auStack_7d8,"pinnedTimestampMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_5c8,auStack_7d8,pcVar5);
      pcVar5 = "customNotificationSoundId";
      func_0x0001003a83dc(auStack_7e0,"customNotificationSoundId");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_5b0,auStack_7e0,pcVar5);
      func_0x0001003a83dc(auStack_7e8,"chatWallpaper");
      if ((bRam00000001136b9750 & 1) == 0) {
        iVar3 = 0x136b9750;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          FUN_105280e58();
          func_0x00010b990784(0x1136b97b0);
          ___cxa_guard_release(0x1136b9750);
        }
      }
      func_0x0001003b1b50(auStack_598,auStack_7e8,0x1136b97b0);
      func_0x0001003a83dc(auStack_7f0,"lockedState");
      if ((bRam00000001136b9758 & 1) == 0) {
        iVar3 = 0x136b9758;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x00010b990e20(0x1136b97c0);
          ___cxa_guard_release(0x1136b9758);
        }
      }
      func_0x0001003b1b50(auStack_580,auStack_7f0,0x1136b97c0);
      func_0x0001003a83dc(auStack_7f8,"kickedParticipants");
      if ((bRam00000001136b9760 & 1) == 0) {
        iVar3 = 0x136b9760;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          FUN_10528bdec();
          func_0x00010b990868(0x1136b97d0);
          ___cxa_guard_release(0x1136b9760);
        }
      }
      func_0x0001003b1b50(auStack_568,auStack_7f8,0x1136b97d0);
      pcVar5 = "streakMetadata";
      func_0x0001003a83dc(auStack_800,"streakMetadata");
      FUN_105282944();
      func_0x0001003b1b50(auStack_550,auStack_800,pcVar5);
      pcVar5 = "conversationSubType";
      func_0x0001003a83dc(auStack_808,"conversationSubType");
      FUN_1052829a0();
      func_0x0001003b1b50(auStack_538,auStack_808,pcVar5);
      func_0x0001003a83dc(auStack_810,"snapPostOpenViewingPolicy");
      if ((bRam00000001136b9768 & 1) == 0) {
        iVar3 = 0x136b9768;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x00010b990e20(0x1136b97e0);
          ___cxa_guard_release(0x1136b9768);
        }
      }
      func_0x0001003b1b50(auStack_520,auStack_810,0x1136b97e0);
      pcVar5 = "pendingDecryptionCount";
      func_0x0001003a83dc(auStack_818,"pendingDecryptionCount");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_508,auStack_818,pcVar5);
      pcVar5 = "initialMutualFriendCount";
      func_0x0001003a83dc(auStack_820,"initialMutualFriendCount");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_4f0,auStack_820,pcVar5);
      pcVar5 = "streakReminderEnabled";
      func_0x0001003a83dc(auStack_828,"streakReminderEnabled");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_4d8,auStack_828,pcVar5);
      pcVar5 = "categoryType";
      func_0x0001003a83dc(auStack_830,"categoryType");
      func_0x000104bf8944();
      func_0x0001003b1b50(auStack_4c0,auStack_830,pcVar5);
      pcVar5 = "categoryId";
      func_0x0001003a83dc(auStack_838,"categoryId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_4a8,auStack_838,pcVar5);
      pcVar5 = "isEligibleForInfiniteRetention";
      func_0x0001003a83dc(auStack_840,"isEligibleForInfiniteRetention");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_490,auStack_840,pcVar5);
      pcVar5 = "isEligibleForSevenDayRetention";
      func_0x0001003a83dc(auStack_848,"isEligibleForSevenDayRetention");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_478,auStack_848,pcVar5);
      pcVar5 = "metadataFormat";
      func_0x0001003a83dc(auStack_850,"metadataFormat");
      FUN_105283654();
      func_0x0001003b1b50(auStack_460,auStack_850,pcVar5);
      pcVar5 = "customRingtoneSoundId";
      func_0x0001003a83dc(auStack_858,"customRingtoneSoundId");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_448,auStack_858,pcVar5);
      func_0x0001003a83dc(auStack_860,"availableRetentionModes");
      if ((bRam00000001136b9770 & 1) == 0) {
        iVar3 = 0x136b9770;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          if ((bRam00000001136b9778 & 1) == 0) {
            iVar3 = 0x136b9778;
            ___cxa_guard_acquire();
            if (iVar3 != 0) {
              if ((bRam00000001136b9780 & 1) == 0) {
                iVar3 = 0x136b9780;
                ___cxa_guard_acquire();
                if (iVar3 != 0) {
                  func_0x00010b990e20(0x1136b9810);
                  ___cxa_guard_release(0x1136b9780);
                }
              }
              func_0x00010b990868(0x1136b9810);
              ___cxa_guard_release(0x1136b9778);
            }
          }
          func_0x00010b990784(0x1136b9800);
          ___cxa_guard_release(0x1136b9770);
        }
      }
      func_0x0001003b1b50(auStack_430,auStack_860,0x1136b97f0);
      pcVar5 = "conversationSubTypeMetadata";
      func_0x0001003a83dc(auStack_868,"conversationSubTypeMetadata");
      FUN_1052829fc();
      func_0x0001003b1b50(auStack_418,auStack_868,pcVar5);
      pcVar5 = "conversationInvitationMetadata";
      func_0x0001003a83dc(auStack_870,"conversationInvitationMetadata");
      FUN_105282a58();
      func_0x0001003b1b50(auStack_400,auStack_870,pcVar5);
      pcVar5 = "backoffTimeMs";
      func_0x0001003a83dc(auStack_878,"backoffTimeMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_3e8,auStack_878,pcVar5);
      pcVar5 = "activityData";
      func_0x0001003a83dc(auStack_880,"activityData");
      FUN_105282ab4();
      func_0x0001003b1b50(auStack_3d0,auStack_880,pcVar5);
      pcVar5 = "isPreservedForLegalHold";
      func_0x0001003a83dc(auStack_888,"isPreservedForLegalHold");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_3b8,auStack_888,pcVar5);
      pcVar5 = "canCreatePoll";
      func_0x0001003a83dc(auStack_890,"canCreatePoll");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_3a0,auStack_890,pcVar5);
      func_0x0001003a83dc(auStack_898,"groupStoryConsentStatus");
      if ((bRam00000001136b9788 & 1) == 0) {
        iVar3 = 0x136b9788;
        ___cxa_guard_acquire();
        if (iVar3 != 0) {
          func_0x00010b990e20(0x1136b9820);
          ___cxa_guard_release(0x1136b9788);
        }
      }
      func_0x0001003b1b50(auStack_388,auStack_898,0x1136b9820);
      pcVar5 = "groupStoryMayExist";
      func_0x0001003a83dc(auStack_8a0,"groupStoryMayExist");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_370,auStack_8a0,pcVar5);
      func_0x000104bdbd44(0x1136b9790,auStack_750,0,auStack_748,0x2a);
      lVar6 = 0x3d8;
      do {
        func_0x0001003b1c5c(auStack_748 + lVar6);
        lVar6 = lVar6 + -0x18;
        uVar2 = lVar6 == -0x18;
      } while (!(bool)uVar2);
      func_0x0001003a8c94(auStack_8a0);
      func_0x0001003a8c94(auStack_898);
      func_0x0001003a8c94(auStack_890);
      func_0x0001003a8c94(auStack_888);
      func_0x0001003a8c94(auStack_880);
      func_0x0001003a8c94(auStack_878);
      func_0x0001003a8c94(auStack_870);
      func_0x0001003a8c94(auStack_868);
      func_0x0001003a8c94(auStack_860);
      func_0x0001003a8c94(auStack_858);
      func_0x0001003a8c94(auStack_850);
      func_0x0001003a8c94(auStack_848);
      func_0x0001003a8c94(auStack_840);
      func_0x0001003a8c94(auStack_838);
      func_0x0001003a8c94(auStack_830);
      func_0x0001003a8c94(auStack_828);
      func_0x0001003a8c94(auStack_820);
      func_0x0001003a8c94(auStack_818);
      func_0x0001003a8c94(auStack_810);
      func_0x0001003a8c94(auStack_808);
      func_0x0001003a8c94(auStack_800);
      func_0x0001003a8c94(auStack_7f8);
      func_0x0001003a8c94(auStack_7f0);
      func_0x0001003a8c94(auStack_7e8);
      func_0x0001003a8c94(auStack_7e0);
      func_0x0001003a8c94(auStack_7d8);
      func_0x0001003a8c94(auStack_7d0);
      func_0x0001003a8c94(auStack_7c8);
      func_0x0001003a8c94(auStack_7c0);
      func_0x0001003a8c94(auStack_7b8);
      func_0x0001003a8c94(auStack_7b0);
      func_0x0001003a8c94(auStack_7a8);
      func_0x0001003a8c94(auStack_7a0);
      func_0x0001003a8c94(auStack_798);
      func_0x0001003a8c94(auStack_790);
      func_0x0001003a8c94(auStack_788);
      func_0x0001003a8c94(auStack_780);
      func_0x0001003a8c94(auStack_778);
      func_0x0001003a8c94(auStack_770);
      func_0x0001003a8c94(auStack_768);
      func_0x0001003a8c94(auStack_760);
      func_0x0001003a8c94(auStack_758);
      func_0x0001003a8c94(auStack_750);
      ___cxa_guard_release(0x1136b9740);
    }
    return (undefined1 *)0x1136b9790;
  }
  return puVar4;
}



/* Entry: 105281d50; end: 105282833;  */

undefined8 FUN_105281d50(void)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  long lVar3;
  undefined1 auStack_580 [8];
  undefined1 auStack_578 [8];
  undefined1 auStack_570 [8];
  undefined1 auStack_568 [8];
  undefined1 auStack_560 [8];
  undefined1 auStack_558 [8];
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [8];
  undefined1 auStack_540 [8];
  undefined1 auStack_538 [8];
  undefined1 auStack_530 [8];
  undefined1 auStack_528 [8];
  undefined1 auStack_520 [8];
  undefined1 auStack_518 [8];
  undefined1 auStack_510 [8];
  undefined1 auStack_508 [8];
  undefined1 auStack_500 [8];
  undefined1 auStack_4f8 [8];
  undefined1 auStack_4f0 [8];
  undefined1 auStack_4e8 [8];
  undefined1 auStack_4e0 [8];
  undefined1 auStack_4d8 [8];
  undefined1 auStack_4d0 [8];
  undefined1 auStack_4c8 [8];
  undefined1 auStack_4c0 [8];
  undefined1 auStack_4b8 [8];
  undefined1 auStack_4b0 [8];
  undefined1 auStack_4a8 [8];
  undefined1 auStack_4a0 [8];
  undefined1 auStack_498 [8];
  undefined1 auStack_490 [8];
  undefined1 auStack_488 [8];
  undefined1 auStack_480 [8];
  undefined1 auStack_478 [8];
  undefined1 auStack_470 [8];
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [8];
  undefined1 auStack_458 [8];
  undefined1 auStack_450 [8];
  undefined1 auStack_448 [8];
  undefined1 auStack_440 [8];
  undefined1 auStack_438 [8];
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9740 & 1) == 0) {
    iVar1 = 0x136b9740;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_430,"_djinni_record_Conversation");
      pcVar2 = "conversationId";
      func_0x0001003a83dc(auStack_438,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_428,auStack_438,pcVar2);
      pcVar2 = "title";
      func_0x0001003a83dc(auStack_440,"title");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_410,auStack_440,pcVar2);
      func_0x0001003a83dc(auStack_448,"participants");
      if ((bRam00000001136b9748 & 1) == 0) goto LAB_105282628;
      goto LAB_105281e38;
    }
  }
  while (func_0x000105282e50(uStack_38), !(bool)in_ZR) {
    ___stack_chk_fail();
LAB_105282628:
    iVar1 = 0x136b9748;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105295dc0();
      func_0x00010b990868(0x1136b97a0);
      ___cxa_guard_release(0x1136b9748);
    }
LAB_105281e38:
    func_0x0001003b1b50(auStack_3f8,auStack_448,0x1136b97a0);
    pcVar2 = "retentionPolicy";
    func_0x0001003a83dc(auStack_450,"retentionPolicy");
    FUN_1052838c8();
    func_0x0001003b1b50(auStack_3e0,auStack_450,pcVar2);
    pcVar2 = "conversationType";
    func_0x0001003a83dc(auStack_458,"conversationType");
    func_0x000104bef548();
    func_0x0001003b1b50(auStack_3c8,auStack_458,pcVar2);
    pcVar2 = "chatNotificationPreference";
    func_0x0001003a83dc(auStack_460,"chatNotificationPreference");
    FUN_105285014();
    func_0x0001003b1b50(auStack_3b0,auStack_460,pcVar2);
    pcVar2 = "gameNotificationPreference";
    func_0x0001003a83dc(auStack_468,"gameNotificationPreference");
    func_0x000104bef6ac();
    func_0x0001003b1b50(auStack_398,auStack_468,pcVar2);
    pcVar2 = "callingNotificationPreference";
    func_0x0001003a83dc(auStack_470,"callingNotificationPreference");
    FUN_105285014();
    func_0x0001003b1b50(auStack_380,auStack_470,pcVar2);
    pcVar2 = "blockedParticipantExceptions";
    func_0x0001003a83dc(auStack_478,"blockedParticipantExceptions");
    func_0x000104bef3dc();
    func_0x0001003b1b50(auStack_368,auStack_478,pcVar2);
    pcVar2 = "nonFriendUserParticipantExceptions";
    func_0x0001003a83dc(auStack_480,"nonFriendUserParticipantExceptions");
    func_0x000104bef3dc();
    func_0x0001003b1b50(auStack_350,auStack_480,pcVar2);
    pcVar2 = "joinedTimestampMs";
    func_0x0001003a83dc(auStack_488,"joinedTimestampMs");
    func_0x000104bef5f8();
    func_0x0001003b1b50(auStack_338,auStack_488,pcVar2);
    pcVar2 = "sourcePage";
    func_0x0001003a83dc(auStack_490,"sourcePage");
    func_0x000104bef5a0();
    func_0x0001003b1b50(auStack_320,auStack_490,pcVar2);
    pcVar2 = "lastSenderUserIds";
    func_0x0001003a83dc(auStack_498,"lastSenderUserIds");
    func_0x000104bef3dc();
    func_0x0001003b1b50(auStack_308,auStack_498,pcVar2);
    pcVar2 = "latestReceivedReactionSeenId";
    func_0x0001003a83dc(auStack_4a0,"latestReceivedReactionSeenId");
    func_0x000104bef5f8();
    func_0x0001003b1b50(auStack_2f0,auStack_4a0,pcVar2);
    pcVar2 = "createdTimestampMs";
    func_0x0001003a83dc(auStack_4a8,"createdTimestampMs");
    func_0x000104bef438();
    func_0x0001003b1b50(auStack_2d8,auStack_4a8,pcVar2);
    pcVar2 = "isFriendLinkPending";
    func_0x0001003a83dc(auStack_4b0,"isFriendLinkPending");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_2c0,auStack_4b0,pcVar2);
    pcVar2 = "pinnedTimestampMs";
    func_0x0001003a83dc(auStack_4b8,"pinnedTimestampMs");
    func_0x000104bef438();
    func_0x0001003b1b50(auStack_2a8,auStack_4b8,pcVar2);
    pcVar2 = "customNotificationSoundId";
    func_0x0001003a83dc(auStack_4c0,"customNotificationSoundId");
    func_0x000104bef438();
    func_0x0001003b1b50(auStack_290,auStack_4c0,pcVar2);
    func_0x0001003a83dc(auStack_4c8,"chatWallpaper");
    if ((bRam00000001136b9750 & 1) == 0) {
      iVar1 = 0x136b9750;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_105280e58();
        func_0x00010b990784(0x1136b97b0);
        ___cxa_guard_release(0x1136b9750);
      }
    }
    func_0x0001003b1b50(auStack_278,auStack_4c8,0x1136b97b0);
    func_0x0001003a83dc(auStack_4d0,"lockedState");
    if ((bRam00000001136b9758 & 1) == 0) {
      iVar1 = 0x136b9758;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x1136b97c0);
        ___cxa_guard_release(0x1136b9758);
      }
    }
    func_0x0001003b1b50(auStack_260,auStack_4d0,0x1136b97c0);
    func_0x0001003a83dc(auStack_4d8,"kickedParticipants");
    if ((bRam00000001136b9760 & 1) == 0) {
      iVar1 = 0x136b9760;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        FUN_10528bdec();
        func_0x00010b990868(0x1136b97d0);
        ___cxa_guard_release(0x1136b9760);
      }
    }
    func_0x0001003b1b50(auStack_248,auStack_4d8,0x1136b97d0);
    pcVar2 = "streakMetadata";
    func_0x0001003a83dc(auStack_4e0,"streakMetadata");
    FUN_105282944();
    func_0x0001003b1b50(auStack_230,auStack_4e0,pcVar2);
    pcVar2 = "conversationSubType";
    func_0x0001003a83dc(auStack_4e8,"conversationSubType");
    FUN_1052829a0();
    func_0x0001003b1b50(auStack_218,auStack_4e8,pcVar2);
    func_0x0001003a83dc(auStack_4f0,"snapPostOpenViewingPolicy");
    if ((bRam00000001136b9768 & 1) == 0) {
      iVar1 = 0x136b9768;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x1136b97e0);
        ___cxa_guard_release(0x1136b9768);
      }
    }
    func_0x0001003b1b50(auStack_200,auStack_4f0,0x1136b97e0);
    pcVar2 = "pendingDecryptionCount";
    func_0x0001003a83dc(auStack_4f8,"pendingDecryptionCount");
    func_0x000104bef438();
    func_0x0001003b1b50(auStack_1e8,auStack_4f8,pcVar2);
    pcVar2 = "initialMutualFriendCount";
    func_0x0001003a83dc(auStack_500,"initialMutualFriendCount");
    func_0x000104bef438();
    func_0x0001003b1b50(auStack_1d0,auStack_500,pcVar2);
    pcVar2 = "streakReminderEnabled";
    func_0x0001003a83dc(auStack_508,"streakReminderEnabled");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_1b8,auStack_508,pcVar2);
    pcVar2 = "categoryType";
    func_0x0001003a83dc(auStack_510,"categoryType");
    func_0x000104bf8944();
    func_0x0001003b1b50(auStack_1a0,auStack_510,pcVar2);
    pcVar2 = "categoryId";
    func_0x0001003a83dc(auStack_518,"categoryId");
    func_0x000104bf117c();
    func_0x0001003b1b50(auStack_188,auStack_518,pcVar2);
    pcVar2 = "isEligibleForInfiniteRetention";
    func_0x0001003a83dc(auStack_520,"isEligibleForInfiniteRetention");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_170,auStack_520,pcVar2);
    pcVar2 = "isEligibleForSevenDayRetention";
    func_0x0001003a83dc(auStack_528,"isEligibleForSevenDayRetention");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_158,auStack_528,pcVar2);
    pcVar2 = "metadataFormat";
    func_0x0001003a83dc(auStack_530,"metadataFormat");
    FUN_105283654();
    func_0x0001003b1b50(auStack_140,auStack_530,pcVar2);
    pcVar2 = "customRingtoneSoundId";
    func_0x0001003a83dc(auStack_538,"customRingtoneSoundId");
    func_0x000104bef438();
    func_0x0001003b1b50(auStack_128,auStack_538,pcVar2);
    func_0x0001003a83dc(auStack_540,"availableRetentionModes");
    if ((bRam00000001136b9770 & 1) == 0) {
      iVar1 = 0x136b9770;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        if ((bRam00000001136b9778 & 1) == 0) {
          iVar1 = 0x136b9778;
          ___cxa_guard_acquire();
          if (iVar1 != 0) {
            if ((bRam00000001136b9780 & 1) == 0) {
              iVar1 = 0x136b9780;
              ___cxa_guard_acquire();
              if (iVar1 != 0) {
                func_0x00010b990e20(0x1136b9810);
                ___cxa_guard_release(0x1136b9780);
              }
            }
            func_0x00010b990868(0x1136b9810);
            ___cxa_guard_release(0x1136b9778);
          }
        }
        func_0x00010b990784(0x1136b9800);
        ___cxa_guard_release(0x1136b9770);
      }
    }
    func_0x0001003b1b50(auStack_110,auStack_540,0x1136b97f0);
    pcVar2 = "conversationSubTypeMetadata";
    func_0x0001003a83dc(auStack_548,"conversationSubTypeMetadata");
    FUN_1052829fc();
    func_0x0001003b1b50(auStack_f8,auStack_548,pcVar2);
    pcVar2 = "conversationInvitationMetadata";
    func_0x0001003a83dc(auStack_550,"conversationInvitationMetadata");
    FUN_105282a58();
    func_0x0001003b1b50(auStack_e0,auStack_550,pcVar2);
    pcVar2 = "backoffTimeMs";
    func_0x0001003a83dc(auStack_558,"backoffTimeMs");
    func_0x000104bef438();
    func_0x0001003b1b50(auStack_c8,auStack_558,pcVar2);
    pcVar2 = "activityData";
    func_0x0001003a83dc(auStack_560,"activityData");
    FUN_105282ab4();
    func_0x0001003b1b50(auStack_b0,auStack_560,pcVar2);
    pcVar2 = "isPreservedForLegalHold";
    func_0x0001003a83dc(auStack_568,"isPreservedForLegalHold");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_98,auStack_568,pcVar2);
    pcVar2 = "canCreatePoll";
    func_0x0001003a83dc(auStack_570,"canCreatePoll");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_80,auStack_570,pcVar2);
    func_0x0001003a83dc(auStack_578,"groupStoryConsentStatus");
    if ((bRam00000001136b9788 & 1) == 0) {
      iVar1 = 0x136b9788;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        func_0x00010b990e20(0x1136b9820);
        ___cxa_guard_release(0x1136b9788);
      }
    }
    func_0x0001003b1b50(auStack_68,auStack_578,0x1136b9820);
    pcVar2 = "groupStoryMayExist";
    func_0x0001003a83dc(auStack_580,"groupStoryMayExist");
    func_0x000104bef4f0();
    func_0x0001003b1b50(auStack_50,auStack_580,pcVar2);
    func_0x000104bdbd44(0x1136b9790,auStack_430,0,auStack_428,0x2a);
    lVar3 = 0x3d8;
    do {
      func_0x0001003b1c5c(auStack_428 + lVar3);
      lVar3 = lVar3 + -0x18;
      in_ZR = lVar3 == -0x18;
    } while (!(bool)in_ZR);
    func_0x0001003a8c94(auStack_580);
    func_0x0001003a8c94(auStack_578);
    func_0x0001003a8c94(auStack_570);
    func_0x0001003a8c94(auStack_568);
    func_0x0001003a8c94(auStack_560);
    func_0x0001003a8c94(auStack_558);
    func_0x0001003a8c94(auStack_550);
    func_0x0001003a8c94(auStack_548);
    func_0x0001003a8c94(auStack_540);
    func_0x0001003a8c94(auStack_538);
    func_0x0001003a8c94(auStack_530);
    func_0x0001003a8c94(auStack_528);
    func_0x0001003a8c94(auStack_520);
    func_0x0001003a8c94(auStack_518);
    func_0x0001003a8c94(auStack_510);
    func_0x0001003a8c94(auStack_508);
    func_0x0001003a8c94(auStack_500);
    func_0x0001003a8c94(auStack_4f8);
    func_0x0001003a8c94(auStack_4f0);
    func_0x0001003a8c94(auStack_4e8);
    func_0x0001003a8c94(auStack_4e0);
    func_0x0001003a8c94(auStack_4d8);
    func_0x0001003a8c94(auStack_4d0);
    func_0x0001003a8c94(auStack_4c8);
    func_0x0001003a8c94(auStack_4c0);
    func_0x0001003a8c94(auStack_4b8);
    func_0x0001003a8c94(auStack_4b0);
    func_0x0001003a8c94(auStack_4a8);
    func_0x0001003a8c94(auStack_4a0);
    func_0x0001003a8c94(auStack_498);
    func_0x0001003a8c94(auStack_490);
    func_0x0001003a8c94(auStack_488);
    func_0x0001003a8c94(auStack_480);
    func_0x0001003a8c94(auStack_478);
    func_0x0001003a8c94(auStack_470);
    func_0x0001003a8c94(auStack_468);
    func_0x0001003a8c94(auStack_460);
    func_0x0001003a8c94(auStack_458);
    func_0x0001003a8c94(auStack_450);
    func_0x0001003a8c94(auStack_448);
    func_0x0001003a8c94(auStack_440);
    func_0x0001003a8c94(auStack_438);
    func_0x0001003a8c94(auStack_430);
    ___cxa_guard_release(0x1136b9740);
  }
  return 0x1136b9790;
}



/* Entry: 105282834; end: 1052828f3;  */

void FUN_105282834(undefined8 param_1,long *param_2)

{
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b9abe10(&lStack_48,(param_2[1] - *param_2) / 0x18);
  func_0x000105282e20();
  for (; unaff_x23 < (ulong)((param_2[1] - *param_2) / 0x18); unaff_x23 = unaff_x23 + 1) {
    FUN_10529dd1c(auStack_58,*param_2 + unaff_x22);
    func_0x00010b9a9020(lStack_48 + unaff_x24,auStack_58);
    func_0x00010b9a8d98(auStack_58);
    unaff_x24 = unaff_x24 + 0x10;
    unaff_x22 = unaff_x22 + 0x18;
  }
  func_0x00010b9a8f84(param_1,&lStack_48);
  func_0x000104bddf38(&lStack_48);
  return;
}



/* Entry: 1052828f4; end: 105282943;  */

undefined4 * FUN_1052828f4(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined8 uStack_208;
  undefined4 *puStack_200;
  undefined4 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1d8 [8];
  undefined4 auStack_1d0 [2];
  undefined4 auStack_1c8 [2];
  undefined2 uStack_1c0;
  undefined8 uStack_1b8;
  undefined2 uStack_1b0;
  undefined1 uStack_1a8;
  undefined2 uStack_1a0;
  undefined1 uStack_198;
  undefined2 uStack_190;
  undefined8 uStack_188;
  undefined2 uStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined4 auStack_80 [2];
  undefined4 auStack_78 [2];
  undefined2 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 0x10) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529c31c();
  func_0x0001003b2110(auStack_88,0x113818be8);
  auStack_78[0] = *param_2;
  uStack_70 = 4;
  uStack_68 = *(undefined8 *)(param_2 + 2);
  uStack_60 = 5;
  FUN_10529c4a8(auStack_58,param_2 + 4);
  auStack_48[0] = *(undefined1 *)(param_2 + 0xe);
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98((long)auStack_78 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_80;
  func_0x000104bdbf78();
  FUN_10529c524(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x40;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_98 = FUN_10529c31c;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_b0 = lVar8;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818bf0 & 1) == 0) {
    puVar4 = (undefined4 *)0x113818bf0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_StreakMetadata");
      pcVar5 = "count";
      func_0x0001003a83dc(auStack_128,"count");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar5);
      pcVar5 = "expirationTimestampMs";
      func_0x0001003a83dc(auStack_130,"expirationTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar5);
      pcVar5 = "expiredStreak";
      func_0x0001003a83dc(auStack_138,"expiredStreak");
      FUN_10529c4c8();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar5);
      pcVar5 = "isFrozen";
      func_0x0001003a83dc(auStack_140,"isFrozen");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818be0,auStack_120,0,auStack_118,4);
      lVar8 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_118 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      puVar4 = (undefined4 *)0x113818bf0;
      ___cxa_guard_release();
    }
  }
  FUN_10529c524(uStack_b8);
  if ((bool)uVar1) {
    return (undefined4 *)0x113818be0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar4 + 8) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_148 = FUN_10529c4a8;
  uStack_178 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_150 = &puStack_a0;
  FUN_105285284();
  func_0x0001003b2110(auStack_1d8,0x1138183e8);
  auStack_1c8[0] = *puVar4;
  uStack_1c0 = 4;
  uStack_1b8 = *(undefined8 *)(puVar4 + 2);
  uStack_1b0 = 5;
  uStack_1a8 = *(undefined1 *)(puVar4 + 4);
  uStack_1a0 = 7;
  uStack_198 = *(undefined1 *)((long)puVar4 + 0x11);
  uStack_190 = 7;
  uStack_188 = *(undefined8 *)(puVar4 + 6);
  uStack_180 = 5;
  func_0x000104bdb9bc(auStack_1d0,auStack_1d8,auStack_1c8,5);
  lVar8 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_1c8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1d8);
  puVar4 = auStack_1d0;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = auStack_1d0;
  func_0x000104bdbf78();
  FUN_105285440(uStack_178);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar8 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_1c8 + lVar8);
    iVar6 = (int)puVar4;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1d8);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_1e8 = FUN_105285284;
  uStack_208 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = auStack_1c8;
  puStack_1f8 = puVar2;
  pppuStack_1f0 = &ppuStack_150;
  if ((bRam00000001138183f0 & 1) == 0) {
    puVar4 = (undefined4 *)0x1138183f0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_288,"_djinni_record_ExpiredStreakMetadata");
      pcVar5 = "streakCount";
      func_0x0001003a83dc(auStack_290,"streakCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_280,auStack_290,pcVar5);
      pcVar5 = "timestampMs";
      func_0x0001003a83dc(auStack_298,"timestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_268,auStack_298,pcVar5);
      pcVar5 = "isRestorable";
      func_0x0001003a83dc(auStack_2a0,"isRestorable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_250,auStack_2a0,pcVar5);
      pcVar5 = "isRestorableExtended";
      func_0x0001003a83dc(auStack_2a8,"isRestorableExtended");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_238,auStack_2a8,pcVar5);
      pcVar5 = "restoreExpirationTimestampMs";
      func_0x0001003a83dc(auStack_2b0,"restoreExpirationTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_220,auStack_2b0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138183e0,auStack_288,0,auStack_280,5);
      lVar8 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_280 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_2b0);
      func_0x0001003a8c94(auStack_2a8);
      func_0x0001003a8c94(auStack_2a0);
      func_0x0001003a8c94(auStack_298);
      func_0x0001003a8c94(auStack_290);
      func_0x0001003a8c94(auStack_288);
      puVar4 = (undefined4 *)0x1138183f0;
      ___cxa_guard_release(0x1138183f0);
    }
  }
  FUN_105285440(uStack_208);
  if ((bool)uVar1) {
    return (undefined4 *)0x1138183e0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105282944; end: 10528299f;  */

undefined8 FUN_105282944(void)

{
  int iVar1;
  
  if ((bRam00000001130cb9a8 & 1) == 0) {
    iVar1 = 0x130cb9a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529c31c();
      func_0x00010b990784(0x1130cb998);
      ___cxa_guard_release(0x1130cb9a8);
    }
  }
  return 0x1130cb998;
}



/* Entry: 1052829a0; end: 1052829fb;  */

undefined8 FUN_1052829a0(void)

{
  int iVar1;
  
  if ((bRam00000001130cb9c0 & 1) == 0) {
    iVar1 = 0x130cb9c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105282d84();
      func_0x00010b990784(0x1130cb9b0);
      ___cxa_guard_release(0x1130cb9c0);
    }
  }
  return 0x1130cb9b0;
}



/* Entry: 1052829fc; end: 105282a57;  */

undefined8 FUN_1052829fc(void)

{
  int iVar1;
  
  if ((bRam00000001130cb9f0 & 1) == 0) {
    iVar1 = 0x130cb9f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105283dbc();
      func_0x00010b990784(0x1130cb9e0);
      ___cxa_guard_release(0x1130cb9f0);
    }
  }
  return 0x1130cb9e0;
}



/* Entry: 105282a58; end: 105282ab3;  */

undefined8 FUN_105282a58(void)

{
  int iVar1;
  
  if ((bRam00000001130cba08 & 1) == 0) {
    iVar1 = 0x130cba08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528327c();
      func_0x00010b990784(0x1130cb9f8);
      ___cxa_guard_release(0x1130cba08);
    }
  }
  return 0x1130cb9f8;
}



/* Entry: 105282ab4; end: 105282b0f;  */

undefined8 FUN_105282ab4(void)

{
  int iVar1;
  
  if ((bRam00000001130cba20 & 1) == 0) {
    iVar1 = 0x130cba20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10527e924();
      func_0x00010b990784(0x1130cba10);
      ___cxa_guard_release(0x1130cba20);
    }
  }
  return 0x1130cba10;
}



/* Entry: 105282b10; end: 105282b27;  */

void FUN_105282b10(long param_1,long param_2)

{
  func_0x0001006b69d4();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 105282b28; end: 105282b67;  */

long * FUN_105282b28(long *param_1,long *param_2)

{
  long extraout_x8;
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b != 0) {
    func_0x000104be0a80();
    func_0x0001006b5b98();
    plVar1 = param_1 + 2;
    FUN_105282bec(plVar1,*param_1,param_1[1],extraout_x8 + ((param_1[1] - *param_1) / -0x18) * 0x18)
    ;
    func_0x0001006b5ce8();
    return plVar1;
  }
  plVar1 = (long *)(param_1[2] - *param_1 >> 4);
  if (plVar1 <= param_2) {
    plVar1 = param_2;
  }
  if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
    plVar1 = (long *)0x7ffffffffffffff;
  }
  return plVar1;
}



/* Entry: 105282b68; end: 105282ba7;  */

void FUN_105282b68(long *param_1)

{
  long extraout_x8;
  
  func_0x0001006b5b98();
  FUN_105282bec(param_1 + 2,*param_1,param_1[1],
                extraout_x8 + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x0001006b5ce8();
  return;
}



/* Entry: 105282ba8; end: 105282beb;  */

void FUN_105282ba8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x0001006b5af8();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000104be0f14();
  }
  lVar1 = param_4 + unaff_x20 * 0x18;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x18;
  return;
}



/* Entry: 105282bec; end: 105282c7b;  */

void FUN_105282bec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    puStack_28[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_105282c7c();
  func_0x000104be0fb4(&uStack_50);
  return;
}



/* Entry: 105282c7c; end: 105282cd7;  */

void FUN_105282c7c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105282cd8; end: 105282cdf;  */

void FUN_105282cd8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105282ce0; end: 105282d17;  */

void FUN_105282ce0(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x18;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105282d18; end: 105282d83;  */

long * FUN_105282d18(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000104be0f08();
    func_0x00010066df28();
    *(undefined1 *)(param_1 + 0x1b) = 1;
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 105282d84; end: 105282ddb;  */

undefined8 FUN_105282d84(void)

{
  int iVar1;
  
  if ((bRam00000001130cb9d8 & 1) == 0) {
    iVar1 = 0x130cb9d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cb9c8);
      ___cxa_guard_release(0x1130cb9d8);
    }
  }
  return 0x1130cb9c8;
}


