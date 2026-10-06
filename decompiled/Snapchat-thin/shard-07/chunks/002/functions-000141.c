/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052a4758; end: 1052a477b;  */

void FUN_1052a4758(void)

{
  func_0x0001052a6874();
  FUN_1052a03ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 1052a477c; end: 1052a47ab;  */

void FUN_1052a477c(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x0001052a6690();
  while (uVar1 = unaff_x19, FUN_1052a47ac(), (uVar1 & 1) == 0) {
    func_0x0001052a6394();
  }
  return;
}



/* Entry: 1052a47ac; end: 1052a47b3;  */

undefined8 FUN_1052a47ac(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x48) & 1) == 0) {
    func_0x0001052a61d0();
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 1052a47b4; end: 1052a47ef;  */

void FUN_1052a47b4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  undefined8 *unaff_x19;
  undefined8 uVar1;
  
  func_0x0001052a64dc();
  if ((bool)in_ZR) {
    uVar1 = *param_2;
    unaff_x19[1] = param_2[1];
    *unaff_x19 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(unaff_x19 + 8) = extraout_w8;
  }
  else {
    FUN_1052a47f0();
  }
  return;
}



/* Entry: 1052a47f0; end: 1052a482f;  */

void FUN_1052a47f0(long param_1)

{
  FUN_1052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1052a4830; end: 1052a484b;  */

undefined8 FUN_1052a4830(void)

{
  undefined8 unaff_x19;
  
  func_0x0001052a6484();
  func_0x0001003b6ce0();
  func_0x000104bf3588();
  return unaff_x19;
}



/* Entry: 1052a484c; end: 1052a4873;  */

void FUN_1052a484c(void)

{
  func_0x0001052a62b8();
  func_0x0001052a67cc();
  func_0x0001052a61e8();
  func_0x0001052a66cc();
  return;
}



/* Entry: 1052a4874; end: 1052a48c7;  */

void FUN_1052a4874(void)

{
  func_0x0001052a6210();
  FUN_1052a4ab0();
  return;
}



/* Entry: 1052a48c8; end: 1052a4aaf;  */

undefined8 * FUN_1052a48c8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int unaff_w21;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_a0;
  undefined8 auStack_98 [8];
  char cStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  
  func_0x0001052a61bc();
  if (param_3 != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10 != 0);
    do {
      func_0x0001052a6200();
    } while (extraout_w10_00 != 0);
  }
  uStack_c0 = param_2;
  lStack_b8 = param_3;
  FUN_1052a4b5c(auStack_98,&uStack_c0);
  func_0x0001052a688c();
  uVar1 = cStack_58 == '\x01';
  if ((bool)uVar1) {
    puVar2 = auStack_98;
    FUN_1052a4c14();
    uStack_50 = *puVar2;
    uStack_48 = 5;
LAB_1052a4960:
    func_0x0001052a6594();
    func_0x0001052a6550();
    lVar3 = lStack_a0;
    if (lStack_a0 == 0) goto LAB_1052a4984;
  }
  else {
    func_0x0001052a6578();
    func_0x0001052a6410();
    func_0x0001052a6550();
    func_0x0001052a6854();
    lVar3 = extraout_x8;
    if ((bool)uVar1) {
      func_0x0001052a6844();
      goto LAB_1052a4960;
    }
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
LAB_1052a4984:
  func_0x0001052a6474();
  func_0x0001052a68a4();
  func_0x0001052a6540();
  func_0x0001052a6558();
  func_0x0001052a6370();
  func_0x0001052a6500();
  func_0x0001052a6648();
  func_0x0001052a4cf0(auStack_98);
  do {
    func_0x0001052a67e4();
    func_0x0001052a6670();
    puVar2 = (undefined8 *)param_1[1];
    func_0x0001003b8370(puVar2);
    while( true ) {
      func_0x0001052a6164();
      if ((bool)uVar1) {
        return puVar2;
      }
      ___stack_chk_fail();
      func_0x0001052a64d0();
      func_0x0001052a6540();
      puVar2 = auStack_98;
      func_0x0001052a4cf0();
      uVar1 = unaff_w21 == 1;
      if ((bool)uVar1) break;
      func_0x0001052a67e4();
      func_0x0001052a6670();
      uVar1 = unaff_w21 == 1;
      if (!(bool)uVar1) {
        func_0x0001052a6518();
        func_0x0001052a67d4();
        func_0x0001052a6984();
        if (puVar2 != (undefined8 *)0x0) {
          func_0x0001000df548();
        }
        return param_1;
      }
      func_0x0001052a6510();
      func_0x0001052a637c();
      func_0x0001052a63cc();
      func_0x0001052a6354();
      ___cxa_end_catch();
    }
    func_0x0001052a6510();
    func_0x0001052a63d8();
    func_0x0001052a68f8();
    func_0x0001052a65a8();
    func_0x0001052a64b0();
    func_0x0001052a6680();
    func_0x0001052a6640();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1052a4ab0; end: 1052a4ad3;  */

void FUN_1052a4ab0(long param_1)

{
  func_0x0001052a6984();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a4ad4; end: 1052a4ad7;  */

undefined8 * FUN_1052a4ad4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874820;
  FUN_1052a4d0c(param_1 + 1);
  return param_1;
}



/* Entry: 1052a4ad8; end: 1052a4aeb;  */

void FUN_1052a4ad8(void)

{
  FUN_1052a4b30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a4aec; end: 1052a4b2f;  */

void FUN_1052a4aec(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0001052a6564();
  if (param_3 != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10 != 0);
  }
  FUN_1052a48c8(param_1 + 8);
  func_0x0001052a6720();
  return;
}



/* Entry: 1052a4b30; end: 1052a4b5b;  */

undefined8 * FUN_1052a4b30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874820;
  FUN_1052a4d0c(param_1 + 1);
  return param_1;
}



/* Entry: 1052a4b5c; end: 1052a4c13;  */

void FUN_1052a4b5c(void)

{
  code *pcVar1;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  undefined1 auStack_40 [32];
  
  func_0x0001052a6614();
  func_0x0001052a6990();
  FUN_1052a484c();
  func_0x0001052a696c();
  FUN_1052a4874();
  FUN_1052a4ab0(auStack_40);
  func_0x0001052a67e4();
  func_0x0001052a62c8();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a6954();
  if (extraout_x9 != 0) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
  func_0x0001052a6584();
  FUN_1052a4c64();
  func_0x0001052a6670();
  func_0x0001052a6530();
  if (extraout_x9_00 != 0) {
    func_0x0001052a63c0();
    func_0x0001052a67bc();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1052a4be0);
    (*pcVar1)();
  }
  FUN_1052a4c9c();
  func_0x0001052a6520();
  func_0x0001052a6774();
  return;
}



/* Entry: 1052a4c14; end: 1052a4c63;  */

long FUN_1052a4c14(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return param_1;
  }
  func_0x0001052a694c();
  func_0x0001052a659c();
  func_0x0001052a66fc();
  func_0x0001052a6338();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052a4c54);
  (*pcVar1)();
}



/* Entry: 1052a4c64; end: 1052a4c93;  */

void FUN_1052a4c64(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x0001052a6690();
  while (uVar1 = unaff_x19, FUN_1052a4c94(), (uVar1 & 1) == 0) {
    func_0x0001052a6394();
  }
  return;
}



/* Entry: 1052a4c94; end: 1052a4c9b;  */

undefined8 FUN_1052a4c94(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x48) & 1) == 0) {
    func_0x0001052a61d0();
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 1052a4c9c; end: 1052a4cd7;  */

void FUN_1052a4c9c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  
  func_0x0001052a64dc();
  if ((bool)in_ZR) {
    *unaff_x19 = *param_2;
    *(undefined1 *)(unaff_x19 + 8) = 1;
  }
  else {
    FUN_1052a4cd8();
  }
  return;
}



