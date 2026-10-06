/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105973468; end: 105973577;  */

void FUN_105973468(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_1d8 [184];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [184];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_105970880(auStack_108,param_2 + 8,param_2 + 0x88,*(undefined1 *)(param_2 + 0xd9));
  FUN_105970f30(&uStack_120,auStack_108,param_2 + 0xb8,param_2 + 200);
  FUN_1059709cc(auStack_1d8,param_2 + 0x88,*(undefined1 *)(param_2 + 0xd8));
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1108c3b88;
  uStack_38 = uStack_118;
  uStack_40 = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x000100609284(auStack_f8,auStack_1d8);
  FUN_10596f8f0(puVar1 + 3,&uStack_40,auStack_f8);
  func_0x000100609698(auStack_f8);
  func_0x00010596fb7c(&uStack_40);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x000100609698(auStack_1d8);
  func_0x00010596fb7c(&uStack_120);
  func_0x00010046e224(auStack_108);
  return;
}



/* Entry: 105973578; end: 1059735af;  */

long FUN_105973578(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108c3bc8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1059735b0; end: 1059735bb;  */

undefined ** FUN_1059735b0(void)

{
  return &PTR_DAT_1108c3bc8;
}



/* Entry: 1059735bc; end: 10597365b;  */

undefined8 * FUN_1059735bc(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_1108c3b08;
  FUN_10597365c(param_1 + 1);
  FUN_1059736dc(param_1 + 0x11,param_2 + 0x80);
  lVar1 = *(long *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x18] = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x17] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001059737ac();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x1a] = *(undefined8 *)(param_2 + 200);
  param_1[0x19] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001059737ac();
    } while (extraout_w10_00 != 0);
  }
  *(undefined2 *)(param_1 + 0x1b) = *(undefined2 *)(param_2 + 0xd0);
  return param_1;
}



/* Entry: 10597365c; end: 1059736db;  */

long FUN_10597365c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010028af84(lVar1 + 0x18,param_2 + 0x18);
  func_0x00010028af84(param_1 + 0x38,param_2 + 0x38);
  func_0x00010028af84(param_1 + 0x58,param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_2 + 0x78);
  return param_1;
}



/* Entry: 1059736dc; end: 105973713;  */

undefined1 * FUN_1059736dc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_105973714();
  return param_1;
}



/* Entry: 105973714; end: 105973727;  */

void FUN_105973714(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x0001008ffbdc();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}



/* Entry: 105973728; end: 105973743;  */

void FUN_105973728(long param_1)

{
  func_0x0001008ffbdc();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 105973744; end: 105973747;  */

void FUN_105973744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3b88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105973748; end: 10597375b;  */

void FUN_105973748(void)

{
  func_0x00010597376c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10597375c; end: 10597381b;  */

void FUN_10597375c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105973764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10597381c; end: 10597385b;  */

void FUN_10597381c(void)

{
  func_0x00010597386c();
  return;
}



/* Entry: 10597385c; end: 105973877;  */

void FUN_10597385c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105973868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(4,param_3);
  return;
}



/* Entry: 105973878; end: 1059738ab;  */

void FUN_105973878(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_105973eb8(&uStack_11,param_1);
  return;
}



/* Entry: 1059738ac; end: 105973ba7;  */

void FUN_1059738ac(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [80];
  undefined4 uStack_68;
  
  plVar6 = *(long **)(param_5 + 0x10);
  iVar3 = *(int *)(param_5 + 0x20);
  func_0x000105974130();
  uStack_68 = 0x27;
  func_0x00010597409c();
  uVar5 = param_2;
  FUN_105973ba8(param_2);
  func_0x0001059740b4();
  func_0x00010597416c();
  func_0x00010596f4e8(param_4);
  func_0x000100906e58(uVar5,auStack_b8,param_4);
  func_0x00010002b838(auStack_d0,&UNK_10f315ded);
  puVar1 = &UNK_10f315d30;
  if (iVar3 != 1) {
    puVar1 = &UNK_10f315d25;
  }
  func_0x000100906e58(uVar5,auStack_d0,puVar1);
  FUN_105973bcc();
  func_0x000105974164();
  func_0x000105974120();
  func_0x000105974128();
  func_0x000105974118();
  func_0x000105974140();
  func_0x0001059740c0(*(undefined8 *)(*plVar6 + 0x18));
  func_0x00010597415c();
  plVar6 = *(long **)(param_5 + 0x10);
  func_0x000105974130();
  uStack_68 = 0x28;
  func_0x00010597409c();
  uVar5 = param_2;
  FUN_105973ba8(param_2);
  func_0x0001059740b4();
  func_0x00010597416c();
  __ZNSt3__19to_stringEi(auStack_d0,*param_3);
  FUN_105973c64(uVar5,auStack_b8,auStack_d0);
  func_0x00010002b838(auStack_e8,&UNK_10f315e10);
  pcVar2 = "true";
  if (*(char *)(param_3 + 0x10) == '\0') {
    pcVar2 = "false";
  }
  func_0x000100906e58(uVar5,auStack_e8,pcVar2);
  FUN_105973bcc();
  func_0x000105974164();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  func_0x000105974120();
  func_0x000105974128();
  func_0x000105974118();
  func_0x000105974140();
  func_0x0001059740c0(*(undefined8 *)(*plVar6 + 0x18));
  func_0x00010597415c();
  if (*(char *)(param_3 + 0xf) == '\x01') {
    plVar6 = *(long **)(param_5 + 0x10);
    uVar4 = param_3[0xe];
    func_0x000105974130();
    uStack_68 = 0x29;
    func_0x00010597409c();
    FUN_105973ba8(param_2);
    func_0x0001059740b4();
    func_0x00010597416c();
    __ZNSt3__19to_stringEi(auStack_d0,uVar4);
    FUN_105973c64(param_2,auStack_b8,auStack_d0);
    FUN_105973bcc();
    func_0x000105974164();
    func_0x000105974120();
    func_0x000105974128();
    func_0x000105974118();
    func_0x000105974140();
    func_0x0001059740c0(*(undefined8 *)(*plVar6 + 0x18));
    func_0x00010597415c();
  }
  return;
}



/* Entry: 105973ba8; end: 105973bcb;  */

undefined * FUN_105973ba8(uint param_1)

{
  if (param_1 < 5) {
    return (&PTR_DAT_1108c3f40)[param_1];
  }
  return &DAT_10f315dfc;
}



/* Entry: 105973bcc; end: 105973c63;  */

undefined8 FUN_105973bcc(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x12) & 0x3fff) < 3) {
    puVar2 = (&PTR_DAT_11310f028)[param_2 >> 0x10 & 0xffff];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x00010002b838(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x24) {
    puVar2 = (&PTR_DAT_11310f088)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  func_0x000100906e58(param_1,auStack_38,puVar2);
  func_0x000105974148();
  return param_1;
}



/* Entry: 105973c64; end: 105973c97;  */

long FUN_105973c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001000fecf4(param_1 + 8);
  func_0x0001000fecf4(param_1 + 8,param_3);
  return param_1;
}



/* Entry: 105973c98; end: 105973ce7;  */

