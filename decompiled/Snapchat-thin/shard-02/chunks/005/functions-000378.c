/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ee2c54; end: 101ee2cff;  */

void FUN_101ee2c54(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101ee2d00; end: 101ee2d0f;  */

void FUN_101ee2d00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101ee2d10; end: 101ee2d3b;  */

undefined1  [16] FUN_101ee2d10(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  FUN_101ee2d3c();
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 101ee2d3c; end: 101ee2e23;  */

void FUN_101ee2d3c(void)

{
  int iVar1;
  undefined1 *unaff_x20;
  
  func_0x000107c4a924();
  iVar1 = (int)unaff_x20;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_101ee2e60();
      func_0x000107c613f8(&UNK_110499f90,unaff_x20,0,0);
      *unaff_x20 = 1;
      goto LAB_101ee2df4;
    }
    if (iVar1 == 2) {
      FUN_101ee2e60();
      func_0x000107c613f8(&UNK_110499f90,unaff_x20,0,0);
      *unaff_x20 = 0;
      goto LAB_101ee2df4;
    }
  }
  if (lRam0000000112e3b790 != -1) {
    unaff_x20 = (undefined1 *)0x112e3b790;
    func_0x000107c61568(0x112e3b790,FUN_101ee3a94);
  }
  FUN_101ede824();
  func_0x000107c613f8(&UNK_11049a1b0,unaff_x20,0,0);
  FUN_101ee2e24(0x1138045f0);
LAB_101ee2df4:
  func_0x000107c61654();
  return;
}



/* Entry: 101ee2e24; end: 101ee2e5f;  */

undefined8 FUN_101ee2e24(undefined8 param_1,undefined8 param_2)

{
  FUN_101ee8270(param_2,param_1);
  return param_2;
}



/* Entry: 101ee2e60; end: 101ee2e9f;  */

void FUN_101ee2e60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3b780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da2736c;
  func_0x000107c61520(&UNK_10da2736c,&UNK_110499f90);
  puRam0000000112e3b780 = puVar1;
  return;
}



/* Entry: 101ee2ea0; end: 101ee3007;  */

int FUN_101ee2ea0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101ee2f1c;
        goto LAB_101ee2f00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101ee2f00:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101ee2f1c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101ee3008; end: 101ee3047;  */

void FUN_101ee3008(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3b788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da27344;
  func_0x000107c61520(&UNK_10da27344,&UNK_110499f90);
  puRam0000000112e3b788 = puVar1;
  return;
}



/* Entry: 101ee3048; end: 101ee3073;  */

void FUN_101ee3048(void)

{
  undefined8 *unaff_x20;
  
  func_0x000107c61174(*unaff_x20);
  func_0x0001037986a4();
  return;
}



/* Entry: 101ee3074; end: 101ee313f;  */

void FUN_101ee3074(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  puVar2 = unaff_x20;
  func_0x000107c44c1c();
  if ((int)puVar2 == 0) {
    param_1 = 0;
    param_2 = 0;
    param_3 = 5;
    unaff_x20 = puVar2;
  }
  else {
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3140);
      (*pcVar1)();
    }
    FUN_101ede318();
    func_0x000107c61170();
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_101edeaf0();
  func_0x000107c613f8(&UNK_11049a098,unaff_x20,0,0);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  *(undefined1 *)(unaff_x20 + 2) = param_3;
  func_0x000107c61654();
  return;
}



/* Entry: 101ee3140; end: 101ee314f;  */

void FUN_101ee3140(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101ee3150; end: 101ee316f;  */

void FUN_101ee3150(void)

{
  FUN_101ee3074();
  return;
}



/* Entry: 101ee3170; end: 101ee317f;  */

void FUN_101ee3170(undefined8 *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 + 2);
  if ((1 < *pbVar1 - 3) && (param_1 = param_1 + 1, *pbVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 101ee3180; end: 101ee321b;  */

undefined8 * FUN_101ee3180(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101edf31c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101ee321c; end: 101ee325f;  */

undefined8 * FUN_101ee321c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_101edeb30(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101ee3260; end: 101ee3303;  */

int FUN_101ee3260(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101ee3304; end: 101ee3a93;  */

/* WARNING: Removing unreachable block (ram,0x000101ee3970) */

undefined8 * FUN_101ee3304(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  puVar2 = unaff_x20;
  func_0x000107c43bd8();
  puVar3 = unaff_x20;
  puVar4 = unaff_x20;
  switch((ulong)puVar2 & 0xffffffff) {
  default:
    if (lRam0000000112e3b790 != -1) {
      puVar2 = (undefined8 *)0x112e3b790;
      func_0x000107c61568(0x112e3b790,FUN_101ee3a94);
    }
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,puVar2,0,0);
    FUN_101ee2e24(0x1138045f0);
    param_1 = unaff_x20;
    goto LAB_101ee37d4;
  case 1:
    func_0x000107c436f4();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a74);
      (*pcVar1)();
    }
    FUN_101ede318();
    uVar6 = (undefined1)param_3;
    puVar3 = unaff_x20;
    puVar4 = unaff_x20;
    if (unaff_x21 != 0) goto code_r0x000101ee3840;
    func_0x000107c61170();
    param_3 = param_3 & 0xff;
    puVar3 = unaff_x20;
    if (param_3 == 2) {
      return (undefined8 *)(long)(double)param_1;
    }
    break;
  case 2:
    func_0x000107c3f720();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a68);
      (*pcVar1)();
    }
    FUN_101ede318();
    uVar6 = (undefined1)param_3;
    puVar3 = unaff_x20;
    puVar4 = unaff_x20;
    if (unaff_x21 != 0) goto code_r0x000101ee3840;
    func_0x000107c61170();
    param_3 = param_3 & 0xff;
    puVar3 = unaff_x20;
    if (param_3 == 2) {
      return (undefined8 *)(long)(double)param_1;
    }
    break;
  case 3:
    func_0x000107c50910();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a6c);
      (*pcVar1)();
    }
    FUN_101ede318();
    uVar6 = (undefined1)param_3;
    puVar3 = unaff_x20;
    puVar4 = unaff_x20;
    if (unaff_x21 != 0) goto code_r0x000101ee3840;
    func_0x000107c61170();
    param_3 = param_3 & 0xff;
    puVar3 = unaff_x20;
    if (param_3 == 2) {
      return (undefined8 *)(long)(double)param_1;
    }
    break;
  case 4:
    func_0x000107c42b8c();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a5c);
      (*pcVar1)();
    }
    FUN_101ede318();
    uVar6 = (undefined1)param_3;
    puVar3 = unaff_x20;
    puVar4 = unaff_x20;
    if (unaff_x21 != 0) goto code_r0x000101ee3840;
    func_0x000107c61170();
    param_3 = param_3 & 0xff;
    puVar3 = unaff_x20;
    if (param_3 == 2) {
      func_0x000107c60fa4(param_1);
      return param_1;
    }
    break;
  case 5:
    puVar2 = unaff_x20;
    func_0x000107c4ec18();
    func_0x000107c61180();
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a78);
      (*pcVar1)();
    }
    puVar3 = puVar2;
    func_0x000107c3e140();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a8c);
      (*pcVar1)();
    }
    puVar2 = param_1;
    FUN_101ede318();
    puVar4 = puVar3;
    if (unaff_x21 != 0) goto code_r0x000101ee3840;
    puVar4 = param_2;
    uVar5 = param_3;
    func_0x000107c61170();
    if ((param_3 & 0xff) != 2) {
      param_1 = param_2;
      if (((param_3 & 0xff) != 5) || (puVar2 != (undefined8 *)0x0 || param_2 != (undefined8 *)0x0))
      {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,puVar3,0,0);
        *puVar3 = 0x656c62756f44;
        puVar3[1] = 0xe600000000000000;
        puVar3[2] = puVar2;
        puVar3[3] = param_2;
        *(char *)(puVar3 + 4) = (char)param_3;
        goto code_r0x000101ee37c8;
      }
      goto code_r0x000101ee39e8;
    }
    func_0x000107c4ec18();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a90);
      (*pcVar1)();
    }
    puVar3 = unaff_x20;
    func_0x000107c3e144();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a94);
      (*pcVar1)();
    }
    FUN_101ede318();
    func_0x000107c61170();
    if ((uVar5 & 0xff) == 2) {
      func_0x000107c611f8(puVar2,param_1);
      return puVar2;
    }
    if (((uVar5 & 0xff) == 5) && (param_1 == (undefined8 *)0x0 && puVar4 == (undefined8 *)0x0))
    goto code_r0x000101ee39e8;
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,puVar3,0,0);
    *puVar3 = 0x656c62756f44;
    puVar3[1] = 0xe600000000000000;
    puVar3[2] = param_1;
    puVar3[3] = puVar4;
    *(char *)(puVar3 + 4) = (char)uVar5;
    goto code_r0x000101ee37c8;
  case 6:
    func_0x000107c5b9bc();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a80);
      (*pcVar1)();
    }
    FUN_101ede318();
    uVar6 = (undefined1)param_3;
    puVar3 = unaff_x20;
    puVar4 = unaff_x20;
    if (unaff_x21 != 0) goto code_r0x000101ee3840;
    func_0x000107c61170();
    param_3 = param_3 & 0xff;
    puVar3 = unaff_x20;
    if (param_3 == 2) {
      return (undefined8 *)SQRT((double)param_1);
    }
    break;
  case 7:
    func_0x000107c3cea0();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a70);
      (*pcVar1)();
    }
    FUN_101ede318();
    uVar6 = (undefined1)param_3;
    puVar3 = unaff_x20;
    puVar4 = unaff_x20;
    if (unaff_x21 != 0) goto code_r0x000101ee3840;
    func_0x000107c61170();
    param_3 = param_3 & 0xff;
    puVar3 = unaff_x20;
    if (param_3 == 2) {
      return (undefined8 *)((ulong)param_1 & 0x7fffffffffffffff);
    }
    break;
  case 8:
    func_0x000107c4cec8();
    func_0x000107c61180();
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a88);
      (*pcVar1)();
    }
    puVar2 = puVar3;
    FUN_101ee3ac4();
    goto joined_r0x000101ee34c0;
  case 9:
    func_0x000107c4c800();
    func_0x000107c61180();
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a64);
      (*pcVar1)();
    }
    puVar2 = puVar3;
    FUN_101ee3ff0();
    if (unaff_x21 != 0) goto code_r0x000101ee3840;
    goto code_r0x000101ee386c;
  case 10:
    func_0x000107c40808();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a84);
      (*pcVar1)();
    }
    puVar2 = unaff_x20;
    FUN_101ee451c();
    puVar3 = unaff_x20;
    puVar4 = unaff_x20;
    if (unaff_x21 == 0) {
      func_0x000107c61170(unaff_x20);
      return (undefined8 *)(double)(long)puVar2;
    }
    goto code_r0x000101ee3840;
  case 0xb:
    func_0x000107c403e4();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a58);
      (*pcVar1)();
    }
    puVar2 = unaff_x20;
    FUN_101ee4738();
    puVar3 = unaff_x20;
    puVar4 = unaff_x20;
    if (unaff_x21 == 0) {
      func_0x000107c61170(unaff_x20);
      return (undefined8 *)((ulong)puVar2 & 1);
    }
    goto code_r0x000101ee3840;
  case 0xc:
    func_0x000107c3fcbc();
    func_0x000107c61180();
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a60);
      (*pcVar1)();
    }
    puVar2 = puVar3;
    FUN_101ee4cc4();
joined_r0x000101ee34c0:
    if (unaff_x21 == 0) {
code_r0x000101ee386c:
      func_0x000107c61170(puVar3);
      return puVar2;
    }
code_r0x000101ee3840:
    func_0x000107c61170(puVar3);
    return puVar4;
  case 0xd:
    func_0x000107c4b994();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a7c);
      (*pcVar1)();
    }
    FUN_101ede318();
    uVar6 = (undefined1)param_3;
    puVar3 = unaff_x20;
    puVar4 = unaff_x20;
    if (unaff_x21 != 0) goto code_r0x000101ee3840;
    func_0x000107c61170();
    param_3 = param_3 & 0xff;
    puVar3 = unaff_x20;
    if (param_3 == 2) {
      func_0x000107c61054(param_1);
      return param_1;
    }
    break;
  case 0xe:
    func_0x000107c4b998();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee3a54);
      (*pcVar1)();
    }
    FUN_101ede318();
    uVar6 = (undefined1)param_3;
    puVar3 = unaff_x20;
    puVar4 = unaff_x20;
    if (unaff_x21 != 0) goto code_r0x000101ee3840;
    func_0x000107c61170();
    param_3 = param_3 & 0xff;
    puVar3 = unaff_x20;
    if (param_3 == 2) {
      func_0x000107c61058(param_1);
      return param_1;
    }
  }
  if ((param_3 == 5) && (param_1 == (undefined8 *)0x0 && param_2 == (undefined8 *)0x0)) {
code_r0x000101ee39e8:
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,puVar3,0,0);
    puVar3[3] = &UNK_1106c9838;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 5;
    uVar6 = 1;
  }
  else {
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,puVar3,0,0);
    *puVar3 = 0x656c62756f44;
    puVar3[1] = 0xe600000000000000;
    puVar3[2] = param_1;
    puVar3[3] = param_2;
    *(undefined1 *)(puVar3 + 4) = uVar6;
code_r0x000101ee37c8:
    uVar6 = 2;
  }
  *(undefined1 *)(puVar3 + 5) = uVar6;
LAB_101ee37d4:
  func_0x000107c61654();
  return param_1;
}



/* Entry: 101ee3a94; end: 101ee3ac3;  */

void FUN_101ee3a94(void)

{
  uRam00000001138045f0 = 0xd000000000000021;
  uRam00000001138045f8 = 0x800000010f0193a0;
  uRam0000000113804618 = 4;
  return;
}



/* Entry: 101ee3ac4; end: 101ee3fef;  */

/* WARNING: Removing unreachable block (ram,0x000101ee3b68) */

undefined8 * FUN_101ee3ac4(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x21;
  uint uVar13;
  
  puVar3 = param_1;
  puVar6 = param_2;
  func_0x000107c3e140();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee3fec);
    (*pcVar2)();
  }
  puVar4 = param_2;
  FUN_101ede318();
  puVar7 = puVar6;
  uVar9 = param_3;
  func_0x000107c61170(puVar3);
  if (unaff_x21 != 0) {
    return puVar4;
  }
  func_0x000107c3e144();
  func_0x000107c61180();
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee3ff0);
    (*pcVar2)();
  }
  FUN_101ede318();
  func_0x000107c61170();
  uVar1 = (uint)param_3 & 0xff;
  if (2 < uVar1) {
    if (uVar1 == 3) {
      FUN_101edeb30(param_2,puVar7,uVar9);
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_2,0,0);
      *param_2 = 0x6e696d2e7473694c;
      param_2[1] = 0xea00000000002928;
      *(undefined1 *)(param_2 + 5) = 0;
      func_0x000107c61654();
      uVar9 = 3;
      param_2 = puVar4;
LAB_101ee3b74:
      FUN_101edeb30(param_2,puVar6,uVar9);
      return puVar4;
    }
    if (uVar1 == 4) {
      FUN_101edeb30(param_2,puVar7,uVar9);
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_2,0,0);
      *param_2 = 0x6e696d2e7473694c;
      param_2[1] = 0xea00000000002928;
      *(undefined1 *)(param_2 + 5) = 0;
      func_0x000107c61654();
      uVar9 = 4;
      param_2 = puVar4;
      goto LAB_101ee3b74;
    }
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    FUN_101ee8780(puVar4,puVar6,5);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    puVar4 = puVar7;
    FUN_101ee8780(param_2,puVar7,uVar9);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    FUN_101edeb30(param_2,puVar7,uVar9);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    param_1[3] = PTR___sSSN_11034da80;
    *param_1 = 0x286e696d;
    param_1[1] = 0xe400000000000000;
    *(undefined1 *)(param_1 + 5) = 1;
    goto LAB_101ee3eac;
  }
  uVar13 = (uint)uVar9;
  if ((param_3 & 0xff) == 0) {
    if ((uVar9 & 0xff) == 0) {
      if (((param_2 != puVar4) || (puVar3 = puVar4, puVar8 = puVar6, puVar7 != puVar6)) &&
         (puVar5 = param_2, func_0x000107c605b8(param_2,puVar7,puVar4,puVar6,1), puVar3 = param_2,
         puVar8 = puVar7, ((ulong)puVar5 & 1) != 0)) {
        FUN_101edeb30(puVar4,puVar6,0);
        return param_2;
      }
      FUN_101edeb30(puVar3,puVar8,0);
      return puVar4;
    }
    if (((uVar13 & 0xff) == 5) && (param_2 == (undefined8 *)0x0 && puVar7 == (undefined8 *)0x0)) {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      param_1[3] = &UNK_1106c9838;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 5;
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      *param_1 = 0x676e69727453;
      param_1[1] = 0xe600000000000000;
      param_1[2] = param_2;
      param_1[3] = puVar7;
      *(char *)(param_1 + 4) = (char)uVar9;
      *(undefined1 *)(param_1 + 5) = 2;
      FUN_101edf31c(param_2,puVar7,uVar9);
    }
    func_0x000107c61654();
    FUN_101edeb30(puVar4,puVar6,0);
    puVar6 = puVar7;
    goto LAB_101ee3b74;
  }
  if (uVar1 == 1) {
    if (((ulong)puVar4 & 1) == 0) {
      FUN_101edeb30(param_2,puVar7,uVar9);
      return (undefined8 *)0x0;
    }
    if ((uVar13 & 0xff) == 1) {
      return (undefined8 *)((ulong)param_2 & 1);
    }
    if (((uVar13 & 0xff) != 5) || (param_2 != (undefined8 *)0x0 || puVar7 != (undefined8 *)0x0)) {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      uVar11 = 0x6c6f6f42;
      uVar12 = 0xe400000000000000;
      goto LAB_101ee3dcc;
    }
LAB_101ee3f0c:
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    param_1[3] = &UNK_1106c9838;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 5;
    uVar10 = 1;
  }
  else {
    if ((uVar13 & 0xff) == 2) {
      if ((double)param_2 < (double)puVar4) {
        return param_2;
      }
      return puVar4;
    }
    if (((uVar13 & 0xff) == 5) && (param_2 == (undefined8 *)0x0 && puVar7 == (undefined8 *)0x0))
    goto LAB_101ee3f0c;
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    uVar11 = 0x656c62756f44;
    uVar12 = 0xe600000000000000;
LAB_101ee3dcc:
    *param_1 = uVar11;
    param_1[1] = uVar12;
    param_1[2] = param_2;
    param_1[3] = puVar7;
    uVar10 = 2;
    *(char *)(param_1 + 4) = (char)uVar9;
  }
  *(undefined1 *)(param_1 + 5) = uVar10;
