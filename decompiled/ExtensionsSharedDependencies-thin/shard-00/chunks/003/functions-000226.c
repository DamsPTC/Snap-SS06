/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004cc1cc; end: 004cc323;  */

void FUN_004cc1cc(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cc29c;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cc2f4);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cc29c:
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



/* Entry: 004cc324; end: 004cc377;  */

void FUN_004cc324(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cc378; end: 004cc383;  */

void FUN_004cc378(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef720;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cc384; end: 004cc3a7;  */

void FUN_004cc384(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cc3a8; end: 004cc3ab;  */

void FUN_004cc3a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef7f0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cc3ac; end: 004cc3bf;  */

void FUN_004cc3ac(void)

{
  FUN_004cc59c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cc3c0; end: 004cc3cb;  */

void FUN_004cc3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cc3cc; end: 004cc3df;  */

void FUN_004cc3cc(void)

{
  func_0x004cc564();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cc3e0; end: 004cc3ef;  */

void FUN_004cc3e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cc3f0; end: 004cc547;  */

void FUN_004cc3f0(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cc4c0;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cc518);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cc4c0:
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



/* Entry: 004cc548; end: 004cc59b;  */

void FUN_004cc548(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cc59c; end: 004cc5a7;  */

void FUN_004cc59c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef7f0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cc5a8; end: 004cc5cb;  */

void FUN_004cc5a8(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cc5cc; end: 004cc5cf;  */

void FUN_004cc5cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef8c0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cc5d0; end: 004cc5e3;  */

void FUN_004cc5d0(void)

{
  FUN_004cc7c0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cc5e4; end: 004cc5ef;  */

void FUN_004cc5e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cc5f0; end: 004cc603;  */

void FUN_004cc5f0(void)

{
  func_0x004cc788();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cc604; end: 004cc613;  */

void FUN_004cc604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cc614; end: 004cc76b;  */

void FUN_004cc614(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cc6e4;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cc73c);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cc6e4:
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



/* Entry: 004cc76c; end: 004cc7bf;  */

void FUN_004cc76c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cc7c0; end: 004cc7cb;  */

void FUN_004cc7c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef8c0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cc7cc; end: 004cc7ef;  */

void FUN_004cc7cc(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cc7f0; end: 004cc7f3;  */

void FUN_004cc7f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef990;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cc7f4; end: 004cc807;  */

void FUN_004cc7f4(void)

{
  FUN_004cc9e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cc808; end: 004cc813;  */

void FUN_004cc808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cc814; end: 004cc827;  */

void FUN_004cc814(void)

{
  func_0x004cc9ac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cc828; end: 004cc837;  */

void FUN_004cc828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cc838; end: 004cc98f;  */

void FUN_004cc838(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004cc908;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4cc960);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004cc908:
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



/* Entry: 004cc990; end: 004cc9e3;  */

void FUN_004cc990(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cc9e4; end: 004cc9ef;  */

void FUN_004cc9e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ef990;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cc9f0; end: 004cca13;  */

void FUN_004cc9f0(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cca14; end: 004cca17;  */

void FUN_004cca14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009efa60;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cca18; end: 004cca2b;  */

void FUN_004cca18(void)

{
  FUN_004ccc08();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cca2c; end: 004cca37;  */

void FUN_004cca2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004cca38; end: 004cca4b;  */

void FUN_004cca38(void)

{
  func_0x004ccbd0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cca4c; end: 004cca5b;  */

void FUN_004cca4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004cca5c; end: 004ccbb3;  */

void FUN_004cca5c(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004ccb2c;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4ccb84);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004ccb2c:
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



/* Entry: 004ccbb4; end: 004ccc07;  */

void FUN_004ccbb4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004ccc08; end: 004ccc13;  */

void FUN_004ccc08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009efa60;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004ccc14; end: 004ccc37;  */

void FUN_004ccc14(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004ccc38; end: 004ccc3b;  */

void FUN_004ccc38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009efb30;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004ccc3c; end: 004ccc4f;  */

void FUN_004ccc3c(void)

{
  FUN_004cce2c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ccc50; end: 004ccc5b;  */

void FUN_004ccc50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004ccc5c; end: 004ccc6f;  */

void FUN_004ccc5c(void)

{
  func_0x004ccdf4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ccc70; end: 004ccc7f;  */

void FUN_004ccc70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 004ccc80; end: 004ccdd7;  */

void FUN_004ccc80(undefined8 param_1)

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
          if (unaff_x26 == 0) goto LAB_004ccd50;
          FUN_004cd0b8();
          bVar1 = iVar3 == 0;
          iVar3 = 0;
        } while (bVar1);
        FUN_004cce5c();
        func_0x004cd260();
        if ((in_stack_00000108 & 1) == 0) {
          FUN_00460da4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x4ccda8);
          (*pcVar2)();
        }
        func_0x004cd168();
      }
LAB_004ccd50:
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



/* Entry: 004ccdd8; end: 004cce2b;  */

void FUN_004ccdd8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x004ccfb8();
  func_0x004ccf60();
                    /* WARNING: Could not recover jumptable at 0x004cd24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 004cce2c; end: 004cce37;  */

void FUN_004cce2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009efb30;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cce38; end: 004cce5b;  */

void FUN_004cce38(long param_1)

{
  func_0x004cd220();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004cce5c; end: 004cce8f;  */

void FUN_004cce5c(void)

{
  undefined8 *puVar1;
  long unaff_x29;
  undefined **ppuStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  
  uStack0000000000000060 = 0;
  uStack0000000000000058 = 0;
  ppuStack0000000000000050 = &PTR_FUN_009f06f0;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000080 = 0;
  puVar1 = (undefined8 *)(unaff_x29 + -0x98);
  if (*(char *)(unaff_x29 + -0x58) == '\x01') {
    FUN_004ca26c(puVar1,&stack0x00000050);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x88) = 0;
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    *puVar1 = &PTR_FUN_009f06f0;
    *(undefined **)(unaff_x29 + -0x80) = &DAT_00b69408;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    *(undefined8 *)(unaff_x29 + -0x60) = 0;
    *(undefined8 *)(unaff_x29 + -0x68) = 0;
    FUN_004ca26c(puVar1,&stack0x00000050);
    *(undefined1 *)(puVar1 + 8) = 1;
  }
  return;
}



/* Entry: 004cce90; end: 004ccec7;  */

void FUN_004cce90(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long unaff_x19;
  uint *unaff_x22;
  long *plVar3;
  
  plVar3 = *(long **)(unaff_x19 + 0x40);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x18);
  uVar2 = (ulong)*unaff_x22;
  FUN_004c7d1c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x004ccec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar1,uVar2);
  return;
}



/* Entry: 004ccec8; end: 004cd0b7;  */

void FUN_004ccec8(void)

{
  return;
}



/* Entry: 004cd0b8; end: 004cd0d3;  */

void FUN_004cd0b8(void)

{
  long *unaff_x25;
  
  FUN_004ca25c(*unaff_x25 + 0x28);
  return;
}



/* Entry: 004cd0d4; end: 004cd3d3;  */

undefined8 FUN_004cd0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 004cd3d4; end: 004cd48b;  */

void FUN_004cd3d4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_009efc38;
    lStack_40 = param_2;
    FUN_007181c8(&uStack_30,&ppuStack_38,&lStack_40,FUN_004cd48c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_0047df30(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_004cd704(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 004cd48c; end: 004cd58b;  */

void FUN_004cd48c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  pqVar4 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_009efc78;
  pqVar4[3] = (qword)&PTR_DAT_009efcf8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  FUN_00718210();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  pqVar4[5] = puVar6[1];
  pqVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  pqVar4[6] = (qword)puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  pqVar4[3] = (qword)&PTR_FUN_009efcc8;
  *param_1 = pqVar4 + 3;
  param_1[1] = pqVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_004cd704(&uStack_50);
  return;
}



/* Entry: 004cd58c; end: 004cd58f;  */

void FUN_004cd58c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009efc78;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cd590; end: 004cd5a3;  */

void FUN_004cd590(void)

{
  FUN_004cd6f4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004cd5a4; end: 004cd5af;  */

long FUN_004cd5a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_009efc38;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 004cd5b0; end: 004cd61f;  */

void FUN_004cd5b0(void)

{
  FUN_004cd730();
  return;
}



/* Entry: 004cd620; end: 004cd65f;  */

void FUN_004cd620(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x0078a040(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 004cd660; end: 004cd6f3;  */

long FUN_004cd660(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_009efc38;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 004cd6f4; end: 004cd703;  */

void FUN_004cd6f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009efc78;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004cd704; end: 004cd72f;  */

long FUN_004cd704(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 004cd730; end: 004cd73b;  */

long FUN_004cd730(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_009efc38;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 004cd73c; end: 004cd7bb; -[SCNMessagingConversationIdProvider initWithCpp:] */

undefined1 * FUN_004cd73c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3e20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x004cd980(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 004cd7bc; end: 004cd8d7; +[SCNMessagingConversationIdProvider getOneOnOneConversationId:participant2UserId:] */

void FUN_004cd7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_004d278c(auStack_60,param_3);
  FUN_004d278c(auStack_78,param_4);
  FUN_004bc5b0(auStack_48,auStack_60,auStack_78);
  FUN_0040d974(auStack_78);
  FUN_0040d974(auStack_60);
  puVar1 = auStack_48;
  FUN_004d27fc(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_0040d974(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004cd8d8; end: 004cd933; -[SCNMessagingConversationIdProvider .cxx_destruct] */

void FUN_004cd8d8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_009efd18;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x004cd980((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 004cd934; end: 004cd9ab; -[SCNMessagingConversationIdProvider .cxx_construct] */

undefined8 * FUN_004cd934(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  FUN_00718574();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
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
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 004cd9ac; end: 004cd9b7;  */

void FUN_004cd9ac(void)

{
  return;
}



/* Entry: 004cd9b8; end: 004cda27;  */

void FUN_004cd9b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_00ac2ff0;
  _objc_alloc(PTR_PTR_00ac2ff0);
  lVar2 = param_1;
  FUN_004d27fc(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x007850c0(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x18),
                  *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30));
  FUN_004cda28();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004cda28; end: 004cda33;  */

void FUN_004cda28(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004cda34; end: 004cdae3; -[SCNMessagingConversationMetadata initWithConversationId:version:lastSeenChat:lastSeenSnap:lastSeenReactionId:] */

undefined1 *
FUN_004cda34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_00ac3e28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004cdae4; end: 004cdaeb; -[SCNMessagingConversationMetadata conversationId] */

undefined8 FUN_004cdae4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004cdaec; end: 004cdb1b; -[SCNMessagingConversationMetadata setConversationId:] */

void FUN_004cdaec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004cdb1c; end: 004cdb23; -[SCNMessagingConversationMetadata version] */

undefined8 FUN_004cdb1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004cdb24; end: 004cdb2b; -[SCNMessagingConversationMetadata setVersion:] */

void FUN_004cdb24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 004cdb2c; end: 004cdb33; -[SCNMessagingConversationMetadata lastSeenChat] */

undefined8 FUN_004cdb2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004cdb34; end: 004cdb3b; -[SCNMessagingConversationMetadata setLastSeenChat:] */

void FUN_004cdb34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 004cdb3c; end: 004cdb43; -[SCNMessagingConversationMetadata lastSeenSnap] */

undefined8 FUN_004cdb3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004cdb44; end: 004cdb4b; -[SCNMessagingConversationMetadata setLastSeenSnap:] */

void FUN_004cdb44(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 004cdb4c; end: 004cdb53; -[SCNMessagingConversationMetadata lastSeenReactionId] */

undefined8 FUN_004cdb4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 004cdb54; end: 004cdb5b; -[SCNMessagingConversationMetadata setLastSeenReactionId:] */

void FUN_004cdb54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 004cdb5c; end: 004cdb67; -[SCNMessagingConversationMetadata .cxx_destruct] */

void FUN_004cdb5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004cdb68; end: 004cdbaf; -[SCNMessagingConversationMetadataFormat initWithUserListMessageMetadata:] */

void FUN_004cdb68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3e30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 004cdbb0; end: 004cdbb7; -[SCNMessagingConversationMetadataFormat userListMessageMetadata] */

undefined8 FUN_004cdbb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004cdbb8; end: 004cdbbf; -[SCNMessagingConversationMetadataFormat setUserListMessageMetadata:] */

void FUN_004cdbb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 004cdbc0; end: 004cdbfb;  */

void FUN_004cdbc0(void)

{
  _objc_alloc(PTR_PTR_00ac2ff8);
  func_0x007850e0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004cdbfc; end: 004cdc73; -[SCNMessagingConversationSyncStats initWithConversationSyncAttempted:responseSize:messagesCount:conversationUpdateCount:eelMessagesCount:eelDecryptionLatencyUs:] */

void FUN_004cdbfc(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_00ac3e38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined4 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0x14) = param_6;
    *(undefined4 *)((long)puVar1 + 0x18) = param_7;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_8;
  }
  return;
}



/* Entry: 004cdc74; end: 004cdc7b; -[SCNMessagingConversationSyncStats conversationSyncAttempted] */

undefined1 FUN_004cdc74(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 004cdc7c; end: 004cdc83; -[SCNMessagingConversationSyncStats setConversationSyncAttempted:] */

void FUN_004cdc7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 004cdc84; end: 004cdc8b; -[SCNMessagingConversationSyncStats responseSize] */

undefined4 FUN_004cdc84(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 004cdc8c; end: 004cdc93; -[SCNMessagingConversationSyncStats setResponseSize:] */

void FUN_004cdc8c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 004cdc94; end: 004cdc9b; -[SCNMessagingConversationSyncStats messagesCount] */

undefined4 FUN_004cdc94(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 004cdc9c; end: 004cdca3; -[SCNMessagingConversationSyncStats setMessagesCount:] */

void FUN_004cdc9c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 004cdca4; end: 004cdcab; -[SCNMessagingConversationSyncStats conversationUpdateCount] */

undefined4 FUN_004cdca4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 004cdcac; end: 004cdcb3; -[SCNMessagingConversationSyncStats setConversationUpdateCount:] */

void FUN_004cdcac(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 004cdcb4; end: 004cdcbb; -[SCNMessagingConversationSyncStats eelMessagesCount] */

undefined4 FUN_004cdcb4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 004cdcbc; end: 004cdcc3; -[SCNMessagingConversationSyncStats setEelMessagesCount:] */

void FUN_004cdcbc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 004cdcc4; end: 004cdccb; -[SCNMessagingConversationSyncStats eelDecryptionLatencyUs] */

undefined4 FUN_004cdcc4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


