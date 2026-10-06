/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b32970; end: 103b32a1b;  */

void FUN_103b32970(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b32a1c; end: 103b32a2f;  */

undefined1  [16] FUN_103b32a1c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103b32a30; end: 103b32a6f;  */

void FUN_103b32a30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feced8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56738;
  func_0x000107c61520(&UNK_10dc56738,&UNK_1106d5500);
  puRam0000000112feced8 = puVar1;
  return;
}



/* Entry: 103b32a70; end: 103b32a7f;  */

undefined1  [16] FUN_103b32a70(void)

{
  return ZEXT816(0x1106d5500);
}



/* Entry: 103b32a80; end: 103b32aab;  */

void FUN_103b32a80(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103b32b78();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103b32aac; end: 103b32acb;  */

void FUN_103b32aac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b32acc; end: 103b32b77;  */

void FUN_103b32acc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b32b78; end: 103b32b8b;  */

undefined1  [16] FUN_103b32b78(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103b32b8c; end: 103b32bcb;  */

void FUN_103b32b8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56818;
  func_0x000107c61520(&UNK_10dc56818,&UNK_1106d5578);
  puRam0000000112fecee0 = puVar1;
  return;
}



/* Entry: 103b32bcc; end: 103b32bdb;  */

undefined1  [16] FUN_103b32bcc(void)

{
  return ZEXT816(0x1106d5578);
}



/* Entry: 103b32bdc; end: 103b32c33;  */

uint FUN_103b32bdc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_103b32c34(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103b32c34; end: 103b32d6f;  */

uint FUN_103b32c34(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    uVar1 = param_1[2];
    uVar3 = param_2[2];
    lVar4 = *(long *)(uVar1 + 0x10);
    if (lVar4 == *(long *)(uVar3 + 0x10)) {
      if (lVar4 != 0 && uVar1 != uVar3) {
        plVar5 = (long *)(uVar3 + 0x28);
        plVar6 = (long *)(uVar1 + 0x28);
        do {
          uVar1 = plVar6[-1];
          if ((uVar1 != plVar5[-1] || *plVar6 != *plVar5) &&
             (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
            return 0;
          }
          plVar5 = plVar5 + 2;
          plVar6 = plVar6 + 2;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      uVar1 = param_1[3];
      if ((((uVar1 == param_2[3] && param_1[4] == param_2[4]) ||
           (func_0x000107c605b8(), (uVar1 & 1) != 0)) &&
          (FUN_103b3e24c(param_1[5],param_1[6],param_2[5],param_2[6]), (uVar1 & 1) != 0)) &&
         (((FUN_103b3e24c(param_1[7],param_1[8],param_2[7],param_2[8]), (uVar1 & 1) != 0 &&
           ((double)param_1[9] == (double)param_2[9])) &&
          ((double)param_1[10] == (double)param_2[10])))) {
        uVar2 = 0;
        func_0x0001007bbbf8(0);
        uVar1 = param_1[0xb];
        func_0x000107c60118(uVar1,param_2[0xb],uVar2);
        return (uint)uVar1 & 1;
      }
    }
  }
  return 0;
}



/* Entry: 103b32d70; end: 103b32dd3;  */

long FUN_103b32d70(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b32dd4; end: 103b32f1b;  */

undefined8 * FUN_103b32dd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  uVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  uVar3 = param_2[0xb];
  param_1[0xb] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 103b32f1c; end: 103b32f97;  */

undefined8 * FUN_103b32f1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103b32f98; end: 103b33047;  */

int FUN_103b32f98(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103b33048; end: 103b33137;  */

long FUN_103b33048(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b33138; end: 103b3314b;  */

bool FUN_103b33138(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b3314c; end: 103b33223;  */

void FUN_103b3314c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b33224; end: 103b33243;  */

void FUN_103b33224(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b33244; end: 103b33283;  */

void FUN_103b33244(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56920;
  func_0x000107c61520(&UNK_10dc56920,&UNK_1106d57a8);
  puRam0000000112fecee8 = puVar1;
  return;
}



/* Entry: 103b33284; end: 103b33293;  */

undefined1  [16] FUN_103b33284(void)

{
  return ZEXT816(0x1106d57a8);
}



/* Entry: 103b33294; end: 103b334e7;  */

long FUN_103b33294(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b334e8; end: 103b334ff;  */

bool FUN_103b334e8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b33500; end: 103b3353f;  */

void FUN_103b33500(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56a40;
  func_0x000107c61520(&UNK_10dc56a40,&UNK_1106d5958);
  puRam0000000112fecef0 = puVar1;
  return;
}



/* Entry: 103b33540; end: 103b335eb;  */

void FUN_103b33540(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b335ec; end: 103b33623;  */

void FUN_103b335ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103b33624; end: 103b33a03;  */

int FUN_103b33624(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 2)) {
    uVar1 = *(byte *)(param_1 + 2) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103b33a04; end: 103b33a17;  */

bool FUN_103b33a04(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b33a18; end: 103b33aef;  */

void FUN_103b33a18(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b33af0; end: 103b33b33;  */

void FUN_103b33af0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b33b34; end: 103b33b73;  */

void FUN_103b33b34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56b60;
  func_0x000107c61520(&UNK_10dc56b60,&UNK_1106d5b68);
  puRam0000000112fecef8 = puVar1;
  return;
}



/* Entry: 103b33b74; end: 103b33b83;  */

undefined1  [16] FUN_103b33b74(void)

{
  return ZEXT816(0x1106d5b68);
}



/* Entry: 103b33b84; end: 103b345df;  */

long FUN_103b33b84(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b345e0; end: 103b345f3;  */

bool FUN_103b345e0(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b345f4; end: 103b346cb;  */

void FUN_103b345f4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b346cc; end: 103b346eb;  */

void FUN_103b346cc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b346ec; end: 103b3472b;  */

void FUN_103b346ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecf00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56d50;
  func_0x000107c61520(&UNK_10dc56d50,&UNK_1106d5f80);
  puRam0000000112fecf00 = puVar1;
  return;
}



/* Entry: 103b3472c; end: 103b3473b;  */

undefined1  [16] FUN_103b3472c(void)

{
  return ZEXT816(0x1106d5f80);
}



/* Entry: 103b3473c; end: 103b34797;  */

int FUN_103b3473c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103b34798; end: 103b347ab; -[SCMapCustomGLContext size] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b34798(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fecf08);
}



/* Entry: 103b347ac; end: 103b347bf; -[SCMapCustomGLContext centerCoordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b347ac(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fecf10);
}



/* Entry: 103b347c0; end: 103b347cf; -[SCMapCustomGLContext zoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b347c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecf18);
}



/* Entry: 103b347d0; end: 103b347df; -[SCMapCustomGLContext direction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b347d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecf20);
}



/* Entry: 103b347e0; end: 103b347ef; -[SCMapCustomGLContext pitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b347e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecf28);
}



/* Entry: 103b347f0; end: 103b347ff; -[SCMapCustomGLContext fieldOfView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b347f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecf30);
}



/* Entry: 103b34800; end: 103b3480f; -[SCMapCustomGLContext renderCommandEncoder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b34800(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecf38);
}



/* Entry: 103b34810; end: 103b348eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b34810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecf08);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecf10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fecf18) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fecf20) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fecf28) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fecf30) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fecf38) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b348ec; end: 103b3490b;  */

void FUN_103b348ec(void)

{
  func_0x000107c61168(&PTR_PTR_11292af50);
  return;
}



/* Entry: 103b3490c; end: 103b349a3; -[SCMapCustomGLContext initWithSize:centerCoordinate:zoomLevel:direction:pitch:fieldOfView:renderCommandEncoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b3490c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  puVar1 = (undefined8 *)(param_9 + _DAT_112fecf08);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_9 + _DAT_112fecf10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(param_9 + _DAT_112fecf18) = param_5;
  *(undefined8 *)(param_9 + _DAT_112fecf20) = param_6;
  *(undefined8 *)(param_9 + _DAT_112fecf28) = param_7;
  *(undefined8 *)(param_9 + _DAT_112fecf30) = param_8;
  *(undefined8 *)(param_9 + _DAT_112fecf38) = param_11;
  lVar2 = param_9;
  FUN_103b348ec();
  lStack_30 = param_9;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b349a4; end: 103b349ff; -[SCMapCustomGLContext init] */

void FUN_103b349a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapViewServices.MapCustomGLContext",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b349d0);
  (*pcVar1)();
}



/* Entry: 103b34a00; end: 103b34a17;  */

bool FUN_103b34a00(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b34a18; end: 103b34a57;  */

void FUN_103b34a18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecf68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56e50;
  func_0x000107c61520(&UNK_10dc56e50,&UNK_1106d6078);
  puRam0000000112fecf68 = puVar1;
  return;
}



/* Entry: 103b34a58; end: 103b34b03;  */

void FUN_103b34a58(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b34b04; end: 103b34b4f;  */

void FUN_103b34b04(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103b34b50; end: 103b34c27;  */

void FUN_103b34b50(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b34c28; end: 103b34c47;  */

void FUN_103b34c28(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b34c48; end: 103b34c87;  */

void FUN_103b34c48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecf70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56f20;
  func_0x000107c61520(&UNK_10dc56f20,&UNK_1106d60f0);
  puRam0000000112fecf70 = puVar1;
  return;
}



/* Entry: 103b34c88; end: 103b34cab;  */

undefined1  [16] FUN_103b34c88(void)

{
  return ZEXT816(0x1106d60f0);
}



/* Entry: 103b34cac; end: 103b34d83;  */

void FUN_103b34cac(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b34d84; end: 103b34da3;  */

void FUN_103b34d84(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b34da4; end: 103b34de3;  */

void FUN_103b34da4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecf78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56ff0;
  func_0x000107c61520(&UNK_10dc56ff0,&UNK_1106d6168);
  puRam0000000112fecf78 = puVar1;
  return;
}



/* Entry: 103b34de4; end: 103b34df3;  */

undefined1  [16] FUN_103b34de4(void)

{
  return ZEXT816(0x1106d6168);
}



/* Entry: 103b34df4; end: 103b34e03; -[_TtC17SCMapViewServices25SCEmbeddedMapViewServices map] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b34df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fecf80));
  return;
}



/* Entry: 103b34e04; end: 103b34e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b34e04(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fecf80) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b34e50; end: 103b34ea7; -[_TtC17SCMapViewServices25SCEmbeddedMapViewServices initWithMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b34e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fecf80) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103b34ea8; end: 103b34f07; -[_TtC17SCMapViewServices25SCEmbeddedMapViewServices init] */

void FUN_103b34ea8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapViewServices.SCEmbeddedMapViewServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b34ed4);
  (*pcVar1)();
}



/* Entry: 103b34f08; end: 103b34f17; -[_TtC17SCMapViewServices25SCEmbeddedMapViewServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b34f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fecf80));
  return;
}



/* Entry: 103b34f18; end: 103b34f37;  */

void FUN_103b34f18(void)

{
  func_0x000107c61168(&PTR_PTR_11292b040);
  return;
}



/* Entry: 103b34f38; end: 103b34f47; -[_TtC17SCMapViewServices17SCMapViewServices mapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b34f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fecfb0));
  return;
}



/* Entry: 103b34f48; end: 103b34f57; -[_TtC17SCMapViewServices17SCMapViewServices mapLoadTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b34f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fecfb8));
  return;
}



/* Entry: 103b34f58; end: 103b34fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b34f58(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fecfb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fecfb8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b34fbc; end: 103b35033; -[_TtC17SCMapViewServices17SCMapViewServices initWithMapView:mapLoadTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b34fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fecfb0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fecfb8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103b35034; end: 103b35093; -[_TtC17SCMapViewServices17SCMapViewServices init] */

void FUN_103b35034(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMapViewServices.SCMapViewServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b35060);
  (*pcVar1)();
}



/* Entry: 103b35094; end: 103b350cb; -[_TtC17SCMapViewServices17SCMapViewServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b350b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b350b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b35094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fecfb0));
  return;
}



/* Entry: 103b350cc; end: 103b350eb;  */

void FUN_103b350cc(void)

{
  func_0x000107c61168(&PTR_PTR_11292b100);
  return;
}



/* Entry: 103b350ec; end: 103b350ff; -[SCMapCamera centerCoordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b350ec(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fecfe8);
}



/* Entry: 103b35100; end: 103b3510f; -[SCMapCamera heading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b35100(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecff0);
}



/* Entry: 103b35110; end: 103b3511f; -[SCMapCamera pitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b35110(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecff8);
}



/* Entry: 103b35120; end: 103b3512f; -[SCMapCamera altitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b35120(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fed000);
}



/* Entry: 103b35130; end: 103b35147; -[SCMapCamera padding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b35130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fed008);
}



/* Entry: 103b35148; end: 103b352cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b35148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecfe8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fecff0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fecff8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fed000) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed008);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1[2] = param_8;
  puVar1[3] = in_stack_00000000;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b352d0; end: 103b35397; -[SCMapCamera initWithCenterCoordinate:heading:pitch:altitude:padding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b352d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_6;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_6 + _DAT_112fecfe8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_6 + _DAT_112fecff0) = param_3;
  *(undefined8 *)(param_6 + _DAT_112fecff8) = param_4;
  *(undefined8 *)(param_6 + _DAT_112fed000) = param_5;
  puVar1 = (undefined8 *)(param_6 + _DAT_112fed008);
  puVar1[1] = in_stack_00000008;
  *puVar1 = in_stack_00000000;
  puVar1[2] = in_stack_00000010;
  puVar1[3] = in_stack_00000018;
  lStack_70 = param_6;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b35398; end: 103b3542b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b35398(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecfe8);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112fecff0) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112fecff8) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112fed000) = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fed008);
  uVar2 = param_1[5];
  uVar4 = param_1[8];
  uVar3 = param_1[7];
  puVar1[1] = param_1[6];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3542c; end: 103b3542f; -[SCMapCamera copyWithZone:] */

void FUN_103b3542c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b35430; end: 103b3544b; -[SCMapCamera description] */

void FUN_103b35430(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b3544c; end: 103b354e7; -[SCMapCamera init] */

void FUN_103b3544c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapViewServices/SCMapCameraWrapper.swift",0x2a,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b35494);
  (*pcVar1)();
}



/* Entry: 103b354e8; end: 103b354f7; -[SCMapCameraTransition duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b354e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fed038);
}



/* Entry: 103b354f8; end: 103b3550f; -[SCMapCameraTransition style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b354f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fed040);
}



/* Entry: 103b35510; end: 103b3563b; -[SCMapCameraTransition initWithDuration:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b35510(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined8 *)(param_2 + _DAT_112fed038) = param_1;
  *(undefined8 *)(param_2 + _DAT_112fed040) = param_4;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b3563c; end: 103b3563f; -[SCMapCameraTransition copyWithZone:] */

void FUN_103b3563c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b35640; end: 103b3565b; -[SCMapCameraTransition description] */

void FUN_103b35640(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b3565c; end: 103b356f7; -[SCMapCameraTransition init] */

void FUN_103b3565c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapViewServices/SCMapCameraTransitionWrapper.swift",0x34,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b356a4);
  (*pcVar1)();
}



/* Entry: 103b356f8; end: 103b356fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b356f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fed038) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fed040) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b356fc; end: 103b357cf;  */

void FUN_103b356fc(void)

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



/* Entry: 103b357d0; end: 103b357ef;  */

void FUN_103b357d0(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103b357f0; end: 103b35813; -[SCMapViewportChange description] */

void FUN_103b357f0(void)

{
  func_0x000107c61174();
  FUN_103b35be0();
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b35814; end: 103b3585b; -[SCMapViewportChange init] */

void FUN_103b35814(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCMapViewServices/SCMapViewportChangeWrapper.swift",0x32,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3585c);
  (*pcVar1)();
}



/* Entry: 103b3585c; end: 103b3585f; -[SCMapViewportChange copyWithZone:] */

void FUN_103b3585c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b35860; end: 103b35877; +[SCMapViewportChange mapViewportRegionWillChangeWithAnimated:] */

void FUN_103b35860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000103b35d5c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