LAB_101ee3eac:
  func_0x000107c61654();
  return puVar4;
}



/* Entry: 101ee3ff0; end: 101ee451b;  */

/* WARNING: Removing unreachable block (ram,0x000101ee4094) */

undefined8 * FUN_101ee3ff0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x21;
  uint uVar13;
  
  puVar3 = param_1;
  puVar6 = param_2;
  func_0x000107c3e140();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee4518);
    (*pcVar2)();
  }
  puVar4 = param_2;
  FUN_101ede318();
  puVar7 = puVar6;
  uVar9 = param_3;
  func_0x000107c61170(puVar3);
  if (unaff_x21 != 0) {
    return puVar4;
  }
  func_0x000107c3e144();
  func_0x000107c61180();
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee451c);
    (*pcVar2)();
  }
  FUN_101ede318();
  func_0x000107c61170();
  uVar1 = (uint)param_3 & 0xff;
  if (2 < uVar1) {
    if (uVar1 == 3) {
      FUN_101edeb30(param_2,puVar7,uVar9);
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_2,0,0);
      *param_2 = 0x78616d2e7473694c;
      param_2[1] = 0xea00000000002928;
      *(undefined1 *)(param_2 + 5) = 0;
      func_0x000107c61654();
      uVar9 = 3;
      param_2 = puVar4;
LAB_101ee40a0:
      FUN_101edeb30(param_2,puVar6,uVar9);
      return puVar4;
    }
    if (uVar1 == 4) {
      FUN_101edeb30(param_2,puVar7,uVar9);
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_2,0,0);
      *param_2 = 0x78616d2e7473694c;
      param_2[1] = 0xea00000000002928;
      *(undefined1 *)(param_2 + 5) = 0;
      func_0x000107c61654();
      uVar9 = 4;
      param_2 = puVar4;
      goto LAB_101ee40a0;
    }
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    FUN_101ee8780(puVar4,puVar6,5);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x202c,0xe200000000000000);
    puVar4 = puVar7;
    FUN_101ee8780(param_2,puVar7,uVar9);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    FUN_101edeb30(param_2,puVar7,uVar9);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    param_1[3] = PTR___sSSN_11034da80;
    *param_1 = 0x2878616d;
    param_1[1] = 0xe400000000000000;
    *(undefined1 *)(param_1 + 5) = 1;
    goto LAB_101ee43f4;
  }
  uVar13 = (uint)uVar9;
  if ((param_3 & 0xff) == 0) {
    if ((uVar9 & 0xff) == 0) {
      if (((param_2 != puVar4) || (puVar3 = puVar4, puVar8 = puVar6, puVar7 != puVar6)) &&
         (puVar5 = param_2, func_0x000107c605b8(param_2,puVar7,puVar4,puVar6,1), puVar3 = param_2,
         puVar8 = puVar7, ((ulong)puVar5 & 1) == 0)) {
        FUN_101edeb30(puVar4,puVar6,0);
        return param_2;
      }
      FUN_101edeb30(puVar3,puVar8,0);
      return puVar4;
    }
    if (((uVar13 & 0xff) == 5) && (param_2 == (undefined8 *)0x0 && puVar7 == (undefined8 *)0x0)) {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      param_1[3] = &UNK_1106c9838;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 5;
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      *param_1 = 0x676e69727453;
      param_1[1] = 0xe600000000000000;
      param_1[2] = param_2;
      param_1[3] = puVar7;
      *(char *)(param_1 + 4) = (char)uVar9;
      *(undefined1 *)(param_1 + 5) = 2;
      FUN_101edf31c(param_2,puVar7,uVar9);
    }
    func_0x000107c61654();
    FUN_101edeb30(puVar4,puVar6,0);
    puVar6 = puVar7;
    goto LAB_101ee40a0;
  }
  if (uVar1 == 1) {
    if (((ulong)puVar4 & 1) != 0) {
      FUN_101edeb30(param_2,puVar7,uVar9);
      return (undefined8 *)0x1;
    }
    if ((uVar13 & 0xff) == 1) {
      return (undefined8 *)((ulong)param_2 & 1);
    }
    if (((uVar13 & 0xff) != 5) || (param_2 != (undefined8 *)0x0 || puVar7 != (undefined8 *)0x0)) {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      uVar11 = 0x6c6f6f42;
      uVar12 = 0xe400000000000000;
      goto LAB_101ee43e0;
    }
LAB_101ee4438:
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    param_1[3] = &UNK_1106c9838;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 5;
    uVar10 = 1;
  }
  else {
    if ((uVar13 & 0xff) == 2) {
      if ((double)puVar4 <= (double)param_2) {
        return param_2;
      }
      return puVar4;
    }
    if (((uVar13 & 0xff) == 5) && (param_2 == (undefined8 *)0x0 && puVar7 == (undefined8 *)0x0))
    goto LAB_101ee4438;
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    uVar11 = 0x656c62756f44;
    uVar12 = 0xe600000000000000;
LAB_101ee43e0:
    *param_1 = uVar11;
    param_1[1] = uVar12;
    param_1[2] = param_2;
    param_1[3] = puVar7;
    uVar10 = 2;
    *(char *)(param_1 + 4) = (char)uVar9;
  }
  *(undefined1 *)(param_1 + 5) = uVar10;
LAB_101ee43f4:
  func_0x000107c61654();
  return puVar4;
}



/* Entry: 101ee451c; end: 101ee4737;  */

undefined8 * FUN_101ee451c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 *unaff_x19;
  undefined8 *puVar6;
  long unaff_x21;
  
  puVar3 = param_2;
  FUN_101ede318();
  if (unaff_x21 != 0) {
    return unaff_x19;
  }
  uVar1 = (uint)param_3 & 0xff;
  puVar2 = param_2;
  if (uVar1 < 3) {
    if (1 < uVar1 - 1) {
      func_0x000107c61434(puVar3);
      func_0x000107c5fb5c(param_2,puVar3);
      FUN_101edeb30(param_2,puVar3,0);
      FUN_101edeb30(param_2,puVar3,0);
      return puVar2;
    }
    FUN_101ede824();
    puVar6 = (undefined8 *)&UNK_11049a1b0;
    func_0x000107c613f8(&UNK_11049a1b0,puVar2,0,0);
    puVar4 = puVar3;
    FUN_101ee8780(param_2,puVar3,param_3);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar4);
    FUN_101edeb30(param_2,puVar3,param_3);
    func_0x000107c5fb78(0x29,0xe100000000000000);
    uVar5 = 0;
    *puVar2 = 0x28746e756f63;
LAB_101ee4704:
    puVar2[1] = 0xe600000000000000;
    *(undefined1 *)(puVar2 + 5) = uVar5;
    func_0x000107c61654();
  }
  else {
    if (uVar1 == 3) {
      puVar6 = (undefined8 *)param_2[2];
    }
    else {
      if (uVar1 != 4) {
        FUN_101ede824();
        puVar6 = (undefined8 *)&UNK_11049a1b0;
        func_0x000107c613f8(&UNK_11049a1b0,puVar2,0,0);
        FUN_101ee8780(param_2,puVar3,5);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar3);
        func_0x000107c5fb78(0x29,0xe100000000000000);
        puVar2[3] = PTR___sSSN_11034da80;
        *puVar2 = 0x28746e756f63;
        uVar5 = 1;
        goto LAB_101ee4704;
      }
      puVar6 = (undefined8 *)param_2[2];
    }
    FUN_101edeb30();
  }
  return puVar6;
}



/* Entry: 101ee4738; end: 101ee4cc3;  */

/* WARNING: Removing unreachable block (ram,0x000101ee47e0) */

uint FUN_101ee4738(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  long unaff_x21;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar4 = (undefined8 *)0x0;
  puVar10 = param_1;
  puVar5 = param_2;
  func_0x000107c3e140();
  func_0x000107c61180();
  if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee4cc0);
    (*pcVar2)();
  }
  puVar3 = param_2;
  FUN_101ede318();
  puVar6 = puVar5;
  uVar7 = param_3;
  func_0x000107c61170(puVar10);
  if (unaff_x21 != 0) goto LAB_101ee4b48;
  func_0x000107c3e144();
  func_0x000107c61180();
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee4cc4);
    (*pcVar2)();
  }
  FUN_101ede318();
  puVar10 = param_1;
  func_0x000107c61170();
  uVar1 = (uint)param_3 & 0xff;
  if (uVar1 < 3) {
    if (uVar1 - 1 < 2) {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,puVar10,0,0);
      puStack_70 = (undefined8 *)0x0;
      puStack_68 = (undefined8 *)0xe000000000000000;
      func_0x000107c602fc(0x10);
      func_0x000107c6142c(puStack_68);
      puStack_70 = (undefined8 *)0x736e6961746e6f63;
      puStack_68 = (undefined8 *)0xe900000000000028;
      puVar4 = puVar5;
      FUN_101ee8780(puVar3,puVar5,param_3);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      FUN_101edeb30(puVar3,puVar5,param_3);
      func_0x000107c5fb78(0x202c,0xe200000000000000);
      puVar4 = puVar6;
      FUN_101ee8780(param_2,puVar6,uVar7);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      FUN_101edeb30(param_2,puVar6,uVar7);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      *puVar10 = puStack_70;
      puVar10[1] = puStack_68;
      *(undefined1 *)(puVar10 + 5) = 0;
LAB_101ee4b40:
      puVar10 = (undefined8 *)0x0;
      func_0x000107c61654();
      goto LAB_101ee4b48;
    }
    puStack_70 = puVar3;
    puStack_68 = puVar5;
    if ((uVar7 & 0xff) != 0) {
      if ((((uint)uVar7 & 0xff) == 5) &&
         (param_2 == (undefined8 *)0x0 && puVar6 == (undefined8 *)0x0)) {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,puVar10,0,0);
        puVar10[3] = &UNK_1106c9838;
        *puVar10 = 0;
        puVar10[1] = 0;
        *(undefined1 *)(puVar10 + 2) = 5;
        uVar9 = 1;
      }
      else {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,puVar10,0,0);
        *puVar10 = 0x676e69727453;
        puVar10[1] = 0xe600000000000000;
        puVar10[2] = param_2;
        puVar10[3] = puVar6;
        uVar9 = 2;
        *(char *)(puVar10 + 4) = (char)uVar7;
      }
      *(undefined1 *)(puVar10 + 5) = uVar9;
      func_0x000107c61654();
      uVar8 = 0;
LAB_101ee47ec:
      FUN_101edeb30(puVar3,puVar5,uVar8);
      puVar10 = param_1;
      goto LAB_101ee4b48;
    }
    puStack_80 = param_2;
    puStack_78 = puVar6;
    func_0x000100e8b654();
    func_0x000107c6022c(&puStack_80,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar10,puVar10);
    FUN_101edeb30(param_2,puVar6,0);
    uVar8 = 0;
    puVar10 = puVar4;
  }
  else if (uVar1 == 3) {
    func_0x000107c61434(puVar3);
    puVar10 = param_2;
    FUN_101ee5210(param_2,puVar6,uVar7,puVar3);
    FUN_101edeb30(puVar3,puVar5,3);
    FUN_101edeb30(param_2,puVar6,uVar7);
    uVar8 = 3;
  }
  else {
    if (uVar1 != 4) {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,puVar10,0,0);
      puStack_70 = (undefined8 *)0x0;
      puStack_68 = (undefined8 *)0xe000000000000000;
      func_0x000107c602fc(0x10);
      func_0x000107c6142c(puStack_68);
      puStack_70 = (undefined8 *)0x736e6961746e6f63;
      puStack_68 = (undefined8 *)0xe900000000000028;
      FUN_101ee8780(puVar3,puVar5,5);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      func_0x000107c5fb78(0x202c,0xe200000000000000);
      puVar4 = puVar6;
      FUN_101ee8780(param_2,puVar6,uVar7);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      FUN_101edeb30(param_2,puVar6,uVar7);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      puVar10[3] = PTR___sSSN_11034da80;
      *puVar10 = puStack_70;
      puVar10[1] = puStack_68;
      *(undefined1 *)(puVar10 + 5) = 1;
      goto LAB_101ee4b40;
    }
    if ((uVar7 & 0xff) != 0) {
      if ((((uint)uVar7 & 0xff) == 5) &&
         (param_2 == (undefined8 *)0x0 && puVar6 == (undefined8 *)0x0)) {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,puVar10,0,0);
        puVar10[3] = &UNK_1106c9838;
        *puVar10 = 0;
        puVar10[1] = 0;
        *(undefined1 *)(puVar10 + 2) = 5;
        uVar9 = 1;
      }
      else {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,puVar10,0,0);
        *puVar10 = 0x676e69727453;
        puVar10[1] = 0xe600000000000000;
        puVar10[2] = param_2;
        puVar10[3] = puVar6;
        *(char *)(puVar10 + 4) = (char)uVar7;
        uVar9 = 2;
      }
      *(undefined1 *)(puVar10 + 5) = uVar9;
      func_0x000107c61654();
      uVar8 = 4;
      goto LAB_101ee47ec;
    }
    if (puVar3[2] == 0) {
      FUN_101edeb30(param_2,puVar6,0);
      FUN_101edeb30(puVar3,puVar5,4);
      puVar10 = (undefined8 *)0x0;
      goto LAB_101ee4b48;
    }
    func_0x000107c61434(puVar3);
    puVar10 = puVar6;
    func_0x000100029284(param_2,puVar6);
    FUN_101edeb30(puVar3,puVar5,4);
    FUN_101edeb30(param_2,puVar6,0);
    uVar8 = 4;
  }
  FUN_101edeb30(puVar3,puVar5,uVar8);
LAB_101ee4b48:
  return (uint)puVar10 & 1;
}



/* Entry: 101ee4cc4; end: 101ee51e3;  */

/* WARNING: Removing unreachable block (ram,0x000101ee4dcc) */

