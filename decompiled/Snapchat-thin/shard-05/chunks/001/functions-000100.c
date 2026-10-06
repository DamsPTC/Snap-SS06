/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b3e174; end: 103b3e24b;  */

void FUN_103b3e174(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b3e24c; end: 103b3e32f;  */

bool FUN_103b3e24c(double param_1,double param_2,double param_3,double param_4)

{
  return ABS(param_2 - param_4) <= 2.220446049250313e-16 &&
         ABS(param_1 - param_3) <= 2.220446049250313e-16;
}



/* Entry: 103b3e330; end: 103b3e35b;  */

long FUN_103b3e330(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b3e35c; end: 103b3e3c7;  */

int FUN_103b3e35c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103b3e3c8; end: 103b3e4c7;  */

undefined8 FUN_103b3e3c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar1 = PTR___sSiN_11034deb0;
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  func_0x000107c6057c(puVar1,puVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  func_0x000107c5fddc(param_1,&uStack_60,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar2 = uStack_58;
  uVar3 = uStack_60;
  func_0x000107c5fbbc(uStack_60,uStack_58);
  func_0x000107c6142c(uVar2);
  return uVar3;
}



/* Entry: 103b3e4c8; end: 103b3e4d3;  */

undefined8 FUN_103b3e4c8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar1 = PTR___sSiN_11034deb0;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  func_0x000107c6057c(puVar1,puVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x202c,0xe200000000000000);
  func_0x000107c5fddc(uVar5,&uStack_60,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar5 = uStack_58;
  uVar2 = uStack_60;
  func_0x000107c5fbbc(uStack_60,uStack_58);
  func_0x000107c6142c(uVar5);
  return uVar2;
}



/* Entry: 103b3e4d4; end: 103b3e503;  */

void FUN_103b3e4d4(void)

{
  undefined8 *unaff_x20;
  
  FUN_103b3e3c8(unaff_x20[2],*unaff_x20,unaff_x20[1]);
  func_0x000107c60690();
  return;
}



/* Entry: 103b3e504; end: 103b3e563;  */

void FUN_103b3e504(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  func_0x000107c6068c(auStack_88);
  FUN_103b3e3c8(uVar3,uVar1,uVar2);
  func_0x000107c60690();
  func_0x000107c606a8();
  return;
}



/* Entry: 103b3e564; end: 103b3e593;  */

bool FUN_103b3e564(long *param_1,long *param_2)

{
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return false;
  }
  return (double)param_1[2] == (double)param_2[2];
}



/* Entry: 103b3e594; end: 103b3e6e3;  */

long FUN_103b3e594(double param_1,double param_2,double param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  func_0x000107c60fa8();
  dVar4 = (double)(long)(((param_2 + 180.0) / 360.0) * param_3);
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3e6d0);
    (*pcVar1)();
  }
  if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3e6d4);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3e6d8);
    (*pcVar1)();
  }
  dVar3 = (param_1 * 3.141592653589793) / 180.0;
  dVar2 = dVar3;
  func_0x000107c61670();
  func_0x000107c60f1c();
  dVar2 = 1.0 / dVar3 + dVar2;
  func_0x000107c61054();
  dVar2 = (double)(long)(param_3 * (1.0 - dVar2 / 3.141592653589793) * 0.5);
  if ((ulong)ABS(dVar2) < 0x7ff0000000000000) {
    if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3e6e0);
      (*pcVar1)();
    }
    if (dVar2 < 9.223372036854776e+18) {
      return (long)dVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3e6e4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3e6dc);
  (*pcVar1)();
}



/* Entry: 103b3e6e4; end: 103b3e6e7;  */

void FUN_103b3e6e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fedd08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc57cb0;
  func_0x000107c61520(&UNK_10dc57cb0,&UNK_1106d68c0);
  puRam0000000112fedd08 = puVar1;
  return;
}



/* Entry: 103b3e6e8; end: 103b3e727;  */

void FUN_103b3e6e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fedd08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc57cb0;
  func_0x000107c61520(&UNK_10dc57cb0,&UNK_1106d68c0);
  puRam0000000112fedd08 = puVar1;
  return;
}



/* Entry: 103b3e728; end: 103b3e783;  */

int FUN_103b3e728(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103b3e784; end: 103b3e7c7;  */

double FUN_103b3e784(double param_1,double param_2)

{
  func_0x000107c60fa8(param_2);
  return ((param_1 + 180.0) / 360.0) * param_2;
}



/* Entry: 103b3e7c8; end: 103b3e847;  */

double FUN_103b3e7c8(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1 * 3.141592653589793) / 180.0;
  dVar1 = dVar2;
  func_0x000107c61670(dVar2);
  func_0x000107c60f1c(dVar2);
  dVar1 = 1.0 / dVar2 + dVar1;
  func_0x000107c61054(dVar1);
  func_0x000107c60fa8(param_2);
  return param_2 * (1.0 - dVar1 / 3.141592653589793) * 0.5;
}



/* Entry: 103b3e848; end: 103b3e84b;  */

undefined1  [16]
FUN_103b3e848(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c60fa8(param_3);
  dVar3 = ((param_2 + 180.0) / 360.0) * param_3;
  dVar2 = (param_1 * 3.141592653589793) / 180.0;
  dVar1 = dVar2;
  func_0x000107c61670(dVar2);
  func_0x000107c60f1c(dVar2);
  dVar1 = 1.0 / dVar2 + dVar1;
  func_0x000107c61054(dVar1);
  param_3 = param_3 * (1.0 - dVar1 / 3.141592653589793) * 0.5;
  auVar4._0_8_ = param_4 * (dVar3 - (double)(long)dVar3);
  auVar4._8_8_ = param_5 * (param_3 - (double)(long)param_3);
  return auVar4;
}



/* Entry: 103b3e84c; end: 103b3eca3;  */