/* Entry: 1052a4cd8; end: 1052a4d0b;  */

void FUN_1052a4cd8(long param_1)

{
  FUN_1052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1052a4d0c; end: 1052a4d27;  */

undefined8 FUN_1052a4d0c(void)

{
  undefined8 unaff_x19;
  
  func_0x0001052a6484();
  func_0x0001003b6ce0();
  func_0x000104bf3588();
  return unaff_x19;
}



/* Entry: 1052a4d28; end: 1052a4d4f;  */

void FUN_1052a4d28(void)

{
  func_0x0001052a62b8();
  func_0x0001052a67cc();
  func_0x0001052a61e8();
  func_0x0001052a66cc();
  return;
}



/* Entry: 1052a4d50; end: 1052a4da3;  */

void FUN_1052a4d50(void)

{
  func_0x0001052a6210();
  FUN_1052a4f84();
  return;
}



/* Entry: 1052a4da4; end: 1052a4f83;  */

undefined1 * FUN_1052a4da4(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int unaff_w21;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_a0;
  undefined1 auStack_98 [64];
  char cStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001052a61bc();
  if (param_3 != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10 != 0);
    do {
      func_0x0001052a6200();
    } while (extraout_w10_00 != 0);
  }
  uStack_c0 = param_2;
  lStack_b8 = param_3;
  FUN_1052a5030(auStack_98,&uStack_c0);
  func_0x0001052a688c();
  uVar1 = cStack_58 == '\x01';
  if ((bool)uVar1) {
    FUN_1052a50e8(auStack_98);
    FUN_1052808e4(auStack_50);
LAB_1052a4e34:
    func_0x0001052a6594();
    func_0x0001052a6550();
    lVar3 = lStack_a0;
    if (lStack_a0 == 0) goto LAB_1052a4e58;
  }
  else {
    func_0x0001052a6578();
    func_0x0001052a6410();
    func_0x0001052a6550();
    func_0x0001052a6854();
    lVar3 = extraout_x8;
    if ((bool)uVar1) {
      func_0x0001052a6844();
      goto LAB_1052a4e34;
    }
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
LAB_1052a4e58:
  func_0x0001052a6474();
  func_0x0001052a68a4();
  func_0x0001052a6540();
  func_0x0001052a6558();
  func_0x0001052a6370();
  func_0x0001052a6500();
  func_0x0001052a6648();
  func_0x0001052a51d4(auStack_98);
  do {
    func_0x0001052a67dc();
    func_0x0001052a6668();
    puVar2 = *(undefined1 **)(param_1 + 8);
    func_0x0001003b8370(puVar2);
    while( true ) {
      func_0x0001052a6164();
      if ((bool)uVar1) {
        return puVar2;
      }
      ___stack_chk_fail();
      func_0x0001052a64d0();
      func_0x0001052a6540();
      puVar2 = auStack_98;
      func_0x0001052a51d4();
      uVar1 = unaff_w21 == 1;
      if ((bool)uVar1) break;
      func_0x0001052a67dc();
      func_0x0001052a6668();
      uVar1 = unaff_w21 == 1;
      if (!(bool)uVar1) {
        func_0x0001052a6518();
        func_0x0001052a67d4();
        func_0x0001052a6984();
        if (puVar2 != (undefined1 *)0x0) {
          func_0x0001000df548();
        }
        return param_1;
      }
      func_0x0001052a6510();
      func_0x0001052a637c();
      func_0x0001052a63cc();
      func_0x0001052a6354();
      ___cxa_end_catch();
    }
    func_0x0001052a6510();
    func_0x0001052a63d8();
    func_0x0001052a68f8();
    func_0x0001052a65a8();
    func_0x0001052a64b0();
    func_0x0001052a6680();
    func_0x0001052a6640();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1052a4f84; end: 1052a4fa7;  */

void FUN_1052a4f84(long param_1)

{
  func_0x0001052a6984();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a4fa8; end: 1052a4fab;  */

undefined8 * FUN_1052a4fa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874870;
  FUN_1052a51fc(param_1 + 1);
  return param_1;
}



/* Entry: 1052a4fac; end: 1052a4fbf;  */

void FUN_1052a4fac(void)

{
  FUN_1052a5004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a4fc0; end: 1052a5003;  */

void FUN_1052a4fc0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0001052a6564();
  if (param_3 != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10 != 0);
  }
  FUN_1052a4da4(param_1 + 8);
  func_0x0001052a6718();
  return;
}



/* Entry: 1052a5004; end: 1052a502f;  */

undefined8 * FUN_1052a5004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110874870;
  FUN_1052a51fc(param_1 + 1);
  return param_1;
}



/* Entry: 1052a5030; end: 1052a50e7;  */

void FUN_1052a5030(void)

{
  code *pcVar1;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  undefined1 auStack_40 [32];
  
  func_0x0001052a6614();
  func_0x0001052a6990();
  FUN_1052a4d28();
  func_0x0001052a696c();
  FUN_1052a4d50();
  FUN_1052a4f84(auStack_40);
  func_0x0001052a67dc();
  func_0x0001052a62c8();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a6954();
  if (extraout_x9 != 0) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
  func_0x0001052a6584();
  FUN_1052a5138();
  func_0x0001052a6668();
  func_0x0001052a6530();
  if (extraout_x9_00 != 0) {
    func_0x0001052a63c0();
    func_0x0001052a67bc();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1052a50b4);
    (*pcVar1)();
  }
  FUN_1052a5170();
  func_0x0001052a6520();
  func_0x0001052a676c();
  return;
}



/* Entry: 1052a50e8; end: 1052a5137;  */

long FUN_1052a50e8(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return param_1;
  }
  func_0x0001052a694c();
  func_0x0001052a659c();
  func_0x0001052a66fc();
  func_0x0001052a6338();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1052a5128);
  (*pcVar1)();
}



/* Entry: 1052a5138; end: 1052a5167;  */

void FUN_1052a5138(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x0001052a6690();
  while (uVar1 = unaff_x19, FUN_1052a5168(), (uVar1 & 1) == 0) {
    func_0x0001052a6394();
  }
  return;
}



/* Entry: 1052a5168; end: 1052a516f;  */

undefined8 FUN_1052a5168(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x48) & 1) == 0) {
    func_0x0001052a61d0();
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 1052a5170; end: 1052a51bb;  */

void FUN_1052a5170(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001052a64dc();
  if ((bool)in_ZR) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    unaff_x19[2] = param_2[2];
    unaff_x19[1] = uVar2;
    *unaff_x19 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(unaff_x19 + 8) = 1;
  }
  else {
    FUN_1052a51bc();
  }
  return;
}



/* Entry: 1052a51bc; end: 1052a51fb;  */

void FUN_1052a51bc(long param_1)