void FUN_101ee4cc4(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  long unaff_x21;
  undefined8 *puStack_60;
  ulong uStack_58;
  
  puVar3 = param_1;
  puVar7 = param_2;
  func_0x000107c3e140();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee51e0);
    (*pcVar2)();
  }
  puVar4 = param_2;
  FUN_101ede318();
  puVar8 = puVar7;
  uVar10 = (uint)param_3;
  func_0x000107c61170();
  if (unaff_x21 != 0) {
    return;
  }
  if ((param_3 & 0xff) != 0) {
    if ((((uint)param_3 & 0xff) == 5) &&
       (puVar4 == (undefined8 *)0x0 && puVar7 == (undefined8 *)0x0)) {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,puVar3,0,0);
      puVar3[3] = &UNK_1106c9838;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined1 *)(puVar3 + 2) = 5;
      uVar9 = 1;
    }
    else {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,puVar3,0,0);
      *puVar3 = 0x676e69727453;
      puVar3[1] = 0xe600000000000000;
      puVar3[2] = puVar4;
      puVar3[3] = puVar7;
      *(char *)(puVar3 + 4) = (char)param_3;
      uVar9 = 2;
    }
    *(undefined1 *)(puVar3 + 5) = uVar9;
    func_0x000107c61654();
    return;
  }
  func_0x000107c61434(puVar7);
  func_0x000107c3e144();
  func_0x000107c61180();
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee51e4);
    (*pcVar2)();
  }
  FUN_101ede318();
  func_0x000107c61170(param_1);
  if ((uVar10 & 0xff) != 2) {
    puVar3 = puVar4;
    if (((uVar10 & 0xff) == 5) && (param_2 == (undefined8 *)0x0 && puVar8 == (undefined8 *)0x0)) {
      FUN_101edeb30(puVar4,puVar7,0);
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,puVar3,0,0);
      puVar3[3] = &UNK_1106c9838;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined1 *)(puVar3 + 2) = 5;
      uVar9 = 1;
    }
    else {
      FUN_101edeb30(puVar4,puVar7,0);
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,puVar3,0,0);
      *puVar3 = 0x656c62756f44;
      puVar3[1] = 0xe600000000000000;
      puVar3[2] = param_2;
      puVar3[3] = puVar8;
      *(char *)(puVar3 + 4) = (char)uVar10;
      uVar9 = 2;
    }
    *(undefined1 *)(puVar3 + 5) = uVar9;
    func_0x000107c61654();
    FUN_101edeb30(puVar4,puVar7,0);
    return;
  }
  if ((((ulong)param_2 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee51ac);
    (*pcVar2)();
  }
  if ((double)param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee51b0);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= (double)param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee51b4);
    (*pcVar2)();
  }
  puVar3 = puVar4;
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    puVar3 = (undefined8 *)((ulong)puVar7 >> 0x38 & 0xf);
  }
  uVar10 = (uint)((ulong)puVar4 >> 0x3b) & 1;
  if (((ulong)puVar7 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar6 = 7;
  if (uVar10 == 0) {
    uVar6 = 0xb;
  }
  lVar5 = 0xf;
  FUN_101ee55a0(0xf,uVar6 | (long)puVar3 << 0x10,puVar4,puVar7);
  if (lVar5 <= (long)(double)param_2) {
    FUN_101edeb30(puVar4,puVar7,0);
    FUN_101edeb30(puVar4,puVar7,0);
    return;
  }
  uVar6 = 0;
  func_0x000101ee52c4(0xf,(long)(double)param_2,puVar4,puVar7);
  func_0x000100eda154();
  if (((ulong)puVar7 >> 0x3c & 1) == 0) {
    if (((ulong)puVar7 >> 0x3d & 1) != 0) {
      FUN_101edeb30(puVar4,puVar7,0);
      puStack_60 = puVar4;
      uStack_58 = (ulong)puVar7 & 0xffffffffffffff;
      if (*(char *)((long)&puStack_60 + (uVar6 >> 0x10)) < '\0') {
        FUN_101edeb30(puVar4,puVar7,0);
        return;
      }
      goto LAB_101ee5064;
    }
    if (((ulong)puVar4 >> 0x3c & 1) == 0) {
      puVar3 = puVar4;
      func_0x000107c60358(puVar4,puVar7);
    }
    else {
      puVar3 = (undefined8 *)(((ulong)puVar7 & 0xfffffffffffffff) + 0x20);
    }
    bVar1 = *(byte *)((long)puVar3 + (uVar6 >> 0x10));
    if ((char)bVar1 < '\0') {
      uVar10 = (uint)LZCOUNT((uint)bVar1 << 0x18 ^ 0xffffffff);
      if (2 < uVar10) {
        if (uVar10 == 3) {
          FUN_101edeb30(puVar4,puVar7,0);
        }
        else {
          FUN_101edeb30(puVar4,puVar7,0);
        }
        goto LAB_101ee5064;
      }
      if (uVar10 != 1) {
        FUN_101edeb30(puVar4,puVar7,0);
        goto LAB_101ee5064;
      }
    }
  }
  else {
    func_0x000107c602f8(uVar6 & 0xffffffffffff0000,puVar4,puVar7);
  }
  FUN_101edeb30(puVar4,puVar7,0);
LAB_101ee5064:
  FUN_101edeb30(puVar4,puVar7,0);
  return;
}



/* Entry: 101ee51e4; end: 101ee520f;  */

undefined1  [16] FUN_101ee51e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  FUN_101ee3304();
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 101ee5210; end: 101ee549f;  */

bool FUN_101ee5210(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_4 + 0x10) + 1;
  puVar5 = (undefined1 *)(param_4 + 0x30);
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) break;
    uVar1 = *(ulong *)(puVar5 + -0x10);
    uVar2 = *(undefined8 *)(puVar5 + -8);
    uVar3 = *puVar5;
    FUN_101edf31c(uVar1,uVar2,uVar3);
    uVar4 = uVar1;
    func_0x000103aa849c(uVar1,uVar2,uVar3,param_1,param_2,param_3);
    FUN_101edeb30(uVar1,uVar2,uVar3);
    puVar5 = puVar5 + 0x18;
  } while ((uVar4 & 1) == 0);
  return lVar6 != 0;
}



/* Entry: 101ee54a0; end: 101ee5533;  */

void FUN_101ee54a0(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  if (((param_1 & 1) == 0) || ((param_1 & 0xc) == 4L << (ulong)uVar3)) {
    FUN_101ee5534();
    if ((param_1 & 1) == 0) {
      func_0x000100eda254();
    }
  }
  else {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 < param_1 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee54f0);
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 101ee5534; end: 101ee559f;  */

void FUN_101ee5534(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  if ((param_1 & 0xc) == 4L << uVar3) {
    func_0x000100e36e7c();
  }
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0x10 <= uVar1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee55a0);
  (*pcVar2)();
}



/* Entry: 101ee55a0; end: 101ee579f;  */

long FUN_101ee55a0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  char acStack_72 [2];
  ulong uStack_70;
  ulong uStack_68;
  
  FUN_101ee54a0(param_1,param_3,param_4);
  FUN_101ee54a0(param_2,param_3,param_4);
  param_2 = param_2 >> 0xe;
  if (param_1 >> 0xe < param_2) {
    lVar9 = 0;
    do {
      lVar8 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ee579c);
        (*pcVar3)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        param_1 = param_1 >> 0x10;
        if ((param_4 >> 0x3d & 1) == 0) {
          uVar5 = (param_4 & 0xfffffffffffffff) + 0x20;
          if ((param_3 >> 0x3c & 1) == 0) {
            uVar5 = param_3;
            func_0x000107c60358(param_3,param_4);
          }
          bVar1 = *(byte *)(uVar5 + param_1);
        }
        else {
          uStack_70 = param_3;
          uStack_68 = param_4 & 0xffffffffffffff;
          bVar1 = *(byte *)((long)&uStack_70 + param_1);
        }
        uVar6 = (uint)LZCOUNT((uint)bVar1 << 0x18 ^ 0xffffffff);
        if (-1 < (char)bVar1) {
          uVar6 = 1;
        }
        param_1 = (param_1 + uVar6) * 0x10000;
      }
      else {
        func_0x000107c5fb40();
      }
      lVar9 = lVar9 + 1;
    } while (param_1 >> 0xe < param_2);
  }
  else if (param_2 < param_1 >> 0xe) {
    lVar8 = 0;
    do {
      bVar4 = SBORROW8(lVar8,1);
      lVar8 = lVar8 + -1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ee57a0);
        (*pcVar3)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          uVar5 = (param_4 & 0xfffffffffffffff) + 0x20;
          if ((param_3 >> 0x3c & 1) == 0) {
            uVar5 = param_3;
            func_0x000107c60358(param_3,param_4);
          }
          lVar9 = 0;
          do {
            pcVar7 = (char *)(uVar5 + (param_1 >> 0x10) + -1 + lVar9);
            lVar9 = lVar9 + -1;
          } while (*pcVar7 < -0x40);
          lVar9 = -lVar9;
        }
        else {
          uStack_70 = param_3;
          uStack_68 = param_4 & 0xffffffffffffff;
          if (acStack_72[(param_1 >> 0x10) + 1] < -0x40) {
            lVar9 = 1;
            pcVar7 = acStack_72 + (param_1 >> 0x10);
            do {
              lVar9 = lVar9 + 1;
              cVar2 = *pcVar7;
              pcVar7 = pcVar7 + -1;
            } while (cVar2 < -0x40);
          }
          else {
            lVar9 = 1;
          }
        }
        param_1 = param_1 + lVar9 * -0x10000 & 0xffffffffffff0000 | 5;
      }
      else {
        func_0x000107c5fb44();
      }
    } while (param_2 < param_1 >> 0xe);
  }
  else {
    lVar8 = 0;
  }
  return lVar8;
}



/* Entry: 101ee57a0; end: 101ee60db;  */

/* WARNING: Removing unreachable block (ram,0x000101ee5ef8) */
/* WARNING: Removing unreachable block (ram,0x000101ee5a70) */

void FUN_101ee57a0(long param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  long unaff_x21;
  undefined8 uStack_b8;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  long alStack_78 [3];
  
  lVar4 = unaff_x20;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = lVar4;
  func_0x000107c5faec();
  uVar10 = param_2;
  func_0x000107c61170(lVar4);
  lVar4 = unaff_x20;
  func_0x000107c5dc3c();
  iVar3 = (int)lVar4;
  lVar4 = param_1;
  if (iVar3 < 4) {
    if (iVar3 != 0) {
      if (iVar3 == 2) {
        func_0x000107c520a4();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60b0);
          (*pcVar2)();
        }
        FUN_101ede318(param_1);
        if (unaff_x21 != 0) {
          func_0x000107c6142c(param_2);
          func_0x000107c61170(unaff_x20);
          return;
        }
        func_0x000107c61170(unaff_x20);
        func_0x000107c61428(param_1 + 0x10,alStack_78,0x21,0);
        FUN_101edf31c(lVar4,uVar10,param_3);
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        func_0x000107c61558(uVar8);
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
        FUN_101ede9ac(lVar4,uVar10,param_3,lVar5,param_2,uVar8);
        func_0x000107c6142c(param_2);
        *(undefined8 *)(param_1 + 0x10) = uVar12;
        func_0x000107c614a8(alStack_78);
        return;
      }
      if (iVar3 == 3) {
        func_0x000107c61428(param_1 + 0x10,alStack_78,0x20,0);
        lVar13 = *(long *)(param_1 + 0x10);
        if (*(long *)(lVar13 + 0x10) != 0) {
          func_0x000107c61434(lVar13);
          lVar6 = lVar5;
          uVar10 = param_2;
          func_0x000100029284();
          if ((uVar10 & 1) != 0) {
            puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar6 * 0x18);
            uVar8 = *puVar11;
            uVar12 = puVar11[1];
            uStack_80 = (ulong)*(byte *)(puVar11 + 2);
            uStack_98 = uVar12;
            uVar10 = uStack_80;
            FUN_101edf31c(uVar8,uVar12,uStack_80);
            func_0x000107c614a8(alStack_78);
            func_0x000107c6142c(lVar13);
            func_0x000107c4ee34();
            func_0x000107c61180();
            if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60c0);
              (*pcVar2)();
            }
            FUN_101ede318();
            func_0x000107c61170(unaff_x20);
            if (unaff_x21 != 0) goto LAB_101ee6030;
            lStack_88 = lVar4;
            uStack_90 = uStack_98;
            uVar9 = uVar10;
            FUN_101ee60dc(lVar4,uStack_98,uVar10,uVar8,uVar12,uStack_80);
LAB_101ee5f24:
            FUN_101edeb30(lVar4,uStack_98,uVar10);
LAB_101ee5f3c:
            FUN_101edeb30(uVar8,uVar12,uStack_80);
            func_0x000107c61428(param_1 + 0x10,alStack_78,0x21,0);
            FUN_101edf31c(lStack_88,uStack_90,uVar9);
            uVar8 = *(undefined8 *)(param_1 + 0x10);
            func_0x000107c61558(uVar8);
            uVar12 = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)(param_1 + 0x10) = 0x8000000000000000;
            FUN_101ede9ac(lStack_88,uStack_90,uVar9,lVar5,param_2,uVar8);
            func_0x000107c6142c(param_2);
            *(undefined8 *)(param_1 + 0x10) = uVar12;
            func_0x000107c614a8(alStack_78);
            return;
          }
          goto LAB_101ee5d74;
        }
        goto LAB_101ee5d7c;
      }
    }
LAB_101ee5b68:
    func_0x000107c6142c(param_2);
    if (lRam0000000112e3b790 != -1) {
      param_2 = 0x112e3b790;
      func_0x000107c61568(0x112e3b790,FUN_101ee3a94);
    }
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_2,0,0);
    FUN_101ee2e24(0x1138045f0);
  }
  else {
    lStack_a8 = param_1;
    if (iVar3 < 6) {
      if (iVar3 == 4) {
        func_0x000107c61428(param_1 + 0x10,alStack_78,0x20,0);
        lVar13 = *(long *)(param_1 + 0x10);
        if (*(long *)(lVar13 + 0x10) != 0) {
          func_0x000107c61434(lVar13);
          lVar6 = lVar5;
          uVar10 = param_2;
          func_0x000100029284();
          if ((uVar10 & 1) != 0) {
            puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar6 * 0x18);
            uVar8 = *puVar11;
            uVar12 = puVar11[1];
            bVar1 = *(byte *)(puVar11 + 2);
            uVar10 = (ulong)bVar1;
            uStack_80 = (ulong)(uint)bVar1;
            uStack_98 = uVar12;
            FUN_101edf31c(uVar8);
            func_0x000107c614a8(alStack_78);
            func_0x000107c6142c(lVar13);
            func_0x000107c3dee4();
            func_0x000107c61180();
            if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60b4);
              (*pcVar2)();
            }
            FUN_101ede318();
            lVar6 = unaff_x20;
            if (unaff_x21 == 0) {
              func_0x000107c61170(unaff_x20);
              uStack_80 = (ulong)(uint)bVar1;
              lStack_88 = lVar4;
              uStack_90 = uStack_98;
              uVar9 = uVar10;
              FUN_101ee6368(lVar4,uStack_98,uVar10,uVar8,uVar12,uStack_80);
LAB_101ee5c8c:
              if (unaff_x21 != 0) {
                FUN_101edeb30(lVar4,uStack_98,uVar10);
                goto LAB_101ee6030;
              }
              goto LAB_101ee5f24;
            }
LAB_101ee5d68:
            func_0x000107c61170(lVar6);
LAB_101ee6030:
            FUN_101edeb30(uVar8,uVar12,uStack_80);
            func_0x000107c6142c(param_2);
            return;
          }
LAB_101ee5d74:
          func_0x000107c6142c(lVar13);
        }
      }
      else {
        if (iVar3 != 5) goto LAB_101ee5b68;
        func_0x000107c61428(param_1 + 0x10,alStack_78,0x20,0);
        lVar13 = *(long *)(param_1 + 0x10);
        if (*(long *)(lVar13 + 0x10) != 0) {
          func_0x000107c61434(lVar13);
          lVar6 = lVar5;
          uVar10 = param_2;
          func_0x000100029284();
          if ((uVar10 & 1) != 0) {
            puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar6 * 0x18);
            uVar8 = *puVar11;
            uVar12 = puVar11[1];
            bVar1 = *(byte *)(puVar11 + 2);
            uStack_98 = (ulong)bVar1;
            uStack_80 = (ulong)bVar1;
            uStack_a0 = uVar12;
            FUN_101edf31c(uVar8);
            func_0x000107c614a8(alStack_78);
            func_0x000107c6142c(lVar13);
            lVar13 = unaff_x20;
            func_0x000107c49714();
            func_0x000107c61180();
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60bc);
              (*pcVar2)();
            }
            lVar6 = lVar13;
            func_0x000107c3e140();
            func_0x000107c61180();
            func_0x000107c61170(lVar13);
            if (lVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60cc);
              (*pcVar2)();
            }
            FUN_101ede318();
            if (unaff_x21 == 0) {
              uStack_b8 = uStack_a0;
              uVar10 = uStack_98;
              func_0x000107c61170(lVar6);
              func_0x000107c49714();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60d4);
                (*pcVar2)();
              }
              lVar13 = unaff_x20;
              func_0x000107c3e144();
              func_0x000107c61180();
              func_0x000107c61170(unaff_x20);
              if (lVar13 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60dc);
                (*pcVar2)();
              }
              FUN_101ede318(param_1);
              func_0x000107c61170(lVar13);
              uVar9 = uStack_98 & 0xffffffff;
              uStack_ac = (undefined4)uVar10;
              lStack_88 = lStack_a8;
              uStack_90 = uStack_a0;
              FUN_101ee65f0(lStack_a8,uStack_a0,uVar9,lVar4,uStack_b8,uVar10,uVar8,uVar12,bVar1);
              goto LAB_101ee6000;
            }
            goto LAB_101ee5d68;
          }
          goto LAB_101ee5d74;
        }
      }
    }
    else if (iVar3 == 6) {
      func_0x000107c61428(param_1 + 0x10,alStack_78,0x20,0);
      lVar13 = *(long *)(param_1 + 0x10);
      if (*(long *)(lVar13 + 0x10) != 0) {
        func_0x000107c61434(lVar13);
        lVar6 = lVar5;
        uVar10 = param_2;
        func_0x000100029284();
        if ((uVar10 & 1) != 0) {
          puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar6 * 0x18);
          uVar8 = *puVar11;
          uVar12 = puVar11[1];
          bVar1 = *(byte *)(puVar11 + 2);
          uStack_98 = (ulong)bVar1;
          uStack_80 = (ulong)bVar1;
          uStack_a0 = uVar12;
          FUN_101edf31c(uVar8);
          func_0x000107c614a8(alStack_78);
          func_0x000107c6142c(lVar13);
          lVar13 = unaff_x20;
          func_0x000107c52964();
          func_0x000107c61180();
          if (lVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60b8);
            (*pcVar2)();
          }
          lVar6 = lVar13;
          func_0x000107c3e140();
          func_0x000107c61180();
          func_0x000107c61170(lVar13);
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60c8);
            (*pcVar2)();
          }
          FUN_101ede318();
          if (unaff_x21 == 0) {
            uStack_b8 = uStack_a0;
            uVar10 = uStack_98;
            func_0x000107c61170(lVar6);
            func_0x000107c52964();
            func_0x000107c61180();
            if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60d0);
              (*pcVar2)();
            }
            lVar13 = unaff_x20;
            func_0x000107c3e144();
            func_0x000107c61180();
            func_0x000107c61170(unaff_x20);
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60d8);
              (*pcVar2)();
            }
            FUN_101ede318(param_1);
            func_0x000107c61170(lVar13);
            uVar9 = uStack_98 & 0xffffffff;
            uStack_ac = (undefined4)uVar10;
            lStack_88 = lStack_a8;
            uStack_90 = uStack_a0;
            FUN_101ee692c(lStack_a8,uStack_a0,uVar9,lVar4,uStack_b8,uVar10,uVar8,uVar12,bVar1);