void FUN_105973c98(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100902b18();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105973ce8; end: 105973cfb;  */

void FUN_105973ce8(void)

{
  func_0x000105973d08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105973cfc; end: 105973d17;  */

long FUN_105973cfc(long param_1)

{
  func_0x000105972560(param_1 + 0x90);
  (*(code *)**(undefined8 **)(param_1 + 0x60))();
  FUN_105972600(param_1 + 0x40);
  func_0x000105972624(param_1 + 0x30);
  func_0x000105972648(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 105973d18; end: 105973d2b;  */

void FUN_105973d18(void)

{
  func_0x000105973d34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105973d2c; end: 105973d43;  */

void FUN_105973d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105974098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105973d44; end: 105973d57;  */

void FUN_105973d44(void)

{
  FUN_105973ddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105973d58; end: 105973d67;  */

void FUN_105973d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105974098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105973d68; end: 105973ddb;  */

void FUN_105973d68(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&uStack_58);
  func_0x0001004a21bc(&uStack_58);
  func_0x0001004a21bc(&uStack_70);
  return;
}



/* Entry: 105973ddc; end: 105973de7;  */

void FUN_105973ddc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108c3d30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105973de8; end: 105973e0b;  */

void FUN_105973de8(long param_1)

{
  func_0x000100903f70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105973e0c; end: 105973e0f;  */

void FUN_105973e0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3dc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105973e10; end: 105973e23;  */

void FUN_105973e10(void)

{
  func_0x000105973e2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105973e24; end: 105973e37;  */

void FUN_105973e24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105974098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105973e38; end: 105973e5b;  */

void FUN_105973e38(long param_1)

{
  func_0x000100903f70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105973e5c; end: 105973e5f;  */

void FUN_105973e5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3e10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105973e60; end: 105973e73;  */

void FUN_105973e60(void)

{
  func_0x000105973e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105973e74; end: 105973e8f;  */

void FUN_105973e74(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105973e90; end: 105973ea3;  */

void FUN_105973e90(void)

{
  func_0x000105973eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105973ea4; end: 105973eb7;  */

void FUN_105973ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105974098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105973eb8; end: 105973f47;  */

undefined8 * FUN_105973eb8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_40 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010054fd68(auStack_40,1);
  FUN_105973f48(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010054ffb0();
  func_0x000100903fa8(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010054ffb0();
  func_0x0001059740dc();
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110880e60;
  puVar3[1] = 0;
  FUN_105973f90(puVar3 + 3);
  return puVar3;
}



/* Entry: 105973f48; end: 105973f8f;  */

undefined8 * FUN_105973f48(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110880e60;
  param_1[1] = 0;
  FUN_105973f90(param_1 + 3);
  return param_1;
}



/* Entry: 105973f90; end: 105973fef;  */

undefined8 FUN_105973f90(undefined8 param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000100903f34();
    } while (extraout_w10 != 0);
  }
  func_0x00010054fdd4(param_1,&uStack_30);
  func_0x000100554470(&uStack_30);
  return param_1;
}



/* Entry: 105973ff0; end: 105973ff3;  */

void FUN_105973ff0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3eb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105973ff4; end: 105974007;  */

void FUN_105973ff4(void)

{
  func_0x000105974010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105974008; end: 10597401f;  */

void FUN_105974008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105974098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105974020; end: 105974033;  */

void FUN_105974020(void)

{
  func_0x00010597403c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105974034; end: 105974047;  */

void FUN_105974034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105974098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105974048; end: 10597408f;  */

void FUN_105974048(long param_1)

{
  func_0x000100903f70();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105974090; end: 10597417b;  */

void FUN_105974090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105974098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10597417c; end: 10597421b;  */

undefined8 *
FUN_10597417c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c3f78;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10595dd78(param_1 + 7,param_4);
  uVar1 = *param_5;
  param_1[0x18] = param_5[1];
  param_1[0x17] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0x1a] = param_6[1];
  param_1[0x19] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0x1c] = param_7[1];
  param_1[0x1b] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  *(undefined4 *)(param_1 + 0x1d) = param_8;
  *(undefined4 *)((long)param_1 + 0xec) = param_9;
  return param_1;
}



/* Entry: 10597421c; end: 1059742af;  */

void FUN_10597421c(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_658 [376];
  undefined1 auStack_4e0 [248];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [32];
  undefined1 auStack_3b0 [32];
  undefined1 auStack_390 [40];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined **ppuStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  int iStack_148;
  long lStack_140;
  long alStack_138 [6];
  code *pcStack_108;
  undefined **ppuStack_100;
  long *plStack_f8;
  undefined8 uStack_d8;
  long lStack_68;
  undefined8 auStack_60 [5];
  undefined8 uStack_38;
  
  func_0x0001059759a4();
  lStack_68 = *param_3;
  uStack_38 = extraout_x8;
  (**(code **)(param_3[1] + 0x10))(auStack_60,param_3 + 1);
  plVar11 = &lStack_68;
  uVar13 = 0;
  FUN_1059742b0();
  func_0x0001059759d0(auStack_60[0]);
  func_0x00010597595c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001059759d0(auStack_60[0]);
  func_0x0001059759dc();
  lVar12 = param_2;
  func_0x0001059759a4();
  bVar3 = *(byte *)(lVar12 + 0x17);
  uVar8 = bVar3 == 0;
  uVar16 = *(ulong *)(lVar12 + 8);
  if (-1 < (char)bVar3) {
    uVar16 = (ulong)bVar3;
  }
  uStack_d8 = extraout_x8_00;
  if ((uVar16 == 0) || ((*(byte *)(param_2 + 0x20) & 1) == 0)) {
    plVar15 = *(long **)(param_1 + 0x28);
    func_0x000105975b54(&ppuStack_2d0,uVar13,param_2 + 0x30,*(undefined1 *)(param_2 + 0x48));
    (**(code **)(*plVar15 + 0x18))(plVar15,&ppuStack_2d0);
    func_0x000100907750(&ppuStack_2d0);
    if ((*(byte *)(plVar11[1] + 8) & 1) == 0) {
      func_0x000105975a18(*plVar11);
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      func_0x000105975ae4();
      func_0x000105975b4c();
    }
  }
  else {
    uVar16 = *(ulong *)(param_2 + 0xa8);
    iVar14 = (int)uVar13;
    if (((uVar16 >> 0x20 & 1) != 0) && (uVar8 = (uVar16 & 0xffffffff) == 1, !(bool)uVar8)) {
      plVar15 = *(long **)(param_1 + 0x28);
      cVar4 = *(char *)(param_2 + 0x48);
      uVar17 = (ulong)*(uint *)(param_2 + 0x4c);
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      puStack_2c8 = (undefined8 *)0x0;
      ppuStack_2d0 = &PTR_FUN_1108c28b8;
      uStack_2b0 = 0x30;
      uVar5 = 0x9001c;
      if (iVar14 == 1) {
        uVar5 = 0x9001d;
      }
      uVar2 = 0x9001e;
      if (iVar14 != 2) {
        uVar2 = uVar5;
      }
      pppuVar9 = &ppuStack_2d0;
      FUN_10596dbdc(pppuVar9,uVar2);
      func_0x000105975b40();
      func_0x00010002b838(&pcStack_108);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_320,param_2 + 0x30);
      FUN_105973c64(pppuVar9,&pcStack_108,&uStack_320);
      func_0x00010002b838(&ppuStack_338,&DAT_10f315e36);
      func_0x00010597597c();
      uVar8 = cVar4 == '\0';
      func_0x000105975b7c();
      func_0x00010002b838(auStack_350,&UNK_10f315e66);
      FUN_10596f7ec(uVar17);
      func_0x000105975b7c();
      func_0x00010002b838(auStack_368,&DAT_10f2ea2ca);
      func_0x0001059879b0(uVar16);
      func_0x000100906e58(uVar17,auStack_368,uVar16);
      FUN_10596dc7c(auStack_4e0,uVar17);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_368);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_350);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_338);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_320);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_108);
      func_0x000100907750(&ppuStack_2d0);
      (**(code **)(*plVar15 + 0x18))(plVar15,auStack_4e0);
      func_0x000100907750(auStack_4e0);
    }
    FUN_105972350(auStack_4e0,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (auStack_3e8,param_1 + 0x38);
    func_0x0001002a969c(auStack_3d0,param_1 + 0x50);
    func_0x0001002a969c(auStack_3b0,param_1 + 0x70);
    func_0x0001002a969c(auStack_390,param_1 + 0x90);
    if ((*(long *)(param_1 + 0xb8) == 0) || (*(long *)(param_1 + 200) == 0)) {
      FUN_10597266c(auStack_658,auStack_4e0);
      lStack_300 = *plVar11;
      func_0x000105975990();
      func_0x000105975b70();
      func_0x000105975970(uStack_2f8);
      FUN_10596db74(auStack_658);
    }
    else {
      ppuStack_2d0 = *(undefined ***)(param_1 + 8);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      if ((puVar10 == (undefined8 *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), puStack_2c8 = puVar10,
         puVar10 == (undefined8 *)0x0)) goto LAB_1059746f8;
      FUN_10597266c(&uStack_2c0,auStack_4e0);
      lStack_140 = *plVar11;
      iStack_148 = iVar14;
      (**(code **)(plVar11[1] + 0x10))(alStack_138,plVar11 + 1);
      puVar10 = (undefined8 *)0x60;
      __Znwm();
      plVar15 = puVar10 + 1;
      *plVar15 = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_FUN_1108c4020;
      pcStack_108 = FUN_1059751a8;
      ppuStack_100 = &PTR_FUN_1108c4060;
      plVar11 = (long *)0x1c0;
      __Znwm();
      ppuVar1 = (undefined **)(puVar10 + 3);
      plVar11[1] = (long)puStack_2c8;
      *plVar11 = (long)ppuStack_2d0;
      puStack_2c8 = (undefined8 *)0x0;
      ppuStack_2d0 = (undefined **)0x0;
      FUN_10597266c(plVar11 + 2,&uStack_2c0);
      *(int *)(plVar11 + 0x31) = iStack_148;
      plVar11[0x32] = lStack_140;
      (**(code **)(alStack_138[0] + 0x10))(plVar11 + 0x33,alStack_138);
      uStack_318 = *(undefined8 *)(param_1 + 0xd0);
      uStack_320 = *(undefined8 *)(param_1 + 200);
      plStack_f8 = plVar11;
      if (*(long *)(param_1 + 0xd0) != 0) {
        do {
          func_0x000105975a4c();
        } while (extraout_w10 != 0);
      }
      FUN_105975b98(ppuVar1,&pcStack_108,&uStack_320);
      func_0x000100558bb4(&uStack_320);
      (*(code *)*ppuStack_100)(&ppuStack_100);
      ppuStack_338 = ppuVar1;
      puStack_330 = puVar10;
      func_0x000105975290(0);
      FUN_105974c40(&ppuStack_2d0);
      uVar13 = *(undefined8 *)(param_1 + 0xb8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuStack_2d0 = ppuVar1;
      puStack_2c8 = puVar10;
      func_0x000105975ae4(uVar13);
      (*extraout_x8_01)();
      FUN_10595e484(&ppuStack_2d0);
      FUN_10597529c(&ppuStack_338);
    }
    FUN_10596db74(auStack_4e0);
  }
  func_0x00010597595c(uStack_d8);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_1059746f8:
  FUN_10527822c();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x105974700);
  (*pcVar7)();
}



/* Entry: 1059742b0; end: 1059747df;  */

void FUN_1059742b0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int iVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_5e8 [376];
  undefined1 auStack_470 [248];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [32];
  undefined1 auStack_340 [32];
  undefined1 auStack_320 [40];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined **ppuStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  int iStack_d8;
  long lStack_d0;
  long alStack_c8 [6];
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined8 uStack_68;
  
  lVar12 = param_2;
  func_0x0001059759a4();
  bVar3 = *(byte *)(lVar12 + 0x17);
  uVar8 = bVar3 == 0;
  uVar16 = *(ulong *)(lVar12 + 8);
  if (-1 < (char)bVar3) {
    uVar16 = (ulong)bVar3;
  }
  uStack_68 = extraout_x8;
  if ((uVar16 == 0) || ((*(byte *)(param_2 + 0x20) & 1) == 0)) {
    plVar14 = *(long **)(param_1 + 0x28);
    func_0x000105975b54(&ppuStack_260,param_3,param_2 + 0x30,*(undefined1 *)(param_2 + 0x48));
    (**(code **)(*plVar14 + 0x18))(plVar14,&ppuStack_260);
    func_0x000100907750(&ppuStack_260);
    if ((*(byte *)(param_4[1] + 8) & 1) == 0) {
      func_0x000105975a18(*param_4);
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      func_0x000105975ae4();
      func_0x000105975b4c();
    }
  }
  else {
    uVar16 = *(ulong *)(param_2 + 0xa8);
    iVar13 = (int)param_3;
    if (((uVar16 >> 0x20 & 1) != 0) && (uVar8 = (uVar16 & 0xffffffff) == 1, !(bool)uVar8)) {
      plVar14 = *(long **)(param_1 + 0x28);
      cVar4 = *(char *)(param_2 + 0x48);
      uVar17 = (ulong)*(uint *)(param_2 + 0x4c);
      uStack_250 = 0;
      uStack_248 = 0;
      puStack_258 = (undefined8 *)0x0;
      ppuStack_260 = &PTR_FUN_1108c28b8;
      uStack_240 = 0x30;
      uVar5 = 0x9001c;
      if (iVar13 == 1) {
        uVar5 = 0x9001d;
      }
      uVar2 = 0x9001e;
      if (iVar13 != 2) {
        uVar2 = uVar5;
      }
      pppuVar9 = &ppuStack_260;
      FUN_10596dbdc(pppuVar9,uVar2);
      func_0x000105975b40();
      func_0x00010002b838(&pcStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_2b0,param_2 + 0x30);
      FUN_105973c64(pppuVar9,&pcStack_98,&uStack_2b0);
      func_0x00010002b838(&ppuStack_2c8,&DAT_10f315e36);
      func_0x00010597597c();
      uVar8 = cVar4 == '\0';
      func_0x000105975b7c();
      func_0x00010002b838(auStack_2e0,&UNK_10f315e66);
      FUN_10596f7ec(uVar17);
      func_0x000105975b7c();
      func_0x00010002b838(auStack_2f8,&DAT_10f2ea2ca);
      func_0x0001059879b0(uVar16);
      func_0x000100906e58(uVar17,auStack_2f8,uVar16);
      FUN_10596dc7c(auStack_470,uVar17);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2f8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_2c8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_98);
      func_0x000100907750(&ppuStack_260);
      (**(code **)(*plVar14 + 0x18))(plVar14,auStack_470);
      func_0x000100907750(auStack_470);
    }
    FUN_105972350(auStack_470,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (auStack_378,param_1 + 0x38);
    func_0x0001002a969c(auStack_360,param_1 + 0x50);
    func_0x0001002a969c(auStack_340,param_1 + 0x70);
    func_0x0001002a969c(auStack_320,param_1 + 0x90);
    if ((*(long *)(param_1 + 0xb8) == 0) || (*(long *)(param_1 + 200) == 0)) {
      FUN_10597266c(auStack_5e8,auStack_470);
      lStack_290 = *param_4;
      func_0x000105975990();
      func_0x000105975b70();
      func_0x000105975970(uStack_288);
      FUN_10596db74(auStack_5e8);
    }
    else {
      ppuStack_260 = *(undefined ***)(param_1 + 8);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      if ((puVar10 == (undefined8 *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), puStack_258 = puVar10,
         puVar10 == (undefined8 *)0x0)) goto LAB_1059746f8;
      FUN_10597266c(&uStack_250,auStack_470);
      lStack_d0 = *param_4;
      iStack_d8 = iVar13;
      (**(code **)(param_4[1] + 0x10))(alStack_c8,param_4 + 1);
      puVar10 = (undefined8 *)0x60;
      __Znwm();
      plVar15 = puVar10 + 1;
      *plVar15 = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_FUN_1108c4020;
      pcStack_98 = FUN_1059751a8;
      ppuStack_90 = &PTR_FUN_1108c4060;
      plVar14 = (long *)0x1c0;
      __Znwm();
      ppuVar1 = (undefined **)(puVar10 + 3);
      plVar14[1] = (long)puStack_258;
      *plVar14 = (long)ppuStack_260;
      puStack_258 = (undefined8 *)0x0;
      ppuStack_260 = (undefined **)0x0;
      FUN_10597266c(plVar14 + 2,&uStack_250);
      *(int *)(plVar14 + 0x31) = iStack_d8;
      plVar14[0x32] = lStack_d0;
      (**(code **)(alStack_c8[0] + 0x10))(plVar14 + 0x33,alStack_c8);
      uStack_2a8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2b0 = *(undefined8 *)(param_1 + 200);
      plStack_88 = plVar14;
      if (*(long *)(param_1 + 0xd0) != 0) {
        do {
          func_0x000105975a4c();
        } while (extraout_w10 != 0);
      }
      FUN_105975b98(ppuVar1,&pcStack_98,&uStack_2b0);
      func_0x000100558bb4(&uStack_2b0);
      (*(code *)*ppuStack_90)(&ppuStack_90);
      ppuStack_2c8 = ppuVar1;
      puStack_2c0 = puVar10;
      func_0x000105975290(0);
      FUN_105974c40(&ppuStack_260);
      uVar11 = *(undefined8 *)(param_1 + 0xb8);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuStack_260 = ppuVar1;
      puStack_258 = puVar10;
      func_0x000105975ae4(uVar11);
      (*extraout_x8_00)();
      FUN_10595e484(&ppuStack_260);
      FUN_10597529c(&ppuStack_2c8);
    }
    FUN_10596db74(auStack_470);
  }
  func_0x00010597595c(uStack_68);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_1059746f8:
  FUN_10527822c();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x105974700);
  (*pcVar7)();
}



/* Entry: 1059747e0; end: 1059748cf;  */

void FUN_1059747e0(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  long *plVar5;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [40];
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  lVar4 = param_1;
  func_0x0001059759a4();
  uStack_38 = extraout_x8;
  if ((*(byte *)(lVar4 + 0xb0) & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x28);
    lVar4 = param_2 + 0x30;
    func_0x000105975b54(auStack_90,1,lVar4);
    func_0x000105975b64(*(undefined8 *)(*plVar5 + 0x18));
    func_0x000105975a3c();
    if ((*(byte *)(param_3[1] + 8) & 1) == 0) {
      func_0x000105975a18(*param_3);
    }
    param_1 = *(long *)(param_1 + 0xd8);
    if (param_1 != 0) {
      func_0x000105975ae4();
      lVar4 = 1;
      func_0x000105975b4c();
    }
  }
  else {
    uStack_68 = *param_3;
    func_0x000105975990();
    lVar4 = 1;
    FUN_1059742b0(param_1,param_2,1);
    func_0x000105975970(uStack_60);
  }
  func_0x00010597595c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000105975a3c();
  func_0x0001059759dc();
  puVar3 = auStack_1e0;
  iVar2 = 0xa0020;
  if (param_5 == 4) {
    iVar2 = 0xa0021;
  }
  iVar1 = 0xa001f;
  if (param_5 != 0) {
    iVar1 = iVar2;
  }
  if (iVar1 == 0xa0020) {
    func_0x00010002b838(auStack_198,(&PTR_s_Success_1108c3fe8)[param_5]);
    func_0x0001059759e4();
    FUN_10596dbdc(auStack_108);
    FUN_1059750a0();
    func_0x000105975b40();
    func_0x00010002b838(auStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_138,lVar4);
    func_0x000105975b5c();
    func_0x000105975b18();
    puVar3 = auStack_150;
    func_0x00010002b838(puVar3);
    func_0x00010597597c();
    func_0x000105975a44();
    func_0x00010002b838(auStack_168,&DAT_10f685520);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_180,auStack_198);
    FUN_105973c64(puVar3,auStack_168,auStack_180);
    FUN_10596dc7c(param_1,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    func_0x000105975b10();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
  }
  else {
    func_0x0001059759e4();
    FUN_10596dbdc(auStack_108);
    FUN_1059750a0();
    func_0x000105975b40();
    func_0x00010002b838(auStack_1b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c8,lVar4);
    func_0x000105975b5c();
    func_0x000105975b18();
    func_0x00010002b838(auStack_1e0);
    func_0x00010597597c();
    func_0x000105975a44();
    FUN_10596dc7c(param_1,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    func_0x000105975b10();
  }
  return;
}



/* Entry: 1059748d0; end: 105974b4f;  */

void FUN_1059748d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  
  puVar3 = auStack_150;
  iVar2 = 0xa0020;
  if (param_5 == 4) {
    iVar2 = 0xa0021;
  }
  iVar1 = 0xa001f;
  if (param_5 != 0) {
    iVar1 = iVar2;
  }
  if (iVar1 == 0xa0020) {
    func_0x00010002b838(auStack_108,(&PTR_s_Success_1108c3fe8)[param_5]);
    func_0x0001059759e4();
    FUN_10596dbdc(auStack_78);
    FUN_1059750a0();
    func_0x000105975b40();
    func_0x00010002b838(auStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a8,param_3);
    func_0x000105975b5c();
    func_0x000105975b18();
    puVar3 = auStack_c0;
    func_0x00010002b838(puVar3);
    func_0x00010597597c();
    func_0x000105975a44();
    func_0x00010002b838(auStack_d8,&DAT_10f685520);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f0,auStack_108)
    ;
    FUN_105973c64(puVar3,auStack_d8,auStack_f0);
    FUN_10596dc7c(param_1,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
    func_0x000105975b10();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  }
  else {
    func_0x0001059759e4();
    FUN_10596dbdc(auStack_78);
    FUN_1059750a0();
    func_0x000105975b40();
    func_0x00010002b838(auStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_138,param_3);
    func_0x000105975b5c();
    func_0x000105975b18();
    func_0x00010002b838(auStack_150);
    func_0x00010597597c();
    func_0x000105975a44();
    FUN_10596dc7c(param_1,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    func_0x000105975b10();
  }
  return;
}



/* Entry: 105974b50; end: 105974c3f;  */

long FUN_105974b50(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long *plVar2;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x0001059759a4();
  uStack_38 = extraout_x8;
  if ((*(byte *)(lVar1 + 0xb1) & 1) == 0) {
    plVar2 = *(long **)(param_1 + 0x28);
    func_0x000105975b54(auStack_90,2,param_2 + 0x30,*(undefined1 *)(param_2 + 0x48));
    func_0x000105975b64(*(undefined8 *)(*plVar2 + 0x18));
    func_0x000105975a3c();
    if ((*(byte *)(param_3[1] + 8) & 1) == 0) {
      func_0x000105975a18(*param_3);
    }
    param_1 = *(long *)(param_1 + 0xd8);
    if (param_1 != 0) {
      func_0x000105975ae4();
      func_0x000105975b4c();
    }
  }
  else {
    uStack_68 = *param_3;
    func_0x000105975990();
    FUN_1059742b0(param_1,param_2,2,&uStack_68);
    func_0x000105975970(uStack_60);
  }
  func_0x00010597595c(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar1 = param_1;
  func_0x000105975a3c();
  func_0x0001059759dc();
  (*(code *)**(undefined8 **)(lVar1 + 0x198))(lVar1 + 0x198);
  FUN_10596db74(lVar1 + 0x10);
  func_0x000100903f70();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105974c40; end: 105974c77;  */

undefined8 FUN_105974c40(long param_1)

{
  undefined8 unaff_x19;
  
  (*(code *)**(undefined8 **)(param_1 + 0x198))(param_1 + 0x198);
  FUN_10596db74(param_1 + 0x10);
  func_0x000100903f70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 105974c78; end: 105975043;  */

undefined8 * FUN_105974c78(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int iVar12;
  long *plVar13;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined2 uStack_13e;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  long alStack_108 [6];
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar7 = param_1;
  func_0x0001059759a4();
  uStack_78 = extraout_x8;
  func_0x0001004b4e98();
  iVar6 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x000105975ae4();
  (*extraout_x8_00)();
  plVar13 = *(long **)(param_1 + 0x28);
  puStack_180 = (undefined *)0x0;
  uStack_178 = 0;
  ppuStack_190 = &PTR_FUN_1108c28b8;
  uStack_188 = 0;
  uStack_170 = CONCAT44(uStack_170._4_4_,0x25);
  iVar12 = (int)param_3;
  uVar2 = 0x9001c;
  if (iVar12 == 1) {
    uVar2 = 0x9001d;
  }
  uVar1 = 0x9001e;
  if (iVar12 != 2) {
    uVar1 = uVar2;
  }
  pppuVar8 = &ppuStack_190;
  FUN_10596dbdc(pppuVar8,uVar1);
  func_0x000105975b40();
  func_0x00010002b838(auStack_1a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_1c0,param_2 + 0x30);
  FUN_105973c64(pppuVar8,auStack_1a8,auStack_1c0);
  puVar9 = auStack_1d8;
  func_0x00010002b838(puVar9,&DAT_10f315e36);
  func_0x00010597597c();
  func_0x000105975b7c();
  uVar5 = iVar6 == 0;
  FUN_105973bcc();
  FUN_10596dc7c(&iStack_200,puVar9);
  func_0x000105975b00();
  func_0x000105975b08();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
  func_0x000100907750(&ppuStack_190);
  (**(code **)(*plVar13 + 0x18))(plVar13,&iStack_200);
  func_0x000105975a3c();
  plVar13 = *(long **)(param_1 + 0x18);
  uStack_1fc = *(undefined4 *)(param_1 + 0xe8);
  uVar3 = (undefined1)iVar6;
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  iStack_200 = iVar12;
  uStack_1f8 = uVar3;
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      func_0x000105975a4c();
    } while (extraout_w10 != 0);
  }
  pcStack_a8 = FUN_1059752c8;
  ppuStack_a0 = &PTR_FUN_1108c4078;
  uStack_98 = CONCAT44(uStack_1fc,iStack_200);
  uStack_90 = uStack_1f8;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_188 = *(undefined8 *)(param_1 + 0x10);
  ppuStack_190 = *(undefined ***)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000105975a4c();
    } while (extraout_w10_00 != 0);
  }
  puStack_180 = &UNK_10f315e25;
  uStack_178 = CONCAT44(uStack_178._4_4_,iVar12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_170,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&uStack_158,param_2 + 0x30);
  uStack_140 = *(undefined1 *)(param_2 + 0x48);
  uStack_13c = *(undefined4 *)(param_1 + 0xec);
  uStack_130 = *(undefined8 *)(param_1 + 0x30);
  uStack_138 = *(undefined8 *)(param_1 + 0x28);
  uStack_13f = uVar3;
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      func_0x000105975a4c();
    } while (extraout_w10_01 != 0);
  }
  uStack_128 = 0;
  uStack_118 = 1;
  uStack_110 = *param_4;
  lStack_120 = lVar7;
  (**(code **)(param_4[1] + 0x10))(alStack_108,param_4 + 1);
  pcStack_d8 = FUN_105975458;
  ppuStack_d0 = &PTR_FUN_1108c4090;
  puVar10 = (undefined8 *)0xb0;
  __Znwm();
  uVar4 = uStack_148;
  puVar10[1] = uStack_188;
  *puVar10 = ppuStack_190;
  ppuStack_190 = (undefined **)0x0;
  uStack_188 = 0;
  puVar10[2] = puStack_180;
  *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_178;
  puVar10[5] = uStack_168;
  puVar10[4] = uStack_170;
  puVar10[6] = uStack_160;
  uStack_170 = 0;
  uStack_168 = 0;
  puVar10[8] = uStack_150;
  puVar10[7] = uStack_158;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  puVar10[9] = uVar4;
  puVar10[10] = CONCAT44(uStack_13c,CONCAT22(uStack_13e,CONCAT11(uStack_13f,uStack_140)));
  puVar10[0xc] = uStack_130;
  puVar10[0xb] = uStack_138;
  uStack_138 = 0;
  uStack_130 = 0;
  puVar10[0xe] = lStack_120;
  puVar10[0xd] = uStack_128;
  puVar10[0xf] = CONCAT71(uStack_117,uStack_118);
  puVar10[0x10] = uStack_110;
  (**(code **)(alStack_108[0] + 0x10))(puVar10 + 0x11,alStack_108);
  puStack_c8 = puVar10;
  (**(code **)(*plVar13 + 0x10))(plVar13,param_2,param_3,&pcStack_a8,&pcStack_d8);
  func_0x000105975970(ppuStack_d0);
  FUN_105975044(&ppuStack_190);
  func_0x000105975aac();
  puVar10 = &uStack_1f0;
  func_0x000100902b24();
  func_0x00010597595c(uStack_78);
  if ((bool)uVar5) {
    return puVar10;
  }
  ___stack_chk_fail();
  func_0x000105975970(ppuStack_d0);
  FUN_105975044(&ppuStack_190);
  func_0x000105975aac();
  puVar11 = &uStack_1f0;
  func_0x000100902b24();
  func_0x0001059759dc();
  (**(code **)puVar11[0x11])();
  func_0x000100902b24(puVar11 + 0xb);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11 + 7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar11 + 4);
  func_0x000100903f70();
  if (puVar11 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar10;
}



/* Entry: 105975044; end: 105975087;  */

undefined8 FUN_105975044(long param_1)

{
  undefined8 unaff_x19;
  
  (*(code *)**(undefined8 **)(param_1 + 0x88))();
  func_0x000100902b24(param_1 + 0x58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x000100903f70();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 105975088; end: 10597508b;  */

undefined8 * FUN_105975088(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3f78;
  func_0x000100903fbc(param_1 + 0x1b);
  func_0x000100558bb4(param_1 + 0x19);
  func_0x0001009048c0(param_1 + 0x17);
  FUN_10595cb44(param_1 + 7);
  func_0x000100902b24(param_1 + 5);
  func_0x000105972624(param_1 + 3);
  FUN_105974048(param_1 + 1);
  return param_1;
}



/* Entry: 10597508c; end: 10597509f;  */

void FUN_10597508c(void)

{
  FUN_105975118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059750a0; end: 105975117;  */

undefined8 FUN_1059750a0(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38,PTR_DAT_11310f078);
  if ((param_2 & 0x3f) < 0x24) {
    puVar1 = (&PTR_DAT_11310f088)[param_2 & 0x3f];
  }
  else {
    puVar1 = &UNK_10f3158c2;
  }
  func_0x000100906e58(param_1,auStack_38,puVar1);
  func_0x000105975b84();
  return param_1;
}



/* Entry: 105975118; end: 10597517f;  */

undefined8 * FUN_105975118(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3f78;
  func_0x000100903fbc(param_1 + 0x1b);
  func_0x000100558bb4(param_1 + 0x19);
  func_0x0001009048c0(param_1 + 0x17);
  FUN_10595cb44(param_1 + 7);
  func_0x000100902b24(param_1 + 5);
  func_0x000105972624(param_1 + 3);
  FUN_105974048(param_1 + 1);
  return param_1;
}



/* Entry: 105975180; end: 105975183;  */

void FUN_105975180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c4020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105975184; end: 105975197;  */

void FUN_105975184(void)

{
  FUN_10597527c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105975198; end: 1059751a7;  */

void FUN_105975198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059751a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1059751a8; end: 10597525b;  */

void FUN_1059751a8(undefined1 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined1 auStack_1f0 [376];
  undefined8 uStack_78;
  undefined8 auStack_70 [5];
  undefined8 uStack_48;
  
  puVar1 = auStack_1f0;
  func_0x0001059759a4();
  lVar2 = *(long *)(param_2 + 0x10);
  *(undefined1 *)(lVar2 + 0x59) = param_1;
  uStack_48 = extraout_x8;
  FUN_10597266c(auStack_1f0,lVar2 + 0x10);
  uStack_78 = *(undefined8 *)(lVar2 + 400);
  (**(code **)(*(long *)(lVar2 + 0x198) + 0x10))(auStack_70,lVar2 + 0x198);
  func_0x000105975b70();
  func_0x0001059759d0(auStack_70[0]);
  FUN_10596db74(auStack_1f0);
  func_0x00010597595c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001059759d0(auStack_70[0]);
  FUN_10596db74();
  func_0x0001059759dc();
  if (*(long *)(puVar1 + 8) != 0) {
    FUN_105974c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10597525c; end: 10597527b;  */

void FUN_10597525c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105974c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10597527c; end: 10597529b;  */

void FUN_10597527c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10597529c; end: 1059752c7;  */

long FUN_10597529c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1059752c8; end: 105975423;  */

void FUN_1059752c8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar5 = *(long **)(param_2 + 0x20);
  iVar3 = *(int *)(param_2 + 0x14);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_FUN_1108c28b8;
  uStack_60 = 0;
  uStack_48 = 0x26;
  uVar4 = 0x9001c;
  if (*(int *)(param_2 + 0x10) == 1) {
    uVar4 = 0x9001d;
  }
  uVar1 = 0x9001e;
  if (*(int *)(param_2 + 0x10) != 2) {
    uVar1 = uVar4;
  }
  FUN_10596dbdc(&ppuStack_68,uVar1);
  func_0x00010002b838(auStack_80,&UNK_10f315dd1);
  FUN_105973ba8(param_1);
  func_0x000105975a44();
  func_0x00010002b838(auStack_98,&UNK_10f315e77);
  puVar2 = &UNK_10f315d13;
  if (iVar3 != 1) {
    puVar2 = &UNK_10f315cff;
  }
  func_0x000100906e58(param_1,auStack_98,puVar2);
  FUN_105973bcc();
  FUN_10596dc7c(auStack_c0,param_1);
  func_0x000105975b00();
  func_0x000105975b08();
  func_0x000100907750(&ppuStack_68);
  (**(code **)(*plVar5 + 0x18))(plVar5,auStack_c0);
  func_0x000105975a3c();
  return;
}



/* Entry: 105975424; end: 105975457;  */

void FUN_105975424(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x000100902b18();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105975458; end: 10597591b;  */

void FUN_105975458(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 auStack_140 [2];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = auStack_140;
  puVar2 = auStack_140;
  plVar8 = *(long **)(param_2 + 0x10);
  auStack_140[0] = *param_1;
  uStack_130 = *(undefined8 *)(param_1 + 4);
  uStack_138 = *(undefined8 *)(param_1 + 2);
  uStack_128 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uStack_118 = *(undefined8 *)(param_1 + 10);
  uStack_120 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uStack_110 = *(undefined8 *)(param_1 + 0xc);
  uStack_108 = *(ulong *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  uStack_100 = param_1[0x10];
  func_0x0001005529b4(plVar8 + 0xd);
  func_0x00010596f440(auStack_140);
  func_0x000105970ec0(auStack_140);
  plVar6 = (long *)plVar8[0xb];
  FUN_1059748d0(&ppuStack_88,(int)plVar8[3],plVar8 + 7,(char)plVar8[10],puVar2);
  func_0x000105975b28();
  plVar3 = plVar6;
  (*extraout_x8)(plVar6,&ppuStack_88);
  func_0x000105975a34();
  func_0x000105975b34();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_FUN_1108c28b8;
  lStack_80 = 0;
  uStack_68 = 0x2a;
  FUN_10596dbdc();
  func_0x000105975ad4();
  func_0x00010596f4e8(puVar1);
  func_0x000100906e58(plVar3,auStack_a0,puVar1);
  func_0x00010002b838(auStack_b8,&UNK_10f315ded);
  func_0x000105975a44();
  FUN_105973bcc();
  func_0x000105975aa4();
  func_0x000105975a5c();
  func_0x000105975a94();
  func_0x000105975a34();
  func_0x000105975b28();
  func_0x0001059759b4();
  func_0x000105975a9c();
  func_0x000105975b34();
  func_0x000105975a24();
  func_0x000105975940();
  func_0x000105975adc();
  func_0x000105975ac0();
  __ZNSt3__19to_stringEi(auStack_b8,auStack_140[0]);
  func_0x0001059759c0();
  func_0x00010002b838(auStack_d0,&UNK_10f315e10);
  func_0x000105975a44();
  FUN_105973bcc();
  func_0x000105975aa4();
  func_0x000105975b90();
  func_0x000105975a5c();
  func_0x000105975a94();
  func_0x000105975a34();
  func_0x000105975b28();
  func_0x0001059759b4();
  func_0x000105975a9c();
  if (uStack_108._4_1_ == '\x01') {
    func_0x000105975b34();
    uVar7 = uStack_108 & 0xffffffff;
    func_0x000105975a24();
    func_0x000105975940();
    func_0x000105975adc();
    func_0x000105975ad4();
    __ZNSt3__19to_stringEi(auStack_b8,uVar7);
    func_0x000105975b5c();
    FUN_105973bcc();
    func_0x000105975aa4();
    func_0x000105975a5c();
    func_0x000105975a94();
    func_0x000105975a34();
    func_0x000105975b28();
    func_0x0001059759b4();
    func_0x000105975a9c();
  }
  if (uStack_100._1_1_ == '\x01') {
    func_0x000105975b34();
    func_0x000105975a24();
    func_0x000105975940();
    func_0x000105975adc();
    func_0x000105975ac0();
    __ZNSt3__19to_stringEi(auStack_b8,auStack_140[0]);
    func_0x0001059759c0();
    FUN_105973bcc();
    func_0x000105975aa4();
    func_0x000105975a5c();
    func_0x000105975a94();
    func_0x000105975a34();
    func_0x000105975b28();
    func_0x0001059759b4();
    func_0x000105975a9c();
  }
  func_0x000105975b34();
  func_0x000105975a24();
  func_0x000105975940();
  func_0x000105975adc();
  func_0x000105975b40();
  func_0x000105975ad4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8,plVar8 + 7);
  func_0x0001059759c0();
  func_0x000105975b18();
  func_0x00010002b838(auStack_d0);
  func_0x00010597597c();
  func_0x000105975a44();
  func_0x000105975aa4();
  func_0x000105975b90();
  func_0x000105975a5c();
  func_0x000105975a94();
  func_0x000105975a34();
  ppuVar4 = (undefined **)(plVar8 + 0xd);
  func_0x0001005e3518();
  ppuStack_88 = ppuVar4;
  (**(code **)(*plVar6 + 0x20))(plVar6,auStack_f8,&ppuStack_88);
  func_0x000105975a9c();
  if ((*(byte *)(plVar8[0x11] + 8) & 1) == 0) {
    (*(code *)plVar8[0x10])(puVar2);
  }
  ppuStack_88 = (undefined **)0x0;
  lStack_80 = 0;
  lVar5 = plVar8[1];
  if ((((lVar5 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_80 = lVar5, lVar5 != 0))
      && (ppuStack_88 = (undefined **)*plVar8, ppuStack_88 != (undefined **)0x0)) &&
     (ppuStack_88[0x1b] != (undefined *)0x0)) {
    func_0x000105975ae4();
    (*extraout_x8_00)();
  }
  func_0x00010597406c(&ppuStack_88);
  func_0x000100601c8c(auStack_140);
  return;
}



/* Entry: 10597591c; end: 10597593b;  */

void FUN_10597591c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105975044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10597593c; end: 105975b97;  */

void FUN_10597593c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105975b98; end: 105975be3;  */

undefined8 * FUN_105975b98(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_1108c40b8;
  param_1[1] = uVar1;
  (**(code **)(param_2[1] + 0x10))(param_1 + 2);
  uVar1 = *param_3;
  param_1[8] = param_3[1];
  param_1[7] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  return param_1;
}



/* Entry: 105975be4; end: 105975d6f;  */

code ** FUN_105975be4(long param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code **ppcVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long alStack_c0 [5];
  undefined1 uStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = *(undefined8 **)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 8);
  plVar6 = alStack_c0;
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  uStack_98 = param_2;
  func_0x00010028c49c();
  lVar9 = puVar8[2];
  __ZNSt3__15mutex4lockEv(lVar9 + 8);
  lVar10 = *(long *)(lVar9 + 0x70);
  pcStack_90 = FUN_105975dc8;
  ppuStack_88 = &PTR_FUN_1108c40f8;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  *puVar4 = uVar7;
  (**(code **)(alStack_c0[0] + 0x10))(puVar4 + 1,alStack_c0);
  *(undefined1 *)(puVar4 + 6) = uStack_98;
  puStack_80 = puVar4;
  plStack_60 = plVar6;
  func_0x0001005760fc(lVar9 + 0x48,&pcStack_90);
  func_0x000105975e50();
  ppcVar5 = (code **)(lVar9 + 8);
  __ZNSt3__15mutex6unlockEv();
  if (lVar10 == 0) {
    plVar6 = (long *)*puVar8;
    ppuStack_88 = (undefined **)puVar8[3];
    pcStack_90 = (code *)puVar8[2];
    if (puVar8[3] != 0) {
      plVar1 = (long *)(puVar8[3] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,&pcStack_90);
    ppcVar5 = &pcStack_90;
    func_0x000100576684();
  }
  func_0x000105975e40();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppcVar5;
  }
  ___stack_chk_fail();
  func_0x000100576684(&pcStack_90);
  func_0x000105975e40();
  __Unwind_Resume();
  *ppcVar5 = (code *)&PTR_FUN_1108c40b8;
  func_0x000100558bb4(ppcVar5 + 7);
  (**(code **)ppcVar5[2])();
  return ppcVar5;
}



/* Entry: 105975d70; end: 105975d73;  */

undefined8 * FUN_105975d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c40b8;
  func_0x000100558bb4(param_1 + 7);
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 105975d74; end: 105975d87;  */

void FUN_105975d74(void)

{
  FUN_105975d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105975d88; end: 105975dc7;  */

undefined8 * FUN_105975d88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c40b8;
  func_0x000100558bb4(param_1 + 7);
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 105975dc8; end: 105975de7;  */

void FUN_105975dc8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((*(byte *)(puVar1[1] + 8) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105975de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(*(undefined1 *)(puVar1 + 6));
  return;
}



/* Entry: 105975de8; end: 105975e27;  */

void FUN_105975de8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 105975e28; end: 105975e5f;  */

void FUN_105975e28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105975e60; end: 105975ecf;  */

uint FUN_105975e60(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined1 auStack_68 [72];
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000105976078();
    func_0x000105976030();
    func_0x000105976070();
    func_0x000105976068();
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x38))(plVar1,auStack_68);
    func_0x000105976060();
    if (((ulong)plVar1 & 0x100) != 0) {
      param_3 = (uint)plVar1;
    }
  }
  return param_3 & 1;
}



/* Entry: 105975ed0; end: 105975f47;  */

undefined1  [16] FUN_105975ed0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_68 [72];
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = 0;
    plVar1 = (long *)0x0;
  }
  else {
    func_0x000105976078();
    func_0x000105976030();
    func_0x000105976070();
    func_0x000105976068();
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = auStack_68;
    (**(code **)(*plVar1 + 0x40))(plVar1,puVar2);
    func_0x000105976060();
    uVar3 = (ulong)puVar2 & 0xff;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 105975f48; end: 105975faf;  */

void FUN_105975f48(undefined1 *param_1,long param_2)

{
  undefined1 auStack_68 [72];
  
  if (*(long *)(param_2 + 8) == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    func_0x000105976078();
    func_0x000105976030();
    func_0x000105976070();
    func_0x000105976068();
    (**(code **)(**(long **)(param_2 + 8) + 0x28))(param_1,*(long **)(param_2 + 8),auStack_68);
    func_0x000105976060();
  }
  return;
}



/* Entry: 105975fb0; end: 10597601b;  */

void FUN_105975fb0(undefined1 *param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_68 [72];
  
  plVar1 = *(long **)(param_2 + 8);
  if (plVar1 == (long *)0x0) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    func_0x000105976078();
    func_0x000105976030();
    (**(code **)(*plVar1 + 0x30))(param_1,plVar1,auStack_68);
    func_0x000105976060();
    func_0x000105976070();
    func_0x000105976068();
  }
  return;
}



/* Entry: 10597601c; end: 10597602f;  */

void FUN_10597601c(void)

{
  func_0x000100904878();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105976030; end: 105976093;  */

void FUN_105976030(void)

{
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000040 = in_stack_00000028;
  uStack0000000000000038 = in_stack_00000020;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack0000000000000048 = in_stack_00000030;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0xc;
  uStack0000000000000070 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000078 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_48);
  func_0x000107c60ca0(&uStack_30);
  return;
}



/* Entry: 105976094; end: 1059760eb;  */

void FUN_105976094(undefined8 param_1)

{
  func_0x000100902384(param_1,8);
  func_0x000100902588();
  func_0x000100902688();
  return;
}



/* Entry: 1059760ec; end: 1059760ef;  */

void FUN_1059760ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c4188;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1059760f0; end: 105976103;  */

void FUN_1059760f0(void)

{
  FUN_105976104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105976104; end: 105976117;  */

void FUN_105976104(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105976118; end: 1059761c3;  */

void FUN_105976118(long param_1)

{
  long extraout_x8;
  long *plVar1;
  undefined8 auStack_48 [2];
  undefined1 auStack_38 [24];
  
  plVar1 = *(long **)(param_1 + 0x28);
  if ((plVar1 != (long *)0x0) && (*(char *)(param_1 + 0x9c) == '\x01')) {
    func_0x00010002b838(auStack_38,&UNK_10f315f45);
    func_0x00010597686c(*(undefined8 *)(*plVar1 + 0x20));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    func_0x000100927ad8(auStack_48,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    func_0x000100927bac(auStack_48[0]);
    func_0x00010597686c(*(undefined8 *)(extraout_x8 + 0x30));
    func_0x000100572210(auStack_38);
    func_0x000100927c70();
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  return;
}



/* Entry: 1059761c4; end: 1059765e3;  */

void FUN_1059761c4(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *plVar9;
  ulong uVar10;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_170;
  undefined ***pppuStack_168;
  int *piStack_160;
  undefined8 uStack_158;
  int *piStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined ***pppuStack_138;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  long alStack_e0 [2];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined *apuStack_a0 [3];
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)(param_1 + 0x48);
  func_0x000100904468(alStack_e0);
  if (alStack_e0[0] == 0) {
LAB_105976328:
    func_0x0001009044a8(alStack_e0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x000100906d98(uVar2);
    (*extraout_x8)();
    pcStack_78 = FUN_1059766ec;
    ppuStack_70 = &PTR_FUN_1108c4358;
    ppuStack_100 = &PTR_FUN_1108c5d10;
    uStack_f8 = 0;
    puStack_f0 = &DAT_11383d918;
    uStack_e8 = 0;
    pppuVar3 = (undefined ***)*param_2;
    lStack_68 = param_1;
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = (undefined ***)0x0;
LAB_105976280:
      plVar4 = (long *)0x0;
    }
    else {
      func_0x000100906d98();
      (*extraout_x8_00)();
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) goto LAB_105976280;
      (**(code **)(*plVar4 + 0x18))();
    }
    pppuVar5 = &ppuStack_100;
    func_0x00010006369c(pppuVar5,pppuVar3,plVar4);
    if (((ulong)pppuVar5 & 1) != 0) {
      uVar10 = uStack_e8 & 0xffffffff;
      uStack_7c = (undefined4)uStack_e8;
      uVar6 = uVar10;
      FUN_105986790();
      param_2 = *(long **)(param_1 + 0x58);
      iStack_80 = (int)uVar6;
      func_0x000100906d98();
      (*extraout_x8_01)();
      iStack_84 = (int)param_2;
      if ((int)uVar6 != iStack_84) {
        plVar9 = *(long **)(param_1 + 0x68);
        piStack_160 = (int *)0x0;
        uStack_158 = 0;
        ppuStack_170 = &PTR_FUN_1108c28b8;
        pppuStack_168 = (undefined ***)0x0;
        piStack_150 = (int *)CONCAT44(piStack_150._4_4_,0xf);
        func_0x00010002b838(&uStack_1e0,&DAT_10f2f896e);
        func_0x00010598690c(uVar10);
        pppuVar3 = &ppuStack_170;
        func_0x000100906e58(pppuVar3,&uStack_1e0,uVar10);
        func_0x00010002b838(apuStack_a0,&UNK_10f315f8d);
        plVar4 = param_2;
        func_0x00010598704c(param_2);
        func_0x000100906e58(pppuVar3,apuStack_a0,plVar4);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_a0);
        func_0x000105976838();
        func_0x000100907750(&ppuStack_170);
        func_0x000105976840();
        func_0x00010597688c();
        piStack_160 = (int *)0xbc;
        uStack_158 = 0;
        func_0x000105976824();
        func_0x000105976848(auStack_d0);
        puVar8 = auStack_d0;
        func_0x0001005d466c();
        ppuStack_170 = (undefined **)&uStack_7c;
        pppuStack_168 = (undefined ***)FUN_105976768;
        piStack_160 = &iStack_80;
        uStack_158 = 0x1059767c4;
        piStack_150 = &iStack_84;
        uStack_148 = 0x1059767c4;
        puStack_140 = puVar8;
        pppuStack_138 = pppuVar3;
        func_0x0001003a91d4(&UNK_10f315f96);
        func_0x0001003a9204(auStack_b8);
        FUN_1052768d8(param_2,auStack_b8);
        func_0x000105976808();
        goto LAB_1059764dc;
      }
      FUN_1059872d8(&uStack_1e0,&ppuStack_100,uVar2);
      FUN_105966214(&ppuStack_170,&uStack_1e0);
      func_0x00010595cb7c(&uStack_1e0);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      func_0x000100906d98(alStack_e0[0]);
      pppuVar3 = &ppuStack_170;
      (*extraout_x8_02)();
      func_0x00010595cc04(&uStack_1e0);
      func_0x00010595cb7c(&ppuStack_170);
      FUN_10598a9cc(&ppuStack_100);
      func_0x0001005ed4a0(&pcStack_78);
      goto LAB_105976328;
    }
  }
  func_0x000105976840();
  func_0x00010597688c();
  piStack_160 = (int *)0x76;
  uStack_158 = 0;
  func_0x000105976824();
  func_0x000105976848(apuStack_a0);
  ppuVar7 = apuStack_a0;
  func_0x0001005d466c();
  ppuStack_170 = ppuVar7;
  pppuStack_168 = pppuVar3;
  func_0x0001003a91d4(&UNK_10f315f49);
  func_0x0001003a9204(&uStack_1e0);
  FUN_1052768d8(param_2,&uStack_1e0);
  func_0x000105976808();
LAB_1059764dc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1059764e0);
  (*pcVar1)();
}



/* Entry: 1059765e4; end: 1059765f3;  */

void FUN_1059765e4(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  long *plVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long *plVar9;
  ulong uVar10;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_170;
  undefined ***pppuStack_168;
  int *piStack_160;
  undefined8 uStack_158;
  int *piStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  undefined ***pppuStack_138;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  long alStack_e0 [2];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined *apuStack_a0 [3];
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)(param_1 + 0x40);
  func_0x000100904468(alStack_e0);
  if (alStack_e0[0] == 0) {
LAB_105976328:
    func_0x0001009044a8(alStack_e0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x000100906d98(uVar2);
    (*extraout_x8)();
    pcStack_78 = FUN_1059766ec;
    ppuStack_70 = &PTR_FUN_1108c4358;
    ppuStack_100 = &PTR_FUN_1108c5d10;
    uStack_f8 = 0;
    puStack_f0 = &DAT_11383d918;
    uStack_e8 = 0;
    pppuVar3 = (undefined ***)*param_2;
    lStack_68 = param_1 + -8;
    if (pppuVar3 == (undefined ***)0x0) {
      pppuVar3 = (undefined ***)0x0;
LAB_105976280:
      plVar4 = (long *)0x0;
    }
    else {
      func_0x000100906d98();
      (*extraout_x8_00)();
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) goto LAB_105976280;
      (**(code **)(*plVar4 + 0x18))();
    }
    pppuVar5 = &ppuStack_100;
    func_0x00010006369c(pppuVar5,pppuVar3,plVar4);
    if (((ulong)pppuVar5 & 1) != 0) {
      uVar10 = uStack_e8 & 0xffffffff;
      uStack_7c = (undefined4)uStack_e8;
      uVar6 = uVar10;
      FUN_105986790();
      param_2 = *(long **)(param_1 + 0x50);
      iStack_80 = (int)uVar6;
      func_0x000100906d98();
      (*extraout_x8_01)();
      iStack_84 = (int)param_2;
      if ((int)uVar6 != iStack_84) {
        plVar9 = *(long **)(param_1 + 0x60);
        piStack_160 = (int *)0x0;
        uStack_158 = 0;
        ppuStack_170 = &PTR_FUN_1108c28b8;
        pppuStack_168 = (undefined ***)0x0;
        piStack_150 = (int *)CONCAT44(piStack_150._4_4_,0xf);
        func_0x00010002b838(&uStack_1e0,&DAT_10f2f896e);
        func_0x00010598690c(uVar10);
        pppuVar3 = &ppuStack_170;
        func_0x000100906e58(pppuVar3,&uStack_1e0,uVar10);
        func_0x00010002b838(apuStack_a0,&UNK_10f315f8d);
        plVar4 = param_2;
        func_0x00010598704c(param_2);
        func_0x000100906e58(pppuVar3,apuStack_a0,plVar4);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_a0);
        func_0x000105976838();
        func_0x000100907750(&ppuStack_170);
        func_0x000105976840();
        func_0x00010597688c();
        piStack_160 = (int *)0xbc;
        uStack_158 = 0;
        func_0x000105976824();
        func_0x000105976848(auStack_d0);
        puVar8 = auStack_d0;
        func_0x0001005d466c();
        ppuStack_170 = (undefined **)&uStack_7c;
        pppuStack_168 = (undefined ***)FUN_105976768;
        piStack_160 = &iStack_80;
        uStack_158 = 0x1059767c4;
        piStack_150 = &iStack_84;
        uStack_148 = 0x1059767c4;
        puStack_140 = puVar8;
        pppuStack_138 = pppuVar3;
        func_0x0001003a91d4(&UNK_10f315f96);
        func_0x0001003a9204(auStack_b8);
        FUN_1052768d8(param_2,auStack_b8);
        func_0x000105976808();
        goto LAB_1059764dc;
      }
      FUN_1059872d8(&uStack_1e0,&ppuStack_100,uVar2);
      FUN_105966214(&ppuStack_170,&uStack_1e0);
      func_0x00010595cb7c(&uStack_1e0);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      func_0x000100906d98(alStack_e0[0]);
      pppuVar3 = &ppuStack_170;
      (*extraout_x8_02)();
      func_0x00010595cc04(&uStack_1e0);
      func_0x00010595cb7c(&ppuStack_170);
      FUN_10598a9cc(&ppuStack_100);
      func_0x0001005ed4a0(&pcStack_78);
      goto LAB_105976328;
    }
  }
  func_0x000105976840();
  func_0x00010597688c();
  piStack_160 = (int *)0x76;
  uStack_158 = 0;
  func_0x000105976824();
  func_0x000105976848(apuStack_a0);
  ppuVar7 = apuStack_a0;
  func_0x0001005d466c();
  ppuStack_170 = ppuVar7;
  pppuStack_168 = pppuVar3;
  func_0x0001003a91d4(&UNK_10f315f49);
  func_0x0001003a9204(&uStack_1e0);
  FUN_1052768d8(param_2,&uStack_1e0);
  func_0x000105976808();
LAB_1059764dc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1059764e0);
  (*pcVar1)();
}



