/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10877d694; end: 10877d6bf;  */

undefined8 * FUN_10877d694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e418;
  func_0x000108731500(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877d6c0; end: 10877d6c3;  */

void FUN_10877d6c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e458;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877d6c4; end: 10877d6d7;  */

void FUN_10877d6c4(void)

{
  func_0x00010877d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877d6d8; end: 10877d6eb;  */

void FUN_10877d6d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877d6ec; end: 10877d74f;  */

void FUN_10877d6ec(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877d750; end: 10877d7d7;  */

void FUN_10877d750(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  
  func_0x00010084ff68();
  FUN_1087309b8();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  do {
    uStack_28 = 0;
    lVar1 = lVar2 + 0x10;
    func_0x00010877df04(lVar1,&uStack_28);
    if ((int)lVar1 != 0) {
      if (*(char *)(lVar2 + 200) == '\x01') {
        FUN_1089251a0(lVar2 + 0x98);
        *(undefined1 *)(lVar2 + 200) = 0;
      }
      FUN_1087309b8(lVar2 + 0x98,auStack_58);
      *(undefined1 *)(lVar2 + 200) = 1;
      func_0x00010877de50();
      break;
    }
  } while (((uint)uStack_28 >> 1 & 1) == 0);
  FUN_1089251a0(auStack_58);
  return;
}



/* Entry: 10877d7d8; end: 10877d7ef;  */

void FUN_10877d7d8(void)

{
  func_0x00010877e2b8();
  return;
}



/* Entry: 10877d7f0; end: 10877d7f3;  */

undefined8 * FUN_10877d7f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e550;
  if (*(char *)(param_1 + 0x19) == '\x01') {
    FUN_1089251a0(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877d7f4; end: 10877d807;  */

void FUN_10877d7f4(void)

{
  FUN_10877d808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877d808; end: 10877d85f;  */

undefined8 * FUN_10877d808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e550;
  if (*(char *)(param_1 + 0x19) == '\x01') {
    FUN_1089251a0(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877d860; end: 10877da37;  */

void FUN_10877d860(long *param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  int extraout_w9;
  int extraout_w9_00;
  long lVar5;
  long lVar6;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  lVar6 = *(long *)(param_2 + 0x10);
  lStack_a0 = *param_1;
  *param_1 = 0;
  lVar5 = *(long *)(lVar6 + 0x28);
  func_0x00010877df90();
  func_0x00010877df54();
  lStack_98 = CONCAT44(lStack_98._4_4_,0x15);
  func_0x00010877e354();
  func_0x00010877dfd0(uStack_70);
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_98 = extraout_x8 + 0x10;
  lStack_90 = 0;
  uStack_78 = 0x143;
  func_0x000107c28b10();
  func_0x00010877e04c();
  func_0x000107c29838(auStack_68,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
  lVar3 = 0xb0;
  __Znwm();
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  func_0x00010877e568(&PTR_FUN_110a6e590);
  FUN_108765224(&lStack_98,&lStack_a0);
  lVar5 = lVar3 + 0x18;
  FUN_10876c870(lVar5,auStack_68,auStack_48,&lStack_98,lVar6);
  plVar4 = &lStack_98;
  func_0x00010876515c();
  func_0x00010877e304();
  lVar6 = lVar5;
  lVar1 = lVar3;
  lStack_58 = lVar5;
  lStack_50 = lVar3;
  if ((*(long *)(lVar3 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      lStack_90 = lVar1;
      lStack_98 = lVar6;
      func_0x00010877df9c();
      lVar6 = lStack_98;
      lVar1 = lStack_90;
    } while (extraout_w9 != 0);
    plVar4 = (long *)(lVar3 + 0x20);
    func_0x000107c29834(plVar4,lVar5,lVar3);
    func_0x00010877e0dc();
  }
  func_0x00010877e314();
  lStack_98 = lVar5;
  lStack_90 = lVar3;
  do {
    func_0x00010877df9c();
    iVar2 = (int)plVar4;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x00010877e0dc();
  if (iVar2 != 0) {
    func_0x00010877e470();
  }
  FUN_10877da64(&lStack_58);
  func_0x000107c33374();
  lVar5 = lStack_a0;
  lStack_a0 = 0;
  if (lVar5 != 0) {
    func_0x00010877de90();
  }
  return;
}



/* Entry: 10877da38; end: 10877da3b;  */

void FUN_10877da38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e590;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877da3c; end: 10877da4f;  */

void FUN_10877da3c(void)

{
  func_0x00010877da58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877da50; end: 10877da63;  */

void FUN_10877da50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877da64; end: 10877da87;  */

void FUN_10877da64(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877da88; end: 10877daa7;  */

void FUN_10877da88(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10877b728();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10877daa8; end: 10877daab;  */

void FUN_10877daa8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10877daac; end: 10877daeb;  */

void FUN_10877daac(void)

{
  func_0x00010877e038();
  func_0x00010877dbe4();
  return;
}



/* Entry: 10877daec; end: 10877db77;  */

void FUN_10877daec(void)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x00010084ff68();
  FUN_1086cac10();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  do {
    uStack_28 = 0;
    lVar1 = lVar2 + 0x10;
    func_0x00010877df04(lVar1,&uStack_28);
    if ((int)lVar1 != 0) {
      if (*(char *)(lVar2 + 0xb8) == '\x01') {
        FUN_108927338(lVar2 + 0x98);
        *(undefined1 *)(lVar2 + 0xb8) = 0;
      }
      FUN_1086cac10(lVar2 + 0x98,auStack_48);
      *(undefined1 *)(lVar2 + 0xb8) = 1;
      func_0x00010877de50();
      break;
    }
  } while (((uint)uStack_28 >> 1 & 1) == 0);
  FUN_108927338(auStack_48);
  return;
}



/* Entry: 10877db78; end: 10877db8f;  */

void FUN_10877db78(void)

{
  func_0x00010877e2b8();
  return;
}



/* Entry: 10877db90; end: 10877db93;  */

undefined8 * FUN_10877db90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e6a0;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    FUN_108927338(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877db94; end: 10877dba7;  */

void FUN_10877db94(void)

{
  FUN_10877dba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877dba8; end: 10877dbff;  */

undefined8 * FUN_10877dba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e6a0;
  if (*(char *)(param_1 + 0x17) == '\x01') {
    FUN_108927338(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877dc00; end: 10877dddb;  */

void FUN_10877dc00(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  int extraout_w9;
  int extraout_w9_00;
  undefined8 uVar7;
  long unaff_x24;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  lStack_a0 = *param_1;
  *param_1 = 0;
  func_0x00010877df90();
  func_0x00010877df54();
  lStack_98 = CONCAT44(lStack_98._4_4_,0x16);
  func_0x00010877e354();
  func_0x00010877dfd0(uStack_70);
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_98 = extraout_x8 + 0x10;
  lStack_90 = 0;
  uStack_78 = 0x14d;
  func_0x000107c28b10();
  func_0x00010877e04c();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e4d8();
  func_0x000107c29838(auStack_68);
  lVar5 = 0xf0;
  __Znwm();
  *(undefined8 *)(lVar5 + 8) = 0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  func_0x00010877e568(&PTR_FUN_110a6e6e0);
  FUN_108764dbc(&lStack_98,&lStack_a0);
  lVar1 = lVar5 + 0x18;
  FUN_108770ce0(lVar1,auStack_68,auStack_48,uVar7,unaff_x24 + 0x270,&lStack_98);
  plVar6 = &lStack_98;
  func_0x000108764cf4();
  func_0x00010877e304();
  lVar2 = lVar1;
  lVar3 = lVar5;
  lStack_58 = lVar1;
  lStack_50 = lVar5;
  if ((*(long *)(lVar5 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      lStack_90 = lVar3;
      lStack_98 = lVar2;
      func_0x00010877df9c();
      lVar2 = lStack_98;
      lVar3 = lStack_90;
    } while (extraout_w9 != 0);
    plVar6 = (long *)(lVar5 + 0x20);
    func_0x000107c29834(plVar6,lVar1,lVar5);
    func_0x00010877e0dc();
  }
  func_0x00010877e314();
  lStack_98 = lVar1;
  lStack_90 = lVar5;
  do {
    func_0x00010877df9c();
    iVar4 = (int)plVar6;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x00010877e0dc();
  if (iVar4 != 0) {
    func_0x00010877e470();
  }
  FUN_10877de08(&lStack_58);
  func_0x000107c33374();
  lVar1 = lStack_a0;
  lStack_a0 = 0;
  if (lVar1 != 0) {
    func_0x00010877de90();
  }
  return;
}



/* Entry: 10877dddc; end: 10877dddf;  */

void FUN_10877dddc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e6e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877dde0; end: 10877ddf3;  */

void FUN_10877dde0(void)

{
  func_0x00010877ddfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877ddf4; end: 10877de07;  */

void FUN_10877ddf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877de08; end: 10877de2b;  */

void FUN_10877de08(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877de2c; end: 10877de4b;  */

void FUN_10877de2c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10877b93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10877de4c; end: 10877e5c3;  */

void FUN_10877de4c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10877e5c4; end: 10877e773;  */

long * FUN_10877e5c4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 *param_6,long *param_7,long *param_8,
                    undefined8 param_9)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  long *plVar12;
  long *plVar13;
  undefined ***pppuVar14;
  undefined1 uVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar16;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long alStack_468 [2];
  undefined8 *puStack_458;
  undefined8 *puStack_440;
  long *plStack_438;
  undefined8 *puStack_430;
  long *plStack_428;
  undefined1 **ppuStack_420;
  code *pcStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  long lStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  long *plStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined4 uStack_398;
  long lStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  code *pcStack_360;
  undefined **ppuStack_358;
  long lStack_350;
  long alStack_348 [55];
  char cStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  undefined4 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  long *plStack_138;
  undefined8 uStack_118;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  long *plStack_80;
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  
  plVar8 = param_1;
  func_0x00010877fea0();
  *plVar8 = (long)&PTR_FUN_110a6e748;
  uStack_68 = extraout_x8;
  func_0x000107c278b8(auStack_a0,&UNK_10f4ba47c);
  ppuStack_88 = &PTR_FUN_110a6e920;
  pppuStack_70 = &ppuStack_88;
  uStack_a8 = *param_6;
  *param_6 = 0;
  plStack_80 = param_1;
  FUN_10875e9fc(param_1,auStack_a0,param_2,param_3,&ppuStack_88,param_9,&uStack_a8,0xe);
  func_0x000107c29578(&uStack_a8);
  func_0x00010865f8f8(&ppuStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  *param_1 = (long)&PTR_FUN_110a6e748;
  func_0x000108656b70(param_1 + 0x16,param_4);
  func_0x000107c291e8(param_1 + 0x1c,param_5);
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x60] = (long)(param_1 + 0x61);
  param_1[99] = *param_7;
  plVar8 = param_1 + 100;
  (**(code **)(param_7[1] + 0x10))(plVar8,param_7 + 1);
  lVar18 = *param_8;
  param_1[0x6a] = param_8[1];
  param_1[0x69] = lVar18;
  *param_8 = 0;
  param_8[1] = 0;
  func_0x00010877fe2c(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107c27914(param_1 + 0x16);
  FUN_10875b664(param_1);
  __Unwind_Resume();
  pcStack_b8 = FUN_10877e774;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010877fea0();
  uStack_118 = extraout_x8_00;
  func_0x000107c297b4(&lStack_3e0,plVar8 + 1);
  plStack_3d0 = plVar8;
  func_0x000107c297b4(&puStack_400,plVar8 + 1);
  puStack_3b8 = (undefined8 *)lStack_3f8;
  puStack_3c0 = puStack_400;
  puStack_400 = (undefined8 *)0x0;
  lStack_3f8 = 0;
  plStack_3f0 = plVar8;
  plStack_3b0 = plVar8;
  func_0x00010877fdec(&pcStack_360);
  lStack_3a0 = *(long *)(pcStack_360 + 600);
  lStack_3a8 = *(long *)(pcStack_360 + 0x250);
  if (*(long *)(pcStack_360 + 600) != 0) {
    do {
      func_0x00010877fe08();
    } while (extraout_w10 != 0);
  }
  uStack_398 = *(undefined4 *)(plVar8[0xb] + 0xfc);
  func_0x00010877fedc();
  pcStack_148 = FUN_10877f9ec;
  ppuStack_140 = &PTR_FUN_110a6e8f8;
  plVar9 = (long *)0x30;
  __Znwm();
  plVar9[1] = (long)puStack_3b8;
  *plVar9 = (long)puStack_3c0;
  if (puStack_3b8 != (undefined8 *)0x0) {
    do {
      func_0x00010877fe08();
    } while (extraout_w10_00 != 0);
  }
  plVar9[3] = lStack_3a8;
  plVar9[2] = (long)plStack_3b0;
  plVar9[4] = lStack_3a0;
  if (lStack_3a0 != 0) {
    do {
      func_0x00010877fe08();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(plVar9 + 5) = uStack_398;
  lVar18 = plVar8[1];
  lVar1 = plVar8[2];
  lStack_370 = lVar18;
  lStack_368 = lVar1;
  plStack_138 = plVar9;
  if (lVar1 == 0) {
    lVar19 = plVar8[0xb];
  }
  else {
    do {
      func_0x00010877fe08();
    } while (extraout_w10_02 != 0);
    lVar19 = plVar8[0xb];
    do {
      func_0x00010877fe08();
    } while (extraout_w10_03 != 0);
  }
  puVar10 = (undefined8 *)0xb8;
  lStack_390 = lVar18;
  lStack_388 = lVar1;
  __Znwm();
  uVar6 = uStack_3d8;
  lVar5 = lStack_3e0;
  plVar9 = puVar10 + 1;
  *plVar9 = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_110a6e7b8;
  pcStack_360 = FUN_10877edfc;
  ppuStack_358 = &PTR_FUN_110a6e7f8;
  lStack_390 = 0;
  lStack_388 = 0;
  puVar16 = puVar10 + 3;
  *puVar16 = &PTR_FUN_110a6e8c0;
  ppuStack_188 = (undefined **)FUN_10877ee80;
  ppuStack_180 = &PTR_FUN_110a6e810;
  lStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_170 = 0;
  plStack_168 = plStack_3d0;
  puVar10[4] = FUN_10877ee80;
  puVar10[5] = &PTR_FUN_110a6e810;
  puVar10[7] = uVar6;
  puVar10[6] = lVar5;
  uStack_178 = 0;
  puVar10[8] = plStack_3d0;
  puVar10[10] = FUN_10877f9ec;
  lStack_350 = lVar18;
  alStack_348[0] = lVar1;
  (*(code *)ppuStack_140[2])(puVar10 + 0xb,&ppuStack_140);
  *puVar16 = &PTR_DAT_110a6e838;
  puVar10[0x10] = pcStack_360;
  (*(code *)ppuStack_358[2])(puVar10 + 0x11,&ppuStack_358);
  puVar10[0x16] = lVar19;
  (*(code *)*ppuStack_180)(&ppuStack_180);
  (*(code *)*ppuStack_358)(&ppuStack_358);
  func_0x000107c297a8(&lStack_390);
  uStack_380 = 0;
  uStack_378 = 0;
  puStack_410 = puVar16;
  puStack_408 = puVar10;
  FUN_10877fd30(&uStack_380);
  func_0x000107c297a8(&lStack_370);
  func_0x00010877fe70();
  FUN_10877edac(&puStack_3c0);
  ppuStack_188 = &PTR_FUN_110a94300;
  ppuStack_180 = (undefined **)0x0;
  ppuStack_158 = (undefined **)0x0;
  uStack_150 = 0;
  uStack_170 = 0;
  plStack_168 = (long *)0x0;
  uStack_178 = 0;
  uStack_160 = 0;
  func_0x000107c29ee4(&pcStack_360,plVar8 + 0x16);
  uStack_178 = uStack_178 | 1;
  if (ppuStack_158 == (undefined **)0x0) {
    ppuVar11 = ppuStack_180;
    if (((ulong)ppuStack_180 & 1) != 0) {
      ppuVar11 = *(undefined ***)((ulong)ppuStack_180 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    ppuStack_158 = ppuVar11;
  }
  func_0x000107c287d0();
  func_0x000107c2a2e0(&pcStack_360);
  puVar2 = (undefined8 *)plVar8[0x1d];
  for (puVar17 = (undefined8 *)plVar8[0x1c]; puVar17 != puVar2; puVar17 = puVar17 + 1) {
    FUN_108767594(&uStack_170,*puVar17);
  }
  func_0x00010877fdec(&puStack_3c0);
  func_0x00010877fec8(&pcStack_360,puStack_3c0[0xc]);
  func_0x000107c297b0(&puStack_3c0);
  uVar7 = cStack_190 == '\x01';
  if ((bool)uVar7) {
    lVar18 = plVar8[0xb];
    func_0x000107c278b8(&puStack_3c0,&DAT_10f4b36ec);
    plVar12 = alStack_348;
    func_0x000107c29e74();
    func_0x000107c278b8(&pcStack_148,(&PTR_DAT_110a6e9a0)[(ulong)plVar12 & 0xffffffff]);
    func_0x000107c28b34(lVar18,&puStack_3c0,&pcStack_148);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_148);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3c0);
  }
  func_0x000107c288c8(&pcStack_360);
  func_0x00010877fdec(&pcStack_360);
  plVar12 = *(long **)(pcStack_360 + 0x50);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = *plVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pppuVar14 = &ppuStack_188;
  uVar15 = SUB81(&puStack_3c0,0);
  puStack_3c0 = puVar16;
  puStack_3b8 = puVar10;
  (**(code **)(*plVar12 + 0x78))();
  func_0x00010877fd58(&puStack_3c0);
  func_0x00010877fedc();
  FUN_108916110(&ppuStack_188);
  FUN_10877fd30(&puStack_410);
  func_0x000107c297a4(&puStack_400);
  plVar9 = &lStack_3e0;
  func_0x000107c297a4();
  func_0x00010877fe2c(uStack_118);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    func_0x000107c2a2e0(&pcStack_360);
    FUN_108916110(&ppuStack_188);
    FUN_10877fd30(&puStack_410);
    func_0x000107c297a4(&puStack_400);
    func_0x000107c297a4(&lStack_3e0);
    plVar12 = plVar9;
    __Unwind_Resume();
    pcStack_418 = FUN_10877ec4c;
    puVar16 = (undefined8 *)plVar12[1];
    if (puVar16 < (undefined8 *)plVar12[2]) {
      *puVar16 = pppuVar14;
      *(undefined1 *)(puVar16 + 1) = uVar15;
      puVar16 = puVar16 + 2;
      plVar8 = plVar12;
    }
    else {
      plVar13 = plVar12;
      puStack_440 = puVar2;
      plStack_438 = plVar9;
      puStack_430 = puVar10;
      plStack_428 = plVar8;
      ppuStack_420 = &puStack_c0;
      FUN_1086e1d98(plVar12,((long)puVar16 - *plVar12 >> 4) + 1);
      FUN_1086e1c64(alStack_468,plVar13,plVar12[1] - *plVar12 >> 4,plVar12 + 2);
      *puStack_458 = pppuVar14;
      *(undefined1 *)(puStack_458 + 1) = uVar15;
      puStack_458 = puStack_458 + 2;
      FUN_1086e1bec(plVar12,alStack_468);
      puVar16 = (undefined8 *)plVar12[1];
      plVar8 = alStack_468;
      func_0x0001086e1cac(plVar8);
    }
    plVar12[1] = (long)puVar16;
    return plVar8;
  }
  return plVar9;
}



/* Entry: 10877e774; end: 10877ec4b;  */

void FUN_10877e774(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long *plVar11;
  long *plVar12;
  undefined ***pppuVar13;
  undefined1 uVar14;
  undefined8 extraout_x8;
  undefined8 *puVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_3b8 [16];
  undefined8 *puStack_3a8;
  undefined8 *puStack_390;
  long *plStack_388;
  undefined8 *puStack_380;
  long lStack_378;
  undefined1 *puStack_370;
  code *pcStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  code *pcStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  long alStack_298 [55];
  char cStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined8 uStack_68;
  
  func_0x00010877fea0();
  uStack_68 = extraout_x8;
  func_0x000107c297b4(&lStack_330,param_1 + 8);
  lStack_320 = param_1;
  func_0x000107c297b4(&puStack_350,param_1 + 8);
  puStack_308 = (undefined8 *)lStack_348;
  puStack_310 = puStack_350;
  puStack_350 = (undefined8 *)0x0;
  lStack_348 = 0;
  lStack_340 = param_1;
  lStack_300 = param_1;
  func_0x00010877fdec(&pcStack_2b0);
  lStack_2f0 = *(long *)(pcStack_2b0 + 600);
  lStack_2f8 = *(long *)(pcStack_2b0 + 0x250);
  if (*(long *)(pcStack_2b0 + 600) != 0) {
    do {
      func_0x00010877fe08();
    } while (extraout_w10 != 0);
  }
  uStack_2e8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x00010877fedc();
  pcStack_98 = FUN_10877f9ec;
  ppuStack_90 = &PTR_FUN_110a6e8f8;
  plVar8 = (long *)0x30;
  __Znwm();
  plVar8[1] = (long)puStack_308;
  *plVar8 = (long)puStack_310;
  if (puStack_308 != (undefined8 *)0x0) {
    do {
      func_0x00010877fe08();
    } while (extraout_w10_00 != 0);
  }
  plVar8[3] = lStack_2f8;
  plVar8[2] = lStack_300;
  plVar8[4] = lStack_2f0;
  if (lStack_2f0 != 0) {
    do {
      func_0x00010877fe08();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(plVar8 + 5) = uStack_2e8;
  uVar17 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_2c0 = uVar17;
  lStack_2b8 = lVar1;
  plStack_88 = plVar8;
  if (lVar1 == 0) {
    uVar18 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      func_0x00010877fe08();
    } while (extraout_w10_02 != 0);
    uVar18 = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x00010877fe08();
    } while (extraout_w10_03 != 0);
  }
  puVar9 = (undefined8 *)0xb8;
  uStack_2e0 = uVar17;
  lStack_2d8 = lVar1;
  __Znwm();
  uVar6 = uStack_328;
  lVar5 = lStack_330;
  plVar8 = puVar9 + 1;
  *plVar8 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110a6e7b8;
  pcStack_2b0 = FUN_10877edfc;
  ppuStack_2a8 = &PTR_FUN_110a6e7f8;
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  puVar15 = puVar9 + 3;
  *puVar15 = &PTR_FUN_110a6e8c0;
  ppuStack_d8 = (undefined **)FUN_10877ee80;
  ppuStack_d0 = &PTR_FUN_110a6e810;
  lStack_330 = 0;
  uStack_328 = 0;
  uStack_c0 = 0;
  lStack_b8 = lStack_320;
  puVar9[4] = FUN_10877ee80;
  puVar9[5] = &PTR_FUN_110a6e810;
  puVar9[7] = uVar6;
  puVar9[6] = lVar5;
  uStack_c8 = 0;
  puVar9[8] = lStack_320;
  puVar9[10] = FUN_10877f9ec;
  uStack_2a0 = uVar17;
  alStack_298[0] = lVar1;
  (*(code *)ppuStack_90[2])(puVar9 + 0xb,&ppuStack_90);
  *puVar15 = &PTR_DAT_110a6e838;
  puVar9[0x10] = pcStack_2b0;
  (*(code *)ppuStack_2a8[2])(puVar9 + 0x11,&ppuStack_2a8);
  puVar9[0x16] = uVar18;
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  (*(code *)*ppuStack_2a8)(&ppuStack_2a8);
  func_0x000107c297a8(&uStack_2e0);
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  puStack_360 = puVar15;
  puStack_358 = puVar9;
  FUN_10877fd30(&uStack_2d0);
  func_0x000107c297a8(&uStack_2c0);
  func_0x00010877fe70();
  FUN_10877edac(&puStack_310);
  ppuStack_d8 = &PTR_FUN_110a94300;
  ppuStack_d0 = (undefined **)0x0;
  ppuStack_a8 = (undefined **)0x0;
  uStack_a0 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  func_0x000107c29ee4(&pcStack_2b0,param_1 + 0xb0);
  uStack_c8 = uStack_c8 | 1;
  if (ppuStack_a8 == (undefined **)0x0) {
    ppuVar10 = ppuStack_d0;
    if (((ulong)ppuStack_d0 & 1) != 0) {
      ppuVar10 = *(undefined ***)((ulong)ppuStack_d0 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    ppuStack_a8 = ppuVar10;
  }
  func_0x000107c287d0();
  func_0x000107c2a2e0(&pcStack_2b0);
  puVar2 = *(undefined8 **)(param_1 + 0xe8);
  for (puVar16 = *(undefined8 **)(param_1 + 0xe0); puVar16 != puVar2; puVar16 = puVar16 + 1) {
    FUN_108767594(&uStack_c0,*puVar16);
  }
  func_0x00010877fdec(&puStack_310);
  func_0x00010877fec8(&pcStack_2b0,puStack_310[0xc]);
  func_0x000107c297b0(&puStack_310);
  uVar7 = cStack_e0 == '\x01';
  if ((bool)uVar7) {
    uVar17 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c278b8(&puStack_310,&DAT_10f4b36ec);
    plVar11 = alStack_298;
    func_0x000107c29e74();
    func_0x000107c278b8(&pcStack_98,(&PTR_DAT_110a6e9a0)[(ulong)plVar11 & 0xffffffff]);
    func_0x000107c28b34(uVar17,&puStack_310,&pcStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_310);
  }
  func_0x000107c288c8(&pcStack_2b0);
  func_0x00010877fdec(&pcStack_2b0);
  plVar11 = *(long **)(pcStack_2b0 + 0x50);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pppuVar13 = &ppuStack_d8;
  uVar14 = SUB81(&puStack_310,0);
  puStack_310 = puVar15;
  puStack_308 = puVar9;
  (**(code **)(*plVar11 + 0x78))();
  func_0x00010877fd58(&puStack_310);
  func_0x00010877fedc();
  FUN_108916110(&ppuStack_d8);
  FUN_10877fd30(&puStack_360);
  func_0x000107c297a4(&puStack_350);
  plVar8 = &lStack_330;
  func_0x000107c297a4();
  func_0x00010877fe2c(uStack_68);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    func_0x000107c2a2e0(&pcStack_2b0);
    FUN_108916110(&ppuStack_d8);
    FUN_10877fd30(&puStack_360);
    func_0x000107c297a4(&puStack_350);
    func_0x000107c297a4(&lStack_330);
    plVar11 = plVar8;
    __Unwind_Resume();
    pcStack_368 = FUN_10877ec4c;
    puVar15 = (undefined8 *)plVar11[1];
    if (puVar15 < (undefined8 *)plVar11[2]) {
      *puVar15 = pppuVar13;
      *(undefined1 *)(puVar15 + 1) = uVar14;
      puVar15 = puVar15 + 2;
    }
    else {
      plVar12 = plVar11;
      puStack_390 = puVar2;
      plStack_388 = plVar8;
      puStack_380 = puVar9;
      lStack_378 = param_1;
      puStack_370 = &stack0xfffffffffffffff0;
      FUN_1086e1d98(plVar11,((long)puVar15 - *plVar11 >> 4) + 1);
      FUN_1086e1c64(auStack_3b8,plVar12,plVar11[1] - *plVar11 >> 4,plVar11 + 2);
      *puStack_3a8 = pppuVar13;
      *(undefined1 *)(puStack_3a8 + 1) = uVar14;
      puStack_3a8 = puStack_3a8 + 2;
      FUN_1086e1bec(plVar11,auStack_3b8);
      puVar15 = (undefined8 *)plVar11[1];
      func_0x0001086e1cac(auStack_3b8);
    }
    plVar11[1] = (long)puVar15;
    return;
  }
  return;
}



/* Entry: 10877ec4c; end: 10877ed17;  */

void FUN_10877ec4c(long *param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    *puVar2 = param_2;
    *(undefined1 *)(puVar2 + 1) = param_3;
    puVar2 = puVar2 + 2;
  }
  else {
    plVar1 = param_1;
    FUN_1086e1d98(param_1,((long)puVar2 - *param_1 >> 4) + 1);
    FUN_1086e1c64(auStack_58,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
    *puStack_48 = param_2;
    *(undefined1 *)(puStack_48 + 1) = param_3;
    puStack_48 = puStack_48 + 2;
    FUN_1086e1bec(param_1,auStack_58);
    puVar2 = (undefined8 *)param_1[1];
    func_0x0001086e1cac(auStack_58);
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10877ed18; end: 10877ed1b;  */

undefined8 * FUN_10877ed18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e748;
  func_0x000107c288e4(param_1 + 0x69);
  (**(code **)param_1[100])(param_1 + 100);
  FUN_10874843c(param_1 + 0x60);
  func_0x000107c288c8(param_1 + 0x25);
  func_0x0001086d6ca4(param_1 + 0x22);
  func_0x00010867b9fc(param_1 + 0x1f);
  func_0x000107c27ae4(param_1 + 0x1c);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10877ed1c; end: 10877ed2f;  */

void FUN_10877ed1c(void)

{
  func_0x00010877faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877ed30; end: 10877edab;  */

undefined1 * FUN_10877ed30(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  puVar2 = auStack_40;
  func_0x00010877fea0();
  uStack_28 = extraout_x8;
  func_0x000107c27994(auStack_40,extraout_x9 + 0xb0);
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x000107c27914();
  func_0x00010877fe2c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107c27914();
  func_0x00010877fe18();
  func_0x000107c297ac(puVar2 + 0x18);
  func_0x000100562400();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return puVar1;
}



/* Entry: 10877edac; end: 10877edd3;  */

undefined8 FUN_10877edac(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10877edd4; end: 10877edd7;  */

void FUN_10877edd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e7b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877edd8; end: 10877edeb;  */

void FUN_10877edd8(void)

{
  FUN_10877f9dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877edec; end: 10877edfb;  */

void FUN_10877edec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010877edf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877edfc; end: 10877ee5b;  */

long FUN_10877edfc(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 10877ee5c; end: 10877ee7f;  */

void FUN_10877ee5c(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10877ee80; end: 10877f7cb;  */

void FUN_10877ee80(long param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  byte bVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong *puStack_6c0;
  long *plStack_6a8;
  undefined8 uStack_6a0;
  undefined8 *puStack_698;
  ulong *puStack_688;
  byte bStack_4f8;
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [64];
  undefined1 auStack_478 [464];
  undefined1 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_280 [2];
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong *puStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined1 uStack_230;
  undefined1 uStack_228;
  undefined1 auStack_220 [120];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_15c;
  undefined1 uStack_158;
  undefined1 uStack_150;
  undefined1 uStack_148;
  undefined1 uStack_144;
  undefined1 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_12c;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_f8;
  undefined1 uStack_f4;
  undefined1 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [4];
  undefined1 uStack_ac;
  undefined1 auStack_a8 [5];
  undefined2 uStack_a3;
  undefined1 uStack_a1;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  ulong *puStack_80;
  undefined1 uStack_78;
  
  lVar13 = *(long *)(param_2 + 0x20);
  auStack_478[0] = 0;
  uStack_2a8 = 0;
  FUN_10867d03c(lVar13 + 0xf8,*(long *)(lVar13 + 0xe8) - *(long *)(lVar13 + 0xe0) >> 3);
  FUN_1086e162c(lVar13 + 0x110,*(long *)(lVar13 + 0xe8) - *(long *)(lVar13 + 0xe0) >> 3);
  func_0x00010877fde0();
  plVar10 = plStack_6a8;
  func_0x00010877fe00();
  uVar14 = *(undefined8 *)(plVar10[0xc] + 0x18);
  func_0x000107c278b8(auStack_4d0,&UNK_10f4ba47c);
  func_0x000107c31420(auStack_4b8,uVar14,auStack_4d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d0);
  func_0x00010877fec8(&plStack_6a8,plVar10[0xc]);
  uVar1 = lVar13 + 0x128;
  func_0x000107c290ac(uVar1,&plStack_6a8);
  func_0x000107c288c8(&plStack_6a8);
  if ((*(char *)(lVar13 + 0x2f8) == '\x01') && ((*(byte *)(lVar13 + 0x298) & 1) == 0)) {
    if (*(int *)(param_1 + 0x18) ==
        (int)((ulong)(*(long *)(lVar13 + 0xe8) - *(long *)(lVar13 + 0xe0)) >> 3)) {
      uVar12 = *(ulong *)(param_1 + 0x10);
      puVar2 = (ulong *)(param_1 + 0x10);
      if ((uVar12 & 1) != 0) {
        puVar2 = (ulong *)(uVar12 + 7);
      }
      for (lVar16 = (long)*(int *)(param_1 + 0x18) << 3; lVar16 != 0; lVar16 = lVar16 + -8) {
        uVar12 = *puVar2;
        uVar4 = *(int *)(uVar12 + 0x24) == 2;
        if ((bool)uVar4) {
          lVar17 = *(long *)(uVar12 + 0x18);
          func_0x00010877fde0();
          FUN_1086a2c40(lVar17,plStack_6a8 + 0x1e);
          func_0x00010877fe00();
          func_0x00010877fe90();
          lVar8 = extraout_x9 + 0xe08;
          if (!(bool)uVar4) {
            lVar8 = extraout_x8;
          }
          if ((*(byte *)(lVar8 + 0x140) & 1) == 0) {
            if ((*(byte *)(lVar17 + 0x10) & 1) == 0) {
              func_0x00010877fde0();
              lVar5 = plStack_6a8[0x30];
              func_0x000107c287d8(lVar5);
              lVar8 = lVar17;
              FUN_1088425e4(lVar17,lVar5);
              func_0x00010877fe00();
              func_0x00010877fde0();
              FUN_108842468(lVar17,plStack_6a8[0x1e],(uint)lVar8 ^ 1 | 0x100);
              func_0x00010877fe00();
            }
            else {
              uVar6 = 0;
              if (*(ulong *)(lVar17 + 0x28) != 0) {
                uVar6 = *(ulong *)(lVar17 + 0x28);
              }
              func_0x000107c29dec();
              if ((uVar6 & 1) == 0) {
                func_0x00010877fde0();
                plVar10 = plStack_6a8;
                func_0x00010877fe00();
                func_0x00010877fde0();
                plVar3 = plStack_6a8;
                func_0x00010877fe00();
                func_0x00010877fdec(&lStack_2a0);
                lVar8 = lStack_2a0;
                func_0x000107c278b8(&uStack_a0,&UNK_10f4ba49e);
                uStack_268 = 0;
                lStack_270 = 0;
                puStack_258 = (ulong *)0x0;
                uStack_260 = 0;
                uStack_250 = CONCAT44(uStack_250._4_4_,0x3f800000);
                FUN_1086a32e0(&plStack_6a8,plVar10 + 0xc,lVar8 + 0xf0,lVar13 + 0xb0,lVar17,
                              &uStack_a0,&lStack_270);
                func_0x00010877fe88();
                puVar7 = &uStack_a0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                func_0x00010877fe80();
                if (bStack_4f8 != 1) {
                  puStack_80 = (ulong *)((ulong)puStack_80 & 0xffffffffffffff00);
                }
                else {
                  puStack_80 = puStack_688;
                }
                uStack_78 = bStack_4f8 == 1;
                uVar4 = (char)plStack_6a8 == '\x01';
                if ((bool)uVar4) {
                  uVar14 = *(undefined8 *)(lVar17 + 0x60);
                  puVar15 = (undefined8 *)(lVar13 + 0x300);
                  FUN_10874cff8(puVar15,&puStack_80);
                  *puVar15 = uVar14;
LAB_10877f13c:
                  func_0x00010877fe20();
                  goto LAB_10877f3e0;
                }
                if ((bool)uStack_78) {
                  puStack_6c0 = puStack_80;
                }
                else {
                  func_0x00010877fdec(&lStack_270);
                  puStack_6c0 = *(ulong **)(lStack_270 + 0x120);
                  (**(code **)(*puStack_6c0 + 0x10))();
                  puVar7 = puStack_6c0;
                  func_0x00010877fe58();
                }
                uVar14 = *(undefined8 *)(lVar17 + 0x60);
                func_0x00010877fe90();
                lVar8 = extraout_x9_00 + 0xe08;
                if (!(bool)uVar4) {
                  lVar8 = extraout_x8_00;
                }
                uVar18 = *(undefined8 *)(lVar8 + 0x128);
                func_0x00010877fdec(&lStack_270);
                uVar19 = *(undefined8 *)(lStack_270 + 0x1c0);
                func_0x00010877fdec(&lStack_2a0);
                uStack_90 = *(undefined8 *)(lStack_2a0 + 0x1b0);
                uStack_88 = 0;
                uStack_a0 = uVar1;
                uStack_98 = uVar19;
                func_0x00010877fe80();
                func_0x00010877fe58();
                auStack_b0[0] = 0;
                uStack_ac = 0;
                auStack_a8[0] = 0;
                uStack_a3 = 0;
                uStack_a1 = *(int *)(lVar13 + 0x230) == 1;
                uStack_c8 = 0;
                puStack_c0 = (ulong *)0x0;
                uStack_b8 = 0;
                func_0x000107c28258();
                uStack_b8 = 1;
                puStack_c0 = puVar7;
                func_0x00010877fdec(&lStack_270);
                lVar5 = lStack_270;
                func_0x00010877fdec(&lStack_2a0);
                lVar8 = lVar13 + 0xb0;
                FUN_108842828(lVar8,uVar14,lVar17,lVar5 + 0x80,lStack_2a0 + 0x90,&uStack_a0,
                              auStack_b0);
                func_0x00010877fe80();
                func_0x00010877fe58();
                puVar15 = &uStack_c8;
                func_0x000107c2825c();
                uVar4 = (int)lVar8 == 2;
                if (!(bool)uVar4) {
                  func_0x000107c27994(&lStack_270,lVar13 + 0xb0);
                  puStack_258 = puStack_6c0;
                  uStack_248 = 1;
                  uStack_240 = *(undefined8 *)(lVar17 + 0x70);
                  uStack_238 = 1;
                  uStack_230 = 0;
                  uStack_228 = 0;
                  uStack_250 = uVar14;
                  func_0x000107c287dc(auStack_220,lVar17);
                  func_0x000107c278b8(auStack_1a8,&DAT_10f4bdfd4);
                  func_0x00010877fe90();
                  lVar17 = extraout_x9_01 + 0xe08;
                  if (!(bool)uVar4) {
                    lVar17 = extraout_x8_01;
                  }
                  uStack_190 = *(undefined8 *)(lVar17 + 0x120);
                  uStack_180 = 0;
                  uStack_168 = 0;
                  uStack_160 = 0;
                  uStack_15c = 0;
                  uStack_158 = 0;
                  uStack_150 = 0;
                  uStack_148 = 0;
                  uStack_144 = 0;
                  uStack_140 = 0;
                  uStack_138 = 0;
                  uStack_130 = 0;
                  uStack_12c = 0;
                  uStack_128 = 0;
                  uStack_120 = 0;
                  uStack_108 = 0;
                  uStack_100 = 0;
                  uStack_fc = 0;
                  uStack_f8 = 0;
                  uStack_f4 = 0;
                  uStack_f0 = 0;
                  uStack_e8 = 0;
                  uStack_d0 = 0;
                  uStack_188 = uVar18;
                  FUN_10886e2e0(&lStack_270);
                  uStack_130 = (int)lVar8 == 1;
                  if ((bStack_4f8 & 1) != 0) {
                    FUN_10883f8ec(lVar13 + 0x348,uVar1,plVar3 + 3,auStack_a8,&uStack_6a0,&lStack_270
                                  ,lVar8,auStack_b0,puVar15);
                  }
                  func_0x00010877fdec(alStack_280);
                  plVar9 = *(long **)(alStack_280[0] + 0x180);
                  (**(code **)(*plVar9 + 0x10))();
                  func_0x000107c29ee4(&lStack_2a0,plVar3 + 3);
                  uVar6 = uVar1;
                  FUN_1086a1f74(uVar1,&lStack_270,plVar9,&lStack_2a0);
                  func_0x000107c2a2e0(&lStack_2a0);
                  func_0x000107c297b0(alStack_280);
                  if ((uVar6 & 1) == 0) {
                    FUN_108864424(plVar10[0xc],&lStack_270,0);
                    func_0x0001086aa5b8(lVar13 + 0xf8,&lStack_270);
                    func_0x00010877fee4();
                    func_0x00010877feec();
                    goto LAB_10877f13c;
                  }
                  func_0x00010877fee4();
                }
                func_0x00010877feec();
                func_0x00010877fe20();
              }
            }
          }
          FUN_10877ec4c(lVar13 + 0x110,*(undefined8 *)(uVar12 + 0x10),0);
        }
        else {
          if (*(int *)(uVar12 + 0x24) == 3) {
            bVar11 = *(byte *)(uVar12 + 0x18);
          }
          else {
            bVar11 = 0;
          }
          FUN_10877ec4c(lVar13 + 0x110,*(undefined8 *)(uVar12 + 0x10),bVar11 & 1);
        }
LAB_10877f3e0:
        puVar2 = puVar2 + 1;
      }
      if (*(long *)(lVar13 + 0x310) != 0) {
        uStack_268 = 0;
        lStack_270 = 0;
        puStack_258 = (ulong *)0x0;
        uStack_260 = 0;
        uStack_250._4_4_ = (undefined4)((ulong)uStack_250 >> 0x20);
        uStack_250 = CONCAT44(uStack_250._4_4_,0x3f800000);
        lVar16 = *(long *)(lVar13 + 0x300);
        plStack_6a8 = &lStack_270;
        uStack_6a0 = 0;
        while (lVar16 != lVar13 + 0x308) {
          uStack_a0 = *(ulong *)(lVar16 + 0x20);
          FUN_10867b25c(&plStack_6a8,&uStack_a0);
          func_0x000107c27be0();
        }
        func_0x00010877fde0();
        FUN_108861b60(&lStack_2a0,plStack_6a8[0xc],lVar13 + 0xb0,&lStack_270,1);
        func_0x00010877fe00();
        func_0x00010877fde0();
        plVar10 = (long *)plStack_6a8[0x30];
        (**(code **)(*plVar10 + 0x10))();
        func_0x00010877fe00();
        func_0x00010877fde0();
        func_0x000107c29ee4(&uStack_a0,plStack_6a8 + 3);
        func_0x00010877fe00();
        for (lVar16 = lStack_2a0; lVar16 != lStack_298; lVar16 = lVar16 + 0x1a8) {
          uVar12 = uVar1;
          FUN_1086a1f74(uVar1,lVar16,plVar10,&uStack_a0);
          if ((int)uVar12 == 0) {
            func_0x0001086aa5b8(lVar13 + 0xf8,lVar16);
          }
          else {
            plStack_6a8 = (long *)((ulong)plStack_6a8 & 0xffffffffffffff00);
            FUN_1086e169c(lVar13 + 0x110,lVar16 + 0x20,&plStack_6a8);
          }
          FUN_10874976c(lVar13 + 0x300,lVar16 + 0x18);
        }
        lVar16 = *(long *)(lVar13 + 0x300);
        while (lVar16 != lVar13 + 0x308) {
          uVar14 = *(undefined8 *)(lVar16 + 0x28);
          puVar15 = *(undefined8 **)(lVar13 + 0x118);
          if (puVar15 < *(undefined8 **)(lVar13 + 0x120)) {
            *puVar15 = uVar14;
            *(undefined1 *)(puVar15 + 1) = 0;
            puVar15 = puVar15 + 2;
          }
          else {
            lVar8 = lVar13 + 0x110;
            FUN_1086e1d98(lVar8,((long)puVar15 - *(long *)(lVar13 + 0x110) >> 4) + 1);
            FUN_1086e1c64(&plStack_6a8,lVar8,
                          *(long *)(lVar13 + 0x118) - *(long *)(lVar13 + 0x110) >> 4,lVar13 + 0x120)
            ;
            *puStack_698 = uVar14;
            *(undefined1 *)(puStack_698 + 1) = 0;
            puStack_698 = puStack_698 + 2;
            FUN_1086e1bec(lVar13 + 0x110,&plStack_6a8);
            puVar15 = *(undefined8 **)(lVar13 + 0x118);
            func_0x0001086e1cac(&plStack_6a8);
          }
          *(undefined8 **)(lVar13 + 0x118) = puVar15;
          func_0x000107c27be0();
        }
        func_0x000107c2a2e0(&uStack_a0);
        func_0x00010867b9fc(&lStack_2a0);
        func_0x00010877fe88();
      }
      func_0x000107c31428(auStack_4b8);
      func_0x00010877fef4();
      FUN_10875ec20(lVar13);
      goto LAB_10877ef5c;
    }
    uVar14 = 0;
  }
  else {
    uVar14 = 7;
  }
  FUN_10875edc8(lVar13,uVar14);
  func_0x00010877fef4();
LAB_10877ef5c:
  func_0x000107c288c8(auStack_478);
  return;
}



/* Entry: 10877f7cc; end: 10877f7fb;  */

void FUN_10877f7cc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10877f7fc; end: 10877f80f;  */

void FUN_10877f7fc(void)

{
  func_0x00010877f9a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877f810; end: 10877f827;  */

void FUN_10877f810(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 10877f828; end: 10877f86b;  */

void FUN_10877f828(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010877febc();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010877f85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10877f86c; end: 10877f917;  */

void FUN_10877f86c(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010877febc();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 10877f918; end: 10877f91b;  */

undefined8 * FUN_10877f918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e8c0;
  func_0x00010877fed4(param_1[8]);
  func_0x00010877fed4(param_1[2]);
  return param_1;
}



/* Entry: 10877f91c; end: 10877f92f;  */

void FUN_10877f91c(void)

{
  FUN_10877f96c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877f930; end: 10877f96b;  */

void FUN_10877f930(void)

{
  return;
}



/* Entry: 10877f96c; end: 10877f9db;  */

undefined8 * FUN_10877f96c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e8c0;
  func_0x00010877fed4(param_1[8]);
  func_0x00010877fed4(param_1[2]);
  return param_1;
}



/* Entry: 10877f9dc; end: 10877f9eb;  */

void FUN_10877f9dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e7b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877f9ec; end: 10877fa83;  */

void FUN_10877f9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  FUN_108770c94();
  if ((1 << (ulong)((uint)param_1 & 0x1f) & 0xfdbU) == 0) {
    FUN_10875eb20(uVar2,0);
  }
  else {
    FUN_10875ebcc(uVar2,param_1);
  }
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 10877fa84; end: 10877faa3;  */

void FUN_10877fa84(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10877edac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10877faa4; end: 10877fabb;  */

void FUN_10877faa4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10877fabc; end: 10877fb5f;  */

long FUN_10877fabc(long param_1)

{
  long lStack_28;
  
  func_0x0001086d6ca4(param_1 + 0x1e8);
  func_0x00010867b9fc(param_1 + 0x1d0);
  func_0x0001005fb56c(param_1 + 400);
  func_0x000107c60ca0(param_1 + 0x130);
  func_0x00010066b614(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10877fb60; end: 10877fb67;  */

void FUN_10877fb60(void)

{
  return;
}



/* Entry: 10877fb68; end: 10877fb97;  */

void FUN_10877fb68(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6e920;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10877fb98; end: 10877fbc3;  */

void FUN_10877fb98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6e920;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10877fbc4; end: 10877fceb;  */

void FUN_10877fbc4(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_438 [464];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 auStack_238 [116];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar1 = (undefined8 *)(lVar2 + 0x318);
  if ((*param_2 >> 0x20 & 1) == 0) {
    func_0x000107c28de8(auStack_438,lVar2 + 0x128);
    uStack_260 = *(undefined8 *)(lVar2 + 0x100);
    uStack_268 = *(undefined8 *)(lVar2 + 0xf8);
    uStack_258 = *(undefined8 *)(lVar2 + 0x108);
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    *(undefined8 *)(lVar2 + 0x100) = 0;
    *(undefined8 *)(lVar2 + 0x108) = 0;
    uStack_248 = *(undefined8 *)(lVar2 + 0x118);
    uStack_250 = *(undefined8 *)(lVar2 + 0x110);
    uStack_240 = *(undefined8 *)(lVar2 + 0x120);
    *(undefined8 *)(lVar2 + 0x110) = 0;
    *(undefined8 *)(lVar2 + 0x118) = 0;
    *(undefined8 *)(lVar2 + 0x120) = 0;
    pcVar3 = *(code **)(lVar2 + 0x318);
    func_0x000107c28de8(auStack_238,auStack_438);
    uStack_50 = uStack_250;
    uStack_58 = uStack_258;
    uStack_60 = uStack_260;
    uStack_68 = uStack_268;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_40 = uStack_240;
    uStack_48 = uStack_248;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_38 = 0;
    (*pcVar3)(auStack_238,puVar1);
    func_0x00010877fe68();
    FUN_10877fabc(auStack_438);
  }
  else {
    auStack_238[0] = (undefined4)*param_2;
    uStack_38 = 1;
    (*(code *)*puVar1)(auStack_238,puVar1);
    func_0x00010877fe68();
  }
  return;
}



/* Entry: 10877fcec; end: 10877fd23;  */

long FUN_10877fcec(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6e980);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10877fd24; end: 10877fd2f;  */

undefined ** FUN_10877fd24(void)

{
  return &PTR_DAT_110a6e980;
}



/* Entry: 10877fd30; end: 10877fd7f;  */

long FUN_10877fd30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10877fd80; end: 10877fdd3;  */

void FUN_10877fd80(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x200) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a6e990)[*(uint *)(param_1 + 0x200)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x200) = 0xffffffff;
  return;
}



/* Entry: 10877fdd4; end: 10877fefb;  */

long FUN_10877fdd4(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  func_0x0001086d6ca4(param_2 + 0x1e8);
  func_0x00010867b9fc(param_2 + 0x1d0);
  func_0x0001005fb56c(param_2 + 400);
  func_0x000107c60ca0(param_2 + 0x130);
  func_0x00010066b614(param_2 + 0x18);
  lStack_28 = param_2;
  func_0x000100100fd4(&lStack_28);
  return param_2;
}



/* Entry: 10877fefc; end: 10877ff53;  */

void FUN_10877fefc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x10))();
  (**(code **)(*plVar1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00010877ff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2,plVar1);
  return;
}



/* Entry: 10877ff54; end: 108780063;  */

long * FUN_10877ff54(long param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x60) == 1) {
    *(undefined4 *)(lVar5 + 0x60) = 0;
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    plVar3 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_b8 = lVar5;
  lStack_b0 = lVar6;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_98 = 0x1087800ac;
  ppuStack_90 = &PTR_DAT_110a6ea18;
  if (lVar6 != 0) {
    plVar3 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_88 = lVar5;
  lStack_80 = lVar6;
  func_0x00010bcce9b8(auStack_a8,uVar4,&uStack_98,param_1 + param_3 * 1000000);
  func_0x0001087800f0();
  func_0x000107c27f44(auStack_a8);
  plVar3 = &lStack_b8;
  func_0x000107c297a4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x0001087800f0();
  func_0x000107c297a4(&lStack_b8);
  __Unwind_Resume();
  *plVar3 = (long)&PTR_FUN_110a6e9d0;
  func_0x000107c27c20(plVar3 + 1);
  return plVar3;
}



/* Entry: 108780064; end: 108780067;  */

undefined8 * FUN_108780064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e9d0;
  func_0x000107c27c20(param_1 + 1);
  return param_1;
}



/* Entry: 108780068; end: 10878007b;  */

void FUN_108780068(void)

{
  FUN_10878007c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878007c; end: 1087800ab;  */

undefined8 * FUN_10878007c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6e9d0;
  func_0x000107c27c20(param_1 + 1);
  return param_1;
}



/* Entry: 1087800ac; end: 1087800ff;  */

void FUN_1087800ac(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((int)plVar2[0xc] != 2) {
    if ((int)plVar2[0xc] == 1) {
      *(undefined4 *)(plVar2 + 0xc) = 0;
    }
    plVar2[9] = plVar2[9] + 1;
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x18))();
    if (((ulong)plVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001005fec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 108780100; end: 10878027b;  */

undefined8 *
FUN_108780100(undefined8 *param_1,undefined8 param_2,undefined **param_3,ulong param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  code **ppcVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  long lVar12;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 uVar13;
  long *plVar14;
  undefined **ppuStack_410;
  undefined8 *puStack_408;
  undefined **ppuStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined **ppuStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined4 uStack_398;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long lStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined8 uStack_348;
  long alStack_340 [55];
  char cStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  ulong uStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_118;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined ***pppuStack_78;
  undefined8 uStack_68;
  
  puVar6 = param_1;
  ppuVar8 = param_3;
  uVar11 = param_4;
  func_0x0001087810f0();
  *puVar6 = &PTR_FUN_110a6ea40;
  puStack_88 = (undefined8 *)&UNK_100697a48;
  uStack_80 = uVar11 & 0xffffffff;
  pppuStack_78 = (undefined ***)0x0;
  ppuStack_90 = ppuVar8;
  uStack_68 = extraout_x8;
  func_0x000107c2793c(&UNK_10f4ba4b0);
  func_0x000107c3173c(auStack_a8);
  ppuStack_90 = &PTR_FUN_110a6ec18;
  uStack_b0 = *param_6;
  *param_6 = 0;
  puStack_88 = param_1;
  pppuStack_78 = &ppuStack_90;
  FUN_10875e9fc(param_1,auStack_a8,param_2,0,&ppuStack_90,param_7,&uStack_b0,10);
  func_0x000107c29578(&uStack_b0);
  func_0x00010865f8f8(&ppuStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  puVar6 = param_1 + 0x16;
  *param_1 = &PTR_FUN_110a6ea40;
  func_0x000107c27994(puVar6,param_3);
  *(int *)(param_1 + 0x19) = (int)param_4;
  lVar12 = param_5[1];
  uVar13 = *param_5;
  param_1[0x1b] = param_5[1];
  param_1[0x1a] = uVar13;
  if (lVar12 != 0) {
    do {
      func_0x00010878108c();
    } while (extraout_w10 != 0);
  }
  func_0x0001087810ac(uStack_68);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10875b664(param_1);
  __Unwind_Resume();
  func_0x0001087810f0();
  uStack_118 = extraout_x8_00;
  func_0x000107c297b4(&uStack_3e0,puVar6 + 1);
  puStack_3d0 = puVar6;
  func_0x000107c297b4(&ppuStack_400,puVar6 + 1);
  puStack_3f0 = puVar6;
  func_0x0001087810c0();
  FUN_10885edd8(&ppuStack_358,ppuStack_3c0[0xc],puVar6 + 0x16);
  FUN_108663a10(&ppuStack_180,&ppuStack_358);
  FUN_108656820(&ppuStack_358);
  func_0x000108781100();
  if ((char)uStack_150 == '\x01') {
    uVar4 = uStack_158._4_1_ != '\x01' || (int)uStack_158 == 3;
    if (uStack_158._4_1_ == '\x01' && (int)uStack_158 != 3) {
      ppuStack_358 = &PTR_FUN_110a989c0;
      ppuStack_350 = (undefined **)0x0;
      uStack_348 = (ulong)uStack_348._4_4_ << 0x20;
      FUN_10875ec20(puStack_3d0);
      FUN_1089286c4(&ppuStack_358);
      func_0x000108781174();
      goto LAB_108780744;
    }
  }
  func_0x000108781174();
  puStack_3b8 = puStack_3f8;
  ppuStack_3c0 = ppuStack_400;
  if (puStack_3f8 != (undefined8 *)0x0) {
    do {
      func_0x00010878108c();
    } while (extraout_w10_00 != 0);
  }
  puStack_3b0 = puStack_3f0;
  func_0x0001087810cc(&ppuStack_358);
  puStack_3a0 = ppuStack_358[0x4b];
  puStack_3a8 = ppuStack_358[0x4a];
  if (ppuStack_358[0x4b] != (undefined *)0x0) {
    do {
      func_0x00010878108c();
    } while (extraout_w10_01 != 0);
  }
  uStack_398 = *(undefined4 *)(puVar6[0xb] + 0xfc);
  func_0x000107c297b0(&ppuStack_358);
  pcStack_148 = FUN_108780c20;
  ppuStack_140 = &PTR_FUN_110a6ebf0;
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = puStack_3b8;
  *puVar7 = ppuStack_3c0;
  if (puStack_3b8 != (undefined8 *)0x0) {
    do {
      func_0x00010878108c();
    } while (extraout_w10_02 != 0);
  }
  puVar7[3] = puStack_3a8;
  puVar7[2] = puStack_3b0;
  puVar7[4] = puStack_3a0;
  if (puStack_3a0 != (undefined *)0x0) {
    do {
      func_0x00010878108c();
    } while (extraout_w10_03 != 0);
  }
  *(undefined4 *)(puVar7 + 5) = uStack_398;
  lVar12 = puVar6[1];
  lVar1 = puVar6[2];
  lStack_368 = lVar12;
  lStack_360 = lVar1;
  puStack_138 = puVar7;
  if (lVar1 == 0) {
    uVar13 = puVar6[0xb];
    lStack_380 = 0;
    lStack_388 = lVar12;
  }
  else {
    do {
      func_0x00010878108c();
    } while (extraout_w10_04 != 0);
    uVar13 = puVar6[0xb];
    lStack_388 = lVar12;
    lStack_380 = lVar1;
    do {
      func_0x00010878108c();
    } while (extraout_w10_05 != 0);
  }
  puVar7 = (undefined8 *)0xb8;
  __Znwm();
  plVar14 = puVar7 + 1;
  *plVar14 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110a6eab0;
  ppuStack_358 = (undefined **)FUN_108780990;
  ppuStack_350 = &PTR_FUN_110a6eaf0;
  lStack_388 = 0;
  lStack_380 = 0;
  ppuStack_180 = (undefined **)0x108780a04;
  ppuStack_178 = &PTR_DAT_110a6eb08;
  ppuStack_168 = (undefined **)lStack_3d8;
  uStack_170 = uStack_3e0;
  if (lStack_3d8 != 0) {
    plVar9 = (long *)(lStack_3d8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_160 = (undefined **)puStack_3d0;
  puVar7[3] = &PTR_FUN_110a6ebb8;
  puVar7[4] = 0x108780a04;
  uStack_348 = lVar12;
  alStack_340[0] = lVar1;
  (*(code *)(undefined *)0x108780a14)(puVar7 + 5,&ppuStack_178);
  puVar7[10] = pcStack_148;
  (*(code *)ppuStack_140[2])(puVar7 + 0xb,&ppuStack_140);
  puVar7[3] = &PTR_DAT_110a6eb30;
  puVar7[0x10] = ppuStack_358;
  (*(code *)ppuStack_350[2])(puVar7 + 0x11,&ppuStack_350);
  puVar7[0x16] = uVar13;
  (*(code *)*ppuStack_178)(&ppuStack_178);
  (*(code *)*ppuStack_350)(&ppuStack_350);
  func_0x000108780c14(0);
  func_0x000107c297a8(&lStack_388);
  uStack_378 = 0;
  uStack_370 = 0;
  ppuStack_410 = (undefined **)(puVar7 + 3);
  puStack_408 = puVar7;
  FUN_10878103c(&uStack_378);
  func_0x000107c297a8(&lStack_368);
  func_0x00010878113c();
  FUN_108780940(&ppuStack_3c0);
  ppuStack_180 = &PTR_FUN_110a98a10;
  ppuStack_178 = (undefined **)0x0;
  ppuStack_168 = (undefined **)0x0;
  uStack_170 = 0;
  uStack_158 = (long *)0x0;
  ppuStack_160 = (undefined **)0x0;
  uStack_150 = 0;
  func_0x0001087810c0();
  func_0x000107c29ee4(&ppuStack_358,ppuStack_3c0 + 3);
  uStack_170 = uStack_170 | 1;
  if (ppuStack_168 == (undefined **)0x0) {
    ppuVar8 = ppuStack_178;
    if (((ulong)ppuStack_178 & 1) != 0) {
      ppuVar8 = *(undefined ***)((ulong)ppuStack_178 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    ppuStack_168 = ppuVar8;
  }
  func_0x000107c287d0();
  func_0x00010878114c();
  func_0x000108781100();
  func_0x000107c29ee4(&ppuStack_358,puVar6 + 0x16);
  uStack_170 = uStack_170 | 2;
  if (ppuStack_160 == (undefined **)0x0) {
    ppuVar8 = ppuStack_178;
    if (((ulong)ppuStack_178 & 1) != 0) {
      ppuVar8 = *(undefined ***)((ulong)ppuStack_178 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    ppuStack_160 = ppuVar8;
  }
  func_0x000107c287d0();
  func_0x00010878114c();
  uStack_150 = *(undefined4 *)(puVar6 + 0x19);
  func_0x0001087810c0();
  func_0x000107c29f64(&ppuStack_358,ppuStack_3c0[0xc],puVar6 + 0x16,0);
  func_0x000108781100();
  uVar4 = cStack_188 == '\x01';
  if ((bool)uVar4) {
    pcStack_148 = (code *)((ulong)pcStack_148 & 0xffffffff00000000);
    func_0x0001087810c0();
    plVar9 = alStack_340;
    ppcVar10 = &pcStack_148;
    FUN_1086a3d00(plVar9,ppcVar10,ppuStack_3c0 + 3);
    func_0x000108781100();
    uVar4 = ((ulong)ppcVar10 & 1) == 0;
    if ((bool)uVar4) {
      plVar9 = (long *)0x0;
    }
    iVar5 = (int)&ppuStack_358;
    func_0x00010868ee2c();
    if (iVar5 == 0) goto LAB_1087806ac;
    ppuStack_3c0 = &PTR_FUN_110a989c0;
    puStack_3b8 = (undefined8 *)0x0;
    puStack_3b0 = (undefined8 *)((ulong)puStack_3b0 & 0xffffffff00000000);
    FUN_10875ec20(puStack_3d0);
    FUN_1089286c4(&ppuStack_3c0);
    bVar3 = false;
  }
  else {
    plVar9 = (long *)0x0;
LAB_1087806ac:
    bVar3 = true;
  }
  func_0x000107c288c8(&ppuStack_358);
  if (bVar3) {
    uStack_158 = plVar9;
    func_0x0001087810cc(&ppuStack_358);
    plVar9 = (long *)ppuStack_358[10];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = *plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuStack_3c0 = (undefined **)(puVar7 + 3);
    puStack_3b8 = puVar7;
    (**(code **)(*plVar9 + 0x68))(plVar9,&ppuStack_180,&ppuStack_3c0);
    func_0x000108781064(&ppuStack_3c0);
    func_0x000107c297b0(&ppuStack_358);
  }
  FUN_108928334(&ppuStack_180);
  FUN_10878103c(&ppuStack_410);
LAB_108780744:
  func_0x000107c297a4(&ppuStack_400);
  puVar6 = &uStack_3e0;
  func_0x000107c297a4(puVar6);
  func_0x0001087810ac(uStack_118);
  if ((bool)uVar4) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_1089286c4(&ppuStack_3c0);
  func_0x000107c288c8(&ppuStack_358);
  FUN_108928334(&ppuStack_180);
  FUN_10878103c(&ppuStack_410);
  func_0x000107c297a4(&ppuStack_400);
  do {
    func_0x000107c297a4(&uStack_3e0);
    func_0x000108781108();
  } while( true );
}



/* Entry: 10878027c; end: 1087808ab;  */

void FUN_10878027c(ulong param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  code **ppcVar10;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uVar11;
  long *plVar12;
  undefined **ppuStack_360;
  undefined8 *puStack_358;
  undefined **ppuStack_350;
  undefined8 *puStack_348;
  ulong uStack_340;
  undefined8 uStack_330;
  long lStack_328;
  ulong uStack_320;
  undefined **ppuStack_310;
  undefined8 *puStack_308;
  ulong uStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined4 uStack_2e8;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  long alStack_290 [55];
  char cStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  ulong uStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_68;
  
  func_0x0001087810f0();
  uStack_68 = extraout_x8;
  func_0x000107c297b4(&uStack_330,param_1 + 8);
  uStack_320 = param_1;
  func_0x000107c297b4(&ppuStack_350,param_1 + 8);
  uStack_340 = param_1;
  func_0x0001087810c0();
  FUN_10885edd8(&ppuStack_2a8,ppuStack_310[0xc],param_1 + 0xb0);
  FUN_108663a10(&ppuStack_d0,&ppuStack_2a8);
  FUN_108656820(&ppuStack_2a8);
  func_0x000108781100();
  if ((char)uStack_a0 == '\x01') {
    uVar5 = uStack_a8._4_1_ != '\x01' || (int)uStack_a8 == 3;
    if (uStack_a8._4_1_ == '\x01' && (int)uStack_a8 != 3) {
      ppuStack_2a8 = &PTR_FUN_110a989c0;
      ppuStack_2a0 = (undefined **)0x0;
      uStack_298 = (ulong)uStack_298._4_4_ << 0x20;
      FUN_10875ec20(uStack_320);
      FUN_1089286c4(&ppuStack_2a8);
      func_0x000108781174();
      goto LAB_108780744;
    }
  }
  func_0x000108781174();
  puStack_308 = puStack_348;
  ppuStack_310 = ppuStack_350;
  if (puStack_348 != (undefined8 *)0x0) {
    do {
      func_0x00010878108c();
    } while (extraout_w10 != 0);
  }
  uStack_300 = uStack_340;
  func_0x0001087810cc(&ppuStack_2a8);
  puStack_2f0 = ppuStack_2a8[0x4b];
  puStack_2f8 = ppuStack_2a8[0x4a];
  if (ppuStack_2a8[0x4b] != (undefined *)0x0) {
    do {
      func_0x00010878108c();
    } while (extraout_w10_00 != 0);
  }
  uStack_2e8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x000107c297b0(&ppuStack_2a8);
  pcStack_98 = FUN_108780c20;
  ppuStack_90 = &PTR_FUN_110a6ebf0;
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = puStack_308;
  *puVar7 = ppuStack_310;
  if (puStack_308 != (undefined8 *)0x0) {
    do {
      func_0x00010878108c();
    } while (extraout_w10_01 != 0);
  }
  puVar7[3] = puStack_2f8;
  puVar7[2] = uStack_300;
  puVar7[4] = puStack_2f0;
  if (puStack_2f0 != (undefined *)0x0) {
    do {
      func_0x00010878108c();
    } while (extraout_w10_02 != 0);
  }
  *(undefined4 *)(puVar7 + 5) = uStack_2e8;
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  lStack_2b8 = lVar1;
  lStack_2b0 = lVar2;
  puStack_88 = puVar7;
  if (lVar2 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    lStack_2d0 = 0;
    lStack_2d8 = lVar1;
  }
  else {
    do {
      func_0x00010878108c();
    } while (extraout_w10_03 != 0);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    lStack_2d8 = lVar1;
    lStack_2d0 = lVar2;
    do {
      func_0x00010878108c();
    } while (extraout_w10_04 != 0);
  }
  puVar7 = (undefined8 *)0xb8;
  __Znwm();
  plVar12 = puVar7 + 1;
  *plVar12 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110a6eab0;
  ppuStack_2a8 = (undefined **)FUN_108780990;
  ppuStack_2a0 = &PTR_FUN_110a6eaf0;
  lStack_2d8 = 0;
  lStack_2d0 = 0;
  ppuStack_d0 = (undefined **)0x108780a04;
  ppuStack_c8 = &PTR_DAT_110a6eb08;
  ppuStack_b8 = (undefined **)lStack_328;
  uStack_c0 = uStack_330;
  if (lStack_328 != 0) {
    plVar9 = (long *)(lStack_328 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_b0 = (undefined **)uStack_320;
  puVar7[3] = &PTR_FUN_110a6ebb8;
  puVar7[4] = 0x108780a04;
  uStack_298 = lVar1;
  alStack_290[0] = lVar2;
  (*(code *)(undefined *)0x108780a14)(puVar7 + 5,&ppuStack_c8);
  puVar7[10] = pcStack_98;
  (*(code *)ppuStack_90[2])(puVar7 + 0xb,&ppuStack_90);
  puVar7[3] = &PTR_DAT_110a6eb30;
  puVar7[0x10] = ppuStack_2a8;
  (*(code *)ppuStack_2a0[2])(puVar7 + 0x11,&ppuStack_2a0);
  puVar7[0x16] = uVar11;
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  (*(code *)*ppuStack_2a0)(&ppuStack_2a0);
  func_0x000108780c14(0);
  func_0x000107c297a8(&lStack_2d8);
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  ppuStack_360 = (undefined **)(puVar7 + 3);
  puStack_358 = puVar7;
  FUN_10878103c(&uStack_2c8);
  func_0x000107c297a8(&lStack_2b8);
  func_0x00010878113c();
  FUN_108780940(&ppuStack_310);
  ppuStack_d0 = &PTR_FUN_110a98a10;
  ppuStack_c8 = (undefined **)0x0;
  ppuStack_b8 = (undefined **)0x0;
  uStack_c0 = 0;
  uStack_a8 = (long *)0x0;
  ppuStack_b0 = (undefined **)0x0;
  uStack_a0 = 0;
  func_0x0001087810c0();
  func_0x000107c29ee4(&ppuStack_2a8,ppuStack_310 + 3);
  uStack_c0 = uStack_c0 | 1;
  if (ppuStack_b8 == (undefined **)0x0) {
    ppuVar8 = ppuStack_c8;
    if (((ulong)ppuStack_c8 & 1) != 0) {
      ppuVar8 = *(undefined ***)((ulong)ppuStack_c8 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    ppuStack_b8 = ppuVar8;
  }
  func_0x000107c287d0();
  func_0x00010878114c();
  func_0x000108781100();
  func_0x000107c29ee4(&ppuStack_2a8,param_1 + 0xb0);
  uStack_c0 = uStack_c0 | 2;
  if (ppuStack_b0 == (undefined **)0x0) {
    ppuVar8 = ppuStack_c8;
    if (((ulong)ppuStack_c8 & 1) != 0) {
      ppuVar8 = *(undefined ***)((ulong)ppuStack_c8 & 0xfffffffffffffffe);
    }
    func_0x000107c287e0();
    ppuStack_b0 = ppuVar8;
  }
  func_0x000107c287d0();
  func_0x00010878114c();
  uStack_a0 = *(undefined4 *)(param_1 + 200);
  func_0x0001087810c0();
  func_0x000107c29f64(&ppuStack_2a8,ppuStack_310[0xc],param_1 + 0xb0,0);
  func_0x000108781100();
  uVar5 = cStack_d8 == '\x01';
  if ((bool)uVar5) {
    pcStack_98 = (code *)((ulong)pcStack_98 & 0xffffffff00000000);
    func_0x0001087810c0();
    plVar9 = alStack_290;
    ppcVar10 = &pcStack_98;
    FUN_1086a3d00(plVar9,ppcVar10,ppuStack_310 + 3);
    func_0x000108781100();
    uVar5 = ((ulong)ppcVar10 & 1) == 0;
    if ((bool)uVar5) {
      plVar9 = (long *)0x0;
    }
    iVar6 = (int)&ppuStack_2a8;
    func_0x00010868ee2c();
    if (iVar6 == 0) goto LAB_1087806ac;
    ppuStack_310 = &PTR_FUN_110a989c0;
    puStack_308 = (undefined8 *)0x0;
    uStack_300 = uStack_300 & 0xffffffff00000000;
    FUN_10875ec20(uStack_320);
    FUN_1089286c4(&ppuStack_310);
    bVar4 = false;
  }
  else {
    plVar9 = (long *)0x0;
LAB_1087806ac:
    bVar4 = true;
  }
  func_0x000107c288c8(&ppuStack_2a8);
  if (bVar4) {
    uStack_a8 = plVar9;
    func_0x0001087810cc(&ppuStack_2a8);
    plVar9 = (long *)ppuStack_2a8[10];
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    ppuStack_310 = (undefined **)(puVar7 + 3);
    puStack_308 = puVar7;
    (**(code **)(*plVar9 + 0x68))(plVar9,&ppuStack_d0,&ppuStack_310);
    func_0x000108781064(&ppuStack_310);
    func_0x000107c297b0(&ppuStack_2a8);
  }
  FUN_108928334(&ppuStack_d0);
  FUN_10878103c(&ppuStack_360);
LAB_108780744:
  func_0x000107c297a4(&ppuStack_350);
  func_0x000107c297a4(&uStack_330);
  func_0x0001087810ac(uStack_68);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  FUN_1089286c4(&ppuStack_310);
  func_0x000107c288c8(&ppuStack_2a8);
  FUN_108928334(&ppuStack_d0);
  FUN_10878103c(&ppuStack_360);
  func_0x000107c297a4(&ppuStack_350);
  do {
    func_0x000107c297a4(&uStack_330);
    func_0x000108781108();
  } while( true );
}



/* Entry: 1087808ac; end: 1087808af;  */

undefined8 * FUN_1087808ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ea40;
  func_0x000104be3970(param_1 + 0x1a);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 1087808b0; end: 1087808c3;  */

void FUN_1087808b0(void)

{
  FUN_108780cc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087808c4; end: 10878093f;  */

undefined1 * FUN_1087808c4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  puVar2 = auStack_40;
  func_0x0001087810f0();
  uStack_28 = extraout_x8;
  func_0x000107c27994(auStack_40,extraout_x9 + 0xb0);
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x000107c27914();
  func_0x0001087810ac(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107c27914();
  func_0x000108781108();
  func_0x000107c297ac(puVar2 + 0x18);
  func_0x000100562400();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return puVar1;
}



/* Entry: 108780940; end: 108780967;  */

undefined8 FUN_108780940(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108780968; end: 10878096b;  */

void FUN_108780968(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6eab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10878096c; end: 10878097f;  */

void FUN_10878096c(void)

{
  FUN_108780c04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108780980; end: 10878098f;  */

void FUN_108780980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108780988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108780990; end: 1087809ef;  */

long FUN_108780990(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 1087809f0; end: 108780a23;  */

void FUN_1087809f0(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 108780a24; end: 108780a37;  */

void FUN_108780a24(void)

{
  func_0x000108780bd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108780a38; end: 108780a4f;  */

void FUN_108780a38(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 108780a50; end: 108780a93;  */

void FUN_108780a50(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000108781160();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x000108780a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 108780a94; end: 108780b3f;  */

void FUN_108780a94(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x000108781160();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 108780b40; end: 108780b43;  */

undefined8 * FUN_108780b40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ebb8;
  func_0x00010878116c(param_1[8]);
  func_0x00010878116c(param_1[2]);
  return param_1;
}



/* Entry: 108780b44; end: 108780b57;  */

void FUN_108780b44(void)

{
  FUN_108780b94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108780b58; end: 108780b93;  */

void FUN_108780b58(void)

{
  return;
}



/* Entry: 108780b94; end: 108780c03;  */

undefined8 * FUN_108780b94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ebb8;
  func_0x00010878116c(param_1[8]);
  func_0x00010878116c(param_1[2]);
  return param_1;
}



/* Entry: 108780c04; end: 108780c1f;  */

void FUN_108780c04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6eab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108780c20; end: 108780c8f;  */

void FUN_108780c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  FUN_108770c94(param_1);
  FUN_10875ebcc(*(undefined8 *)(lVar1 + 0x10),param_1);
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 108780c90; end: 108780caf;  */

void FUN_108780c90(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108780940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108780cb0; end: 108780cc7;  */

void FUN_108780cb0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108780cc8; end: 108780d07;  */

undefined8 * FUN_108780cc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ea40;
  func_0x000104be3970(param_1 + 0x1a);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 108780d08; end: 108780d0f;  */

void FUN_108780d08(void)

{
  return;
}



/* Entry: 108780d10; end: 108780d3f;  */

void FUN_108780d10(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6ec18;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 108780d40; end: 108780d6b;  */

void FUN_108780d40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6ec18;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108780d6c; end: 108780fa7;  */

long * FUN_108780d6c(long param_1,ulong *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar3 = &lStack_b0;
  plVar1 = &lStack_b0;
  func_0x0001087810f0();
  uVar6 = *param_2;
  lVar4 = *(long *)(param_1 + 8);
  uStack_48 = extraout_x8;
  if ((uVar6 >> 0x20 & 1) == 0) {
    func_0x0001087810cc(&lStack_b0);
    lVar5 = *(long *)(lStack_b0 + 0x30);
    uStack_88 = *(undefined8 *)(lVar4 + 0xd8);
    lStack_90 = *(long *)(lVar4 + 0xd0);
    if (*(long *)(lVar4 + 0xd8) != 0) {
      do {
        func_0x00010878108c();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c28150();
    lVar4 = *(long *)(lVar5 + 0x10);
    plVar2 = (long *)(lVar4 + 8);
    __ZNSt3__15mutex4lockEv();
    lVar4 = *(long *)(lVar4 + 0x70);
    uStack_80 = 0x108781018;
    ppuStack_78 = &PTR_DAT_110a6ec90;
    uStack_68 = uStack_88;
    lStack_70 = lStack_90;
    lStack_90 = 0;
    uStack_88 = 0;
    lStack_50 = param_1;
    func_0x000108781154();
    func_0x00010878109c();
    func_0x000108781134();
    if (lVar4 == 0) {
      func_0x00010878117c();
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010878108c();
        } while (extraout_w10_02 != 0);
      }
      param_2 = &uStack_80;
      (**(code **)(*plVar2 + 0x10))();
      func_0x00010878112c();
    }
    func_0x000104be3970(&lStack_90);
  }
  else {
    func_0x0001087810cc(&lStack_90);
    lVar5 = *(long *)(lStack_90 + 0x30);
    uStack_a8 = *(undefined8 *)(lVar4 + 0xd8);
    lStack_b0 = *(long *)(lVar4 + 0xd0);
    if (*(long *)(lVar4 + 0xd8) != 0) {
      do {
        func_0x00010878108c();
      } while (extraout_w10 != 0);
    }
    uStack_a0 = (undefined4)uVar6;
    uStack_9c = CONCAT31(uStack_9c._1_3_,(char)(uVar6 >> 0x20));
    func_0x000107c28150();
    lVar4 = *(long *)(lVar5 + 0x10);
    plVar1 = (long *)(lVar4 + 8);
    __ZNSt3__15mutex4lockEv();
    lVar4 = *(long *)(lVar4 + 0x70);
    uStack_80 = 0x108780fec;
    ppuStack_78 = &PTR_DAT_110a6ec78;
    uStack_68 = uStack_a8;
    lStack_70 = lStack_b0;
    lStack_b0 = 0;
    uStack_a8 = 0;
    uStack_60 = CONCAT44(uStack_9c,uStack_a0);
    lStack_50 = param_1;
    func_0x000108781154();
    func_0x00010878109c();
    func_0x000108781134();
    if (lVar4 == 0) {
      func_0x00010878117c();
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010878108c();
        } while (extraout_w10_00 != 0);
      }
      param_2 = &uStack_80;
      (**(code **)(*plVar1 + 0x10))();
      func_0x00010878112c();
    }
    func_0x000104be3970(&lStack_b0);
    plVar1 = &lStack_90;
  }
  func_0x000107c297b0();
  func_0x0001087810ac(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010878112c();
    func_0x000104be3970(&lStack_90);
    func_0x000107c297b0(&lStack_b0);
    func_0x000108781108();
    func_0x000107c27934(param_2,&PTR_DAT_110a6eca8);
    plVar3 = (long *)((long)plVar3 + 8);
    if ((int)param_2 == 0) {
      plVar3 = (long *)0x0;
    }
    return plVar3;
  }
  return plVar1;
}


