/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10564ac44; end: 10564ac4f;  */

undefined8 * FUN_10564ac44(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110ceae08;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_10564abe0(param_1,param_2);
  return param_1;
}



/* Entry: 10564ac50; end: 10564acef;  */

undefined8 * FUN_10564ac50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110ceae08;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  FUN_10564abe0(param_1,param_3);
  return param_1;
}



/* Entry: 10564acf0; end: 10564ad93;  */

long FUN_10564acf0(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010564c744();
  FUN_10564ada4();
  FUN_10564ae68(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x68,unaff_x19 + 2);
  FUN_10564ad94(lStack_48);
  lStack_48 = lStack_48 + 0x68;
  FUN_10564adfc();
  lVar1 = unaff_x19[1];
  func_0x00010564b050(auStack_58);
  return lVar1;
}



/* Entry: 10564ad94; end: 10564ada3;  */

void FUN_10564ad94(void)

{
  func_0x00010564c3cc();
  return;
}



/* Entry: 10564ada4; end: 10564adfb;  */

long * FUN_10564ada4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  if (param_2 < (long *)0x276276276276277) {
    uVar1 = (param_1[2] - *param_1) / 0x68;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x13b13b13b13b13a < uVar1) {
      plVar2 = (long *)0x276276276276276;
    }
    return plVar2;
  }
  FUN_10564ae5c();
  func_0x00010564c43c();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x68) * 0x68;
  FUN_10564af08(plVar2,*param_1,param_1[1],lVar3);
  *(long *)(unaff_x19 + 8) = lVar3;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010564c448();
  return plVar2;
}



/* Entry: 10564adfc; end: 10564ae5b;  */

void FUN_10564adfc(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x00010564c43c();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x68) * 0x68;
  FUN_10564af08(param_1 + 2,*param_1,param_1[1],lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010564c448();
  return;
}



/* Entry: 10564ae5c; end: 10564ae67;  */

long * FUN_10564ae5c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010564c4d4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010564aeb4();
  }
  lVar1 = param_4 + param_3 * 0x68;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x68;
  return param_1;
}



/* Entry: 10564ae68; end: 10564aed7;  */

long * FUN_10564ae68(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010564aeb4();
  }
  lVar1 = param_4 + param_3 * 0x68;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x68;
  return param_1;
}



/* Entry: 10564aed8; end: 10564af07;  */

void FUN_10564aed8(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x276276276276277) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x68);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x68) {
    FUN_10564ad94(param_4,uVar1);
    param_4 = lStack_48 + 0x68;
  }
  uStack_58 = 1;
  FUN_10564afa0(param_1,param_2,param_3);
  FUN_10564afd0(&uStack_70);
  return;
}



/* Entry: 10564af08; end: 10564af9f;  */

void FUN_10564af08(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x68) {
    FUN_10564ad94(param_4,lVar1);
    param_4 = lStack_38 + 0x68;
  }
  uStack_48 = 1;
  FUN_10564afa0(param_1,param_2,param_3);
  FUN_10564afd0(&uStack_60);
  return;
}



/* Entry: 10564afa0; end: 10564afcf;  */

void FUN_10564afa0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x68) {
    func_0x00010564b0b8();
  }
  return;
}



/* Entry: 10564afd0; end: 10564afff;  */

long FUN_10564afd0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10564b000(param_1);
  }
  return param_1;
}



/* Entry: 10564b000; end: 10564b01f;  */

void FUN_10564b000(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x68;
    func_0x00010564b0b8();
  }
  return;
}



/* Entry: 10564b020; end: 10564b07b;  */

void FUN_10564b020(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x68;
    func_0x00010564b0b8();
  }
  return;
}



/* Entry: 10564b07c; end: 10564b083;  */

void FUN_10564b07c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x68;
    func_0x00010564b0b8();
  }
  return;
}



/* Entry: 10564b084; end: 10564b137;  */

void FUN_10564b084(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x68;
    func_0x00010564b0b8();
  }
  return;
}



/* Entry: 10564b138; end: 10564b13f;  */

