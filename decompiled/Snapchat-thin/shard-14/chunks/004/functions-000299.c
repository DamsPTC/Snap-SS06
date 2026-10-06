/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b23e12c; end: 10b23e18b;  */

void FUN_10b23e12c(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010b23e9d8();
  FUN_10b23d4a8(auStack_38);
  func_0x00010b23e830();
  func_0x00010b23ead4();
  FUN_10b23dcac();
  func_0x00010b23e8a8();
  func_0x00010b23eb58();
  func_0x00010b23e8e0();
  func_0x00010b23e920();
  return;
}



/* Entry: 10b23e18c; end: 10b23e27b;  */

void FUN_10b23e18c(void)

{
  undefined **ppuVar1;
  long *unaff_x19;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [48];
  long lStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  func_0x00010b23e9d8();
  func_0x00010b23ea84();
  func_0x000107c278b8(auStack_90);
  FUN_10b23dcac(auStack_48);
  func_0x00010b23e8e0();
  func_0x00010b23ec54();
  if (*(int *)(lStack_60 + 0x2c) == 4) {
    ppuVar1 = *(undefined ***)(lStack_60 + 0x20);
  }
  else {
    ppuVar1 = &PTR_PTR_113372ee0;
  }
  FUN_10b235c7c(auStack_90,ppuVar1);
  FUN_10b23d6a4(&lStack_a8);
  if (lStack_a8 != lStack_a0) {
    func_0x00010b23ec70();
    unaff_x19[1] = lStack_58;
    *unaff_x19 = lStack_60;
  }
  func_0x00010b23eca0();
  func_0x00010b23eb68();
  func_0x00010b23eb80();
  func_0x00010b23ea38();
  return;
}



/* Entry: 10b23e27c; end: 10b23e367;  */

void FUN_10b23e27c(undefined8 *param_1)

{
  undefined1 *puVar1;
  long extraout_x8;
  code *extraout_x9;
  undefined1 auStack_90 [24];
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  char cStack_38;
  
  func_0x00010b23e9d8();
  func_0x00010b23ea24(*param_1);
  (*extraout_x9)();
  func_0x00010b23ea78();
  (**(code **)(extraout_x8 + 0x58))(auStack_60);
  if (cStack_38 == '\x01') {
    FUN_10b23e6cc(&puStack_78,uStack_50,0,auStack_90);
    puVar1 = puStack_78;
    while (puVar1 != auStack_70) {
      func_0x00010b23ec34(auStack_90);
      func_0x00010b23ebd8();
      func_0x000107c27b9c();
      func_0x00010b23e8b8();
      func_0x000107c27be0();
    }
    func_0x000108992e04(&puStack_78);
  }
  func_0x000107c27bb0(auStack_60);
  return;
}



/* Entry: 10b23e368; end: 10b23e3d7;  */

long FUN_10b23e368(long param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  
  if (param_5 == 0) {
    return -1;
  }
  if (param_4 < param_2) {
    param_2 = param_4 + 1;
  }
  lVar2 = -param_2;
  do {
    if (lVar2 == 0) {
      return -1;
    }
    func_0x00010b23ecfc();
    func_0x000107c2bedc();
    lVar2 = lVar2 + 1;
    bVar1 = param_1 == 0;
    param_1 = 0;
  } while (bVar1);
  return -lVar2;
}



/* Entry: 10b23e3d8; end: 10b23e577;  */

void FUN_10b23e3d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x60);
  }
  *puVar1 = &PTR_FUN_110ceb828;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  return;
}



/* Entry: 10b23e578; end: 10b23e57b;  */

void FUN_10b23e578(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cca4b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b23e57c; end: 10b23e58f;  */

void FUN_10b23e57c(void)

{
  func_0x00010b23e59c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b23e590; end: 10b23e5f7;  */

undefined8 FUN_10b23e590(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107293af4(param_1 + 0x18,*(undefined8 *)(param_1 + 0x28));
  func_0x00010729ef9c(param_1 + 0x18);
  func_0x000107293634();
  return unaff_x19;
}



/* Entry: 10b23e5f8; end: 10b23e60b;  */

void FUN_10b23e5f8(void)

{
  FUN_10b23e634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b23e60c; end: 10b23e633;  */

long FUN_10b23e60c(long param_1)

{
  func_0x00010b23e4e4(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 0x18;
}



/* Entry: 10b23e634; end: 10b23e647;  */

void FUN_10b23e634(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b23e648; end: 10b23e65b;  */

void FUN_10b23e648(void)

{
  func_0x00010b23e668();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b23e65c; end: 10b23e673;  */

long FUN_10b23e65c(long param_1)

{
  func_0x00010b4898d4();
  func_0x000107c2a450(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 10b23e674; end: 10b23e69b;  */

long FUN_10b23e674(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b23e69c; end: 10b23e69f;  */

void FUN_10b23e69c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cca5a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b23e6a0; end: 10b23e6b3;  */

void FUN_10b23e6a0(void)

{
  func_0x00010b23e6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b23e6b4; end: 10b23e6cb;  */

void FUN_10b23e6b4(long param_1)

{
  func_0x000100292090(param_1 + 0x18);
  func_0x0001002920c4();
  return;
}



/* Entry: 10b23e6cc; end: 10b23e70b;  */

undefined8 * FUN_10b23e6cc(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10b23e70c();
  return param_1;
}



/* Entry: 10b23e70c; end: 10b23e74b;  */

void FUN_10b23e70c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  
  func_0x00010b23ec04();
  for (; unaff_x20 != (long *)param_3; unaff_x20 = (long *)*unaff_x20) {
    FUN_10b23e74c();
  }
  return;
}



/* Entry: 10b23e74c; end: 10b23e753;  */

undefined1  [16] FUN_10b23e74c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x000108992bbc(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x50;
    __Znwm();
    uStack_58 = 0;
    lStack_68 = lVar3;
    plStack_60 = param_1 + 1;
    func_0x000107c278d4(lVar3 + 0x20,param_3);
    uStack_58 = CONCAT71(uStack_58._1_7_,1);
    func_0x00010898a18c(param_1,uStack_48,plVar2,lVar3);
    lVar3 = lStack_68;
    lStack_68 = 0;
    func_0x00010898a1e0(&lStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10b23e754; end: 10b23e813;  */

undefined1  [16]
FUN_10b23e754(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x000108992bbc(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x50;
    __Znwm();
    uStack_58 = 0;
    lStack_68 = lVar3;
    plStack_60 = param_1 + 1;
    func_0x000107c278d4(lVar3 + 0x20,param_4);
    uStack_58 = CONCAT71(uStack_58._1_7_,1);
    func_0x00010898a18c(param_1,uStack_48,plVar2,lVar3);
    lVar3 = lStack_68;
    lStack_68 = 0;
    func_0x00010898a1e0(&lStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10b23e814; end: 10b23ed1b;  */

void FUN_10b23e814(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10b23ed1c; end: 10b23eda3;  */

void FUN_10b23ed1c(undefined8 param_1)

{
  long extraout_x8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10b23efc4();
  uStack_68 = 0;
  uStack_50 = (undefined4)param_1;
  func_0x00010b23f004();
  FUN_10b20be34();
  func_0x00010b20c454(auStack_48,param_1);
  FUN_10b120618(auStack_70);
  FUN_10b24b460();
  func_0x00010b23f020();
  (**(code **)(extraout_x8 + 8))();
  FUN_10b120618(auStack_48);
  return;
}



/* Entry: 10b23eda4; end: 10b23ee67;  */

void FUN_10b23eda4(undefined4 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined8 *puVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = param_1;
  FUN_10b23efc4();
  uStack_40 = 0;
  puVar2 = (undefined8 *)*param_2;
  while (puVar2 != param_2 + 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_60,puVar2 + 4);
    puVar1 = auStack_78;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1,puVar2 + 7);
    func_0x00010b23efe4();
    FUN_10b20c420(auStack_48,puVar1);
    func_0x00010b23eff4();
    func_0x00010b23efd4();
    func_0x000107c27be0();
  }
  FUN_10b24b460();
  func_0x00010b23f020();
  (**(code **)(extraout_x8 + 8))();
  func_0x00010b23efdc();
  return;
}



/* Entry: 10b23ee68; end: 10b23eef3;  */

void FUN_10b23ee68(undefined8 param_1)

{
  undefined8 *extraout_x8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10b23efc4();
  uStack_68 = 0;
  uStack_50 = (undefined4)param_1;
  func_0x00010b23f004();
  FUN_10b20be34();
  func_0x00010b20c454(auStack_48,param_1);
  FUN_10b120618(auStack_70);
  FUN_10b24b460();
  func_0x00010b23f020();
  (*(code *)*extraout_x8)();
  FUN_10b120618(auStack_48);
  return;
}



/* Entry: 10b23eef4; end: 10b23efc3;  */

void FUN_10b23eef4(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = param_1;
  FUN_10b23efc4();
  uStack_50 = 0;
  puVar2 = (undefined8 *)*param_3;
  while (puVar2 != param_3 + 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_70,puVar2 + 4);
    puVar1 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar1,puVar2 + 7);
    func_0x00010b23efe4();
    FUN_10b20c420(auStack_58,puVar1);
    func_0x00010b23eff4();
    func_0x00010b23efd4();
    func_0x000107c27be0();
  }
  FUN_10b24b460();
  func_0x00010b23f020();
  (*(code *)*extraout_x8)();
  func_0x00010b23efdc();
  return;
}



/* Entry: 10b23efc4; end: 10b23f02b;  */

void FUN_10b23efc4(void)

{
  return;
}



/* Entry: 10b23f02c; end: 10b23f08f;  */

void FUN_10b23f02c(void)

{
  long unaff_x22;
  
  func_0x00010b241014();
  func_0x00010b240fe8();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    func_0x00010b240f28();
    FUN_10b23f090();
    func_0x00010b48a25c();
  }
  return;
}



/* Entry: 10b23f090; end: 10b23f0af;  */

long FUN_10b23f090(long param_1)

{
  func_0x00010b240f00();
  FUN_10b2407a4();
  return param_1 + 0x28;
}



/* Entry: 10b23f0b0; end: 10b23f12b;  */

undefined8 FUN_10b23f0b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_2;
  func_0x00010b2409b8(param_2,&uStack_38);
  if (param_2 + 8 == lVar1) {
    uStack_38 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010b240f28();
    func_0x00010b2409b8();
    if (param_3 + 8 == lVar1) {
      return 0;
    }
  }
  return *(undefined8 *)(lVar1 + 0x28);
}



/* Entry: 10b23f12c; end: 10b23f1cb;  */

void FUN_10b23f12c(long param_1,int param_2)

{
  long *plVar1;
  long *unaff_x21;
  long unaff_x22;
  long lVar2;
  
  func_0x00010b241014();
  plVar1 = (long *)(param_1 + 0x10);
  func_0x00010b240fe8();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar2 = *unaff_x21;
    if (*(int *)(lVar2 + 0x44) == param_2) {
      if (param_2 == 1) {
        func_0x00010b240f28();
        FUN_10b23f1cc();
      }
      else {
        func_0x00010b240f28();
        FUN_10b23f1cc();
      }
      *plVar1 = lVar2;
    }
    unaff_x21 = unaff_x21 + 1;
  }
  return;
}



/* Entry: 10b23f1cc; end: 10b23f1eb;  */

long FUN_10b23f1cc(long param_1)

{
  func_0x00010b240f00();
  FUN_10b240a1c();
  return param_1 + 0x28;
}



/* Entry: 10b23f1ec; end: 10b23f28b;  */

undefined8 FUN_10b23f1ec(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uStack_28 = *(undefined8 *)(param_1 + 0x18);
    param_1 = param_3;
    FUN_10b240b24(param_3,&uStack_28);
    if (param_3 + 8 != param_1) {
LAB_10b23f25c:
      return *(undefined8 *)(param_1 + 0x28);
    }
    uVar1 = 0x82;
  }
  else if (*(int *)(param_1 + 0x24) == 1) {
    uStack_28 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010b240f28();
    FUN_10b240b24();
    if (param_2 + 8 != param_1) goto LAB_10b23f25c;
    uVar1 = 0x85;
  }
  else {
    uVar1 = 0x86;
  }
  FUN_10b23ed1c(uVar1,1);
  return 0;
}



/* Entry: 10b23f28c; end: 10b23f487;  */

void FUN_10b23f28c(undefined8 param_1,long *param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_2b0 [8];
  ulong uStack_2a8;
  byte bStack_299;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [256];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [264];
  
  func_0x000105680760(auStack_180);
  puVar6 = PTR___DefaultRuneLocale_11034bcf8;
  uVar9 = 0;
LAB_10b23f2d8:
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar10 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar10 = (ulong)bVar4;
  }
  if (uVar10 <= uVar9) {
    func_0x000105491b64(param_1,auStack_168);
    func_0x000105673d7c(auStack_180);
    return;
  }
  plVar2 = (long *)*param_2;
  if (-1 < (char)bVar4) {
    plVar2 = param_2;
  }
  cVar5 = *(char *)((long)plVar2 + uVar9);
  if (cVar5 == '{') goto code_r0x00010b23f30c;
  goto LAB_10b23f388;
code_r0x00010b23f30c:
  func_0x000105680760(auStack_298);
  bVar8 = true;
  uVar10 = uVar9;
  while( true ) {
    uVar10 = uVar10 + 1;
    bVar4 = *(byte *)((long)param_2 + 0x17);
    uVar1 = param_2[1];
    if (-1 < (char)bVar4) {
      uVar1 = (ulong)bVar4;
    }
    if (uVar1 <= uVar10) goto LAB_10b23f37c;
    plVar2 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar2 = param_2;
    }
    bVar4 = *(byte *)((long)plVar2 + uVar10);
    if ((ulong)bVar4 == 0x7d) break;
    if (((char)bVar4 < '\0') || ((*(uint *)(puVar6 + (ulong)bVar4 * 4 + 0x3c) >> 10 & 1) == 0))
    goto LAB_10b23f37c;
    func_0x000105987154(auStack_288,(int)(char)bVar4);
    bVar8 = false;
  }
  if (!bVar8) {
    func_0x000105491b64(auStack_2b0,auStack_280);
    iVar7 = (int)auStack_2b0;
    __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
              (auStack_2b0,0,10);
    if (iVar7 < (int)param_3[1]) {
      puVar3 = param_3;
      if ((*param_3 & 1) != 0) {
        puVar3 = (ulong *)(*param_3 + (long)iVar7 * 8 + 7);
      }
      func_0x000107c28084(auStack_170,*puVar3);
LAB_10b23f3ec:
      bVar8 = false;
      uVar10 = uStack_2a8;
      if (-1 < (char)bStack_299) {
        uVar10 = (ulong)bStack_299;
      }
      uVar9 = uVar9 + uVar10 + 2;
    }
    else {
      if (param_4 != 0) goto LAB_10b23f3ec;
      bVar8 = true;
    }
    func_0x00010b240f60();
    goto LAB_10b23f380;
  }
LAB_10b23f37c:
  bVar8 = true;
LAB_10b23f380:
  func_0x00010b240fe0();
  if (bVar8) {
LAB_10b23f388:
    func_0x000105987154(auStack_170,(long)cVar5);
    uVar9 = uVar9 + 1;
  }
  goto LAB_10b23f2d8;
}



/* Entry: 10b23f488; end: 10b23f4c7;  */

void FUN_10b23f488(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_10b23f28c(auStack_38,param_1,param_2 + 0x10,0);
  func_0x00010b240f28();
  func_0x000107c27b9c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10b23f4c8; end: 10b23f58f;  */

void FUN_10b23f4c8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1;
  FUN_10b124720(param_1,param_2,0);
  if (lVar4 != -1) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (-1 < (char)*(byte *)(param_1 + 0x17)) {
      uVar3 = (ulong)*(byte *)(param_1 + 0x17);
    }
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_3 + 0x17);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)(param_2 + 0x17);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (param_1,(uVar1 + uVar3) - uVar2);
    while (lVar4 != -1) {
      uVar3 = *(ulong *)(param_2 + 8);
      if (-1 < (char)*(byte *)(param_2 + 0x17)) {
        uVar3 = (ulong)*(byte *)(param_2 + 0x17);
      }
      FUN_10b23d138(param_1,lVar4,uVar3,param_3);
      lVar4 = param_1;
      FUN_10b124720(param_1,param_2,0);
    }
  }
  return;
}



/* Entry: 10b23f590; end: 10b23f8bf;  */

void FUN_10b23f590(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 *param_9,undefined8 param_10)

{
  ulong *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 auStack_1c0 [24];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [256];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  *param_9 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_10,"");
  lVar2 = param_2;
  FUN_10b23f0b0(param_2,param_4,param_5);
  FUN_10b23f1ec(param_2,param_6,param_7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_78,*(ulong *)(lVar2 + 0x38) & 0xfffffffffffffffc);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_90,auStack_78);
  func_0x000107c278b8(&uStack_1a8,&UNK_10f73afac);
  FUN_10b23f4c8(auStack_90,&uStack_1a8,*(ulong *)(param_3 + 0x60) & 0xfffffffffffffffc);
  func_0x00010b240fa4();
  FUN_10b23f28c(&uStack_1a8,auStack_90,param_3 + 0x18,1);
  func_0x000107c27b9c(auStack_90,&uStack_1a8);
  func_0x00010b240fa4();
  puVar3 = auStack_90;
  func_0x00010b240fb8(puVar3,&DAT_10f2da0fd);
  if (puVar3 == (undefined1 *)0xffffffffffffffff) {
    puVar3 = auStack_90;
    func_0x00010b240fb8(puVar3,&DAT_10f2da10d);
    if (puVar3 == (undefined1 *)0xffffffffffffffff) {
      if (*(uint *)(param_2 + 0x18) <= *(uint *)(param_3 + 0x98)) {
        func_0x000105680760(&uStack_1a8);
        func_0x00010549023c(&uStack_198,&UNK_10f73aff4);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
        func_0x00010549023c();
        *param_9 = 0xb;
        func_0x000105491b64(auStack_1c0,auStack_190);
        func_0x00010b241034();
        func_0x00010b240f60();
        func_0x00010b240ef0();
        func_0x00010b240fe0();
        goto LAB_10b23f6e0;
      }
      uVar5 = *(ulong *)(param_2 + 0x10);
      puVar1 = (ulong *)(param_2 + 0x10);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)(int)*(uint *)(param_3 + 0x98) * 8 + 7);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_1a8,*puVar1);
      FUN_10b23f488(&uStack_1a8,lVar2);
      func_0x000107c278b8(auStack_1c0,PTR_DAT_11336c860);
      FUN_10b23f4c8(&uStack_1a8,auStack_1c0,auStack_90);
      func_0x00010b240f60();
      puVar4 = &uStack_1a8;
      func_0x00010b240fb8(puVar4,&DAT_10f2da0fd);
      if (puVar4 == (undefined8 *)0xffffffffffffffff) {
        puVar4 = &uStack_1a8;
        func_0x00010b240fb8(puVar4,&DAT_10f2da10d);
        if (puVar4 != (undefined8 *)0xffffffffffffffff) goto LAB_10b23f7a0;
        param_1[1] = uStack_1a0;
        *param_1 = uStack_1a8;
        param_1[2] = uStack_198;
        uStack_1a0 = 0;
        uStack_198 = 0;
        uStack_1a8 = 0;
      }
      else {
LAB_10b23f7a0:
        FUN_10b23ed1c(0x83,2);
        *param_9 = 0xe;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_1c0,&UNK_10f73b058,&uStack_1a8);
        func_0x00010b241034();
        func_0x00010b240f60();
        func_0x00010b240ef0();
      }
      func_0x00010b240fa4();
      goto LAB_10b23f6e0;
    }
  }
  FUN_10b23ed1c(0x84,2);
  *param_9 = 0xd;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_1a8,&UNK_10f73afc6,auStack_90);
  func_0x00010b241034();
  func_0x00010b240fa4();
  func_0x00010b240ef0();
