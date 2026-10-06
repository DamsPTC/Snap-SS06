/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10884bf98; end: 10884c0fb;  */

void FUN_10884bf98(undefined8 param_1)

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
  func_0x00010884d14c();
  func_0x00010884cfa0();
  if (iVar3 != 0) {
    FUN_108848d1c();
  }
  func_0x00010884d0e4();
  if ((bool)in_ZR) {
    func_0x00010884cf48();
    func_0x00010884d180();
    if ((bool)in_ZR) {
      func_0x00010884d088();
      func_0x00010884d070();
      func_0x00010884d064();
      func_0x00010884d0d4();
    }
    else {
      func_0x00010884cf2c();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x00010884d130();
  }
  FUN_10884ce84();
  func_0x00010884d0c4();
  if ((bool)in_ZR) {
    func_0x00010884d040();
    func_0x00010884cf10();
    if (unaff_x23 != 0) {
      func_0x00010884cee8();
      func_0x00010884cfe4();
      func_0x00010884cfcc();
      func_0x00010884d144();
      func_0x00010884d058();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x00010884cf80();
        do {
          if (unaff_x26 == 0) goto LAB_10884c06c;
          FUN_10884cff4();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        func_0x00010884cebc();
        func_0x00010884d07c();
        func_0x00010884d128();
        if ((in_stack_00000108 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10884c0c4);
          (*pcVar2)();
        }
        func_0x00010884d04c();
      }
LAB_10884c06c:
      func_0x00010884d110();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x00010884d168();
  }
  func_0x00010884d094();
  func_0x00010884d174();
  func_0x00010884cfb8();
  func_0x00010884d120();
  func_0x00010884d118();
  return;
}



/* Entry: 10884c0fc; end: 10884c14b;  */

void FUN_10884c0fc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10884c14c; end: 10884c157;  */

void FUN_10884c14c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a7b948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884c158; end: 10884c17b;  */

void FUN_10884c158(long param_1)

{
  func_0x000107c340f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10884c17c; end: 10884c17f;  */

void FUN_10884c17c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7ba18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884c180; end: 10884c193;  */

void FUN_10884c180(void)

{
  FUN_10884c378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884c194; end: 10884c19f;  */

void FUN_10884c194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10884c1a0; end: 10884c1b3;  */

void FUN_10884c1a0(void)

{
  func_0x00010884c344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884c1b4; end: 10884c1c3;  */

void FUN_10884c1b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100609858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10884c1c4; end: 10884c327;  */

void FUN_10884c1c4(undefined8 param_1)

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
  func_0x00010884d14c();
  func_0x00010884cfa0();
  if (iVar3 != 0) {
    FUN_108848d1c();
  }
  func_0x00010884d0e4();
  if ((bool)in_ZR) {
    func_0x00010884cf48();
    func_0x00010884d180();
    if ((bool)in_ZR) {
      func_0x00010884d088();
      func_0x00010884d070();
      func_0x00010884d064();
      func_0x00010884d0d4();
    }
    else {
      func_0x00010884cf2c();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x00010884d130();
  }
  FUN_10884ce84();
  func_0x00010884d0c4();
  if ((bool)in_ZR) {
    func_0x00010884d040();
    func_0x00010884cf10();
    if (unaff_x23 != 0) {
      func_0x00010884cee8();
      func_0x00010884cfe4();
      func_0x00010884cfcc();
      func_0x00010884d144();
      func_0x00010884d058();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x00010884cf80();
        do {
          if (unaff_x26 == 0) goto LAB_10884c298;
          FUN_10884cff4();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        func_0x00010884cebc();
        func_0x00010884d07c();
        func_0x00010884d128();
        if ((in_stack_00000108 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10884c2f0);
          (*pcVar2)();
        }
        func_0x00010884d04c();
      }
LAB_10884c298:
      func_0x00010884d110();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x00010884d168();
  }
  func_0x00010884d094();
  func_0x00010884d174();
  func_0x00010884cfb8();
  func_0x00010884d120();
  func_0x00010884d118();
  return;
}



/* Entry: 10884c328; end: 10884c377;  */

void FUN_10884c328(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10884c378; end: 10884c383;  */

void FUN_10884c378(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7ba18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884c384; end: 10884c3a7;  */

void FUN_10884c384(long param_1)

{
  func_0x000107c340f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10884c3a8; end: 10884c3ab;  */

void FUN_10884c3a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bae8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884c3ac; end: 10884c3bf;  */

void FUN_10884c3ac(void)

{
  FUN_10884c5a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884c3c0; end: 10884c3cb;  */

void FUN_10884c3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10884c3cc; end: 10884c3df;  */

void FUN_10884c3cc(void)

{
  func_0x00010884c570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884c3e0; end: 10884c3ef;  */

void FUN_10884c3e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100609858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10884c3f0; end: 10884c553;  */

void FUN_10884c3f0(undefined8 param_1)

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
  func_0x00010884d14c();
  func_0x00010884cfa0();
  if (iVar3 != 0) {
    FUN_108848d1c();
  }
  func_0x00010884d0e4();
  if ((bool)in_ZR) {
    func_0x00010884cf48();
    func_0x00010884d180();
    if ((bool)in_ZR) {
      func_0x00010884d088();
      func_0x00010884d070();
      func_0x00010884d064();
      func_0x00010884d0d4();
    }
    else {
      func_0x00010884cf2c();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x00010884d130();
  }
  FUN_10884ce84();
  func_0x00010884d0c4();
  if ((bool)in_ZR) {
    func_0x00010884d040();
    func_0x00010884cf10();
    if (unaff_x23 != 0) {
      func_0x00010884cee8();
      func_0x00010884cfe4();
      func_0x00010884cfcc();
      func_0x00010884d144();
      func_0x00010884d058();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x00010884cf80();
        do {
          if (unaff_x26 == 0) goto LAB_10884c4c4;
          FUN_10884cff4();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        func_0x00010884cebc();
        func_0x00010884d07c();
        func_0x00010884d128();
        if ((in_stack_00000108 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10884c51c);
          (*pcVar2)();
        }
        func_0x00010884d04c();
      }
LAB_10884c4c4:
      func_0x00010884d110();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x00010884d168();
  }
  func_0x00010884d094();
  func_0x00010884d174();
  func_0x00010884cfb8();
  func_0x00010884d120();
  func_0x00010884d118();
  return;
}



/* Entry: 10884c554; end: 10884c5a3;  */

void FUN_10884c554(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10884c5a4; end: 10884c5af;  */

void FUN_10884c5a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bae8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884c5b0; end: 10884c5d3;  */

void FUN_10884c5b0(long param_1)

{
  func_0x000107c340f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10884c5d4; end: 10884c5d7;  */

void FUN_10884c5d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bbb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884c5d8; end: 10884c5eb;  */

void FUN_10884c5d8(void)

{
  FUN_10884c7d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884c5ec; end: 10884c5f7;  */

void FUN_10884c5ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10884c5f8; end: 10884c60b;  */

void FUN_10884c5f8(void)

{
  func_0x00010884c79c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884c60c; end: 10884c61b;  */

void FUN_10884c60c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100609858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10884c61c; end: 10884c77f;  */

void FUN_10884c61c(undefined8 param_1)

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
  func_0x00010884d14c();
  func_0x00010884cfa0();
  if (iVar3 != 0) {
    FUN_108848d1c();
  }
  func_0x00010884d0e4();
  if ((bool)in_ZR) {
    func_0x00010884cf48();
    func_0x00010884d180();
    if ((bool)in_ZR) {
      func_0x00010884d088();
      func_0x00010884d070();
      func_0x00010884d064();
      func_0x00010884d0d4();
    }
    else {
      func_0x00010884cf2c();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x00010884d130();
  }
  FUN_10884ce84();
  func_0x00010884d0c4();
  if ((bool)in_ZR) {
    func_0x00010884d040();
    func_0x00010884cf10();
    if (unaff_x23 != 0) {
      func_0x00010884cee8();
      func_0x00010884cfe4();
      func_0x00010884cfcc();
      func_0x00010884d144();
      func_0x00010884d058();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x00010884cf80();
        do {
          if (unaff_x26 == 0) goto LAB_10884c6f0;
          FUN_10884cff4();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        func_0x00010884cebc();
        func_0x00010884d07c();
        func_0x00010884d128();
        if ((in_stack_00000108 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10884c748);
          (*pcVar2)();
        }
        func_0x00010884d04c();
      }
LAB_10884c6f0:
      func_0x00010884d110();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x00010884d168();
  }
  func_0x00010884d094();
  func_0x00010884d174();
  func_0x00010884cfb8();
  func_0x00010884d120();
  func_0x00010884d118();
  return;
}



/* Entry: 10884c780; end: 10884c7cf;  */

void FUN_10884c780(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10884c7d0; end: 10884c7db;  */

void FUN_10884c7d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bbb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884c7dc; end: 10884c7ff;  */

void FUN_10884c7dc(long param_1)

{
  func_0x000107c340f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10884c800; end: 10884c803;  */

void FUN_10884c800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884c804; end: 10884c817;  */

void FUN_10884c804(void)

{
  FUN_10884c9fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884c818; end: 10884c823;  */

void FUN_10884c818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10884c824; end: 10884c837;  */

void FUN_10884c824(void)

{
  func_0x00010884c9c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884c838; end: 10884c847;  */

void FUN_10884c838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100609858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10884c848; end: 10884c9ab;  */

void FUN_10884c848(undefined8 param_1)

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
  func_0x00010884d14c();
  func_0x00010884cfa0();
  if (iVar3 != 0) {
    FUN_108848d1c();
  }
  func_0x00010884d0e4();
  if ((bool)in_ZR) {
    func_0x00010884cf48();
    func_0x00010884d180();
    if ((bool)in_ZR) {
      func_0x00010884d088();
      func_0x00010884d070();
      func_0x00010884d064();
      func_0x00010884d0d4();
    }
    else {
      func_0x00010884cf2c();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x00010884d130();
  }
  FUN_10884ce84();
  func_0x00010884d0c4();
  if ((bool)in_ZR) {
    func_0x00010884d040();
    func_0x00010884cf10();
    if (unaff_x23 != 0) {
      func_0x00010884cee8();
      func_0x00010884cfe4();
      func_0x00010884cfcc();
      func_0x00010884d144();
      func_0x00010884d058();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x00010884cf80();
        do {
          if (unaff_x26 == 0) goto LAB_10884c91c;
          FUN_10884cff4();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        func_0x00010884cebc();
        func_0x00010884d07c();
        func_0x00010884d128();
        if ((in_stack_00000108 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10884c974);
          (*pcVar2)();
        }
        func_0x00010884d04c();
      }
LAB_10884c91c:
      func_0x00010884d110();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x00010884d168();
  }
  func_0x00010884d094();
  func_0x00010884d174();
  func_0x00010884cfb8();
  func_0x00010884d120();
  func_0x00010884d118();
  return;
}



/* Entry: 10884c9ac; end: 10884c9fb;  */

void FUN_10884c9ac(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10884c9fc; end: 10884ca07;  */

void FUN_10884c9fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884ca08; end: 10884ca2b;  */

void FUN_10884ca08(long param_1)

{
  func_0x000107c340f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10884ca2c; end: 10884ca2f;  */

void FUN_10884ca2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bd58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884ca30; end: 10884ca43;  */

void FUN_10884ca30(void)

{
  FUN_10884cc28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884ca44; end: 10884ca4f;  */

void FUN_10884ca44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10884ca50; end: 10884ca63;  */

void FUN_10884ca50(void)

{
  func_0x00010884cbf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884ca64; end: 10884ca73;  */

void FUN_10884ca64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100609858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10884ca74; end: 10884cbd7;  */

void FUN_10884ca74(undefined8 param_1)

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
  func_0x00010884d14c();
  func_0x00010884cfa0();
  if (iVar3 != 0) {
    FUN_108848d1c();
  }
  func_0x00010884d0e4();
  if ((bool)in_ZR) {
    func_0x00010884cf48();
    func_0x00010884d180();
    if ((bool)in_ZR) {
      func_0x00010884d088();
      func_0x00010884d070();
      func_0x00010884d064();
      func_0x00010884d0d4();
    }
    else {
      func_0x00010884cf2c();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x00010884d130();
  }
  FUN_10884ce84();
  func_0x00010884d0c4();
  if ((bool)in_ZR) {
    func_0x00010884d040();
    func_0x00010884cf10();
    if (unaff_x23 != 0) {
      func_0x00010884cee8();
      func_0x00010884cfe4();
      func_0x00010884cfcc();
      func_0x00010884d144();
      func_0x00010884d058();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x00010884cf80();
        do {
          if (unaff_x26 == 0) goto LAB_10884cb48;
          FUN_10884cff4();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        func_0x00010884cebc();
        func_0x00010884d07c();
        func_0x00010884d128();
        if ((in_stack_00000108 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10884cba0);
          (*pcVar2)();
        }
        func_0x00010884d04c();
      }
LAB_10884cb48:
      func_0x00010884d110();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x00010884d168();
  }
  func_0x00010884d094();
  func_0x00010884d174();
  func_0x00010884cfb8();
  func_0x00010884d120();
  func_0x00010884d118();
  return;
}



/* Entry: 10884cbd8; end: 10884cc27;  */

void FUN_10884cbd8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10884cc28; end: 10884cc33;  */

void FUN_10884cc28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bd58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884cc34; end: 10884cc57;  */

void FUN_10884cc34(long param_1)

{
  func_0x000107c340f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10884cc58; end: 10884cc5b;  */

void FUN_10884cc58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7be28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884cc5c; end: 10884cc6f;  */

void FUN_10884cc5c(void)

{
  FUN_10884ce54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884cc70; end: 10884cc7b;  */

void FUN_10884cc70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10884cc7c; end: 10884cc8f;  */

void FUN_10884cc7c(void)

{
  func_0x00010884ce20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884cc90; end: 10884cc9f;  */

void FUN_10884cc90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100609858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10884cca0; end: 10884ce03;  */

void FUN_10884cca0(undefined8 param_1)

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
  func_0x00010884d14c();
  func_0x00010884cfa0();
  if (iVar3 != 0) {
    FUN_108848d1c();
  }
  func_0x00010884d0e4();
  if ((bool)in_ZR) {
    func_0x00010884cf48();
    func_0x00010884d180();
    if ((bool)in_ZR) {
      func_0x00010884d088();
      func_0x00010884d070();
      func_0x00010884d064();
      func_0x00010884d0d4();
    }
    else {
      func_0x00010884cf2c();
      in_ZR = unaff_x23 == CONCAT44(uVar4,iVar3);
      unaff_x23 = (ulong)!(bool)in_ZR;
    }
  }
  else {
    func_0x00010884d130();
  }
  FUN_10884ce84();
  func_0x00010884d0c4();
  if ((bool)in_ZR) {
    func_0x00010884d040();
    func_0x00010884cf10();
    if (unaff_x23 != 0) {
      func_0x00010884cee8();
      func_0x00010884cfe4();
      func_0x00010884cfcc();
      func_0x00010884d144();
      func_0x00010884d058();
      if (((unaff_x23 & 1) != 0) && (in_stack_000000a8 != 0)) {
        func_0x00010884cf80();
        do {
          if (unaff_x26 == 0) goto LAB_10884cd74;
          FUN_10884cff4();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        func_0x00010884cebc();
        func_0x00010884d07c();
        func_0x00010884d128();
        if ((in_stack_00000108 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10884cdcc);
          (*pcVar2)();
        }
        func_0x00010884d04c();
      }
LAB_10884cd74:
      func_0x00010884d110();
    }
  }
  if ((unaff_w21 == 0) || (*unaff_x22 != 1 && *unaff_x22 != 0xe)) {
    func_0x00010884d168();
  }
  func_0x00010884d094();
  func_0x00010884d174();
  func_0x00010884cfb8();
  func_0x00010884d120();
  func_0x00010884d118();
  return;
}



/* Entry: 10884ce04; end: 10884ce53;  */

void FUN_10884ce04(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10884ce54; end: 10884ce5f;  */

void FUN_10884ce54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7be28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10884ce60; end: 10884ce83;  */

void FUN_10884ce60(long param_1)

{
  func_0x000107c340f4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10884ce84; end: 10884cebb;  */

void FUN_10884ce84(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long unaff_x19;
  uint *unaff_x22;
  long *plVar3;
  
  plVar3 = *(long **)(unaff_x19 + 0x40);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x18);
  uVar2 = (ulong)*unaff_x22;
  func_0x000108848c90(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010884ceb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar1,uVar2);
  return;
}



/* Entry: 10884cebc; end: 10884cff3;  */

void FUN_10884cebc(void)

{
  return;
}



/* Entry: 10884cff4; end: 10884d00f;  */

void FUN_10884cff4(void)

{
  long *unaff_x25;
  
  FUN_10884a3e0(*unaff_x25 + 0x28);
  return;
}



/* Entry: 10884d010; end: 10884d1b3;  */

undefined8 FUN_10884d010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10884d1b4; end: 10884d1e7;  */

void FUN_10884d1b4(ulong param_1)

{
  long unaff_x20;
  
  FUN_10884d3a4();
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010884d3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x20 + 8) + 0x10))();
  return;
}



/* Entry: 10884d1e8; end: 10884d263;  */

void FUN_10884d1e8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  uVar1 = param_2;
  func_0x000107c28078(param_2,param_1 + 0x18);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010884d260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (*(long **)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10884d264; end: 10884d283;  */

void FUN_10884d264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010884d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}



/* Entry: 10884d284; end: 10884d2eb;  */

void FUN_10884d284(ulong param_1)

{
  long unaff_x20;
  
  FUN_10884d3a4();
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010884d3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x20 + 8) + 0x30))();
  return;
}



/* Entry: 10884d2ec; end: 10884d34b;  */

void FUN_10884d2ec(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_2;
  func_0x000107c28078(param_2,param_1 + 0x18);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010884d348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x40))(*(long **)(param_1 + 8),param_2,param_3);
  return;
}



/* Entry: 10884d34c; end: 10884d34f;  */

undefined8 * FUN_10884d34c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bef8;
  func_0x000107c27914(param_1 + 3);
  func_0x000107c27a64(param_1 + 1);
  return param_1;
}



/* Entry: 10884d350; end: 10884d363;  */

void FUN_10884d350(void)

{
  FUN_10884d364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884d364; end: 10884d3a3;  */

undefined8 * FUN_10884d364(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bef8;
  func_0x000107c27914(param_1 + 3);
  func_0x000107c27a64(param_1 + 1);
  return param_1;
}



/* Entry: 10884d3a4; end: 10884d3c7;  */

bool FUN_10884d3a4(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (param_2[1] - lVar1 == *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) {
    func_0x000107c610b0(lVar1,*(long *)(param_1 + 0x18),param_2[1] - lVar1);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 10884d3c8; end: 10884d797;  */

void FUN_10884d3c8(undefined1 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 ****ppppuVar3;
  uint uVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 ***pppuVar13;
  long lVar14;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 **ppuStack_140;
  undefined *puStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  long lStack_e0;
  ulong uStack_d8;
  ulong auStack_d0 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  int iStack_68;
  
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    *param_1 = 0;
    param_1[0x48] = 0;
  }
  else {
    puVar12 = (undefined8 *)(param_2 + 0x20);
    func_0x0001072833b8();
    pppuVar13 = (undefined8 ***)*puVar12;
    ppuVar2 = &PTR_PTR_113280c30;
    if (*(undefined ***)(param_2 + 0x78) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(param_2 + 0x78);
    }
    ppuStack_90 = &PTR_FUN_110a9a2d0;
    uStack_88 = 0;
    iStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    puVar7 = (undefined8 *)((ulong)ppuVar2[0xc] & 0xfffffffffffffffc);
    lVar8 = (long)*(char *)((long)puVar7 + 0x17);
    puVar12 = puVar7;
    if (lVar8 < 0) {
      puVar12 = (undefined8 *)*puVar7;
      lVar8 = puVar7[1];
    }
    pppuVar5 = &ppuStack_90;
    func_0x000107c30344(pppuVar5,puVar12,lVar8);
    uVar4 = 0;
    if (iStack_68 == 0x19) {
      uVar4 = (uint)pppuVar5;
    }
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      param_1[0x48] = 0;
    }
    else {
      if (param_3 != 0) {
        puStack_a0 = (undefined *)0x0;
        uStack_98 = 0;
        pppuStack_a8 = (undefined8 ***)0x0;
        if ((*(byte *)(lStack_70 + 0x10) & 1) != 0) {
          uVar11 = *(ulong *)(*(long *)(lStack_70 + 0x48) + 0x10) & 0xfffffffffffffffc;
          lVar8 = (long)*(char *)(uVar11 + 0x17);
          if (lVar8 < 0) {
            lVar8 = *(long *)(uVar11 + 8);
          }
          if (lVar8 == 0x10) {
            FUN_108842a4c(&ppuStack_140);
            func_0x000107c27b9c(&pppuStack_a8,&ppuStack_140);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_140);
          }
        }
        puStack_138 = puStack_a0;
        ppuStack_140 = pppuStack_a8;
        lStack_130 = uStack_98;
        pppuStack_a8 = (undefined8 ****)0x0;
        puStack_a0 = (undefined *)0x0;
        uStack_98 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&uStack_128,*(ulong *)(lStack_70 + 0x30) & 0xfffffffffffffffc);
        func_0x000107c27b9c(param_3,&ppuStack_140);
        func_0x000107c27b9c(param_3 + 0x18,&uStack_128);
        FUN_10884d798(&ppuStack_140);
        func_0x00010884d85c();
      }
      func_0x00010b4d1804(&pppuStack_a8,lStack_70);
      puVar1 = puStack_a0;
      ppppuVar3 = (undefined8 ****)pppuStack_a8;
      if (-1 < (long)uStack_98) {
        puVar1 = (undefined *)(uStack_98 >> 0x38);
        ppppuVar3 = &pppuStack_a8;
      }
      func_0x00010866e7d8(&uStack_c0,ppppuVar3,(long)ppppuVar3 + (long)puVar1);
      uStack_120 = 0;
      auStack_d0[0] = 0;
      lVar8 = 0;
      uStack_128 = 0;
      uStack_d8 = 0;
      lStack_e0 = 0;
      if (*(int *)(ppuVar2 + 0x18) == 0x15) {
        puVar9 = (ulong *)(ppuVar2[0x17] + 0x10);
        uVar11 = *puVar9;
        if ((uVar11 & 1) != 0) {
          puVar9 = (ulong *)(uVar11 + 7);
        }
        uStack_120 = auStack_d0[0];
        uStack_128 = uStack_d8;
        lVar8 = lStack_e0;
        for (lVar14 = (long)*(int *)(ppuVar2[0x17] + 0x18) << 3; lVar14 != 0; lVar14 = lVar14 + -8)
        {
          puVar12 = (undefined8 *)(*(ulong *)(*puVar9 + 0x10) & 0xfffffffffffffffc);
          lVar10 = (long)*(char *)((long)puVar12 + 0x17);
          if (lVar10 < 0) {
            lVar10 = puVar12[1];
            puVar12 = (undefined8 *)*puVar12;
          }
          lStack_e0 = lVar8;
          uStack_d8 = uStack_128;
          auStack_d0[0] = uStack_120;
          func_0x000107c28004(auStack_f8,puVar12,(long)puVar12 + lVar10);
          if (uStack_d8 < auStack_d0[0]) {
            func_0x00010884d7c0(uStack_d8,auStack_f8);
            uVar11 = uStack_d8 + 0x18;
          }
          else {
            plVar6 = &lStack_e0;
            func_0x0001052bffb4(plVar6,(long)(uStack_d8 - lStack_e0) / 0x18 + 1);
            func_0x0001052bfd6c(&ppuStack_140,plVar6,(long)(uStack_d8 - lStack_e0) / 0x18,auStack_d0
                               );
            func_0x00010884d7c0(lStack_130,auStack_f8);
            lStack_130 = lStack_130 + 0x18;
            func_0x0001052bfce0(&lStack_e0,&ppuStack_140);
            uVar11 = uStack_d8;
            func_0x0001052bff48(&ppuStack_140);
          }
          uStack_d8 = uVar11;
          func_0x000107c27914(auStack_f8);
          puVar9 = puVar9 + 1;
          uStack_120 = auStack_d0[0];
          uStack_128 = uStack_d8;
          lVar8 = lStack_e0;
        }
      }
      uStack_100 = uStack_b0;
      uStack_108 = uStack_b8;
      uStack_110 = uStack_c0;
      ppuVar2 = &PTR_PTR_113286e08;
      if (*(undefined ***)(param_2 + 0x80) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(param_2 + 0x80);
      }
      puStack_138 = *(undefined **)(param_2 + 0xe0);
      if (ppuVar2[0x24] != (undefined *)0x0) {
        puStack_138 = ppuVar2[0x24];
      }
      uStack_d8 = 0;
      auStack_d0[0] = 0;
      lStack_e0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c0 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      ppuStack_140 = pppuVar13;
      lStack_130 = lVar8;
      ppuStack_118 = pppuVar13;
      func_0x00010884d810(param_1,&ppuStack_140);
      param_1[0x48] = 1;
      func_0x0001052c283c(&ppuStack_140);
      func_0x000107c27914(&uStack_170);
      func_0x0001052bfc1c(&uStack_158);
      func_0x0001052bfc1c(&lStack_e0);
      func_0x000107c27914(&uStack_c0);
      func_0x00010884d85c();
    }
    FUN_108930000(&ppuStack_90);
  }
  return;
}



/* Entry: 10884d798; end: 10884d80f;  */

void FUN_10884d798(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10884d810; end: 10884d887;  */

void FUN_10884d810(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



/* Entry: 10884d888; end: 10884d8e7;  */

void FUN_10884d888(void)

{
  long unaff_x22;
  long unaff_x23;
  
  FUN_10884de60();
  func_0x00010884deb8();
  for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 0x10) {
    func_0x00010884ded0();
  }
  func_0x00010884dea0();
  return;
}



/* Entry: 10884d8e8; end: 10884d8f7;  */

void FUN_10884d8e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  long unaff_x23;
  
  FUN_10884de60(param_1,0x18,1,param_2);
  func_0x00010884deb8();
  for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 0x10) {
    func_0x00010884ded0();
  }
  func_0x00010884dea0();
  return;
}



/* Entry: 10884d8f8; end: 10884d957;  */

void FUN_10884d8f8(void)

{
  long unaff_x22;
  long unaff_x23;
  
  FUN_10884de60();
  func_0x00010884deb8();
  for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 0x10) {
    func_0x00010884ded0();
  }
  func_0x00010884dea0();
  return;
}



/* Entry: 10884d958; end: 10884d967;  */

void FUN_10884d958(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  long unaff_x23;
  
  FUN_10884de60(param_1,0x20,1,param_2);
  func_0x00010884deb8();
  for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 0x10) {
    func_0x00010884ded0();
  }
  func_0x00010884dea0();
  return;
}



/* Entry: 10884d968; end: 10884d993;  */

void FUN_10884d968(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10884d994(param_1,0x28,1,&uStack_18);
  return;
}



/* Entry: 10884d994; end: 10884d9fb;  */

void FUN_10884d994(void)

{
  code *pcVar1;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  code *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  FUN_10884de60();
  func_0x00010884deb8();
  for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 2) {
    pcVar1 = unaff_x21;
    if ((unaff_x20 & 1) != 0) {
      pcVar1 = *(code **)(*(long *)(*unaff_x22 + unaff_x24) + unaff_x25);
    }
    (*pcVar1)(*unaff_x22 + unaff_x24,*unaff_x19);
  }
  func_0x00010884dea0();
  return;
}



/* Entry: 10884d9fc; end: 10884d9ff;  */

undefined8 * FUN_10884d9fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a7bf68;
  func_0x0001088257d4(param_1 + 1);
  return param_1;
}



/* Entry: 10884da00; end: 10884da13;  */

void FUN_10884da00(void)

{
  func_0x0001088257a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10884da14; end: 10884da5b;  */

undefined8 * FUN_10884da14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    puVar2 = puVar1 + 2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = param_1;
    FUN_10884da5c();
  }
  param_1[1] = puVar2;
  return puVar2 + -2;
}



/* Entry: 10884da5c; end: 10884daf3;  */

long FUN_10884da5c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10884daf4(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_10884dbc8(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_38 = puStack_38 + 2;
  FUN_10884db34(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_10884dc50(auStack_48);
  return lVar2;
}



/* Entry: 10884daf4; end: 10884db33;  */

undefined8 * FUN_10884daf4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 3);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0xfffffffffffffff;
    }
    return puVar2;
  }
  FUN_10884dbb4();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
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
  return puVar2;
}



/* Entry: 10884db34; end: 10884dbb3;  */

void FUN_10884db34(long *param_1,undefined8 *param_2)

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



/* Entry: 10884dbb4; end: 10884dbc7;  */

long * FUN_10884dbb4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f4be4ce;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010884dc10();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 10884dbc8; end: 10884dc33;  */

long * FUN_10884dbc8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010884dc10();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10884dc34; end: 10884dc4f;  */

long * FUN_10884dc34(long *param_1,ulong param_2)

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
  FUN_10884dc7c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10884dc50; end: 10884dc7b;  */

long * FUN_10884dc50(long *param_1)

{
  FUN_10884dc7c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10884dc7c; end: 10884dc83;  */

void FUN_10884dc7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    func_0x000104bf8920();
  }
  return;
}



/* Entry: 10884dc84; end: 10884dcf3;  */

void FUN_10884dc84(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    func_0x000104bf8920();
  }
  return;
}



/* Entry: 10884dcf4; end: 10884dd73;  */

void FUN_10884dcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10884dd74(param_1,param_4);
    FUN_10884ddac(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_10884de34(&uStack_40);
  return;
}



/* Entry: 10884dd74; end: 10884ddab;  */

void FUN_10884dd74(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    func_0x00010884dc10();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
  }
  else {
    FUN_10884dbb4();
    plVar1 = param_1 + 2;
    FUN_10884dde0();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10884ddac; end: 10884dddf;  */

void FUN_10884ddac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10884dde0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10884dde0; end: 10884ddf3;  */

void FUN_10884dde0(void)

{
  FUN_10884ddf4();
  return;
}



/* Entry: 10884ddf4; end: 10884de33;  */

void FUN_10884ddf4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar4 = param_2[1];
    uVar5 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar5;
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
    param_4 = param_4 + 2;
  }
  return;
}



/* Entry: 10884de34; end: 10884de5f;  */

long FUN_10884de34(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001088257fc(param_1);
  }
  return param_1;
}



/* Entry: 10884de60; end: 10884dedb;  */

undefined1 * FUN_10884de60(long param_1)

{
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  FUN_10884dcf4(&stack0x00000008,*(long *)(param_1 + 8),*(long *)(param_1 + 0x10),
                *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 4);
  return (undefined1 *)&stack0x00000008;
}



/* Entry: 10884dedc; end: 10884e103;  */

void FUN_10884dedc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010885c1b0();
  *param_1 = &PTR_FUN_110a7bfc0;
  param_1[1] = &PTR_FUN_110a7c070;
  func_0x000107c27994(param_1 + 2);
  func_0x00010885c1ec();
  FUN_10880dab0();
  uVar2 = *param_4;
  *(undefined8 *)(unaff_x19 + 0x48) = param_4[1];
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  uVar2 = *param_5;
  *(undefined8 *)(unaff_x19 + 0x58) = param_5[1];
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  *param_5 = 0;
  param_5[1] = 0;
  uVar2 = *param_6;
  uVar1 = param_6[1];
  *param_6 = 0;
  param_6[1] = 0;
  uStack_70 = uVar2;
  uStack_68 = uVar1;
  func_0x000107c278b8(&uStack_88,&UNK_10f4be4d5);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar1;
  uStack_70 = 0;
  uStack_68 = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = uStack_80;
  *(undefined8 *)(unaff_x19 + 0x70) = uStack_88;
  *(undefined8 *)(unaff_x19 + 0x80) = uStack_78;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  *(undefined2 *)(unaff_x19 + 0x88) = 1;
  *(undefined1 *)(unaff_x19 + 0x8a) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
  func_0x000107c289fc(&uStack_70);
  uVar2 = *param_7;
  *(undefined8 *)(unaff_x19 + 0x98) = param_7[1];
  *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
  *param_7 = 0;
  param_7[1] = 0;
  uVar2 = *param_8;
  *(undefined8 *)(unaff_x19 + 0xa8) = param_8[1];
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  *param_8 = 0;
  param_8[1] = 0;
  uVar2 = *param_9;
  *(undefined8 *)(unaff_x19 + 0xb8) = param_9[1];
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
  *param_9 = 0;
  param_9[1] = 0;
  uVar2 = *param_10;
  *(undefined8 *)(unaff_x19 + 200) = param_10[1];
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar2;
  *param_10 = 0;
  param_10[1] = 0;
  uVar2 = *param_11;
  *(undefined8 *)(unaff_x19 + 0xd8) = param_11[1];
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar2;
  *param_11 = 0;
  param_11[1] = 0;
  func_0x000107c278b8(auStack_a0,&UNK_10f4be501);
  func_0x000107c28a44(unaff_x19 + 0xe0,param_3,auStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  *(undefined8 *)(unaff_x19 + 0x148) = 0;
  *(undefined8 *)(unaff_x19 + 0x140) = 0;
  *(undefined8 *)(unaff_x19 + 0x158) = 0;
  *(undefined8 *)(unaff_x19 + 0x150) = 0;
  *(undefined ***)(unaff_x19 + 0x160) = &PTR_FUN_110a7bf68;
  *(undefined8 *)(unaff_x19 + 0x170) = 0;
  *(undefined8 *)(unaff_x19 + 0x168) = 0;
  *(undefined8 *)(unaff_x19 + 0x180) = 0;
  *(undefined8 *)(unaff_x19 + 0x178) = 0;
  *(undefined8 *)(unaff_x19 + 400) = 0;
  *(undefined8 *)(unaff_x19 + 0x188) = 0;
  *(undefined8 *)(unaff_x19 + 0x198) = 0;
  *(undefined4 *)(unaff_x19 + 0x1a0) = 0x3f800000;
  return;
}