ulong FUN_103b3e84c(double param_1,double param_2,double param_3,double param_4,double param_5,
                   double param_6,double param_7,long param_8,long param_9)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar7 = param_1;
  FUN_103b3e594();
  dVar9 = param_3;
  func_0x000107c60fa8();
  dVar10 = ((param_2 + 180.0) / 360.0) * dVar9;
  dVar11 = (param_1 * 3.141592653589793) / 180.0;
  dVar8 = dVar11;
  func_0x000107c61670();
  func_0x000107c60f1c();
  dVar8 = 1.0 / dVar11 + dVar8;
  func_0x000107c61054();
  dVar9 = dVar9 * (1.0 - dVar8 / 3.141592653589793) * 0.5;
  dVar8 = param_4 * (dVar10 - (double)(long)dVar10);
  param_5 = param_5 * (dVar9 - (double)(long)dVar9);
  param_7 = param_7 * 0.5;
  uVar4 = 0;
  FUN_103b3eca4(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar2 = *(ulong *)(uVar4 + 0x10);
  lVar6 = uVar2 + 1;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_103b3eca4(uVar4,lVar6,1);
  }
  dVar9 = param_7 + param_5;
  *(long *)(uVar4 + 0x10) = lVar6;
  lVar5 = uVar4 + uVar2 * 0x18;
  *(long *)(lVar5 + 0x20) = param_8;
  *(long *)(lVar5 + 0x28) = param_9;
  *(double *)(lVar5 + 0x30) = dVar7;
  if (dVar8 < param_6 * 0.5) {
    lVar5 = param_8 + -1;
    if (SBORROW8(param_8,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b3eba0);
      (*pcVar3)();
    }
    uVar1 = uVar2 + 2;
    if ((long)(*(ulong *)(uVar4 + 0x18) >> 1) < (long)uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_103b3eca4(uVar4,uVar1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1;
    lVar6 = uVar4 + lVar6 * 0x18;
    *(long *)(lVar6 + 0x20) = lVar5;
    *(long *)(lVar6 + 0x28) = param_9;
    *(double *)(lVar6 + 0x30) = param_3;
    if (param_5 < param_7) {
      if (SBORROW8(param_9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b3ec20);
        (*pcVar3)();
      }
      uVar2 = uVar2 + 3;
      if ((long)(*(ulong *)(uVar4 + 0x18) >> 1) < (long)uVar2) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_103b3eca4(uVar4,uVar2,1);
      }
      *(ulong *)(uVar4 + 0x10) = uVar2;
      lVar6 = uVar4 + uVar1 * 0x18;
      *(long *)(lVar6 + 0x20) = lVar5;
      *(long *)(lVar6 + 0x28) = param_9 + -1;
      *(double *)(lVar6 + 0x30) = param_3;
      uVar1 = uVar2;
    }
    if (param_4 < dVar9) {
      if (SCARRY8(param_9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b3ec24);
        (*pcVar3)();
      }
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_103b3eca4(uVar4,uVar1 + 1,1);
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      lVar6 = uVar4 + uVar1 * 0x18;
      *(long *)(lVar6 + 0x20) = lVar5;
      *(long *)(lVar6 + 0x28) = param_9 + 1;
      *(double *)(lVar6 + 0x30) = param_3;
    }
  }
  if (param_4 < param_6 * 0.5 + dVar8) {
    lVar6 = param_8 + 1;
    if (SCARRY8(param_8,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b3eba4);
      (*pcVar3)();
    }
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar2 = uVar1 + 1;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_103b3eca4(uVar4,uVar2,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2;
    lVar5 = uVar4 + uVar1 * 0x18;
    *(long *)(lVar5 + 0x20) = lVar6;
    *(long *)(lVar5 + 0x28) = param_9;
    *(double *)(lVar5 + 0x30) = param_3;
    if (param_5 < param_7) {
      if (SBORROW8(param_9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b3ec28);
        (*pcVar3)();
      }
      uVar1 = uVar1 + 2;
      if ((long)(*(ulong *)(uVar4 + 0x18) >> 1) < (long)uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_103b3eca4(uVar4,uVar1,1);
      }
      *(ulong *)(uVar4 + 0x10) = uVar1;
      lVar5 = uVar4 + uVar2 * 0x18;
      *(long *)(lVar5 + 0x20) = lVar6;
      *(long *)(lVar5 + 0x28) = param_9 + -1;
      *(double *)(lVar5 + 0x30) = param_3;
      uVar2 = uVar1;
    }
    if (param_4 < dVar9) {
      if (SCARRY8(param_9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b3ec50);
        (*pcVar3)();
      }
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_103b3eca4(uVar4,uVar2 + 1,1);
      }
      *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
      lVar5 = uVar4 + uVar2 * 0x18;
      *(long *)(lVar5 + 0x20) = lVar6;
      *(long *)(lVar5 + 0x28) = param_9 + 1;
      *(double *)(lVar5 + 0x30) = param_3;
    }
  }
  if (param_5 < param_7) {
    if (SBORROW8(param_9,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b3ebc4);
      (*pcVar3)();
    }
    uVar2 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_103b3eca4(uVar4,uVar2 + 1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    lVar6 = uVar4 + uVar2 * 0x18;
    *(long *)(lVar6 + 0x20) = param_8;
    *(long *)(lVar6 + 0x28) = param_9 + -1;
    *(double *)(lVar6 + 0x30) = param_3;
  }
  if (param_4 < dVar9) {
    if (SCARRY8(param_9,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b3ebe4);
      (*pcVar3)();
    }
    uVar2 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_103b3eca4(uVar4,uVar2 + 1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
    lVar6 = uVar4 + uVar2 * 0x18;
    *(long *)(lVar6 + 0x20) = param_8;
    *(long *)(lVar6 + 0x28) = param_9 + 1;
    *(double *)(lVar6 + 0x30) = param_3;
  }
  return uVar4;
}



/* Entry: 103b3eca4; end: 103b3edbb;  */

undefined * FUN_103b3eca4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103b3edbc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112fedd10;
    func_0x0001000285a8(0x112fedd10,&UNK_10dc57d08);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6 * 0x18);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103b3edbc; end: 103b3ee87;  */

undefined1  [16]
FUN_103b3edbc(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c60fa8(param_3);
  dVar3 = ((param_2 + 180.0) / 360.0) * param_3;
  dVar2 = (param_1 * 3.141592653589793) / 180.0;
  dVar1 = dVar2;
  func_0x000107c61670(dVar2);
  func_0x000107c60f1c(dVar2);
  dVar1 = 1.0 / dVar2 + dVar1;
  func_0x000107c61054(dVar1);
  param_3 = param_3 * (1.0 - dVar1 / 3.141592653589793) * 0.5;
  auVar4._0_8_ = param_4 * (dVar3 - (double)(long)dVar3);
  auVar4._8_8_ = param_5 * (param_3 - (double)(long)param_3);
  return auVar4;
}



/* Entry: 103b3ee88; end: 103b3ee97;  */

undefined1  [16] FUN_103b3ee88(void)

{
  return ZEXT816(0x1106d6928);
}



/* Entry: 103b3ee98; end: 103b3efef;  */

void FUN_103b3ee98(void)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_98 [72];
  
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar6 = 1;
  func_0x000107c602e8();
  uVar4 = uRam0000000112feddb0;
  uVar3 = uRam0000000112fedda8;
  lVar1 = lVar6 + 0x38;
  func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar6 + 0x28));
  func_0x000107c61434(uVar4);
  puVar7 = auStack_98;
  func_0x000107c5fb58(puVar7,uVar3,uVar4);
  func_0x000107c606a8();
  uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar12 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
  uVar8 = uVar12 >> 6;
  uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
  uVar10 = 1L << (uVar12 & 0x3f);
  if ((uVar10 & uVar9) != 0) {
    do {
      puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      if ((uVar8 == uVar3 && uVar9 == uVar4) ||
         (func_0x000107c605b8(uVar8,uVar9,uVar3,uVar4,0), (uVar8 & 1) != 0)) {
        func_0x000107c6142c(uVar4);
        goto LAB_103b3efbc;
      }
      uVar12 = uVar12 + 1 & ~uVar11;
      uVar8 = uVar12 >> 6;
      uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
      uVar10 = 1L << (uVar12 & 0x3f);
    } while ((uVar10 & uVar9) != 0);
  }
  *(ulong *)(lVar1 + uVar8 * 8) = uVar10 | uVar9;
  puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103b3eff0);
    (*pcVar5)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
LAB_103b3efbc:
  func_0x000100bcb1dc(0x112fedda8);
  lRam000000011358d6f8 = lVar6;
  return;
}



/* Entry: 103b3eff0; end: 103b3efff; -[DeepLinkingUrlInterceptorSwift lastExternalOpenTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b3eff0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fedd38);
}



/* Entry: 103b3f000; end: 103b3f00f; -[DeepLinkingUrlInterceptorSwift setLastExternalOpenTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3f000(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112fedd38) = param_1;
  return;
}



/* Entry: 103b3f010; end: 103b3f297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b3f010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar2 = auStack_70;
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112fedd18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fedd20,0);
  *(undefined1 *)(unaff_x20 + _DAT_112fedd28) = 0;
  *(undefined **)(unaff_x20 + _DAT_112fedd30) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_112fedd38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fedd40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fedd48) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fedd50);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61604(puVar2 + _DAT_112fedd18,param_3);
  func_0x000107c61174(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61604(puVar2 + _DAT_112fedd20,param_4);
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(param_4);
  return puVar2;
}



/* Entry: 103b3f298; end: 103b3f36b; -[DeepLinkingUrlInterceptorSwift initWithInitialConfig:circumstanceEngine:application:host:internalDeeplinkHandlerBlock:] */

