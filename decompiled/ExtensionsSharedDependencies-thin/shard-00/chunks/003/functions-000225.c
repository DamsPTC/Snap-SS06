/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004caa30; end: 004caa3f;  */

void FUN_004caa30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004caa40; end: 004cab97;  */

void FUN_004caa40(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cab10;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cab68);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cab10:
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



/* Entry: 004cab98; end: 004cabeb;  */

void FUN_004cab98(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cabec; end: 004cabf7;  */

void FUN_004cabec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eee30;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cabf8; end: 004cac1b;  */

void FUN_004cabf8(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cac1c; end: 004cac1f;  */

void FUN_004cac1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eef00;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cac20; end: 004cac33;  */

void FUN_004cac20(void)

{
  FUN_004cae10();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cac34; end: 004cac3f;  */

void FUN_004cac34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cac40; end: 004cac53;  */

void FUN_004cac40(void)

{
  func_0x004cadd8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cac54; end: 004cac63;  */

void FUN_004cac54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cac64; end: 004cadbb;  */

void FUN_004cac64(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cad34;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cad8c);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cad34:
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



/* Entry: 004cadbc; end: 004cae0f;  */

void FUN_004cadbc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cae10; end: 004cae1b;  */

void FUN_004cae10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eef00;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cae1c; end: 004cae3f;  */

void FUN_004cae1c(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cae40; end: 004cae43;  */

void FUN_004cae40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eefd0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cae44; end: 004cae57;  */

void FUN_004cae44(void)

{
  FUN_004cb034();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cae58; end: 004cae63;  */

void FUN_004cae58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cae64; end: 004cae77;  */

void FUN_004cae64(void)

{
  func_0x004caffc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cae78; end: 004cae87;  */

void FUN_004cae78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cae88; end: 004cafdf;  */

void FUN_004cae88(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004caf58;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cafb0);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004caf58:
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



/* Entry: 004cafe0; end: 004cb033;  */

void FUN_004cafe0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cb034; end: 004cb03f;  */

void FUN_004cb034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009eefd0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cb040; end: 004cb063;  */

void FUN_004cb040(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cb064; end: 004cb067;  */

void FUN_004cb064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef0a0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cb068; end: 004cb07b;  */

void FUN_004cb068(void)

{
  FUN_004cb258();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cb07c; end: 004cb087;  */

void FUN_004cb07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cb088; end: 004cb09b;  */

void FUN_004cb088(void)

{
  func_0x004cb220();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cb09c; end: 004cb0ab;  */

void FUN_004cb09c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cb0ac; end: 004cb203;  */

void FUN_004cb0ac(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cb17c;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cb1d4);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cb17c:
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



/* Entry: 004cb204; end: 004cb257;  */

void FUN_004cb204(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cb258; end: 004cb263;  */

void FUN_004cb258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef0a0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cb264; end: 004cb287;  */

void FUN_004cb264(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cb288; end: 004cb28b;  */

void FUN_004cb288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef170;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cb28c; end: 004cb29f;  */

void FUN_004cb28c(void)

{
  FUN_004cb47c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cb2a0; end: 004cb2ab;  */

void FUN_004cb2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cb2ac; end: 004cb2bf;  */

void FUN_004cb2ac(void)

{
  func_0x004cb444();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cb2c0; end: 004cb2cf;  */

void FUN_004cb2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cb2d0; end: 004cb427;  */

void FUN_004cb2d0(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cb3a0;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cb3f8);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cb3a0:
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



/* Entry: 004cb428; end: 004cb47b;  */

void FUN_004cb428(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cb47c; end: 004cb487;  */

void FUN_004cb47c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef170;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cb488; end: 004cb4ab;  */

void FUN_004cb488(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cb4ac; end: 004cb4af;  */

void FUN_004cb4ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef240;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cb4b0; end: 004cb4c3;  */

void FUN_004cb4b0(void)

{
  FUN_004cb6a0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cb4c4; end: 004cb4cf;  */

void FUN_004cb4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cb4d0; end: 004cb4e3;  */

void FUN_004cb4d0(void)

{
  func_0x004cb668();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cb4e4; end: 004cb4f3;  */

void FUN_004cb4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cb4f4; end: 004cb64b;  */

void FUN_004cb4f4(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cb5c4;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cb61c);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cb5c4:
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



/* Entry: 004cb64c; end: 004cb69f;  */

void FUN_004cb64c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cb6a0; end: 004cb6ab;  */

void FUN_004cb6a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef240;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cb6ac; end: 004cb6cf;  */

void FUN_004cb6ac(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cb6d0; end: 004cb6d3;  */

void FUN_004cb6d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef310;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cb6d4; end: 004cb6e7;  */

void FUN_004cb6d4(void)

{
  FUN_004cb8c4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cb6e8; end: 004cb6f3;  */

void FUN_004cb6e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cb6f4; end: 004cb707;  */

void FUN_004cb6f4(void)

{
  func_0x004cb88c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cb708; end: 004cb717;  */

void FUN_004cb708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cb718; end: 004cb86f;  */

void FUN_004cb718(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cb7e8;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cb840);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cb7e8:
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



/* Entry: 004cb870; end: 004cb8c3;  */

void FUN_004cb870(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cb8c4; end: 004cb8cf;  */

void FUN_004cb8c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef310;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cb8d0; end: 004cb8f3;  */

void FUN_004cb8d0(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cb8f4; end: 004cb8f7;  */

void FUN_004cb8f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef3e0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cb8f8; end: 004cb90b;  */

void FUN_004cb8f8(void)

{
  FUN_004cbae8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cb90c; end: 004cb917;  */

void FUN_004cb90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cb918; end: 004cb92b;  */

void FUN_004cb918(void)

{
  func_0x004cbab0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cb92c; end: 004cb93b;  */

void FUN_004cb92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cb93c; end: 004cba93;  */

void FUN_004cb93c(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cba0c;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cba64);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cba0c:
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



/* Entry: 004cba94; end: 004cbae7;  */

void FUN_004cba94(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cbae8; end: 004cbaf3;  */

void FUN_004cbae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef3e0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cbaf4; end: 004cbb17;  */

void FUN_004cbaf4(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cbb18; end: 004cbb1b;  */

void FUN_004cbb18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef4b0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cbb1c; end: 004cbb2f;  */

void FUN_004cbb1c(void)

{
  FUN_004cbd0c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cbb30; end: 004cbb3b;  */

void FUN_004cbb30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cbb3c; end: 004cbb4f;  */

void FUN_004cbb3c(void)

{
  func_0x004cbcd4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cbb50; end: 004cbb5f;  */

void FUN_004cbb50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cbb60; end: 004cbcb7;  */

void FUN_004cbb60(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cbc30;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cbc88);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cbc30:
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



/* Entry: 004cbcb8; end: 004cbd0b;  */

void FUN_004cbcb8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cbd0c; end: 004cbd17;  */

void FUN_004cbd0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef4b0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cbd18; end: 004cbd3b;  */

void FUN_004cbd18(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cbd3c; end: 004cbd3f;  */

void FUN_004cbd3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef580;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cbd40; end: 004cbd53;  */

void FUN_004cbd40(void)

{
  FUN_004cbf30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cbd54; end: 004cbd5f;  */

void FUN_004cbd54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cbd60; end: 004cbd73;  */

void FUN_004cbd60(void)

{
  func_0x004cbef8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cbd74; end: 004cbd83;  */

void FUN_004cbd74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cbd84; end: 004cbedb;  */

void FUN_004cbd84(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cbe54;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cbeac);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cbe54:
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



/* Entry: 004cbedc; end: 004cbf2f;  */

void FUN_004cbedc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cbf30; end: 004cbf3b;  */

void FUN_004cbf30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef580;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cbf3c; end: 004cbf5f;  */

void FUN_004cbf3c(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cbf60; end: 004cbf63;  */

void FUN_004cbf60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef650;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cbf64; end: 004cbf77;  */

void FUN_004cbf64(void)

{
  FUN_004cc154();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cbf78; end: 004cbf83;  */

void FUN_004cbf78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cbf84; end: 004cbf97;  */

void FUN_004cbf84(void)

{
  func_0x004cc11c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cbf98; end: 004cbfa7;  */

void FUN_004cbf98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cbfa8; end: 004cc0ff;  */

void FUN_004cbfa8(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cc078;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cc0d0);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cc078:
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



/* Entry: 004cc100; end: 004cc153;  */

void FUN_004cc100(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cc154; end: 004cc15f;  */

void FUN_004cc154(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef650;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cc160; end: 004cc183;  */

void FUN_004cc160(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cc184; end: 004cc187;  */

void FUN_004cc184(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef720;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cc188; end: 004cc19b;  */

void FUN_004cc188(void)

{
  FUN_004cc378();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cc19c; end: 004cc1a7;  */

void FUN_004cc19c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cc1a8; end: 004cc1bb;  */

void FUN_004cc1a8(void)

{
  func_0x004cc340();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cc1bc; end: 004cc1cb;  */

void FUN_004cc1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}