LAB_101ee6000:
            uStack_98 = uStack_98 & 0xffffffff;
            if (unaff_x21 == 0) {
              FUN_101edeb30(lVar4,uStack_b8,uStack_ac);
              FUN_101edeb30(lStack_a8,uStack_a0,uStack_98);
              goto LAB_101ee5f3c;
            }
            FUN_101edeb30(lVar4,uStack_b8,uStack_ac);
            FUN_101edeb30(lStack_a8,uStack_a0,uStack_98);
            goto LAB_101ee6030;
          }
          goto LAB_101ee5d68;
        }
        goto LAB_101ee5d74;
      }
    }
    else {
      if (iVar3 != 7) goto LAB_101ee5b68;
      func_0x000107c61428(param_1 + 0x10,alStack_78,0x20,0);
      lVar13 = *(long *)(param_1 + 0x10);
      if (*(long *)(lVar13 + 0x10) != 0) {
        func_0x000107c61434(lVar13);
        lVar6 = lVar5;
        uVar10 = param_2;
        func_0x000100029284();
        if ((uVar10 & 1) != 0) {
          puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar6 * 0x18);
          uVar8 = *puVar11;
          uVar12 = puVar11[1];
          bVar1 = *(byte *)(puVar11 + 2);
          uVar10 = (ulong)bVar1;
          uStack_80 = (ulong)(uint)bVar1;
          uStack_98 = uVar12;
          FUN_101edf31c(uVar8);
          func_0x000107c614a8(alStack_78);
          func_0x000107c6142c(lVar13);
          func_0x000107c4fe98();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee60c4);
            (*pcVar2)();
          }
          FUN_101ede318();
          lVar6 = unaff_x20;
          if (unaff_x21 == 0) {
            func_0x000107c61170(unaff_x20);
            uStack_80 = (ulong)(uint)bVar1;
            lStack_88 = lVar4;
            uStack_90 = uStack_98;
            uVar9 = uVar10;
            FUN_101ee6cf4(lVar4,uStack_98,uVar10,uVar8,uVar12,uStack_80);
            goto LAB_101ee5c8c;
          }
          goto LAB_101ee5d68;
        }
        goto LAB_101ee5d74;
      }
    }
LAB_101ee5d7c:
    plVar7 = alStack_78;
    func_0x000107c614a8();
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,plVar7,0,0);
    plVar7[3] = (long)PTR___sSSN_11034da80;
    *plVar7 = lVar5;
    plVar7[1] = param_2;
    *(undefined1 *)(plVar7 + 5) = 1;
  }
  func_0x000107c61654();
  return;
}



/* Entry: 101ee60dc; end: 101ee6367;  */

void FUN_101ee60dc(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_6 = param_6 & 0xff;
  if (param_6 < 3) {
    if (param_6 - 1 < 2) {
LAB_101ee61a4:
      if (lRam0000000112e3b790 != -1) {
        param_1 = (undefined8 *)0x112e3b790;
        func_0x000107c61568(0x112e3b790,FUN_101ee3a94);
      }
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      FUN_101ee2e24(0x1138045f0);
      goto LAB_101ee62bc;
    }
    if ((param_3 & 0xff) == 0) {
      func_0x000107c61434(param_2);
      func_0x000107c5fb78(param_4,param_5);
      return;
    }
    if ((((uint)param_3 & 0xff) != 5) || (param_2 != 0 || param_1 != (undefined8 *)0x0)) {
      puVar1 = param_1;
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,puVar1,0,0);
      *puVar1 = 0x676e69727453;
      puVar1[1] = 0xe600000000000000;
      puVar1[2] = param_1;
      puVar1[3] = param_2;
      *(char *)(puVar1 + 4) = (char)param_3;
      *(undefined1 *)(puVar1 + 5) = 2;
      FUN_101edf31c(param_1,param_2,param_3);
      goto LAB_101ee62bc;
    }
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    param_1[3] = &UNK_1106c9838;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 5;
  }
  else {
    if (param_6 == 3) {
      lVar2 = 0x112e3b798;
      func_0x0001000285a8(0x112e3b798,&UNK_10dc0aa40);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined8 **)(lVar2 + 0x20) = param_1;
      *(long *)(lVar2 + 0x28) = param_2;
      *(char *)(lVar2 + 0x30) = (char)param_3;
      FUN_101edf31c(param_1,param_2,param_3);
      FUN_101edf31c(param_4,param_5,3);
      func_0x000101ee70dc(param_4);
      return;
    }
    if (param_6 == 4) goto LAB_101ee61a4;
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    param_1[3] = PTR___sSSN_11034da80;
    *param_1 = 0x646e6570657270;
    param_1[1] = 0xe700000000000000;
  }
  *(undefined1 *)(param_1 + 5) = 1;
LAB_101ee62bc:
  func_0x000107c61654();
  return;
}



/* Entry: 101ee6368; end: 101ee65ef;  */

void FUN_101ee6368(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_6 = param_6 & 0xff;
  if (param_6 < 3) {
    if (param_6 - 1 < 2) {
LAB_101ee6430:
      if (lRam0000000112e3b790 != -1) {
        param_1 = (undefined8 *)0x112e3b790;
        func_0x000107c61568(0x112e3b790,FUN_101ee3a94);
      }
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      FUN_101ee2e24(0x1138045f0);
      goto LAB_101ee6544;
    }
    if ((param_3 & 0xff) == 0) {
      func_0x000107c61434(param_5);
      func_0x000107c5fb78(param_1,param_2);
      return;
    }
    if ((((uint)param_3 & 0xff) != 5) || (param_2 != 0 || param_1 != (undefined8 *)0x0)) {
      puVar1 = param_1;
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,puVar1,0,0);
      *puVar1 = 0x676e69727453;
      puVar1[1] = 0xe600000000000000;
      puVar1[2] = param_1;
      puVar1[3] = param_2;
      *(char *)(puVar1 + 4) = (char)param_3;
      *(undefined1 *)(puVar1 + 5) = 2;
      FUN_101edf31c(param_1,param_2,param_3);
      goto LAB_101ee6544;
    }
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    param_1[3] = &UNK_1106c9838;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 5;
  }
  else {
    if (param_6 == 3) {
      lVar2 = 0x112e3b798;
      func_0x0001000285a8(0x112e3b798,&UNK_10dc0aa40);
      func_0x000107c61534();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined8 **)(lVar2 + 0x20) = param_1;
      *(long *)(lVar2 + 0x28) = param_2;
      *(char *)(lVar2 + 0x30) = (char)param_3;
      FUN_101edf31c(param_1,param_2,param_3);
      FUN_101edf31c(param_4,param_5,3);
      func_0x000101ee70dc(lVar2);
      return;
    }
    if (param_6 == 4) goto LAB_101ee6430;
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    param_1[3] = PTR___sSSN_11034da80;
    *param_1 = 0x646e65707061;
    param_1[1] = 0xe600000000000000;
  }
  *(undefined1 *)(param_1 + 5) = 1;
LAB_101ee6544:
  func_0x000107c61654();
  return;
}



/* Entry: 101ee65f0; end: 101ee692b;  */

long FUN_101ee65f0(long *param_1,undefined8 param_2,ulong param_3,double param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,byte param_9)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x22;
  ulong uVar4;
  ulong uVar5;
  
  if (2 < param_9) {
    if (param_9 == 3) {
      uVar1 = (uint)param_6 & 0xff;
      if (uVar1 == 2) {
        if ((((ulong)param_4 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee6924);
          (*pcVar2)();
        }
        if (param_4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee6928);
          (*pcVar2)();
        }
        if (9.223372036854776e+18 <= param_4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee692c);
          (*pcVar2)();
        }
        uVar4 = (ulong)param_4;
        if ((-1 < (long)uVar4) && (uVar5 = *(ulong *)(param_7 + 0x10), uVar4 <= uVar5)) {
          FUN_101edf31c(param_7,param_8,3);
          FUN_101edf31c(param_1,param_2,param_3);
          lVar3 = param_7;
          func_0x000107c61558();
          if (((int)lVar3 == 0) || (*(ulong *)(param_7 + 0x18) >> 1 <= uVar5)) {
            FUN_101ee71d8();
            param_7 = lVar3;
          }
          FUN_101ee7304(uVar4,uVar4,1,param_1,param_2,param_3 & 0xffffffff);
          FUN_101edeb30(param_1,param_2,param_3 & 0xffffffff);
          return param_7;
        }
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
        lVar3 = 0x112e3b7a0;
        func_0x0001000285a8(0x112e3b7a0,&UNK_10da274c0);
        *param_1 = param_7;
        param_1[3] = lVar3;
        param_1[4] = uVar4;
        *(undefined1 *)(param_1 + 5) = 3;
        func_0x000107c61654();
        func_0x000107c61434(param_7);
        return param_7;
      }
      if ((uVar1 == 5) && (param_5 == 0 && param_4 == 0.0)) {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
        param_1[3] = (long)&UNK_1106c9838;
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 2) = 5;
        *(undefined1 *)(param_1 + 5) = 1;
      }
      else {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
        *param_1 = 0x656c62756f44;
        param_1[1] = -0x1a00000000000000;
        param_1[2] = (long)param_4;
        param_1[3] = param_5;
        *(char *)(param_1 + 4) = (char)param_6;
        *(undefined1 *)(param_1 + 5) = 2;
        FUN_101edf31c(param_4,param_5,param_6);
        unaff_x22 = param_6;
      }
      goto LAB_101ee666c;
    }
    if (param_9 != 4) {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      param_1[3] = (long)PTR___sSSN_11034da80;
      *param_1 = 0x7441747265736e69;
      param_1[1] = -0x1800000000000000;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_101ee666c;
    }
  }
  if (lRam0000000112e3b790 != -1) {
    param_1 = (long *)0x112e3b790;
    func_0x000107c61568(0x112e3b790,FUN_101ee3a94);
  }
  FUN_101ede824();
  func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
  FUN_101ee2e24(0x1138045f0);
LAB_101ee666c:
  func_0x000107c61654();
  return unaff_x22;
}



/* Entry: 101ee692c; end: 101ee6cf3;  */

double FUN_101ee692c(double *param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    double param_5,ulong param_6,double param_7,undefined8 param_8,byte param_9)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  long lVar8;
  double unaff_x20;
  
  if (param_9 < 3) {
    if (lRam0000000112e3b790 != -1) {
      param_1 = (double *)0x112e3b790;
      func_0x000107c61568(0x112e3b790,FUN_101ee3a94);
    }
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    FUN_101ee2e24(0x1138045f0);
    param_7 = unaff_x20;
    goto LAB_101ee6a80;
  }
  if (param_9 == 3) {
    uVar1 = (uint)param_6 & 0xff;
    if (uVar1 == 2) {
      if ((((ulong)param_4 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101ee6cd8);
        (*pcVar5)();
      }
      if (param_4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101ee6cdc);
        (*pcVar5)();
      }
      if (9.223372036854776e+18 <= param_4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101ee6ce0);
        (*pcVar5)();
      }
      dVar7 = (double)(long)param_4;
      if ((-1 < (long)dVar7) && ((ulong)dVar7 < (ulong)*(double *)((long)param_7 + 0x10))) {
        FUN_101edf31c(param_7,param_8,3);
        FUN_101edf31c(param_1,param_2,param_3);
        dVar6 = param_7;
        func_0x000107c61558();
        if (((ulong)dVar6 & 1) == 0) {
          FUN_101ee72f0();
        }
        if ((ulong)dVar7 < (ulong)*(double *)((long)param_7 + 0x10)) {
          lVar8 = (long)param_7 + (long)dVar7 * 0x18;
          uVar2 = *(undefined8 *)(lVar8 + 0x20);
          uVar3 = *(undefined8 *)(lVar8 + 0x28);
          *(double **)(lVar8 + 0x20) = param_1;
          *(undefined8 *)(lVar8 + 0x28) = param_2;
          uVar4 = *(undefined1 *)(lVar8 + 0x30);
          *(char *)(lVar8 + 0x30) = (char)param_3;
          FUN_101edeb30(uVar2,uVar3,uVar4);
          return param_7;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101ee6cf4);
        (*pcVar5)();
      }
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      dVar6 = 2.27857189761505e-314;
      func_0x0001000285a8(0x112e3b7a0,&UNK_10da274c0);
      *param_1 = param_7;
      param_1[3] = dVar6;
      param_1[4] = dVar7;
      *(undefined1 *)(param_1 + 5) = 3;
      func_0x000107c61654();
      func_0x000107c61434(param_7);
      return param_7;
    }
    if ((uVar1 == 5) && (param_5 == 0.0 && param_4 == 0.0)) {
LAB_101ee6c1c:
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      param_1[3] = (double)&UNK_1106c9838;
      *param_1 = 0.0;
      param_1[1] = 0.0;
      *(undefined1 *)(param_1 + 2) = 5;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_101ee6a80;
    }
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    dVar7 = 5.50963148455621e-310;
  }
  else {
    if (param_9 != 4) {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      param_1[3] = (double)PTR___sSSN_11034da80;
      *param_1 = 2.46694068551145e-312;
      param_1[1] = -3.241809038188276e+178;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_101ee6a80;
    }
    if ((param_6 & 0xff) == 0) {
      dVar7 = param_7;
      func_0x000107c61434(param_7);
      func_0x000107c61558();
      FUN_101edf31c(param_1,param_2,param_3);
      FUN_101ede9ac(param_1,param_2,param_3,param_4,param_5,dVar7);
      return param_7;
    }
    if ((((uint)param_6 & 0xff) == 5) && (param_5 == 0.0 && param_4 == 0.0)) goto LAB_101ee6c1c;
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    dVar7 = 5.61870786089432e-310;
  }
  *param_1 = dVar7;
  param_1[1] = -2.1245519712670684e+183;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(char *)(param_1 + 4) = (char)param_6;
  *(undefined1 *)(param_1 + 5) = 2;
  FUN_101edf31c(param_4,param_5,param_6);
  param_7 = param_4;
LAB_101ee6a80:
  func_0x000107c61654();
  return param_7;
}



/* Entry: 101ee6cf4; end: 101ee7017;  */

void FUN_101ee6cf4(long *param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,
                  byte param_6)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_6 < 3) {
    if (lRam0000000112e3b790 != -1) {
      param_1 = (long *)0x112e3b790;
      func_0x000107c61568(0x112e3b790,FUN_101ee3a94);
    }
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
    FUN_101ee2e24(0x1138045f0);
    goto LAB_101ee6e48;
  }
  plVar3 = param_1;
  if (param_6 == 3) {
    uVar1 = (uint)param_3 & 0xff;
    if (uVar1 == 2) {
      if ((((ulong)param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee7010);
        (*pcVar2)();
      }
      if ((double)param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee7014);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= (double)param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee7018);
        (*pcVar2)();
      }
      uVar5 = (ulong)(double)param_1;
      if ((-1 < (long)uVar5) && (uVar5 < *(ulong *)(param_4 + 0x10))) {
        func_0x000107c61434(param_4);
        FUN_101ee7044(uVar5);
        FUN_101edeb30();
        return;
      }
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      lVar4 = 0x112e3b7a0;
      func_0x0001000285a8(0x112e3b7a0,&UNK_10da274c0);
      *param_1 = param_4;
      param_1[3] = lVar4;
      param_1[4] = uVar5;
      *(undefined1 *)(param_1 + 5) = 3;
      func_0x000107c61654();
      func_0x000107c61434(param_4);
      return;
    }
    if ((uVar1 == 5) && (param_2 == 0 && param_1 == (long *)0x0)) {
LAB_101ee6f50:
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      param_1[3] = (long)&UNK_1106c9838;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 5;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_101ee6e48;
    }
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,plVar3,0,0);
    lVar4 = 0x656c62756f44;
  }
  else {
    if (param_6 != 4) {
      FUN_101ede824();
      func_0x000107c613f8(&UNK_11049a1b0,param_1,0,0);
      param_1[3] = (long)PTR___sSSN_11034da80;
      *param_1 = 0x744165766f6d6572;
      param_1[1] = -0x1800000000000000;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_101ee6e48;
    }
    if ((param_3 & 0xff) == 0) {
      func_0x000107c61434(param_4);
      FUN_101ee15fc(param_1,param_2);
      func_0x000101ee1924();
      return;
    }
    if ((((uint)param_3 & 0xff) == 5) && (param_2 == 0 && param_1 == (long *)0x0))
    goto LAB_101ee6f50;
    FUN_101ede824();
    func_0x000107c613f8(&UNK_11049a1b0,plVar3,0,0);
    lVar4 = 0x676e69727453;
  }
  *plVar3 = lVar4;
  plVar3[1] = -0x1a00000000000000;
  plVar3[2] = (long)param_1;
  plVar3[3] = param_2;
  *(char *)(plVar3 + 4) = (char)param_3;
  *(undefined1 *)(plVar3 + 5) = 2;
  FUN_101edf31c(param_1,param_2,param_3);
LAB_101ee6e48:
  func_0x000107c61654();
  return;
}



/* Entry: 101ee7018; end: 101ee7043;  */

undefined1  [16] FUN_101ee7018(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  FUN_101ee57a0();
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 101ee7044; end: 101ee71d7;  */

undefined8 FUN_101ee7044(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar3 = uVar6;
  func_0x000107c61558();
  if ((uVar3 & 1) == 0) {
    FUN_101ee72f0();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar4 = uVar6 + param_1 * 0x18;
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    uVar1 = *puVar5;
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    func_0x000107c610b8(puVar5,lVar4 + 0x38,(lVar7 - param_1) * 0x18);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee70dc);
  (*pcVar2)();
}



/* Entry: 101ee71d8; end: 101ee72ef;  */

undefined * FUN_101ee71d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee72f0);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e3b798;
    func_0x0001000285a8(0x112e3b798,&UNK_10dc0aa40);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106c9838);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 101ee72f0; end: 101ee7303;  */