void FUN_103b3f298(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  if (param_3 != 0) {
    func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  puVar1 = &UNK_1106d6ac0;
  func_0x000107c613fc(&UNK_1106d6ac0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000103b3f154(param_3,param_4,param_5,param_6,FUN_103b42d34,puVar1);
  return;
}



/* Entry: 103b3f36c; end: 103b3f40f; -[DeepLinkingUrlInterceptorSwift init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3f36c(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112fedd18,0);
  func_0x000107c61614(param_1 + _DAT_112fedd20,0);
  *(undefined1 *)(param_1 + _DAT_112fedd28) = 0;
  *(undefined **)(param_1 + _DAT_112fedd30) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(param_1 + _DAT_112fedd38) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCDeepLinkingUrlInterceptorSwift/DeepLinkingUrlInterceptorSwift.swift",0x45,2
                      ,0x57,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3f410);
  (*pcVar1)();
}



/* Entry: 103b3f410; end: 103b3f527; -[DeepLinkingUrlInterceptorSwift isValidInternalDeeplinkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b3f410(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c5edb4(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  pcVar1 = *(code **)(param_1 + _DAT_112fedd50);
  func_0x000107c61174();
  lVar3 = param_1;
  (*pcVar1)();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c5ed90();
      lVar5 = lVar4;
      func_0x000107c4a6c4(lVar4);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(lVar4);
      param_1 = lVar3;
      goto LAB_103b3f4f0;
    }
  }
  lVar5 = 0;
LAB_103b3f4f0:
  func_0x000107c61170(param_1);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  return lVar5;
}



/* Entry: 103b3f528; end: 103b3fbd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103b3f528(ulong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
             uint param_7,uint param_8,undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  code **ppcVar9;
  undefined **ppuVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar14;
  long extraout_x12;
  undefined8 uVar15;
  long unaff_x20;
  code *pcVar16;
  code *pcVar17;
  long lVar18;
  long lStack_100;
  uint uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  code *pcStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  
  lVar18 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  uStack_cc = param_7;
  uStack_c8 = param_8;
  uStack_c4 = param_4;
  uStack_c0 = param_2;
  uStack_bc = param_6;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(uVar2 - 8);
  uVar3 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  pcVar14 = (code *)(((long)&lStack_100 - extraout_x8) -
                    (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pcStack_d8 = pcVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c5ed70();
  puVar4 = puVar5;
  func_0x000107c6142c();
  uVar3 = uVar3 & 0xffffffffffff;
  if (((ulong)puVar5 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)puVar5 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    return 0;
  }
  uStack_f0 = param_9;
  uStack_e8 = param_10;
  pcVar17 = *(code **)(unaff_x20 + _DAT_112fedd50);
  lStack_100 = (long)&lStack_100 - extraout_x8;
  uStack_f4 = param_5;
  pcStack_e0 = pcVar14 + -extraout_x12;
  (*pcVar17)();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c5ed90();
      puVar6 = puVar5;
      func_0x000107c4a6c4();
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puVar4);
      if ((int)puVar6 != 0) {
        uVar7 = (ulong)(uStack_cc & 1);
        func_0x000103b41e50();
        uVar3 = uVar7;
        (*pcVar17)();
        uVar2 = uVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        puVar5 = &UNK_1106d69d0;
        func_0x000107c613fc(&UNK_1106d69d0,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = uStack_f0;
        *(undefined8 *)(puVar5 + 0x18) = uStack_e8;
        func_0x000100d66e64();
        if (uVar2 != 0) {
          uVar3 = uVar2;
          func_0x000107c615f0(uVar2);
          func_0x000107c5ed90();
          uVar8 = uVar7;
          func_0x000107c5f9dc(uVar7,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                              PTR___ss11AnyHashableVSHsWP_11034e450);
          pcStack_98 = FUN_103b42cb4;
          pcStack_b8 = (code *)PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_1010f39c4;
          puStack_a0 = &UNK_1106d69e8;
          ppcVar9 = &pcStack_b8;
          puStack_90 = puVar5;
          func_0x000107c60bc4(ppcVar9);
          puVar4 = puStack_90;
          func_0x000107c6157c(puVar5);
          func_0x000107c61574(puVar4);
          func_0x000107c4462c(uVar2);
          func_0x000107c61574(puVar5);
          func_0x000107c615e8(uVar2);
          func_0x000107c60bd0(ppcVar9);
          func_0x000107c6142c(uVar7);
          func_0x000107c615e8(uVar2);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar8);
          return 1;
        }
        func_0x000107c6142c(uVar7);
        func_0x000107c61574(puVar5);
        return 1;
      }
    }
  }
  uVar3 = param_1;
  FUN_103b41554();
  if (((uVar3 & 1) == 0) &&
     (uVar3 = param_1, func_0x000103b415f0(param_1,uStack_bc & 1), (uVar3 & 1) == 0)) {
    return 0;
  }
  pcVar14 = pcStack_e0;
  if ((uStack_c0 & 1) == 0) {
    if ((uStack_c4 & 1) != 0) {
      return 0;
    }
  }
  else {
    if ((*(byte *)(unaff_x20 + _DAT_112fedd28) & 1) != 0) {
      return 0;
    }
    if ((uStack_c8 & 1) != 0) {
      return 0;
    }
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8();
  if ((uStack_bc & 1) != 0) {
    puVar4 = puVar5;
    func_0x000107c5ed90();
    puVar6 = puVar4;
    func_0x000108b8fb14();
    func_0x000107c61170(puVar4);
    if ((((ulong)puVar6 & 1) == 0) && (uVar3 = param_1, FUN_103b42960(), (uVar3 & 1) != 0)) {
      uVar15 = *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
      puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
      puStack_70 = PTR___sSbN_11034dd40;
      func_0x000100102924(&puStack_88,&pcStack_b8);
      func_0x000107c61174(uVar15);
      puVar4 = puVar5;
      func_0x000107c61558(puVar5);
      puStack_88 = puVar5;
      func_0x000101334054(&pcStack_b8,uVar15,puVar4);
      func_0x000107c61170(uVar15);
      puVar5 = puStack_88;
    }
  }
  pcVar17 = pcVar14;
  uVar3 = param_1;
  (**(code **)(lVar18 + 0x10))(pcVar14,param_1,uVar2);
  func_0x000107c5edc8();
  if (uVar3 == 0) {
LAB_103b3f99c:
    lVar1 = lStack_100;
    func_0x000103b41ae8(lStack_100,param_1);
    lVar11 = lVar1;
    (**(code **)(lVar18 + 0x30))(lVar1,1,uVar2);
    if ((int)lVar11 == 1) {
      pcVar16 = (code *)0x112d36580;
      func_0x000103b43138(lVar1,0x112d36580,&UNK_10d9016d0);
    }
    else {
      (**(code **)(lVar18 + 8))(pcVar14,uVar2);
      pcVar16 = pcStack_d8;
      pcVar17 = *(code **)(lVar18 + 0x20);
      (*pcVar17)(pcStack_d8,lVar1,uVar2);
      (*pcVar17)(pcVar14,pcVar16,uVar2);
    }
  }
  else {
    puStack_88 = (undefined *)0x697261666173;
    uStack_80 = 0xe600000000000000;
    pcStack_b8 = pcVar17;
    uStack_b0 = uVar3;
    func_0x000100e8b654();
    ppuVar10 = &puStack_88;
    pcVar16 = (code *)PTR___sSSN_11034da80;
    func_0x000107c60204(ppuVar10,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pcVar17,pcVar17);
    func_0x000107c6142c(uVar3);
    if (ppuVar10 == (undefined **)0x0) goto LAB_103b3f99c;
  }
  pcVar12 = pcVar14;
  FUN_103b42a34();
  lVar1 = _DAT_112fedd30;
  pcVar17 = pcVar12;
  pcVar13 = pcVar16;
  if (pcVar16 != (code *)0x0) {
    uVar3 = (ulong)pcVar12 & 0xffffffffffff;
    if (((ulong)pcVar16 & 0x2000000000000000) != 0) {
      uVar3 = (ulong)pcVar16 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) {
      func_0x000107c6142c();
      pcVar17 = pcVar16;
    }
    else {
      func_0x000107c61428(unaff_x20 + _DAT_112fedd30,&pcStack_b8,0,0);
      pcVar17 = *(code **)(unaff_x20 + lVar1);
      func_0x000107c61434(pcVar17);
      func_0x0001000f66f0(pcVar12,pcVar16,pcVar17);
      func_0x000107c6142c(pcVar16);
      func_0x000107c6142c();
      if (((ulong)pcVar12 & 1) != 0) {
        (**(code **)(lVar18 + 8))(pcVar14,uVar2);
        func_0x000107c6142c(puVar5);
        return 0;
      }
    }
  }
  if ((uStack_f4 & 1) != 0) {
    if (lRam000000011358d6f0 != -1) {
      pcVar17 = (code *)0x11358d6f0;
      pcVar13 = FUN_103b3ee98;
      func_0x000107c61568();
    }
    uVar15 = uRam000000011358d6f8;
    func_0x000107c5edc8();
    if (pcVar13 == (code *)0x0) {
      pcVar17 = (code *)0x0;
      pcVar16 = (code *)0xe000000000000000;
    }
    else {
      pcVar16 = pcVar13;
      func_0x000107c5fb1c();
      func_0x000107c6142c(pcVar13);
    }
    func_0x0001000f66f0(pcVar17,pcVar16,uVar15);
    func_0x000107c6142c(pcVar16);
    if (((ulong)pcVar17 & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112fedd28) = 1;
      FUN_103b4234c(pcVar14,param_3 & 1,uStack_f0,uStack_e8);
      goto LAB_103b3fb84;
    }
  }
  FUN_103b4264c(pcVar14,puVar5,uStack_f0,uStack_e8);
LAB_103b3fb84:
  (**(code **)(lVar18 + 8))(pcVar14,uVar2);
  func_0x000107c6142c(puVar5);
  return 1;
}



/* Entry: 103b3fbd8; end: 103b40447; -[DeepLinkingUrlInterceptorSwift interceptURL:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:] */

uint FUN_103b3fbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar2 = 0;
  uStack_6c = param_6;
  uStack_68 = param_7;
  uStack_64 = param_8;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + lVar1;
  func_0x000107c60bc4();
  func_0x000107c5edb4(puVar7,param_3);
  if (param_11 == 0) {
    puVar4 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar4 = &UNK_1106d6a98;
    func_0x000107c613fc(&UNK_1106d6a98,0x18,7);
    *(long *)(puVar4 + 0x10) = param_11;
    uVar5 = 0x103b4325c;
  }
  func_0x000107c61174(param_1);
  *(undefined8 *)((long)auStack_80 + lVar1) = uVar5;
  *(undefined **)((long)auStack_80 + lVar1 + 8) = puVar4;
  puVar3 = puVar7;
  FUN_103b3f528(puVar7,param_4,param_5,uStack_6c,uStack_68,uStack_64,(undefined1)param_9,
                param_9._1_1_);
  func_0x000100d66e74(uVar5,puVar4);
  func_0x000107c61170(param_1);
  (**(code **)(lVar6 + 8))(puVar7,lVar2);
  return (uint)puVar3 & 1;
}



/* Entry: 103b40448; end: 103b40a03; -[DeepLinkingUrlInterceptorSwift interceptURLWithRefactor:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:] */

uint FUN_103b40448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar2 = 0;
  uStack_6c = param_6;
  uStack_68 = param_7;
  uStack_64 = param_8;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + lVar1;
  func_0x000107c60bc4();
  func_0x000107c5edb4(puVar7,param_3);
  if (param_11 == 0) {
    puVar4 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar4 = &UNK_1106d6a70;
    func_0x000107c613fc(&UNK_1106d6a70,0x18,7);
    *(long *)(puVar4 + 0x10) = param_11;
    uVar5 = 0x103b43258;
  }
  func_0x000107c61174(param_1);
  *(undefined8 *)((long)auStack_80 + lVar1) = uVar5;
  *(undefined **)((long)auStack_80 + lVar1 + 8) = puVar4;
  puVar3 = puVar7;
  func_0x000103b3fd20(puVar7,param_4,param_5,uStack_6c,uStack_68,uStack_64,(undefined1)param_9,
                      param_9._1_1_);
  func_0x000100d66e74(uVar5,puVar4);
  func_0x000107c61170(param_1);
  (**(code **)(lVar6 + 8))(puVar7,lVar2);
  return (uint)puVar3 & 1;
}