{
  FUN_1052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 1052a51fc; end: 1052a5217;  */

undefined8 FUN_1052a51fc(void)

{
  undefined8 unaff_x19;
  
  func_0x0001052a6484();
  func_0x0001003b6ce0();
  func_0x000104bf3588();
  return unaff_x19;
}



/* Entry: 1052a5218; end: 1052a52c3;  */

void FUN_1052a5218(undefined8 param_1)

{
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x0001052a6710();
  if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
  FUN_1052a52c4(auStack_38,param_1,auStack_40);
  func_0x0001003b6c64(auStack_38);
  func_0x000104bf3564(auStack_40);
  if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052a6748();
  func_0x000104bddedc(auStack_40);
  func_0x0001052a6548();
  return;
}



/* Entry: 1052a52c4; end: 1052a5473;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1052a52c4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long alStack_58 [7];
  
  alStack_58[5] = 0;
  alStack_58[6] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  FUN_1052a5474(alStack_58 + 3,param_2,alStack_58 + 1);
  func_0x0001052a6960();
  FUN_1052a549c();
  FUN_1052a55c0(alStack_58 + 3);
  func_0x0001052a6764();
  func_0x0001003b69cc(alStack_58);
  func_0x0001052a6794(alStack_58[0]);
  uStack_68 = *param_3;
  *param_3 = 0;
  lStack_60 = alStack_58[0];
  alStack_58[0] = 0;
  lStack_70 = 0;
  lStack_78 = 0;
  lStack_88 = alStack_58[5] + 0x80;
  uStack_80 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_58[5];
  func_0x0001052a54c0();
  if ((int)lVar1 == 0) {
    func_0x0001052a55e4(&lStack_90,&uStack_68);
    lVar1 = lStack_90;
    lStack_90 = 0;
    lVar2 = *(long *)(alStack_58[5] + 200);
    *(long *)(alStack_58[5] + 200) = lVar1;
    if (lVar2 != 0) {
      func_0x0001052a6230();
      lVar1 = lStack_90;
      lStack_90 = 0;
      if (lVar1 != 0) {
        func_0x0001052a6230();
      }
    }
  }
  else {
    FUN_1052a549c(&lStack_78,alStack_58 + 5);
  }
  func_0x0001000df5a0(&lStack_88);
  if (lStack_78 != 0) {
    lStack_a0 = lStack_78;
    lStack_98 = lStack_70;
    if (lStack_70 != 0) {
      do {
        func_0x0001052a6200();
      } while (extraout_w10 != 0);
    }
    FUN_1052a54f0(&uStack_68,&lStack_a0);
    func_0x0001052a6528();
  }
  param_1[1] = alStack_58[4];
  *param_1 = alStack_58[3];
  alStack_58[3] = 0;
  alStack_58[4] = 0;
  FUN_1052a55c0(&lStack_78);
  FUN_1052a58f4(&uStack_68);
  func_0x0001052a6508();
  lVar1 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar1 != 0) {
    func_0x0001052a6230();
  }
  func_0x0001052a6784();
  return;
}



/* Entry: 1052a5474; end: 1052a549b;  */

void FUN_1052a5474(void)

{
  func_0x0001052a62b8();
  func_0x0001052a67cc();
  func_0x0001052a61e8();
  func_0x0001052a66cc();
  return;
}



/* Entry: 1052a549c; end: 1052a54ef;  */

void FUN_1052a549c(void)

{
  func_0x0001052a6210();
  FUN_1052a55c0();
  return;
}



/* Entry: 1052a54f0; end: 1052a55bf;  */

void FUN_1052a54f0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = *param_2;
  lStack_38 = param_2[1];
  if (lStack_38 == 0) {
    lStack_38 = 0;
  }
  else {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1052a56b4(param_1,&uStack_40);
  func_0x0001052a67f4();
  func_0x0001052a6804();
  func_0x0001003b8370(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1052a55c0; end: 1052a561f;  */

void FUN_1052a55c0(long param_1)

{
  func_0x0001052a6984();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a5620; end: 1052a5623;  */

undefined8 * FUN_1052a5620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108748c0;
  FUN_1052a58f4(param_1 + 1);
  return param_1;
}



/* Entry: 1052a5624; end: 1052a5637;  */

void FUN_1052a5624(void)

{
  FUN_1052a5688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a5638; end: 1052a5687;  */

void FUN_1052a5638(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001052a6200();
    } while (extraout_w10 != 0);
  }
  FUN_1052a54f0(param_1 + 8,&uStack_30);
  func_0x0001052a6528();
  return;
}



/* Entry: 1052a5688; end: 1052a56b3;  */

undefined8 * FUN_1052a5688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108748c0;
  FUN_1052a58f4(param_1 + 1);
  return param_1;
}



/* Entry: 1052a56b4; end: 1052a57e3;  */

undefined8 * FUN_1052a56b4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  int unaff_w21;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 auStack_c0 [9];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [32];
  
  puVar2 = auStack_c0;
  func_0x0001052a61bc();
  FUN_1052a5804(auStack_c0,param_2);
  FUN_1052a57e4(auStack_78,auStack_c0);
  func_0x000104bf351c(auStack_50,auStack_78);
  func_0x0001052a6370();
  func_0x0001052a6500();
  func_0x00010b9a8d98(auStack_78);
  FUN_1052a038c(auStack_c0);
  while( true ) {
    func_0x0001052a6164();
    if ((bool)in_ZR) {
      return puVar2;
    }
    ___stack_chk_fail();
    func_0x0001052a62f0();
    func_0x00010b9a8d98(auStack_78);
    puVar2 = auStack_c0;
    FUN_1052a038c();
    in_ZR = unaff_w21 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001052a6510();
    param_1 = (undefined8 *)*param_1;
    func_0x0001052a63d8();
    func_0x00010b99f5f8(auStack_c0,puVar2);
    uStack_68 = 2;
    uStack_60 = auStack_c0[0];
    auStack_c0[0] = 0;
    func_0x00010b9a4940(param_1,&uStack_68);
    func_0x000104bda914(&uStack_68);
    puVar2 = auStack_c0;
    func_0x000104bda93c(auStack_c0);
    ___cxa_end_catch();
  }
  func_0x0001052a6518();
  func_0x0001052a67d4();
  if (*(char *)((long)puVar2 + 0x40) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar2;
  }
  pcStack_c8 = FUN_1052a57e4;
  uStack_f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_1052c521c();
  func_0x0001003b2110(auStack_138,0x1138195c8);
  FUN_1052808e4(auStack_128,puVar2);
  uStack_118 = *(undefined8 *)((long)puVar2 + 0x18);
  uStack_110 = 5;
  func_0x000105280820(auStack_108,(undefined1 *)((long)puVar2 + 0x20));
  func_0x000104bdb9bc(auStack_130,auStack_138,auStack_128,3);
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_128 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_138);
  puVar4 = auStack_130;
  func_0x00010b9a8f60(extraout_x8);
  puVar3 = auStack_130;
  func_0x000104bdbf78();
  FUN_1052c537c(uStack_f8);
  if ((bool)uVar1) {
    return (undefined8 *)puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_128 + lVar8);
    iVar6 = (int)puVar4;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_138);
  puVar4 = puVar3;
  __Unwind_Resume(puVar3);
  pcStack_148 = FUN_1052c521c;
  uStack_168 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = lVar8;
  puStack_158 = puVar3;
  ppuStack_150 = &puStack_d0;
  if ((bRam00000001138195d0 & 1) == 0) {
    puVar4 = (undefined1 *)0x1138195d0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_1b8,"_djinni_record_Error");
      pcVar5 = "errorDomain";
      func_0x0001003a83dc(auStack_1c0,"errorDomain");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_1b0,auStack_1c0,pcVar5);
      pcVar5 = "errorCode";
      func_0x0001003a83dc(auStack_1c8,"errorCode");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_198,auStack_1c8,pcVar5);
      pcVar5 = "errorDescription";
      func_0x0001003a83dc(auStack_1d0,"errorDescription");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_180,auStack_1d0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138195c0,auStack_1b8,0,auStack_1b0,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_1b0 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1d0);
      func_0x0001003a8c94(auStack_1c8);
      func_0x0001003a8c94(auStack_1c0);
      func_0x0001003a8c94(auStack_1b8);
      puVar4 = (undefined1 *)0x1138195d0;
      ___cxa_guard_release(0x1138195d0);
    }
  }
  FUN_1052c537c(uStack_168);
  if ((bool)uVar1) {
    return (undefined8 *)(undefined1 *)0x1138195c0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return (undefined8 *)puVar4;
}



/* Entry: 1052a57e4; end: 1052a5803;  */