/* WARNING: Removing unreachable block (ram,0x000101ee71f4) */
/* WARNING: Removing unreachable block (ram,0x000101ee7204) */
/* WARNING: Removing unreachable block (ram,0x000101ee72ec) */
/* WARNING: Removing unreachable block (ram,0x000101ee7210) */
/* WARNING: Removing unreachable block (ram,0x000101ee7218) */
/* WARNING: Removing unreachable block (ram,0x000101ee729c) */
/* WARNING: Removing unreachable block (ram,0x000101ee72ac) */
/* WARNING: Removing unreachable block (ram,0x000101ee72b0) */
/* WARNING: Removing unreachable block (ram,0x000101ee72b4) */
/* WARNING: Removing unreachable block (ram,0x000101ee72b8) */

undefined * FUN_101ee72f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar4) {
    lVar1 = lVar4;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112e3b798;
    func_0x0001000285a8(0x112e3b798,&UNK_10dc0aa40);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar4;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar4,&UNK_1106c9838);
  func_0x000107c6142c(param_1);
  return puVar2;
}



/* Entry: 101ee7304; end: 101ee7407;  */

void FUN_101ee7304(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 *puVar6;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ee73f8);
    (*pcVar3)();
  }
  lVar5 = *unaff_x20;
  puVar6 = (undefined8 *)(lVar5 + 0x20 + param_1 * 0x18);
  func_0x000107c61408(puVar6,lVar1,&UNK_1106c9838);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ee73fc);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    if (SBORROW8(*(long *)(lVar5 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ee7400);
      (*pcVar3)();
    }
    puVar4 = (undefined8 *)(lVar5 + 0x20 + param_2 * 0x18);
    if (puVar6 + param_3 * 3 != puVar4 ||
        puVar4 + (*(long *)(lVar5 + 0x10) - param_2) * 3 <= puVar6 + param_3 * 3) {
      func_0x000107c610b8();
    }
    if (SCARRY8(*(long *)(lVar5 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ee7404);
      (*pcVar3)();
    }
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + lVar2;
  }
  if (0 < param_3) {
    *puVar6 = param_4;
    puVar6[1] = param_5;
    *(char *)(puVar6 + 2) = (char)param_6;
    FUN_101edf31c(param_4,param_5,param_6);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ee7408);
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101ee7408; end: 101ee773b;  */

/* WARNING: Removing unreachable block (ram,0x000101ee758c) */
/* WARNING: Removing unreachable block (ram,0x000101ee75d4) */
/* WARNING: Removing unreachable block (ram,0x000101ee7620) */
/* WARNING: Removing unreachable block (ram,0x000101ee763c) */

undefined8 * FUN_101ee7408(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c3e670();
  func_0x000107c61180();
  if (unaff_x20 != (undefined8 *)0x0) {
    puVar3 = param_1;
    FUN_101ede318(param_1);
    puVar4 = unaff_x20;
    func_0x000107c61170();
    if (unaff_x21 == 0) {
      uVar1 = (uint)param_3 & 0xff;
      if (uVar1 < 3) {
        if (uVar1 - 1 < 2) {
          FUN_101ede824();
          func_0x000107c613f8(&UNK_11049a1b0,puVar4,0,0);
          uStack_60 = 0;
          uStack_58 = 0xe000000000000000;
          func_0x000107c602fc(0x13);
          func_0x000107c6142c(uStack_58);
          uStack_60 = 0xd000000000000011;
          uStack_58 = 0x800000010f0193d0;
          uVar5 = param_2;
          FUN_101ee8780(puVar3,param_2,param_3);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar5);
          FUN_101edeb30(puVar3,param_2,param_3);
          *puVar4 = uStack_60;
          puVar4[1] = uStack_58;
          *(undefined1 *)(puVar4 + 5) = 0;
          func_0x000107c61654();
          unaff_x20 = &uStack_60;
        }
        else {
          func_0x000107c61434(param_2);
          unaff_x20 = puVar3;
          FUN_101ee773c(puVar3,param_2,param_1);
          FUN_101edeb30(puVar3,param_2,0);
          FUN_101edeb30(puVar3,param_2,0);
        }
      }
      else if (uVar1 == 3) {
        FUN_101edf31c(puVar3,param_2,3);
        unaff_x20 = puVar3;
        FUN_101ee7b48(puVar3,param_1);
        FUN_101edf31c();
        FUN_101edeb30(puVar3,param_2,3);
        FUN_101edeb30(puVar3,param_2,3);
      }
      else if (uVar1 == 4) {
        unaff_x20 = puVar3;
        func_0x000107c61434(puVar3);
        FUN_101ee7940();
        FUN_101edeb30(puVar3,param_2,4);
        FUN_101edeb30(puVar3,param_2,4);
      }
      else {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,puVar4,0,0);
        puVar4[3] = PTR___sSSN_11034da80;
        *puVar4 = 0xd000000000000015;
        puVar4[1] = 0x800000010f0193f0;
        *(undefined1 *)(puVar4 + 5) = 1;
        func_0x000107c61654();
      }
    }
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee773c);
  (*pcVar2)();
}



/* Entry: 101ee773c; end: 101ee793f;  */

void FUN_101ee773c(undefined8 *param_1,long param_2,double param_3)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  double dVar4;
  undefined1 uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  long unaff_x21;
  
  lVar6 = param_2;
  dVar4 = param_3;
  func_0x000107c45330();
  uVar3 = SUB84(dVar4,0);
  func_0x000107c61180();
  if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee7940);
    (*pcVar2)();
  }
  FUN_101ede318();
  func_0x000107c61170();
  if (unaff_x21 == 0) {
    if ((uVar3 & 0xff) == 2) {
      if ((((ulong)param_3 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee7934);
        (*pcVar2)();
      }
      if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee7938);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee793c);
        (*pcVar2)();
      }
      lVar6 = (long)param_3;
      if ((lVar6 < 0) ||
         (unaff_x20 = param_1, func_0x000107c5fb5c(param_1,param_2), (long)unaff_x20 <= lVar6)) {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,unaff_x20,0,0);
        puVar1 = PTR___sSSN_11034da80;
        *unaff_x20 = param_1;
        unaff_x20[1] = param_2;
        unaff_x20[3] = puVar1;
        unaff_x20[4] = lVar6;
        *(undefined1 *)(unaff_x20 + 5) = 3;
        func_0x000107c61654();
        func_0x000107c61434(param_2);
      }
      else {
        func_0x000107c5fb6c(0xf,lVar6,param_1,param_2);
        func_0x000107c5fbcc();
      }
    }
    else {
      if (((uVar3 & 0xff) == 5) && (param_3 == 0.0 && lVar6 == 0)) {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,unaff_x20,0,0);
        unaff_x20[3] = &UNK_1106c9838;
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
        *(undefined1 *)(unaff_x20 + 2) = 5;
        uVar5 = 1;
      }
      else {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,unaff_x20,0,0);
        *unaff_x20 = 0x656c62756f44;
        unaff_x20[1] = 0xe600000000000000;
        unaff_x20[2] = param_3;
        unaff_x20[3] = lVar6;
        *(char *)(unaff_x20 + 4) = (char)uVar3;
        uVar5 = 2;
      }
      *(undefined1 *)(unaff_x20 + 5) = uVar5;
      func_0x000107c61654();
    }
  }
  return;
}



/* Entry: 101ee7940; end: 101ee7b1b;  */

void FUN_101ee7940(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = param_2;
    func_0x000107c45330();
    func_0x000107c61180();
    if (unaff_x20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee7b1c);
      (*pcVar1)();
    }
    FUN_101ede318();
    func_0x000107c61170();
    if (unaff_x21 == 0) {
      if ((param_3 & 0xff) == 0) {
        if (*(long *)(param_1 + 0x10) != 0) {
          func_0x000107c61434(param_1);
          uVar3 = uVar2;
          func_0x000100029284();
          if ((uVar3 & 1) != 0) {
            FUN_101edf31c();
          }
          func_0x000107c6142c(param_1);
        }
        FUN_101edeb30(param_2,uVar2,0);
      }
      else {
        if ((((uint)param_3 & 0xff) == 5) && (param_2 == 0 && uVar2 == 0)) {
          FUN_101ede824();
          func_0x000107c613f8(&UNK_11049a1b0,unaff_x20,0,0);
          unaff_x20[3] = &UNK_1106c9838;
          *unaff_x20 = 0;
          unaff_x20[1] = 0;
          *(undefined1 *)(unaff_x20 + 2) = 5;
          uVar4 = 1;
        }
        else {
          FUN_101ede824();
          func_0x000107c613f8(&UNK_11049a1b0,unaff_x20,0,0);
          *unaff_x20 = 0x676e69727453;
          unaff_x20[1] = 0xe600000000000000;
          unaff_x20[2] = param_2;
          unaff_x20[3] = uVar2;
          uVar4 = 2;
          *(char *)(unaff_x20 + 4) = (char)param_3;
        }
        *(undefined1 *)(unaff_x20 + 5) = uVar4;
        func_0x000107c61654();
      }
    }
  }
  return;
}



/* Entry: 101ee7b1c; end: 101ee7b47;  */

undefined1  [16] FUN_101ee7b1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  FUN_101ee7408();
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 101ee7b48; end: 101ee7d37;  */

void FUN_101ee7b48(long param_1,double param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  double dVar3;
  undefined1 uVar4;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  dVar3 = param_2;
  func_0x000107c45330();
  func_0x000107c61180();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee7d38);
    (*pcVar1)();
  }
  FUN_101ede318();
  func_0x000107c61170();
  if (unaff_x21 == 0) {
    if ((param_3 & 0xff) == 2) {
      if ((((ulong)param_2 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee7d2c);
        (*pcVar1)();
      }
      if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee7d30);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ee7d34);
        (*pcVar1)();
      }
      uVar5 = (ulong)param_2;
      if (((long)uVar5 < 0) || (*(ulong *)(param_1 + 0x10) <= uVar5)) {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,unaff_x20,0,0);
        lVar2 = 0x112e3b7a0;
        func_0x0001000285a8(0x112e3b7a0,&UNK_10da274c0);
        *unaff_x20 = param_1;
        unaff_x20[3] = lVar2;
        unaff_x20[4] = uVar5;
        *(undefined1 *)(unaff_x20 + 5) = 3;
        func_0x000107c61654();
        func_0x000107c61434(param_1);
      }
    }
    else {
      if (((param_3 & 0xff) == 5) && (param_2 == 0.0 && dVar3 == 0.0)) {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,unaff_x20,0,0);
        unaff_x20[3] = (long)&UNK_1106c9838;
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
        *(undefined1 *)(unaff_x20 + 2) = 5;
        uVar4 = 1;
      }
      else {
        FUN_101ede824();
        func_0x000107c613f8(&UNK_11049a1b0,unaff_x20,0,0);
        *unaff_x20 = 0x656c62756f44;
        unaff_x20[1] = -0x1a00000000000000;
        unaff_x20[2] = (long)param_2;
        unaff_x20[3] = (long)dVar3;
        *(char *)(unaff_x20 + 4) = (char)param_3;
        uVar4 = 2;
      }
      *(undefined1 *)(unaff_x20 + 5) = uVar4;
      func_0x000107c61654();
    }
  }
  return;
}



/* Entry: 101ee7d38; end: 101ee7d5b;  */

void FUN_101ee7d38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101ee7d5c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101ee7d5c; end: 101ee7d9b;  */

void FUN_101ee7d5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3b7c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSSSlsMc_11034dab0;
  func_0x000107c61520(PTR___sSSSlsMc_11034dab0,PTR___sSSN_11034da80);
  puRam0000000112e3b7c8 = puVar1;
  return;
}



/* Entry: 101ee7d9c; end: 101ee7dbf;  */

void FUN_101ee7d9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101ee7dc0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101ee7dc0; end: 101ee7e0f;  */

void FUN_101ee7dc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e3b7f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e3b7a0;
  func_0x00010002969c(0x112e3b7a0,&UNK_10da274c0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e3b7f0 = puVar2;
  return;
}



/* Entry: 101ee7e10; end: 101ee7eaf;  */

void FUN_101ee7e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101ee7eb0; end: 101ee81ab;  */

undefined1  [16] FUN_101ee7eb0(void)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  byte bStack_58;
  
  FUN_101ee2e24();
  if (bStack_58 < 2) {
    if (bStack_58 == 0) {
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x16);
      func_0x000107c6142c(uStack_98);
      pcVar1 = "Undefined function: ";
      uStack_a0 = 0xd000000000000014;
LAB_101ee80e4:
      uStack_98 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
      func_0x000107c5fb78(uStack_80,uStack_78);
      goto LAB_101ee80fc;
    }
    func_0x000100102924(&uStack_80,&uStack_a0);
    uStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x27);
    func_0x000107c5fb78(0xd000000000000025,0x800000010f019480);
    func_0x000107c603d0(&uStack_a0,&uStack_b0,PTR___sypN_11034f1a8 + 8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  }
  else {
    if (bStack_58 == 2) {
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_98);
      uStack_a0 = 0xd00000000000001b;
      uStack_98 = 0x800000010f019460;
      uVar4 = uStack_68;
      FUN_101ee8780(uStack_70,uStack_68,uStack_60);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar4);
      FUN_101edeb30(uStack_70,uStack_68,uStack_60);
      func_0x000107c5fb78(0x206f7420,0xe400000000000000);
      func_0x000107c5fb78(uStack_80,uStack_78);
LAB_101ee80fc:
      func_0x000107c6142c(uStack_78);
      goto LAB_101ee8188;
    }
    if (bStack_58 != 3) {
      uStack_a0 = 0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x15);
      func_0x000107c6142c(uStack_98);
      pcVar1 = "Unsupported model: ";
      uStack_a0 = 0xd000000000000013;
      goto LAB_101ee80e4;
    }
    func_0x000100102924(&uStack_80,&uStack_a0);
    uStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x2c);
    func_0x000107c5fb78(0xd000000000000026,0x800000010f019430);
    func_0x000107c603d0(&uStack_a0,&uStack_b0,PTR___sypN_11034f1a8 + 8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    func_0x000107c5fb78(0x5d,0xe100000000000000);
  }
  uVar2 = uStack_a8;
  uVar4 = uStack_b0;
  func_0x000100183ab8(&uStack_a0);
  uStack_a0 = uVar4;
  uStack_98 = uVar2;
LAB_101ee8188:
  auVar5._8_8_ = uStack_98;
  auVar5._0_8_ = uStack_a0;
  return auVar5;
}



/* Entry: 101ee81ac; end: 101ee81cf;  */

void FUN_101ee81ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101ee81d0; end: 101ee826f;  */

long FUN_101ee81d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101ee8270; end: 101ee861b;  */

undefined8 * FUN_101ee8270(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar6 = (uint)*(byte *)(param_2 + 10);
  if (4 < *(byte *)(param_2 + 10)) {
    uVar6 = *param_2 + 5;
  }
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      uVar2 = *(undefined8 *)(param_2 + 2);
      *param_1 = *(undefined8 *)param_2;
      param_1[1] = uVar2;
      *(undefined1 *)(param_1 + 5) = 0;
LAB_101ee8334:
      func_0x000107c61434();
      return param_1;
    }
    lVar4 = *(long *)(param_2 + 6);
    param_1[3] = lVar4;
    (*(code *)**(undefined8 **)(lVar4 + -8))(param_1);
    uVar5 = 1;
  }
  else if (uVar6 == 2) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 6);
    iVar3 = param_2[8];
    func_0x000107c61434();
    FUN_101edf31c(uVar2,uVar1,(char)iVar3);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    *(char *)(param_1 + 4) = (char)iVar3;
    uVar5 = 2;
  }
  else {
    if (uVar6 != 3) {
      uVar2 = *(undefined8 *)(param_2 + 2);
      *param_1 = *(undefined8 *)param_2;
      param_1[1] = uVar2;
      *(undefined1 *)(param_1 + 5) = 4;
      goto LAB_101ee8334;
    }
    lVar4 = *(long *)(param_2 + 6);
    param_1[3] = lVar4;
    (*(code *)**(undefined8 **)(lVar4 + -8))(param_1);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    uVar5 = 3;
  }
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Entry: 101ee861c; end: 101ee86fb;  */