/* Entry: 103b40a04; end: 103b40b9b; -[DeepLinkingUrlInterceptorSwift handleOpenURL:additionalInfo:onDestinationReached:completion:] */

void FUN_103b40a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5edb4(puVar3,param_3);
  if (param_4 != 0) {
    func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_5 == 0) {
    puVar5 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar5 = &UNK_1106d6a48;
    func_0x000107c613fc(&UNK_1106d6a48,0x18,7);
    *(long *)(puVar5 + 0x10) = param_5;
    uVar1 = 0x103b42d2c;
  }
  if (param_6 == 0) {
    puVar6 = (undefined *)0x0;
    pcVar4 = (code *)0x0;
  }
  else {
    puVar6 = &UNK_1106d6a20;
    func_0x000107c613fc(&UNK_1106d6a20,0x18,7);
    *(long *)(puVar6 + 0x10) = param_6;
    pcVar4 = FUN_103b42d18;
  }
  func_0x000107c61174(param_1);
  func_0x000103b40590(puVar3,param_4,uVar1,puVar5,pcVar4,puVar6);
  func_0x000100d66e74(pcVar4,puVar6);
  func_0x000100d66e74(uVar1,puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  (**(code **)(lVar7 + 8))(puVar3,lVar2);
  return;
}



/* Entry: 103b40b9c; end: 103b40c3f;  */

/* WARNING: Possible PIC construction at 0x000103b40c10: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b40b9c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  ulong uStack_38;
  
  FUN_103b42a34();
  if (param_2 == 0) {
    return;
  }
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112fedd30,auStack_58,0x21,0);
    func_0x000100403b00(auStack_40,param_1,param_2);
    func_0x000107c614a8(auStack_58);
    param_2 = uStack_38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103b40c40; end: 103b40ce3; -[DeepLinkingUrlInterceptorSwift disableInterceptingWebsiteForURL:] */