undefined1 * FUN_1052a57e4(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
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
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if (param_2[0x40] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052c521c();
  func_0x0001003b2110(auStack_78,0x1138195c8);
  FUN_1052808e4(auStack_68,param_2);
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  uStack_50 = 5;
  func_0x000105280820(auStack_48,param_2 + 0x20);
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar7 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar3 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_70;
  func_0x000104bdbf78();
  FUN_1052c537c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_88 = FUN_1052c521c;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar7;
  puStack_98 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam00000001138195d0 & 1) == 0) {
    puVar3 = (undefined1 *)0x1138195d0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_Error");
      pcVar4 = "errorDomain";
      func_0x0001003a83dc(auStack_100,"errorDomain");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar4);
      pcVar4 = "errorCode";
      func_0x0001003a83dc(auStack_108,"errorCode");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar4);
      pcVar4 = "errorDescription";
      func_0x0001003a83dc(auStack_110,"errorDescription");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138195c0,auStack_f8,0,auStack_f0,3);
      lVar7 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      puVar3 = (undefined1 *)0x1138195d0;
      ___cxa_guard_release(0x1138195d0);
    }
  }
  FUN_1052c537c(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138195c0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 1052a5804; end: 1052a58bb;  */

void FUN_1052a5804(void)

{
  code *pcVar1;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  undefined1 auStack_40 [32];
  
  func_0x0001052a6614();
  func_0x0001052a6990();
  FUN_1052a5474();
  func_0x0001052a696c();
  FUN_1052a549c();
  FUN_1052a55c0(auStack_40);
  func_0x0001052a67f4();
  func_0x0001052a62c8();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a6954();
  if (extraout_x9 != 0) {
    do {
      func_0x0001052a61ac();
    } while (extraout_w11 != 0);
  }
  func_0x0001052a6584();
  FUN_1052a58bc();
  func_0x0001052a6804();
  func_0x0001052a6530();
  if (extraout_x9_00 != 0) {
    func_0x0001052a63c0();
    func_0x0001052a67bc();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1052a5888);
    (*pcVar1)();
  }
  FUN_1052a07e8();
  func_0x0001052a6520();
  func_0x0001052a6784();
  return;
}



/* Entry: 1052a58bc; end: 1052a58eb;  */

void FUN_1052a58bc(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x0001052a6690();
  while (uVar1 = unaff_x19, FUN_1052a58ec(), (uVar1 & 1) == 0) {
    func_0x0001052a6394();
  }
  return;
}



/* Entry: 1052a58ec; end: 1052a58f3;  */

undefined8 FUN_1052a58ec(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x48) & 1) == 0) {
    func_0x0001052a61d0();
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 1052a58f4; end: 1052a590f;  */

undefined8 FUN_1052a58f4(void)

{
  undefined8 unaff_x19;
  
  func_0x0001052a6484();
  func_0x0001003b6ce0();
  func_0x000104bf3588();
  return unaff_x19;
}



/* Entry: 1052a5910; end: 1052a597f;  */

undefined8 FUN_1052a5910(void)

{
  int iVar1;
  
  if ((bRam00000001130cc3e0 & 1) == 0) {
    iVar1 = 0x130cc3e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052a097c();
      func_0x00010b9911c4(0x1130cc3d0);
      ___cxa_guard_release(0x1130cc3e0);
    }
  }
  return 0x1130cc3d0;
}



/* Entry: 1052a5980; end: 1052a59db;  */

void FUN_1052a5980(void)

{
  func_0x0001052a6920();
  return;
}



/* Entry: 1052a59dc; end: 1052a5a23;  */