int FUN_101ee861c(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfc;
  }
  iVar1 = 0;
  if (4 < *(byte *)(param_1 + 10)) {
    iVar1 = (*(byte *)(param_1 + 10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 101ee86fc; end: 101ee877f;  */

uint FUN_101ee86fc(ulong param_1,ulong param_2,byte param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_3 < 3) {
    uVar2 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    uVar3 = (uint)(((param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0);
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar3 = 1;
    }
    uVar1 = 0;
    if ((param_1 & 0x7fffffffffffffff) != 0) {
      uVar1 = uVar3;
    }
    uVar3 = (uint)param_1;
    if (param_3 != 1) {
      uVar3 = uVar1;
    }
    uVar1 = (uint)(uVar2 != 0);
    if (param_3 != 0) {
      uVar1 = uVar3;
    }
    return uVar1 & 1;
  }
  if ((param_3 != 3) && (param_3 != 4)) {
    return 0;
  }
  return (uint)(*(long *)(param_1 + 0x10) != 0);
}



/* Entry: 101ee8780; end: 101ee8c1f;  */

/* WARNING: Removing unreachable block (ram,0x000101ee8c14) */

undefined1  [16] FUN_101ee8780(ulong param_1,undefined8 param_2,byte param_3)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined1 uVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 ***pppuVar14;
  undefined8 uVar15;
  undefined8 ****ppppuVar16;
  undefined8 **ppuVar17;
  undefined8 ***pppuVar18;
  long lVar19;
  undefined8 ***pppuVar20;
  undefined1 *puVar21;
  undefined1 auVar22 [16];
  undefined8 ***pppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      pppuStack_a8 = (undefined8 ***)0x28676e69727473;
      ppuStack_a0 = (undefined8 **)0xe700000000000000;
      func_0x000107c5fb78();
    }
    else {
      if (param_3 == 1) {
        bVar8 = (param_1 & 1) == 0;
        pppuStack_a8 = (undefined8 ***)0x757274286c6f6f62;
        if (bVar8) {
          pppuStack_a8 = (undefined8 ***)0x6c6166286c6f6f62;
        }
        ppuStack_a0 = (undefined8 **)0xea00000000002965;
        if (bVar8) {
          ppuStack_a0 = (undefined8 **)0xeb00000000296573;
        }
        goto LAB_101ee8bec;
      }
      pppuStack_a8 = (undefined8 ***)0x0;
      ppuStack_a0 = (undefined8 **)0xe000000000000000;
      func_0x000107c5fb78(0x28656c62756f64,0xe700000000000000);
      func_0x000107c5fddc(param_1,&pppuStack_a8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    }
    uVar12 = 0x29;
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 4) {
        ppppuVar16 = *(undefined8 *****)(param_1 + 0x10);
        if (ppppuVar16 == (undefined8 ****)0x0) {
          pppuStack_a8 = (undefined8 ***)0x5d3a5b;
          ppuStack_a0 = (undefined8 **)0xe300000000000000;
        }
        else {
          ppuStack_80 = (undefined8 ***)0x5b;
          uStack_78 = 0xe100000000000000;
          func_0x000107c61434();
          ppppuVar9 = ppppuVar16;
          FUN_101ee8c2c(ppppuVar16,0);
          ppppuVar10 = &pppuStack_a8;
          FUN_101ee9908(ppppuVar10,ppppuVar9 + 4,ppppuVar16,param_1);
          func_0x000101ee1938(pppuStack_a8,ppuStack_a0,uStack_98,uStack_90,uStack_88);
          if (ppppuVar10 != ppppuVar16) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101ee8c14);
            (*pcVar7)();
          }
          pppuStack_a8 = ppppuVar9;
          FUN_101ee8cb8(&pppuStack_a8);
          pppuVar6 = pppuStack_a8;
          pppuVar18 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
          pppuVar20 = (undefined8 ***)pppuStack_a8[2];
          if (pppuVar20 == (undefined8 ***)0x0) {
            func_0x000107c61574(pppuStack_a8);
            pppuVar18 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            func_0x000100403514(0,pppuVar20,0);
            ppppuVar16 = (undefined8 ****)(pppuVar6 + 8);
            do {
              pppuStack_a8 = ppppuVar16[-4];
              pppuVar3 = ppppuVar16[-3];
              pppuVar1 = ppppuVar16[-2];
              pppuVar4 = ppppuVar16[-1];
              uVar5 = *(undefined1 *)ppppuVar16;
              ppuStack_a0 = pppuVar3;
              func_0x000107c61438(pppuVar3,2);
              FUN_101edf31c(pppuVar1,pppuVar4,uVar5);
              func_0x000107c5fb78(0x203a,0xe200000000000000);
              pppuVar14 = pppuVar4;
              FUN_101ee8780(pppuVar1,pppuVar4,uVar5);
              func_0x000107c5fb78();
              func_0x000107c6142c(pppuVar3);
              func_0x000107c6142c(pppuVar14);
              FUN_101edeb30(pppuVar1,pppuVar4,uVar5);
              ppuVar17 = ppuStack_a0;
              pppuVar1 = pppuStack_a8;
              uVar2 = *(ulong *)((long)pppuVar18 + 0x10);
              if (*(ulong *)((long)pppuVar18 + 0x18) >> 1 <= uVar2) {
                func_0x000100403514(1 < *(ulong *)((long)pppuVar18 + 0x18),uVar2 + 1,1);
              }
              ppppuVar16 = ppppuVar16 + 5;
              *(ulong *)((long)pppuVar18 + 0x10) = uVar2 + 1;
              *(undefined8 ****)((long)pppuVar18 + uVar2 * 0x10 + 0x20) = pppuVar1;
              *(undefined8 ***)((long)pppuVar18 + uVar2 * 0x10 + 0x28) = ppuVar17;
              pppuVar20 = (undefined8 ***)((long)pppuVar20 + -1);
            } while (pppuVar20 != (undefined8 ***)0x0);
            func_0x000107c61574(pppuVar6);
          }
          uVar12 = 0x112d38270;
          pppuStack_a8 = pppuVar18;
          func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
          uVar11 = uVar12;
          func_0x00010011d734();
          uVar13 = 0x202c;
          uVar15 = 0xe200000000000000;
          func_0x000107c5fa80(0x202c,0xe200000000000000,uVar12,uVar11);
          func_0x000107c6142c(pppuVar18);
          func_0x000107c5fb78(uVar13,uVar15);
          func_0x000107c6142c(uVar15);
          func_0x000107c5fb78(0x5d,0xe100000000000000);
          pppuStack_a8 = (undefined8 ***)ppuStack_80;
          ppuStack_a0 = (undefined8 **)uStack_78;
        }
      }
      else {
        pppuStack_a8 = (undefined8 ***)0x6c6c756e;
        ppuStack_a0 = (undefined8 **)0xe400000000000000;
      }
      goto LAB_101ee8bec;
    }
    pppuStack_a8 = (undefined8 ***)0x5b;
    ppuStack_a0 = (undefined8 **)0xe100000000000000;
    lVar19 = *(long *)(param_1 + 0x10);
    ppuVar17 = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar19 != 0) {
      ppuStack_80 = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,lVar19,0);
      puVar21 = (undefined1 *)(param_1 + 0x30);
      do {
        ppuVar17 = ppuStack_80;
        uVar12 = *(undefined8 *)(puVar21 + -0x10);
        uVar11 = *(undefined8 *)(puVar21 + -8);
        uVar5 = *puVar21;
        FUN_101edf31c(uVar12,uVar11,uVar5);
        uVar13 = uVar12;
        uVar15 = uVar11;
        FUN_101ee8780(uVar12,uVar11,uVar5);
        FUN_101edeb30(uVar12,uVar11,uVar5);
        uVar2 = *(ulong *)((long)ppuVar17 + 0x10);
        ppuStack_80 = ppuVar17;
        if (*(ulong *)((long)ppuVar17 + 0x18) >> 1 <= uVar2) {
          func_0x000100403514(1 < *(ulong *)((long)ppuVar17 + 0x18),uVar2 + 1,1);
        }
        puVar21 = puVar21 + 0x18;
        *(ulong *)((long)ppuStack_80 + 0x10) = uVar2 + 1;
        *(undefined8 *)((long)ppuStack_80 + uVar2 * 0x10 + 0x20) = uVar13;
        *(undefined8 *)((long)ppuStack_80 + uVar2 * 0x10 + 0x28) = uVar15;
        lVar19 = lVar19 + -1;
        ppuVar17 = ppuStack_80;
      } while (lVar19 != 0);
    }
    uVar12 = 0x112d38270;
    ppuStack_80 = ppuVar17;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar11 = uVar12;
    func_0x00010011d734();
    uVar13 = 0x202c;
    uVar15 = 0xe200000000000000;
    func_0x000107c5fa80(0x202c,0xe200000000000000,uVar12,uVar11);
    func_0x000107c6142c(ppuVar17);
    func_0x000107c5fb78(uVar13,uVar15);
    func_0x000107c6142c(uVar15);
    uVar12 = 0x5d;
  }
  func_0x000107c5fb78(uVar12,0xe100000000000000);
LAB_101ee8bec:
  auVar22._8_8_ = ppuStack_a0;
  auVar22._0_8_ = pppuStack_a8;
  return auVar22;
}



/* Entry: 101ee8c20; end: 101ee8c2b;  */

/* WARNING: Removing unreachable block (ram,0x000101ee8c14) */

undefined1  [16] FUN_101ee8c20(void)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined8 ***pppuVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 ***pppuVar15;
  undefined8 uVar16;
  undefined8 ****ppppuVar17;
  undefined8 **ppuVar18;
  undefined8 ***pppuVar19;
  ulong *unaff_x20;
  long lVar20;
  undefined8 ***pppuVar21;
  undefined1 *puVar22;
  undefined1 auVar23 [16];
  undefined8 ***pppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  
  uVar2 = *unaff_x20;
  bVar6 = (byte)unaff_x20[2];
  if (bVar6 < 3) {
    if (bVar6 == 0) {
      pppuStack_a8 = (undefined8 ***)0x28676e69727473;
      ppuStack_a0 = (undefined8 **)0xe700000000000000;
      func_0x000107c5fb78();
    }
    else {
      if (bVar6 == 1) {
        bVar9 = (uVar2 & 1) == 0;
        pppuStack_a8 = (undefined8 ***)0x757274286c6f6f62;
        if (bVar9) {
          pppuStack_a8 = (undefined8 ***)0x6c6166286c6f6f62;
        }
        ppuStack_a0 = (undefined8 **)0xea00000000002965;
        if (bVar9) {
          ppuStack_a0 = (undefined8 **)0xeb00000000296573;
        }
        goto LAB_101ee8bec;
      }
      pppuStack_a8 = (undefined8 ***)0x0;
      ppuStack_a0 = (undefined8 **)0xe000000000000000;
      func_0x000107c5fb78(0x28656c62756f64,0xe700000000000000);
      func_0x000107c5fddc(uVar2,&pppuStack_a8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    }
    uVar13 = 0x29;
  }
  else {
    if (bVar6 != 3) {
      if (bVar6 == 4) {
        ppppuVar17 = *(undefined8 *****)(uVar2 + 0x10);
        if (ppppuVar17 == (undefined8 ****)0x0) {
          pppuStack_a8 = (undefined8 ***)0x5d3a5b;
          ppuStack_a0 = (undefined8 **)0xe300000000000000;
        }
        else {
          ppuStack_80 = (undefined8 ***)0x5b;
          uStack_78 = 0xe100000000000000;
          func_0x000107c61434(uVar2,unaff_x20[1]);
          ppppuVar10 = ppppuVar17;
          FUN_101ee8c2c(ppppuVar17,0);
          ppppuVar11 = &pppuStack_a8;
          FUN_101ee9908(ppppuVar11,ppppuVar10 + 4,ppppuVar17,uVar2);
          func_0x000101ee1938(pppuStack_a8,ppuStack_a0,uStack_98,uStack_90,uStack_88);
          if (ppppuVar11 != ppppuVar17) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101ee8c14);
            (*pcVar8)();
          }
          pppuStack_a8 = ppppuVar10;
          FUN_101ee8cb8(&pppuStack_a8);
          pppuVar7 = pppuStack_a8;
          pppuVar19 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
          pppuVar21 = (undefined8 ***)pppuStack_a8[2];
          if (pppuVar21 == (undefined8 ***)0x0) {
            func_0x000107c61574(pppuStack_a8);
            pppuVar19 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            func_0x000100403514(0,pppuVar21,0);
            ppppuVar17 = (undefined8 ****)(pppuVar7 + 8);
            do {
              pppuStack_a8 = ppppuVar17[-4];
              pppuVar3 = ppppuVar17[-3];
              pppuVar1 = ppppuVar17[-2];
              pppuVar4 = ppppuVar17[-1];
              uVar5 = *(undefined1 *)ppppuVar17;
              ppuStack_a0 = pppuVar3;
              func_0x000107c61438(pppuVar3,2);
              FUN_101edf31c(pppuVar1,pppuVar4,uVar5);
              func_0x000107c5fb78(0x203a,0xe200000000000000);
              pppuVar15 = pppuVar4;
              FUN_101ee8780(pppuVar1,pppuVar4,uVar5);
              func_0x000107c5fb78();
              func_0x000107c6142c(pppuVar3);
              func_0x000107c6142c(pppuVar15);
              FUN_101edeb30(pppuVar1,pppuVar4,uVar5);
              ppuVar18 = ppuStack_a0;
              pppuVar1 = pppuStack_a8;
              uVar2 = *(ulong *)((long)pppuVar19 + 0x10);
              if (*(ulong *)((long)pppuVar19 + 0x18) >> 1 <= uVar2) {
                func_0x000100403514(1 < *(ulong *)((long)pppuVar19 + 0x18),uVar2 + 1,1);
              }
              ppppuVar17 = ppppuVar17 + 5;
              *(ulong *)((long)pppuVar19 + 0x10) = uVar2 + 1;
              *(undefined8 ****)((long)pppuVar19 + uVar2 * 0x10 + 0x20) = pppuVar1;
              *(undefined8 ***)((long)pppuVar19 + uVar2 * 0x10 + 0x28) = ppuVar18;
              pppuVar21 = (undefined8 ***)((long)pppuVar21 + -1);
            } while (pppuVar21 != (undefined8 ***)0x0);
            func_0x000107c61574(pppuVar7);
          }
          uVar13 = 0x112d38270;
          pppuStack_a8 = pppuVar19;
          func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
          uVar12 = uVar13;
          func_0x00010011d734();
          uVar14 = 0x202c;
          uVar16 = 0xe200000000000000;
          func_0x000107c5fa80(0x202c,0xe200000000000000,uVar13,uVar12);
          func_0x000107c6142c(pppuVar19);
          func_0x000107c5fb78(uVar14,uVar16);
          func_0x000107c6142c(uVar16);
          func_0x000107c5fb78(0x5d,0xe100000000000000);
          pppuStack_a8 = (undefined8 ***)ppuStack_80;
          ppuStack_a0 = (undefined8 **)uStack_78;
        }
      }
      else {
        pppuStack_a8 = (undefined8 ***)0x6c6c756e;
        ppuStack_a0 = (undefined8 **)0xe400000000000000;
      }
      goto LAB_101ee8bec;
    }
    pppuStack_a8 = (undefined8 ***)0x5b;
    ppuStack_a0 = (undefined8 **)0xe100000000000000;
    lVar20 = *(long *)(uVar2 + 0x10);
    ppuVar18 = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar20 != 0) {
      ppuStack_80 = (undefined8 **)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,lVar20,0);
      puVar22 = (undefined1 *)(uVar2 + 0x30);
      do {
        ppuVar18 = ppuStack_80;
        uVar13 = *(undefined8 *)(puVar22 + -0x10);
        uVar12 = *(undefined8 *)(puVar22 + -8);
        uVar5 = *puVar22;
        FUN_101edf31c(uVar13,uVar12,uVar5);
        uVar14 = uVar13;
        uVar16 = uVar12;
        FUN_101ee8780(uVar13,uVar12,uVar5);
        FUN_101edeb30(uVar13,uVar12,uVar5);
        uVar2 = *(ulong *)((long)ppuVar18 + 0x10);
        ppuStack_80 = ppuVar18;
        if (*(ulong *)((long)ppuVar18 + 0x18) >> 1 <= uVar2) {
          func_0x000100403514(1 < *(ulong *)((long)ppuVar18 + 0x18),uVar2 + 1,1);
        }
        puVar22 = puVar22 + 0x18;
        *(ulong *)((long)ppuStack_80 + 0x10) = uVar2 + 1;
        *(undefined8 *)((long)ppuStack_80 + uVar2 * 0x10 + 0x20) = uVar14;
        *(undefined8 *)((long)ppuStack_80 + uVar2 * 0x10 + 0x28) = uVar16;
        lVar20 = lVar20 + -1;
        ppuVar18 = ppuStack_80;
      } while (lVar20 != 0);
    }
    uVar13 = 0x112d38270;
    ppuStack_80 = ppuVar18;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar12 = uVar13;
    func_0x00010011d734();
    uVar14 = 0x202c;
    uVar16 = 0xe200000000000000;
    func_0x000107c5fa80(0x202c,0xe200000000000000,uVar13,uVar12);
    func_0x000107c6142c(ppuVar18);
    func_0x000107c5fb78(uVar14,uVar16);
    func_0x000107c6142c(uVar16);
    uVar13 = 0x5d;
  }
  func_0x000107c5fb78(uVar13,0xe100000000000000);
LAB_101ee8bec:
  auVar23._8_8_ = ppuStack_a0;
  auVar23._0_8_ = pppuStack_a8;
  return auVar23;
}



/* Entry: 101ee8c2c; end: 101ee8cb7;  */

undefined * FUN_101ee8c2c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x112e3b8b8;
    func_0x0001000285a8(0x112e3b8b8,&UNK_10da276a0);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x28) * 2;
  }
  return puVar1;
}



/* Entry: 101ee8cb8; end: 101ee8dc3;  */