void FUN_103b40c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_103b40b9c(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 103b40ce4; end: 103b41553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b40ce4(undefined8 param_1,long param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  uint uVar13;
  long extraout_x8;
  ulong uVar14;
  ulong uVar15;
  long extraout_x12;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lStack_200;
  long lStack_1f8;
  undefined *puStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined1 auStack_158 [40];
  undefined1 auStack_130 [32];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)&lStack_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_1f8 = lVar3 - extraout_x12;
  uVar4 = 1;
  func_0x000103b41e50();
  uVar17 = uVar4;
  lStack_200 = lVar3;
  if (param_6 != 0) {
    uVar14 = 1L << ((ulong)*(byte *)(param_6 + 0x20) & 0x3f);
    uVar17 = 0xffffffffffffffff;
    if ((*(byte *)(param_6 + 0x20) & 0x3f) < 6) {
      uVar17 = ~(-1L << (uVar14 & 0x3f));
    }
    uVar17 = uVar17 & *(ulong *)(param_6 + 0x40);
    uVar14 = uVar14 + 0x3f >> 6;
    func_0x000107c61434(param_6);
    lVar3 = 0;
    do {
      if (uVar17 == 0) {
        uVar17 = uVar14;
        if ((long)uVar14 <= lVar3 + 1) {
          uVar17 = lVar3 + 1;
        }
        lVar8 = uVar17 - 1;
        lVar9 = lVar3;
        do {
          lVar3 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103b4153c);
            (*pcVar2)();
          }
          if ((long)uVar14 <= lVar3) {
            uVar17 = 0;
            uStack_d0 = 0;
            puStack_e8 = (undefined *)0x0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_108 = 0;
            puStack_110 = (undefined *)0x0;
            lStack_f8 = 0;
            uStack_100 = 0;
            goto LAB_103b40e90;
          }
          uVar17 = ((ulong *)(param_6 + 0x40))[lVar3];
          lVar9 = lVar9 + 1;
        } while (uVar17 == 0);
      }
      uVar16 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 - 1 & uVar17;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar3 << 6;
      func_0x0001007bbd18(*(long *)(param_6 + 0x30) + uVar16 * 0x28,&puStack_110);
      func_0x0001000bb420(*(long *)(param_6 + 0x38) + uVar16 * 0x20,&puStack_e8);
      lVar8 = lVar3;
LAB_103b40e90:
      puStack_98 = puStack_e8;
      lStack_a0 = uStack_f0;
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
      uStack_80 = uStack_d0;
      uStack_b8 = uStack_108;
      puStack_c0 = puStack_110;
      puStack_a8 = (undefined *)lStack_f8;
      puStack_b0 = (undefined *)uStack_100;
      if (lStack_f8 == 0) {
        func_0x000107c61574();
        uVar17 = param_6;
        break;
      }
      func_0x000100102924(&puStack_98,auStack_130);
      func_0x0001007bbd18(&puStack_110,auStack_158);
      func_0x0001000bb420(auStack_130,&uStack_178);
      uStack_1b8 = uStack_170;
      uStack_1c0 = uStack_178;
      lStack_1a8 = lStack_160;
      uStack_1b0 = uStack_168;
      lVar3 = lVar8;
      if (lStack_160 == 0) {
        uVar16 = 0;
        func_0x000103b43138(&uStack_1c0,0x112d387f8,&UNK_10d902650);
        func_0x000107c61434(uVar4);
        puVar6 = auStack_158;
        func_0x000100df95d0(puVar6);
        func_0x000107c6142c(uVar4);
        if ((uVar16 & 1) == 0) {
          func_0x0001007bbff0(auStack_158);
          func_0x000100183ab8(auStack_130);
          func_0x0001007bbff0(&puStack_110);
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
        }
        else {
          uVar16 = uVar4;
          func_0x000107c61558();
          uStack_1c0 = uVar4;
          if ((int)uVar16 == 0) {
            func_0x000101228228();
          }
          uVar4 = uStack_1c0;
          func_0x0001007bbff0(*(long *)(uStack_1c0 + 0x30) + (long)puVar6 * 0x28);
          func_0x000100102924(*(long *)(uVar4 + 0x38) + (long)puVar6 * 0x20,&uStack_1a0);
          func_0x00010192cbc4(puVar6,uVar4);
          func_0x0001007bbff0(auStack_158);
          func_0x000100183ab8(auStack_130);
          func_0x0001007bbff0(&puStack_110);
        }
        func_0x000103b43138(&uStack_1a0,0x112d387f8,&UNK_10d902650);
      }
      else {
        uVar16 = 0;
        func_0x000100102924(&uStack_1c0);
        uVar5 = uVar4;
        func_0x000107c61558();
        uVar13 = (uint)uVar5;
        puVar6 = auStack_158;
        uStack_1c0 = uVar4;
        func_0x000100df95d0();
        uVar15 = (ulong)~(uint)uVar16 & 1;
        if (SCARRY8(*(long *)(uVar4 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103b41540);
          (*pcVar2)();
        }
        if (*(long *)(uVar4 + 0x18) < (long)(*(long *)(uVar4 + 0x10) + uVar15)) {
          func_0x0001012283cc();
          puVar6 = auStack_158;
          func_0x000100df95d0();
          if (((uint)uVar16 & 1) != (uVar13 & 1)) {
            func_0x000107c60624(PTR___ss11AnyHashableVN_11034e448);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103b41554);
            (*pcVar2)();
          }
joined_r0x000103b410f8:
          if ((uVar16 & 1) == 0) goto LAB_103b41028;
LAB_103b40de4:
          uVar4 = uStack_1c0;
          lVar9 = *(long *)(uStack_1c0 + 0x38) + (long)puVar6 * 0x20;
          func_0x000100183ab8(lVar9);
          func_0x000100102924(&uStack_1a0,lVar9);
          func_0x0001007bbff0(auStack_158);
          func_0x000100183ab8(auStack_130);
          func_0x0001007bbff0(&puStack_110);
        }
        else {
          if ((uVar5 & 1) == 0) {
            func_0x000101228228();
            goto joined_r0x000103b410f8;
          }
          if ((uVar16 & 1) != 0) goto LAB_103b40de4;
LAB_103b41028:
          uVar4 = uStack_1c0;
          lVar9 = uStack_1c0 + ((ulong)puVar6 >> 6) * 8;
          *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << ((ulong)puVar6 & 0x3f);
          func_0x0001007bbd18(auStack_158,*(long *)(uStack_1c0 + 0x30) + (long)puVar6 * 0x28);
          func_0x000100102924(&uStack_1a0,*(long *)(uVar4 + 0x38) + (long)puVar6 * 0x20);
          func_0x0001007bbff0(auStack_158);
          func_0x000100183ab8(auStack_130);
          func_0x0001007bbff0(&puStack_110);
          if (SCARRY8(*(long *)(uVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103b41544);
            (*pcVar2)();
          }
          *(long *)(uVar4 + 0x10) = *(long *)(uVar4 + 0x10) + 1;
        }
      }
    } while( true );
  }
  (**(code **)(unaff_x20 + _DAT_112fedd50))();
  uVar14 = uVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  puVar7 = &UNK_1106d6cf0;
  func_0x000107c613fc(&UNK_1106d6cf0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = param_4;
  *(undefined8 *)(puVar7 + 0x18) = param_5;
  if (param_2 == 0) {
    if (uVar14 != 0) {
      func_0x000100d66e64();
LAB_103b41408:
      uVar17 = uVar14;
      func_0x000107c615f0(uVar14);
      func_0x000107c5ed90();
      uVar16 = uVar4;
      func_0x000107c5f9dc(uVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      lStack_a0 = 0x103b43260;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1010f39c4;
      puStack_a8 = &UNK_1106d6d08;
      ppuVar12 = &puStack_c0;
      puStack_98 = puVar7;
      func_0x000107c60bc4(ppuVar12);
      puVar10 = puStack_98;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar10);
      func_0x000107c4462c(uVar14);
      func_0x000107c61574(puVar7);
      func_0x000107c615e8(uVar14);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c6142c(uVar4);
      func_0x000107c615e8(uVar14);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar16);
      return;
    }
  }
  else if (uVar14 != 0) {
    func_0x000100d66e64();
    func_0x000100d66e64(param_2,param_3);
    uVar17 = uVar14;
    func_0x000107c50648();
    if ((uVar17 & 1) == 0) {
      func_0x000100d66e74(param_2,param_3);
      goto LAB_103b41408;
    }
    uVar17 = uVar14;
    func_0x000107c61150(uVar14,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_handleOpenURL_additionalInfo_sou_1125d20a0);
    if ((uVar17 & 1) != 0) {
      lVar8 = 0;
      func_0x000107c5ede0();
      lVar9 = lStack_1f8;
      lVar18 = *(long *)(lVar8 + -8);
      (**(code **)(lVar18 + 0x10))(lStack_1f8,param_1,lVar8);
      (**(code **)(lVar18 + 0x38))(lVar9,0,1,lVar8);
      lVar3 = lStack_200;
      func_0x000103b430f0(lVar9,lStack_200,0x112d36580,&UNK_10d9016d0);
      lVar9 = lVar3;
      (**(code **)(lVar18 + 0x30))(lVar3,1,lVar8);
      func_0x000100d66e64(param_2,param_3);
      func_0x000107c615f0(uVar14);
      puVar10 = puVar7;
      func_0x000107c6157c();
      puStack_1c8 = (undefined *)0x0;
      if ((int)lVar9 != 1) {
        func_0x000107c5ed90();
        (**(code **)(lVar18 + 8))(lVar3,lVar8);
        puStack_1c8 = puVar10;
      }
      uVar17 = uVar4;
      func_0x000107c5f9dc(uVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      puVar10 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_100ff4e14;
      puStack_a8 = &UNK_1106d6d30;
      ppuVar12 = &puStack_c0;
      lStack_a0 = param_2;
      puStack_98 = param_3;
      func_0x000107c60bc4(ppuVar12);
      puVar1 = puStack_98;
      func_0x000107c6157c(param_3);
      func_0x000107c61574(puVar1);
      lStack_a0 = 0x103b43260;
      puStack_c0 = puVar10;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1010f39c4;
      puStack_a8 = &UNK_1106d6d58;
      ppuVar11 = &puStack_c0;
      puStack_98 = puVar7;
      func_0x000107c60bc4(ppuVar11);
      puVar10 = puStack_98;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar10);
      func_0x000107c44630(uVar14);
      func_0x000107c615e8(uVar14);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(puStack_1c8);
      func_0x000107c61170(uVar17);
      func_0x000100d66e74(param_2,param_3);
      func_0x000100d66e74(param_2,param_3);
      func_0x000107c615e8(uVar14);
      func_0x000107c61574(puVar7);
      func_0x000103b43138(lStack_1f8,0x112d36580,&UNK_10d9016d0);
      func_0x000107c6142c(uVar4);
      return;
    }
    func_0x000107c615e8(uVar14);
    func_0x000100d66e74(param_2,param_3);
    goto LAB_103b41504;
  }
  func_0x000100d66e64();
LAB_103b41504:
  func_0x000107c6142c(uVar4);
  func_0x000107c61574(puVar7);
  return;
}



/* Entry: 103b41554; end: 103b415ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b41554(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c5ed90();
  uVar1 = param_1;
  func_0x000108b8fb14();
  func_0x000107c61170(param_1);
  if ((int)uVar1 != 0) {
    lVar2 = unaff_x20 + _DAT_112fedd18;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5ed90();
      func_0x000107c3f3f4(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 103b415f0; end: 103b4234b;  */