void FUN_10564b138(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x68;
    func_0x00010564b0b8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10564b140; end: 10564b173;  */

void FUN_10564b140(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010564c43c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x68;
    func_0x00010564b0b8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10564b174; end: 10564b18f;  */

void FUN_10564b174(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10564b190; end: 10564b227;  */

void FUN_10564b190(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10564b228; end: 10564b22b;  */

void FUN_10564b228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3690;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10564b22c; end: 10564b23f;  */

void FUN_10564b22c(void)

{
  func_0x00010564b24c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b240; end: 10564b25b;  */

void FUN_10564b240(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x0001005d1958();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10564b25c; end: 10564b26f;  */

void FUN_10564b25c(void)

{
  func_0x00010564b278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b270; end: 10564b283;  */

void FUN_10564b270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010564c3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10564b284; end: 10564b2d3;  */

void FUN_10564b284(long param_1)

{
  func_0x00010564c4c8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10564b2d4; end: 10564b2eb;  */

void FUN_10564b2d4(long param_1)

{
  if (param_1 != 0) {
    func_0x00010bccc224();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b2ec; end: 10564b2ef;  */

void FUN_10564b2ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10564b2f0; end: 10564b303;  */

void FUN_10564b2f0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b304; end: 10564b30b;  */

void FUN_10564b304(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bccc224();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b30c; end: 10564b343;  */

long FUN_10564b30c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108a3770);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10564b344; end: 10564b347;  */

void FUN_10564b344(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b348; end: 10564b397;  */

void FUN_10564b348(long param_1)

{
  func_0x00010564c4c8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10564b398; end: 10564b3af;  */

void FUN_10564b398(long param_1)

{
  if (param_1 != 0) {
    func_0x00010bccc224();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b3b0; end: 10564b3b3;  */

void FUN_10564b3b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3790;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10564b3b4; end: 10564b3c7;  */

void FUN_10564b3b4(void)

{
  FUN_10564b428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b3c8; end: 10564b3d3;  */

void FUN_10564b3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010564c3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10564b3d4; end: 10564b3e7;  */

void FUN_10564b3d4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b3e8; end: 10564b3ef;  */

void FUN_10564b3e8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bccc224();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b3f0; end: 10564b427;  */

long FUN_10564b3f0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108a3820);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10564b428; end: 10564b437;  */

void FUN_10564b428(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b438; end: 10564b45b;  */

void FUN_10564b438(long param_1)

{
  func_0x00010564c4c8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10564b45c; end: 10564b52f;  */

void FUN_10564b45c(undefined8 *param_1,int *param_2,ulong param_3)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  uVar2 = param_3;
  func_0x0001006039a0(param_3);
  func_0x00010564c77c();
  piVar1 = param_2;
  func_0x00010564c368();
  if (piVar1 == (int *)0x0) {
    uVar3 = (ulong)(*param_2 + 1);
    piVar1 = param_2;
    func_0x00010055e6e8();
    if ((int)piVar1 != 0) {
      func_0x0001006039a0(param_3);
      func_0x00010564c77c();
      func_0x00010564c368(param_2);
      uVar2 = uVar3;
    }
    piVar1 = param_2;
    func_0x00010055df10(param_2,0x38);
    func_0x00010063bf24(piVar1 + 2,*(undefined8 *)(param_2 + 6),param_3);
    func_0x00010055df30(piVar1 + 8,*(undefined8 *)(param_2 + 6));
    func_0x00010055e950(param_2,uVar2,piVar1);
    *param_2 = *param_2 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = piVar1;
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = (int)uVar2;
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 10564b530; end: 10564b56b;  */

undefined8 * FUN_10564b530(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    puVar1 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    puVar1 = (undefined8 *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  FUN_10527822c();
  *puVar1 = &PTR_FUN_1108a3840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return puVar1;
}



/* Entry: 10564b56c; end: 10564b56f;  */

void FUN_10564b56c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10564b570; end: 10564b583;  */

void FUN_10564b570(void)

{
  FUN_10564b7d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b584; end: 10564b58f;  */

void FUN_10564b584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010564c3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10564b590; end: 10564b5a3;  */

void FUN_10564b590(void)

{
  FUN_10564b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b5a4; end: 10564b67f;  */

void FUN_10564b5a4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long alStack_70 [5];
  undefined1 auStack_48 [24];
  
  uVar2 = (ulong)*param_3;
  func_0x00010b281af8(uVar2);
  func_0x00010002b838(auStack_48,uVar2);
  func_0x00010564c688();
  func_0x00010564c488();
  func_0x00010564c49c();
  func_0x00010564c480();
  func_0x00010564c64c(alStack_70);
  if (alStack_70[0] != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_88,param_3 + 2)
    ;
    uVar1 = *param_3;
    func_0x00010564c724();
    func_0x00010002b838(auStack_a0);
    FUN_105649f8c(alStack_70[0],auStack_88,uVar1,auStack_a0);
    func_0x00010564c500();
    func_0x00010564c4b8();
  }
  func_0x00010564c55c();
  return;
}



/* Entry: 10564b680; end: 10564b75f;  */

void FUN_10564b680(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long alStack_70 [8];
  
  func_0x00010564c5cc();
  func_0x00010564c688();
  func_0x00010564c488();
  func_0x00010564c49c();
  func_0x00010564c480();
  func_0x00010564c64c(alStack_70);
  if (alStack_70[0] != 0) {
    func_0x00010564c788(*(undefined8 *)(param_3 + 0x38));
    FUN_105649b90();
    FUN_105649c08(alStack_70[0],param_3);
    func_0x00010564c770();
    func_0x00010002b838(auStack_88);
    func_0x00010564c528();
    func_0x00010002b838(auStack_a0);
    func_0x00010564c6e4();
    func_0x00010564c500();
    func_0x00010564c4b8();
  }
  func_0x00010564c55c();
  return;
}



/* Entry: 10564b760; end: 10564b7d3;  */

undefined8 * FUN_10564b760(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a3890;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
  func_0x00010564c6b0();
  return param_1;
}



/* Entry: 10564b7d4; end: 10564b7df;  */

void FUN_10564b7d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3840;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10564b7e0; end: 10564b803;  */

void FUN_10564b7e0(long param_1)

{
  func_0x00010564c4c8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10564b804; end: 10564b883;  */

void FUN_10564b804(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  long alStack_30 [2];
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010564b798(alStack_30,lVar2);
  if ((alStack_30[0] != 0) &&
     (lVar1 = alStack_30[0], FUN_105648b1c(alStack_30[0],lVar2 + 0x10), (int)lVar1 != 0)) {
    func_0x00010564c5c4();
    FUN_10564905c(alStack_30[0],auStack_48);
    func_0x00010564c388();
  }
  func_0x00010564c6fc();
  return;
}



/* Entry: 10564b884; end: 10564b8a3;  */

void FUN_10564b884(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1056491a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10564b8a4; end: 10564b8cb;  */

void FUN_10564b8a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10564b8cc; end: 10564b8f3;  */

undefined1  [16] FUN_10564b8cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  _strlen();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10564b8f4; end: 10564b8f7;  */

void FUN_10564b8f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3928;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10564b8f8; end: 10564b90b;  */

void FUN_10564b8f8(void)

{
  FUN_10564c16c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b90c; end: 10564b917;  */

void FUN_10564b90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010564c3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10564b918; end: 10564b92b;  */

void FUN_10564b918(void)

{
  FUN_10564c108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10564b92c; end: 10564be2f;  */

void FUN_10564b92c(code **param_1,undefined8 param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_ZR;
  code **ppcVar4;
  undefined *puVar5;
  code **ppcVar6;
  long *plVar7;
  uint uVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long *plVar12;
  code **unaff_x22;
  long lVar13;
  ulong uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  char cStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  ulong uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  char cStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  char cStack_2a0;
  long alStack_290 [2];
  undefined1 auStack_280 [48];
  code **ppcStack_250;
  uint *puStack_248;
  code **ppcStack_240;
  long *plStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  code *pcStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  code *pcStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  long alStack_1e0 [2];
  code *apcStack_1d0 [3];
  undefined1 auStack_1b8 [24];
  code *pcStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  code *pcStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  code **ppcStack_148;
  code *pcStack_118;
  code *pcStack_110;
  uint auStack_108 [6];
  int iStack_f0;
  undefined1 auStack_e8 [16];
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  code **ppcStack_b8;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = param_1[0xf];
  func_0x00010b281af8(*param_3);
  func_0x00010564c670();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (apcStack_1d0,param_1 + 0xc);
  ppcVar4 = apcStack_1d0;
  FUN_105652294(pcVar10,auStack_1b8,ppcVar4,1);
  func_0x00010564c54c();
  func_0x00010564c508();
  func_0x00010564c64c(alStack_1e0);
  if (alStack_1e0[0] == 0) {
    pcVar10 = param_1[3];
    if (pcVar10 == (code *)0x0) goto LAB_10564bd00;
    func_0x00010564c724();
    func_0x00010002b838(&pcStack_1f8);
    param_1 = (code **)(long)(int)*param_3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pcStack_c8,param_3 + 2);
    ppuStack_218 = ppuStack_c0;
    pcStack_220 = pcStack_c8;
    func_0x00010564c75c();
    uStack_150 = uStack_1e8;
    pcStack_158 = pcStack_1f0;
    pcStack_160 = pcStack_1f8;
    pcStack_1f8 = (code *)0x0;
    pcStack_1f0 = (code *)0x0;
    uStack_1e8 = 0;
    ppuStack_218 = (undefined **)0x0;
    uStack_210 = 0;
    pcStack_220 = (code *)0x0;
    ppcStack_148 = param_1;
    func_0x00010564c520(*(undefined8 *)(*(long *)pcVar10 + 0x18));
    func_0x00010564c59c();
    func_0x00010564c544();
    func_0x00010564c4c0();
    ppcVar6 = &pcStack_1f8;
    param_3 = param_3 + 2;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x10);
    unaff_x22 = (code **)(long)(int)uVar2;
    ppcVar4 = (code **)&UNK_10f2e1abe;
    func_0x0001003ba264(&UNK_10f2e1abe,0x1f,3);
    uVar8 = *param_3;
    in_ZR = uVar8 == 0xe;
    if (((uVar8 < 0xf) && (in_ZR = (1 << (ulong)(uVar8 & 0x1f) & 0x6014U) == 0, !(bool)in_ZR)) &&
       (in_ZR = ppcVar4 == unaff_x22, (long)unaff_x22 < (long)ppcVar4)) {
      puVar5 = &UNK_10f2e1ade;
      func_0x0001003ba264(&UNK_10f2e1ade,0x2a,500);
      if ((int)uVar2 < 0) {
        lVar13 = 0;
      }
      else {
        uVar8 = uVar2;
        if (0x1d < uVar2) {
          uVar8 = 0x1e;
        }
        uVar3 = 0;
        if (((ulong)puVar5 & 0xffff) != 0) {
          uVar3 = 8000 / ((uint)puVar5 & 0xffff);
        }
        uVar9 = (long)puVar5 << ((ulong)uVar8 & 0x3f);
        if (7999 < uVar9) {
          uVar9 = 8000;
        }
        lVar13 = 8000000000;
        if (uVar3 >> ((ulong)uVar8 & 0x3f) != 0) {
          lVar13 = uVar9 * 1000000;
        }
        lVar1 = 8000000000;
        if ((ulong)puVar5 >> 6 < 0x7d) {
          lVar1 = lVar13;
        }
        in_ZR = puVar5 == (undefined *)0x1;
        lVar13 = 0;
        if (0 < (long)puVar5) {
          lVar13 = lVar1;
        }
      }
      FUN_10564b530(&pcStack_160,*(undefined8 *)(alStack_1e0[0] + 8),
                    *(undefined8 *)(alStack_1e0[0] + 0x10));
      pcStack_d8 = pcStack_160;
      pcStack_d0 = pcStack_158;
      if (pcStack_158 != (code *)0x0) {
        do {
          func_0x00010564c334();
        } while (extraout_w10 != 0);
      }
      func_0x00010564b1e0(&pcStack_160);
      uVar11 = *(undefined8 *)(alStack_1e0[0] + 0x1c0);
      if (pcStack_158 != (code *)0x0) {
        do {
          func_0x00010564c334();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010564b190(&uStack_150,param_1 + 5);
      pcStack_110 = param_1[4];
      pcStack_118 = param_1[3];
      if (param_1[4] != (code *)0x0) {
        do {
          func_0x00010564c334();
        } while (extraout_w10_01 != 0);
      }
      param_3 = auStack_108;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (param_3,param_1 + 0xc);
      iStack_f0 = uVar2 + 1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      pcStack_c8 = FUN_10564c1e0;
      ppuStack_c0 = &PTR_FUN_1108a39d0;
      param_1 = (code **)0x78;
      __Znwm();
      param_1[1] = pcStack_158;
      *param_1 = pcStack_160;
      pcStack_160 = (code *)0x0;
      pcStack_158 = (code *)0x0;
      func_0x00010564b190(param_1 + 2,&uStack_150);
      param_1[10] = pcStack_110;
      param_1[9] = pcStack_118;
      if (pcStack_110 != (code *)0x0) {
        do {
          func_0x00010564c334();
        } while (extraout_w10_02 != 0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (param_1 + 0xb,auStack_108);
      unaff_x22 = &pcStack_c8;
      *(int *)(param_1 + 0xe) = iStack_f0;
      ppcVar4 = (code **)((long)param_3 + lVar13);
      ppcStack_b8 = param_1;
      func_0x00010bcce9b8(auStack_e8,uVar11,&pcStack_c8);
      func_0x00010564c3b8(ppuStack_c0);
      func_0x000100688f2c(auStack_e8);
      func_0x00010564a268(&pcStack_160);
      func_0x00010564b1bc(&pcStack_d8);
      goto LAB_10564bd00;
    }
    pcVar10 = param_1[3];
    if (pcVar10 != (code *)0x0) {
      func_0x00010564c724();
      func_0x00010002b838(&pcStack_178);
      unaff_x22 = (code **)(long)(int)*param_3;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pcStack_c8,param_3 + 2);
      ppuStack_198 = ppuStack_c0;
      pcStack_1a0 = pcStack_c8;
      func_0x00010564c75c();
      uStack_150 = uStack_168;
      pcStack_158 = pcStack_170;
      pcStack_160 = pcStack_178;
      pcStack_178 = (code *)0x0;
      pcStack_170 = (code *)0x0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)0x0;
      uStack_190 = 0;
      pcStack_1a0 = (code *)0x0;
      ppcStack_148 = unaff_x22;
      (**(code **)(*(long *)pcVar10 + 0x18))(pcVar10,&pcStack_160);
      func_0x00010564c59c();
      func_0x0001001148fc(&pcStack_1a0);
      func_0x00010564c4c0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_178);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pcStack_160,param_3 + 2);
    param_1 = (code **)(ulong)*param_3;
    func_0x00010564c724();
    func_0x00010002b838(&pcStack_c8);
    ppcVar4 = param_1;
    FUN_105649f8c(alStack_1e0[0],&pcStack_160,param_1,&pcStack_c8);
    func_0x00010564c4c0();
    ppcVar6 = &pcStack_160;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppcVar6);
LAB_10564bd00:
  plVar12 = alStack_1e0;
  func_0x00010564b1e0();
  func_0x00010564c730(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010564c59c();
    func_0x0001001148fc(&pcStack_1a0);
    func_0x00010564c4c0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_178);
    plVar7 = alStack_1e0;
    func_0x00010564b1e0();
    func_0x00010564c380();
    pcStack_228 = FUN_10564be30;
    ppcStack_250 = unaff_x22;
    puStack_248 = param_3;
    ppcStack_240 = param_1;
    plStack_238 = plVar12;
    puStack_230 = &stack0xfffffffffffffff0;
    func_0x00010564c5cc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_280,plVar7 + 0xc);
    func_0x00010564c488();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_280);
    func_0x00010564c480();
    func_0x00010564b798(alStack_290,plVar7 + 1);
    if (alStack_290[0] != 0) {
      func_0x00010564c788(ppcVar4[7]);
      FUN_105649b90();
      FUN_105649c08(alStack_290[0],ppcVar4);
    }
    plVar12 = (long *)plVar7[3];
    if (plVar12 != (long *)0x0) {
      if (alStack_290[0] == 0) {
        func_0x00010564c528();
        func_0x00010002b838(&uStack_380);
        FUN_10564c150(&uStack_3a0,&UNK_10f2e1cbf);
        uStack_2e0 = uStack_370;
        uStack_2e8 = uStack_378;
        uStack_2f0 = uStack_380;
        uStack_378 = 0;
        uStack_370 = 0;
        uStack_380 = 0;
        uStack_2d8 = 0;
        uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
        uStack_2b8 = cStack_388 == '\x01';
        if ((bool)uStack_2b8) {
          uStack_2c8 = uStack_398;
          uStack_2d0 = uStack_3a0;
          uStack_2c0 = uStack_390;
          uStack_398 = 0;
          uStack_390 = 0;
          uStack_3a0 = 0;
        }
        (**(code **)(*plVar12 + 0x18))(plVar12,&uStack_2f0);
        FUN_1052a03ac(&uStack_2f0);
        func_0x00010564c544();
        func_0x00010564c704();
      }
      else {
        FUN_10564833c(&uStack_2f0,alStack_290[0],plVar7 + 5,1);
        plVar12 = (long *)plVar7[3];
        if (cStack_2a0 == '\x01') {
          func_0x00010564c520(*(undefined8 *)(*plVar12 + 0x10));
        }
        else {
          func_0x00010564c528();
          func_0x00010564c694();
          FUN_10564b174(&uStack_368,&UNK_10f2e1a87);
          uStack_320 = uStack_338;
          uStack_328 = uStack_340;
          uStack_330 = uStack_348;
          uStack_340 = 0;
          uStack_338 = 0;
          uStack_348 = 0;
          uStack_318 = 0;
          uStack_310 = uStack_310 & 0xffffffffffffff00;
          uStack_2f8 = cStack_350 == '\x01';
          if ((bool)uStack_2f8) {
            uStack_308 = uStack_360;
            uStack_310 = uStack_368;
            uStack_300 = uStack_358;
            uStack_360 = 0;
            uStack_358 = 0;
            uStack_368 = 0;
          }
          func_0x00010564c520(*(undefined8 *)(*plVar12 + 0x18));
          FUN_1052a03ac(&uStack_330);
          func_0x00010564c5b4();
          func_0x00010564c4a4();
        }
        FUN_10564a548(&uStack_2f0);
      }
    }
    if (alStack_290[0] != 0) {
      func_0x00010564c770();
      func_0x00010002b838(&uStack_2f0);
      func_0x00010564c528();
      func_0x00010002b838(&uStack_330);
      func_0x00010564c6e4();
      func_0x00010564c69c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2f0);
    }
    func_0x00010564b1e0(alStack_290);
    return;
  }
  return;
}



/* Entry: 10564be30; end: 10564c107;  */

void FUN_10564be30(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char cStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char cStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  char cStack_80;
  long alStack_70 [2];
  undefined1 auStack_60 [48];
  
  func_0x00010564c5cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_60,param_1 + 0x60);
  func_0x00010564c488();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x00010564c480();
  func_0x00010564b798(alStack_70,param_1 + 8);
  if (alStack_70[0] != 0) {
    func_0x00010564c788(*(undefined8 *)(param_3 + 0x38));
    FUN_105649b90();
    FUN_105649c08(alStack_70[0],param_3);
  }
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (alStack_70[0] == 0) {
      func_0x00010564c528();
      func_0x00010002b838(&uStack_160);
      FUN_10564c150(&uStack_180,&UNK_10f2e1cbf);
      uStack_c0 = uStack_150;
      uStack_c8 = uStack_158;
      uStack_d0 = uStack_160;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_160 = 0;
      uStack_b8 = 0;
      uStack_b0 = uStack_b0 & 0xffffffffffffff00;
      uStack_98 = cStack_168 == '\x01';
      if ((bool)uStack_98) {
        uStack_a8 = uStack_178;
        uStack_b0 = uStack_180;
        uStack_a0 = uStack_170;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_180 = 0;
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,&uStack_d0);
      FUN_1052a03ac(&uStack_d0);
      func_0x00010564c544();
      func_0x00010564c704();
    }
    else {
      FUN_10564833c(&uStack_d0,alStack_70[0],param_1 + 0x28,1);
      plVar1 = *(long **)(param_1 + 0x18);
      if (cStack_80 == '\x01') {
        func_0x00010564c520(*(undefined8 *)(*plVar1 + 0x10));
      }
      else {
        func_0x00010564c528();
        func_0x00010564c694();
        FUN_10564b174(&uStack_148,&UNK_10f2e1a87);
        uStack_100 = uStack_118;
        uStack_108 = uStack_120;
        uStack_110 = uStack_128;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_128 = 0;
        uStack_f8 = 0;
        uStack_f0 = uStack_f0 & 0xffffffffffffff00;
        uStack_d8 = cStack_130 == '\x01';
        if ((bool)uStack_d8) {
          uStack_e8 = uStack_140;
          uStack_f0 = uStack_148;
          uStack_e0 = uStack_138;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_148 = 0;
        }
        func_0x00010564c520(*(undefined8 *)(*plVar1 + 0x18));
        FUN_1052a03ac(&uStack_110);
        func_0x00010564c5b4();
        func_0x00010564c4a4();
      }
      FUN_10564a548(&uStack_d0);
    }
  }
  if (alStack_70[0] != 0) {
    func_0x00010564c770();
    func_0x00010002b838(&uStack_d0);
    func_0x00010564c528();
    func_0x00010002b838(&uStack_110);
    func_0x00010564c6e4();
    func_0x00010564c69c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
  }
  func_0x00010564b1e0(alStack_70);
  return;
}



/* Entry: 10564c108; end: 10564c14f;  */

undefined8 * FUN_10564c108(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a3978;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  func_0x000105646330(param_1 + 3);
  func_0x00010564c6b0();
  return param_1;
}



/* Entry: 10564c150; end: 10564c16b;  */

void FUN_10564c150(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10564c16c; end: 10564c177;  */

void FUN_10564c16c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a3928;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10564c178; end: 10564c19b;  */

void FUN_10564c178(long param_1)

{
  func_0x00010564c4c8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10564c19c; end: 10564c1df;  */

void FUN_10564c19c(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
  param_1[1] = param_2;
  uVar1 = *(uint *)(param_2 + 0xc);
  if (uVar1 == *(uint *)(param_2 + 4)) {
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return;
  }
  *(uint *)(param_1 + 2) = uVar1;
  uVar2 = *(ulong *)(*(long *)(param_2 + 0x10) + (ulong)uVar1 * 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(**(long **)(uVar2 - 1) + 0x20);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 10564c1e0; end: 10564c30f;  */

void FUN_10564c1e0(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  long alStack_30 [2];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010564b798(alStack_30,lVar1);
  if (alStack_30[0] == 0) {
    plVar2 = *(long **)(lVar1 + 0x48);
    if (plVar2 != (long *)0x0) {
      func_0x00010564c528();
      func_0x00010002b838(&uStack_88);
      FUN_10564c150(&uStack_a8,&UNK_10f2e1cbf);
      uStack_60 = uStack_78;
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_88 = 0;
      uStack_58 = 0;
      uStack_50 = uStack_50 & 0xffffffffffffff00;
      uStack_38 = cStack_90 == '\x01';
      if ((bool)uStack_38) {
        uStack_48 = uStack_a0;
        uStack_50 = uStack_a8;
        uStack_40 = uStack_98;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_a8 = 0;
      }
      func_0x00010564c520(*(undefined8 *)(*plVar2 + 0x18));
      FUN_1052a03ac(&uStack_70);
      func_0x0001001148fc(&uStack_a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
    }
  }
  else {
    FUN_10564997c(alStack_30[0],lVar1 + 0x10,lVar1 + 0x48,lVar1 + 0x58,*(undefined4 *)(lVar1 + 0x70)
                 );
  }
  func_0x00010564b1e0(alStack_30);
  return;
}



/* Entry: 10564c310; end: 10564c32f;  */

void FUN_10564c310(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010564a268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10564c330; end: 10564c79b;  */

void FUN_10564c330(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10564c79c; end: 10564d0eb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10564c79c(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  int *piVar3;
  int *piVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  int *piVar19;
  undefined *******pppppppuVar20;
  long *plVar21;
  ulong *puVar22;
  ulong uVar23;
  undefined ********ppppppppuVar24;
  long lVar25;
  long lVar26;
  ulong *puVar27;
  long lVar28;
  int *piVar29;
  int *piVar30;
  int iVar31;
  undefined ********ppppppppuVar32;
  uint uStack_25c;
  undefined1 auStack_258 [24];
  undefined ********ppppppppuStack_240;
  ulong uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined **ppuStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined ********ppppppppuStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  long *aplStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined ********ppppppppuStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  char cStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  func_0x000100100ed0(aplStack_e0);
  if (aplStack_e0[0] == (long *)0x0) {
    FUN_105652470();
    func_0x00010002b838(&ppppppppuStack_1f0,&UNK_10f2e1cdb);
    func_0x00010564d168();
    func_0x00010564d150();
    uStack_25c = 1;
    if (*(char *)(param_4 + 0x24) != '\0') {
      uStack_25c = 2;
    }
    goto LAB_10564ca84;
  }
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  ppuStack_90 = &PTR_DAT_110cf89e0;
  iVar31 = *(int *)(param_4 + 0x30);
  uVar17 = 1;
  if ((iVar31 == 3) || (iVar31 == 0x28)) {
LAB_10564c864:
    uStack_80 = (ulong)uVar17;
  }
  else {
    if (iVar31 == 0x25) {
      uVar17 = 0xb;
      goto LAB_10564c864;
    }
    if (iVar31 == 0x13) {
      uVar17 = 2;
      goto LAB_10564c864;
    }
  }
  if (*(uint *)(param_4 + 0x20) < 0x16) {
    uStack_80 = CONCAT44(*(uint *)(param_4 + 0x20),(undefined4)uStack_80);
  }
  func_0x000105637028(&ppppppppuStack_1f0);
  func_0x000105637030(&ppppppppuStack_1f0);
  FUN_105637040();
  uStack_ec = (undefined4)*(undefined8 *)(param_4 + 0x28);
  uStack_e8 = (undefined4)*(undefined8 *)(param_4 + 0x18);
  ppppppppuStack_240 = (undefined ********)&PTR_DAT_110cf8f38;
  uStack_238 = 0;
  puStack_230 = &DAT_11383d918;
  puStack_228 = &DAT_11383d918;
  uStack_218 = 0;
  uStack_220 = 0;
  FUN_1056497ac(&ppppppppuStack_b0,param_2,&UNK_10f2e0182,0x10,1);
  FUN_1056497ac(&uStack_d0,param_2,&UNK_10f2e018e,0x18,1);
  if (cStack_98 == '\x01') {
    uVar15 = uStack_238;
    if ((uStack_238 & 1) != 0) {
      uVar15 = *(ulong *)(uStack_238 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(&puStack_230,&ppppppppuStack_b0,uVar15);
  }
  if (cStack_b8 == '\x01') {
    uVar15 = uStack_238;
    if ((uStack_238 & 1) != 0) {
      uVar15 = *(ulong *)(uStack_238 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(&puStack_228,&uStack_d0,uVar15);
    if (*(char *)(param_4 + 0x24) == '\x01') {
LAB_10564c968:
      uStack_220 = CONCAT71(uStack_220._1_7_,1);
      uStack_220 = CONCAT44(1,(undefined4)uStack_220);
    }
LAB_10564c97c:
    FUN_1056370a4(&ppppppppuStack_1f0);
    FUN_1056370b4();
  }
  else {
    if ((*(byte *)(param_4 + 0x24) & 1) != 0) goto LAB_10564c968;
    if (cStack_98 != '\0') goto LAB_10564c97c;
  }
  func_0x0001001148fc(&uStack_d0);
  func_0x0001001148fc(&ppppppppuStack_b0);
  func_0x00010b511ce0(&ppppppppuStack_240);
  func_0x00010b510608(&ppuStack_90);
  func_0x00010bcd54ac(&ppuStack_90,&ppppppppuStack_1f0);
  func_0x00010002b838(&ppppppppuStack_b0,&UNK_10f2e1ce2);
  uStack_200 = uStack_80;
  uStack_208 = uStack_88;
  ppuStack_210 = ppuStack_90;
  puStack_230 = puStack_a0;
  uStack_88 = 0;
  uStack_80 = 0;
  ppuStack_90 = (undefined **)0x0;
  uStack_238 = uStack_a8;
  ppppppppuStack_240 = ppppppppuStack_b0;
  ppppppppuStack_b0 = (undefined ********)0x0;
  uStack_a8 = 0;
  puStack_a0 = (undefined *)0x0;
  puStack_228 = (undefined *)0x0;
  uStack_220 = 0;
  uStack_218 = 0xc;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  func_0x000100100fec(&uStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppppuStack_b0);
  (**(code **)(*aplStack_e0[0] + 0x38))(aplStack_e0[0],&ppppppppuStack_240);
  if (((uint)aplStack_e0[0] >> 8 & 1) == 0) {
    FUN_105652470();
    func_0x00010002b838(auStack_258,&UNK_10f2e1d02);
    func_0x00010564d168();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
    aplStack_e0[0] = (long *)(ulong)*(byte *)(param_4 + 0x24);
  }
  uStack_25c = 1;
  if (((ulong)aplStack_e0[0] & 1) != 0) {
    uStack_25c = 2;
  }
  func_0x000100114924(&ppppppppuStack_240);
  func_0x00010564d158();
  func_0x00010564d148();
LAB_10564ca84:
  func_0x0001000df75c(aplStack_e0);
  iVar31 = *(int *)(param_4 + 0x30);
  if (iVar31 == 3) {
    iVar31 = 2;
  }
  else if (iVar31 == 0x13) {
    iVar31 = 4;
  }
  else if ((iVar31 == 0x22) || (iVar31 == 0x25)) {
    iVar31 = 1;
  }
  else if (iVar31 == 0x28) {
    iVar31 = 3;
  }
  else {
    iVar31 = 0;
  }
  do {
    plVar21 = (long *)(param_3 + 0x18);
    if ((*(ulong *)(param_3 + 0x18) & 1) != 0) {
      plVar21 = (long *)(*(ulong *)(param_3 + 0x18) + 7);
    }
    plVar1 = plVar21 + *(int *)(param_3 + 0x20);
    for (; plVar21 != plVar1; plVar21 = plVar21 + 1) {
      lVar26 = *plVar21;
      uVar15 = *(ulong *)(lVar26 + 0x10);
      iVar7 = *(int *)(param_4 + 0x20);
      puVar22 = (ulong *)(lVar26 + 0x10);
      if ((uVar15 & 1) != 0) {
        puVar22 = (ulong *)(uVar15 + 7);
      }
      puVar2 = puVar22 + *(int *)(lVar26 + 0x18);
      for (; puVar22 != puVar2; puVar22 = puVar22 + 1) {
        uVar15 = *puVar22;
        piVar29 = *(int **)(uVar15 + 0x18);
        piVar3 = piVar29 + *(int *)(uVar15 + 0x10);
        lVar18 = (long)*(int *)(uVar15 + 0x10) << 2;
        for (; (piVar30 = piVar3, lVar18 != 0 && (piVar30 = piVar29, *piVar29 != iVar31));
            piVar29 = piVar29 + 1) {
          lVar18 = lVar18 + -4;
        }
        ppppppppuStack_1f0 = (undefined ********)CONCAT44(ppppppppuStack_1f0._4_4_,uStack_25c);
        lVar18 = *(long *)(uVar15 + 0x30);
        FUN_10564d0ec(lVar18,lVar18 + (long)*(int *)(uVar15 + 0x28) * 4,&ppppppppuStack_1f0);
        iVar9 = *(int *)(uVar15 + 0x70);
        if (iVar9 == 0) {
          bVar11 = true;
        }
        else {
          piVar29 = *(int **)(uVar15 + 0x78);
          piVar4 = piVar29 + iVar9;
          lVar25 = (long)iVar9 << 2;
          for (; (piVar19 = piVar4, lVar25 != 0 && (piVar19 = piVar29, *piVar29 != iVar7));
              piVar29 = piVar29 + 1) {
            lVar25 = lVar25 + -4;
          }
          bVar11 = piVar4 != piVar19;
        }
        lVar25 = *(long *)(uVar15 + 0x30);
        iVar9 = *(int *)(uVar15 + 0x28);
        if (*(int *)(uVar15 + 0x60) == 0) {
          bVar12 = true;
        }
        else {
          func_0x000100100ed0(&ppppppppuStack_b0);
          if (ppppppppuStack_b0 == (undefined ********)0x0) {
            bVar12 = false;
          }
          else {
            uVar23 = *(ulong *)(uVar15 + 0x58);
            puVar27 = (ulong *)(uVar15 + 0x58);
            if ((uVar23 & 1) != 0) {
              puVar27 = (ulong *)(uVar23 + 7);
            }
            lVar28 = (long)*(int *)(uVar15 + 0x60) << 3;
            do {
              bVar12 = lVar28 == 0;
              if (lVar28 == 0) break;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (&ppppppppuStack_240,*puVar27);
              uStack_1e8 = uStack_238;
              ppppppppuStack_1f0 = ppppppppuStack_240;
              uStack_1e0 = puStack_230;
              uStack_238 = 0;
              puStack_230 = (undefined *)0x0;
              ppppppppuStack_240 = (undefined ********)0x0;
              uStack_1d8 = 0;
              uStack_1d0 = 0;
              uStack_1c8 = 0xc;
              uStack_1b8 = 0;
              uStack_1b0 = 0;
              uStack_1c0 = 0;
              uStack_88 = 0;
              uStack_80 = 0;
              ppuStack_90 = (undefined **)0x0;
              func_0x00010564d158();
              func_0x00010564d160();
              ppppppppuVar32 = ppppppppuStack_b0;
              (*(code *)(*ppppppppuStack_b0)[7])(ppppppppuStack_b0,&ppppppppuStack_1f0);
              func_0x000100114924(&ppppppppuStack_1f0);
              lVar28 = lVar28 + -8;
              puVar27 = puVar27 + 1;
            } while ((((uint)ppppppppuVar32 ^ 0xffffffff) & 0x101) == 0);
          }
          func_0x0001000df75c(&ppppppppuStack_b0);
        }
        bVar10 = false;
        if (piVar3 != piVar30 && lVar25 + (long)iVar9 * 4 != lVar18) {
          bVar10 = bVar11;
        }
        if (bVar10 && bVar12) {
          if ((int)*(uint *)(uVar15 + 0x48) < 1) {
LAB_10564cfb4:
            FUN_105649edc(&ppppppppuStack_1f0,*(undefined4 *)(lVar26 + 0x28),
                          *(undefined4 *)(lVar26 + 0x2c),uStack_25c);
            param_1[1] = uStack_1e8;
            *param_1 = (long)ppppppppuStack_1f0;
            param_1[2] = (long)uStack_1e0;
            uStack_1e8 = 0;
            uStack_1e0 = (undefined *)0x0;
            ppppppppuStack_1f0 = (undefined ********)0x0;
            *(undefined1 *)(param_1 + 3) = 1;
            func_0x00010564d150();
            return;
          }
          uVar23 = *(ulong *)(uVar15 + 0x40);
          puVar27 = (ulong *)(uVar15 + 0x40);
          if ((uVar23 & 1) != 0) {
            puVar27 = (ulong *)(uVar23 + 7);
          }
          puVar5 = puVar27 + *(uint *)(uVar15 + 0x48);
          for (; puVar27 != puVar5; puVar27 = puVar27 + 1) {
            uVar23 = *puVar27;
            uVar15 = *(ulong *)(uVar23 + 0x28) & 0xfffffffffffffffc;
            cVar8 = *(char *)(uVar15 + 0x17);
            if (cVar8 < '\0') {
              if (*(long *)(uVar15 + 8) != 0) goto LAB_10564cd60;
            }
            else if (cVar8 != '\0') {
LAB_10564cd60:
              if (*(int *)(uVar23 + 0x18) != 0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                          (&ppppppppuStack_240);
                ppppppppuVar24 = ppppppppuStack_240;
                ppppppppuVar32 = (undefined ********)((long)ppppppppuStack_240 + uStack_238);
                if (-1 < (long)puStack_230) {
                  ppppppppuVar24 = (undefined ********)&ppppppppuStack_240;
                  ppppppppuVar32 =
                       (undefined ********)
                       ((long)&ppppppppuStack_240 + ((ulong)puStack_230 >> 0x38));
                }
                for (; ppppppppuVar24 != ppppppppuVar32;
                    ppppppppuVar24 = (undefined ********)((long)ppppppppuVar24 + 1)) {
                  uVar13 = *(undefined1 *)ppppppppuVar24;
                  ___tolower();
                  *(undefined1 *)ppppppppuVar24 = uVar13;
                }
                ppppppppuVar32 = (undefined ********)&ppppppppuStack_240;
                func_0x000100152bb8(ppppppppuVar32,&DAT_10f2e1a10);
                if ((int)ppppppppuVar32 == 0) {
                  ppppppppuVar32 = (undefined ********)&ppppppppuStack_240;
                  func_0x000100152bb8(ppppppppuVar32,&DAT_10f2e1a3d);
                  if (((ulong)ppppppppuVar32 & 1) != 0) {
                    puVar14 = &UNK_10f2e018e;
                    uVar16 = 0x18;
                    goto LAB_10564cdf0;
                  }
                  ppppppppuStack_1f0 =
                       (undefined ********)((ulong)ppppppppuStack_1f0 & 0xffffffffffffff00);
                  uStack_1d8 = uStack_1d8 & 0xffffffffffffff00;
                }
                else {
                  puVar14 = &UNK_10f2e0182;
                  uVar16 = 0x10;
LAB_10564cdf0:
                  FUN_1056497ac(&ppppppppuStack_1f0,param_2,puVar14,uVar16,1);
                }
                func_0x00010564d160();
                if ((char)uStack_1d8 == '\x01') {
                  uVar15 = *(ulong *)(uVar23 + 0x10);
                  puVar6 = (ulong *)(uVar23 + 0x10);
                  if ((uVar15 & 1) != 0) {
                    puVar6 = (ulong *)(uVar15 + 7);
                  }
                  puVar14 = uStack_1e0;
                  for (lVar18 = (long)*(int *)(uVar23 + 0x18) << 3; uStack_1e0 = puVar14,
                      lVar18 != 0; lVar18 = lVar18 + -8) {
                    ppppppppuVar32 = (undefined ********)*puVar6;
                    pppppppuVar20 = (undefined *******)(long)*(char *)((long)ppppppppuVar32 + 0x17);
                    uStack_1e0._7_1_ = (byte)((ulong)puVar14 >> 0x38);
                    if ((long)pppppppuVar20 < 0) {
                      pppppppuVar20 = ppppppppuVar32[1];
                      if (pppppppuVar20 == (undefined *******)0x0) {
LAB_10564cecc:
                        uVar15 = uStack_1e8;
                        if (-1 < (long)puVar14) {
                          uVar15 = (ulong)uStack_1e0._7_1_;
                        }
                        if (uVar15 != 0) goto LAB_10564cf20;
                      }
                      else {
                        if (*(char *)((long)*ppppppppuVar32 + (long)pppppppuVar20 + -1) == '*') {
LAB_10564ce88:
                          uStack_238 = uStack_1e8;
                          ppppppppuStack_240 = ppppppppuStack_1f0;
                          if (-1 < (long)puVar14) {
                            uStack_238 = (ulong)uStack_1e0._7_1_;
                            ppppppppuStack_240 = (undefined ********)&ppppppppuStack_1f0;
                          }
                          ppppppppuVar32 = (undefined ********)&ppppppppuStack_240;
                          func_0x0001000671d4(ppppppppuVar32,0,(long)pppppppuVar20 + -1);
LAB_10564cec0:
                          func_0x0001000633dc();
                        }
                        else {
                          if (*(char *)*ppppppppuVar32 == '*') goto LAB_10564cef4;
LAB_10564cf10:
                          func_0x0001000e107c(ppppppppuVar32,&ppppppppuStack_1f0);
                        }
                        if (((ulong)ppppppppuVar32 & 1) == 0) goto LAB_10564cf20;
                      }
                      func_0x00010564d140();
                      goto LAB_10564cfb4;
                    }
                    if (*(char *)((long)ppppppppuVar32 + 0x17) == '\0') goto LAB_10564cecc;
                    if (*(char *)((long)ppppppppuVar32 + (long)pppppppuVar20 + -1) == '*')
                    goto LAB_10564ce88;
                    if (*(char *)ppppppppuVar32 != '*') goto LAB_10564cf10;
LAB_10564cef4:
                    uVar23 = (long)pppppppuVar20 - 1;
                    uVar15 = (ulong)(char)uStack_1e0._7_1_;
                    if ((long)uVar15 < 0) {
                      uVar15 = uStack_1e8;
                      ppppppppuVar24 = ppppppppuStack_1f0;
                      if (uVar23 <= uStack_1e8) goto LAB_10564cf40;
                    }
                    else if (uVar23 <= uVar15) {
                      ppppppppuVar24 = (undefined ********)&ppppppppuStack_1f0;
LAB_10564cf40:
                      ppppppppuVar32 = (undefined ********)&ppppppppuStack_240;
                      ppppppppuStack_240 = ppppppppuVar24;
                      uStack_238 = uVar15;
                      func_0x0001000671d4(ppppppppuVar32,uVar15 - uVar23,0xffffffffffffffff);
                      goto LAB_10564cec0;
                    }
LAB_10564cf20:
                    puVar6 = puVar6 + 1;
                    puVar14 = uStack_1e0;
                  }
                }
                func_0x00010564d140();
              }
            }
          }
        }
      }
    }
    uStack_25c = (uint)(uStack_25c == 2) & (*(byte *)(param_4 + 0x24) ^ 1);
    if (uStack_25c == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    }
  } while( true );
}



/* Entry: 10564d0ec; end: 10564d10b;  */

void FUN_10564d0ec(void)

{
  FUN_10564d10c();
  return;
}



/* Entry: 10564d10c; end: 10564d13f;  */

long FUN_10564d10c(long param_1,long param_2,undefined4 *param_3)

{
  _wmemchr(param_1,*param_3,param_2 - param_1 >> 2);
  if (param_1 != 0) {
    param_2 = param_1;
  }
  return param_2;
}



/* Entry: 10564d140; end: 10564d173;  */

void FUN_10564d140(void)

{
  char in_stack_00000108;
  
  if (in_stack_00000108 == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10564d174; end: 10564d19b;  */

undefined8 * FUN_10564d174(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10563f5d8();
  return param_1;
}



/* Entry: 10564d19c; end: 10564d2fb;  */

undefined *** FUN_10564d19c(undefined8 *param_1,ulong param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long **pplVar2;
  undefined ***pppuVar3;
  undefined1 *extraout_x8;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined1 auStack_188 [24];
  long **pplStack_170;
  undefined ***pppuStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  long lStack_148;
  int iStack_140;
  undefined4 uStack_13c;
  long *plStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  long **pplStack_d8;
  undefined8 uStack_b8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined ***apppuStack_80 [2];
  long *plStack_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  func_0x00010b4813b0(param_2);
  func_0x000100291d50(&plStack_70,uVar1);
  func_0x00010b4d1758(param_2,plStack_70,iStack_68 - (int)plStack_70);
  if ((param_2 & 1) == 0) {
    pppuVar5 = (undefined ***)0x0;
  }
  else {
    uVar4 = *param_1;
    func_0x00010002b838(&uStack_58,&UNK_10f2e1d0c);
    func_0x00010b4912d0(apppuStack_80,uVar4,&uStack_58,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
    if (apppuStack_80[0] == (undefined ***)0x0) {
      pppuVar5 = (undefined ***)0x0;
    }
    else {
      uStack_58 = 0x10564d548;
      ppuStack_50 = &PTR_DAT_1108a39e8;
      pppuVar5 = apppuStack_80[0];
      puStack_48 = (undefined1 *)apppuStack_80;
      func_0x00010b4928b4(apppuStack_80[0],plStack_70,
                          CONCAT44(uStack_64,iStack_68) - (long)plStack_70);
      func_0x0001005ed4a0(&uStack_58);
    }
    func_0x000105640438(apppuStack_80);
  }
  func_0x000100100fec();
  func_0x00010564d5b8(uStack_28);
  if ((bool)in_ZR) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  func_0x000105640438(apppuStack_80);
  pplVar2 = &plStack_70;
  func_0x000100100fec();
  func_0x00010564d5a0();
  pcStack_88 = FUN_10564d2fc;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_120 = &PTR_DAT_110ceae08;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  plStack_130 = (long *)0x0;
  uStack_128 = 0;
  plVar7 = *pplVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010002b838(&uStack_e8,&UNK_10f2e1d0c);
  func_0x00010b491b9c(plVar7,&uStack_e8);
  func_0x00010564d5a8();
  if (((ulong)plVar7 & 1) != 0) {
    plVar7 = *pplVar2;
    func_0x00010002b838();
    func_0x00010b4911fc(&lStack_148,plVar7,&uStack_e8);
    pplVar2 = &plStack_130;
    FUN_105640184(&plStack_130,&lStack_148);
    FUN_105640484(&lStack_148);
    func_0x00010564d5a8();
    if (plStack_130 != (long *)0x0) {
      uStack_e8 = 0x10564d56c;
      ppuStack_e0 = &PTR_DAT_1108a3a00;
      pplStack_d8 = pplVar2;
      func_0x000100291d50(&lStack_148,*(undefined8 *)(*plStack_130 + 8));
      plVar7 = plStack_130;
      func_0x00010b4925bc(plStack_130,lStack_148,CONCAT44(uStack_13c,iStack_140) - lStack_148);
      if (((ulong)plVar7 & 1) == 0) {
LAB_10564d430:
        *extraout_x8 = 0;
        extraout_x8[0x38] = 0;
      }
      else {
        pppuVar5 = &ppuStack_120;
        func_0x00010006369c(pppuVar5,lStack_148,iStack_140 - (int)lStack_148);
        if (((ulong)pppuVar5 & 1) == 0) goto LAB_10564d430;
        FUN_10564ac44(extraout_x8,&ppuStack_120);
        extraout_x8[0x38] = 1;
      }
      func_0x000100100fec(&lStack_148);
      func_0x0001005ed4a0(&uStack_e8);
      goto LAB_10564d448;
    }
  }
  *extraout_x8 = 0;
  extraout_x8[0x38] = 0;
LAB_10564d448:
  FUN_105640484(&plStack_130);
  pppuVar5 = &ppuStack_120;
  func_0x00010b48123c();
  func_0x00010564d5b8(uStack_b8);
  if ((bool)in_ZR) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_105640484(&plStack_130);
  pppuVar3 = &ppuStack_120;
  func_0x00010b48123c();
  func_0x00010564d5a0();
  pcStack_158 = FUN_10564d4dc;
  pppuVar6 = (undefined ***)*pppuVar3;
  pplStack_170 = pplVar2;
  pppuStack_168 = pppuVar5;
  ppuStack_160 = &puStack_90;
  func_0x00010564d590();
  func_0x00010b491b9c(pppuVar6,auStack_188);
  pppuVar5 = pppuVar6;
  func_0x00010564d5b0();
  if ((int)pppuVar6 != 0) {
    pppuVar5 = (undefined ***)*pppuVar3;
    func_0x00010564d590();
    func_0x00010b491414(pppuVar5,auStack_188);
    func_0x00010564d5b0();
  }
  return pppuVar5;
}



/* Entry: 10564d2fc; end: 10564d4db;  */

void FUN_10564d2fc(undefined1 *param_1,long **param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined1 auStack_108 [24];
  long **pplStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long **pplStack_58;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_a0 = &PTR_DAT_110ceae08;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  plStack_b0 = (long *)0x0;
  uStack_a8 = 0;
  plVar4 = *param_2;
  func_0x00010002b838(&uStack_68,&UNK_10f2e1d0c);
  func_0x00010b491b9c(plVar4,&uStack_68);
  func_0x00010564d5a8();
  if (((ulong)plVar4 & 1) != 0) {
    plVar4 = *param_2;
    func_0x00010002b838();
    func_0x00010b4911fc(&lStack_c8,plVar4,&uStack_68);
    param_2 = &plStack_b0;
    FUN_105640184(&plStack_b0,&lStack_c8);
    FUN_105640484(&lStack_c8);
    func_0x00010564d5a8();
    if (plStack_b0 != (long *)0x0) {
      uStack_68 = 0x10564d56c;
      ppuStack_60 = &PTR_DAT_1108a3a00;
      pplStack_58 = param_2;
      func_0x000100291d50(&lStack_c8,*(undefined8 *)(*plStack_b0 + 8));
      plVar4 = plStack_b0;
      func_0x00010b4925bc(plStack_b0,lStack_c8,CONCAT44(uStack_bc,iStack_c0) - lStack_c8);
      if (((ulong)plVar4 & 1) == 0) {
LAB_10564d430:
        *param_1 = 0;
        param_1[0x38] = 0;
      }
      else {
        pppuVar1 = &ppuStack_a0;
        func_0x00010006369c(pppuVar1,lStack_c8,iStack_c0 - (int)lStack_c8);
        if (((ulong)pppuVar1 & 1) == 0) goto LAB_10564d430;
        FUN_10564ac44(param_1,&ppuStack_a0);
        param_1[0x38] = 1;
      }
      func_0x000100100fec(&lStack_c8);
      func_0x0001005ed4a0(&uStack_68);
      goto LAB_10564d448;
    }
  }
  *param_1 = 0;
  param_1[0x38] = 0;
LAB_10564d448:
  FUN_105640484(&plStack_b0);
  pppuVar1 = &ppuStack_a0;
  func_0x00010b48123c();
  func_0x00010564d5b8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_105640484(&plStack_b0);
  pppuVar2 = &ppuStack_a0;
  func_0x00010b48123c();
  func_0x00010564d5a0();
  pcStack_d8 = FUN_10564d4dc;
  ppuVar3 = *pppuVar2;
  pplStack_f0 = param_2;
  pppuStack_e8 = pppuVar1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010564d590();
  func_0x00010b491b9c(ppuVar3,auStack_108);
  func_0x00010564d5b0();
  if ((int)ppuVar3 != 0) {
    ppuVar3 = *pppuVar2;
    func_0x00010564d590();
    func_0x00010b491414(ppuVar3,auStack_108);
    func_0x00010564d5b0();
  }
  return;
}



/* Entry: 10564d4dc; end: 10564d547;  */

void FUN_10564d4dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x00010564d590();
  func_0x00010b491b9c(uVar1,auStack_38);
  func_0x00010564d5b0();
  if ((int)uVar1 != 0) {
    uVar1 = *param_1;
    func_0x00010564d590();
    func_0x00010b491414(uVar1,auStack_38);
    func_0x00010564d5b0();
  }
  return;
}



/* Entry: 10564d548; end: 10564d5cb;  */

void FUN_10564d548(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)**(undefined8 **)(param_1 + 0x10);
  if (puVar1[1] != -1) {
    func_0x00010b490b24(puVar1[1],1,*puVar1);
    _close(puVar1[1]);
    puVar1[1] = 0xffffffff;
  }
  return;
}



/* Entry: 10564d5cc; end: 10564d7c7;  */

void FUN_10564d5cc(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_98 [8];
  char cStack_90;
  byte bStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar4 = &uStack_68;
  func_0x000100114fd0(auStack_98);
  if ((bStack_70 & 1) == 0) {
    uVar3 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10564d904(&lStack_50,&uStack_68,param_2);
    func_0x0001003a91d4(&UNK_10f2e1d24);
    func_0x0001003a9204(&uStack_b0);
    FUN_1052768d8(uVar3,&uStack_b0);
    FUN_10564d950();
  }
  else {
    if (cStack_90 == '\a') {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 4) = 0x3f800000;
      func_0x0001098f428c(&lStack_50,auStack_98);
      for (lVar5 = lStack_50; lVar5 != lStack_48; lVar5 = lVar5 + 0x18) {
        puVar2 = auStack_98;
        func_0x0001098f422c(puVar2,lVar5);
        if (puVar2[8] == '\x04') {
          func_0x0001098f3384(&uStack_b0);
          func_0x00010060413c(param_1,lVar5);
          func_0x000100066230();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
        }
      }
      func_0x0001000e30f4(&lStack_50);
      func_0x00010011a53c(auStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
      return;
    }
    uVar3 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x0001005d466c();
    uStack_b0 = param_2;
    puStack_a8 = puVar4;
    func_0x0001003a91d4(&UNK_10f2e1d46);
    func_0x0001003a9204(&lStack_50);
    FUN_1052768d8(uVar3,&lStack_50);
    FUN_10564d950();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10564d744);
  (*pcVar1)();
}



/* Entry: 10564d7c8; end: 10564d903;  */

void FUN_10564d7c8(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [40];
  
  func_0x0001098f30a8(auStack_48,7);
  plVar2 = (long *)(param_2 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    func_0x0001001193c4(auStack_78,plVar2 + 5);
    puVar1 = auStack_48;
    func_0x0001098f426c(puVar1,plVar2 + 2);
    func_0x0001001150b4(auStack_78,puVar1);
    func_0x0001001151c0(auStack_78);
  }
  func_0x0001098f5ff8(auStack_78);
  func_0x0001098f3160(auStack_a0,&UNK_10f2e1d78);
  func_0x00010002b838(auStack_b8,&UNK_10f2e1d79);
  puVar1 = auStack_78;
  func_0x0001098f68ac(puVar1,auStack_b8);
  func_0x0001001150b4(auStack_a0,puVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  func_0x0001001151c0(auStack_a0);
  func_0x0001098f68d0(param_1,auStack_78,auStack_48);
  func_0x0001098f6274(auStack_78);
  func_0x0001001151c0(auStack_48);
  return;
}



/* Entry: 10564d904; end: 10564d94f;  */

undefined8 * FUN_10564d904(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10564d950; end: 10564d96f;  */

void FUN_10564d950(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 10564d970; end: 10564d9a3;  */

void FUN_10564d970(void)

{
  FUN_10564d9a4();
  return;
}



/* Entry: 10564d9a4; end: 10564d9f3;  */

void FUN_10564d9a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1b0;
  __Znwm();
  FUN_10564d9f4();
  *param_1 = uVar1;
  return;
}



/* Entry: 10564d9f4; end: 10564daf7;  */

void FUN_10564d9f4(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  uStack_38 = 0x1010001;
  uStack_34 = 0;
  uStack_30 = 0x100;
  uStack_2c = 2;
  uStack_20 = 0x100;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0x101;
  uStack_12 = 1;
  uStack_24 = uStack_38;
  FUN_10564f3ac(param_1,param_2,0,0,&uStack_38);
  return;
}



/* Entry: 10564daf8; end: 10564db0b;  */

void FUN_10564daf8(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long lVar6;
  undefined8 extraout_x9;
  int extraout_w11;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  char cStack_1f8;
  long alStack_1f0 [10];
  long lStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [80];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_c0;
  char cStack_b8;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  char cStack_70;
  int iStack_50;
  undefined8 uStack_48;
  
  uVar5 = 0;
  func_0x000105650180(param_1,FUN_105653330,0);
  func_0x000105650174();
  FUN_10564e2a8();
  func_0x000105650160(extraout_x8,*param_1,param_1[1]);
  func_0x00010564ff68();
  uStack_48 = extraout_x8_01;
  func_0x00010bccbc98(alStack_1f0,uVar5,extraout_x9);
  lVar6 = *(long *)(alStack_1f0[0] + 8);
  lStack_198 = *(long *)(alStack_1f0[0] + 0x10);
  lStack_1a0 = lVar6;
  if (lStack_198 != 0) {
    do {
      func_0x00010564fff8();
      lVar6 = extraout_x8_02;
    } while (extraout_w11 != 0);
  }
  plVar1 = (long *)(*(long *)(lVar6 + 0x18) + ((long)param_5 >> 1));
  if ((param_5 & 1) != 0) {
    param_2 = *(code **)(*plVar1 + ((ulong)param_2 & 0xffffffff));
  }
  (*param_2)(auStack_190,plVar1,param_6);
  FUN_10564e2d4(&uStack_f8,auStack_190);
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (cStack_b8 == '\x01') {
    func_0x000105650048(&uStack_140);
    if (CONCAT71(uStack_f7,uStack_f8) == 0) goto LAB_10564e0cc;
    puVar4 = (ulong *)&uStack_f8;
    FUN_10564e344();
    uStack_228 = puVar4[1];
    uStack_230 = *puVar4;
    uStack_220 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uStack_210 = puVar4[4];
    uStack_218 = puVar4[3];
    uStack_200 = puVar4[6];
    uStack_208 = puVar4[5];
    cStack_1f8 = '\x01';
  }
  else {
    func_0x000105650048(&uStack_140);
LAB_10564e0cc:
    cStack_1f8 = '\0';
    uStack_230 = uStack_230 & 0xffffffffffffff00;
  }
  func_0x00010564ffa4(&uStack_f8);
  FUN_10564e42c(auStack_190);
  FUN_10564e49c(&lStack_1a0);
  func_0x00010bccbe4c(alStack_1f0);
  func_0x00010bccbdb4(alStack_1f0);
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  cStack_70 = cStack_1f8 == '\x01';
  if ((bool)cStack_70) {
    uStack_a0 = uStack_228;
    uStack_a8 = uStack_230;
    uStack_98 = uStack_220;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_230 = 0;
    uStack_88 = uStack_210;
    uStack_90 = uStack_218;
    uStack_78 = uStack_200;
    uStack_80 = uStack_208;
  }
  iStack_50 = 0;
  func_0x00010564a568(&uStack_230);
  uStack_f8 = 0;
  uStack_c0 = 0;
  if (iStack_50 == 0) {
    *(undefined1 *)extraout_x8_00 = 0;
    *(undefined1 *)(extraout_x8_00 + 7) = 0;
    uVar3 = cStack_70 == '\x01';
    if ((bool)uVar3) {
      extraout_x8_00[1] = uStack_a0;
      *extraout_x8_00 = uStack_a8;
      extraout_x8_00[2] = uStack_98;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
      extraout_x8_00[4] = uStack_88;
      extraout_x8_00[3] = uStack_90;
      extraout_x8_00[6] = uStack_78;
      extraout_x8_00[5] = uStack_80;
      *(undefined1 *)(extraout_x8_00 + 7) = 1;
    }
  }
  else {
    uVar3 = iStack_50 == 1;
    if (!(bool)uVar3) goto LAB_10564e1ec;
    FUN_10564e4c4(extraout_x8_00,&uStack_f8);
  }
  func_0x00010564a568(&uStack_f8);
  func_0x0001056500f8();
  func_0x00010564ff14(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10564e1ec:
  FUN_10563ab98();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10564e1f4);
  (*pcVar2)();
}



/* Entry: 10564db0c; end: 10564db53;  */

void FUN_10564db0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  ulong param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong *puVar4;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  undefined8 extraout_x9;
  int extraout_w11;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  char cStack_1f8;
  long alStack_1f0 [10];
  long lStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [80];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_c0;
  char cStack_b8;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  char cStack_70;
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x000105650180();
  func_0x000105650174();
  FUN_10564e2a8();
  func_0x000105650160(extraout_x8,*param_1,param_1[1]);
  func_0x00010564ff68();
  uStack_48 = extraout_x8_01;
  func_0x00010bccbc98(alStack_1f0,param_3,extraout_x9);
  lVar5 = *(long *)(alStack_1f0[0] + 8);
  lStack_198 = *(long *)(alStack_1f0[0] + 0x10);
  lStack_1a0 = lVar5;
  if (lStack_198 != 0) {
    do {
      func_0x00010564fff8();
      lVar5 = extraout_x8_02;
    } while (extraout_w11 != 0);
  }
  plVar1 = (long *)(*(long *)(lVar5 + 0x18) + ((long)param_5 >> 1));
  if ((param_5 & 1) != 0) {
    param_4 = *(code **)(*plVar1 + ((ulong)param_4 & 0xffffffff));
  }
  (*param_4)(auStack_190,plVar1,param_6);
  FUN_10564e2d4(&uStack_f8,auStack_190);
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (cStack_b8 == '\x01') {
    func_0x000105650048(&uStack_140);
    if (CONCAT71(uStack_f7,uStack_f8) == 0) goto LAB_10564e0cc;
    puVar4 = (ulong *)&uStack_f8;
    FUN_10564e344();
    uStack_228 = puVar4[1];
    uStack_230 = *puVar4;
    uStack_220 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uStack_210 = puVar4[4];
    uStack_218 = puVar4[3];
    uStack_200 = puVar4[6];
    uStack_208 = puVar4[5];
    cStack_1f8 = '\x01';
  }
  else {
    func_0x000105650048(&uStack_140);
LAB_10564e0cc:
    cStack_1f8 = '\0';
    uStack_230 = uStack_230 & 0xffffffffffffff00;
  }
  func_0x00010564ffa4(&uStack_f8);
  FUN_10564e42c(auStack_190);
  FUN_10564e49c(&lStack_1a0);
  func_0x00010bccbe4c(alStack_1f0);
  func_0x00010bccbdb4(alStack_1f0);
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  cStack_70 = cStack_1f8 == '\x01';
  if ((bool)cStack_70) {
    uStack_a0 = uStack_228;
    uStack_a8 = uStack_230;
    uStack_98 = uStack_220;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_230 = 0;
    uStack_88 = uStack_210;
    uStack_90 = uStack_218;
    uStack_78 = uStack_200;
    uStack_80 = uStack_208;
  }
  iStack_50 = 0;
  func_0x00010564a568(&uStack_230);
  uStack_f8 = 0;
  uStack_c0 = 0;
  if (iStack_50 == 0) {
    *(undefined1 *)extraout_x8_00 = 0;
    *(undefined1 *)(extraout_x8_00 + 7) = 0;
    uVar3 = cStack_70 == '\x01';
    if ((bool)uVar3) {
      extraout_x8_00[1] = uStack_a0;
      *extraout_x8_00 = uStack_a8;
      extraout_x8_00[2] = uStack_98;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
      extraout_x8_00[4] = uStack_88;
      extraout_x8_00[3] = uStack_90;
      extraout_x8_00[6] = uStack_78;
      extraout_x8_00[5] = uStack_80;
      *(undefined1 *)(extraout_x8_00 + 7) = 1;
    }
  }
  else {
    uVar3 = iStack_50 == 1;
    if (!(bool)uVar3) goto LAB_10564e1ec;
    FUN_10564e4c4(extraout_x8_00,&uStack_f8);
  }
  func_0x00010564a568(&uStack_f8);
  func_0x0001056500f8();
  func_0x00010564ff14(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10564e1ec:
  FUN_10563ab98();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10564e1f4);
  (*pcVar2)();
}



/* Entry: 10564db54; end: 10564db63;  */

void FUN_10564db54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code **ppcStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [96];
  code *pcStack_40;
  undefined8 uStack_38;
  
  func_0x000105650174();
  FUN_10564e61c();
  pcStack_40 = FUN_10565339c;
  uStack_38 = 0;
  ppcStack_b0 = &pcStack_40;
  puStack_a8 = &stack0xffffffffffffffd0;
  uStack_b8 = param_2;
  FUN_10564e648(auStack_a0,&uStack_b8);
  FUN_10564e6a4(auStack_a0,0x10564d96c);
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  func_0x00010564e6d4(param_1);
  func_0x00010564a4b8(&uStack_d0);
  FUN_10564ef8c(auStack_a0);
  return;
}



/* Entry: 10564db64; end: 10564dbb3;  */

void FUN_10564db64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [96];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000105650174();
  FUN_10564e61c();
  puStack_b0 = &uStack_40;
  puStack_a8 = &stack0xffffffffffffffd0;
  uStack_b8 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  FUN_10564e648(auStack_a0,&uStack_b8);
  FUN_10564e6a4(auStack_a0,0x10564d96c);
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  func_0x00010564e6d4(param_1);
  func_0x00010564a4b8(&uStack_d0);
  FUN_10564ef8c(auStack_a0);
  return;
}



/* Entry: 10564dbb4; end: 10564dc4b;  */

undefined *** FUN_10564dbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  code **ppcVar4;
  code **ppcVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined ***extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 auStack_118 [8];
  undefined ***pppuStack_110;
  undefined1 **ppuStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_28;
  
  func_0x00010564ff68();
  pcStack_58 = FUN_10564f8f8;
  ppuStack_50 = &PTR_FUN_1108a3b18;
  uStack_60 = param_2;
  puStack_48 = (undefined1 *)&uStack_60;
  uStack_28 = extraout_x8;
  func_0x000105650010();
  func_0x00010564ffac();
  pppuVar1 = (undefined ***)0x1;
  do {
    func_0x00010564ff14(uStack_28,pppuVar1);
    if ((bool)in_ZR) {
      return pppuVar1;
    }
    ___stack_chk_fail();
    uVar3 = param_2;
    func_0x00010564ff50();
    in_ZR = (int)param_2 == 2;
    if ((bool)in_ZR) {
      func_0x000105650008();
      ___cxa_end_catch();
    }
    else {
      in_ZR = (int)param_2 == 1;
      if (!(bool)in_ZR) {
        func_0x00010564ff84();
        pcStack_68 = FUN_10564dc4c;
        puStack_70 = &stack0xfffffffffffffff0;
        func_0x00010564ff68();
        *(undefined1 *)extraout_x8_00 = 0;
        *(undefined1 *)(extraout_x8_00 + 0xe) = 0;
        puStack_d8 = &uStack_d0;
        pcStack_c8 = FUN_10564f98c;
        ppuStack_c0 = &PTR_FUN_1108a3b30;
        puStack_b8 = auStack_e8;
        ppcVar4 = &pcStack_c8;
        uStack_e0 = uVar3;
        uStack_d0 = param_3;
        uStack_98 = extraout_x8_01;
        func_0x00010bccc554();
        pppuVar1 = &ppuStack_c0;
        (*(code *)*ppuStack_c0)();
        while( true ) {
          while( true ) {
            func_0x00010564ff14(uStack_98);
            if ((bool)in_ZR) {
              return pppuVar1;
            }
            ___stack_chk_fail();
            ppcVar5 = ppcVar4;
            func_0x00010564ff78(&pcStack_c8);
            pppuVar2 = extraout_x8_00;
            FUN_10564a800();
            in_ZR = (int)ppcVar4 == 2;
            if (!(bool)in_ZR) break;
            func_0x00010565014c();
            *(undefined1 *)extraout_x8_00 = 0;
            *(undefined1 *)(extraout_x8_00 + 0xe) = 0;
            ___cxa_end_catch();
            pppuVar1 = pppuVar2;
            ppcVar4 = ppcVar5;
          }
          in_ZR = (int)ppcVar4 == 1;
          if (!(bool)in_ZR) break;
          func_0x00010565014c();
          *(undefined1 *)extraout_x8_00 = 0;
          *(undefined1 *)(extraout_x8_00 + 0xe) = 0;
          ___cxa_end_catch();
          pppuVar1 = pppuVar2;
          ppcVar4 = ppcVar5;
        }
        func_0x00010564ffd0();
        uStack_f8 = 0x10564dd40;
        pppuStack_110 = pppuVar1;
        ppuStack_100 = &puStack_70;
        func_0x00010564dd8c();
        uVar6 = 0;
        FUN_10564ddc8(pppuVar2,FUN_105653454,0,ppcVar5,auStack_118);
        if ((uVar6 & 1) == 0) {
          pppuVar2 = (undefined ***)0x0;
        }
        return pppuVar2;
      }
      func_0x000105650008();
      ___cxa_end_catch();
    }
    pppuVar1 = (undefined ***)0x0;
    param_2 = uVar3;
  } while( true );
}



/* Entry: 10564dc4c; end: 10564dd3f;  */

undefined ***
FUN_10564dc4c(undefined ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  code **ppcVar4;
  code **ppcVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  undefined ***pppuStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  func_0x00010564ff68();
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  puStack_78 = &uStack_70;
  pcStack_68 = FUN_10564f98c;
  ppuStack_60 = &PTR_FUN_1108a3b30;
  ppuStack_58 = &pppuStack_88;
  ppcVar4 = &pcStack_68;
  pppuStack_88 = param_1;
  uStack_80 = param_3;
  uStack_70 = param_4;
  uStack_38 = extraout_x8;
  func_0x00010bccc554();
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  while( true ) {
    while( true ) {
      func_0x00010564ff14(uStack_38);
      if ((bool)in_ZR) {
        return pppuVar1;
      }
      ___stack_chk_fail();
      ppcVar5 = ppcVar4;
      func_0x00010564ff78(&pcStack_68);
      pppuVar2 = param_1;
      FUN_10564a800();
      in_ZR = (int)ppcVar4 == 2;
      if (!(bool)in_ZR) break;
      func_0x00010565014c();
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      ___cxa_end_catch();
      pppuVar1 = pppuVar2;
      ppcVar4 = ppcVar5;
    }
    in_ZR = (int)ppcVar4 == 1;
    if (!(bool)in_ZR) break;
    func_0x00010565014c();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    ___cxa_end_catch();
    pppuVar1 = pppuVar2;
    ppcVar4 = ppcVar5;
  }
  func_0x00010564ffd0();
  uStack_98 = 0x10564dd40;
  pppuVar3 = pppuVar2;
  pppuStack_b0 = pppuVar1;
  pppuStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010564dd8c();
  uVar6 = 0;
  pppuStack_b8 = pppuVar3;
  FUN_10564ddc8(pppuVar2,FUN_105653454,0,ppcVar5,&pppuStack_b8);
  if ((uVar6 & 1) == 0) {
    pppuVar2 = (undefined ***)0x0;
  }
  return pppuVar2;
}



/* Entry: 10564dd40; end: 10564ddc7;  */

undefined8 FUN_10564dd40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010564dd8c();
  uVar2 = 0;
  uStack_28 = uVar1;
  FUN_10564ddc8(param_1,FUN_105653454,0,param_2,&uStack_28);
  if ((uVar2 & 1) == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10564ddc8; end: 10564de2f;  */

void FUN_10564ddc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000105650174();
  FUN_10564f158();
  FUN_10564efd0(*puVar1,puVar1[1],param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10564de30; end: 10564de67;  */

undefined8 FUN_10564de30(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_18 = param_2;
  FUN_10564de68(param_1,FUN_1056535fc,0,&uStack_18);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10564de68; end: 10564dea7;  */

void FUN_10564de68(undefined8 *param_1)

{
  func_0x000105650180();
  func_0x000105650174();
  FUN_10564f33c();
  func_0x000105650160(*param_1,param_1[1]);
  FUN_10564f1c4();
  return;
}



/* Entry: 10564dea8; end: 10564df17;  */

long FUN_10564dea8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010564dd8c();
  lVar2 = param_1;
  lStack_28 = lVar1;
  FUN_10564de30(param_1,lVar1);
  FUN_10564df18(param_1,FUN_105653918,0,&lStack_28);
  if (((int)param_1 != 0) && (lVar2 != 0)) {
    FUN_105652470();
    FUN_10565234c();
  }
  return param_1;
}



/* Entry: 10564df18; end: 10564df37;  */

bool FUN_10564df18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined1 auStack_a0 [96];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f2e1d85;
  uStack_28 = 0;
  puStack_b8 = &uStack_40;
  ppuStack_a8 = &puStack_30;
  uStack_c0 = param_1;
  uStack_b0 = param_4;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10564fcb8(auStack_a0,&uStack_c0);
  puVar2 = auStack_a0;
  FUN_10564fcfc(puVar2,0x10564d96c);
  iVar1 = *(int *)(puVar2 + 0x58);
  FUN_10564fe68(auStack_a0);
  return iVar1 != 1;
}



/* Entry: 10564df38; end: 10564dfcf;  */

void FUN_10564df38(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  ulong param_5,undefined8 param_6)

{
  long *plVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long lVar7;
  undefined8 extraout_x9;
  int extraout_w11;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  char cStack_258;
  long alStack_250 [10];
  long lStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [80];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_120;
  char cStack_118;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  char cStack_d0;
  int iStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_59;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_28;
  
  func_0x00010564ff68();
  pcStack_58 = FUN_10564fea8;
  ppuStack_50 = &PTR_FUN_1108a3b70;
  puStack_48 = &uStack_59;
  uStack_28 = extraout_x8;
  func_0x000105650010();
  func_0x00010564ffac();
  uVar4 = 1;
  do {
    func_0x00010564ff14(uStack_28,uVar4);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    uVar6 = param_2;
    func_0x00010564ff50();
    in_ZR = (int)param_2 == 2;
    if ((bool)in_ZR) {
      func_0x000105650008();
      ___cxa_end_catch();
    }
    else {
      in_ZR = (int)param_2 == 1;
      if (!(bool)in_ZR) {
        func_0x00010564ff84();
        func_0x00010564ff68();
        uStack_a8 = extraout_x8_01;
        func_0x00010bccbc98(alStack_250,param_3,extraout_x9);
        lVar7 = *(long *)(alStack_250[0] + 8);
        lStack_1f8 = *(long *)(alStack_250[0] + 0x10);
        lStack_200 = lVar7;
        if (lStack_1f8 != 0) {
          do {
            func_0x00010564fff8();
            lVar7 = extraout_x8_02;
          } while (extraout_w11 != 0);
        }
        plVar1 = (long *)(*(long *)(lVar7 + 0x18) + ((long)param_5 >> 1));
        if ((param_5 & 1) != 0) {
          param_4 = *(code **)(*plVar1 + ((ulong)param_4 & 0xffffffff));
        }
        (*param_4)(auStack_1f0,plVar1,param_6);
        FUN_10564e2d4(&uStack_158,auStack_1f0);
        uStack_160 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        if (cStack_118 == '\x01') {
          func_0x000105650048(&uStack_1a0);
          if (CONCAT71(uStack_157,uStack_158) == 0) goto LAB_10564e0cc;
          puVar5 = (ulong *)&uStack_158;
          FUN_10564e344();
          uStack_288 = puVar5[1];
          uStack_290 = *puVar5;
          uStack_280 = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          uStack_270 = puVar5[4];
          uStack_278 = puVar5[3];
          uStack_260 = puVar5[6];
          uStack_268 = puVar5[5];
          cStack_258 = '\x01';
        }
        else {
          func_0x000105650048(&uStack_1a0);
LAB_10564e0cc:
          cStack_258 = '\0';
          uStack_290 = uStack_290 & 0xffffffffffffff00;
        }
        func_0x00010564ffa4(&uStack_158);
        FUN_10564e42c(auStack_1f0);
        FUN_10564e49c(&lStack_200);
        func_0x00010bccbe4c(alStack_250);
        func_0x00010bccbdb4(alStack_250);
        uStack_108 = uStack_108 & 0xffffffffffffff00;
        cStack_d0 = cStack_258 == '\x01';
        if ((bool)cStack_d0) {
          uStack_100 = uStack_288;
          uStack_108 = uStack_290;
          uStack_f8 = uStack_280;
          uStack_288 = 0;
          uStack_280 = 0;
          uStack_290 = 0;
          uStack_e8 = uStack_270;
          uStack_f0 = uStack_278;
          uStack_d8 = uStack_260;
          uStack_e0 = uStack_268;
        }
        iStack_b0 = 0;
        func_0x00010564a568(&uStack_290);
        uStack_158 = 0;
        uStack_120 = 0;
        if (iStack_b0 == 0) {
          *(undefined1 *)extraout_x8_00 = 0;
          *(undefined1 *)(extraout_x8_00 + 7) = 0;
          uVar3 = cStack_d0 == '\x01';
          if ((bool)uVar3) {
            extraout_x8_00[1] = uStack_100;
            *extraout_x8_00 = uStack_108;
            extraout_x8_00[2] = uStack_f8;
            uStack_100 = 0;
            uStack_f8 = 0;
            uStack_108 = 0;
            extraout_x8_00[4] = uStack_e8;
            extraout_x8_00[3] = uStack_f0;
            extraout_x8_00[6] = uStack_d8;
            extraout_x8_00[5] = uStack_e0;
            *(undefined1 *)(extraout_x8_00 + 7) = 1;
          }
        }
        else {
          uVar3 = iStack_b0 == 1;
          if (!(bool)uVar3) goto LAB_10564e1ec;
          FUN_10564e4c4(extraout_x8_00,&uStack_158);
        }
        func_0x00010564a568(&uStack_158);
        func_0x0001056500f8();
        func_0x00010564ff14(uStack_a8);
        if ((bool)uVar3) {
          return;
        }
        ___stack_chk_fail();
LAB_10564e1ec:
        FUN_10563ab98();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10564e1f4);
        (*pcVar2)();
      }
      func_0x000105650008();
      ___cxa_end_catch();
    }
    uVar4 = 0;
    param_2 = uVar6;
  } while( true );
}