void FUN_101ee8cb8(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_101ee98f4();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112e3b8c0;
      func_0x0001000285a8(0x112e3b8c0,&UNK_10da276a8);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_101ee8dc4(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_101ee9214(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 101ee8dc4; end: 101ee9213;  */

void FUN_101ee8dc4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long unaff_x21;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar24 = param_3[1];
  if (0 < lVar24) {
    lVar16 = 0;
    do {
      lVar22 = lVar16 + 1;
      if (lVar22 < lVar24) {
        lVar23 = *param_3;
        puVar13 = (ulong *)(lVar23 + lVar22 * 0x28);
        uVar9 = *puVar13;
        puVar14 = (ulong *)(lVar23 + lVar16 * 0x28);
        if (uVar9 == *puVar14 && puVar13[1] == puVar14[1]) {
          uVar9 = 0;
        }
        else {
          func_0x000107c605b8();
        }
        lVar18 = lVar16 + 2;
        lVar22 = lVar18;
        if (lVar18 < lVar24) {
          plVar21 = (long *)(lVar23 + lVar16 * 0x28 + 0x30);
          do {
            lVar8 = plVar21[4];
            if (lVar8 == plVar21[-1] && plVar21[5] == *plVar21) {
              if ((uVar9 & 1) != 0) goto LAB_101ee8ec8;
            }
            else {
              func_0x000107c605b8();
              lVar22 = lVar18;
              if ((((uint)uVar9 ^ (uint)lVar8) & 1) != 0) break;
            }
            lVar18 = lVar18 + 1;
            plVar21 = plVar21 + 5;
            lVar22 = lVar24;
          } while (lVar24 != lVar18);
        }
        lVar18 = lVar22;
        if ((uVar9 & 1) != 0) {
LAB_101ee8ec8:
          if (lVar18 < lVar16) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee91e8);
            (*pcVar6)();
          }
          lVar22 = lVar18;
          if (lVar16 < lVar18) {
            lVar15 = lVar18 * 0x28;
            lVar8 = lVar16 * 0x28;
            lVar24 = lVar16;
            do {
              lVar18 = lVar18 + -1;
              if (lVar24 != lVar18) {
                if (lVar23 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee9208);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar23 + lVar8);
                lVar2 = lVar23 + lVar15;
                uVar3 = *puVar1;
                uVar4 = puVar1[1];
                uVar5 = *(undefined1 *)(puVar1 + 4);
                uVar27 = puVar1[3];
                uVar25 = puVar1[2];
                uVar20 = *(undefined8 *)(lVar2 + -8);
                uVar30 = *(undefined8 *)(lVar2 + -0x10);
                uVar29 = *(undefined8 *)(lVar2 + -0x18);
                uVar31 = *(undefined8 *)(lVar2 + -0x28);
                puVar1[1] = *(undefined8 *)(lVar2 + -0x20);
                *puVar1 = uVar31;
                puVar1[3] = uVar30;
                puVar1[2] = uVar29;
                puVar1[4] = uVar20;
                *(undefined8 *)(lVar2 + -0x28) = uVar3;
                *(undefined8 *)(lVar2 + -0x20) = uVar4;
                *(undefined8 *)(lVar2 + -0x10) = uVar27;
                *(undefined8 *)(lVar2 + -0x18) = uVar25;
                *(undefined1 *)(lVar2 + -8) = uVar5;
              }
              lVar24 = lVar24 + 1;
              lVar15 = lVar15 + -0x28;
              lVar8 = lVar8 + 0x28;
            } while (lVar24 < lVar18);
          }
        }
      }
      lVar24 = param_3[1];
      lVar23 = lVar22;
      if (lVar22 < lVar24) {
        if (SBORROW8(lVar22,lVar16)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee91e4);
          (*pcVar6)();
        }
        if (lVar22 - lVar16 < param_4) {
          if (SCARRY8(lVar16,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee91ec);
            (*pcVar6)();
          }
          lVar18 = lVar16 + param_4;
          if (lVar24 <= lVar16 + param_4) {
            lVar18 = lVar24;
          }
          if (lVar18 < lVar16) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee91f0);
            (*pcVar6)();
          }
          if (lVar22 != lVar18) {
            lVar15 = *param_3;
            puVar13 = (ulong *)(lVar15 + lVar22 * 0x28 + -0x28);
            lVar24 = lVar16 - lVar22;
            lVar8 = lVar24;
            puVar14 = puVar13;
LAB_101ee8fc8:
            do {
              uVar9 = puVar13[5];
              if ((uVar9 != *puVar13 || puVar13[6] != puVar13[1]) &&
                 (func_0x000107c605b8(), (uVar9 & 1) != 0)) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee91f4);
                  (*pcVar6)();
                }
                uVar9 = puVar13[5];
                uVar17 = puVar13[6];
                uVar28 = puVar13[8];
                uVar26 = puVar13[7];
                uVar19 = puVar13[4];
                puVar13[6] = puVar13[1];
                puVar13[5] = *puVar13;
                puVar13[8] = puVar13[3];
                puVar13[7] = puVar13[2];
                *puVar13 = uVar9;
                puVar13[1] = uVar17;
                puVar13[3] = uVar28;
                puVar13[2] = uVar26;
                *(char *)(puVar13 + 4) = (char)puVar13[9];
                puVar13[9] = uVar19;
                bVar7 = lVar24 != -1;
                lVar24 = lVar24 + 1;
                puVar13 = puVar13 + -5;
                if (bVar7) goto LAB_101ee8fc8;
              }
              lVar22 = lVar22 + 1;
              puVar13 = puVar14 + 5;
              lVar24 = lVar8 + -1;
              lVar23 = lVar18;
              lVar8 = lVar24;
              puVar14 = puVar13;
            } while (lVar22 != lVar18);
          }
        }
      }
      puVar12 = puStack_58;
      if (lVar23 < lVar16) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee91d4);
        (*pcVar6)();
      }
      puVar10 = puStack_58;
      func_0x000107c61558();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar9 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar9) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        func_0x0001000a91e0(puVar12,uVar9 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar9 + 1;
      *(long *)(puVar12 + uVar9 * 0x10 + 0x20) = lVar16;
      *(long *)(puVar12 + uVar9 * 0x10 + 0x28) = lVar23;
      puStack_58 = puVar12;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee920c);
        (*pcVar6)();
      }
      FUN_101ee9300(&puStack_58,*param_1,param_3);
      puVar12 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101ee91a4;
      lVar24 = param_3[1];
      lVar16 = lVar23;
    } while (lVar23 < lVar24);
  }
  puVar12 = puStack_58;
  lVar24 = *param_1;
  if (lVar24 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee9214);
    (*pcVar6)();
  }
  puVar10 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar10 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar13 = (ulong *)(puVar12 + 0x10);
  uVar9 = *puVar13;
  while (1 < uVar9) {
    lVar16 = *param_3;
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee9210);
      (*pcVar6)();
    }
    plVar21 = (long *)(puVar12 + uVar9 * 0x10);
    lVar22 = *plVar21;
    puVar14 = puVar13 + uVar9 * 2;
    uVar17 = puVar14[1];
    FUN_101ee9570(lVar16 + lVar22 * 0x28,lVar16 + *puVar14 * 0x28,lVar16 + uVar17 * 0x28,lVar24);
    if (unaff_x21 != 0) break;
    if ((long)uVar17 < lVar22) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee91d8);
      (*pcVar6)();
    }
    if (*puVar13 <= uVar9 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee91dc);
      (*pcVar6)();
    }
    *plVar21 = lVar22;
    plVar21[1] = uVar17;
    uVar17 = *puVar13;
    lVar16 = uVar17 - uVar9;
    if (uVar17 < uVar9) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee91e0);
      (*pcVar6)();
    }
    uVar9 = uVar17 - 1;
    func_0x000107c610b8(puVar14,puVar14 + 2,lVar16 * 0x10);
    *puVar13 = uVar9;
  }
LAB_101ee91a4:
  func_0x000107c6142c(puVar12);
  return;
}



/* Entry: 101ee9214; end: 101ee92ff;  */

void FUN_101ee9214(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_3 != param_2) {
    lVar6 = *param_4;
    puVar7 = (ulong *)(lVar6 + param_3 * 0x28 + -0x28);
    param_1 = param_1 - param_3;
    lVar9 = param_1;
    puVar8 = puVar7;
LAB_101ee9298:
    do {
      uVar4 = puVar7[5];
      if ((uVar4 != *puVar7 || puVar7[6] != puVar7[1]) && (func_0x000107c605b8(), (uVar4 & 1) != 0))
      {
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee9300);
          (*pcVar2)();
        }
        uVar4 = puVar7[5];
        uVar1 = puVar7[6];
        uVar11 = puVar7[8];
        uVar10 = puVar7[7];
        uVar5 = puVar7[4];
        puVar7[6] = puVar7[1];
        puVar7[5] = *puVar7;
        puVar7[8] = puVar7[3];
        puVar7[7] = puVar7[2];
        *puVar7 = uVar4;
        puVar7[1] = uVar1;
        puVar7[3] = uVar11;
        puVar7[2] = uVar10;
        *(char *)(puVar7 + 4) = (char)puVar7[9];
        puVar7[9] = uVar5;
        bVar3 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar7 = puVar7 + -5;
        if (bVar3) goto LAB_101ee9298;
      }
      param_3 = param_3 + 1;
      puVar7 = puVar8 + 5;
      param_1 = lVar9 + -1;
      lVar9 = param_1;
      puVar8 = puVar7;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101ee9300; end: 101ee956f;  */

undefined8 FUN_101ee9300(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_101ee93d8;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9558);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_101ee943c:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9548);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9550);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9530);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9534);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee953c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9544);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_101ee93d8:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9538);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9540);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee954c);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9554);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_101ee943c;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee955c);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9524);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9570);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_101ee9570(lVar9 + lVar12 * 0x28,lVar9 + *plVar1 * 0x28,lVar9 + lVar7 * 0x28,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9528);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee952c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 101ee9570; end: 101ee97b3;  */

undefined8 FUN_101ee9570(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x28;
  lVar2 = ((long)param_3 - (long)param_2) / 0x28;
  if (lVar1 < lVar2) {
    if ((param_4 != param_1) || (param_1 + lVar1 * 5 <= param_4)) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x28);
    }
    puVar6 = param_4 + lVar1 * 5;
    puVar3 = param_1;
    if (0x27 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        uVar8 = *param_2;
        if ((uVar8 == *param_4 && param_2[1] == param_4[1]) ||
           (func_0x000107c605b8(), (uVar8 & 1) == 0)) {
          puVar4 = param_4 + 5;
          puVar5 = param_4;
        }
        else {
          puVar4 = param_4;
          puVar5 = param_2;
          param_2 = param_2 + 5;
        }
        param_4 = puVar4;
        if (puVar3 != puVar5) {
          uVar9 = puVar5[1];
          uVar8 = *puVar5;
          uVar11 = puVar5[3];
          uVar10 = puVar5[2];
          puVar3[4] = puVar5[4];
          puVar3[1] = uVar9;
          *puVar3 = uVar8;
          puVar3[3] = uVar11;
          puVar3[2] = uVar10;
        }
        puVar3 = puVar3 + 5;
      } while (param_4 < puVar6);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar2 * 5 <= param_4)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x28);
    }
    puVar5 = param_4 + lVar2 * 5;
    puVar3 = param_2;
    puVar6 = puVar5;
    if ((param_1 < param_2) && (0x27 < (long)param_3 - (long)param_2)) {
      do {
        puVar7 = param_2 + -5;
        puVar4 = param_3;
        while( true ) {
          param_3 = puVar4 + -5;
          puVar6 = puVar5 + -5;
          uVar8 = *puVar6;
          if ((uVar8 != param_2[-5] || puVar5[-4] != param_2[-4]) &&
             (func_0x000107c605b8(), (uVar8 & 1) != 0)) break;
          if (puVar4 != puVar5) {
            uVar9 = puVar5[-4];
            uVar8 = *puVar6;
            uVar11 = puVar5[-2];
            uVar10 = puVar5[-3];
            puVar4[-1] = puVar5[-1];
            puVar4[-4] = uVar9;
            *param_3 = uVar8;
            puVar4[-2] = uVar11;
            puVar4[-3] = uVar10;
          }
          puVar3 = param_2;
          puVar5 = puVar6;
          puVar4 = param_3;
          if (puVar6 <= param_4) goto LAB_101ee9750;
        }
        if (puVar4 != param_2) {
          uVar9 = param_2[-4];
          uVar8 = *puVar7;
          uVar11 = param_2[-2];
          uVar10 = param_2[-3];
          puVar4[-1] = param_2[-1];
          puVar4[-4] = uVar9;
          *param_3 = uVar8;
          puVar4[-2] = uVar11;
          puVar4[-3] = uVar10;
        }
        puVar3 = puVar7;
        puVar6 = puVar5;
      } while ((param_1 < puVar7) && (param_2 = puVar7, param_4 < puVar5));
    }
  }
LAB_101ee9750:
  if ((puVar3 != param_4) ||
     ((ulong *)((long)puVar6 +
               ((((long)puVar6 - (long)param_4) / 0x28) * 0x28 - ((long)puVar6 - (long)param_4))) <=
      puVar3)) {
    func_0x000107c610b8(puVar3,param_4);
  }
  return 1;
}



/* Entry: 101ee97b4; end: 101ee98f3;  */

undefined * FUN_101ee97b4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ee98f4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e3b8b8;
    func_0x0001000285a8(0x112e3b8b8,&UNK_10da276a0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e3b8c0;
    func_0x0001000285a8(0x112e3b8c0,&UNK_10da276a8);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101ee98f4; end: 101ee9907;  */

/* WARNING: Removing unreachable block (ram,0x000101ee97d4) */
/* WARNING: Removing unreachable block (ram,0x000101ee97e4) */
/* WARNING: Removing unreachable block (ram,0x000101ee98f0) */
/* WARNING: Removing unreachable block (ram,0x000101ee97f0) */
/* WARNING: Removing unreachable block (ram,0x000101ee97f8) */
/* WARNING: Removing unreachable block (ram,0x000101ee987c) */
/* WARNING: Removing unreachable block (ram,0x000101ee988c) */
/* WARNING: Removing unreachable block (ram,0x000101ee9890) */
/* WARNING: Removing unreachable block (ram,0x000101ee9894) */
/* WARNING: Removing unreachable block (ram,0x000101ee98a0) */

undefined * FUN_101ee98f4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112e3b8b8;
    func_0x0001000285a8(0x112e3b8b8,&UNK_10da276a0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x28) * 2;
  }
  uVar4 = 0x112e3b8c0;
  func_0x0001000285a8(0x112e3b8c0,&UNK_10da276a8);
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar5,uVar4);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 101ee9908; end: 101ee9ab3;  */

long FUN_101ee9908(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  
  puVar14 = (ulong *)(param_4 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar16 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar16 = uVar16 & *puVar14;
  if (param_2 == (undefined8 *)0x0) {
    lVar15 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar15 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee9ab4);
      (*pcVar6)();
    }
    lVar8 = 0;
    lVar13 = 0;
    uVar12 = 0x3f - uVar11 >> 6;
    lVar15 = lVar8;
    while( true ) {
      while (uVar16 == 0) {
        bVar7 = SCARRY8(lVar15,1);
        lVar15 = lVar15 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101ee9ab0);
          (*pcVar6)();
        }
        if ((long)uVar12 <= lVar15) {
          uVar16 = 0;
          if ((long)uVar12 <= lVar8 + 1) {
            uVar12 = lVar8 + 1;
          }
          lVar15 = uVar12 - 1;
          param_3 = lVar13;
          goto LAB_101ee9a54;
        }
        uVar16 = puVar14[lVar15];
      }
      lVar13 = lVar13 + 1;
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar15 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar9 * 0x10);
      uVar3 = puVar1[1];
      puVar10 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar9 * 0x18);
      uVar2 = *puVar10;
      uVar4 = puVar10[1];
      uVar5 = *(undefined1 *)(puVar10 + 2);
      *param_2 = *puVar1;
      param_2[1] = uVar3;
      param_2[2] = uVar2;
      param_2[3] = uVar4;
      *(undefined1 *)(param_2 + 4) = uVar5;
      if (lVar13 == param_3) break;
      param_2 = param_2 + 5;
      func_0x000107c61434();
      FUN_101edf31c(uVar2,uVar4,uVar5);
      lVar8 = lVar15;
    }
    func_0x000107c61434();
    FUN_101edf31c(uVar2,uVar4,uVar5);
  }
LAB_101ee9a54:
  *param_1 = param_4;
  param_1[1] = (long)puVar14;
  param_1[2] = ~uVar11;
  param_1[3] = lVar15;
  param_1[4] = uVar16;
  return param_3;
}



/* Entry: 101ee9ab4; end: 101ee9ac3;  */

undefined1  [16] FUN_101ee9ab4(void)

{
  return ZEXT816(0x11049a258);
}



/* Entry: 101ee9ac4; end: 101ee9b83;  */

long FUN_101ee9ac4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101ee9b84();
  FUN_101ee9ca0();
  lVar3 = 0;
  func_0x000101ee7e90();
  func_0x000107c613fc();
  *(undefined1 *)(lVar3 + 0x28) = 1;
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  *(undefined **)(lVar3 + 0x20) = puVar2;
  func_0x000107c61434(param_2);
  lVar4 = lVar3;
  FUN_101ede318(lVar3);
  func_0x000107c61574(lVar3);
  if (unaff_x21 != 0) {
    lVar4 = extraout_x8;
  }
  return lVar4;
}



/* Entry: 101ee9b84; end: 101ee9c9f;  */

undefined * FUN_101ee9b84(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e3b770,&UNK_10da27710);
    puVar8 = puVar12;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar13 = (undefined1 *)(param_1 + 0x40);
    do {
      uVar2 = *(ulong *)(puVar13 + -0x20);
      uVar4 = *(ulong *)(puVar13 + -0x18);
      uVar3 = *(undefined8 *)(puVar13 + -0x10);
      uVar5 = *(undefined8 *)(puVar13 + -8);
      uVar6 = *puVar13;
      func_0x000107c61434(uVar4);
      FUN_101edf31c(uVar3,uVar5,uVar6);
      uVar9 = uVar2;
      uVar10 = uVar4;
      FUN_1016f03d0();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101ee9c9c);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar11 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x18);
      *puVar11 = uVar3;
      puVar11[1] = uVar5;
      *(undefined1 *)(puVar11 + 2) = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101ee9ca0);
        (*pcVar7)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar12 = puVar12 + -1;
      puVar13 = puVar13 + 0x28;
    } while (puVar12 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 101ee9ca0; end: 101ee9d9f;  */

undefined * FUN_101ee9ca0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e3b778,&UNK_10da27260);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_1016f03d0();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9d9c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ee9da0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101ee9da0; end: 101ee9dbf;  */