LAB_10b23f6e0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  return;
}



/* Entry: 10b23f8c0; end: 10b23f90f;  */

void FUN_10b23f8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  
  FUN_10b23f9a0(auStack_48);
  FUN_10b23f910(param_1,auStack_48,param_3);
  func_0x00010867bb84(auStack_48);
  return;
}



/* Entry: 10b23f910; end: 10b23f99f;  */

void FUN_10b23f910(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 extraout_x8;
  ulong uVar3;
  undefined8 *unaff_x19;
  long lVar4;
  undefined8 uStack_48;
  
  func_0x00010b241014();
  uVar3 = *(ulong *)(param_2 + 0x28);
  *unaff_x19 = extraout_x8;
  puVar1 = (ulong *)(param_2 + 0x28);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar4 = (long)*(int *)(param_2 + 0x30) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar3 = *puVar1;
    uStack_48 = *(undefined8 *)(uVar3 + 0x40);
    puVar2 = param_1;
    func_0x00010867b354(param_1,&uStack_48);
    if (puVar2 != (ulong *)0x0) {
      uStack_48 = *(undefined8 *)(uVar3 + 0x40);
      func_0x00010b240f28();
      FUN_10b23fa0c();
      *puVar2 = uVar3;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}



/* Entry: 10b23f9a0; end: 10b23fa0b;  */

void FUN_10b23f9a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  for (lVar1 = (long)*(int *)(param_2 + 0x30) << 3; lVar1 != 0; lVar1 = lVar1 + -8) {
    func_0x00010b240f28();
    func_0x00010867b28c();
  }
  return;
}



/* Entry: 10b23fa0c; end: 10b23fa2b;  */

long FUN_10b23fa0c(long param_1)

{
  func_0x00010b240f00();
  FUN_10b240b88();
  return param_1 + 0x28;
}



/* Entry: 10b23fa2c; end: 10b23faf7;  */

void FUN_10b23fa2c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b23faf8(param_1,(long)*(int *)(param_2 + 0x48));
  uVar2 = *(ulong *)(param_2 + 0x40);
  puVar1 = (ulong *)(param_2 + 0x40);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = (long)*(int *)(param_2 + 0x48) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar3 = *puVar1;
    uVar2 = uVar3;
    FUN_10b23f1ec(uVar3,param_5,param_6);
    if ((uVar2 != 0) && (uVar2 = uVar3, FUN_10b23f0b0(uVar3,param_3,param_4), uVar2 != 0)) {
      func_0x00010b240648(param_1,uVar3);
    }
    puVar1 = puVar1 + 1;
  }
  return;
}



/* Entry: 10b23faf8; end: 10b23fb7b;  */

void FUN_10b23faf8(long *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,int param_7,long param_8)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *extraout_x8;
  long lVar4;
  undefined8 uStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_48;
  undefined4 *puStack_40;
  
  plVar3 = param_1 + 2;
  if ((ulong)((*plVar3 - *param_1) / 0x28) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_10b227d74();
      func_0x00010b240fd8();
      func_0x00010b240f88();
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      func_0x000107c31930(extraout_x8,param_8 + 1U);
      *puStack_48 = 0;
      *puStack_40 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      lVar4 = *param_1;
      lVar1 = param_1[1];
      do {
        if ((lVar4 == lVar1) || (param_8 + 1U <= (ulong)((extraout_x8[1] - *extraout_x8) / 0x18))) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
          return;
        }
        if (param_7 == 0) {
LAB_10b23fc2c:
          FUN_10b23f590(&uStack_e0,lVar4,param_2,param_3,plVar3,param_5,param_6);
          uVar2 = uStack_d8;
          if (-1 < (char)bStack_c9) {
            uVar2 = (ulong)bStack_c9;
          }
          if (uVar2 != 0) {
            if (*extraout_x8 == extraout_x8[1]) {
              *puStack_48 = *(undefined8 *)(lVar4 + 0x10);
            }
            func_0x000107c27940(extraout_x8,&uStack_e0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
        }
        else {
          uStack_e0 = *(undefined8 *)(lVar4 + 0x10);
          uVar2 = param_3;
          FUN_10b23fd00(param_3,&uStack_e0);
          if ((uVar2 & 1) != 0) goto LAB_10b23fc2c;
        }
        lVar4 = lVar4 + 0x28;
      } while( true );
    }
    FUN_10b2404ac(&puStack_48,param_2,(param_1[1] - *param_1) / 0x28);
    func_0x00010b240f28();
    FUN_10b240428();
    func_0x00010b240fd8();
  }
  return;
}



/* Entry: 10b23fb7c; end: 10b23fcff;  */

void FUN_10b23fb7c(long *param_1,long *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,int param_8,long param_9,undefined4 param_10
                  ,undefined4 param_11,undefined8 *param_12,undefined4 *param_13)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,param_9 + 1U);
  *param_12 = 0;
  *param_13 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  do {
    if ((lVar3 == lVar1) || (param_9 + 1U <= (ulong)((param_1[1] - *param_1) / 0x18))) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
      return;
    }
    if (param_8 == 0) {
LAB_10b23fc2c:
      FUN_10b23f590(&uStack_90,lVar3,param_3,param_4,param_5,param_6,param_7);
      uVar2 = uStack_88;
      if (-1 < (char)bStack_79) {
        uVar2 = (ulong)bStack_79;
      }
      if (uVar2 != 0) {
        if (*param_1 == param_1[1]) {
          *param_12 = *(undefined8 *)(lVar3 + 0x10);
        }
        func_0x000107c27940(param_1,&uStack_90);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
    }
    else {
      uStack_90 = *(undefined8 *)(lVar3 + 0x10);
      uVar2 = param_4;
      FUN_10b23fd00(param_4,&uStack_90);
      if ((uVar2 & 1) != 0) goto LAB_10b23fc2c;
    }
    lVar3 = lVar3 + 0x28;
  } while( true );
}



/* Entry: 10b23fd00; end: 10b23fd2b;  */

bool FUN_10b23fd00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b2409b8();
  return param_1 + 8 != lVar1;
}



/* Entry: 10b23fd2c; end: 10b23fe33;  */

ulong FUN_10b23fd2c(int param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (0x18 < param_1 - 0x579U) {
    uVar2 = 0x100000000;
    uVar3 = 1;
    if (param_1 - 0x4b0U < 0x14) goto LAB_10b23fd8c;
    uVar1 = param_1 - 0x4ce;
    if (uVar1 < 0x3d) {
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x1e000003000000fU) != 0) goto LAB_10b23fd8c;
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x1e00000000000000U) != 0) goto LAB_10b23fd84;
    }
    if ((param_1 - 0x516U < 4) || (param_1 == 0x53b)) goto LAB_10b23fd8c;
    if (param_1 != 0x545) {
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_10b23fd8c;
    }
  }
LAB_10b23fd84:
  uVar2 = 0x100000000;
  uVar3 = 2;
LAB_10b23fd8c:
  return uVar3 | uVar2;
}



/* Entry: 10b23fe34; end: 10b2402df;  */

void FUN_10b23fe34(undefined8 *param_1,ulong *param_2,long *param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  long lStack_a0;
  ulong uStack_98;
  long *plStack_90;
  ulong uStack_88;
  float fStack_80;
  long *plStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  
  uVar13 = *param_2;
  uVar1 = param_2[1];
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  fStack_80 = 1.0;
  do {
    if (uVar13 == uVar1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_10b23faf8(param_1,(long)(param_2[1] - *param_2) / 0x28);
      lVar2 = param_3[1];
      for (lVar4 = *param_3; lVar4 != lVar2; lVar4 = lVar4 + 0x28) {
        plVar12 = &lStack_a0;
        FUN_10b240de8(plVar12,lVar4);
        if (plVar12 != (long *)0x0) {
          func_0x00010b240648(param_1,lVar4);
          FUN_10b2402e0(&lStack_a0,lVar4);
        }
      }
      if ((param_4 & 1) == 0) {
        uVar1 = param_2[1];
        for (uVar13 = *param_2; uVar13 != uVar1; uVar13 = uVar13 + 0x28) {
          plVar12 = &lStack_a0;
          FUN_10b240de8(plVar12,uVar13);
          if (plVar12 != (long *)0x0) {
            func_0x00010b240648(param_1,uVar13);
            FUN_10b2402e0(&lStack_a0,uVar13);
          }
        }
      }
      FUN_10b240c90(&lStack_a0);
      return;
    }
    uVar7 = uVar13;
    FUN_10b240cec();
    uVar6 = uStack_98;
    if (uStack_98 != 0) {
      uVar14 = uStack_98 - 1;
      if ((uStack_98 & uVar14) == 0) {
        unaff_x26 = uVar14 & uVar7;
      }
      else {
        unaff_x26 = uVar7;
        if (uStack_98 <= uVar7) {
          uVar5 = 0;
          if (uStack_98 != 0) {
            uVar5 = uVar7 / uStack_98;
          }
          unaff_x26 = uVar7 - uVar5 * uStack_98;
        }
      }
      plVar12 = *(long **)(lStack_a0 + unaff_x26 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10b23ff20;
            uVar5 = plVar12[1];
            if (uVar5 != uVar7) break;
            uVar5 = (ulong)(plVar12 + 2);
            func_0x00010b240d38(uVar5,uVar13);
            if ((uVar5 & 1) != 0) goto LAB_10b2401c4;
          }
          if ((uVar6 & uVar14) == 0) {
            uVar5 = uVar5 & uVar14;
          }
          else if (uVar6 <= uVar5) {
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = uVar5 / uVar6;
            }
            uVar5 = uVar5 - uVar9 * uVar6;
          }
        } while (uVar5 == unaff_x26);
      }
    }
LAB_10b23ff20:
    plVar12 = (long *)0x38;
    __Znwm();
    uStack_68 = 0;
    *plVar12 = 0;
    plVar12[1] = uVar7;
    plStack_78 = plVar12;
    pplStack_70 = &plStack_90;
    FUN_10b227dd8(plVar12 + 2,uVar13);
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    if ((uVar6 == 0) || (fStack_80 * (float)uVar6 < (float)(uStack_88 + 1))) {
      uVar14 = 1;
      if (2 < uVar6) {
        uVar14 = (ulong)((uVar6 & uVar6 - 1) != 0);
      }
      uVar14 = uVar14 | uVar6 << 1;
      uVar6 = (ulong)((float)(uStack_88 + 1) / fStack_80);
      if (uVar14 <= uVar6) {
        uVar14 = uVar6;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      uVar6 = uStack_98;
      if (uStack_98 < uVar14) {
LAB_10b23ffc4:
        if (uVar14 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b2402a4);
          (*pcVar3)();
        }
        lVar4 = uVar14 << 3;
        __Znwm(lVar4);
        func_0x00010b240d8c(&lStack_a0,lVar4);
        for (uVar6 = 0; uVar14 != uVar6; uVar6 = uVar6 + 1) {
          *(undefined8 *)(lStack_a0 + uVar6 * 8) = 0;
        }
        uStack_98 = uVar14;
        if (plStack_90 != (long *)0x0) {
          uVar9 = plStack_90[1];
          uVar5 = uVar14 - 1;
          uVar6 = 0;
          if (uVar14 != 0) {
            uVar6 = uVar9 / uVar14;
          }
          uVar10 = uVar9;
          if (uVar14 <= uVar9) {
            uVar10 = uVar9 - uVar6 * uVar14;
          }
          if ((uVar14 & uVar5) == 0) {
            uVar10 = uVar9 & uVar5;
          }
          *(long ***)(lStack_a0 + uVar10 * 8) = &plStack_90;
          plVar11 = plStack_90;
          while (plVar8 = plVar11, plVar11 = (long *)*plVar8, plVar11 != (long *)0x0) {
            uVar6 = plVar11[1];
            if ((uVar14 & uVar5) == 0) {
              uVar6 = uVar6 & uVar5;
            }
            else if (uVar14 <= uVar6) {
              uVar9 = 0;
              if (uVar14 != 0) {
                uVar9 = uVar6 / uVar14;
              }
              uVar6 = uVar6 - uVar9 * uVar14;
            }
            if (uVar6 != uVar10) {
              if (*(long *)(lStack_a0 + uVar6 * 8) == 0) {
                *(long **)(lStack_a0 + uVar6 * 8) = plVar8;
                uVar10 = uVar6;
              }
              else {
                *plVar8 = *plVar11;
                *plVar11 = **(long **)(lStack_a0 + uVar6 * 8);
                **(undefined8 **)(lStack_a0 + uVar6 * 8) = plVar11;
                plVar11 = plVar8;
              }
            }
          }
        }
      }
      else if (uVar14 < uStack_98) {
        uVar5 = (ulong)((float)uStack_88 / fStack_80);
        if ((uStack_98 < 3) || ((uStack_98 & uStack_98 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar5) {
          uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
        }
        if (uVar14 <= uVar5) {
          uVar14 = uVar5;
        }
        if (uVar14 < uVar6) {
          if (uVar14 != 0) goto LAB_10b23ffc4;
          func_0x00010b240d8c(&lStack_a0,0);
          uStack_98 = 0;
        }
      }
      uVar6 = uStack_98;
      if ((uStack_98 & uStack_98 - 1) == 0) {
        unaff_x26 = uStack_98 - 1 & uVar7;
      }
      else {
        unaff_x26 = uVar7;
        if (uStack_98 <= uVar7) {
          uVar14 = 0;
          if (uStack_98 != 0) {
            uVar14 = uVar7 / uStack_98;
          }
          unaff_x26 = uVar7 - uVar14 * uStack_98;
        }
      }
    }
    plVar11 = *(long **)(lStack_a0 + unaff_x26 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar12 = (long)plStack_90;
      *(long ***)(lStack_a0 + unaff_x26 * 8) = &plStack_90;
      plStack_90 = plVar12;
      if (*plVar12 != 0) {
        uVar7 = *(ulong *)(*plVar12 + 8);
        if ((uVar6 & uVar6 - 1) == 0) {
          uVar7 = uVar7 & uVar6 - 1;
        }
        else if (uVar6 <= uVar7) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar7 / uVar6;
          }
          uVar7 = uVar7 - uVar14 * uVar6;
        }
        *(long **)(lStack_a0 + uVar7 * 8) = plVar12;
      }
    }
    else {
      *plVar12 = *plVar11;
      *plVar11 = (long)plVar12;
    }
    plStack_78 = (long *)0x0;
    uStack_88 = uStack_88 + 1;
    FUN_10b240da4(&plStack_78);
LAB_10b2401c4:
    uVar13 = uVar13 + 0x28;
  } while( true );
}



/* Entry: 10b2402e0; end: 10b240427;  */

void FUN_10b2402e0(long *param_1)

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
  long *plStack_38;
  long *plStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  plVar2 = param_1;
  FUN_10b240de8();
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = param_1[1];
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
  lVar8 = *param_1;
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  plStack_30 = param_1 + 2;
  if (plVar6 == plStack_30) {
LAB_10b240378:
    if (lVar3 == 0) {
LAB_10b2403ac:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10b2403b4;
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
    if (uVar10 != uVar4) goto LAB_10b2403ac;
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
    if (uVar9 != uVar4) goto LAB_10b240378;
LAB_10b2403b4:
    if (lVar3 == 0) goto LAB_10b2403ec;
    uVar9 = *(ulong *)(lVar3 + 8);
  }
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
LAB_10b2403ec:
  *plVar6 = lVar3;
  *plVar2 = 0;
  param_1[3] = param_1[3] + -1;
  uStack_28 = 1;
  uStack_27 = 0;
  uStack_23 = 0;
  plStack_38 = plVar2;
  FUN_10b240da4(&plStack_38);
  return;
}



/* Entry: 10b240428; end: 10b2404ab;  */

void FUN_10b240428(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x28) * 0x28;
  FUN_10b2404f8(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 10b2404ac; end: 10b2404f7;  */

long * FUN_10b2404ac(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10b227d88();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 10b2404f8; end: 10b2405db;  */

void FUN_10b2404f8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (puVar2 = param_2; puStack_38 = param_4, puVar2 != param_3; puVar2 = puVar2 + 5) {
    param_4[4] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = &PTR_FUN_110ceb780;
    if (puVar2 != param_4) {
      uVar1 = puVar2[1];
      if ((uVar1 & 1) != 0) {
        uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
      }
      if (uVar1 == 0) {
        FUN_10b486ba0(param_4,puVar2);
      }
      else {
        FUN_10b486b68(param_4,puVar2);
      }
    }
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 5) {
    FUN_10b48698c(param_2);
  }
  FUN_10b227de4(&uStack_60);
  return;
}



/* Entry: 10b2405dc; end: 10b240607;  */

long * FUN_10b2405dc(long *param_1)

{
  FUN_10b240608();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b240608; end: 10b24060f;  */

void FUN_10b240608(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x28;
    FUN_10b48698c();
  }
  return;
}



/* Entry: 10b240610; end: 10b240683;  */

void FUN_10b240610(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x28;
    FUN_10b48698c();
  }
  return;
}



/* Entry: 10b240684; end: 10b2406b7;  */