/* Entry: 1059765f4; end: 105976607;  */

void FUN_1059765f4(void)

{
  FUN_105976628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105976608; end: 105976627;  */

long FUN_105976608(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + -8;
  func_0x0001009041f0(&PTR_DAT_1108c4228);
  func_0x000100902aac(lVar1 + 0x88);
  func_0x000100902af4(param_1 + 0x70);
  func_0x000100902b24(param_1 + 0x60);
  func_0x0001009044cc(param_1 + 0x50);
  func_0x0001009044f0(param_1 + 0x40);
  func_0x000100554470(param_1 + 0x30);
  func_0x00010048d450(param_1 + 0x20);
  func_0x000100904514(param_1 + 0x10);
  return param_1 + -8;
}



/* Entry: 105976628; end: 10597668f;  */

long FUN_105976628(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001009041f0(&PTR_DAT_1108c4228);
  func_0x000100902aac(lVar1 + 0x88);
  func_0x000100902af4(param_1 + 0x78);
  func_0x000100902b24(param_1 + 0x68);
  func_0x0001009044cc(param_1 + 0x58);
  func_0x0001009044f0(param_1 + 0x48);
  func_0x000100554470(param_1 + 0x38);
  func_0x00010048d450(param_1 + 0x28);
  func_0x000100904514(param_1 + 0x18);
  return param_1;
}



/* Entry: 105976690; end: 1059766eb;  */

undefined8 *
FUN_105976690(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x0001005d466c();
  puVar1 = param_2;
  func_0x0001005d466c();
  *param_1 = uVar2;
  param_1[1] = 0;
  param_1[2] = param_3;
  param_1[3] = param_2;
  param_1[4] = param_4;
  param_1[5] = puVar1;
  return param_1;
}



/* Entry: 1059766ec; end: 10597674f;  */

void FUN_1059766ec(long param_1)

{
  long *plVar1;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x68);
  uStack_38 = 0;
  uStack_30 = 0;
  ppuStack_48 = &PTR_FUN_1108c28b8;
  uStack_40 = 0;
  uStack_28 = 0x10;
  (**(code **)(*plVar1 + 0x18))(plVar1,&ppuStack_48);
  func_0x000100907750(&ppuStack_48);
  return;
}



/* Entry: 105976750; end: 105976767;  */

void FUN_105976750(void)

{
  return;
}



/* Entry: 105976768; end: 1059767fb;  */

void FUN_105976768(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x000105976794(puVar1,*param_1);
  *param_3 = (long)puVar1;
  return;
}