void FUN_1052a59dc(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a5a24; end: 1052a5b5b;  */

long FUN_1052a5a24(long param_1,long param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  int iVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x0001052a61bc();
  func_0x0001052a6454();
  while( true ) {
    func_0x0001052a6164();
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
    iVar2 = (int)param_3;
    if (iVar2 == 0) break;
    in_ZR = iVar2 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      func_0x0001052a68d8();
      func_0x0001052a65f0();
      uVar3 = 0;
      lVar1 = param_2;
      if (extraout_x8 != 0) {
        do {
          func_0x0001052a65e0();
          uVar3 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      uStack_48 = uVar3;
      func_0x0001052a6944();
      func_0x0001052a6638();
      if ((lStack_60 != 0) && (*(long *)(lStack_60 + 0x10) != 0)) {
        do {
          func_0x0001052a61ac();
        } while (extraout_w11_00 != 0);
      }
      func_0x0001052a63a0();
      func_0x0001052a6894();
      func_0x0001052a6918();
    }
    else {
      in_ZR = iVar2 == 2;
      if (!(bool)in_ZR) goto LAB_1052a5b50;
      ___cxa_begin_catch();
      func_0x0001052a68e0();
      func_0x0001052a625c();
      lVar1 = param_2;
      func_0x0001052a6388();
      func_0x0001052a64a0();
      func_0x0001052a63e4();
      func_0x0001052a6900();
      func_0x0001052a6710();
      func_0x0001052a6824();
      func_0x0001052a6448();
      func_0x0001052a65bc();
      param_3 = auStack_50;
      func_0x0001052a64b0();
      func_0x0001052a6638();
      func_0x0001052a680c();
      func_0x0001052a67c4();
      if ((lStack_68 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
        do {
          func_0x0001052a61ac();
        } while (extraout_w11_01 != 0);
      }
      func_0x0001052a62e0();
      func_0x0001052a67fc();
      func_0x0001052a6548();
      func_0x0001052a6910();
      lStack_60 = param_2;
    }
    ___cxa_end_catch();
    param_2 = lVar1;
  }
SUB_10529fe38:
  __Unwind_Resume();
  param_2 = param_2 + 0x10;
  func_0x0001005f1e70();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return param_1;
LAB_1052a5b50:
  do {
    func_0x000104bd46a0();
  } while ((int)param_3 != 0);
  goto SUB_10529fe38;
}



/* Entry: 1052a5b5c; end: 1052a5b77;  */

void FUN_1052a5b5c(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a5b78; end: 1052a5caf;  */

long FUN_1052a5b78(long param_1,long param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  int iVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x0001052a61bc();
  func_0x0001052a6454();
  while( true ) {
    func_0x0001052a6164();
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
    iVar2 = (int)param_3;
    if (iVar2 == 0) break;
    in_ZR = iVar2 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      func_0x0001052a68d8();
      func_0x0001052a65f0();
      uVar3 = 0;
      lVar1 = param_2;
      if (extraout_x8 != 0) {
        do {
          func_0x0001052a65e0();
          uVar3 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      uStack_48 = uVar3;
      func_0x0001052a6944();
      func_0x0001052a6638();
      if ((lStack_60 != 0) && (*(long *)(lStack_60 + 0x10) != 0)) {
        do {
          func_0x0001052a61ac();
        } while (extraout_w11_00 != 0);
      }
      func_0x0001052a63a0();
      func_0x0001052a6894();
      func_0x0001052a6918();
    }
    else {
      in_ZR = iVar2 == 2;
      if (!(bool)in_ZR) goto LAB_1052a5ca4;
      ___cxa_begin_catch();
      func_0x0001052a68e0();
      func_0x0001052a625c();
      lVar1 = param_2;
      func_0x0001052a6388();
      func_0x0001052a64a0();
      func_0x0001052a63e4();
      func_0x0001052a6900();
      func_0x0001052a6710();
      func_0x0001052a6824();
      func_0x0001052a6448();
      func_0x0001052a65bc();
      param_3 = auStack_50;
      func_0x0001052a64b0();
      func_0x0001052a6638();
      func_0x0001052a680c();
      func_0x0001052a67c4();
      if ((lStack_68 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
        do {
          func_0x0001052a61ac();
        } while (extraout_w11_01 != 0);
      }
      func_0x0001052a62e0();
      func_0x0001052a67fc();
      func_0x0001052a6548();
      func_0x0001052a6910();
      lStack_60 = param_2;
    }
    ___cxa_end_catch();
    param_2 = lVar1;
  }
SUB_10529fe38:
  __Unwind_Resume();
  param_2 = param_2 + 0x10;
  func_0x0001005f1e70();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return param_1;
LAB_1052a5ca4:
  do {
    func_0x000104bd46a0();
  } while ((int)param_3 != 0);
  goto SUB_10529fe38;
}



/* Entry: 1052a5cb0; end: 1052a5ccb;  */

void FUN_1052a5cb0(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a5ccc; end: 1052a5e03;  */

long FUN_1052a5ccc(long param_1,long param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  int iVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  func_0x0001052a61bc();
  func_0x0001052a6454();
  while( true ) {
    func_0x0001052a6164();
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
    iVar2 = (int)param_3;
    if (iVar2 == 0) break;
    in_ZR = iVar2 == 3;
    if ((bool)in_ZR) {
      ___cxa_begin_catch();
      func_0x0001052a68d8();
      func_0x0001052a65f0();
      uVar3 = 0;
      lVar1 = param_2;
      if (extraout_x8 != 0) {
        do {
          func_0x0001052a65e0();
          uVar3 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      uStack_48 = uVar3;
      func_0x0001052a6944();
      func_0x0001052a6638();
      if ((lStack_60 != 0) && (*(long *)(lStack_60 + 0x10) != 0)) {
        do {
          func_0x0001052a61ac();
        } while (extraout_w11_00 != 0);
      }
      func_0x0001052a63a0();
      func_0x0001052a6894();
      func_0x0001052a6918();
    }
    else {
      in_ZR = iVar2 == 2;
      if (!(bool)in_ZR) goto LAB_1052a5df8;
      ___cxa_begin_catch();
      func_0x0001052a68e0();
      func_0x0001052a625c();
      lVar1 = param_2;
      func_0x0001052a6388();
      func_0x0001052a64a0();
      func_0x0001052a63e4();
      func_0x0001052a6900();
      func_0x0001052a6710();
      func_0x0001052a6824();
      func_0x0001052a6448();
      func_0x0001052a65bc();
      param_3 = auStack_50;
      func_0x0001052a64b0();
      func_0x0001052a6638();
      func_0x0001052a680c();
      func_0x0001052a67c4();
      if ((lStack_68 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
        do {
          func_0x0001052a61ac();
        } while (extraout_w11_01 != 0);
      }
      func_0x0001052a62e0();
      func_0x0001052a67fc();
      func_0x0001052a6548();
      func_0x0001052a6910();
      lStack_60 = param_2;
    }
    ___cxa_end_catch();
    param_2 = lVar1;
  }
SUB_10529fe38:
  __Unwind_Resume();
  param_2 = param_2 + 0x10;
  func_0x0001005f1e70();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return param_1;
LAB_1052a5df8:
  do {
    func_0x000104bd46a0();
  } while ((int)param_3 != 0);
  goto SUB_10529fe38;
}



/* Entry: 1052a5e04; end: 1052a5e1f;  */

void FUN_1052a5e04(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a5e20; end: 1052a5e7b;  */

void FUN_1052a5e20(void)

{
  func_0x0001052a6920();
  return;
}



/* Entry: 1052a5e7c; end: 1052a5f6f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1052a5e7c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  long *plVar2;
  int iVar3;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined1 auStack_e0 [8];
  long alStack_d8 [4];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  long alStack_60 [6];
  
  func_0x0001052a61bc();
  func_0x0001003a8364();
  func_0x0001052a625c();
  alStack_60[1] = 0;
  alStack_60[0] = param_2;
  func_0x0001052a6388();
  func_0x0001003a9204(alStack_78);
  func_0x0001003ac750(alStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_78);
  func_0x0001052a6710();
  lVar1 = alStack_78[0];
  lStack_88 = alStack_60[0];
  alStack_60[0] = 0;
  func_0x0001052a6448();
  alStack_60[2] = 2;
  alStack_60[3] = uStack_80;
  uStack_80 = 0;
  plVar2 = alStack_60 + 2;
  func_0x0001052a64b0();
  func_0x000104bda914(alStack_60 + 2);
  func_0x0001052a680c();
  func_0x0001052a67c4();
  iVar3 = (int)plVar2;
  if ((alStack_78[0] != 0) && (*(long *)(alStack_78[0] + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
      iVar3 = (int)plVar2;
    } while (extraout_w11 != 0);
  }
  func_0x0001052a62e0();
  func_0x0001052a67fc();
  func_0x0001052a6548();
  plVar2 = alStack_60;
  func_0x0001003a8c94();
  func_0x0001052a6164();
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_b0 = lVar1;
  pcStack_98 = FUN_1052a5f70;
  uStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001052a623c();
  uStack_b8 = extraout_x8_00;
  func_0x000104bf2d3c(alStack_d8);
  alStack_d8[1] = 2;
  alStack_d8[2] = 0;
  if (plVar2[2] != 0) {
    do {
      func_0x0001052a65e0();
      alStack_d8[2] = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  plVar2 = alStack_d8 + 1;
  func_0x00010b9a4940();
  func_0x000104bda914(alStack_d8 + 1);
  iVar3 = (int)plVar2;
  if ((alStack_d8[0] != 0) && (*(long *)(alStack_d8[0] + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
      iVar3 = (int)plVar2;
    } while (extraout_w11_01 != 0);
  }
  func_0x0001052a6748();
  func_0x000104bddedc(auStack_e0);
  plVar2 = alStack_d8;
  func_0x000104bf3564();
  func_0x0001052a6198(uStack_b8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar3 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    plVar2 = plVar2 + 2;
    func_0x0001005f1e70();
    if (plVar2 != (long *)0x0) {
      func_0x0001000df548();
    }
    return extraout_x8;
  }
  return plVar2;
}



/* Entry: 1052a5f70; end: 1052a6027;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1052a5f70(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  int iVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_50 [8];
  long alStack_48 [4];
  undefined8 uStack_28;
  
  func_0x0001052a623c();
  uStack_28 = extraout_x8;
  func_0x000104bf2d3c(alStack_48);
  alStack_48[1] = 2;
  alStack_48[2] = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    do {
      func_0x0001052a65e0();
      alStack_48[2] = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  plVar1 = alStack_48 + 1;
  func_0x00010b9a4940();
  func_0x000104bda914(alStack_48 + 1);
  iVar2 = (int)plVar1;
  if ((alStack_48[0] != 0) && (*(long *)(alStack_48[0] + 0x10) != 0)) {
    do {
      func_0x0001052a61ac();
      iVar2 = (int)plVar1;
    } while (extraout_w11_00 != 0);
  }
  func_0x0001052a6748();
  func_0x000104bddedc(auStack_50);
  plVar1 = alStack_48;
  func_0x000104bf3564();
  func_0x0001052a6198(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar2 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    plVar1 = plVar1 + 2;
    func_0x0001005f1e70();
    if (plVar1 != (long *)0x0) {
      func_0x0001000df548();
    }
    return param_1;
  }
  return plVar1;
}



/* Entry: 1052a6028; end: 1052a6047;  */

void FUN_1052a6028(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1052a6048; end: 1052a605b;  */

void FUN_1052a6048(void)

{
  FUN_1052a612c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a605c; end: 1052a606f;  */

void FUN_1052a605c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052a6064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052a6070; end: 1052a6083;  */

void FUN_1052a6070(void)

{
  FUN_1052a6094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052a6084; end: 1052a6093;  */

undefined1  [16] FUN_1052a6084(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052a6094; end: 1052a612b;  */

void FUN_1052a6094(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_110874a00;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x00010529fe38(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052a612c; end: 1052a613b;  */

void FUN_1052a612c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108749b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052a613c; end: 1052a6163;  */

long * FUN_1052a613c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 1052a6164; end: 1052a699b;  */

void FUN_1052a6164(void)

{
  return;
}



/* Entry: 1052a699c; end: 1052a6d9b;  */

void FUN_1052a699c(ulong param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052b1730();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9bf0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9bf0) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052a6a00;
  if ((bRam00000001136b9c00 & 1) == 0) goto LAB_1052a6a30;
  while( true ) {
    func_0x000108b80888(0x1136b9c38,param_1);
LAB_1052a6a00:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) break;
    ___stack_chk_fail();
LAB_1052a6a30:
    iVar2 = 0x136b9c00;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052a6d9c();
      pcVar3 = "clearAllCachedContent";
      func_0x0001003a83dc(&uStack_118,"clearAllCachedContent");
      func_0x0001003b166c(auStack_138);
      FUN_1052b189c();
      func_0x0001003adcc0(auStack_c0,pcVar3);
      func_0x000104bdbd48(auStack_128,auStack_138,auStack_c0,1);
      uStack_b0 = uStack_118;
      uStack_118 = 0;
      func_0x0001003aef98(auStack_a8,auStack_128);
      func_0x0001003a83dc(&uStack_140,"estimateTotalDiskUsage");
      func_0x000104bef5f8();
      func_0x0001052a72fc(auStack_150);
      uStack_98 = uStack_140;
      uStack_140 = 0;
      func_0x0001003aef98(auStack_90,auStack_150);
      func_0x0001003a83dc(&uStack_158,"getDiskSizeInBytes");
      if ((bRam00000001136b9c08 & 1) == 0) {
        uVar6 = 0x1136b9c08;
        ___cxa_guard_acquire();
        if ((int)uVar6 != 0) {
          FUN_1052a7154();
          uVar7 = uVar6;
          FUN_1052ab3d4();
          func_0x00010b9912a0(0x1136b9c48,uVar6,uVar7);
          ___cxa_guard_release(0x1136b9c08);
        }
      }
      func_0x0001052a72fc(auStack_168,0x1136b9c48);
      uStack_80 = uStack_158;
      uStack_158 = 0;
      func_0x0001003aef98(auStack_78,auStack_168);
      pcVar3 = "evictLRUBy";
      func_0x0001003a83dc(&uStack_170,"evictLRUBy");
      func_0x0001003b166c(auStack_190);
      func_0x000104bdbd7c();
      puVar4 = auStack_e0;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x000104bef5f8();
      func_0x0001003adcc0(auStack_d0,puVar4);
      func_0x000104bdbd48(auStack_180,auStack_190,auStack_e0,2);
      uStack_68 = uStack_170;
      uStack_170 = 0;
      func_0x0001003aef98(auStack_60,auStack_180);
      pcVar3 = "evictUntilHaving";
      func_0x0001003a83dc(&uStack_198,"evictUntilHaving");
      if ((bRam00000001136b9c10 & 1) == 0) {
        pcVar3 = (char *)0x1136b9c10;
        ___cxa_guard_acquire();
        if ((int)pcVar3 != 0) {
          func_0x000104bef5f8();
          func_0x00010b9911c4(0x1136b9c58);
          pcVar3 = (char *)0x1136b9c10;
          ___cxa_guard_release(0x1136b9c10);
        }
      }
      func_0x000104bdbd7c();
      puVar4 = auStack_110;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_1052a7154();
      puVar5 = auStack_100;
      func_0x0001003adcc0(puVar5,puVar4);
      func_0x000104bef5f8();
      func_0x0001003adcc0(auStack_f0,puVar5);
      func_0x000104bdbd48(auStack_1a8,0x1136b9c58,auStack_110,3);
      uStack_50 = uStack_198;
      uStack_198 = 0;
      func_0x0001003aef98(auStack_48,auStack_1a8);
      func_0x000104bdbd44(0x1136b9c38,0x1136b9c18,1,&uStack_b0,5);
      lVar8 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a8 + lVar8 + -8);
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x18);
      func_0x0001052a72e0(auStack_1a8);
      lVar8 = 0x28;
      do {
        func_0x0001003adc18(auStack_110 + lVar8);
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != -8);
      func_0x0001003a8c94(&uStack_198);
      func_0x0001052a72e0(auStack_180);
      lVar8 = 0x18;
      do {
        func_0x0001003adc18(auStack_e0 + lVar8);
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != -8);
      func_0x0001052a72e0(auStack_190);
      func_0x0001003a8c94(&uStack_170);
      func_0x0001052a72e0(auStack_168);
      func_0x0001003a8c94(&uStack_158);
      func_0x0001052a72e0(auStack_150);
      func_0x0001003a8c94(&uStack_140);
      func_0x0001052a72e0(auStack_128);
      func_0x0001052a72e0(auStack_c0);
      func_0x0001052a72e0(auStack_138);
      func_0x0001003a8c94(&uStack_118);
      ___cxa_guard_release(0x1136b9c00);
    }
  }
  return;
}



/* Entry: 1052a6d9c; end: 1052a6e97;  */

void FUN_1052a6d9c(void)

{
  int iVar1;
  
  if ((bRam00000001136b9c20 & 1) == 0) {
    iVar1 = 0x136b9c20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1136b9c18,"_djinni_interface_CacheController");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1136b9c20);
      return;
    }
  }
  return;
}



/* Entry: 1052a6e98; end: 1052a6eaf;  */

void FUN_1052a6e98(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1052a6eb0; end: 1052a6f03;  */

void FUN_1052a6eb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 1052a6f04; end: 1052a6fbb;  */

undefined8 * FUN_1052a6f04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001052a6f94(&uStack_30);
  return param_1;
}



/* Entry: 1052a6fbc; end: 1052a70e3;  */

undefined8 FUN_1052a6fbc(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  puStack_30 = (undefined8 *)0x0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1052a6eb0(&puStack_40,param_1,&uStack_50);
  FUN_1052a6f04(&puStack_30,&puStack_40);
  func_0x0001052a6f94(&puStack_40);
  func_0x0001052a6f94(&uStack_50);
  puStack_40 = puStack_30 + 8;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  puStack_60 = puStack_30;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1052a70e4(puStack_30 + 2,&puStack_40,&puStack_60);
  func_0x0001052a6f94(&puStack_60);
  if (puStack_30[0x10] == 0) {
    uVar5 = *puStack_30;
    func_0x0001000df5a0(&puStack_40);
    func_0x0001052a6f94(&puStack_30);
    return uVar5;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_68);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052a7098);
  (*pcVar4)();
}



/* Entry: 1052a70e4; end: 1052a7123;  */

void FUN_1052a70e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_1052a7124(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 1052a7124; end: 1052a712b;  */

bool FUN_1052a7124(long *param_1)

{
  bool bVar1;
  undefined8 uStack_28;
  
  if ((*(byte *)(*param_1 + 8) & 1) == 0) {
    uStack_28 = 0;
    bVar1 = *(long *)(*param_1 + 0x80) != 0;
    __ZNSt13exception_ptrD1Ev(&uStack_28);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1052a712c; end: 1052a7153;  */

long FUN_1052a712c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052a7154; end: 1052a71ab;  */

undefined8 FUN_1052a7154(void)

{
  int iVar1;
  
  if ((bRam00000001130cc3f8 & 1) == 0) {
    iVar1 = 0x130cc3f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc3e8);
      ___cxa_guard_release(0x1130cc3f8);
    }
  }
  return 0x1130cc3e8;
}



/* Entry: 1052a71ac; end: 1052a71d3;  */

void FUN_1052a71ac(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1052a71d4; end: 1052a72a7;  */

void FUN_1052a71d4(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plStack_60;
  undefined1 auStack_58 [24];
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  func_0x0001003a8364();
  (**(code **)(*param_2 + 0x10))();
  uStack_38 = 0;
  plStack_40 = param_2;
  func_0x0001003a91d4("C++: {}");
  func_0x0001003a9204(auStack_58);
  func_0x0001003ac750(&plStack_40,plVar1,auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  plStack_60 = plStack_40;
  plStack_40 = (long *)0x0;
  func_0x00010b99f560(auStack_58,&plStack_60);
  func_0x00010b99ff08(uVar2,auStack_58);
  func_0x000104bda93c(auStack_58);
  func_0x0001003a8c94(&plStack_60);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  func_0x0001003a8c94(&plStack_40);
  return;
}



/* Entry: 1052a72a8; end: 1052a72df;  */

void FUN_1052a72a8(undefined8 *param_1,long param_2,long param_3)

{
  func_0x00010b99febc(*(undefined8 *)(param_3 + 0x18),param_2 + 0x10);
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1052a72e0; end: 1052a730f;  */

void FUN_1052a72e0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  func_0x0001003adc0c();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return;
}



/* Entry: 1052a7310; end: 1052a737f;  */

void FUN_1052a7310(char *param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  cVar1 = (char)lStack_28 + '\x18';
  func_0x00010b9a9608();
  lVar2 = lStack_28 + 0x28;
  FUN_1052a7380();
  *param_1 = cVar1;
  *(long *)(param_1 + 8) = lVar2;
  *(ulong *)(param_1 + 0x10) = param_3 & 0xff;
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 1052a7380; end: 1052a73af;  */

undefined1  [16] FUN_1052a7380(long param_1)

{
  undefined1 auVar1 [16];
  
  if (*(byte *)(param_1 + 8) < 2) {
    return ZEXT816(0);
  }
  func_0x000108b80aec();
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1052a73b0; end: 1052a74eb;  */

undefined8 FUN_1052a73b0(undefined8 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818d68 & 1) == 0) {
    iVar1 = 0x13818d68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_CachePolicy");
      pcVar2 = "authoritative";
      func_0x0001003a83dc(auStack_68,"authoritative");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "expiration";
      func_0x0001003a83dc(auStack_70,"expiration");
      FUN_1052a74ec();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818d58,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x18);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      ___cxa_guard_release(0x113818d68);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return 0x113818d58;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc410 & 1) == 0) {
    iVar1 = 0x130cc410;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000108b80b0c();
      func_0x00010b990784(0x1130cc400);
      ___cxa_guard_release(0x1130cc410);
    }
  }
  return 0x1130cc400;
}



/* Entry: 1052a74ec; end: 1052a7547;  */

undefined8 FUN_1052a74ec(void)

{
  int iVar1;
  
  if ((bRam00000001130cc410 & 1) == 0) {
    iVar1 = 0x130cc410;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000108b80b0c();
      func_0x00010b990784(0x1130cc400);
      ___cxa_guard_release(0x1130cc410);
    }
  }
  return 0x1130cc400;
}



/* Entry: 1052a7548; end: 1052a7917;  */

void FUN_1052a7548(long *param_1,undefined *param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined **ppuVar8;
  long lVar9;
  undefined *in_register_00005008;
  undefined8 uStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *apuStack_120 [2];
  code *pcStack_110;
  undefined *apuStack_108 [2];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined **appuStack_c8 [2];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_68;
  
  func_0x0001052a83e4();
  uStack_68 = extraout_x8;
  if ((bRam00000001136b9c70 & 1) == 0) {
    iVar6 = 0x136b9c70;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_1052a7fb4();
      FUN_1052a7c78(0);
      FUN_1052a7c78(1);
      func_0x00010b9941f8(appuStack_c8);
      func_0x00010b993b40(&ppuStack_98,appuStack_c8[0],0x113818d88);
      if (((ulong)pcStack_88 & 1) == 0) goto LAB_1052a7878;
      func_0x0001003adcc0(0x1136b9c80,&ppuStack_98);
      func_0x0001003b12dc(&ppuStack_98);
      func_0x000104bdc2fc(appuStack_c8);
      ___cxa_guard_release(0x1136b9c70);
    }
  }
  func_0x0001003b2110(auStack_f8,0x1136b9c88);
  pcStack_110 = FUN_1052a7a28;
  func_0x0001052a8414();
  apuStack_108[0] = param_2;
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001052a8374();
    } while (extraout_w10 != 0);
  }
  FUN_1052a7918(appuStack_c8,&pcStack_110);
  pcStack_128 = FUN_1052a7b1c;
  func_0x0001052a8414();
  apuStack_120[0] = param_2;
  if (extraout_x8_01 != 0) {
    do {
      func_0x0001052a8374();
    } while (extraout_w10_00 != 0);
  }
  FUN_1052a7918(auStack_b8,&pcStack_128);
  func_0x0001052a8414();
  if (extraout_x8_02 != 0) {
    do {
      func_0x0001052a8374();
    } while (extraout_w10_01 != 0);
  }
  pcStack_e8 = FUN_1052a7bf0;
  uStack_138 = 0;
  uStack_130 = 0;
  ppuVar7 = (undefined **)0x40;
  __Znwm();
  ppuStack_98 = (undefined **)FUN_1052a80ec;
  ppuStack_90 = &PTR_FUN_110874a88;
  pcStack_88 = FUN_1052a7bf0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puStack_80 = param_2;
  func_0x00010b9ac22c();
  ppuStack_d0 = ppuVar7;
  func_0x0001052a83cc();
  ppuVar1 = ppuVar7 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
    if (bVar3) {
      *ppuVar1 = *ppuVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuStack_98 = ppuVar7;
  func_0x00010b9a8ef8(auStack_a8,&ppuStack_98);
  func_0x000104bda388(&ppuStack_98);
  func_0x000104bda3d0(&ppuStack_d0);
  FUN_1052a0348(&uStack_e0);
  func_0x000104bdb9bc(auStack_f0,auStack_f8,appuStack_c8,3);
  lVar9 = 0x20;
  do {
    func_0x00010b9a8d98((long)appuStack_c8 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar5 = lVar9 == -0x10;
  } while (!(bool)uVar5);
  FUN_1052a0348(&uStack_138);
  FUN_1052a0348(apuStack_120);
  FUN_1052a0348(apuStack_108);
  func_0x0001003b1f60(auStack_f8);
  ppuVar7 = (undefined **)0x50;
  __Znwm();
  ppuVar8 = ppuVar7 + 1;
  *ppuVar8 = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  *ppuVar7 = (undefined *)&PTR_DAT_110874ab8;
  ppuVar1 = ppuVar7 + 3;
  func_0x00010b9ace44(ppuVar1,auStack_f0);
  ppuVar7[3] = (undefined *)&PTR_DAT_110874b08;
  func_0x0001052a8414();
  ppuVar7[9] = in_register_00005008;
  ppuVar7[8] = param_2;
  if (extraout_x8_03 != 0) {
    do {
      func_0x0001052a8374();
    } while (extraout_w10_02 != 0);
  }
  appuStack_c8[0] = ppuVar1;
  if ((ppuVar7[5] == (undefined *)0x0) || (uVar5 = *(long *)(ppuVar7[5] + 8) == -1, (bool)uVar5)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar3) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppuStack_98 = ppuVar1;
    ppuStack_90 = ppuVar7;
    func_0x0001003a8180(ppuVar7 + 4,&ppuStack_98);
    func_0x0001003a90c4(&ppuStack_98);
    if (ppuVar7[5] != (undefined *)0x0) goto LAB_1052a77b4;
  }
  else {
LAB_1052a77b4:
    do {
      func_0x0001052a8374();
    } while (extraout_w10_03 != 0);
  }
  *param_1 = (long)ppuVar1;
  FUN_1052a8338(appuStack_c8);
  func_0x000104bdbf78(auStack_f0);
  func_0x0001052a83a0(uStack_68);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_1052a7878:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1052a7880);
  (*pcVar4)();
}



/* Entry: 1052a7918; end: 1052a7a27;  */

void FUN_1052a7918(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  undefined8 extraout_x8;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x0001052a83e4();
  uVar13 = param_2[1];
  uVar12 = *param_2;
  uVar11 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  pcVar4 = (code *)0x40;
  uStack_48 = extraout_x8;
  __Znwm();
  pcStack_78 = FUN_1052a8030;
  ppuStack_70 = &PTR_FUN_110874a68;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_68 = uVar12;
  uStack_60 = uVar13;
  uStack_58 = uVar11;
  func_0x00010b9ac22c();
  pcStack_80 = pcVar4;
  func_0x0001052a83bc();
  pcVar1 = pcVar4 + 8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *(long *)pcVar1 = *(long *)pcVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppcVar9 = &pcStack_78;
  pcStack_78 = pcVar4;
  func_0x00010b9a8ef8(param_1);
  func_0x000104bda388(&pcStack_78);
  func_0x000104bda3d0(&pcStack_80);
  puVar5 = &uStack_90;
  FUN_1052a0348();
  func_0x0001052a83a0(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppcVar9 == 0) {
    func_0x0001052a83b4();
  }
  else {
    func_0x0001052a83bc();
    __ZdlPv(pcVar4);
  }
  puVar6 = puVar5;
  func_0x000104bd46a0();
  puVar7 = puVar6;
  func_0x0001052a8364();
  puVar8 = puVar7;
  func_0x0001052a83f4();
  func_0x00010b9abfa4(ppcVar9,2);
  plVar10 = (long *)*puVar6;
  FUN_1052a9f64(auStack_158,puVar7);
  FUN_10529fd64(auStack_168,puVar8);
  FUN_1052a7310(auStack_180,ppcVar9);
  (**(code **)(*plVar10 + 0x10))(auStack_138,plVar10,auStack_158,auStack_168,auStack_180);
  func_0x00010529fde0(auStack_168);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  FUN_1052a036c(puVar5,auStack_138);
  FUN_1052a038c(auStack_138);
  return;
}



/* Entry: 1052a7a28; end: 1052a7b1b;  */

void FUN_1052a7a28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [72];
  
  puVar1 = param_1;
  FUN_1052a8364();
  puVar2 = puVar1;
  func_0x0001052a83f4();
  func_0x00010b9abfa4(param_2,2);
  plVar3 = (long *)*param_1;
  FUN_1052a9f64(auStack_a8,puVar1);
  FUN_10529fd64(auStack_b8,puVar2);
  FUN_1052a7310(auStack_d0,param_2);
  (**(code **)(*plVar3 + 0x10))(auStack_88,plVar3,auStack_a8,auStack_b8,auStack_d0);
  func_0x00010529fde0(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  FUN_1052a036c(auStack_88);
  FUN_1052a038c(auStack_88);
  return;
}



/* Entry: 1052a7b1c; end: 1052a7bef;  */

void FUN_1052a7b1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [72];
  
  puVar1 = param_1;
  FUN_1052a8364();
  puVar2 = puVar1;
  func_0x0001052a83f4();
  plVar3 = (long *)*param_1;
  FUN_1052a9f64(auStack_a8,puVar1);
  FUN_10529fd64(auStack_b8,puVar2);
  (**(code **)(*plVar3 + 0x18))(auStack_88,plVar3,auStack_a8,auStack_b8);
  func_0x00010529fde0(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  FUN_1052a036c(auStack_88);
  FUN_1052a038c(auStack_88);
  return;
}



/* Entry: 1052a7bf0; end: 1052a7c77;  */

void FUN_1052a7bf0(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [48];
  
  FUN_1052a8364();
  plVar1 = (long *)*param_1;
  FUN_1052a9f64(auStack_70);
  (**(code **)(*plVar1 + 0x20))(auStack_50,plVar1,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  FUN_1052ab518(auStack_50);
  FUN_1052a8008(auStack_50);
  return;
}



/* Entry: 1052a7c78; end: 1052a7f17;  */

void FUN_1052a7c78(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 unaff_x20;
  long lVar6;
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x0001052a83e4();
  uStack_38 = extraout_x8;
  FUN_1052a699c();
  FUN_1052b36d4(param_1);
  FUN_1052b53d4(param_1);
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9c68);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9c68) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052a7ce4;
  if ((bRam00000001136b9c78 & 1) == 0) goto LAB_1052a7d08;
  while( true ) {
    func_0x000108b80888(0x1136b9c90,param_1);
LAB_1052a7ce4:
    func_0x0001052a83a0(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052a7d08:
    iVar2 = 0x136b9c78;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052a7fb4();
      pcVar3 = "setCachePolicy";
      func_0x0001003a83dc(&uStack_e8,"setCachePolicy");
      FUN_1052a097c();
      func_0x0001052a8400();
      puVar4 = auStack_b0;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_1052b39bc();
      puVar5 = auStack_a0;
      func_0x0001003adcc0(puVar5,puVar4);
      FUN_1052a73b0();
      func_0x0001003adcc0(auStack_90,puVar5);
      func_0x000104bdbd48(auStack_f8,unaff_x20,auStack_b0,3);
      uStack_80 = uStack_e8;
      uStack_e8 = 0;
      func_0x0001003aef98(auStack_78,auStack_f8);
      pcVar3 = "removeCachePolicy";
      func_0x0001003a83dc(&uStack_100,"removeCachePolicy");
      FUN_1052a097c();
      func_0x0001052a8400();
      puVar4 = auStack_d0;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_1052b39bc();
      func_0x0001003adcc0(auStack_c0,puVar4);
      func_0x000104bdbd48(auStack_110,unaff_x20,auStack_d0,2);
      uStack_68 = uStack_100;
      uStack_100 = 0;
      func_0x0001003aef98(auStack_60,auStack_110);
      pcVar3 = "lookupContent";
      func_0x0001003a83dc(&uStack_118,"lookupContent");
      FUN_1052ab614();
      func_0x0001052a8400();
      func_0x0001003adcc0(auStack_e0,pcVar3);
      func_0x000104bdbd48(auStack_128,unaff_x20,auStack_e0,1);
      uStack_50 = uStack_118;
      uStack_118 = 0;
      func_0x0001003aef98(auStack_48,auStack_128);
      func_0x000104bdbd44(0x1136b9c90,0x113818d88,1,&uStack_80,3);
      lVar6 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_78 + lVar6 + -8);
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != -0x18);
      func_0x0001052a83dc(auStack_128);
      func_0x0001052a83dc(auStack_e0);
      func_0x0001003a8c94(&uStack_118);
      func_0x0001052a83dc(auStack_110);
      lVar6 = 0x18;
      do {
        func_0x0001003adc18(auStack_d0 + lVar6);
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != -8);
      func_0x0001003a8c94(&uStack_100);
      func_0x0001052a83dc(auStack_f8);
      lVar6 = 0x28;
      do {
        func_0x0001003adc18(auStack_b0 + lVar6);
        lVar6 = lVar6 + -0x10;
        in_ZR = lVar6 == -8;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_e8);
      ___cxa_guard_release(0x1136b9c78);
      unaff_x20 = 0xfffffffffffffff8;
    }
  }
  return;
}



/* Entry: 1052a7f18; end: 1052a7fb3;  */

undefined8 FUN_1052a7f18(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818d80 & 1) == 0) {
    iVar4 = 0x13818d80;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052a7fb4();
      lStack_20 = lRam0000000113818d88;
      if (lRam0000000113818d88 != 0) {
        piVar1 = (int *)(lRam0000000113818d88 + 8);
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
      func_0x0001003ad9a4(0x113818d70,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818d80);
    }
  }
  return 0x113818d70;
}



/* Entry: 1052a7fb4; end: 1052a8007;  */

void FUN_1052a7fb4(void)

{
  int iVar1;
  
  if ((bRam0000000113818d90 & 1) == 0) {
    iVar1 = 0x13818d90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818d88,"_djinni_interface_CachePolicyManager");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818d90);
      return;
    }
  }
  return;
}



/* Entry: 1052a8008; end: 1052a802f;  */

undefined8 FUN_1052a8008(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001002a2294(param_1 + 0x10);
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}