void FUN_10b240684(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b227dd8(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x28;
  return;
}



/* Entry: 10b2406b8; end: 10b240753;  */

long FUN_10b2406b8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10b240754(param_1,(param_1[1] - *param_1) / 0x28 + 1);
  FUN_10b2404ac(auStack_58,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
  FUN_10b227dd8(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x28;
  func_0x00010b240f28();
  FUN_10b240428();
  lVar2 = param_1[1];
  func_0x00010b240fd8();
  return lVar2;
}



/* Entry: 10b240754; end: 10b2407a3;  */

undefined1  [16]
FUN_10b240754(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long alStack_70 [3];
  undefined8 uStack_58;
  
  if (param_2 < 0x666666666666667) {
    uVar2 = (param_1[2] - *param_1) / 0x28;
    uVar4 = uVar2 * 2;
    if (uVar4 < param_2 || uVar4 - param_2 == 0) {
      uVar4 = param_2;
    }
    if (0x333333333333332 < uVar2) {
      uVar4 = 0x666666666666666;
    }
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = uVar4;
    return auVar6;
  }
  FUN_10b227d74();
  plVar3 = param_1;
  FUN_10b240838();
  lVar5 = *plVar3;
  bVar1 = lVar5 == 0;
  if (bVar1) {
    FUN_10b240884(alStack_70,param_1,param_3,param_4,param_5);
    FUN_10b2408d8(param_1,uStack_58,plVar3,alStack_70[0]);
    lVar5 = alStack_70[0];
    alStack_70[0] = 0;
    FUN_10b240938(alStack_70);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = lVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}



/* Entry: 10b2407a4; end: 10b240837;  */

undefined1  [16]
FUN_10b2407a4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10b240838(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10b240884(alStack_60,param_1,param_3,param_4,param_5);
    FUN_10b2408d8(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    FUN_10b240938(alStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10b240838; end: 10b240883;  */

long * FUN_10b240838(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, plVar3[4] <= *param_3) {
        if (*param_3 <= plVar3[4]) goto LAB_10b240880;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10b240880;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_10b240880:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 10b240884; end: 10b2408d7;  */

void FUN_10b240884(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = 0x80;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  FUN_10b240900(lVar1 + 0x20,*param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10b2408d8; end: 10b2408ff;  */

void FUN_10b2408d8(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b240ed4();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010b240f74();
  func_0x00010b241004();
  return;
}



/* Entry: 10b240900; end: 10b240937;  */

void FUN_10b240900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = uVar1;
  param_1[1] = &PTR_FUN_110cebe50;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &DAT_11383d918;
  param_1[7] = &DAT_11383d918;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 10b240938; end: 10b24095b;  */

undefined8 FUN_10b240938(undefined8 param_1)

{
  FUN_10b24095c(param_1,0);
  return param_1;
}



/* Entry: 10b24095c; end: 10b240973;  */

void FUN_10b24095c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_10b489dd4(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10b240974; end: 10b2409ef;  */

void FUN_10b240974(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10b489dd4(param_2 + 0x28);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b2409f0; end: 10b240a1b;  */

long FUN_10b2409f0(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(long *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 10b240a1c; end: 10b240a73;  */

undefined1  [16] FUN_10b240a1c(long *param_1)

{
  long lVar1;
  undefined8 unaff_x21;
  undefined1 auVar2 [16];
  undefined8 auStack_60 [4];
  
  func_0x00010b241064();
  FUN_10b240a74();
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x00010b240fc0();
    func_0x00010b240f34();
    FUN_10b240ac0();
    auStack_60[0] = 0;
    func_0x00010b240ae8(auStack_60);
  }
  else {
    unaff_x21 = 0;
  }
  auVar2._8_8_ = unaff_x21;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 10b240a74; end: 10b240abf;  */

long * FUN_10b240a74(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, plVar3[4] <= *param_3) {
        if (*param_3 <= plVar3[4]) goto LAB_10b240abc;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10b240abc;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_10b240abc:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 10b240ac0; end: 10b240b0b;  */

void FUN_10b240ac0(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b240ed4();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010b240f74();
  func_0x00010b241004();
  return;
}



/* Entry: 10b240b0c; end: 10b240b23;  */

void FUN_10b240b0c(long *param_1,long param_2)

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



/* Entry: 10b240b24; end: 10b240b5b;  */

void FUN_10b240b24(void)

{
  func_0x00010b241050();
  FUN_10b240b5c();
  return;
}



/* Entry: 10b240b5c; end: 10b240b87;  */

long FUN_10b240b5c(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(long *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 10b240b88; end: 10b240bdf;  */

undefined1  [16] FUN_10b240b88(long *param_1)

{
  long lVar1;
  undefined8 unaff_x21;
  undefined1 auVar2 [16];
  undefined8 auStack_60 [4];
  
  func_0x00010b241064();
  FUN_10b240be0();
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x00010b240fc0();
    func_0x00010b240f34();
    FUN_10b240c2c();
    auStack_60[0] = 0;
    func_0x00010b240c54(auStack_60);
  }
  else {
    unaff_x21 = 0;
  }
  auVar2._8_8_ = unaff_x21;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 10b240be0; end: 10b240c2b;  */

long * FUN_10b240be0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, plVar3[4] <= *param_3) {
        if (*param_3 <= plVar3[4]) goto LAB_10b240c28;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10b240c28;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_10b240c28:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 10b240c2c; end: 10b240c77;  */

void FUN_10b240c2c(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b240ed4();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010b240f74();
  func_0x00010b241004();
  return;
}



/* Entry: 10b240c78; end: 10b240c8f;  */

void FUN_10b240c78(long *param_1,long param_2)

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



/* Entry: 10b240c90; end: 10b240ceb;  */

long * FUN_10b240c90(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10b48698c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b240cec; end: 10b240da3;  */

ulong FUN_10b240cec(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = 0;
    uVar2 = *(long *)(param_1 + 0x18) << 3;
  }
  else if (*(int *)(param_1 + 0x24) == 1) {
    uVar2 = 0;
    uVar1 = *(long *)(param_1 + 0x18) << 1;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  return uVar1 ^ uVar2 ^ *(ulong *)(param_1 + 0x10);
}



/* Entry: 10b240da4; end: 10b240de7;  */

long * FUN_10b240da4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10b48698c(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b240de8; end: 10b240ebf;  */

long FUN_10b240de8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = param_2;
    FUN_10b240cec();
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar4 != uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x00010b240d38(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 10b240ec0; end: 10b241077;  */

void FUN_10b240ec0(void)

{
  return;
}



/* Entry: 10b241078; end: 10b2410c7;  */

void FUN_10b241078(long *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)(*param_1 + param_1[1]);
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar3 = param_1;
    plVar1 = (long *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
  }
  for (; plVar3 != plVar1; plVar3 = (long *)((long)plVar3 + 1)) {
    uVar2 = (undefined1)*plVar3;
    ___tolower();
    *(undefined1 *)plVar3 = uVar2;
  }
  return;
}



/* Entry: 10b2410c8; end: 10b241167;  */

void FUN_10b2410c8(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 != 0) {
    lVar3 = 0;
    while (lVar2 = param_1, FUN_10b124720(param_1,param_2,lVar3), lVar2 != -1) {
      uVar1 = *(ulong *)(param_2 + 8);
      if (-1 < (char)*(byte *)(param_2 + 0x17)) {
        uVar1 = (ulong)*(byte *)(param_2 + 0x17);
      }
      FUN_10b23d138(param_1,lVar2,uVar1,param_3);
      uVar1 = *(ulong *)(param_3 + 8);
      if (-1 < (char)*(byte *)(param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)(param_3 + 0x17);
      }
      lVar3 = uVar1 + lVar2;
    }
  }
  return;
}



/* Entry: 10b241168; end: 10b241187;  */

bool FUN_10b241168(long param_1,undefined8 param_2)

{
  func_0x000107c2bee0(param_1,param_2,0);
  return param_1 == 0;
}



/* Entry: 10b241188; end: 10b241f5f;  */

void FUN_10b241188(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined **ppuVar2;
  double *pdVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar12;
  ulong extraout_x9;
  long *plVar13;
  ulong extraout_x9_00;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  double dVar21;
  long lVar22;
  double *pdVar23;
  long lVar24;
  long lVar25;
  double *pdVar26;
  double *pdVar27;
  double *pdVar28;
  double *pdVar29;
  ulong unaff_x24;
  long lVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  undefined *puVar34;
  double dVar35;
  double dVar36;
  double unaff_d8;
  double dVar37;
  float fVar38;
  double dVar39;
  double unaff_d15;
  double dStack_2c8;
  uint uStack_2bc;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  long lStack_260;
  long lStack_258;
  long lStack_250;
  double *pdStack_248;
  double *pdStack_240;
  double *pdStack_238;
  undefined1 auStack_230 [24];
  long lStack_218;
  double *pdStack_210;
  double *pdStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  long *plStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  double *pdStack_d0;
  double *pdStack_c8;
  double *pdStack_c0;
  
  if (*(char *)(param_3 + 0x40) != '\x01' || *(int *)(param_3 + 0x3c) != 5) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  uStack_2bc = 0;
  lVar30 = *(long *)(param_3 + 0x30);
  lVar22 = param_6;
  func_0x00010b243e3c();
  pdStack_248 = (double *)0x0;
  pdStack_240 = (double *)0x0;
  pdStack_238 = (double *)0x0;
  pdVar3 = (double *)param_4[1];
  pdVar28 = (double *)0x0;
  for (pdVar27 = (double *)*param_4; pdVar23 = pdStack_240, pdVar27 != pdVar3; pdVar27 = pdVar27 + 6
      ) {
    func_0x000107c278b8(&lStack_d8,&UNK_10f73b083);
    lVar24 = *(long *)(param_6 + 0x38);
    uVar4 = *(undefined4 *)(param_6 + 0x68);
    uVar5 = *(uint *)pdVar27;
    uVar12 = *(uint *)(lVar30 + 0x10);
    dVar39 = -1.0;
    if ((uVar12 & 1) != 0) {
      lVar20 = *(long *)(lVar30 + 0x20);
      dVar32 = 0.0;
      if (*(int *)(lVar20 + 0x24) == 2) {
        unaff_d8 = pdVar27[4];
        bVar9 = false;
        bVar10 = true;
        if (0.0 < unaff_d8) {
          bVar9 = false;
          bVar10 = true;
          if (!NAN(unaff_d8)) {
            bVar9 = unaff_d8 == 5.0;
            bVar10 = 5.0 <= unaff_d8;
          }
        }
        if (bVar10 && !bVar9) goto LAB_10b241388;
        lVar25 = *(long *)(lVar20 + 0x18);
        if ((*(uint *)(lVar25 + 0x10) & 1) != 0) {
          lVar14 = *(long *)(lVar25 + 0x18);
          switch(*(uint *)((long)pdVar27 + 0x1c)) {
          case 0:
          case 4:
            fVar38 = *(float *)(lVar14 + 0x14);
            break;
          case 1:
            fVar38 = *(float *)(lVar14 + 0x18);
            break;
          case 2:
            fVar38 = *(float *)(lVar14 + 0x1c);
            break;
          case 3:
            fVar38 = *(float *)(lVar14 + 0x20);
            break;
          default:
            dVar39 = 0.0;
            goto LAB_10b2412d8;
          }
          dVar39 = (double)fVar38;
LAB_10b2412d8:
          unaff_d8 = unaff_d8 + dVar39 * (double)*(float *)(lVar14 + 0x10);
        }
        if ((*(uint *)(lVar25 + 0x10) >> 1 & 1) != 0) {
          unaff_x24 = *(ulong *)(lVar25 + 0x20);
          uVar12 = *(uint *)(pdVar27 + 3);
          fVar38 = *(float *)(unaff_x24 + 0x10);
          FUN_10b18c5cc();
          lVar14 = 0x14;
          if (uVar12 == 0x1e0) {
            lVar14 = 0x1c;
          }
          lVar1 = 0x24;
          if (uVar12 != 0x2d0) {
            lVar1 = lVar14;
          }
          lVar14 = 0x20;
          if (uVar12 != 0x21c) {
            lVar14 = lVar1;
          }
          lVar1 = 0x28;
          if (uVar12 != 0x438) {
            lVar1 = lVar14;
          }
          lVar14 = 0x18;
          if (uVar12 != 0x168) {
            lVar14 = lVar1;
          }
          fVar31 = *(float *)(unaff_x24 + lVar14);
          func_0x00010b243e3c();
          unaff_d8 = unaff_d8 + (double)fVar38 * (double)fVar31;
          uVar12 = *(uint *)(lVar30 + 0x10);
        }
        dVar32 = unaff_d8 * (double)*(float *)(lVar25 + 0x28);
        param_6 = lVar22;
      }
      fVar38 = *(float *)(lVar20 + 0x10);
      bVar9 = false;
      bVar10 = false;
      if (0.0 < dVar32) {
        bVar9 = false;
        bVar10 = true;
        if (!NAN(fVar38)) {
          bVar9 = fVar38 == 0.0;
          bVar10 = 0.0 <= fVar38;
        }
      }
      dVar39 = -1.0;
      if (bVar10 && !bVar9) {
        dVar39 = dVar32 * (double)fVar38;
      }
    }
LAB_10b241388:
    dVar32 = 0.0;
    if ((((uVar12 >> 5 & 1) != 0) && (*(char *)(param_6 + 0x170) == '\x01')) &&
       (*(long *)(param_6 + 0x150) != 0)) {
      lVar20 = *(long *)(lVar30 + 0x48);
      dVar33 = (double)*(float *)(lVar20 + 0x10);
      if (*(long *)(param_6 + 0x38) < 1) {
        func_0x00010b243e28(dVar33,*(undefined4 *)(param_6 + 0x178));
        lVar20 = extraout_x8;
        if ((extraout_x9 & 1) != 0) goto LAB_10b2415c8;
      }
      else if ((uVar12 & 1) != 0) {
LAB_10b2415c8:
        if (*(int *)(*(long *)(lVar30 + 0x20) + 0x24) == 2) {
          dVar21 = pdVar27[4];
          bVar9 = false;
          bVar10 = true;
          if (0.0 < dVar21) {
            bVar9 = false;
            bVar10 = true;
            if (!NAN(dVar21)) {
              bVar9 = dVar21 == 5.0;
              bVar10 = 5.0 <= dVar21;
            }
          }
          if (bVar10 && !bVar9) {
            func_0x00010b243e28();
            lVar20 = extraout_x8_00;
          }
        }
      }
      if (0.0 < dVar33) {
        uVar15 = *(ulong *)(param_6 + 0x140);
        if (uVar15 != 0) {
          uVar16 = (ulong)(int)*(uint *)(pdVar27 + 3);
          uVar17 = uVar15 - 1;
          if ((uVar15 & uVar17) == 0) {
            uVar18 = uVar17 & uVar16;
          }
          else {
            uVar18 = uVar16;
            if (uVar15 <= uVar16) {
              uVar18 = 0;
              if (uVar15 != 0) {
                uVar18 = uVar16 / uVar15;
              }
              uVar18 = uVar16 - uVar18 * uVar15;
            }
          }
          plVar13 = *(long **)(*(long *)(param_6 + 0x138) + uVar18 * 8);
          if (plVar13 != (long *)0x0) {
            do {
              while( true ) {
                plVar13 = (long *)*plVar13;
                if (plVar13 == (long *)0x0) goto LAB_10b241688;
                uVar19 = plVar13[1];
                if (uVar19 != uVar16) break;
                if (*(uint *)(plVar13 + 2) == *(uint *)(pdVar27 + 3)) {
                  dVar21 = 1.0;
                  if (0.0 < *(float *)(lVar20 + 0x20)) {
                    dVar36 = *(double *)(param_6 + 0x160) / (double)*(float *)(lVar20 + 0x20);
                    dVar32 = 1.0;
                    if (dVar36 <= 1.0) {
                      dVar32 = dVar36;
                    }
                    dVar21 = 0.0;
                    if (0.0 <= dVar36) {
                      dVar21 = dVar32;
                    }
                  }
                  dVar21 = dVar33 * ((double)plVar13[4] * (double)*(float *)(lVar20 + 0x18) +
                                     (double)plVar13[3] * (double)*(float *)(lVar20 + 0x14) +
                                    (double)plVar13[5] * (double)*(float *)(lVar20 + 0x1c)) * dVar21
                  ;
                  dVar32 = 1e-09;
                  if (1e-09 <= dVar21) {
                    dVar32 = dVar21;
                  }
                  goto LAB_10b241390;
                }
              }
              if ((uVar15 & uVar17) == 0) {
                uVar19 = uVar19 & uVar17;
              }
              else if (uVar15 <= uVar19) {
                uVar7 = 0;
                if (uVar15 != 0) {
                  uVar7 = uVar19 / uVar15;
                }
                uVar19 = uVar19 - uVar7 * uVar15;
              }
            } while (uVar19 == uVar18);
          }
        }
LAB_10b241688:
        FUN_10b23ed1c(0xd8,0);
        dVar32 = 1e-09;
      }
    }
LAB_10b241390:
    if (dVar39 == -1.0) {
      if (((*(byte *)(lVar30 + 0x10) & 1) == 0) || (*(int *)(*(long *)(lVar30 + 0x20) + 0x24) != 2))
      {
        bVar9 = false;
      }
      else {
        bVar9 = 5.0 < pdVar27[4] || pdVar27[4] <= 0.0;
      }
      uVar12 = 0;
      if (((bVar9) && (0.0 < dVar32)) && (dVar39 = 0.0, 0.0 < *(float *)(param_6 + 0x17c)))
      goto LAB_10b241424;
      func_0x00010b243cfc();
      bVar9 = false;
    }
    else {
LAB_10b241424:
      cVar6 = *(char *)(param_6 + 0x1a8);
      if (cVar6 == '\x01') {
        ppuVar2 = &PTR_PTR_1133a3aa8;
        if (*(undefined ***)(param_6 + 0x198) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(param_6 + 0x198);
        }
        puVar34 = ppuVar2[2];
        bVar9 = false;
        bVar10 = true;
        bVar11 = false;
        if (0.0 < dVar39) {
          bVar9 = false;
          bVar10 = false;
          bVar11 = true;
          if (!NAN((double)puVar34)) {
            bVar9 = (double)puVar34 < 0.0;
            bVar10 = (double)puVar34 == 0.0;
            bVar11 = false;
          }
        }
        dVar33 = dVar39 * (double)puVar34;
        if (bVar10 || bVar9 != bVar11) {
          dVar33 = dVar39;
        }
        if (lVar24 < 1) {
          bVar9 = true;
          if (0.0 < (double)ppuVar2[4]) {
            lVar24 = (long)(double)ppuVar2[4];
          }
        }
        else {
          bVar9 = false;
        }
      }
      else {
        bVar9 = lVar24 < 1;
        dVar33 = dVar39;
      }
      dVar21 = pdVar27[1];
      dVar39 = dVar33;
      if (((long)dVar21 < 1) || ((*(uint *)(lVar30 + 0x10) >> 1 & 1) == 0)) {
LAB_10b241770:
        bVar10 = false;
        if (0.0 < dVar32) {
          bVar10 = bVar9;
        }
        if ((bVar10) && (unaff_d8 = 0.0, 0.0 < *(float *)(lVar22 + 0x178))) goto LAB_10b241798;
        func_0x00010b243cfc();
      }
      else {
        lVar20 = *(long *)(lVar30 + 0x28);
        if (*(int *)(lVar20 + 0x24) == 3) {
          lVar25 = *(long *)(lVar20 + 0x18);
          if ((*(byte *)(lVar25 + 0x10) & 1) != 0) {
            dVar21 = (double)(ulong)*(uint *)(*(long *)(lVar25 + 0x18) + 0x10);
            FUN_10b241fe8(dVar21,*(undefined4 *)(*(long *)(lVar25 + 0x18) + 0x14),uVar4,
                          lVar22 + 0x180);
            if (0.0 < dVar21) {
              lVar14 = lVar22 + 0xd8;
              func_0x00010b243bcc(lVar14,pdVar27);
              if ((lVar14 == 0) || ((long)*(ulong *)(lVar14 + 0x28) < 1)) {
                func_0x00010b242058(&dStack_200,0,pdVar27[1],lVar24,*(undefined8 *)(lVar22 + 0x198),
                                    *(undefined1 *)(lVar22 + 0x1a8));
                dVar36 = dStack_200;
                unaff_d8 = dVar21;
                if (dStack_1f0._0_1_ != '\x01') goto LAB_10b241770;
              }
              else {
                dVar36 = (double)*(ulong *)(lVar14 + 0x28);
              }
              dVar37 = 0.0;
              if (0.0 <= dVar36 - dVar21) {
                dVar37 = dVar36 - dVar21;
              }
              dVar37 = dVar37 / 1000.0;
              dVar21 = (double)*(float *)(lVar25 + 0x24);
              if (*(float *)(lVar25 + 0x24) <= 0.0 || 0x7fefffffffffffff < (ulong)ABS(dVar21)) {
                dVar21 = 1.0;
              }
              dVar36 = 4.0;
              if (dVar21 <= 4.0) {
                dVar36 = dVar21;
              }
              dVar35 = dVar37;
              _pow(dVar37,dVar36);
              if (dVar36 == 1.0) {
                dVar35 = dVar37;
              }
              dVar35 = dVar35 * (double)*(float *)(lVar25 + 0x20);
              unaff_d8 = dVar37;
              if (dVar35 != -1.0) goto LAB_10b241748;
            }
          }
          goto LAB_10b241770;
        }
        dVar35 = 0.0;
        dVar37 = unaff_d8;
        if (*(int *)(lVar20 + 0x24) == 2) {
          unaff_x24 = *(ulong *)(lVar20 + 0x18);
          if ((*(byte *)(unaff_x24 + 0x10) & 1) != 0) {
            dVar37 = (double)(ulong)*(uint *)(*(long *)(unaff_x24 + 0x18) + 0x10);
            FUN_10b241fe8(dVar37,*(undefined4 *)(*(long *)(unaff_x24 + 0x18) + 0x14),uVar4,
                          lVar22 + 0x180);
            if (0.0 < dVar37) {
              func_0x00010b242058(&dStack_200,unaff_x24,dVar21,lVar24,
                                  *(undefined8 *)(lVar22 + 0x198),cVar6);
              unaff_d8 = dVar37;
              if (dStack_1f0._0_1_ == '\x01') {
                dVar21 = 0.0;
                if (0.0 <= dStack_200 - dVar37) {
                  dVar21 = dStack_200 - dVar37;
                }
                dVar35 = (dVar21 / 1000.0) * (double)*(float *)(unaff_x24 + 0x20);
                goto LAB_10b241748;
              }
            }
          }
          goto LAB_10b241770;
        }
LAB_10b241748:
        unaff_d8 = dVar37;
        if (*(float *)(lVar20 + 0x10) <= 0.0) goto LAB_10b241770;
        unaff_d8 = dVar35 * (double)*(float *)(lVar20 + 0x10);
        bVar10 = true;
        if ((-1e-06 <= dVar35) && (bVar10 = false, !NAN(unaff_d8))) {
          bVar10 = unaff_d8 == -1.0;
        }
        if (bVar10) goto LAB_10b241770;
LAB_10b241798:
        if (0 < (long)pdVar27[1]) {
          dVar21 = 0.0;
          func_0x00010b243e3c(*(undefined1 *)(lVar30 + 0x10));
          if ((extraout_w8 >> 2 & 1) != 0) {
            lVar24 = *(long *)(lVar30 + 0x30);
            dVar36 = 0.0;
            if (*(int *)(lVar24 + 0x24) == 2) {
              dVar36 = (((double)extraout_x9_00 * 3.0 * 0.125) / 1000.0) *
                       (double)*(float *)(*(long *)(lVar24 + 0x18) + 0x10);
            }
            if ((0.0 < *(float *)(lVar24 + 0x10)) &&
               (dVar21 = dVar36 * (double)*(float *)(lVar24 + 0x10), dVar21 == -1.0)) {
              uVar12 = 0;
              bVar9 = false;
              func_0x00010b243cfc();
              param_6 = lVar22;
              goto LAB_10b24187c;
            }
          }
          dStack_2c8 = ((dVar32 + dVar33) - unaff_d8) - dVar21;
          uStack_2bc = uVar5 >> 8;
          uVar12 = uVar5 & 0xff;
          bVar9 = true;
          param_6 = lVar22;
          unaff_d15 = dVar21;
          goto LAB_10b24187c;
        }
        func_0x00010b243cfc();
      }
      uVar12 = 0;
      bVar9 = false;
      func_0x00010b243e3c();
      param_6 = lVar22;
    }
LAB_10b24187c:
    func_0x00010b243db0();
    if (!bVar9) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      pdStack_248 = pdVar28;
      goto LAB_10b241e34;
    }
    dStack_1f8 = pdVar27[1];
    dStack_200 = *pdVar27;
    dStack_1e8 = pdVar27[3];
    dStack_1f0 = pdVar27[2];
    dStack_1d8 = pdVar27[5];
    dStack_1e0 = pdVar27[4];
    uVar12 = uVar12 | uStack_2bc << 8;
    if (pdVar23 < pdStack_238) {
      dVar21 = pdVar27[1];
      dVar33 = *pdVar27;
      dVar36 = pdVar27[2];
      dVar35 = pdVar27[5];
      dVar37 = pdVar27[4];
      pdVar23[3] = pdVar27[3];
      pdVar23[2] = dVar36;
      pdVar23[5] = dVar35;
      pdVar23[4] = dVar37;
      pdVar23[1] = dVar21;
      *pdVar23 = dVar33;
      *(uint *)(pdVar23 + 6) = uVar12;
      pdVar23[7] = dStack_2c8;
      pdVar23[8] = dVar39;
      pdVar23[9] = dVar32;
      pdVar23[10] = unaff_d8;
      pdVar23[0xb] = unaff_d15;
      pdVar23 = pdVar23 + 0xc;
      pdVar29 = pdVar28;
    }
    else {
      lVar24 = (long)pdVar23 - (long)pdVar28;
      uVar15 = lVar24 / 0x60 + 1;
      if (unaff_x24 < uVar15) {
        pdStack_248 = pdVar28;
        FUN_10b242354();
        goto LAB_10b241e90;
      }
      uVar17 = ((long)pdStack_238 - (long)pdVar28) / 0x60;
      uVar16 = uVar17 * 2;
      if (uVar16 < uVar15 || uVar16 - uVar15 == 0) {
        uVar16 = uVar15;
      }
      if (0x155555555555554 < uVar17) {
        uVar16 = unaff_x24;
      }
      if (uVar16 == 0) {
        lVar20 = 0;
      }
      else {
        if (unaff_x24 < uVar16) {
          pdStack_248 = pdVar28;
          func_0x000104bd35f4();
          goto LAB_10b241e90;
        }
        lVar20 = uVar16 * 0x60;
        __Znwm();
      }
      pdVar29 = (double *)(lVar20 + lVar24);
      pdVar26 = (double *)(lVar20 + uVar16 * 0x60);
      pdVar29[1] = dStack_1f8;
      *pdVar29 = dStack_200;
      pdVar29[3] = dStack_1e8;
      pdVar29[2] = dStack_1f0;
      pdVar29[5] = dStack_1d8;
      pdVar29[4] = dStack_1e0;
      *(uint *)(pdVar29 + 6) = uVar12;
      pdVar29[7] = dStack_2c8;
      pdVar29[8] = dVar39;
      pdVar29[9] = dVar32;
      pdVar29[10] = unaff_d8;
      pdVar29[0xb] = unaff_d15;
      pdVar23 = pdVar29 + 0xc;
      pdVar29 = pdVar29 + (lVar24 / -0x60) * 0xc;
      _memcpy(pdVar29,pdVar28,lVar24);
      pdStack_238 = pdVar26;
      if (pdVar28 != (double *)0x0) {
        pdStack_240 = pdVar23;
        __ZdlPv(pdVar28);
      }
    }
    pdVar28 = pdVar29;
    pdStack_240 = pdVar23;
  }
  lVar22 = ((long)pdStack_240 - (long)pdVar28) / 0x60;
  pdStack_248 = pdVar28;
  if ((long)pdStack_240 - (long)pdVar28 != 0) {
    FUN_10b242360(pdVar28,pdStack_240,LZCOUNT(lVar22) << 1 ^ 0x7e,1);
  }
  lStack_260 = 0;
  lStack_258 = 0;
  lStack_250 = 0;
  FUN_10b241f60(&lStack_260,lVar22);
  for (; pdVar28 != pdVar23; pdVar28 = pdVar28 + 0xc) {
    FUN_10b243528(&lStack_260,pdVar28);
  }
  if (param_5 < 1) {
    func_0x000107c278b8(&lStack_d8,"");
    goto LAB_10b241bc0;
  }
  lVar20 = lStack_258 - lStack_260;
  for (lVar24 = lStack_260; lStack_218 = param_5, lVar24 != lStack_258; lVar24 = lVar24 + 0x30) {
    if (param_5 < *(long *)(lVar24 + 8)) {
      lVar22 = lStack_258 + -0x30;
      goto LAB_10b241b14;
    }
    lVar20 = lVar20 + -0x30;
  }
  goto LAB_10b241b8c;
  while( true ) {
    lVar22 = lVar25 + -0x30;
    lVar20 = lVar20 + -0x30;
    if (*(long *)(lVar25 + 8) <= param_5) break;
LAB_10b241b14:
    lVar25 = lVar22;
    lVar22 = lVar25;
    if (lVar24 == lVar25) goto LAB_10b241b8c;
  }
  dStack_200 = 0.0;
  dStack_1f8 = 0.0;
  if (0x60 < lVar20) {
    FUN_10b24368c(&lStack_d8,lVar20 / 0x30 + 1);
    FUN_10b2436ec(&dStack_200,&lStack_d8);
    FUN_10b243934(&lStack_d8);
  }
  FUN_10b24371c(lVar24,lVar25,&lStack_218,lVar20 / 0x30 + 1,dStack_200,dStack_1f8);
  FUN_10b243934(&dStack_200);
LAB_10b241b8c:
  __ZNSt3__19to_stringEx(auStack_290,param_5);
  func_0x000107c27f54(auStack_278,&UNK_10f73a8d2,auStack_290);
  func_0x000107c27fac(&lStack_d8,auStack_278,&UNK_10f73b07e);
LAB_10b241bc0:
  func_0x000107c2831c(&dStack_200,&lStack_d8,*(ulong *)(lVar30 + 0x18) & 0xfffffffffffffffc);
  func_0x000107c27b9c(param_6 + 0x48,&dStack_200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&dStack_200);
  func_0x00010b243db0();
  if (0 < param_5) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_290);
  }
  pdVar27 = pdStack_248;
  if (pdStack_248 == pdVar23) {
    func_0x000107c278b8(auStack_2a8,&DAT_10f56e05e);
  }
  else {
    func_0x0001054901a8(&dStack_200);
    lStack_218 = 0;
    pdStack_210 = (double *)0x0;
    pdStack_208 = (double *)0x0;
    uVar15 = ((long)pdVar23 - (long)pdVar27) / 0x60;
    if (0x555555555555555 < uVar15) {
      FUN_10b242108();
LAB_10b241e90:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10b241e94);
      (*pcVar8)();
    }
    FUN_10b242114(&lStack_d8,uVar15,0,&pdStack_208);
    func_0x00010b243e1c(pdStack_d0);
    lVar30 = lStack_218;
    pdStack_208 = pdStack_c0;
    pdStack_210 = pdStack_c8;
    lStack_218 = lVar22;
    func_0x00010b243dd4(lVar30);
    for (; pdVar27 != pdVar23; pdVar27 = pdVar27 + 0xc) {
      if (pdStack_210 < pdStack_208) {
        dVar32 = pdVar27[7];
        dVar39 = pdVar27[6];
        dVar33 = pdVar27[8];
        dVar36 = pdVar27[0xb];
        dVar21 = pdVar27[10];
        pdStack_210[3] = pdVar27[9];
        pdStack_210[2] = dVar33;
        pdStack_210[5] = dVar36;
        pdStack_210[4] = dVar21;
        pdStack_210[1] = dVar32;
        *pdStack_210 = dVar39;
        pdVar28 = pdStack_210 + 6;
      }
      else {
        lVar30 = ((long)pdStack_210 - lStack_218) / 0x30;
        uVar15 = lVar30 + 1;
        if (0x555555555555555 < uVar15) {
          FUN_10b242108();
          goto LAB_10b241e90;
        }
        uVar17 = ((long)pdStack_208 - lStack_218) / 0x30;
        uVar16 = uVar17 * 2;
        if (uVar16 < uVar15 || uVar16 - uVar15 == 0) {
          uVar16 = uVar15;
        }
        if (0x2aaaaaaaaaaaaa9 < uVar17) {
          uVar16 = 0x555555555555555;
        }
        FUN_10b242114(&lStack_d8,uVar16,lVar30,&pdStack_208);
        dVar21 = pdVar27[9];
        dVar33 = pdVar27[8];
        dVar32 = pdVar27[0xb];
        dVar39 = pdVar27[10];
        dVar36 = pdVar27[6];
        pdStack_c8[1] = pdVar27[7];
        *pdStack_c8 = dVar36;
        pdStack_c8[3] = dVar21;
        pdStack_c8[2] = dVar33;
        pdStack_c8[5] = dVar32;
        pdStack_c8[4] = dVar39;
        pdVar28 = pdStack_c8 + 6;
        func_0x00010b243e1c(pdStack_d0);
        lVar30 = lStack_218;
        pdStack_208 = pdStack_c0;
        lStack_218 = lVar22;
        pdStack_210 = pdVar28;
        func_0x00010b243dd4(lVar30);
      }
      pdStack_210 = pdVar28;
    }
    func_0x00010549023c(&dStack_200,&DAT_10f62a9e8);
    lStack_d8 = lStack_218;
    pdStack_d0 = pdStack_210;
    pdStack_c8 = (double *)&DAT_10f68f19e;
    pdStack_c0 = (double *)0x2;
    plStack_f0 = &lStack_d8;
    pcStack_e8 = FUN_10b2421cc;
    func_0x000107c2793c(&DAT_10f2fb62f);
    func_0x000107c3173c(auStack_230);
    func_0x000107c28084(&dStack_200,auStack_230);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_230);
    func_0x00010549023c(&dStack_200,&DAT_10f62a9ea);
    func_0x000105491b64(auStack_2a8,&dStack_1f8);
    FUN_10b242328(&lStack_218);
    func_0x000105490284(&dStack_200);
  }
  func_0x000107c27b9c(param_6 + 0x118,auStack_2a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
  param_1[1] = lStack_258;
  *param_1 = lStack_260;
  param_1[2] = lStack_250;
  lStack_260 = 0;
  lStack_258 = 0;
  lStack_250 = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_10b225f10(&lStack_260);
LAB_10b241e34:
  FUN_10b243660(&pdStack_248);
  return;
}



/* Entry: 10b241f60; end: 10b241fe7;  */

double FUN_10b241f60(double param_1,float param_2,long *param_3,ulong param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_3[2] - *param_3) / 0x30) < param_4) {
    if (0x555555555555555 < param_4) {
      FUN_10b224d1c();
      fVar6 = SUB84(param_1,0);
      iVar1 = (int)param_3;
      func_0x00010b243de4();
      func_0x00010b243d8c();
      lVar5 = 0x14;
      piVar2 = (int *)&UNK_10e56e5b4;
      do {
        piVar3 = (int *)&DAT_10e56e5cc;
        if (lVar5 == 0) break;
        piVar3 = piVar2 + 1;
        lVar5 = lVar5 + -4;
        piVar2 = piVar3;
      } while (*piVar3 != iVar1);
      if (param_2 <= 0.0 || piVar3 == (int *)&DAT_10e56e5cc) {
        param_2 = fVar6;
      }
      dVar7 = (double)param_2;
      dVar8 = dVar7;
      if (((*(char *)(param_4 + 0x28) == '\x01') && ((*(byte *)(param_4 + 0x10) >> 1 & 1) != 0)) &&
         (uVar4 = *(ulong *)(*(long *)(param_4 + 0x20) + 0x10), dVar8 = (double)uVar4,
         (long)uVar4 < 1)) {
        dVar8 = dVar7;
      }
      return dVar8;
    }
    FUN_10b24348c(auStack_48,param_4,(param_3[1] - *param_3) / 0x30);
    func_0x00010b243e10();
    func_0x00010b243de4();
  }
  return param_1;
}



/* Entry: 10b241fe8; end: 10b242107;  */

double FUN_10b241fe8(float param_1,float param_2,int param_3,long param_4)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar4 = 0x14;
  piVar1 = (int *)&UNK_10e56e5b4;
  do {
    piVar2 = (int *)&DAT_10e56e5cc;
    if (lVar4 == 0) break;
    piVar2 = piVar1 + 1;
    lVar4 = lVar4 + -4;
    piVar1 = piVar2;
  } while (*piVar2 != param_3);
  if (param_2 <= 0.0 || piVar2 == (int *)&DAT_10e56e5cc) {
    param_2 = param_1;
  }
  dVar5 = (double)param_2;
  dVar6 = dVar5;
  if (((*(char *)(param_4 + 0x28) == '\x01') && ((*(byte *)(param_4 + 0x10) >> 1 & 1) != 0)) &&
     (uVar3 = *(ulong *)(*(long *)(param_4 + 0x20) + 0x10), dVar6 = (double)uVar3, (long)uVar3 < 1))
  {
    dVar6 = dVar5;
  }
  return dVar6;
}



/* Entry: 10b242108; end: 10b242113;  */

long * FUN_10b242108(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010b243e04();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x555555555555555 < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[2];
      while (lVar1 != param_1[1]) {
        lVar1 = lVar1 + -0x30;
        param_1[2] = lVar1;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x30;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10b242114; end: 10b24218b;  */

long * FUN_10b242114(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x555555555555555 < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[2];
      while (lVar1 != param_1[1]) {
        lVar1 = lVar1 + -0x30;
        param_1[2] = lVar1;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x30;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x30;
  return param_1;
}



/* Entry: 10b24218c; end: 10b2421cb;  */

long * FUN_10b24218c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x30;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2421cc; end: 10b24226f;  */

void FUN_10b2421cc(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [64];
  
  puVar2 = auStack_70;
  func_0x000107c2837c(auStack_70);
  func_0x000107c28378(auStack_70,param_2);
  lVar3 = *param_2;
  *param_2 = (long)puVar2;
  param_2[1] = param_2[1] + (lVar3 - (long)puVar2);
  lVar3 = *param_1;
  if (param_1[1] == lVar3) {
    puVar2 = (undefined1 *)*param_3;
  }
  else {
    while( true ) {
      puVar2 = auStack_70;
      FUN_10b242270(auStack_70,lVar3,param_3);
      lVar3 = lVar3 + 0x30;
      if (lVar3 == param_1[1]) break;
      lVar1 = param_1[2] + param_1[3];
      func_0x000107c283a4();
      *param_3 = lVar1;
    }
  }
  *param_3 = (long)puVar2;
  return;
}



/* Entry: 10b242270; end: 10b242327;  */

undefined8 FUN_10b242270(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  undefined8 **ppuStack_b8;
  long lStack_b0;
  char cStack_a1;
  undefined8 **ppuStack_a0;
  long lStack_98;
  ulong uStack_90;
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
  
  uStack_90 = (ulong)*param_2;
  uStack_80 = *(undefined8 *)(param_2 + 2);
  uStack_70 = *(undefined8 *)(param_2 + 4);
  uStack_60 = *(undefined8 *)(param_2 + 6);
  uStack_50 = *(undefined8 *)(param_2 + 8);
  uStack_40 = *(undefined8 *)(param_2 + 10);
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  func_0x000107c2793c(&UNK_10f73b09d);
  func_0x000107c3173c(&ppuStack_b8);
  ppuStack_a0 = ppuStack_b8;
  if (-1 < (long)cStack_a1) {
    ppuStack_a0 = &ppuStack_b8;
  }
  lStack_98 = lStack_b0;
  if (-1 < cStack_a1) {
    lStack_98 = (long)cStack_a1;
  }
  func_0x000107c28388(param_1,&ppuStack_a0,param_3);
  func_0x00010b243dec();
  return param_3;
}



/* Entry: 10b242328; end: 10b242353;  */

long * FUN_10b242328(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b242354; end: 10b24235f;  */

/* WARNING: Possible PIC construction at 0x00010b243064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b243068) */
/* WARNING: Removing unreachable block (ram,0x00010b24308c) */
/* WARNING: Removing unreachable block (ram,0x00010b243090) */
/* WARNING: Removing unreachable block (ram,0x00010b24309c) */
/* WARNING: Removing unreachable block (ram,0x00010b2430dc) */
/* WARNING: Removing unreachable block (ram,0x00010b2430e0) */
/* WARNING: Removing unreachable block (ram,0x00010b2430ec) */
/* WARNING: Removing unreachable block (ram,0x00010b243128) */
/* WARNING: Removing unreachable block (ram,0x00010b24312c) */
/* WARNING: Removing unreachable block (ram,0x00010b243138) */
/* WARNING: Removing unreachable block (ram,0x00010b243170) */
/* WARNING: Removing unreachable block (ram,0x00010b243174) */
/* WARNING: Removing unreachable block (ram,0x00010b243180) */
/* WARNING: Removing unreachable block (ram,0x00010b243198) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b242354(undefined8 param_1,double param_2,double param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,ulong param_7)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  ulong uVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  undefined8 *puVar16;
  undefined8 *extraout_x8_10;
  undefined8 *extraout_x8_11;
  ulong extraout_x8_12;
  undefined8 *extraout_x8_13;
  undefined8 *extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  uint extraout_w9_05;
  uint extraout_w9_06;
  uint extraout_w9_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  undefined8 *extraout_x11;
  long extraout_x12;
  long extraout_x13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *******pppppppuVar23;
  code *pcVar24;
  double dVar25;
  double dVar26;
  undefined8 unaff_d9;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [80];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *******pppppppuStack_170;
  code *pcStack_168;
  undefined1 auStack_160 [8];
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_90;
  undefined8 *******pppppppuStack_20;
  code *pcStack_18;
  
  func_0x00010b243e04();
  puVar4 = auStack_160;
  pcStack_18 = FUN_10b242360;
  puVar12 = param_6;
  pppppppuStack_20 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010b243db8();
  uStack_90 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
LAB_10b2423ac:
  puStack_148 = unaff_x19 + -0xc;
  puStack_150 = unaff_x19 + -0x18;
  puStack_158 = unaff_x19 + -0x24;
  puVar10 = unaff_x20;
LAB_10b2423c4:
  unaff_x20 = puVar10;
  puVar17 = (undefined8 *)0x60;
  uVar14 = (long)unaff_x19 - (long)unaff_x20;
  uVar19 = (long)uVar14 / 0x60;
  uVar7 = uVar19 == 5;
  puVar11 = unaff_x19;
  switch(uVar19) {
  case 0:
  case 1:
    goto LAB_10b242804;
  case 2:
    func_0x00010b243c68(unaff_x19[-0xb],unaff_x19[-5],unaff_x20[7]);
    uVar13 = extraout_w10;
    if (param_3 <= 1e-06) {
      uVar13 = (uint)(extraout_x8_08 < extraout_x9_01);
    }
    uVar7 = uVar13 == 1;
    if ((bool)uVar7) {
      func_0x00010b243c84(&uStack_f0);
      puVar11 = puStack_148;
      func_0x00010b243c78(unaff_x20);
      param_5 = &uStack_f0;
      param_4 = puVar11;
      func_0x00010b243cb0();
    }
    goto LAB_10b242804;
  case 3:
    func_0x00010b243c9c(uStack_90);
    pppppppuStack_170 = pppppppuStack_20;
    if (!(bool)uVar7) goto LAB_10b242dc8;
    param_5 = unaff_x20 + 0xc;
    param_4 = unaff_x20;
    puVar12 = puStack_148;
    pcVar24 = pcStack_18;
    func_0x00010b243d4c();
    goto code_r0x00010b242dcc;
  case 4:
    func_0x00010b243c9c(uStack_90);
    pppppppuVar23 = pppppppuStack_20;
    if (!(bool)uVar7) goto LAB_10b242dc8;
    puVar10 = unaff_x20 + 0x18;
    puVar11 = puStack_148;
    pcVar24 = pcStack_18;
    func_0x00010b243d4c(unaff_x20,unaff_x20 + 0xc);
    break;
  case 5:
    func_0x00010b243c9c(uStack_90);
    pppppppuStack_170 = pppppppuStack_20;
    if (!(bool)uVar7) goto LAB_10b242dc8;
    puVar17 = unaff_x20 + 0x18;
    puVar12 = unaff_x20 + 0x24;
    pcVar24 = pcStack_18;
    func_0x00010b243d4c(unaff_x20,unaff_x20 + 0xc,puVar17,puVar12,puStack_148);
    puVar4 = auStack_210;
    uStack_1a8 = 0x3eb0c6f7a0b5ed8d;
    puStack_188 = (undefined8 *)0x60;
    pppppppuVar23 = &pppppppuStack_170;
    puVar10 = puVar17;
    puVar11 = puVar12;
    uStack_1b0 = unaff_d9;
    uStack_1a0 = unaff_x24;
    puStack_198 = unaff_x23;
    puStack_190 = param_6;
    puStack_180 = unaff_x20;
    puStack_178 = unaff_x19;
    pcStack_168 = pcVar24;
    func_0x00010b243db8();
    pcVar24 = (code *)0x10b243068;
    param_6 = puVar12;
    break;
  default:
    if ((long)uVar14 < 0x900) {
      uVar7 = unaff_x20 == unaff_x19;
      if ((param_7 & 1) == 0) {
        if (!(bool)uVar7) {
          puVar17 = unaff_x20 + 0x14;
          while( true ) {
            param_6 = unaff_x20 + 0xc;
            uVar7 = 1;
            if (param_6 == unaff_x19) break;
            lVar22 = unaff_x20[0xd];
            param_3 = ABS((double)unaff_x20[0x13] - (double)unaff_x20[7]);
            bVar8 = (double)unaff_x20[7] < (double)unaff_x20[0x13];
            if (param_3 <= 1e-06) {
              bVar8 = lVar22 < (long)unaff_x20[1];
            }
            if (bVar8) {
              uVar20 = unaff_x20[0xc];
              uStack_e8 = unaff_x20[0xf];
              uStack_f0 = unaff_x20[0xe];
              uStack_d8 = unaff_x20[0x11];
              uStack_e0 = unaff_x20[0x10];
              uStack_d0 = unaff_x20[0x12];
              unaff_d9 = unaff_x20[0x13];
              uStack_118 = unaff_x20[0x15];
              uStack_120 = unaff_x20[0x14];
              uStack_108 = unaff_x20[0x17];
              dVar25 = (double)unaff_x20[0x16];
              puVar10 = puVar17;
              dStack_110 = dVar25;
              do {
                puVar9 = puVar10;
                param_5 = puVar9 + -0x14;
                param_4 = puVar9 + -8;
                func_0x00010b243cb0();
                func_0x00010b243cc8(puVar9[-0x19]);
                uVar13 = extraout_w8_02;
                if (dVar25 <= 1e-06) {
                  uVar13 = (uint)(lVar22 < (long)puVar9[-0x1f]);
                }
                puVar10 = puVar9 + -0xc;
              } while ((uVar13 & 1) != 0);
              puVar9[-0x14] = uVar20;
              puVar9[-0x13] = lVar22;
              puVar9[-0x11] = uStack_e8;
              puVar9[-0x12] = uStack_f0;
              puVar9[-0xf] = uStack_d8;
              puVar9[-0x10] = uStack_e0;
              puVar9[-0xe] = uStack_d0;
              puVar9[-0xd] = unaff_d9;
              puVar9[-0xb] = uStack_118;
              puVar9[-0xc] = uStack_120;
              puVar9[-9] = uStack_108;
              puVar9[-10] = dStack_110;
            }
            puVar17 = puVar17 + 0xc;
            unaff_x20 = param_6;
          }
        }
        goto LAB_10b242804;
      }
      if ((bool)uVar7) goto LAB_10b242804;
      param_6 = (undefined8 *)0x0;
      puVar10 = unaff_x20;
      goto LAB_10b242918;
    }
    if (param_6 == (undefined8 *)0x0) {
      uVar7 = 1;
      if (unaff_x20 == unaff_x19) goto LAB_10b242804;
      uVar18 = uVar19 - 2 >> 1;
      uVar14 = uVar18;
      goto LAB_10b242a00;
    }
    param_4 = unaff_x20 + (uVar19 >> 1) * 0xc;
    cVar5 = SBORROW8(uVar14,0x3000);
    cVar6 = (long)(uVar14 - 0x3000) < 0;
    uVar7 = uVar14 == 0x3000;
    if (uVar14 < 0x3001) {
      puVar12 = puStack_148;
      FUN_10b242dcc(param_4,unaff_x20);
    }
    else {
      FUN_10b242dcc(unaff_x20,param_4,puStack_148);
      FUN_10b242dcc(unaff_x20 + 0xc,param_4 + -0xc,puStack_150);
      FUN_10b242dcc(unaff_x20 + 0x18,param_4 + 0xc,puStack_158);
      puVar12 = param_4 + 0xc;
      FUN_10b242dcc(param_4 + -0xc,param_4);
      func_0x00010b243c84(&uStack_f0);
      func_0x00010b243cb0(unaff_x20,param_4);
      func_0x00010b243cb0(param_4,&uStack_f0);
    }
    param_6 = (undefined8 *)((long)param_6 + -1);
    if ((param_7 & 1) != 0) {
      lVar22 = unaff_x20[1];
      unaff_d9 = unaff_x20[7];
LAB_10b2424a8:
      lVar15 = 0;
      unaff_x24 = *unaff_x20;
      uStack_118 = unaff_x20[3];
      uStack_120 = unaff_x20[2];
      uStack_108 = unaff_x20[5];
      dStack_110 = (double)unaff_x20[4];
      uStack_100 = unaff_x20[6];
      uStack_138 = unaff_x20[9];
      uStack_140 = unaff_x20[8];
      uStack_128 = unaff_x20[0xb];
      param_2 = (double)unaff_x20[10];
      dStack_130 = param_2;
      do {
        func_0x00010b243cf0(*(undefined8 *)((long)unaff_x20 + lVar15 + 0x98));
        bVar8 = !(bool)uVar7;
        bVar1 = cVar6 == cVar5;
        cVar5 = NAN(param_2);
        uVar7 = param_2 == 1e-06;
        cVar6 = param_2 < 1e-06;
        bVar8 = bVar8 && bVar1;
        if (param_2 <= 1e-06) {
          bVar8 = *(long *)(extraout_x9 + 0x68) < lVar22;
        }
        lVar15 = extraout_x8_00 + 0x60;
      } while (bVar8);
      unaff_x23 = (undefined8 *)((long)unaff_x20 + lVar15);
      cVar6 = SBORROW8(lVar15,0x60);
      cVar5 = extraout_x8_00 < 0;
      bVar8 = false;
      puVar9 = unaff_x19;
      puVar17 = unaff_x19;
      puVar10 = unaff_x23;
      if (lVar15 == 0x60) {
        do {
          puVar11 = puVar9;
          if (puVar9 <= unaff_x23) break;
          puVar11 = puVar9 + -0xc;
          func_0x00010b243cb8(puVar9[-5]);
          uVar13 = extraout_w9_00;
          if (param_2 <= 1e-06) {
            uVar13 = (uint)(*(long *)(extraout_x8_01 + -0x58) < lVar22);
          }
          puVar9 = puVar11;
        } while ((uVar13 & 1) == 0);
      }
      else {
        do {
          puVar11 = puVar17 + -0xc;
          func_0x00010b243cf0(puVar17[-5]);
          bVar8 = !bVar8 && cVar5 == cVar6;
          if (param_2 <= 1e-06) {
            bVar8 = *(long *)(extraout_x9_00 + -0x58) < lVar22;
          }
          uVar13 = (uint)bVar8;
          cVar6 = SBORROW4(uVar13,1);
          cVar5 = (int)(uVar13 - 1) < 0;
          bVar8 = uVar13 == 1;
          puVar17 = puVar11;
          puVar9 = puVar11;
        } while (!bVar8);
      }
      while (puVar10 < puVar11) {
        func_0x00010b243cb0(&uStack_f0,puVar10);
        func_0x00010b243cb0(puVar10,puVar11);
        func_0x00010b243cb0(puVar11,&uStack_f0);
        do {
          puVar17 = puVar10 + 0x13;
          puVar16 = puVar10 + 0xd;
          puVar10 = puVar10 + 0xc;
          func_0x00010b243cb8(*puVar16,*puVar17);
          uVar13 = extraout_w9_01;
          if (param_2 <= 1e-06) {
            uVar13 = (uint)(extraout_x8_02 < lVar22);
          }
        } while ((uVar13 & 1) != 0);
        do {
          puVar17 = puVar11 + -5;
          puVar16 = puVar11 + -0xb;
          puVar11 = puVar11 + -0xc;
          func_0x00010b243cb8(*puVar16,*puVar17);
          uVar13 = extraout_w9_02;
          if (param_2 <= 1e-06) {
            uVar13 = (uint)(extraout_x8_03 < lVar22);
          }
        } while ((uVar13 & 1) == 0);
      }
      puVar11 = puVar10 + -0xc;
      if (unaff_x20 != puVar11) {
        func_0x00010b243cb0(unaff_x20,puVar11);
      }
      puVar10[-0xc] = unaff_x24;
      puVar10[-0xb] = lVar22;
      func_0x00010b243d6c();
      uVar7 = unaff_x23 == puVar9;
      puVar17 = (undefined8 *)0x60;
      if (puVar9 <= unaff_x23) {
        puVar9 = unaff_x20;
        FUN_10b2431b4(unaff_x20,puVar11);
        param_4 = puVar10;
        param_5 = unaff_x19;
        FUN_10b2431b4();
        if ((int)param_4 != 0) goto LAB_10b2427e0;
        if (((ulong)puVar9 & 1) != 0) goto LAB_10b2423c4;
      }
      puVar12 = param_6;
      FUN_10b242360();
      param_7 = 0;
      param_4 = unaff_x20;
      param_5 = puVar11;
      goto LAB_10b2423c4;
    }
    lVar22 = unaff_x20[1];
    unaff_d9 = unaff_x20[7];
    func_0x00010b243cb8(unaff_x20[-0xb],unaff_x20[-5]);
    cVar5 = NAN(param_2);
    uVar7 = param_2 == 1e-06;
    cVar6 = param_2 < 1e-06;
    uVar13 = extraout_w9;
    if (param_2 <= 1e-06) {
      uVar13 = (uint)(extraout_x8 < lVar22);
    }
    if ((uVar13 & 1) != 0) goto LAB_10b2424a8;
    uVar20 = *unaff_x20;
    uStack_118 = unaff_x20[3];
    uStack_120 = unaff_x20[2];
    uStack_108 = unaff_x20[5];
    dStack_110 = (double)unaff_x20[4];
    uStack_100 = unaff_x20[6];
    unaff_d9 = unaff_x20[7];
    uStack_138 = unaff_x20[9];
    uStack_140 = unaff_x20[8];
    uStack_128 = unaff_x20[0xb];
    param_2 = (double)unaff_x20[10];
    dStack_130 = param_2;
    func_0x00010b243cc8(unaff_x19[-5]);
    uVar13 = extraout_w8;
    if (param_2 <= 1e-06) {
      uVar13 = (uint)(lVar22 < (long)unaff_x19[-0xb]);
    }
    puVar17 = unaff_x20;
    if ((uVar13 & 1) == 0) {
      do {
        puVar10 = puVar17 + 0xc;
        if (unaff_x19 <= puVar10) break;
        func_0x00010b243cc8(puVar17[0x13]);
        uVar13 = extraout_w8_00;
        if (param_2 <= 1e-06) {
          uVar13 = (uint)(lVar22 < (long)puVar17[0xd]);
        }
        puVar17 = puVar10;
      } while (uVar13 != 1);
    }
    else {
      do {
        puVar10 = puVar17 + 0xc;
        func_0x00010b243cd8(puVar17[0x13]);
        uVar13 = extraout_w9_03;
        if (param_2 <= 1e-06) {
          uVar13 = (uint)(lVar22 < *(long *)(extraout_x8_04 + 0x68));
        }
        puVar17 = puVar10;
      } while ((uVar13 & 1) == 0);
    }
    puVar17 = unaff_x19;
    if (puVar10 < unaff_x19) {
      do {
        puVar11 = puVar17 + -0xc;
        func_0x00010b243cd8(puVar17[-5]);
        uVar13 = extraout_w9_04;
        if (param_2 <= 1e-06) {
          uVar13 = (uint)(lVar22 < *(long *)(extraout_x8_05 + -0x58));
        }
        puVar17 = puVar11;
      } while ((uVar13 & 1) != 0);
    }
    while (puVar10 < puVar11) {
      func_0x00010b243cb0(&uStack_f0,puVar10);
      func_0x00010b243cb0(puVar10,puVar11);
      param_4 = puVar11;
      func_0x00010b243cb0(puVar11,&uStack_f0);
      do {
        puVar17 = puVar10 + 0x13;
        puVar9 = puVar10 + 0xd;
        puVar10 = puVar10 + 0xc;
        func_0x00010b243cd8(*puVar9,*puVar17);
        uVar13 = extraout_w9_05;
        if (param_2 <= 1e-06) {
          uVar13 = (uint)(lVar22 < extraout_x8_06);
        }
      } while (uVar13 != 1);
      do {
        puVar17 = puVar11 + -5;
        puVar9 = puVar11 + -0xb;
        puVar11 = puVar11 + -0xc;
        func_0x00010b243cd8(*puVar9,*puVar17);
        uVar13 = extraout_w9_06;
        if (param_2 <= 1e-06) {
          uVar13 = (uint)(lVar22 < extraout_x8_07);
        }
      } while ((uVar13 & 1) != 0);
    }
    param_5 = puVar10 + -0xc;
    if (unaff_x20 != param_5) {
      func_0x00010b243cb0();
      param_4 = unaff_x20;
    }
    param_7 = 0;
    puVar10[-0xc] = uVar20;
    puVar10[-0xb] = lVar22;
    func_0x00010b243d6c();
    goto LAB_10b2423c4;
  }
  *(undefined8 *)(puVar4 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar4 + -0x38) = 0x3eb0c6f7a0b5ed8d;
  *(undefined8 **)(puVar4 + -0x30) = param_6;
  *(undefined8 **)(puVar4 + -0x28) = puVar17;
  *(undefined8 **)(puVar4 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar23;
  *(code **)(puVar4 + -8) = pcVar24;
  func_0x00010b243db8();
  FUN_10b242dcc();
  func_0x00010b243c68(puVar11[1],puVar11[7],puVar10[7]);
  uVar13 = extraout_w10_06;
  if (param_3 <= 1e-06) {
    uVar13 = (uint)(extraout_x8_18 < extraout_x9_10);
  }
  if (uVar13 != 1) {
    return;
  }
  func_0x00010b243c90(puVar4 + -0xa0);
  func_0x00010b243cb0(puVar10,puVar11);
  func_0x00010b243cb0(puVar11,puVar4 + -0xa0);
  func_0x00010b243c68(puVar10[1],puVar10[7],unaff_x19[7]);
  uVar13 = extraout_w10_07;
  if (param_3 <= 1e-06) {
    uVar13 = (uint)(extraout_x8_19 < extraout_x9_11);
  }
  if (uVar13 != 1) {
    return;
  }
  func_0x00010b243c78(puVar4 + -0xa0);
  func_0x00010b243c90(unaff_x19);
  func_0x00010b243cb0(puVar10,puVar4 + -0xa0);
  func_0x00010b243c68(unaff_x19[1],unaff_x19[7],unaff_x20[7]);
  uVar13 = extraout_w10_08;
  if (param_3 <= 1e-06) {
    uVar13 = (uint)(extraout_x8_20 < extraout_x9_12);
  }
  if (uVar13 != 1) {
    return;
  }
  func_0x00010b243c84(puVar4 + -0xa0);
  func_0x00010b243c78(unaff_x20);
  func_0x00010b243e48();
  func_0x00010b243cb0();
  return;
LAB_10b242918:
  uVar7 = 1;
  if (puVar10 + 0xc == unaff_x19) goto LAB_10b242804;
  lVar22 = puVar10[0xd];
  func_0x00010b243c68(puVar10[0x13],puVar10[7]);
  uVar13 = extraout_w10_00;
  if (param_3 <= 1e-06) {
    uVar13 = (uint)(lVar22 < extraout_x9_02);
  }
  if (uVar13 == 1) {
    uVar20 = *(undefined8 *)(extraout_x8_09 + 0x60);
    uStack_e8 = *(undefined8 *)(extraout_x8_09 + 0x78);
    uStack_f0 = *(undefined8 *)(extraout_x8_09 + 0x70);
    uStack_d8 = *(undefined8 *)(extraout_x8_09 + 0x88);
    uStack_e0 = *(undefined8 *)(extraout_x8_09 + 0x80);
    uStack_d0 = *(undefined8 *)(extraout_x8_09 + 0x90);
    unaff_d9 = *(undefined8 *)(extraout_x8_09 + 0x98);
    uStack_118 = *(undefined8 *)(extraout_x8_09 + 0xa8);
    uStack_120 = *(undefined8 *)(extraout_x8_09 + 0xa0);
    uStack_108 = *(undefined8 *)(extraout_x8_09 + 0xb8);
    dVar25 = *(double *)(extraout_x8_09 + 0xb0);
    puVar9 = param_6;
    dStack_110 = dVar25;
    do {
      puVar17 = (undefined8 *)((long)unaff_x20 + (long)puVar9);
      param_4 = puVar17 + 0xc;
      func_0x00010b243c90();
      puVar16 = unaff_x20;
      if (puVar9 == (undefined8 *)0x0) goto LAB_10b2429b8;
      func_0x00010b243cc8(puVar17[-5]);
      uVar13 = extraout_w8_01;
      if (dVar25 <= 1e-06) {
        uVar13 = (uint)(lVar22 < (long)puVar17[-0xb]);
      }
      puVar9 = puVar9 + -0xc;
    } while ((uVar13 & 1) != 0);
    puVar16 = (undefined8 *)((long)unaff_x20 + (long)puVar9 + 0x60);
LAB_10b2429b8:
    *puVar16 = uVar20;
    puVar16[1] = lVar22;
    puVar16[3] = uStack_e8;
    puVar16[2] = uStack_f0;
    puVar16[5] = uStack_d8;
    puVar16[4] = uStack_e0;
    puVar16[6] = uStack_d0;
    puVar16[7] = unaff_d9;
    puVar16[9] = uStack_118;
    puVar16[8] = uStack_120;
    puVar16[0xb] = uStack_108;
    puVar16[10] = dStack_110;
  }
  param_6 = param_6 + 0xc;
  puVar10 = puVar10 + 0xc;
  goto LAB_10b242918;
LAB_10b2427e0:
  unaff_x19 = puVar11;
  if (((ulong)puVar9 & 1) != 0) goto LAB_10b242804;
  goto LAB_10b2423ac;
LAB_10b242a00:
  do {
    if ((long)uVar14 <= (long)uVar18) {
      uVar3 = (uVar14 & 0x3fffffffffffffff) << 1 | 1;
      puVar10 = unaff_x20 + uVar3 * 0xc;
      uVar2 = uVar14 * 2 + 2;
      cVar6 = SBORROW8(uVar2,uVar19);
      cVar5 = (long)(uVar2 - uVar19) < 0;
      bVar8 = uVar2 == uVar19;
      uVar21 = uVar3;
      if ((long)uVar2 < (long)uVar19) {
        param_2 = (double)puVar10[0x13];
        param_3 = ABS((double)puVar10[7] - param_2);
        bVar8 = param_2 < (double)puVar10[7];
        if (param_3 <= 1e-06) {
          bVar8 = (long)puVar10[1] < (long)puVar10[0xd];
        }
        cVar5 = false;
        bVar8 = !bVar8;
        cVar6 = false;
        lVar22 = 0x60;
        if (bVar8) {
          lVar22 = 0;
        }
        puVar10 = (undefined8 *)((long)puVar10 + lVar22);
        uVar21 = uVar2;
        if (bVar8) {
          uVar21 = uVar3;
        }
      }
      puVar17 = unaff_x20 + uVar14 * 0xc;
      lVar22 = puVar17[1];
      unaff_d9 = puVar17[7];
      func_0x00010b243cf0(puVar10[7]);
      bVar8 = !bVar8 && cVar5 == cVar6;
      if (param_2 <= 1e-06) {
        bVar8 = extraout_x9_03 < lVar22;
      }
      if (!bVar8) {
        uVar20 = *puVar17;
        uStack_e8 = puVar17[3];
        uStack_f0 = puVar17[2];
        uStack_d8 = puVar17[5];
        uStack_e0 = puVar17[4];
        uStack_d0 = puVar17[6];
        uStack_118 = puVar17[9];
        uStack_120 = puVar17[8];
        uStack_108 = puVar17[0xb];
        dVar25 = (double)puVar17[10];
        puVar10 = extraout_x8_10;
        dStack_110 = dVar25;
        do {
          param_4 = puVar17;
          puVar17 = puVar10;
          param_5 = puVar17;
          func_0x00010b243cb0();
          if ((long)uVar18 < (long)uVar21) break;
          puVar10 = unaff_x20 + (uVar21 << 1 | 1) * 0xc;
          uVar2 = uVar21 * 2 + 2;
          cVar6 = SBORROW8(uVar2,uVar19);
          cVar5 = (long)(uVar2 - uVar19) < 0;
          bVar8 = uVar2 == uVar19;
          if ((long)uVar2 < (long)uVar19) {
            dVar25 = (double)puVar10[0x13];
            param_3 = ABS((double)puVar10[7] - dVar25);
            bVar8 = dVar25 < (double)puVar10[7];
            if (param_3 <= 1e-06) {
              bVar8 = (long)puVar10[1] < (long)puVar10[0xd];
            }
            cVar5 = false;
            bVar8 = !bVar8;
            cVar6 = false;
            lVar15 = 0x60;
            if (bVar8) {
              lVar15 = 0;
            }
            puVar10 = (undefined8 *)((long)puVar10 + lVar15);
          }
          func_0x00010b243cf0(puVar10[7]);
          bVar8 = !bVar8 && cVar5 == cVar6;
          if (dVar25 <= 1e-06) {
            bVar8 = (long)extraout_x8_11[1] < lVar22;
          }
          puVar10 = extraout_x8_11;
          uVar21 = extraout_x9_04;
        } while (!bVar8);
        *puVar17 = uVar20;
        puVar17[1] = lVar22;
        puVar17[3] = uStack_e8;
        puVar17[2] = uStack_f0;
        puVar17[5] = uStack_d8;
        puVar17[4] = uStack_e0;
        puVar17[6] = uStack_d0;
        puVar17[7] = unaff_d9;
        puVar17[9] = uStack_118;
        puVar17[8] = uStack_120;
        puVar17[0xb] = uStack_108;
        puVar17[10] = dStack_110;
        param_2 = dStack_110;
      }
    }
    uVar14 = uVar14 - 1;
  } while (-1 < (long)uVar14);
  param_6 = (undefined8 *)0x60;
  while( true ) {
    puVar17 = (undefined8 *)(uVar19 - 2);
    uVar7 = puVar17 == (undefined8 *)0x0;
    puVar11 = unaff_x19;
    if ((long)uVar19 < 2) break;
    func_0x00010b243c84(&uStack_f0);
    puVar10 = unaff_x20;
    uVar14 = 0;
    do {
      uVar18 = uVar14 << 1 | 1;
      puVar11 = puVar10 + uVar14 * 0xc + 0xc;
      if ((long)(uVar14 * 2 + 2) < (long)uVar19) {
        func_0x00010b243c68(puVar10[uVar14 * 0xc + 0x13],puVar10[uVar14 * 0xc + 0x1f]);
        uVar13 = extraout_w10_01;
        if (param_3 <= 1e-06) {
          uVar13 = (uint)(extraout_x12 < extraout_x13);
        }
        puVar11 = extraout_x11;
        uVar18 = extraout_x9_05;
        if (uVar13 == 0) {
          puVar11 = puVar10 + uVar14 * 0xc + 0xc;
          uVar18 = extraout_x8_12;
        }
      }
      puVar10 = puVar11;
      func_0x00010b243c90();
      uVar14 = uVar18;
    } while ((long)uVar18 <= (long)((ulong)puVar17 >> 1));
    unaff_x19 = unaff_x19 + -0xc;
    if (puVar10 == unaff_x19) {
      param_5 = &uStack_f0;
      func_0x00010b243cb0();
      param_4 = puVar10;
    }
    else {
      func_0x00010b243c78(puVar10);
      param_5 = &uStack_f0;
      param_4 = unaff_x19;
      func_0x00010b243cb0();
      uVar14 = (long)puVar10 + (0x60 - (long)unaff_x20);
      if (0x60 < (long)uVar14) {
        uVar14 = uVar14 / 0x60 - 2 >> 1;
        lVar22 = puVar10[1];
        func_0x00010b243c68(unaff_x20[uVar14 * 0xc + 7],puVar10[7]);
        uVar13 = extraout_w10_02;
        if (param_3 <= 1e-06) {
          uVar13 = (uint)(extraout_x9_06 < lVar22);
        }
        if (uVar13 == 1) {
          uVar20 = *puVar10;
          uStack_118 = puVar10[3];
          uStack_120 = puVar10[2];
          uStack_108 = puVar10[5];
          dStack_110 = (double)puVar10[4];
          uStack_100 = puVar10[6];
          unaff_d9 = puVar10[7];
          uStack_138 = puVar10[9];
          uStack_140 = puVar10[8];
          uStack_128 = puVar10[0xb];
          dVar25 = (double)puVar10[10];
          puVar17 = extraout_x8_13;
          dStack_130 = dVar25;
          do {
            param_4 = puVar10;
            puVar10 = puVar17;
            param_5 = puVar10;
            func_0x00010b243cb0();
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            func_0x00010b243cb8(unaff_x20[uVar14 * 0xc + 7]);
            uVar13 = extraout_w9_07;
            if (dVar25 <= 1e-06) {
              uVar13 = (uint)((long)extraout_x8_14[1] < lVar22);
            }
            puVar17 = extraout_x8_14;
          } while ((uVar13 & 1) != 0);
          *puVar10 = uVar20;
          puVar10[1] = lVar22;
          puVar10[3] = uStack_118;
          puVar10[2] = uStack_120;
          puVar10[5] = uStack_108;
          puVar10[4] = dStack_110;
          puVar10[6] = uStack_100;
          puVar10[7] = unaff_d9;
          puVar10[9] = uStack_138;
          puVar10[8] = uStack_140;
          puVar10[0xb] = uStack_128;
          puVar10[10] = dStack_130;
        }
      }
    }
    uVar19 = uVar19 - 1;
  }
LAB_10b242804:
  func_0x00010b243c9c(uStack_90);
  unaff_x19 = puVar11;
  if ((bool)uVar7) {
    func_0x00010b243d4c(pcStack_18);
    return;
  }
LAB_10b242dc8:
  pcVar24 = FUN_10b242dcc;
  ___stack_chk_fail();
  pppppppuStack_170 = &pppppppuStack_20;
code_r0x00010b242dcc:
  puStack_198 = (undefined8 *)0x3eb0c6f7a0b5ed8d;
  dVar25 = (double)param_5[7];
  puVar10 = puVar12;
  uStack_1a0 = unaff_d9;
  puStack_190 = param_6;
  puStack_188 = puVar17;
  puStack_180 = unaff_x20;
  puStack_178 = unaff_x19;
  pcStack_168 = pcVar24;
  func_0x00010b243c68(param_5[1],dVar25,param_4[7]);
  uVar13 = extraout_w10_03;
  if (param_3 <= 1e-06) {
    uVar13 = (uint)(extraout_x8_15 < extraout_x9_07);
  }
  dVar26 = ABS((double)puVar10[7] - dVar25);
  bVar8 = dVar25 < (double)puVar10[7];
  if (dVar26 <= 1e-06) {
    bVar8 = (long)puVar10[1] < extraout_x8_15;
  }
  if ((uVar13 & 1) == 0) {
    if (!bVar8) {
      return;
    }
    func_0x00010b243c78(auStack_200);
    func_0x00010b243c84(param_5);
    func_0x00010b243cb0(puVar12,auStack_200);
    func_0x00010b243c68(param_5[1],param_5[7],param_4[7]);
    uVar13 = extraout_w10_04;
    if (dVar26 <= 1e-06) {
      uVar13 = (uint)(extraout_x8_16 < extraout_x9_08);
    }
    if (uVar13 != 1) {
      return;
    }
    func_0x00010b243c90(auStack_200);
    func_0x00010b243c78(param_4);
    func_0x00010b243e48();
  }
  else {
    if (bVar8) {
      _memcpy(auStack_200,param_4,0x60);
      param_5 = param_4;
    }
    else {
      _memcpy(auStack_200,param_4,0x60);
      func_0x00010b243c78(param_4);
      func_0x00010b243e48();
      func_0x00010b243cb0();
      func_0x00010b243c68(puVar12[1],puVar12[7],param_5[7]);
      uVar13 = extraout_w10_05;
      if (dVar26 <= 1e-06) {
        uVar13 = (uint)(extraout_x8_17 < extraout_x9_09);
      }
      if (uVar13 != 1) {
        return;
      }
      func_0x00010b243c78(auStack_200);
    }
    func_0x00010b243c84(param_5);
  }
  func_0x00010b243cb0();
  return;
}



/* Entry: 10b242360; end: 10b242dcb;  */

/* WARNING: Possible PIC construction at 0x00010b243064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b243068) */
/* WARNING: Removing unreachable block (ram,0x00010b24308c) */
/* WARNING: Removing unreachable block (ram,0x00010b243090) */
/* WARNING: Removing unreachable block (ram,0x00010b24309c) */
/* WARNING: Removing unreachable block (ram,0x00010b2430dc) */
/* WARNING: Removing unreachable block (ram,0x00010b2430e0) */
/* WARNING: Removing unreachable block (ram,0x00010b2430ec) */
/* WARNING: Removing unreachable block (ram,0x00010b243128) */
/* WARNING: Removing unreachable block (ram,0x00010b24312c) */
/* WARNING: Removing unreachable block (ram,0x00010b243138) */
/* WARNING: Removing unreachable block (ram,0x00010b243170) */
/* WARNING: Removing unreachable block (ram,0x00010b243174) */
/* WARNING: Removing unreachable block (ram,0x00010b243180) */
/* WARNING: Removing unreachable block (ram,0x00010b243198) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10b242360(undefined8 param_1,double param_2,double param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,ulong param_7)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  ulong uVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  undefined8 *puVar16;
  undefined8 *extraout_x8_10;
  undefined8 *extraout_x8_11;
  ulong extraout_x8_12;
  undefined8 *extraout_x8_13;
  undefined8 *extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  uint extraout_w9_05;
  uint extraout_w9_06;
  uint extraout_w9_07;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  undefined8 *extraout_x11;
  long extraout_x12;
  long extraout_x13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *******unaff_x29;
  code *unaff_x30;
  double dVar23;
  double dVar24;
  undefined8 unaff_d9;
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [80];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *******pppppppuStack_160;
  code *pcStack_158;
  undefined1 auStack_150 [8];
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  double dStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_80;
  
  puVar4 = auStack_150;
  puVar12 = param_6;
  func_0x00010b243db8();
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
LAB_10b2423ac:
  puStack_138 = unaff_x19 + -0xc;
  puStack_140 = unaff_x19 + -0x18;
  puStack_148 = unaff_x19 + -0x24;
  puVar10 = unaff_x20;
LAB_10b2423c4:
  unaff_x20 = puVar10;
  puVar17 = (undefined8 *)0x60;
  uVar14 = (long)unaff_x19 - (long)unaff_x20;
  uVar19 = (long)uVar14 / 0x60;
  uVar7 = uVar19 == 5;
  puVar11 = unaff_x19;
  switch(uVar19) {
  case 0:
  case 1:
    goto LAB_10b242804;
  case 2:
    func_0x00010b243c68(unaff_x19[-0xb],unaff_x19[-5],unaff_x20[7]);
    uVar13 = extraout_w10;
    if (param_3 <= 1e-06) {
      uVar13 = (uint)(extraout_x8_08 < extraout_x9_01);
    }
    uVar7 = uVar13 == 1;
    if ((bool)uVar7) {
      func_0x00010b243c84(&uStack_e0);
      puVar11 = puStack_138;
      func_0x00010b243c78(unaff_x20);
      param_5 = &uStack_e0;
      param_4 = puVar11;
      func_0x00010b243cb0();
    }
    goto LAB_10b242804;
  case 3:
    func_0x00010b243c9c(uStack_80);
    if (!(bool)uVar7) goto LAB_10b242dc8;
    param_5 = unaff_x20 + 0xc;
    param_4 = unaff_x20;
    puVar12 = puStack_138;
    func_0x00010b243d4c();
    goto code_r0x00010b242dcc;
  case 4:
    func_0x00010b243c9c(uStack_80);
    if (!(bool)uVar7) goto LAB_10b242dc8;
    puVar10 = unaff_x20 + 0x18;
    puVar11 = puStack_138;
    func_0x00010b243d4c(unaff_x20,unaff_x20 + 0xc);
    break;
  case 5:
    func_0x00010b243c9c(uStack_80);
    if (!(bool)uVar7) goto LAB_10b242dc8;
    puVar17 = unaff_x20 + 0x18;
    puVar12 = unaff_x20 + 0x24;
    func_0x00010b243d4c(unaff_x20,unaff_x20 + 0xc,puVar17,puVar12,puStack_138);
    puVar4 = auStack_200;
    uStack_198 = 0x3eb0c6f7a0b5ed8d;
    puStack_178 = (undefined8 *)0x60;
    unaff_x29 = &pppppppuStack_160;
    puVar10 = puVar17;
    puVar11 = puVar12;
    uStack_1a0 = unaff_d9;
    uStack_190 = unaff_x24;
    puStack_188 = unaff_x23;
    puStack_180 = param_6;
    puStack_170 = unaff_x20;
    puStack_168 = unaff_x19;
    func_0x00010b243db8();
    unaff_x30 = (code *)0x10b243068;
    param_6 = puVar12;
    break;
  default:
    if ((long)uVar14 < 0x900) {
      uVar7 = unaff_x20 == unaff_x19;
      if ((param_7 & 1) == 0) {
        if (!(bool)uVar7) {
          puVar17 = unaff_x20 + 0x14;
          while( true ) {
            param_6 = unaff_x20 + 0xc;
            uVar7 = 1;
            if (param_6 == unaff_x19) break;
            lVar22 = unaff_x20[0xd];
            param_3 = ABS((double)unaff_x20[0x13] - (double)unaff_x20[7]);
            bVar8 = (double)unaff_x20[7] < (double)unaff_x20[0x13];
            if (param_3 <= 1e-06) {
              bVar8 = lVar22 < (long)unaff_x20[1];
            }
            if (bVar8) {
              uVar20 = unaff_x20[0xc];
              uStack_d8 = unaff_x20[0xf];
              uStack_e0 = unaff_x20[0xe];
              uStack_c8 = unaff_x20[0x11];
              uStack_d0 = unaff_x20[0x10];
              uStack_c0 = unaff_x20[0x12];
              unaff_d9 = unaff_x20[0x13];
              uStack_108 = unaff_x20[0x15];
              uStack_110 = unaff_x20[0x14];
              uStack_f8 = unaff_x20[0x17];
              dVar23 = (double)unaff_x20[0x16];
              puVar10 = puVar17;
              dStack_100 = dVar23;
              do {
                puVar9 = puVar10;
                param_5 = puVar9 + -0x14;
                param_4 = puVar9 + -8;
                func_0x00010b243cb0();
                func_0x00010b243cc8(puVar9[-0x19]);
                uVar13 = extraout_w8_02;
                if (dVar23 <= 1e-06) {
                  uVar13 = (uint)(lVar22 < (long)puVar9[-0x1f]);
                }
                puVar10 = puVar9 + -0xc;
              } while ((uVar13 & 1) != 0);
              puVar9[-0x14] = uVar20;
              puVar9[-0x13] = lVar22;
              puVar9[-0x11] = uStack_d8;
              puVar9[-0x12] = uStack_e0;
              puVar9[-0xf] = uStack_c8;
              puVar9[-0x10] = uStack_d0;
              puVar9[-0xe] = uStack_c0;
              puVar9[-0xd] = unaff_d9;
              puVar9[-0xb] = uStack_108;
              puVar9[-0xc] = uStack_110;
              puVar9[-9] = uStack_f8;
              puVar9[-10] = dStack_100;
            }
            puVar17 = puVar17 + 0xc;
            unaff_x20 = param_6;
          }
        }
        goto LAB_10b242804;
      }
      if ((bool)uVar7) goto LAB_10b242804;
      param_6 = (undefined8 *)0x0;
      puVar10 = unaff_x20;
      goto LAB_10b242918;
    }
    if (param_6 == (undefined8 *)0x0) {
      uVar7 = 1;
      if (unaff_x20 == unaff_x19) goto LAB_10b242804;
      uVar18 = uVar19 - 2 >> 1;
      uVar14 = uVar18;
      goto LAB_10b242a00;
    }
    param_4 = unaff_x20 + (uVar19 >> 1) * 0xc;
    cVar5 = SBORROW8(uVar14,0x3000);
    cVar6 = (long)(uVar14 - 0x3000) < 0;
    uVar7 = uVar14 == 0x3000;
    if (uVar14 < 0x3001) {
      puVar12 = puStack_138;
      FUN_10b242dcc(param_4,unaff_x20);
    }
    else {
      FUN_10b242dcc(unaff_x20,param_4,puStack_138);
      FUN_10b242dcc(unaff_x20 + 0xc,param_4 + -0xc,puStack_140);
      FUN_10b242dcc(unaff_x20 + 0x18,param_4 + 0xc,puStack_148);
      puVar12 = param_4 + 0xc;
      FUN_10b242dcc(param_4 + -0xc,param_4);
      func_0x00010b243c84(&uStack_e0);
      func_0x00010b243cb0(unaff_x20,param_4);
      func_0x00010b243cb0(param_4,&uStack_e0);
    }
    param_6 = (undefined8 *)((long)param_6 + -1);
    if ((param_7 & 1) != 0) {
      lVar22 = unaff_x20[1];
      unaff_d9 = unaff_x20[7];
LAB_10b2424a8:
      lVar15 = 0;
      unaff_x24 = *unaff_x20;
      uStack_108 = unaff_x20[3];
      uStack_110 = unaff_x20[2];
      uStack_f8 = unaff_x20[5];
      dStack_100 = (double)unaff_x20[4];
      uStack_f0 = unaff_x20[6];
      uStack_128 = unaff_x20[9];
      uStack_130 = unaff_x20[8];
      uStack_118 = unaff_x20[0xb];
      param_2 = (double)unaff_x20[10];
      dStack_120 = param_2;
      do {
        func_0x00010b243cf0(*(undefined8 *)((long)unaff_x20 + lVar15 + 0x98));
        bVar8 = !(bool)uVar7;
        bVar1 = cVar6 == cVar5;
        cVar5 = NAN(param_2);
        uVar7 = param_2 == 1e-06;
        cVar6 = param_2 < 1e-06;
        bVar8 = bVar8 && bVar1;
        if (param_2 <= 1e-06) {
          bVar8 = *(long *)(extraout_x9 + 0x68) < lVar22;
        }
        lVar15 = extraout_x8_00 + 0x60;
      } while (bVar8);
      unaff_x23 = (undefined8 *)((long)unaff_x20 + lVar15);
      cVar6 = SBORROW8(lVar15,0x60);
      cVar5 = extraout_x8_00 < 0;
      bVar8 = false;
      puVar9 = unaff_x19;
      puVar17 = unaff_x19;
      puVar10 = unaff_x23;
      if (lVar15 == 0x60) {
        do {
          puVar11 = puVar9;
          if (puVar9 <= unaff_x23) break;
          puVar11 = puVar9 + -0xc;
          func_0x00010b243cb8(puVar9[-5]);
          uVar13 = extraout_w9_00;
          if (param_2 <= 1e-06) {
            uVar13 = (uint)(*(long *)(extraout_x8_01 + -0x58) < lVar22);
          }
          puVar9 = puVar11;
        } while ((uVar13 & 1) == 0);
      }
      else {
        do {
          puVar11 = puVar17 + -0xc;
          func_0x00010b243cf0(puVar17[-5]);
          bVar8 = !bVar8 && cVar5 == cVar6;
          if (param_2 <= 1e-06) {
            bVar8 = *(long *)(extraout_x9_00 + -0x58) < lVar22;
          }
          uVar13 = (uint)bVar8;
          cVar6 = SBORROW4(uVar13,1);
          cVar5 = (int)(uVar13 - 1) < 0;
          bVar8 = uVar13 == 1;
          puVar17 = puVar11;
          puVar9 = puVar11;
        } while (!bVar8);
      }
      while (puVar10 < puVar11) {
        func_0x00010b243cb0(&uStack_e0,puVar10);
        func_0x00010b243cb0(puVar10,puVar11);
        func_0x00010b243cb0(puVar11,&uStack_e0);
        do {
          puVar17 = puVar10 + 0x13;
          puVar16 = puVar10 + 0xd;
          puVar10 = puVar10 + 0xc;
          func_0x00010b243cb8(*puVar16,*puVar17);
          uVar13 = extraout_w9_01;
          if (param_2 <= 1e-06) {
            uVar13 = (uint)(extraout_x8_02 < lVar22);
          }
        } while ((uVar13 & 1) != 0);
        do {
          puVar17 = puVar11 + -5;
          puVar16 = puVar11 + -0xb;
          puVar11 = puVar11 + -0xc;
          func_0x00010b243cb8(*puVar16,*puVar17);
          uVar13 = extraout_w9_02;
          if (param_2 <= 1e-06) {
            uVar13 = (uint)(extraout_x8_03 < lVar22);
          }
        } while ((uVar13 & 1) == 0);
      }
      puVar11 = puVar10 + -0xc;
      if (unaff_x20 != puVar11) {
        func_0x00010b243cb0(unaff_x20,puVar11);
      }
      puVar10[-0xc] = unaff_x24;
      puVar10[-0xb] = lVar22;
      func_0x00010b243d6c();
      uVar7 = unaff_x23 == puVar9;
      puVar17 = (undefined8 *)0x60;
      if (puVar9 <= unaff_x23) {
        puVar9 = unaff_x20;
        FUN_10b2431b4(unaff_x20,puVar11);
        param_4 = puVar10;
        param_5 = unaff_x19;
        FUN_10b2431b4();
        if ((int)param_4 != 0) goto LAB_10b2427e0;
        if (((ulong)puVar9 & 1) != 0) goto LAB_10b2423c4;
      }
      puVar12 = param_6;
      FUN_10b242360();
      param_7 = 0;
      param_4 = unaff_x20;
      param_5 = puVar11;
      goto LAB_10b2423c4;
    }
    lVar22 = unaff_x20[1];
    unaff_d9 = unaff_x20[7];
    func_0x00010b243cb8(unaff_x20[-0xb],unaff_x20[-5]);
    cVar5 = NAN(param_2);
    uVar7 = param_2 == 1e-06;
    cVar6 = param_2 < 1e-06;
    uVar13 = extraout_w9;
    if (param_2 <= 1e-06) {
      uVar13 = (uint)(extraout_x8 < lVar22);
    }
    if ((uVar13 & 1) != 0) goto LAB_10b2424a8;
    uVar20 = *unaff_x20;
    uStack_108 = unaff_x20[3];
    uStack_110 = unaff_x20[2];
    uStack_f8 = unaff_x20[5];
    dStack_100 = (double)unaff_x20[4];
    uStack_f0 = unaff_x20[6];
    unaff_d9 = unaff_x20[7];
    uStack_128 = unaff_x20[9];
    uStack_130 = unaff_x20[8];
    uStack_118 = unaff_x20[0xb];
    param_2 = (double)unaff_x20[10];
    dStack_120 = param_2;
    func_0x00010b243cc8(unaff_x19[-5]);
    uVar13 = extraout_w8;
    if (param_2 <= 1e-06) {
      uVar13 = (uint)(lVar22 < (long)unaff_x19[-0xb]);
    }
    puVar17 = unaff_x20;
    if ((uVar13 & 1) == 0) {
      do {
        puVar10 = puVar17 + 0xc;
        if (unaff_x19 <= puVar10) break;
        func_0x00010b243cc8(puVar17[0x13]);
        uVar13 = extraout_w8_00;
        if (param_2 <= 1e-06) {
          uVar13 = (uint)(lVar22 < (long)puVar17[0xd]);
        }
        puVar17 = puVar10;
      } while (uVar13 != 1);
    }
    else {
      do {
        puVar10 = puVar17 + 0xc;
        func_0x00010b243cd8(puVar17[0x13]);
        uVar13 = extraout_w9_03;
        if (param_2 <= 1e-06) {
          uVar13 = (uint)(lVar22 < *(long *)(extraout_x8_04 + 0x68));
        }
        puVar17 = puVar10;
      } while ((uVar13 & 1) == 0);
    }
    puVar17 = unaff_x19;
    if (puVar10 < unaff_x19) {
      do {
        puVar11 = puVar17 + -0xc;
        func_0x00010b243cd8(puVar17[-5]);
        uVar13 = extraout_w9_04;
        if (param_2 <= 1e-06) {
          uVar13 = (uint)(lVar22 < *(long *)(extraout_x8_05 + -0x58));
        }
        puVar17 = puVar11;
      } while ((uVar13 & 1) != 0);
    }
    while (puVar10 < puVar11) {
      func_0x00010b243cb0(&uStack_e0,puVar10);
      func_0x00010b243cb0(puVar10,puVar11);
      param_4 = puVar11;
      func_0x00010b243cb0(puVar11,&uStack_e0);
      do {
        puVar17 = puVar10 + 0x13;
        puVar9 = puVar10 + 0xd;
        puVar10 = puVar10 + 0xc;
        func_0x00010b243cd8(*puVar9,*puVar17);
        uVar13 = extraout_w9_05;
        if (param_2 <= 1e-06) {
          uVar13 = (uint)(lVar22 < extraout_x8_06);
        }
      } while (uVar13 != 1);
      do {
        puVar17 = puVar11 + -5;
        puVar9 = puVar11 + -0xb;
        puVar11 = puVar11 + -0xc;
        func_0x00010b243cd8(*puVar9,*puVar17);
        uVar13 = extraout_w9_06;
        if (param_2 <= 1e-06) {
          uVar13 = (uint)(lVar22 < extraout_x8_07);
        }
      } while ((uVar13 & 1) != 0);
    }
    param_5 = puVar10 + -0xc;
    if (unaff_x20 != param_5) {
      func_0x00010b243cb0();
      param_4 = unaff_x20;
    }
    param_7 = 0;
    puVar10[-0xc] = uVar20;
    puVar10[-0xb] = lVar22;
    func_0x00010b243d6c();
    goto LAB_10b2423c4;
  }
  *(undefined8 *)(puVar4 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar4 + -0x38) = 0x3eb0c6f7a0b5ed8d;
  *(undefined8 **)(puVar4 + -0x30) = param_6;
  *(undefined8 **)(puVar4 + -0x28) = puVar17;
  *(undefined8 **)(puVar4 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(puVar4 + -0x10) = unaff_x29;
  *(code **)(puVar4 + -8) = unaff_x30;
  func_0x00010b243db8();
  FUN_10b242dcc();
  func_0x00010b243c68(puVar11[1],puVar11[7],puVar10[7]);
  uVar13 = extraout_w10_06;
  if (param_3 <= 1e-06) {
    uVar13 = (uint)(extraout_x8_18 < extraout_x9_10);
  }
  if (uVar13 != 1) {
    return;
  }
  func_0x00010b243c90(puVar4 + -0xa0);
  func_0x00010b243cb0(puVar10,puVar11);
  func_0x00010b243cb0(puVar11,puVar4 + -0xa0);
  func_0x00010b243c68(puVar10[1],puVar10[7],unaff_x19[7]);
  uVar13 = extraout_w10_07;
  if (param_3 <= 1e-06) {
    uVar13 = (uint)(extraout_x8_19 < extraout_x9_11);
  }
  if (uVar13 != 1) {
    return;
  }
  func_0x00010b243c78(puVar4 + -0xa0);
  func_0x00010b243c90(unaff_x19);
  func_0x00010b243cb0(puVar10,puVar4 + -0xa0);
  func_0x00010b243c68(unaff_x19[1],unaff_x19[7],unaff_x20[7]);
  uVar13 = extraout_w10_08;
  if (param_3 <= 1e-06) {
    uVar13 = (uint)(extraout_x8_20 < extraout_x9_12);
  }
  if (uVar13 != 1) {
    return;
  }
  func_0x00010b243c84(puVar4 + -0xa0);
  func_0x00010b243c78(unaff_x20);
  func_0x00010b243e48();
  func_0x00010b243cb0();
  return;
LAB_10b242918:
  uVar7 = 1;
  if (puVar10 + 0xc == unaff_x19) goto LAB_10b242804;
  lVar22 = puVar10[0xd];
  func_0x00010b243c68(puVar10[0x13],puVar10[7]);
  uVar13 = extraout_w10_00;
  if (param_3 <= 1e-06) {
    uVar13 = (uint)(lVar22 < extraout_x9_02);
  }
  if (uVar13 == 1) {
    uVar20 = *(undefined8 *)(extraout_x8_09 + 0x60);
    uStack_d8 = *(undefined8 *)(extraout_x8_09 + 0x78);
    uStack_e0 = *(undefined8 *)(extraout_x8_09 + 0x70);
    uStack_c8 = *(undefined8 *)(extraout_x8_09 + 0x88);
    uStack_d0 = *(undefined8 *)(extraout_x8_09 + 0x80);
    uStack_c0 = *(undefined8 *)(extraout_x8_09 + 0x90);
    unaff_d9 = *(undefined8 *)(extraout_x8_09 + 0x98);
    uStack_108 = *(undefined8 *)(extraout_x8_09 + 0xa8);
    uStack_110 = *(undefined8 *)(extraout_x8_09 + 0xa0);
    uStack_f8 = *(undefined8 *)(extraout_x8_09 + 0xb8);
    dVar23 = *(double *)(extraout_x8_09 + 0xb0);
    puVar9 = param_6;
    dStack_100 = dVar23;
    do {
      puVar17 = (undefined8 *)((long)unaff_x20 + (long)puVar9);
      param_4 = puVar17 + 0xc;
      func_0x00010b243c90();
      puVar16 = unaff_x20;
      if (puVar9 == (undefined8 *)0x0) goto LAB_10b2429b8;
      func_0x00010b243cc8(puVar17[-5]);
      uVar13 = extraout_w8_01;
      if (dVar23 <= 1e-06) {
        uVar13 = (uint)(lVar22 < (long)puVar17[-0xb]);
      }
      puVar9 = puVar9 + -0xc;
    } while ((uVar13 & 1) != 0);
    puVar16 = (undefined8 *)((long)unaff_x20 + (long)puVar9 + 0x60);
LAB_10b2429b8:
    *puVar16 = uVar20;
    puVar16[1] = lVar22;
    puVar16[3] = uStack_d8;
    puVar16[2] = uStack_e0;
    puVar16[5] = uStack_c8;
    puVar16[4] = uStack_d0;
    puVar16[6] = uStack_c0;
    puVar16[7] = unaff_d9;
    puVar16[9] = uStack_108;
    puVar16[8] = uStack_110;
    puVar16[0xb] = uStack_f8;
    puVar16[10] = dStack_100;
  }
  param_6 = param_6 + 0xc;
  puVar10 = puVar10 + 0xc;
  goto LAB_10b242918;
LAB_10b2427e0:
  unaff_x19 = puVar11;
  if (((ulong)puVar9 & 1) != 0) goto LAB_10b242804;
  goto LAB_10b2423ac;
LAB_10b242a00:
  do {
    if ((long)uVar14 <= (long)uVar18) {
      uVar3 = (uVar14 & 0x3fffffffffffffff) << 1 | 1;
      puVar10 = unaff_x20 + uVar3 * 0xc;
      uVar2 = uVar14 * 2 + 2;
      cVar6 = SBORROW8(uVar2,uVar19);
      cVar5 = (long)(uVar2 - uVar19) < 0;
      bVar8 = uVar2 == uVar19;
      uVar21 = uVar3;
      if ((long)uVar2 < (long)uVar19) {
        param_2 = (double)puVar10[0x13];
        param_3 = ABS((double)puVar10[7] - param_2);
        bVar8 = param_2 < (double)puVar10[7];
        if (param_3 <= 1e-06) {
          bVar8 = (long)puVar10[1] < (long)puVar10[0xd];
        }
        cVar5 = false;
        bVar8 = !bVar8;
        cVar6 = false;
        lVar22 = 0x60;
        if (bVar8) {
          lVar22 = 0;
        }
        puVar10 = (undefined8 *)((long)puVar10 + lVar22);
        uVar21 = uVar2;
        if (bVar8) {
          uVar21 = uVar3;
        }
      }
      puVar17 = unaff_x20 + uVar14 * 0xc;
      lVar22 = puVar17[1];
      unaff_d9 = puVar17[7];
      func_0x00010b243cf0(puVar10[7]);
      bVar8 = !bVar8 && cVar5 == cVar6;
      if (param_2 <= 1e-06) {
        bVar8 = extraout_x9_03 < lVar22;
      }
      if (!bVar8) {
        uVar20 = *puVar17;
        uStack_d8 = puVar17[3];
        uStack_e0 = puVar17[2];
        uStack_c8 = puVar17[5];
        uStack_d0 = puVar17[4];
        uStack_c0 = puVar17[6];
        uStack_108 = puVar17[9];
        uStack_110 = puVar17[8];
        uStack_f8 = puVar17[0xb];
        dVar23 = (double)puVar17[10];
        puVar10 = extraout_x8_10;
        dStack_100 = dVar23;
        do {
          param_4 = puVar17;
          puVar17 = puVar10;
          param_5 = puVar17;
          func_0x00010b243cb0();
          if ((long)uVar18 < (long)uVar21) break;
          puVar10 = unaff_x20 + (uVar21 << 1 | 1) * 0xc;
          uVar2 = uVar21 * 2 + 2;
          cVar6 = SBORROW8(uVar2,uVar19);
          cVar5 = (long)(uVar2 - uVar19) < 0;
          bVar8 = uVar2 == uVar19;
          if ((long)uVar2 < (long)uVar19) {
            dVar23 = (double)puVar10[0x13];
            param_3 = ABS((double)puVar10[7] - dVar23);
            bVar8 = dVar23 < (double)puVar10[7];
            if (param_3 <= 1e-06) {
              bVar8 = (long)puVar10[1] < (long)puVar10[0xd];
            }
            cVar5 = false;
            bVar8 = !bVar8;
            cVar6 = false;
            lVar15 = 0x60;
            if (bVar8) {
              lVar15 = 0;
            }
            puVar10 = (undefined8 *)((long)puVar10 + lVar15);
          }
          func_0x00010b243cf0(puVar10[7]);
          bVar8 = !bVar8 && cVar5 == cVar6;
          if (dVar23 <= 1e-06) {
            bVar8 = (long)extraout_x8_11[1] < lVar22;
          }
          puVar10 = extraout_x8_11;
          uVar21 = extraout_x9_04;
        } while (!bVar8);
        *puVar17 = uVar20;
        puVar17[1] = lVar22;
        puVar17[3] = uStack_d8;
        puVar17[2] = uStack_e0;
        puVar17[5] = uStack_c8;
        puVar17[4] = uStack_d0;
        puVar17[6] = uStack_c0;
        puVar17[7] = unaff_d9;
        puVar17[9] = uStack_108;
        puVar17[8] = uStack_110;
        puVar17[0xb] = uStack_f8;
        puVar17[10] = dStack_100;
        param_2 = dStack_100;
      }
    }
    uVar14 = uVar14 - 1;
  } while (-1 < (long)uVar14);
  param_6 = (undefined8 *)0x60;
  while( true ) {
    puVar17 = (undefined8 *)(uVar19 - 2);
    uVar7 = puVar17 == (undefined8 *)0x0;
    puVar11 = unaff_x19;
    if ((long)uVar19 < 2) break;
    func_0x00010b243c84(&uStack_e0);
    puVar10 = unaff_x20;
    uVar14 = 0;
    do {
      uVar18 = uVar14 << 1 | 1;
      puVar11 = puVar10 + uVar14 * 0xc + 0xc;
      if ((long)(uVar14 * 2 + 2) < (long)uVar19) {
        func_0x00010b243c68(puVar10[uVar14 * 0xc + 0x13],puVar10[uVar14 * 0xc + 0x1f]);
        uVar13 = extraout_w10_01;
        if (param_3 <= 1e-06) {
          uVar13 = (uint)(extraout_x12 < extraout_x13);
        }
        puVar11 = extraout_x11;
        uVar18 = extraout_x9_05;
        if (uVar13 == 0) {
          puVar11 = puVar10 + uVar14 * 0xc + 0xc;
          uVar18 = extraout_x8_12;
        }
      }
      puVar10 = puVar11;
      func_0x00010b243c90();
      uVar14 = uVar18;
    } while ((long)uVar18 <= (long)((ulong)puVar17 >> 1));
    unaff_x19 = unaff_x19 + -0xc;
    if (puVar10 == unaff_x19) {
      param_5 = &uStack_e0;
      func_0x00010b243cb0();
      param_4 = puVar10;
    }
    else {
      func_0x00010b243c78(puVar10);
      param_5 = &uStack_e0;
      param_4 = unaff_x19;
      func_0x00010b243cb0();
      uVar14 = (long)puVar10 + (0x60 - (long)unaff_x20);
      if (0x60 < (long)uVar14) {
        uVar14 = uVar14 / 0x60 - 2 >> 1;
        lVar22 = puVar10[1];
        func_0x00010b243c68(unaff_x20[uVar14 * 0xc + 7],puVar10[7]);
        uVar13 = extraout_w10_02;
        if (param_3 <= 1e-06) {
          uVar13 = (uint)(extraout_x9_06 < lVar22);
        }
        if (uVar13 == 1) {
          uVar20 = *puVar10;
          uStack_108 = puVar10[3];
          uStack_110 = puVar10[2];
          uStack_f8 = puVar10[5];
          dStack_100 = (double)puVar10[4];
          uStack_f0 = puVar10[6];
          unaff_d9 = puVar10[7];
          uStack_128 = puVar10[9];
          uStack_130 = puVar10[8];
          uStack_118 = puVar10[0xb];
          dVar23 = (double)puVar10[10];
          puVar17 = extraout_x8_13;
          dStack_120 = dVar23;
          do {
            param_4 = puVar10;
            puVar10 = puVar17;
            param_5 = puVar10;
            func_0x00010b243cb0();
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            func_0x00010b243cb8(unaff_x20[uVar14 * 0xc + 7]);
            uVar13 = extraout_w9_07;
            if (dVar23 <= 1e-06) {
              uVar13 = (uint)((long)extraout_x8_14[1] < lVar22);
            }
            puVar17 = extraout_x8_14;
          } while ((uVar13 & 1) != 0);
          *puVar10 = uVar20;
          puVar10[1] = lVar22;
          puVar10[3] = uStack_108;
          puVar10[2] = uStack_110;
          puVar10[5] = uStack_f8;
          puVar10[4] = dStack_100;
          puVar10[6] = uStack_f0;
          puVar10[7] = unaff_d9;
          puVar10[9] = uStack_128;
          puVar10[8] = uStack_130;
          puVar10[0xb] = uStack_118;
          puVar10[10] = dStack_120;
        }
      }
    }
    uVar19 = uVar19 - 1;
  }
LAB_10b242804:
  func_0x00010b243c9c(uStack_80);
  unaff_x19 = puVar11;
  if ((bool)uVar7) {
    func_0x00010b243d4c(unaff_x30);
    return;
  }
LAB_10b242dc8:
  unaff_x30 = FUN_10b242dcc;
  ___stack_chk_fail();
  unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
code_r0x00010b242dcc:
  puStack_188 = (undefined8 *)0x3eb0c6f7a0b5ed8d;
  dVar23 = (double)param_5[7];
  puVar10 = puVar12;
  uStack_190 = unaff_d9;
  puStack_180 = param_6;
  puStack_178 = puVar17;
  puStack_170 = unaff_x20;
  puStack_168 = unaff_x19;
  pppppppuStack_160 = unaff_x29;
  pcStack_158 = unaff_x30;
  func_0x00010b243c68(param_5[1],dVar23,param_4[7]);
  uVar13 = extraout_w10_03;
  if (param_3 <= 1e-06) {
    uVar13 = (uint)(extraout_x8_15 < extraout_x9_07);
  }
  dVar24 = ABS((double)puVar10[7] - dVar23);
  bVar8 = dVar23 < (double)puVar10[7];
  if (dVar24 <= 1e-06) {
    bVar8 = (long)puVar10[1] < extraout_x8_15;
  }
  if ((uVar13 & 1) == 0) {
    if (!bVar8) {
      return;
    }
    func_0x00010b243c78(auStack_1f0);
    func_0x00010b243c84(param_5);
    func_0x00010b243cb0(puVar12,auStack_1f0);
    func_0x00010b243c68(param_5[1],param_5[7],param_4[7]);
    uVar13 = extraout_w10_04;
    if (dVar24 <= 1e-06) {
      uVar13 = (uint)(extraout_x8_16 < extraout_x9_08);
    }
    if (uVar13 != 1) {
      return;
    }
    func_0x00010b243c90(auStack_1f0);
    func_0x00010b243c78(param_4);
    func_0x00010b243e48();
  }
  else {
    if (bVar8) {
      _memcpy(auStack_1f0,param_4,0x60);
      param_5 = param_4;
    }
    else {
      _memcpy(auStack_1f0,param_4,0x60);
      func_0x00010b243c78(param_4);
      func_0x00010b243e48();
      func_0x00010b243cb0();
      func_0x00010b243c68(puVar12[1],puVar12[7],param_5[7]);
      uVar13 = extraout_w10_05;
      if (dVar24 <= 1e-06) {
        uVar13 = (uint)(extraout_x8_17 < extraout_x9_09);
      }
      if (uVar13 != 1) {
        return;
      }
      func_0x00010b243c78(auStack_1f0);
    }
    func_0x00010b243c84(param_5);
  }
  func_0x00010b243cb0();
  return;
}



/* Entry: 10b242dcc; end: 10b243037;  */

void FUN_10b242dcc(undefined8 param_1,undefined8 param_2,double param_3,long param_4,long param_5,
                  long param_6)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  double dVar4;
  double dVar5;
  undefined1 auStack_a0 [96];
  
  dVar4 = *(double *)(param_5 + 0x38);
  lVar2 = param_6;
  func_0x00010b243c68(*(undefined8 *)(param_5 + 8),dVar4,*(undefined8 *)(param_4 + 0x38));
  uVar3 = extraout_w10;
  if (param_3 <= 1e-06) {
    uVar3 = (uint)(extraout_x8 < extraout_x9);
  }
  dVar5 = ABS(*(double *)(lVar2 + 0x38) - dVar4);
  bVar1 = dVar4 < *(double *)(lVar2 + 0x38);
  if (dVar5 <= 1e-06) {
    bVar1 = *(long *)(lVar2 + 8) < extraout_x8;
  }
  if ((uVar3 & 1) == 0) {
    if (!bVar1) {
      return;
    }
    func_0x00010b243c78(auStack_a0);
    func_0x00010b243c84(param_5);
    func_0x00010b243cb0(param_6,auStack_a0);
    func_0x00010b243c68(*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x38),
                        *(undefined8 *)(param_4 + 0x38));
    uVar3 = extraout_w10_00;
    if (dVar5 <= 1e-06) {
      uVar3 = (uint)(extraout_x8_00 < extraout_x9_00);
    }
    if (uVar3 != 1) {
      return;
    }
    func_0x00010b243c90(auStack_a0);
    func_0x00010b243c78(param_4);
    func_0x00010b243e48();
  }
  else {
    if (bVar1) {
      _memcpy(auStack_a0,param_4,0x60);
      param_5 = param_4;
    }
    else {
      _memcpy(auStack_a0,param_4,0x60);
      func_0x00010b243c78(param_4);
      func_0x00010b243e48();
      func_0x00010b243cb0();
      func_0x00010b243c68(*(undefined8 *)(param_6 + 8),*(undefined8 *)(param_6 + 0x38),
                          *(undefined8 *)(param_5 + 0x38));
      uVar3 = extraout_w10_01;
      if (dVar5 <= 1e-06) {
        uVar3 = (uint)(extraout_x8_01 < extraout_x9_01);
      }
      if (uVar3 != 1) {
        return;
      }
      func_0x00010b243c78(auStack_a0);
    }
    func_0x00010b243c84(param_5);
  }
  func_0x00010b243cb0();
  return;
}



/* Entry: 10b243038; end: 10b2431b3;  */

void FUN_10b243038(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_b0 [96];
  
  func_0x00010b243db8();
  func_0x00010b242f28();
  func_0x00010b243c68(*(undefined8 *)(param_8 + 8),*(undefined8 *)(param_8 + 0x38),
                      *(undefined8 *)(param_7 + 0x38));
  uVar1 = extraout_w10;
  if (param_3 <= 1e-06) {
    uVar1 = (uint)(extraout_x8 < extraout_x9);
  }
  if (uVar1 == 1) {
    func_0x00010b243cb0(auStack_b0,param_7);
    func_0x00010b243cb0(param_7,param_8);
    func_0x00010b243cb0(param_8,auStack_b0);
    func_0x00010b243c68(*(undefined8 *)(param_7 + 8),*(undefined8 *)(param_7 + 0x38),
                        *(undefined8 *)(param_6 + 0x38));
    uVar1 = extraout_w10_00;
    if (param_3 <= 1e-06) {
      uVar1 = (uint)(extraout_x8_00 < extraout_x9_00);
    }
    if (uVar1 == 1) {
      func_0x00010b243c90(auStack_b0);
      func_0x00010b243cb0(param_6,param_7);
      func_0x00010b243cb0(param_7,auStack_b0);
      func_0x00010b243c68(*(undefined8 *)(param_6 + 8),*(undefined8 *)(param_6 + 0x38),
                          *(undefined8 *)(unaff_x19 + 0x38));
      uVar1 = extraout_w10_01;
      if (param_3 <= 1e-06) {
        uVar1 = (uint)(extraout_x8_01 < extraout_x9_01);
      }
      if (uVar1 == 1) {
        func_0x00010b243c78(auStack_b0);
        func_0x00010b243c90();
        func_0x00010b243cb0(param_6,auStack_b0);
        func_0x00010b243c68(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x38),
                            *(undefined8 *)(unaff_x20 + 0x38));
        uVar1 = extraout_w10_02;
        if (param_3 <= 1e-06) {
          uVar1 = (uint)(extraout_x8_02 < extraout_x9_02);
        }
        if (uVar1 == 1) {
          func_0x00010b243c84(auStack_b0);
          func_0x00010b243c78();
          func_0x00010b243e48();
          func_0x00010b243cb0();
        }
      }
    }
  }
  return;
}



/* Entry: 10b2431b4; end: 10b24340b;  */

void FUN_10b2431b4(undefined8 param_1,double param_2,double param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint extraout_w8;
  long extraout_x8;
  undefined8 *puVar6;
  long extraout_x8_00;
  undefined8 *puVar7;
  uint extraout_w9;
  long extraout_x9;
  uint extraout_w10;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = ((long)param_5 - (long)param_4) / 0x60;
  uVar2 = lVar10 == 5;
  plVar3 = (long *)0x1;
  puVar4 = param_5;
  switch(lVar10) {
  case 0:
  case 1:
    goto LAB_10b2433c8;
  case 2:
    func_0x00010b243c68(param_5[-0xb],param_5[-5],param_4[7]);
    uVar5 = extraout_w10;
    if (param_3 <= 1e-06) {
      uVar5 = (uint)(extraout_x8 < extraout_x9);
    }
    uVar2 = uVar5 == 1;
    if (!(bool)uVar2) goto LAB_10b2433c8;
    param_5 = param_5 + -0xc;
    func_0x00010b243c78(&uStack_e0);
    func_0x00010b243c84(param_4);
    puVar4 = &uStack_e0;
    func_0x00010b243cb0(param_5);
    break;
  case 3:
    puVar4 = param_4 + 0xc;
    FUN_10b242dcc(param_4,puVar4,param_5 + -0xc);
    break;
  case 4:
    puVar4 = param_4 + 0xc;
    func_0x00010b242f28(param_4,puVar4,param_4 + 0x18,param_5 + -0xc);
    break;
  case 5:
    puVar4 = param_4 + 0xc;
    FUN_10b243038(param_4,puVar4,param_4 + 0x18,param_4 + 0x24,param_5 + -0xc);
    break;
  default:
    puVar4 = param_4 + 0xc;
    FUN_10b242dcc(param_4,puVar4,param_4 + 0x18);
    lVar10 = 0;
    iVar11 = 0;
    puVar7 = param_4 + 0x24;
    puVar8 = param_4 + 0x18;
    while (puVar6 = puVar7, uVar2 = puVar6 == param_5, !(bool)uVar2) {
      lVar12 = puVar6[1];
      uVar18 = puVar6[7];
      func_0x00010b243cd8(puVar8[1],puVar8[7]);
      uVar5 = extraout_w9;
      if (param_2 <= 1e-06) {
        uVar5 = (uint)(lVar12 < extraout_x8_00);
      }
      if (uVar5 == 1) {
        uVar9 = *puVar6;
        uStack_d8 = puVar6[3];
        uStack_e0 = puVar6[2];
        uStack_c8 = puVar6[5];
        uStack_d0 = puVar6[4];
        uStack_c0 = puVar6[6];
        uVar15 = puVar6[9];
        uVar14 = puVar6[8];
        uVar17 = puVar6[0xb];
        param_2 = (double)puVar6[10];
        lVar1 = lVar10;
        dVar16 = param_2;
        do {
          lVar13 = lVar1;
          puVar4 = (undefined8 *)((long)param_4 + lVar13 + 0xc0);
          func_0x00010b243cb0((long)param_4 + lVar13 + 0x120);
          puVar7 = param_4;
          if (lVar13 == -0xc0) goto LAB_10b243374;
          func_0x00010b243cc8(*(undefined8 *)((long)param_4 + lVar13 + 0x98));
          uVar5 = extraout_w8;
          if (dVar16 <= 1e-06) {
            uVar5 = (uint)(lVar12 < *(long *)((long)param_4 + lVar13 + 0x68));
          }
          lVar1 = lVar13 + -0x60;
        } while ((uVar5 & 1) != 0);
        puVar7 = (undefined8 *)((long)param_4 + lVar13 + 0xc0);
LAB_10b243374:
        *puVar7 = uVar9;
        puVar7[1] = lVar12;
        puVar7[3] = uStack_d8;
        puVar7[2] = uStack_e0;
        puVar7[5] = uStack_c8;
        puVar7[4] = uStack_d0;
        puVar7[6] = uStack_c0;
        puVar7[7] = uVar18;
        iVar11 = iVar11 + 1;
        puVar7[9] = uVar15;
        puVar7[8] = uVar14;
        puVar7[0xb] = uVar17;
        puVar7[10] = param_2;
        if (iVar11 == 8) {
          uVar2 = puVar6 + 0xc == param_5;
          plVar3 = (long *)(ulong)(byte)uVar2;
          goto LAB_10b2433c8;
        }
      }
      lVar10 = lVar10 + 0x60;
      puVar8 = puVar6;
      puVar7 = puVar6 + 0xc;
    }
  }
  plVar3 = (long *)0x1;
LAB_10b2433c8:
  func_0x00010b243c9c(uStack_78);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010b243db8();
    lVar10 = puVar4[1] + ((plVar3[1] - *plVar3) / -0x30) * 0x30;
    _memcpy(lVar10);
    param_4[1] = lVar10;
    uVar18 = *param_5;
    param_5[1] = uVar18;
    *param_5 = param_4[1];
    param_4[1] = uVar18;
    uVar18 = param_5[1];
    param_5[1] = param_4[2];
    param_4[2] = uVar18;
    uVar18 = param_5[2];
    param_5[2] = param_4[3];
    param_4[3] = uVar18;
    *param_4 = param_4[1];
    return;
  }
  return;
}



/* Entry: 10b24340c; end: 10b24348b;  */

void FUN_10b24340c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b243db8();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30;
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b24348c; end: 10b243503;  */

long * FUN_10b24348c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10b224d30();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}