uint FUN_103b415f0(undefined8 param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lStack_88 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar12 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112d7e680;
  lStack_98 = lVar12;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  puVar5 = (undefined *)0x112d36580;
  puVar6 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar11 - extraout_x12_00;
  func_0x000107c5edc8();
  puVar7 = puVar5;
  if (puVar6 != (undefined *)0x0) {
    puVar7 = puVar6;
    lStack_a0 = lVar4;
    func_0x000107c5fb1c();
    func_0x000107c6142c(puVar6);
    if ((((puVar5 == (undefined *)0x70747468) && (puVar7 == (undefined *)0xe400000000000000)) ||
        (puVar6 = puVar5, func_0x000107c605b8(puVar5,puVar7,0x70747468,0xe400000000000000,0),
        ((ulong)puVar6 & 1) != 0)) ||
       ((puVar5 == (undefined *)0x7370747468 && (puVar7 == (undefined *)0xe500000000000000)))) {
      func_0x000107c6142c(puVar7);
      goto LAB_103b417a0;
    }
    puVar6 = puVar7;
    func_0x000107c605b8();
    func_0x000107c6142c();
    lVar4 = lStack_a0;
    if (((ulong)puVar5 & 1) != 0) goto LAB_103b417a0;
  }
  func_0x000107c5edc8();
  if (puVar6 != (undefined *)0x0) {
    uStack_80 = 0x697261666173;
    uStack_78 = 0xe600000000000000;
    puStack_70 = puVar7;
    puStack_68 = puVar6;
    func_0x000100e8b654();
    puVar8 = &uStack_80;
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c60204(puVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar7,puVar7);
    func_0x000107c6142c();
    if (puVar8 != (undefined8 *)0x0) {
      func_0x000107c5ed70();
      puVar7 = puVar5;
      func_0x000107c5fb1c();
      func_0x000107c6142c(puVar5);
      if ((puVar6 == (undefined *)0x6c623a74756f6261) && (puVar7 == (undefined *)0xeb000000006b6e61)
         ) {
        func_0x000107c6142c(0xeb000000006b6e61);
        param_2 = 0;
      }
      else {
        func_0x000107c605b8(puVar6,puVar7,0x6c623a74756f6261,0xeb000000006b6e61,0);
        func_0x000107c6142c(puVar7);
        param_2 = (uint)puVar6 ^ 1;
      }
      goto LAB_103b417a0;
    }
  }
  func_0x000103b41ae8(lVar14,param_1);
  lVar3 = lStack_88;
  (**(code **)(lStack_88 + 0x38))(lVar11,1,1,lVar4);
  lVar13 = (long)*(int *)(lVar13 + 0x30);
  func_0x000103b430f0(lVar14,lVar12,0x112d36580,&UNK_10d9016d0);
  func_0x000103b430f0(lVar11,lVar12 + lVar13,0x112d36580,&UNK_10d9016d0);
  pcVar15 = *(code **)(lVar3 + 0x30);
  lVar9 = lVar12;
  (*pcVar15)(lVar12,1,lVar4);
  lVar2 = lStack_90;
  if ((int)lVar9 == 1) {
    func_0x000103b43138(lVar11,0x112d36580,&UNK_10d9016d0);
    func_0x000103b43138(lVar14,0x112d36580,&UNK_10d9016d0);
    lVar13 = lVar12 + lVar13;
    (*pcVar15)(lVar13,1,lVar4);
    if ((int)lVar13 == 1) {
      func_0x000103b43138(lVar12,0x112d36580,&UNK_10d9016d0);
      param_2 = 0;
      goto LAB_103b417a0;
    }
  }
  else {
    func_0x000103b430f0(lVar12,lStack_90,0x112d36580,&UNK_10d9016d0);
    lVar9 = lVar12 + lVar13;
    (*pcVar15)(lVar9,1,lVar4);
    lVar1 = lStack_98;
    if ((int)lVar9 != 1) {
      (**(code **)(lVar3 + 0x20))(lStack_98,lVar12 + lVar13,lVar4);
      uVar10 = 0x112d7e688;
      func_0x000103b431d0(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                          PTR___s10Foundation3URLVSQAAMc_1103509a8);
      lVar13 = lVar2;
      func_0x000107c5fab8(lVar2,lVar1,lVar4,uVar10);
      pcVar15 = *(code **)(lVar3 + 8);
      (*pcVar15)(lVar1,lVar4);
      func_0x000103b43138(lVar11,0x112d36580,&UNK_10d9016d0);
      func_0x000103b43138(lVar14,0x112d36580,&UNK_10d9016d0);
      (*pcVar15)(lVar2,lVar4);
      func_0x000103b43138(lVar12,0x112d36580,&UNK_10d9016d0);
      param_2 = (uint)lVar13 ^ 1;
      goto LAB_103b417a0;
    }
    func_0x000103b43138(lVar11,0x112d36580,&UNK_10d9016d0);
    func_0x000103b43138(lVar14,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar3 + 8))(lVar2,lVar4);
  }
  func_0x000103b43138(lVar12,0x112d7e680,&UNK_10d95e350);
  param_2 = 1;
LAB_103b417a0:
  return param_2 & 1;
}



/* Entry: 103b4234c; end: 103b4264b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4234c(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  code *pcVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar3 + -8);
  lVar16 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = auStack_e0 + -(lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar4 = unaff_x20 + _DAT_112fedd20;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5ed90();
    puVar6 = &UNK_1106d6bb0;
    func_0x000107c613fc(&UNK_1106d6bb0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    pcVar11 = *(code **)(lVar17 + 0x10);
    (*pcVar11)(puVar15,param_1,lVar3);
    uVar14 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar12 = uVar14 + 0x18 & (uVar14 ^ 0xffffffffffffffff);
    lVar16 = uVar12 + lVar16;
    uVar13 = lVar16 + 7U & 0xfffffffffffffff8;
    puVar7 = &UNK_1106d6bd8;
    uStack_d8 = param_3;
    func_0x000107c613fc(&UNK_1106d6bd8,uVar13 + 0x10,uVar14 | 7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    pcVar18 = *(code **)(lVar17 + 0x20);
    (*pcVar18)(puVar7 + uVar12,puVar15,lVar3);
    uVar2 = uStack_d8;
    *(undefined8 *)(puVar7 + uVar13) = uStack_d8;
    *(undefined8 *)((long)(puVar7 + uVar13) + 8) = param_4;
    pcStack_80 = FUN_103b42e98;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1106d6bf0;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_78;
    func_0x000100d66e64(uVar2,param_4);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_1106d6bb0;
    func_0x000107c613fc(&UNK_1106d6bb0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,unaff_x20);
    (*pcVar11)(puVar15,param_1,lVar3);
    puVar7 = &UNK_1106d6c28;
    func_0x000107c613fc(&UNK_1106d6c28,lVar16 + 1,uVar14 | 7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    (*pcVar18)(puVar7 + uVar12,puVar15,lVar3);
    puVar7[lVar16] = param_2 & 1;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_103b42fb0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1106d6c40;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_78);
    puVar6 = &UNK_1106d6bb0;
    func_0x000107c613fc(&UNK_1106d6bb0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,unaff_x20);
    pcStack_80 = FUN_103b4307c;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1106d6c68;
    ppuVar10 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar10);
    func_0x000107c61574(puStack_78);
    func_0x000107c4ef44(lVar4);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 103b4264c; end: 103b428af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4264c(double param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  double dVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar5 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(lVar5);
  func_0x000107c5ee8c();
  (**(code **)(lVar10 + 8))(lVar5,lVar4);
  dVar11 = *(double *)(unaff_x20 + _DAT_112fedd38);
  bVar2 = false;
  bVar3 = true;
  if (0.0 < dVar11) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(dVar11) && !NAN(param_1)) {
      bVar2 = dVar11 == param_1;
      bVar3 = param_1 <= dVar11;
    }
  }
  bVar1 = false;
  if ((!bVar3 || bVar2) && (bVar1 = false, !NAN(param_1 - dVar11))) {
    bVar1 = param_1 - dVar11 < 1.0;
  }
  if (bVar1) {
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    puVar7 = PTR___sSds7CVarArgsWP_11034ddc0;
    *(undefined **)(lVar4 + 0x38) = PTR___sSdN_11034dd90;
    *(undefined **)(lVar4 + 0x40) = puVar7;
    *(undefined8 *)(lVar4 + 0x20) = 0x408f400000000000;
    uVar9 = 0xe400000000000000;
    func_0x000107c5fb00(0x66302e25,0xe400000000000000,lVar4);
    func_0x000107c6142c(uVar9);
    if (param_4 != (code *)0x0) {
      (*param_4)(0);
    }
  }
  else {
    *(double *)(unaff_x20 + _DAT_112fedd38) = param_1;
    lVar4 = unaff_x20 + _DAT_112fedd18;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c5ed90();
      uVar6 = 0;
      func_0x000100dfa6ec(0);
      uVar9 = 0x112d377a8;
      func_0x000103b431d0(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
      func_0x000107c5f9dc(param_3,uVar6,PTR___sypN_11034f1a8 + 8,uVar9);
      puVar7 = &UNK_1106d6ca0;
      func_0x000107c613fc(&UNK_1106d6ca0,0x20,7);
      *(code **)(puVar7 + 0x10) = param_4;
      *(undefined8 *)(puVar7 + 0x18) = param_5;
      pcStack_70 = FUN_103b430c4;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100ab47f8;
      puStack_78 = &UNK_1106d6cb8;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar7 = puStack_68;
      func_0x000100d66e64(param_4,param_5);
      func_0x000107c61574(puVar7);
      func_0x000107c4de70(lVar4);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 103b428b0; end: 103b428e3;  */

void FUN_103b428b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b428e4; end: 103b4295f; -[DeepLinkingUrlInterceptorSwift .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b42900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b42904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b428e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fedd40));
  return;
}



/* Entry: 103b42960; end: 103b42a33;  */

uint FUN_103b42960(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c5edc8();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x000107c5fb1c();
    func_0x000107c6142c(param_2);
    if ((((param_1 == 0x70747468) && (lVar2 == -0x1c00000000000000)) ||
        (uVar1 = param_1, func_0x000107c605b8(param_1,lVar2,0x70747468,0xe400000000000000,0),
        (uVar1 & 1) != 0)) || ((param_1 == 0x7370747468 && (lVar2 == -0x1b00000000000000)))) {
      uVar3 = 1;
    }
    else {
      func_0x000107c605b8(param_1,lVar2,0x7370747468,0xe500000000000000,0);
      uVar3 = (uint)param_1;
    }
    func_0x000107c6142c(lVar2);
  }
  return uVar3 & 1;
}



/* Entry: 103b42a34; end: 103b42cb3;  */