void FUN_101ee9da0(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101ee9dc0; end: 101ee9e27;  */

void FUN_101ee9dc0(void)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e3b8c8,&UNK_10da27720);
  func_0x000107c613fc();
  pcVar1 = FUN_101ee9e28;
  func_0x0001000bdd8c(FUN_101ee9e28,0);
  func_0x0001002a3770(0);
  func_0x000107c610f8();
  func_0x000103aa8efc(pcVar1);
  return;
}



/* Entry: 101ee9e28; end: 101ee9e4f;  */

void FUN_101ee9e28(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &UNK_11049a258;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11049a268;
  return;
}



/* Entry: 101ee9e50; end: 101ee9ebb;  */

void FUN_101ee9e50(undefined8 param_1)

{
  if (lRam0000000112e3b8f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e699ac0);
  return;
}



/* Entry: 101ee9ebc; end: 101ee9f2f;  */

void FUN_101ee9ebc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e3b8c8,&UNK_10da27720);
  func_0x000107c613fc();
  pcVar1 = FUN_101ee9e28;
  func_0x0001000bdd8c(FUN_101ee9e28,0);
  uVar2 = 0;
  func_0x0001002a3770(0);
  func_0x000107c610f8();
  func_0x000103aa8efc(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101ee9f30; end: 101ee9fbf; -[_TtC29SendToRankingCOFConfiguration29SendToRankingCOFConfiguration shouldUseRecentsRankingService] */

undefined8 FUN_101ee9f30(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101ee9fc0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = 0xd000000000000032;
    func_0x000107c5fadc(0xd000000000000032,0x800000010f019b90);
    func_0x000107c3ebd4(uVar2);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c61574(param_1);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 101ee9fc0; end: 101eea20b;  */

uint FUN_101ee9fc0(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *apuStack_90 [2];
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f019a80);
  uVar4 = 0;
  uVar7 = 0xe000000000000000;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5c1dc(uVar10);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar3 = uVar10;
  func_0x000107c5faec(uVar10);
  func_0x000107c61170(uVar10);
  uStack_70 = 0x2c;
  uStack_68 = 0xe100000000000000;
  puStack_80 = &uStack_70;
  lVar5 = 0x7fffffffffffffff;
  lVar8 = 1;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_101eeb8d0,apuStack_90,uVar3,uVar7);
  lVar12 = *(long *)(lVar5 + 0x10);
  if (lVar12 == 0) {
    func_0x000107c6142c(lVar5);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_90[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar12,0);
    puVar13 = (undefined8 *)(lVar5 + 0x38);
    do {
      puVar11 = apuStack_90[0];
      uVar3 = puVar13[-3];
      lVar9 = puVar13[-2];
      uVar4 = puVar13[-1];
      uVar10 = *puVar13;
      func_0x000107c61434(uVar10);
      func_0x000107c601a0(uVar3,lVar9,uVar4,uVar10);
      lVar8 = lVar9;
      func_0x000107c6142c(uVar10);
      uVar2 = *(ulong *)(puVar11 + 0x10);
      lVar1 = uVar2 + 1;
      apuStack_90[0] = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
        lVar8 = lVar1;
        func_0x000100403514(1 < *(ulong *)(puVar11 + 0x18),lVar1,1);
      }
      puVar11 = apuStack_90[0];
      puVar13 = puVar13 + 4;
      *(long *)(apuStack_90[0] + 0x10) = lVar1;
      *(undefined8 *)(apuStack_90[0] + uVar2 * 0x10 + 0x20) = uVar3;
      *(long *)(apuStack_90[0] + uVar2 * 0x10 + 0x28) = lVar9;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    func_0x000107c6142c(lVar5);
  }
  puVar6 = puVar11;
  func_0x000100403a6c(puVar11);
  func_0x000107c6142c(puVar11);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c3ed14(uVar4);
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  lVar12 = lVar8;
  func_0x000107c5fb1c(uVar3,lVar8);
  func_0x000107c6142c(lVar8);
  func_0x0001000f66f0(uVar3,lVar12,puVar6);
  func_0x000107c6142c(lVar12);
  func_0x000107c6142c(puVar6);
  return (uint)uVar3 & 1;
}



/* Entry: 101eea20c; end: 101eea29b; -[_TtC29SendToRankingCOFConfiguration29SendToRankingCOFConfiguration shouldUseComposer] */

undefined8 FUN_101eea20c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101ee9fc0();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f0199d0);
    func_0x000107c3ebd4(uVar2);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar3);
  }
  else {
    func_0x000107c61574(param_1);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 101eea29c; end: 101eea313; -[_TtC29SendToRankingCOFConfiguration29SendToRankingCOFConfiguration shouldEnableMinVersion] */

undefined8 FUN_101eea29c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f019b60);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101eea314; end: 101eea31f; -[_TtC29SendToRankingCOFConfiguration29SendToRankingCOFConfiguration showDebugButton] */

undefined1 FUN_101eea314(void)

{
  return uRam0000000112e3bd70;
}



/* Entry: 101eea320; end: 101eea383; -[_TtC29SendToRankingCOFConfiguration29SendToRankingCOFConfiguration loggableFeatureKeys] */

void FUN_101eea320(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c6157c();
  FUN_101eea384();
  func_0x000107c61574(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5fe08(lVar1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101eea384; end: 101eea57f;  */

undefined * FUN_101eea384(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *apuStack_80 [2];
  undefined8 *puStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f019b30);
  uVar3 = 0;
  uVar6 = 0xe000000000000000;
  func_0x000107c5fadc(0);
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar4 = uVar8;
  func_0x000107c5faec();
  func_0x000107c61170(uVar8);
  uVar8 = uVar4 & 0xffffffffffff;
  if ((uVar6 & 0x2000000000000000) != 0) {
    uVar8 = uVar6 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
    func_0x000107c6142c(uVar6);
    puVar9 = (undefined *)0x0;
  }
  else {
    uStack_60 = 0x2c;
    uStack_58 = 0xe100000000000000;
    puStack_70 = &uStack_60;
    lVar5 = 0x7fffffffffffffff;
    func_0x0001014784b8(0x7fffffffffffffff,1,FUN_101eeb93c,apuStack_80,uVar4,uVar6);
    lVar11 = *(long *)(lVar5 + 0x10);
    if (lVar11 == 0) {
      func_0x000107c6142c(lVar5);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      apuStack_80[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,lVar11,0);
      puVar12 = (undefined8 *)(lVar5 + 0x38);
      do {
        puVar9 = apuStack_80[0];
        uVar2 = puVar12[-3];
        uVar7 = puVar12[-2];
        uVar3 = puVar12[-1];
        uVar1 = *puVar12;
        func_0x000107c61434(uVar1);
        func_0x000107c5fb2c(uVar2,uVar7,uVar3,uVar1);
        func_0x000107c6142c(uVar1);
        uVar8 = *(ulong *)(puVar9 + 0x10);
        apuStack_80[0] = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar8) {
          func_0x000100403514(1 < *(ulong *)(puVar9 + 0x18),uVar8 + 1,1);
        }
        puVar10 = apuStack_80[0];
        puVar12 = puVar12 + 4;
        *(ulong *)(apuStack_80[0] + 0x10) = uVar8 + 1;
        *(undefined8 *)(apuStack_80[0] + uVar8 * 0x10 + 0x20) = uVar2;
        *(undefined8 *)(apuStack_80[0] + uVar8 * 0x10 + 0x28) = uVar7;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      func_0x000107c6142c(lVar5);
    }
    puVar9 = puVar10;
    func_0x000100403a6c(puVar10);
    func_0x000107c6142c(puVar10);
  }
  return puVar9;
}



/* Entry: 101eea580; end: 101eea85b;  */

undefined1  [16] FUN_101eea580(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar3 = uRam0000000112e3bca0;
  uVar5 = uRam0000000112e3bc98;
  uVar4 = uRam0000000112e3bc98 & 0xffffffffffff;
  if ((uRam0000000112e3bca0 & 0x2000000000000000) != 0) {
    uVar4 = uRam0000000112e3bca0 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    uVar4 = *(ulong *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f019950);
    uVar2 = 0;
    uVar3 = 0xe000000000000000;
    func_0x000107c5fadc(0);
    func_0x000107c5c1dc();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    uVar5 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar4 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar4 == 0) {
      func_0x000107c6142c(uVar3);
      uVar5 = 0;
      uVar3 = 0;
    }
  }
  else {
    func_0x000107c61434(uRam0000000112e3bca0);
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 101eea85c; end: 101eea8e3;  */

ulong FUN_101eea85c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  
  if ((long)uRam0000000112e3bc18 < 1) {
    uVar3 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000032;
    func_0x000107c5fadc(0xd000000000000032,0x800000010f0198e0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    if ((int)uVar3 < 0x1f) {
      uVar3 = 0x1e;
    }
    uVar2 = (ulong)uVar3;
  }
  else {
    uVar2 = uRam0000000112e3bc18;
    if (uRam0000000112e3bc18 < 0x1f) {
      uVar2 = 0x1e;
    }
  }
  return uVar2;
}



/* Entry: 101eea8e4; end: 101eeaa83;  */

ulong FUN_101eea8e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  
  uVar3 = uRam0000000112e3ba80 & 0xffffffffffff;
  if ((uRam0000000112e3ba88 & 0x2000000000000000) != 0) {
    uVar3 = uRam0000000112e3ba88 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    uVar6 = *(ulong *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f019600);
    uVar2 = 0;
    uVar5 = 0xe000000000000000;
    func_0x000107c5fadc(0);
    uVar3 = uVar6;
    func_0x000107c5c1dc();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    uVar1 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010f019630);
    uVar2 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010ef34920);
    func_0x000107c5c1dc(uVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    uVar3 = uVar6;
    func_0x000107c5faec(uVar6);
    func_0x000107c61170(uVar6);
    uVar4 = uVar4 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar4 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar4 == 0) {
      func_0x000107c6142c(uVar5);
    }
  }
  else {
    func_0x000107c61434(uRam0000000112e3ba88);
    uVar3 = 0xd00000000000001d;
  }
  return uVar3;
}



/* Entry: 101eeaa84; end: 101eeabe7;  */

/* WARNING: Removing unreachable block (ram,0x000101eeaba0) */

long FUN_101eeaa84(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long unaff_x20;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar5 = 0x800000010f019590;
  uVar2 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f);
  puVar3 = PTR_PTR_1126af7d0;
  func_0x000107c610f8(PTR_PTR_1126af7d0);
  func_0x000107c453e4();
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  if (lVar7 != 0) {
    lVar4 = lVar7;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar4 != 0) {
      lVar7 = lVar4;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar4);
      uVar1 = (uint)(uVar5 >> 0x20);
      uVar6 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar6 == 0) {
          if ((uVar5 & 0xff000000000000) != 0) {
LAB_101eeab6c:
            func_0x000107c610f8(PTR_PTR_1126a98b0);
            lVar4 = lVar7;
            FUN_101eeb810(lVar7,uVar5);
            func_0x00010006c090(lVar7,uVar5);
            return lVar4;
          }
        }
        else if ((long)(int)lVar7 != lVar7 >> 0x20) goto LAB_101eeab6c;
      }
      else if ((uVar6 == 2) && (*(long *)(lVar7 + 0x10) != *(long *)(lVar7 + 0x18)))
      goto LAB_101eeab6c;
      func_0x00010006c090(lVar7,uVar5);
    }
  }
  return 0;
}



/* Entry: 101eeabe8; end: 101eeac5f; -[_TtC29SendToRankingCOFConfiguration29SendToRankingCOFConfiguration removePendingSectionDelay] */

undefined8 FUN_101eeabe8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f019b10);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101eeac60; end: 101eeacd7; -[_TtC29SendToRankingCOFConfiguration29SendToRankingCOFConfiguration shouldDeferArtifactLogging] */

undefined8 FUN_101eeac60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f019ae0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101eeacd8; end: 101eead4f; -[_TtC29SendToRankingCOFConfiguration29SendToRankingCOFConfiguration shouldUseValdiWorkerRuntime] */

undefined8 FUN_101eeacd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f019ab0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101eead50; end: 101eead5b; -[_TtC29SendToRankingCOFConfiguration29SendToRankingCOFConfiguration useComposerFeaturePersistenceService] */

uint FUN_101eead50(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101eead5c();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101eead5c; end: 101eeae1b;  */

undefined8 FUN_101eead5c(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_101ee9fc0();
  if ((param_1 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f0199d0);
    uVar2 = uVar3;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    if ((int)uVar2 != 0) {
      uVar2 = 0xd000000000000038;
      func_0x000107c5fadc(0xd000000000000038,0x800000010f019a00);
      func_0x000107c3ebd4(uVar3);
      func_0x000107c61170(uVar2);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 101eeae1c; end: 101eeae27; -[_TtC29SendToRankingCOFConfiguration29SendToRankingCOFConfiguration fetchRemoteFeaturesInComposer] */

uint FUN_101eeae1c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101eeae60();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101eeae28; end: 101eeae5f;  */

uint FUN_101eeae28(undefined8 param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  (*param_3)();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101eeae60; end: 101eeaf5f;  */

undefined8 FUN_101eeae60(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  FUN_101ee9fc0();
  if ((param_1 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f0199d0);
    uVar2 = uVar3;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    if ((int)uVar2 != 0) {
      uVar2 = 0xd000000000000038;
      func_0x000107c5fadc(0xd000000000000038,0x800000010f019a00);
      uVar1 = uVar3;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar2);
      if ((int)uVar1 != 0) {
        uVar2 = 0xd000000000000031;
        func_0x000107c5fadc(0xd000000000000031,0x800000010f019a40);
        func_0x000107c3ebd4(uVar3);
        func_0x000107c61170(uVar2);
        return uVar3;
      }
    }
  }
  return 0;
}



/* Entry: 101eeaf60; end: 101eeafe7;  */

ulong FUN_101eeaf60(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  
  if ((long)uRam0000000112e3bb98 < 1) {
    uVar3 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000035;
    func_0x000107c5fadc(0xd000000000000035,0x800000010f0196f0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    if ((int)uVar3 < 0x1f) {
      uVar3 = 0x1e;
    }
    uVar2 = (ulong)uVar3;
  }
  else {
    uVar2 = uRam0000000112e3bb98;
    if (uRam0000000112e3bb98 < 0x1f) {
      uVar2 = 0x1e;
    }
  }
  return uVar2;
}



/* Entry: 101eeafe8; end: 101eeb1ef;  */

ulong FUN_101eeafe8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = uRam0000000112e3bb50;
  uVar5 = uRam0000000112e3bb10;
  uVar4 = uRam0000000112e3bb08 & 0xffffffffffff;
  if ((uRam0000000112e3bb10 & 0x2000000000000000) != 0) {
    uVar4 = uRam0000000112e3bb10 >> 0x38 & 0xf;
  }
  uVar1 = uRam0000000112e3bb50 & 0xffffffffffff;
  if ((uRam0000000112e3bb58 & 0x2000000000000000) != 0) {
    uVar1 = uRam0000000112e3bb58 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    uVar7 = *(ulong *)(unaff_x20 + 0x10);
    uVar2 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010f019690);
    uVar3 = 0;
    uVar6 = 0xe000000000000000;
    func_0x000107c5fadc(0);
    uVar4 = uVar7;
    func_0x000107c5c1dc();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    uVar5 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    uVar8 = uRam0000000112e3bb50;
    if (uVar1 == 0) {
      uVar2 = 0xd00000000000002c;
      func_0x000107c5fadc(0xd00000000000002c,0x800000010f0196c0);
      uVar3 = 0xd000000000000014;
      func_0x000107c5fadc(0xd000000000000014,0x800000010ef34920);
      func_0x000107c5c1dc(uVar7);
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      uVar8 = uVar7;
      func_0x000107c5faec(uVar7);
      func_0x000107c61170(uVar7);
      uVar4 = uVar5 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar4 = uVar6 >> 0x38 & 0xf;
      }
    }
    else {
      uVar4 = uVar5 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar4 = uVar6 >> 0x38 & 0xf;
      }
      func_0x000107c61434(uRam0000000112e3bb58);
    }
    if (uVar4 == 0) {
      func_0x000107c6142c(uVar6);
    }
  }
  else {
    if (uVar1 == 0) {
      uVar8 = 0xd00000000000001d;
    }
    else {
      func_0x000107c61434(uRam0000000112e3bb58);
    }
    func_0x000107c61434(uVar5);
  }
  return uVar8;
}



/* Entry: 101eeb1f0; end: 101eeb2a3;  */

void FUN_101eeb1f0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101eeb2a4; end: 101eeb313;  */

long FUN_101eeb2a4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = lRam0000000112e3bc58;
  if (lRam0000000112e3bc58 < 1) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f019920);
    func_0x000107c4980c(uVar3);
    func_0x000107c61170(uVar1);
    lVar2 = (long)(int)uVar3;
  }
  return lVar2;
}



/* Entry: 101eeb314; end: 101eeb323;  */

ulong FUN_101eeb314(void)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  
  if ((long)uRam0000000112e3bc18 < 1) {
    uVar3 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000032;
    func_0x000107c5fadc(0xd000000000000032,0x800000010f0198e0);
    func_0x000107c4980c();
    func_0x000107c61170(uVar1);
    if ((int)uVar3 < 0x1f) {
      uVar3 = 0x1e;
    }
    uVar2 = (ulong)uVar3;
  }
  else {
    uVar2 = uRam0000000112e3bc18;
    if (uRam0000000112e3bc18 < 0x1f) {
      uVar2 = 0x1e;
    }
  }
  return uVar2;
}



/* Entry: 101eeb324; end: 101eeb5c3;  */

undefined8 FUN_101eeb324(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f0198a0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(uVar1);
  return uVar2;
}