undefined1  [16] FUN_103b42a34(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  func_0x000107c5edc8();
  if (param_2 != 0) {
    uVar5 = param_2;
    func_0x000107c5fb1c();
    uVar3 = uVar5;
    func_0x000107c6142c(param_2);
    if ((((param_1 == 0x70747468) && (uVar5 == 0xe400000000000000)) ||
        (uVar4 = param_1, uVar3 = uVar5,
        func_0x000107c605b8(param_1,uVar5,0x70747468,0xe400000000000000,0), (uVar4 & 1) != 0)) ||
       ((param_1 == 0x7370747468 && (uVar5 == 0xe500000000000000)))) {
      func_0x000107c6142c();
    }
    else {
      uVar3 = uVar5;
      func_0x000107c605b8();
      func_0x000107c6142c();
      if ((param_1 & 1) == 0) goto LAB_103b42c68;
    }
    func_0x000107c5edbc();
    if (uVar3 == 0) {
      uVar5 = 0;
      uVar4 = 0xe000000000000000;
    }
    else {
      uVar4 = uVar3;
      func_0x000107c5fb1c();
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c61434(0xe400000000000000);
    uVar1 = 0x2e777777;
    uVar3 = uVar4;
    func_0x000107c5fbb4(0x2e777777,0xe400000000000000,uVar5,uVar4);
    if ((uVar1 & 1) == 0) {
      func_0x000107c6142c(0xe400000000000000);
    }
    else {
      func_0x000107c61434(uVar4);
      uVar2 = 0x2e777777;
      func_0x000107c5fb5c(0x2e777777,0xe400000000000000);
      func_0x000107c6142c(0xe400000000000000);
      uVar1 = uVar4;
      func_0x0001011a7878(uVar2,uVar5,uVar4);
      func_0x000107c6142c(uVar4);
      func_0x000107c5fb2c(uVar2,uVar5,uVar1,uVar3);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uVar5;
      uVar5 = uVar2;
    }
    func_0x000107c61434(0xe200000000000000);
    uVar1 = 0x2e6d;
    uVar3 = uVar4;
    func_0x000107c5fbb4(0x2e6d,0xe200000000000000,uVar5,uVar4);
    if ((uVar1 & 1) == 0) {
      func_0x000107c6142c(0xe200000000000000);
    }
    else {
      func_0x000107c61434(uVar4);
      uVar2 = 0x2e6d;
      func_0x000107c5fb5c(0x2e6d,0xe200000000000000);
      func_0x000107c6142c(0xe200000000000000);
      uVar1 = uVar4;
      func_0x0001011a7878(uVar2,uVar5,uVar4);
      func_0x000107c6142c(uVar4);
      func_0x000107c5fb2c(uVar2,uVar5,uVar1,uVar3);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uVar5;
      uVar5 = uVar2;
    }
    uVar3 = uVar5 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar3 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) goto LAB_103b42c70;
    func_0x000107c6142c(uVar4);
  }
LAB_103b42c68:
  uVar5 = 0;
  uVar4 = 0;
LAB_103b42c70:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 103b42cb4; end: 103b42cd3;  */

void FUN_103b42cb4(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(1);
  }
  return;
}



/* Entry: 103b42cd4; end: 103b42cf7;  */

undefined8 FUN_103b42cd4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b42cf8; end: 103b42d17;  */

void FUN_103b42cf8(void)

{
  func_0x000107c61168(&PTR_PTR_11292de60);
  return;
}



/* Entry: 103b42d18; end: 103b42d33;  */

void FUN_103b42d18(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103b42d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 103b42d34; end: 103b42d53;  */

void FUN_103b42d34(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 103b42d54; end: 103b42e67;  */

void FUN_103b42d54(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  code *pcVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 uStack_41;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uStack_41 = 0;
  if (param_1 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1106d6b38;
    func_0x000107c613fc(&UNK_1106d6b38,0x18,7);
    *(undefined1 **)(puVar4 + 0x10) = &uStack_41;
    puVar2 = &UNK_1106d6b60;
    func_0x000107c613fc(&UNK_1106d6b60,0x20,7);
    pcVar5 = FUN_103b42e68;
    *(code **)(puVar2 + 0x10) = FUN_103b42e68;
    *(undefined **)(puVar2 + 0x18) = puVar4;
    pcStack_58 = FUN_103b42e78;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_10006eb60;
    puStack_60 = &UNK_1106d6b78;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x000107c4c654(param_1);
    func_0x000107c60bd0(ppuVar3);
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uStack_41);
  }
  func_0x000100d66e74(pcVar5,puVar4);
  return;
}



/* Entry: 103b42e68; end: 103b42e77;  */

void FUN_103b42e68(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 103b42e78; end: 103b42e97;  */

void FUN_103b42e78(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103b42e98; end: 103b42faf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b42e98(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_68 [24];
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar7 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar7 + 7 & 0xfffffffffffffff8));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  func_0x000107c61428(lVar8 + 0x10,auStack_68,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + _DAT_112fedd28) = 0;
    lVar4 = lVar8 + _DAT_112fedd20;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c5ed90();
      func_0x000107c4d880(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar5);
    }
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    FUN_103b4264c(unaff_x20 + uVar7,puVar6,uVar2,uVar3);
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 103b42fb0; end: 103b4307b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b42fb0(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)) +
                   *(long *)(*(long *)(lVar2 + -8) + 0x40));
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + _DAT_112fedd28) = 0;
    if ((bVar1 & 1) == 0) {
      lVar2 = lVar4 + _DAT_112fedd20;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c5ed90(lVar4);
        func_0x000107c4d87c(lVar2);
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103b4307c; end: 103b430c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4307c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112fedd28) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103b430c4; end: 103b43177;  */

void FUN_103b430c4(uint param_1)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(param_1 & 1);
  }
  return;
}



/* Entry: 103b43178; end: 103b431a3;  */

void FUN_103b43178(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103b431a4; end: 103b4320f;  */

void FUN_103b431a4(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(1);
  }
  return;
}



/* Entry: 103b43210; end: 103b43263;  */

void FUN_103b43210(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103b43264; end: 103b43273; -[SCDeepLinkServices deeplinkURLHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feddb8));
  return;
}



/* Entry: 103b43274; end: 103b43283; -[SCDeepLinkServices webBrowserDeepLinkHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feddc0));
  return;
}



/* Entry: 103b43284; end: 103b4334b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43284(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feddb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112feddc0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b4334c; end: 103b433c3; -[SCDeepLinkServices initWithDeeplinkURLHandler:webBrowserDeepLinkHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4334c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112feddb8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112feddc0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103b433c4; end: 103b43423; -[SCDeepLinkServices init] */

void FUN_103b433c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDeepLinkServices.SCDeepLinkServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b433f0);
  (*pcVar1)();
}



/* Entry: 103b43424; end: 103b4345b; -[SCDeepLinkServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b43440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b43444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112feddb8));
  return;
}



/* Entry: 103b4345c; end: 103b4346b; -[_TtC26SCSendObservabilityLogging34SCSendObservabilityLoggingServices logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4345c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feddf0));
  return;
}



/* Entry: 103b4346c; end: 103b434b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4346c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feddf0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b434b8; end: 103b4350f; -[_TtC26SCSendObservabilityLogging34SCSendObservabilityLoggingServices initWithLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b434b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112feddf0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103b43510; end: 103b4356f; -[_TtC26SCSendObservabilityLogging34SCSendObservabilityLoggingServices init] */

void FUN_103b43510(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSendObservabilityLogging.SCSendObservabilityLoggingServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b4353c);
  (*pcVar1)();
}



/* Entry: 103b43570; end: 103b4357f; -[_TtC26SCSendObservabilityLogging34SCSendObservabilityLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112feddf0));
  return;
}



/* Entry: 103b43580; end: 103b4359f; -[_TtC19SCDSAExplainerScope19SCDSAExplainerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43580(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fede20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b435a0; end: 103b435e7; -[_TtC19SCDSAExplainerScope19SCDSAExplainerScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b435a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fede28;
  func_0x000107c61428(param_1 + _DAT_112fede28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b435e8; end: 103b4363f; -[_TtC19SCDSAExplainerScope19SCDSAExplainerScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b435e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fede28;
  func_0x000107c61428(param_1 + _DAT_112fede28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b43640; end: 103b4369b; -[_TtC19SCDSAExplainerScope19SCDSAExplainerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b43640(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fede20));
  param_1 = param_1 + _DAT_112fede28;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b4369c; end: 103b43703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b4369c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010036bc4c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fede38) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b43704; end: 103b4374f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43704(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fede38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b43750; end: 103b43837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b43750(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x00010036b928();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112fede28;
  func_0x000107c61614(lVar4 + _DAT_112fede28,0);
  *(long *)(lVar4 + _DAT_112fede20) = param_1;
  func_0x000107c61428(lVar4 + lVar2,auStack_58,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_1);
  plVar5 = &lStack_68;
  func_0x000107c61154(plVar5,puVar1);
  aplStack_80[0] = plVar5;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  func_0x000107c61574(uStack_70);
  func_0x000107c615e8(aplStack_80[0]);
  return plVar5;
}



/* Entry: 103b43838; end: 103b438ab; -[_TtC19SCDSAExplainerScope27SCDSAExplainerScopeServices buildWithUIContainer:delegate:] */

void FUN_103b43838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103b43750(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b438ac; end: 103b438af;  */

void FUN_103b438ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b438b0; end: 103b438e3;  */

void FUN_103b438b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b438e4; end: 103b43917; -[_TtC19SCDSAExplainerScope27SCDSAExplainerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b438e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fede38));
  return;
}



/* Entry: 103b43918; end: 103b4397f;  */

undefined8 FUN_103b43918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_103b43af8(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 103b43980; end: 103b439df; -[_TtC23SCChatScopePageLauncher31ChatScopePageLauncherEntryPoint init] */

void FUN_103b43980(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatScopePageLauncher.ChatScopePageLauncherEntryPoint",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b439ac);
  (*pcVar1)();
}



/* Entry: 103b439e0; end: 103b43a5b; -[_TtC23SCChatScopePageLauncher31ChatScopePageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b439fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b43a00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b439e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fedea8));
  return;
}



/* Entry: 103b43a5c; end: 103b43a63;  */

undefined8 FUN_103b43a5c(void)

{
  return 0;
}



/* Entry: 103b43a64; end: 103b43af3; -[_TtC23SCChatScopePageLauncher31ChatScopePageLauncherEntryPoint nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43a64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112fedeb0);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103b43af4; end: 103b43af7; -[_TtC23SCChatScopePageLauncher31ChatScopePageLauncherEntryPoint setNativePayloadHandlers:] */

void FUN_103b43af4(void)

{
  return;
}



/* Entry: 103b43af8; end: 103b43bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fedea8) = param_1;
  lVar2 = 0;
  FUN_103b44350();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112fedee0,0);
  func_0x000107c61614(lVar3 + _DAT_112fedee8,0);
  *(undefined8 *)(lVar3 + _DAT_112fedef0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fedef8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  plVar4 = &lStack_60;
  func_0x000107c61154(plVar4,puVar1);
  *(long **)(unaff_x20 + _DAT_112fedeb0) = plVar4;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b43bf4; end: 103b43c13;  */

void FUN_103b43bf4(void)

{
  func_0x000107c61168(&PTR_PTR_11292e268);
  return;
}



/* Entry: 103b43c14; end: 103b43ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43c14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112fedee0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112fedee8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fedef0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fedef8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b43ca4; end: 103b43cbb; -[SCChatScopePageLauncherHandler payloadClass] */

void FUN_103b43ca4(void)

{
  FUN_103b448f0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 103b43cbc; end: 103b43cbf; -[SCChatScopePageLauncherHandler setPayloadClass:] */

void FUN_103b43cbc(void)

{
  return;
}



/* Entry: 103b43cc0; end: 103b43f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43cc0(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [24];
  long alStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100672b50(param_1,&uStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar1 = 0;
    FUN_103b448f0(0);
    plVar2 = alStack_98;
    func_0x000107c6147c(plVar2,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      FUN_103b43f90();
      lVar3 = _DAT_112fedf40;
      func_0x000107c61428(alStack_98[0] + _DAT_112fedf40,alStack_98,0,0);
      lVar3 = alStack_98[0] + lVar3;
      func_0x000107c61618(lVar3);
      func_0x000107c61604(unaff_x20 + _DAT_112fedee8,lVar3);
      func_0x000107c615e8(lVar3);
      lVar3 = *(long *)(alStack_98[0] + _DAT_112fedf38);
      if (lVar3 == 0) {
        uVar5 = *(undefined8 *)(alStack_98[0] + _DAT_112fedf28);
        uVar6 = *(undefined8 *)(alStack_98[0] + _DAT_112fedf30);
        lVar3 = *(long *)(alStack_98[0] + _DAT_112fedf48);
        func_0x000107c61174(uVar5);
        func_0x000107c61174(uVar6);
        func_0x000107c61174(lVar3);
        uVar1 = uVar5;
        func_0x000104520f00(uVar5,uVar6);
      }
      else {
        uVar4 = *(undefined8 *)(alStack_98[0] + _DAT_112fedf28);
        uVar5 = *(undefined8 *)(alStack_98[0] + _DAT_112fedf30);
        uVar6 = *(undefined8 *)(alStack_98[0] + _DAT_112fedf48);
        func_0x000107c61174();
        func_0x000107c61174(uVar4);
        func_0x000107c61174(uVar5);
        func_0x000107c61174(uVar6);
        uVar1 = uVar4;
        func_0x00010452113c(uVar4,uVar5,lVar3);
        func_0x000107c61170(uVar4);
      }
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112fedef8));
      func_0x000107c61604(unaff_x20 + _DAT_112fedee0,alStack_98[0]);
      lVar3 = _DAT_112fedf50;
      func_0x000107c61428(alStack_98[0] + _DAT_112fedf50,auStack_b0,1,0);
      func_0x000107c61604(alStack_98[0] + lVar3);
      if (param_2 == (code *)0x0) {
        func_0x000107c61170(alStack_98[0]);
        func_0x000107c61170(uVar1);
        return;
      }
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      (*param_2)(0,&uStack_80);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(alStack_98[0]);
      goto LAB_103b43f54;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  (*param_2)(0,&uStack_80);
LAB_103b43f54:
  func_0x00010006e7f4(&uStack_80);
  return;
}



/* Entry: 103b43f90; end: 103b4409b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b43f90(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112fedee0;
  lVar1 = unaff_x20 + _DAT_112fedee0;
  func_0x000107c61618();
  func_0x000107c61604(unaff_x20 + lVar2,0);
  func_0x000107c61604(unaff_x20 + _DAT_112fedee8,0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112fedef8);
  lVar2 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c41864(*(undefined8 *)(lVar2 + _DAT_1130835b8));
    func_0x000107c4ffe8(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lVar3);
  }
  lVar2 = _DAT_112fedf58;
  if (lVar1 != 0) {
    func_0x000107c61428(lVar1 + _DAT_112fedf58,auStack_48,0,0);
    lVar2 = lVar1 + lVar2;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c3f938();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103b4409c; end: 103b4416b; -[SCChatScopePageLauncherHandler launchWithPayload:completion:] */

void FUN_103b4409c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1106d6fc0;
    func_0x000107c613fc(&UNK_1106d6fc0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_103b443c0;
  }
  FUN_103b43cc0(&uStack_50,pcVar1,puVar2);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 103b4416c; end: 103b441cb; -[SCChatScopePageLauncherHandler init] */

void FUN_103b4416c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCChatScopePageLauncher.ChatScopePageLauncherHandler",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b44198);
  (*pcVar1)();
}



/* Entry: 103b441cc; end: 103b44247; -[SCChatScopePageLauncherHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b441cc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fedef0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fedef8));
  func_0x000107c61610(param_1 + _DAT_112fedee0);
  param_1 = param_1 + _DAT_112fedee8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b44248; end: 103b4426f; -[SCChatScopePageLauncherHandler dismissChatScope] */

void FUN_103b44248(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b43f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b44270; end: 103b4434f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b44270(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_48 [8];
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112fedef8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (uVar2 != 0) {
    func_0x000100385ee0(0);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    uVar3 = uVar2;
    func_0x000107c60118(uVar2,param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = unaff_x20 + _DAT_112fedee8;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x000107c3f924();
        func_0x000107c615e8(lVar4);
      }
      lVar1 = _DAT_112fedee0;
      lVar4 = unaff_x20 + _DAT_112fedee0;
      func_0x000107c61618();
      func_0x000107c61604(unaff_x20 + lVar1,0);
      func_0x000107c61604(unaff_x20 + _DAT_112fedee8,0);
      lVar5 = *(long *)(unaff_x20 + _DAT_112fedef8);
      lVar1 = lVar5;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c41864(*(undefined8 *)(lVar1 + _DAT_1130835b8));
        func_0x000107c4ffe8(lVar5);
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar5);
      }
      lVar1 = _DAT_112fedf58;
      if (lVar4 != 0) {
        func_0x000107c61428(lVar4 + _DAT_112fedf58,auStack_48,0,0);
        lVar1 = lVar4 + lVar1;
        func_0x000107c61618();
        if (lVar1 != 0) {
          func_0x000107c3f938();
          func_0x000107c615e8(lVar1);
        }
        func_0x000107c61170(lVar4);
      }
      return;
    }
  }
  return;
}



/* Entry: 103b44350; end: 103b4436f;  */

void FUN_103b44350(void)

{
  func_0x000107c61168(&PTR_PTR_11292e330);
  return;
}



/* Entry: 103b44370; end: 103b443bf; -[SCChatScopePageLauncherHandler chatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000103b443a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b443ac) */

void FUN_103b44370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103b44270(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b443c0; end: 103b443c7;  */

void FUN_103b443c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}


